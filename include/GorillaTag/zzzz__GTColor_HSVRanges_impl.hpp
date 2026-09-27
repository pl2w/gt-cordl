#pragma once
// IWYU pragma private; include "GorillaTag/GTColor_HSVRanges.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GorillaTag/zzzz__GTColor_HSVRanges_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTColor_HSVRanges._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTColor_HSVRanges::*)(float_t, float_t, float_t, float_t, float_t, float_t)>(&::GlobalNamespace::GTColor_HSVRanges::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d22fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTColor_HSVRanges>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GTColor_HSVRanges::_ctor(float_t  hMin, float_t  hMax, float_t  sMin, float_t  sMax, float_t  vMin, float_t  vMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTColor_HSVRanges>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hMin, hMax, sMin, sMax, vMin, vMax);
}
// Ctor Parameters [CppParam { name: "h", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "s", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "v", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTColor_HSVRanges::GTColor_HSVRanges(::UnityEngine::Vector2  h, ::UnityEngine::Vector2  s, ::UnityEngine::Vector2  v) noexcept  {
this->h = h;
this->s = s;
this->v = v;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTColor_HSVRanges::GTColor_HSVRanges()   {
}
