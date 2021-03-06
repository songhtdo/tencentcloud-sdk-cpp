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

#include <tencentcloud/mps/v20190612/model/TerrorismConfigureInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

TerrorismConfigureInfo::TerrorismConfigureInfo() :
    m_imgReviewInfoHasBeenSet(false)
{
}

CoreInternalOutcome TerrorismConfigureInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ImgReviewInfo") && !value["ImgReviewInfo"].IsNull())
    {
        if (!value["ImgReviewInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TerrorismConfigureInfo.ImgReviewInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imgReviewInfo.Deserialize(value["ImgReviewInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imgReviewInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TerrorismConfigureInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_imgReviewInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImgReviewInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_imgReviewInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


TerrorismImgReviewTemplateInfo TerrorismConfigureInfo::GetImgReviewInfo() const
{
    return m_imgReviewInfo;
}

void TerrorismConfigureInfo::SetImgReviewInfo(const TerrorismImgReviewTemplateInfo& _imgReviewInfo)
{
    m_imgReviewInfo = _imgReviewInfo;
    m_imgReviewInfoHasBeenSet = true;
}

bool TerrorismConfigureInfo::ImgReviewInfoHasBeenSet() const
{
    return m_imgReviewInfoHasBeenSet;
}

