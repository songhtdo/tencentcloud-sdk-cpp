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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_DETECTFACERESPONSE_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_DETECTFACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20180301/model/FaceInfo.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * DetectFace返回参数结构体
                */
                class DetectFaceResponse : public AbstractModel
                {
                public:
                    DetectFaceResponse();
                    ~DetectFaceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取请求的图片宽度。
                     * @return ImageWidth 请求的图片宽度。
                     */
                    int64_t GetImageWidth() const;

                    /**
                     * 判断参数 ImageWidth 是否已赋值
                     * @return ImageWidth 是否已赋值
                     */
                    bool ImageWidthHasBeenSet() const;

                    /**
                     * 获取请求的图片高度。
                     * @return ImageHeight 请求的图片高度。
                     */
                    int64_t GetImageHeight() const;

                    /**
                     * 判断参数 ImageHeight 是否已赋值
                     * @return ImageHeight 是否已赋值
                     */
                    bool ImageHeightHasBeenSet() const;

                    /**
                     * 获取人脸信息列表。
                     * @return FaceInfos 人脸信息列表。
                     */
                    std::vector<FaceInfo> GetFaceInfos() const;

                    /**
                     * 判断参数 FaceInfos 是否已赋值
                     * @return FaceInfos 是否已赋值
                     */
                    bool FaceInfosHasBeenSet() const;

                private:

                    /**
                     * 请求的图片宽度。
                     */
                    int64_t m_imageWidth;
                    bool m_imageWidthHasBeenSet;

                    /**
                     * 请求的图片高度。
                     */
                    int64_t m_imageHeight;
                    bool m_imageHeightHasBeenSet;

                    /**
                     * 人脸信息列表。
                     */
                    std::vector<FaceInfo> m_faceInfos;
                    bool m_faceInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_DETECTFACERESPONSE_H_