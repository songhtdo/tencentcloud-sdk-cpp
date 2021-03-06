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

#include <tencentcloud/live/v20180801/model/DescribeLiveStreamOnlineInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

DescribeLiveStreamOnlineInfoRequest::DescribeLiveStreamOnlineInfoRequest() :
    m_pageNumHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_streamNameHasBeenSet(false)
{
}

string DescribeLiveStreamOnlineInfoRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pageNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNum, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_streamNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_streamName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeLiveStreamOnlineInfoRequest::GetPageNum() const
{
    return m_pageNum;
}

void DescribeLiveStreamOnlineInfoRequest::SetPageNum(const uint64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool DescribeLiveStreamOnlineInfoRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

uint64_t DescribeLiveStreamOnlineInfoRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeLiveStreamOnlineInfoRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeLiveStreamOnlineInfoRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeLiveStreamOnlineInfoRequest::GetStatus() const
{
    return m_status;
}

void DescribeLiveStreamOnlineInfoRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeLiveStreamOnlineInfoRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeLiveStreamOnlineInfoRequest::GetStreamName() const
{
    return m_streamName;
}

void DescribeLiveStreamOnlineInfoRequest::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool DescribeLiveStreamOnlineInfoRequest::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}


