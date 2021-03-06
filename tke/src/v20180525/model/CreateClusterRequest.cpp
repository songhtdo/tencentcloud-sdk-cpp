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

#include <tencentcloud/tke/v20180525/model/CreateClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace rapidjson;
using namespace std;

CreateClusterRequest::CreateClusterRequest() :
    m_clusterCIDRSettingsHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_runInstancesForNodeHasBeenSet(false),
    m_clusterBasicSettingsHasBeenSet(false),
    m_clusterAdvancedSettingsHasBeenSet(false),
    m_instanceAdvancedSettingsHasBeenSet(false),
    m_existedInstancesForNodeHasBeenSet(false)
{
}

string CreateClusterRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterCIDRSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterCIDRSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_clusterCIDRSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_runInstancesForNodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RunInstancesForNode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_runInstancesForNode.begin(); itr != m_runInstancesForNode.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_clusterBasicSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterBasicSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_clusterBasicSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clusterAdvancedSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterAdvancedSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_clusterAdvancedSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceAdvancedSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceAdvancedSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_instanceAdvancedSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_existedInstancesForNodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExistedInstancesForNode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_existedInstancesForNode.begin(); itr != m_existedInstancesForNode.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


ClusterCIDRSettings CreateClusterRequest::GetClusterCIDRSettings() const
{
    return m_clusterCIDRSettings;
}

void CreateClusterRequest::SetClusterCIDRSettings(const ClusterCIDRSettings& _clusterCIDRSettings)
{
    m_clusterCIDRSettings = _clusterCIDRSettings;
    m_clusterCIDRSettingsHasBeenSet = true;
}

bool CreateClusterRequest::ClusterCIDRSettingsHasBeenSet() const
{
    return m_clusterCIDRSettingsHasBeenSet;
}

string CreateClusterRequest::GetClusterType() const
{
    return m_clusterType;
}

void CreateClusterRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool CreateClusterRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

vector<RunInstancesForNode> CreateClusterRequest::GetRunInstancesForNode() const
{
    return m_runInstancesForNode;
}

void CreateClusterRequest::SetRunInstancesForNode(const vector<RunInstancesForNode>& _runInstancesForNode)
{
    m_runInstancesForNode = _runInstancesForNode;
    m_runInstancesForNodeHasBeenSet = true;
}

bool CreateClusterRequest::RunInstancesForNodeHasBeenSet() const
{
    return m_runInstancesForNodeHasBeenSet;
}

ClusterBasicSettings CreateClusterRequest::GetClusterBasicSettings() const
{
    return m_clusterBasicSettings;
}

void CreateClusterRequest::SetClusterBasicSettings(const ClusterBasicSettings& _clusterBasicSettings)
{
    m_clusterBasicSettings = _clusterBasicSettings;
    m_clusterBasicSettingsHasBeenSet = true;
}

bool CreateClusterRequest::ClusterBasicSettingsHasBeenSet() const
{
    return m_clusterBasicSettingsHasBeenSet;
}

ClusterAdvancedSettings CreateClusterRequest::GetClusterAdvancedSettings() const
{
    return m_clusterAdvancedSettings;
}

void CreateClusterRequest::SetClusterAdvancedSettings(const ClusterAdvancedSettings& _clusterAdvancedSettings)
{
    m_clusterAdvancedSettings = _clusterAdvancedSettings;
    m_clusterAdvancedSettingsHasBeenSet = true;
}

bool CreateClusterRequest::ClusterAdvancedSettingsHasBeenSet() const
{
    return m_clusterAdvancedSettingsHasBeenSet;
}

InstanceAdvancedSettings CreateClusterRequest::GetInstanceAdvancedSettings() const
{
    return m_instanceAdvancedSettings;
}

void CreateClusterRequest::SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings)
{
    m_instanceAdvancedSettings = _instanceAdvancedSettings;
    m_instanceAdvancedSettingsHasBeenSet = true;
}

bool CreateClusterRequest::InstanceAdvancedSettingsHasBeenSet() const
{
    return m_instanceAdvancedSettingsHasBeenSet;
}

vector<ExistedInstancesForNode> CreateClusterRequest::GetExistedInstancesForNode() const
{
    return m_existedInstancesForNode;
}

void CreateClusterRequest::SetExistedInstancesForNode(const vector<ExistedInstancesForNode>& _existedInstancesForNode)
{
    m_existedInstancesForNode = _existedInstancesForNode;
    m_existedInstancesForNodeHasBeenSet = true;
}

bool CreateClusterRequest::ExistedInstancesForNodeHasBeenSet() const
{
    return m_existedInstancesForNodeHasBeenSet;
}


