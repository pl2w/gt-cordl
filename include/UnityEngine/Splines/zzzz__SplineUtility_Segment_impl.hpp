#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineUtility_Segment.hpp"
#include "UnityEngine/Splines/zzzz__SplineUtility_Segment_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SplineUtility_Segment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplineUtility_Segment::*)(float_t, float_t)>(&::GlobalNamespace::SplineUtility_Segment::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb32dff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineUtility_Segment>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SplineUtility_Segment::_ctor(float_t  start, float_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineUtility_Segment>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, start, length);
}
// Ctor Parameters [CppParam { name: "start", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "length", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SplineUtility_Segment::SplineUtility_Segment(float_t  start, float_t  length) noexcept  {
this->start = start;
this->length = length;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SplineUtility_Segment::SplineUtility_Segment()   {
}
