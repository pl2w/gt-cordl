#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/PolygonPoint.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationPoint_impl.hpp"
#include "Pathfinding/Poly2Tri/zzzz__PolygonPoint_def.hpp"
//  Writing Method size for method: ::Pathfinding::Poly2Tri::PolygonPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::PolygonPoint::*)(double_t, double_t)>(&::Pathfinding::Poly2Tri::PolygonPoint::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa6b1298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::PolygonPoint*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::PolygonPoint.get_Next
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::PolygonPoint* (::Pathfinding::Poly2Tri::PolygonPoint::*)()>(&::Pathfinding::Poly2Tri::PolygonPoint::get_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b12f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::PolygonPoint*>(),
                        {"get_Next", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::PolygonPoint.set_Next
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::PolygonPoint::*)(::Pathfinding::Poly2Tri::PolygonPoint*)>(&::Pathfinding::Poly2Tri::PolygonPoint::set_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b12f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::PolygonPoint*>(),
                        {"set_Next", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::PolygonPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::PolygonPoint.set_Previous
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::PolygonPoint::*)(::Pathfinding::Poly2Tri::PolygonPoint*)>(&::Pathfinding::Poly2Tri::PolygonPoint::set_Previous)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b1300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::PolygonPoint*>(),
                        {"set_Previous", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::PolygonPoint*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::Poly2Tri::PolygonPoint*& Pathfinding::Poly2Tri::PolygonPoint::__cordl_internal_get__Next_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Next_k__BackingField;
}
constexpr ::Pathfinding::Poly2Tri::PolygonPoint* const& Pathfinding::Poly2Tri::PolygonPoint::__cordl_internal_get__Next_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Next_k__BackingField;
}
constexpr void Pathfinding::Poly2Tri::PolygonPoint::__cordl_internal_set__Next_k__BackingField(::Pathfinding::Poly2Tri::PolygonPoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Next_k__BackingField = value;
}
constexpr ::Pathfinding::Poly2Tri::PolygonPoint*& Pathfinding::Poly2Tri::PolygonPoint::__cordl_internal_get__Previous_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Previous_k__BackingField;
}
constexpr ::Pathfinding::Poly2Tri::PolygonPoint* const& Pathfinding::Poly2Tri::PolygonPoint::__cordl_internal_get__Previous_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Previous_k__BackingField;
}
constexpr void Pathfinding::Poly2Tri::PolygonPoint::__cordl_internal_set__Previous_k__BackingField(::Pathfinding::Poly2Tri::PolygonPoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Previous_k__BackingField = value;
}
inline void Pathfinding::Poly2Tri::PolygonPoint::_ctor(double_t  x, double_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::PolygonPoint*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y);
}
inline ::Pathfinding::Poly2Tri::PolygonPoint* Pathfinding::Poly2Tri::PolygonPoint::get_Next()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::PolygonPoint*>(),
                        {"get_Next", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::PolygonPoint*>(this, ___internal_method);
}
inline void Pathfinding::Poly2Tri::PolygonPoint::set_Next(::Pathfinding::Poly2Tri::PolygonPoint*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::PolygonPoint*>(),
                        {"set_Next", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::PolygonPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Poly2Tri::PolygonPoint::set_Previous(::Pathfinding::Poly2Tri::PolygonPoint*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::PolygonPoint*>(),
                        {"set_Previous", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::PolygonPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::Poly2Tri::PolygonPoint* Pathfinding::Poly2Tri::PolygonPoint::New_ctor(double_t  x, double_t  y)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Poly2Tri::PolygonPoint*>(x, y));
}
// Ctor Parameters []
constexpr ::Pathfinding::Poly2Tri::PolygonPoint::PolygonPoint()   {
}
