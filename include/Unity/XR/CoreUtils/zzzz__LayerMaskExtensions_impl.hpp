#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/LayerMaskExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__LayerMaskExtensions_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::LayerMaskExtensions.GetFirstLayerIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::LayerMask)>(&::Unity::XR::CoreUtils::LayerMaskExtensions::GetFirstLayerIndex)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb3efda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::LayerMaskExtensions*>(),
                        {"GetFirstLayerIndex", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::LayerMaskExtensions.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::LayerMask, int32_t)>(&::Unity::XR::CoreUtils::LayerMaskExtensions::Contains)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb3efe00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::LayerMaskExtensions*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Unity::XR::CoreUtils::LayerMaskExtensions::GetFirstLayerIndex(::UnityEngine::LayerMask  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::LayerMaskExtensions*>(),
                        {"GetFirstLayerIndex", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, layerMask);
}
inline bool Unity::XR::CoreUtils::LayerMaskExtensions::Contains(::UnityEngine::LayerMask  mask, int32_t  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::LayerMaskExtensions*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mask, layer);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::LayerMaskExtensions::LayerMaskExtensions()   {
}
