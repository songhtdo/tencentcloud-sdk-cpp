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

#include <tencentcloud/vpc/v20170312/model/CreateSubnetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

CreateSubnetRequest::CreateSubnetRequest() :
    m_vpcIdHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_zoneHasBeenSet(false)
{
}

string CreateSubnetRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSubnetRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateSubnetRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateSubnetRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateSubnetRequest::GetSubnetName() const
{
    return m_subnetName;
}

void CreateSubnetRequest::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool CreateSubnetRequest::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string CreateSubnetRequest::GetCidrBlock() const
{
    return m_cidrBlock;
}

void CreateSubnetRequest::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool CreateSubnetRequest::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

string CreateSubnetRequest::GetZone() const
{
    return m_zone;
}

void CreateSubnetRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateSubnetRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

