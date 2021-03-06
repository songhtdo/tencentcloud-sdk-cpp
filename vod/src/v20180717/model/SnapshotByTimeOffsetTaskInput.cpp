/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/vod/v20180717/model/SnapshotByTimeOffsetTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

SnapshotByTimeOffsetTaskInput::SnapshotByTimeOffsetTaskInput() :
    m_definitionHasBeenSet(false),
    m_timeOffsetSetHasBeenSet(false),
    m_watermarkSetHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotByTimeOffsetTaskInput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SnapshotByTimeOffsetTaskInput.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("TimeOffsetSet") && !value["TimeOffsetSet"].IsNull())
    {
        if (!value["TimeOffsetSet"].IsArray())
            return CoreInternalOutcome(Error("response `SnapshotByTimeOffsetTaskInput.TimeOffsetSet` is not array type"));

        const Value &tmpValue = value["TimeOffsetSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_timeOffsetSet.push_back((*itr).GetDouble());
        }
        m_timeOffsetSetHasBeenSet = true;
    }

    if (value.HasMember("WatermarkSet") && !value["WatermarkSet"].IsNull())
    {
        if (!value["WatermarkSet"].IsArray())
            return CoreInternalOutcome(Error("response `SnapshotByTimeOffsetTaskInput.WatermarkSet` is not array type"));

        const Value &tmpValue = value["WatermarkSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WatermarkInput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_watermarkSet.push_back(item);
        }
        m_watermarkSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotByTimeOffsetTaskInput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_timeOffsetSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeOffsetSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_timeOffsetSet.begin(); itr != m_timeOffsetSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetDouble(*itr), allocator);
        }
    }

    if (m_watermarkSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WatermarkSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_watermarkSet.begin(); itr != m_watermarkSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t SnapshotByTimeOffsetTaskInput::GetDefinition() const
{
    return m_definition;
}

void SnapshotByTimeOffsetTaskInput::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool SnapshotByTimeOffsetTaskInput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

vector<double> SnapshotByTimeOffsetTaskInput::GetTimeOffsetSet() const
{
    return m_timeOffsetSet;
}

void SnapshotByTimeOffsetTaskInput::SetTimeOffsetSet(const vector<double>& _timeOffsetSet)
{
    m_timeOffsetSet = _timeOffsetSet;
    m_timeOffsetSetHasBeenSet = true;
}

bool SnapshotByTimeOffsetTaskInput::TimeOffsetSetHasBeenSet() const
{
    return m_timeOffsetSetHasBeenSet;
}

vector<WatermarkInput> SnapshotByTimeOffsetTaskInput::GetWatermarkSet() const
{
    return m_watermarkSet;
}

void SnapshotByTimeOffsetTaskInput::SetWatermarkSet(const vector<WatermarkInput>& _watermarkSet)
{
    m_watermarkSet = _watermarkSet;
    m_watermarkSetHasBeenSet = true;
}

bool SnapshotByTimeOffsetTaskInput::WatermarkSetHasBeenSet() const
{
    return m_watermarkSetHasBeenSet;
}

