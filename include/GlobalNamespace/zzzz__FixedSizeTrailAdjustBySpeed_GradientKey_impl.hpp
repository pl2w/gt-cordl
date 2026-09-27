#pragma once
// IWYU pragma private; include "GlobalNamespace/FixedSizeTrailAdjustBySpeed_GradientKey.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__FixedSizeTrailAdjustBySpeed_GradientKey_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FixedSizeTrailAdjustBySpeed_GradientKey._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FixedSizeTrailAdjustBySpeed_GradientKey::*)(::UnityEngine::Color, float_t)>(&::GlobalNamespace::FixedSizeTrailAdjustBySpeed_GradientKey::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5806254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedSizeTrailAdjustBySpeed_GradientKey>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FixedSizeTrailAdjustBySpeed_GradientKey::_ctor(::UnityEngine::Color  color, float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedSizeTrailAdjustBySpeed_GradientKey>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, color, time);
}
// Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FixedSizeTrailAdjustBySpeed_GradientKey::FixedSizeTrailAdjustBySpeed_GradientKey(::UnityEngine::Color  color, float_t  time) noexcept  {
this->color = color;
this->time = time;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FixedSizeTrailAdjustBySpeed_GradientKey::FixedSizeTrailAdjustBySpeed_GradientKey()   {
}
