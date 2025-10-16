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

extern uint32_t add(uint32_t a, uint32_t b);


__attribute__((noreturn)) int testapp()
{

    //stdout_init();
    uint32_t res =add(1,2);
    printf("\r\n= Blinky is running = %d\r\n",res);


    for(;;){}
}

