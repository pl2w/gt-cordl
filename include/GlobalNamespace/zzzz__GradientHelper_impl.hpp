#pragma once
// IWYU pragma private; include "GlobalNamespace/GradientHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GradientHelper_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GradientHelper.FromColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Gradient* (*)(::UnityEngine::Color)>(&::GlobalNamespace::GradientHelper::FromColor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5a1c214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GradientHelper*>(),
                        {"FromColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Gradient* GlobalNamespace::GradientHelper::FromColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GradientHelper*>(),
                        {"FromColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Gradient*>(nullptr, ___internal_method, color);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GradientHelper::GradientHelper()   {
}
