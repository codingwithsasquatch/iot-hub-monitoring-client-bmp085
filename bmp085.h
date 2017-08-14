// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef __BMP085_H
#define __BMP085_H


#ifdef __cplusplus
extern "C" {
#endif

void initBmp(void);
void getBmpNextSample(float* Temperature, float* Humidity);

#ifdef __cplusplus
}
#endif


#endif//__BMP085_H

