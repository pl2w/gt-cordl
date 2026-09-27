#pragma once
// IWYU pragma private; include "TMPro/TMP_TextUtilities_LineSegment.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "TMPro/zzzz__TMP_TextUtilities_LineSegment_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TMP_TextUtilities_LineSegment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TMP_TextUtilities_LineSegment::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::TMP_TextUtilities_LineSegment::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb3ad118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMP_TextUtilities_LineSegment>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TMP_TextUtilities_LineSegment::_ctor(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMP_TextUtilities_LineSegment>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p1, p2);
}
// Ctor Parameters [CppParam { name: "Point1", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Point2", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TMP_TextUtilities_LineSegment::TMP_TextUtilities_LineSegment(::UnityEngine::Vector3  Point1, ::UnityEngine::Vector3  Point2) noexcept  {
this->Point1 = Point1;
this->Point2 = Point2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TMP_TextUtilities_LineSegment::TMP_TextUtilities_LineSegment()   {
}
