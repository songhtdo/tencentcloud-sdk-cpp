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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEMIGRATIONREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEMIGRATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrateSource.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrateTarget.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrateDB.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * CreateMigration请求参数结构体
                */
                class CreateMigrationRequest : public AbstractModel
                {
                public:
                    CreateMigrationRequest();
                    ~CreateMigrationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取迁移任务的名称
                     * @return MigrateName 迁移任务的名称
                     */
                    std::string GetMigrateName() const;

                    /**
                     * 设置迁移任务的名称
                     * @param MigrateName 迁移任务的名称
                     */
                    void SetMigrateName(const std::string& _migrateName);

                    /**
                     * 判断参数 MigrateName 是否已赋值
                     * @return MigrateName 是否已赋值
                     */
                    bool MigrateNameHasBeenSet() const;

                    /**
                     * 获取迁移类型（1:结构迁移 2:数据迁移 3:增量同步）
                     * @return MigrateType 迁移类型（1:结构迁移 2:数据迁移 3:增量同步）
                     */
                    uint64_t GetMigrateType() const;

                    /**
                     * 设置迁移类型（1:结构迁移 2:数据迁移 3:增量同步）
                     * @param MigrateType 迁移类型（1:结构迁移 2:数据迁移 3:增量同步）
                     */
                    void SetMigrateType(const uint64_t& _migrateType);

                    /**
                     * 判断参数 MigrateType 是否已赋值
                     * @return MigrateType 是否已赋值
                     */
                    bool MigrateTypeHasBeenSet() const;

                    /**
                     * 获取迁移源的类型 1:CDB for SQLServer 2:云服务器自建SQLServer数据库 4:SQLServer备份还原 5:SQLServer备份还原（COS方式）
                     * @return SourceType 迁移源的类型 1:CDB for SQLServer 2:云服务器自建SQLServer数据库 4:SQLServer备份还原 5:SQLServer备份还原（COS方式）
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置迁移源的类型 1:CDB for SQLServer 2:云服务器自建SQLServer数据库 4:SQLServer备份还原 5:SQLServer备份还原（COS方式）
                     * @param SourceType 迁移源的类型 1:CDB for SQLServer 2:云服务器自建SQLServer数据库 4:SQLServer备份还原 5:SQLServer备份还原（COS方式）
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取迁移源
                     * @return Source 迁移源
                     */
                    MigrateSource GetSource() const;

                    /**
                     * 设置迁移源
                     * @param Source 迁移源
                     */
                    void SetSource(const MigrateSource& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取迁移目标
                     * @return Target 迁移目标
                     */
                    MigrateTarget GetTarget() const;

                    /**
                     * 设置迁移目标
                     * @param Target 迁移目标
                     */
                    void SetTarget(const MigrateTarget& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取迁移DB对象 ，离线迁移不使用（SourceType=4或SourceType=5）。
                     * @return MigrateDBSet 迁移DB对象 ，离线迁移不使用（SourceType=4或SourceType=5）。
                     */
                    std::vector<MigrateDB> GetMigrateDBSet() const;

                    /**
                     * 设置迁移DB对象 ，离线迁移不使用（SourceType=4或SourceType=5）。
                     * @param MigrateDBSet 迁移DB对象 ，离线迁移不使用（SourceType=4或SourceType=5）。
                     */
                    void SetMigrateDBSet(const std::vector<MigrateDB>& _migrateDBSet);

                    /**
                     * 判断参数 MigrateDBSet 是否已赋值
                     * @return MigrateDBSet 是否已赋值
                     */
                    bool MigrateDBSetHasBeenSet() const;

                private:

                    /**
                     * 迁移任务的名称
                     */
                    std::string m_migrateName;
                    bool m_migrateNameHasBeenSet;

                    /**
                     * 迁移类型（1:结构迁移 2:数据迁移 3:增量同步）
                     */
                    uint64_t m_migrateType;
                    bool m_migrateTypeHasBeenSet;

                    /**
                     * 迁移源的类型 1:CDB for SQLServer 2:云服务器自建SQLServer数据库 4:SQLServer备份还原 5:SQLServer备份还原（COS方式）
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 迁移源
                     */
                    MigrateSource m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 迁移目标
                     */
                    MigrateTarget m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 迁移DB对象 ，离线迁移不使用（SourceType=4或SourceType=5）。
                     */
                    std::vector<MigrateDB> m_migrateDBSet;
                    bool m_migrateDBSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEMIGRATIONREQUEST_H_
