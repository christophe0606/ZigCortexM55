/*
 * Copyright (c) 2017-2023 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "testapp.h"
#include <stdio.h>
#include "cmsis_compiler.h"

__ALIGNED(16) const float src_a[4] = {1, 2, 3, 4};
__ALIGNED(16) const float src_b[4] = {5, 6, 7, 8};
__ALIGNED(16) float dst[4]   = {0, 0, 0, 0};

extern void myadd(const float *a, const float *b,float *dst,uint32_t nb);


__attribute__((noreturn)) int testapp()
{

    //stdout_init();
    myadd(src_a,src_b,dst,4);
    printf("\r\n= Test is running =\r\n");
    printf("src_a: %f %f %f %f\r\n",src_a[0],src_a[1],src_a[2],src_a[3]);
    printf("src_b: %f %f %f %f\r\n",src_b[0],src_b[1],src_b[2],src_b[3]);
    printf("dst:   %f %f %f %f\r\n",dst[0],dst[1],dst[2],dst[3]);
    printf("= Test ended =\r\n");


    for(;;){}
}

