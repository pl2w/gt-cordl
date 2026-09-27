#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DynamicHeightVirtualizationController`1_ContentHeightCacheInfo.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicHeightVirtualizationController`1_ContentHeightCacheInfo_def.hpp"
template<typename T>
inline void GlobalNamespace::DynamicHeightVirtualizationController_1_ContentHeightCacheInfo<T>::_ctor(float_t  sum, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeightVirtualizationController_1_ContentHeightCacheInfo<T>>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sum, count);
}
// Ctor Parameters [CppParam { name: "sum", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::DynamicHeightVirtualizationController_1_ContentHeightCacheInfo<T>::DynamicHeightVirtualizationController_1_ContentHeightCacheInfo(float_t  sum, int32_t  count) noexcept  {
this->sum = sum;
this->count = count;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::DynamicHeightVirtualizationController_1_ContentHeightCacheInfo<T>::DynamicHeightVirtualizationController_1_ContentHeightCacheInfo()   {
}
