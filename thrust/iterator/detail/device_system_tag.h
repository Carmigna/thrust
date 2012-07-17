/*
 *  Copyright 2008-2012 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#pragma once

#include <thrust/detail/config.h>

// #include the device system's tag header
#define __THRUST_DEVICE_SYSTEM_TAG_HEADER <__THRUST_DEVICE_SYSTEM_ROOT/detail/tag.h>
#include __THRUST_DEVICE_SYSTEM_TAG_HEADER
#undef __THRUST_DEVICE_SYSTEM_TAG_HEADER

namespace thrust
{

typedef thrust::system::__THRUST_DEVICE_SYSTEM_NAMESPACE::tag device_system_tag;

template<typename DerivedSystem>
  struct device_system
    : thrust::system::__THRUST_DEVICE_SYSTEM_NAMESPACE::detail::dispatchable<DerivedSystem>
{};

} // end thrust

// TODO remove this in 1.7.0
namespace thrust
{

typedef THRUST_DEPRECATED device_system_tag device_space_tag;

} // end thrust
