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

#include <tencentcloud/vod/v20180717/model/LiveRealTimeClipRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

LiveRealTimeClipRequest::LiveRealTimeClipRequest() :
    m_streamIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_isPersistenceHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_procedureHasBeenSet(false),
    m_metaDataRequiredHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

string LiveRealTimeClipRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_streamIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StreamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_streamId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isPersistenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsPersistence";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPersistence, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_procedureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Procedure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_procedure.c_str(), allocator).Move(), allocator);
    }

    if (m_metaDataRequiredHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MetaDataRequired";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_metaDataRequired, allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string LiveRealTimeClipRequest::GetStreamId() const
{
    return m_streamId;
}

void LiveRealTimeClipRequest::SetStreamId(const string& _streamId)
{
    m_streamId = _streamId;
    m_streamIdHasBeenSet = true;
}

bool LiveRealTimeClipRequest::StreamIdHasBeenSet() const
{
    return m_streamIdHasBeenSet;
}

string LiveRealTimeClipRequest::GetStartTime() const
{
    return m_startTime;
}

void LiveRealTimeClipRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool LiveRealTimeClipRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string LiveRealTimeClipRequest::GetEndTime() const
{
    return m_endTime;
}

void LiveRealTimeClipRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool LiveRealTimeClipRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t LiveRealTimeClipRequest::GetIsPersistence() const
{
    return m_isPersistence;
}

void LiveRealTimeClipRequest::SetIsPersistence(const int64_t& _isPersistence)
{
    m_isPersistence = _isPersistence;
    m_isPersistenceHasBeenSet = true;
}

bool LiveRealTimeClipRequest::IsPersistenceHasBeenSet() const
{
    return m_isPersistenceHasBeenSet;
}

string LiveRealTimeClipRequest::GetExpireTime() const
{
    return m_expireTime;
}

void LiveRealTimeClipRequest::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool LiveRealTimeClipRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string LiveRealTimeClipRequest::GetProcedure() const
{
    return m_procedure;
}

void LiveRealTimeClipRequest::SetProcedure(const string& _procedure)
{
    m_procedure = _procedure;
    m_procedureHasBeenSet = true;
}

bool LiveRealTimeClipRequest::ProcedureHasBeenSet() const
{
    return m_procedureHasBeenSet;
}

uint64_t LiveRealTimeClipRequest::GetMetaDataRequired() const
{
    return m_metaDataRequired;
}

void LiveRealTimeClipRequest::SetMetaDataRequired(const uint64_t& _metaDataRequired)
{
    m_metaDataRequired = _metaDataRequired;
    m_metaDataRequiredHasBeenSet = true;
}

bool LiveRealTimeClipRequest::MetaDataRequiredHasBeenSet() const
{
    return m_metaDataRequiredHasBeenSet;
}

uint64_t LiveRealTimeClipRequest::GetSubAppId() const
{
    return m_subAppId;
}

void LiveRealTimeClipRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool LiveRealTimeClipRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}


