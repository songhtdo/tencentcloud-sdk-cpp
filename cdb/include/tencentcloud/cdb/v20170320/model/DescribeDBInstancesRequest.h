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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeDBInstances请求参数结构体
                */
                class DescribeDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeDBInstancesRequest();
                    ~DescribeDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID，可使用[查询项目列表](https://cloud.tencent.com/document/product/378/4400)接口查询项目ID
                     * @return ProjectId 项目ID，可使用[查询项目列表](https://cloud.tencent.com/document/product/378/4400)接口查询项目ID
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID，可使用[查询项目列表](https://cloud.tencent.com/document/product/378/4400)接口查询项目ID
                     * @param ProjectId 项目ID，可使用[查询项目列表](https://cloud.tencent.com/document/product/378/4400)接口查询项目ID
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取实例类型，可取值：1-主实例，2-灾备实例，3-只读实例
                     * @return InstanceTypes 实例类型，可取值：1-主实例，2-灾备实例，3-只读实例
                     */
                    std::vector<uint64_t> GetInstanceTypes() const;

                    /**
                     * 设置实例类型，可取值：1-主实例，2-灾备实例，3-只读实例
                     * @param InstanceTypes 实例类型，可取值：1-主实例，2-灾备实例，3-只读实例
                     */
                    void SetInstanceTypes(const std::vector<uint64_t>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     */
                    bool InstanceTypesHasBeenSet() const;

                    /**
                     * 获取实例的内网IP地址
                     * @return Vips 实例的内网IP地址
                     */
                    std::vector<std::string> GetVips() const;

                    /**
                     * 设置实例的内网IP地址
                     * @param Vips 实例的内网IP地址
                     */
                    void SetVips(const std::vector<std::string>& _vips);

                    /**
                     * 判断参数 Vips 是否已赋值
                     * @return Vips 是否已赋值
                     */
                    bool VipsHasBeenSet() const;

                    /**
                     * 获取实例状态，可取值：0-创建中，1-运行中，4-隔离中，5-已隔离
                     * @return Status 实例状态，可取值：0-创建中，1-运行中，4-隔离中，5-已隔离
                     */
                    std::vector<uint64_t> GetStatus() const;

                    /**
                     * 设置实例状态，可取值：0-创建中，1-运行中，4-隔离中，5-已隔离
                     * @param Status 实例状态，可取值：0-创建中，1-运行中，4-隔离中，5-已隔离
                     */
                    void SetStatus(const std::vector<uint64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取偏移量，默认值为0
                     * @return Offset 偏移量，默认值为0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认值为0
                     * @param Offset 偏移量，默认值为0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取单次请求返回的数量，默认值为20，最大值为2000
                     * @return Limit 单次请求返回的数量，默认值为20，最大值为2000
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置单次请求返回的数量，默认值为20，最大值为2000
                     * @param Limit 单次请求返回的数量，默认值为20，最大值为2000
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取安全组ID
                     * @return SecurityGroupId 安全组ID
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组ID
                     * @param SecurityGroupId 安全组ID
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取付费类型，可取值：0-包年包月，1-小时计费
                     * @return PayTypes 付费类型，可取值：0-包年包月，1-小时计费
                     */
                    std::vector<uint64_t> GetPayTypes() const;

                    /**
                     * 设置付费类型，可取值：0-包年包月，1-小时计费
                     * @param PayTypes 付费类型，可取值：0-包年包月，1-小时计费
                     */
                    void SetPayTypes(const std::vector<uint64_t>& _payTypes);

                    /**
                     * 判断参数 PayTypes 是否已赋值
                     * @return PayTypes 是否已赋值
                     */
                    bool PayTypesHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceNames 实例名称
                     */
                    std::vector<std::string> GetInstanceNames() const;

                    /**
                     * 设置实例名称
                     * @param InstanceNames 实例名称
                     */
                    void SetInstanceNames(const std::vector<std::string>& _instanceNames);

                    /**
                     * 判断参数 InstanceNames 是否已赋值
                     * @return InstanceNames 是否已赋值
                     */
                    bool InstanceNamesHasBeenSet() const;

                    /**
                     * 获取实例任务状态，可能取值：<br>0-没有任务<br>1-升级中<br>2-数据导入中<br>3-开放Slave中<br>4-外网访问开通中<br>5-批量操作执行中<br>6-回档中<br>7-外网访问关闭中<br>8-密码修改中<br>9-实例名修改中<br>10-重启中<br>12-自建迁移中<br>13-删除库表中<br>14-灾备实例创建同步中<br>15-升级待切换<br>16-升级切换中<br>17-升级切换完成
                     * @return TaskStatus 实例任务状态，可能取值：<br>0-没有任务<br>1-升级中<br>2-数据导入中<br>3-开放Slave中<br>4-外网访问开通中<br>5-批量操作执行中<br>6-回档中<br>7-外网访问关闭中<br>8-密码修改中<br>9-实例名修改中<br>10-重启中<br>12-自建迁移中<br>13-删除库表中<br>14-灾备实例创建同步中<br>15-升级待切换<br>16-升级切换中<br>17-升级切换完成
                     */
                    std::vector<uint64_t> GetTaskStatus() const;

                    /**
                     * 设置实例任务状态，可能取值：<br>0-没有任务<br>1-升级中<br>2-数据导入中<br>3-开放Slave中<br>4-外网访问开通中<br>5-批量操作执行中<br>6-回档中<br>7-外网访问关闭中<br>8-密码修改中<br>9-实例名修改中<br>10-重启中<br>12-自建迁移中<br>13-删除库表中<br>14-灾备实例创建同步中<br>15-升级待切换<br>16-升级切换中<br>17-升级切换完成
                     * @param TaskStatus 实例任务状态，可能取值：<br>0-没有任务<br>1-升级中<br>2-数据导入中<br>3-开放Slave中<br>4-外网访问开通中<br>5-批量操作执行中<br>6-回档中<br>7-外网访问关闭中<br>8-密码修改中<br>9-实例名修改中<br>10-重启中<br>12-自建迁移中<br>13-删除库表中<br>14-灾备实例创建同步中<br>15-升级待切换<br>16-升级切换中<br>17-升级切换完成
                     */
                    void SetTaskStatus(const std::vector<uint64_t>& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取实例数据库引擎版本，可能取值：5.1、5.5、5.6和5.7
                     * @return EngineVersions 实例数据库引擎版本，可能取值：5.1、5.5、5.6和5.7
                     */
                    std::vector<std::string> GetEngineVersions() const;

                    /**
                     * 设置实例数据库引擎版本，可能取值：5.1、5.5、5.6和5.7
                     * @param EngineVersions 实例数据库引擎版本，可能取值：5.1、5.5、5.6和5.7
                     */
                    void SetEngineVersions(const std::vector<std::string>& _engineVersions);

                    /**
                     * 判断参数 EngineVersions 是否已赋值
                     * @return EngineVersions 是否已赋值
                     */
                    bool EngineVersionsHasBeenSet() const;

                    /**
                     * 获取私有网络的ID
                     * @return VpcIds 私有网络的ID
                     */
                    std::vector<uint64_t> GetVpcIds() const;

                    /**
                     * 设置私有网络的ID
                     * @param VpcIds 私有网络的ID
                     */
                    void SetVpcIds(const std::vector<uint64_t>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取可用区的ID
                     * @return ZoneIds 可用区的ID
                     */
                    std::vector<uint64_t> GetZoneIds() const;

                    /**
                     * 设置可用区的ID
                     * @param ZoneIds 可用区的ID
                     */
                    void SetZoneIds(const std::vector<uint64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取子网ID
                     * @return SubnetIds 子网ID
                     */
                    std::vector<uint64_t> GetSubnetIds() const;

                    /**
                     * 设置子网ID
                     * @param SubnetIds 子网ID
                     */
                    void SetSubnetIds(const std::vector<uint64_t>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取是否锁定标记
                     * @return CdbErrors 是否锁定标记
                     */
                    std::vector<int64_t> GetCdbErrors() const;

                    /**
                     * 设置是否锁定标记
                     * @param CdbErrors 是否锁定标记
                     */
                    void SetCdbErrors(const std::vector<int64_t>& _cdbErrors);

                    /**
                     * 判断参数 CdbErrors 是否已赋值
                     * @return CdbErrors 是否已赋值
                     */
                    bool CdbErrorsHasBeenSet() const;

                    /**
                     * 获取返回结果集排序的字段，目前支持："InstanceId", "InstanceName", "CreateTime", "DeadlineTime"
                     * @return OrderBy 返回结果集排序的字段，目前支持："InstanceId", "InstanceName", "CreateTime", "DeadlineTime"
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置返回结果集排序的字段，目前支持："InstanceId", "InstanceName", "CreateTime", "DeadlineTime"
                     * @param OrderBy 返回结果集排序的字段，目前支持："InstanceId", "InstanceName", "CreateTime", "DeadlineTime"
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取返回结果集排序方式，目前支持："ASC"或者"DESC"
                     * @return OrderDirection 返回结果集排序方式，目前支持："ASC"或者"DESC"
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置返回结果集排序方式，目前支持："ASC"或者"DESC"
                     * @param OrderDirection 返回结果集排序方式，目前支持："ASC"或者"DESC"
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     */
                    bool OrderDirectionHasBeenSet() const;

                    /**
                     * 获取是否包含安全组详细信息，可取值：0-不包含，1-包含
                     * @return WithSecurityGroup 是否包含安全组详细信息，可取值：0-不包含，1-包含
                     */
                    int64_t GetWithSecurityGroup() const;

                    /**
                     * 设置是否包含安全组详细信息，可取值：0-不包含，1-包含
                     * @param WithSecurityGroup 是否包含安全组详细信息，可取值：0-不包含，1-包含
                     */
                    void SetWithSecurityGroup(const int64_t& _withSecurityGroup);

                    /**
                     * 判断参数 WithSecurityGroup 是否已赋值
                     * @return WithSecurityGroup 是否已赋值
                     */
                    bool WithSecurityGroupHasBeenSet() const;

                    /**
                     * 获取是否包含独享集群详细信息，可取值：0-不包含，1-包含
                     * @return WithExCluster 是否包含独享集群详细信息，可取值：0-不包含，1-包含
                     */
                    int64_t GetWithExCluster() const;

                    /**
                     * 设置是否包含独享集群详细信息，可取值：0-不包含，1-包含
                     * @param WithExCluster 是否包含独享集群详细信息，可取值：0-不包含，1-包含
                     */
                    void SetWithExCluster(const int64_t& _withExCluster);

                    /**
                     * 判断参数 WithExCluster 是否已赋值
                     * @return WithExCluster 是否已赋值
                     */
                    bool WithExClusterHasBeenSet() const;

                    /**
                     * 获取独享集群ID
                     * @return ExClusterId 独享集群ID
                     */
                    std::string GetExClusterId() const;

                    /**
                     * 设置独享集群ID
                     * @param ExClusterId 独享集群ID
                     */
                    void SetExClusterId(const std::string& _exClusterId);

                    /**
                     * 判断参数 ExClusterId 是否已赋值
                     * @return ExClusterId 是否已赋值
                     */
                    bool ExClusterIdHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceIds 实例ID
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例ID
                     * @param InstanceIds 实例ID
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取初始化标记，可取值：0-未初始化，1-初始化
                     * @return InitFlag 初始化标记，可取值：0-未初始化，1-初始化
                     */
                    int64_t GetInitFlag() const;

                    /**
                     * 设置初始化标记，可取值：0-未初始化，1-初始化
                     * @param InitFlag 初始化标记，可取值：0-未初始化，1-初始化
                     */
                    void SetInitFlag(const int64_t& _initFlag);

                    /**
                     * 判断参数 InitFlag 是否已赋值
                     * @return InitFlag 是否已赋值
                     */
                    bool InitFlagHasBeenSet() const;

                    /**
                     * 获取是否包含灾备实例，可取值：0-不包含，1-包含
                     * @return WithDr 是否包含灾备实例，可取值：0-不包含，1-包含
                     */
                    int64_t GetWithDr() const;

                    /**
                     * 设置是否包含灾备实例，可取值：0-不包含，1-包含
                     * @param WithDr 是否包含灾备实例，可取值：0-不包含，1-包含
                     */
                    void SetWithDr(const int64_t& _withDr);

                    /**
                     * 判断参数 WithDr 是否已赋值
                     * @return WithDr 是否已赋值
                     */
                    bool WithDrHasBeenSet() const;

                    /**
                     * 获取是否包含只读实例，可取值：0-不包含，1-包含
                     * @return WithRo 是否包含只读实例，可取值：0-不包含，1-包含
                     */
                    int64_t GetWithRo() const;

                    /**
                     * 设置是否包含只读实例，可取值：0-不包含，1-包含
                     * @param WithRo 是否包含只读实例，可取值：0-不包含，1-包含
                     */
                    void SetWithRo(const int64_t& _withRo);

                    /**
                     * 判断参数 WithRo 是否已赋值
                     * @return WithRo 是否已赋值
                     */
                    bool WithRoHasBeenSet() const;

                    /**
                     * 获取是否包含主实例，可取值：0-不包含，1-包含
                     * @return WithMaster 是否包含主实例，可取值：0-不包含，1-包含
                     */
                    int64_t GetWithMaster() const;

                    /**
                     * 设置是否包含主实例，可取值：0-不包含，1-包含
                     * @param WithMaster 是否包含主实例，可取值：0-不包含，1-包含
                     */
                    void SetWithMaster(const int64_t& _withMaster);

                    /**
                     * 判断参数 WithMaster 是否已赋值
                     * @return WithMaster 是否已赋值
                     */
                    bool WithMasterHasBeenSet() const;

                private:

                    /**
                     * 项目ID，可使用[查询项目列表](https://cloud.tencent.com/document/product/378/4400)接口查询项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例类型，可取值：1-主实例，2-灾备实例，3-只读实例
                     */
                    std::vector<uint64_t> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * 实例的内网IP地址
                     */
                    std::vector<std::string> m_vips;
                    bool m_vipsHasBeenSet;

                    /**
                     * 实例状态，可取值：0-创建中，1-运行中，4-隔离中，5-已隔离
                     */
                    std::vector<uint64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 偏移量，默认值为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单次请求返回的数量，默认值为20，最大值为2000
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 安全组ID
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * 付费类型，可取值：0-包年包月，1-小时计费
                     */
                    std::vector<uint64_t> m_payTypes;
                    bool m_payTypesHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::vector<std::string> m_instanceNames;
                    bool m_instanceNamesHasBeenSet;

                    /**
                     * 实例任务状态，可能取值：<br>0-没有任务<br>1-升级中<br>2-数据导入中<br>3-开放Slave中<br>4-外网访问开通中<br>5-批量操作执行中<br>6-回档中<br>7-外网访问关闭中<br>8-密码修改中<br>9-实例名修改中<br>10-重启中<br>12-自建迁移中<br>13-删除库表中<br>14-灾备实例创建同步中<br>15-升级待切换<br>16-升级切换中<br>17-升级切换完成
                     */
                    std::vector<uint64_t> m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 实例数据库引擎版本，可能取值：5.1、5.5、5.6和5.7
                     */
                    std::vector<std::string> m_engineVersions;
                    bool m_engineVersionsHasBeenSet;

                    /**
                     * 私有网络的ID
                     */
                    std::vector<uint64_t> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * 可用区的ID
                     */
                    std::vector<uint64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::vector<uint64_t> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 是否锁定标记
                     */
                    std::vector<int64_t> m_cdbErrors;
                    bool m_cdbErrorsHasBeenSet;

                    /**
                     * 返回结果集排序的字段，目前支持："InstanceId", "InstanceName", "CreateTime", "DeadlineTime"
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 返回结果集排序方式，目前支持："ASC"或者"DESC"
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * 是否包含安全组详细信息，可取值：0-不包含，1-包含
                     */
                    int64_t m_withSecurityGroup;
                    bool m_withSecurityGroupHasBeenSet;

                    /**
                     * 是否包含独享集群详细信息，可取值：0-不包含，1-包含
                     */
                    int64_t m_withExCluster;
                    bool m_withExClusterHasBeenSet;

                    /**
                     * 独享集群ID
                     */
                    std::string m_exClusterId;
                    bool m_exClusterIdHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 初始化标记，可取值：0-未初始化，1-初始化
                     */
                    int64_t m_initFlag;
                    bool m_initFlagHasBeenSet;

                    /**
                     * 是否包含灾备实例，可取值：0-不包含，1-包含
                     */
                    int64_t m_withDr;
                    bool m_withDrHasBeenSet;

                    /**
                     * 是否包含只读实例，可取值：0-不包含，1-包含
                     */
                    int64_t m_withRo;
                    bool m_withRoHasBeenSet;

                    /**
                     * 是否包含主实例，可取值：0-不包含，1-包含
                     */
                    int64_t m_withMaster;
                    bool m_withMasterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCESREQUEST_H_