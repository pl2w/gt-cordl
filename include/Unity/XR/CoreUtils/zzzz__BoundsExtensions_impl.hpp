#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/BoundsExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__BoundsExtensions_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::BoundsExtensions.ContainsCompletely
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Bounds, ::UnityEngine::Bounds)>(&::Unity::XR::CoreUtils::BoundsExtensions::ContainsCompletely)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb3eecfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::BoundsExtensions*>(),
                        {"ContainsCompletely", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Unity::XR::CoreUtils::BoundsExtensions::ContainsCompletely(::UnityEngine::Bounds  outerBounds, ::UnityEngine::Bounds  innerBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::BoundsExtensions*>(),
                        {"ContainsCompletely", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, outerBounds, innerBounds);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::BoundsExtensions::BoundsExtensions()   {
}
