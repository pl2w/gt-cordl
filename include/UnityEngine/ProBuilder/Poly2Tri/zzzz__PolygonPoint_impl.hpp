#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/PolygonPoint.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PolygonPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::*)(double_t, double_t, int32_t)>(&::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb07cf28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::_ctor(double_t  x, double_t  y, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, index);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::New_ctor(double_t  x, double_t  y, int32_t  index)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>(x, y, index));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::PolygonPoint()   {
}
