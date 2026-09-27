#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/Polygon.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__Polygon_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DelaunayTriangle_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PolygonPoint_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__Triangulatable_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationContext_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationMode_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*)>(&::UnityEngine::ProBuilder::Poly2Tri::Polygon::_ctor)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0xb07c4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*)>(&::UnityEngine::ProBuilder::Poly2Tri::Polygon::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb07c8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.get_TriangulationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::Polygon::get_TriangulationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb07c934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(),
                        {"get_TriangulationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.AddHole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(::UnityEngine::ProBuilder::Poly2Tri::Polygon*)>(&::UnityEngine::ProBuilder::Poly2Tri::Polygon::AddHole)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb07c93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(),
                        {"AddHole", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.get_Triangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::Polygon::get_Triangles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb07ca3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(),
                        {"get_Triangles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.AddTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(&::UnityEngine::ProBuilder::Poly2Tri::Polygon::AddTriangle)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb07ca44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(),
                        {"AddTriangle", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.AddTriangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*)>(&::UnityEngine::ProBuilder::Poly2Tri::Polygon::AddTriangles)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb07caf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(),
                        {"AddTriangles", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*)>(&::UnityEngine::ProBuilder::Poly2Tri::Polygon::Prepare)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0xb07cb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(),
                        {"Prepare", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*& UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_get__points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____points;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* const& UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_get__points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____points;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_set__points(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____points = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*& UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_get__steinerPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____steinerPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* const& UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_get__steinerPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____steinerPoints;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_set__steinerPoints(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____steinerPoints = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>*& UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_get__holes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____holes;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* const& UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_get__holes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____holes;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_set__holes(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____holes = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*& UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_get__triangles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triangles;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* const& UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_get__triangles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triangles;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_set__triangles(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triangles = value;
}
inline void UnityEngine::ProBuilder::Poly2Tri::Polygon::_ctor(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points);
}
inline void UnityEngine::ProBuilder::Poly2Tri::Polygon::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode UnityEngine::ProBuilder::Poly2Tri::Polygon::get_TriangulationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(),
                        {"get_TriangulationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::Polygon::AddHole(::UnityEngine::ProBuilder::Poly2Tri::Polygon*  poly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(),
                        {"AddHole", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poly);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* UnityEngine::ProBuilder::Poly2Tri::Polygon::get_Triangles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(),
                        {"get_Triangles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::Polygon::AddTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(),
                        {"AddTriangle", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void UnityEngine::ProBuilder::Poly2Tri::Polygon::AddTriangles(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(),
                        {"AddTriangles", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline void UnityEngine::ProBuilder::Poly2Tri::Polygon::Prepare(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*  tcx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(),
                        {"Prepare", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tcx);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::Polygon* UnityEngine::ProBuilder::Poly2Tri::Polygon::New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*  points)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(points));
}
inline ::UnityEngine::ProBuilder::Poly2Tri::Polygon* UnityEngine::ProBuilder::Poly2Tri::Polygon::New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*  points)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(points));
}
/// @brief Convert operator to "::UnityEngine::ProBuilder::Poly2Tri::Triangulatable"
constexpr  UnityEngine::ProBuilder::Poly2Tri::Polygon::operator ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*() noexcept {
return static_cast<::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ProBuilder::Poly2Tri::Triangulatable"
constexpr ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* UnityEngine::ProBuilder::Poly2Tri::Polygon::i___UnityEngine__ProBuilder__Poly2Tri__Triangulatable() noexcept {
return static_cast<::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::Polygon::Polygon()   {
}
