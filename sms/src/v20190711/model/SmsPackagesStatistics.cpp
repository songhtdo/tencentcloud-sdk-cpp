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

#include <tencentcloud/sms/v20190711/model/SmsPackagesStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sms::V20190711::Model;
using namespace rapidjson;
using namespace std;

SmsPackagesStatistics::SmsPackagesStatistics() :
    m_packageCreateTimeHasBeenSet(false),
    m_packageEffectiveTimeHasBeenSet(false),
    m_packageExpiredTimeHasBeenSet(false),
    m_amountOfPackageHasBeenSet(false),
    m_typeOfPackageHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_currentUsageHasBeenSet(false)
{
}

CoreInternalOutcome SmsPackagesStatistics::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("PackageCreateTime") && !value["PackageCreateTime"].IsNull())
    {
        if (!value["PackageCreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `SmsPackagesStatistics.PackageCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageCreateTime = string(value["PackageCreateTime"].GetString());
        m_packageCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("PackageEffectiveTime") && !value["PackageEffectiveTime"].IsNull())
    {
        if (!value["PackageEffectiveTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `SmsPackagesStatistics.PackageEffectiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageEffectiveTime = string(value["PackageEffectiveTime"].GetString());
        m_packageEffectiveTimeHasBeenSet = true;
    }

    if (value.HasMember("PackageExpiredTime") && !value["PackageExpiredTime"].IsNull())
    {
        if (!value["PackageExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `SmsPackagesStatistics.PackageExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageExpiredTime = string(value["PackageExpiredTime"].GetString());
        m_packageExpiredTimeHasBeenSet = true;
    }

    if (value.HasMember("AmountOfPackage") && !value["AmountOfPackage"].IsNull())
    {
        if (!value["AmountOfPackage"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SmsPackagesStatistics.AmountOfPackage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_amountOfPackage = value["AmountOfPackage"].GetUint64();
        m_amountOfPackageHasBeenSet = true;
    }

    if (value.HasMember("TypeOfPackage") && !value["TypeOfPackage"].IsNull())
    {
        if (!value["TypeOfPackage"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SmsPackagesStatistics.TypeOfPackage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_typeOfPackage = value["TypeOfPackage"].GetUint64();
        m_typeOfPackageHasBeenSet = true;
    }

    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SmsPackagesStatistics.PackageId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = value["PackageId"].GetUint64();
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("CurrentUsage") && !value["CurrentUsage"].IsNull())
    {
        if (!value["CurrentUsage"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SmsPackagesStatistics.CurrentUsage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_currentUsage = value["CurrentUsage"].GetUint64();
        m_currentUsageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmsPackagesStatistics::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_packageCreateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PackageCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_packageCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_packageEffectiveTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PackageEffectiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_packageEffectiveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_packageExpiredTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PackageExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_packageExpiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_amountOfPackageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AmountOfPackage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amountOfPackage, allocator);
    }

    if (m_typeOfPackageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TypeOfPackage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_typeOfPackage, allocator);
    }

    if (m_packageIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageId, allocator);
    }

    if (m_currentUsageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CurrentUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentUsage, allocator);
    }

}


string SmsPackagesStatistics::GetPackageCreateTime() const
{
    return m_packageCreateTime;
}

void SmsPackagesStatistics::SetPackageCreateTime(const string& _packageCreateTime)
{
    m_packageCreateTime = _packageCreateTime;
    m_packageCreateTimeHasBeenSet = true;
}

bool SmsPackagesStatistics::PackageCreateTimeHasBeenSet() const
{
    return m_packageCreateTimeHasBeenSet;
}

string SmsPackagesStatistics::GetPackageEffectiveTime() const
{
    return m_packageEffectiveTime;
}

void SmsPackagesStatistics::SetPackageEffectiveTime(const string& _packageEffectiveTime)
{
    m_packageEffectiveTime = _packageEffectiveTime;
    m_packageEffectiveTimeHasBeenSet = true;
}

bool SmsPackagesStatistics::PackageEffectiveTimeHasBeenSet() const
{
    return m_packageEffectiveTimeHasBeenSet;
}

string SmsPackagesStatistics::GetPackageExpiredTime() const
{
    return m_packageExpiredTime;
}

void SmsPackagesStatistics::SetPackageExpiredTime(const string& _packageExpiredTime)
{
    m_packageExpiredTime = _packageExpiredTime;
    m_packageExpiredTimeHasBeenSet = true;
}

bool SmsPackagesStatistics::PackageExpiredTimeHasBeenSet() const
{
    return m_packageExpiredTimeHasBeenSet;
}

uint64_t SmsPackagesStatistics::GetAmountOfPackage() const
{
    return m_amountOfPackage;
}

void SmsPackagesStatistics::SetAmountOfPackage(const uint64_t& _amountOfPackage)
{
    m_amountOfPackage = _amountOfPackage;
    m_amountOfPackageHasBeenSet = true;
}

bool SmsPackagesStatistics::AmountOfPackageHasBeenSet() const
{
    return m_amountOfPackageHasBeenSet;
}

uint64_t SmsPackagesStatistics::GetTypeOfPackage() const
{
    return m_typeOfPackage;
}

void SmsPackagesStatistics::SetTypeOfPackage(const uint64_t& _typeOfPackage)
{
    m_typeOfPackage = _typeOfPackage;
    m_typeOfPackageHasBeenSet = true;
}

bool SmsPackagesStatistics::TypeOfPackageHasBeenSet() const
{
    return m_typeOfPackageHasBeenSet;
}

uint64_t SmsPackagesStatistics::GetPackageId() const
{
    return m_packageId;
}

void SmsPackagesStatistics::SetPackageId(const uint64_t& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool SmsPackagesStatistics::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

uint64_t SmsPackagesStatistics::GetCurrentUsage() const
{
    return m_currentUsage;
}

void SmsPackagesStatistics::SetCurrentUsage(const uint64_t& _currentUsage)
{
    m_currentUsage = _currentUsage;
    m_currentUsageHasBeenSet = true;
}

bool SmsPackagesStatistics::CurrentUsageHasBeenSet() const
{
    return m_currentUsageHasBeenSet;
}

