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

#include <tencentcloud/vod/v20180717/model/FrameTagConfigureInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

FrameTagConfigureInfo::FrameTagConfigureInfo() :
    m_switchHasBeenSet(false),
    m_screenshotIntervalHasBeenSet(false)
{
}

CoreInternalOutcome FrameTagConfigureInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Error("response `FrameTagConfigureInfo.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("ScreenshotInterval") && !value["ScreenshotInterval"].IsNull())
    {
        if (!value["ScreenshotInterval"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `FrameTagConfigureInfo.ScreenshotInterval` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_screenshotInterval = value["ScreenshotInterval"].GetDouble();
        m_screenshotIntervalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FrameTagConfigureInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_screenshotIntervalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ScreenshotInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_screenshotInterval, allocator);
    }

}


string FrameTagConfigureInfo::GetSwitch() const
{
    return m_switch;
}

void FrameTagConfigureInfo::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool FrameTagConfigureInfo::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

double FrameTagConfigureInfo::GetScreenshotInterval() const
{
    return m_screenshotInterval;
}

void FrameTagConfigureInfo::SetScreenshotInterval(const double& _screenshotInterval)
{
    m_screenshotInterval = _screenshotInterval;
    m_screenshotIntervalHasBeenSet = true;
}

bool FrameTagConfigureInfo::ScreenshotIntervalHasBeenSet() const
{
    return m_screenshotIntervalHasBeenSet;
}
