#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/Polygon.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Poly2Tri/zzzz__Polygon_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DelaunayTriangle_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__PolygonPoint_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__Triangulatable_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationContext_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationMode_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Pathfinding::Poly2Tri::Polygon._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::Polygon::*)(::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::PolygonPoint*>*)>(&::Pathfinding::Poly2Tri::Polygon::_ctor)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0xa6b02a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::PolygonPoint*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::Polygon.get_TriangulationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::TriangulationMode (::Pathfinding::Poly2Tri::Polygon::*)()>(&::Pathfinding::Poly2Tri::Polygon::get_TriangulationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b07e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {"get_TriangulationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::Polygon.AddHole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::Polygon::*)(::Pathfinding::Poly2Tri::Polygon*)>(&::Pathfinding::Poly2Tri::Polygon::AddHole)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa6b07f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {"AddHole", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::Polygon*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::Polygon.AddPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::Polygon::*)(::System::Collections::Generic::IEnumerable_1<::Pathfinding::Poly2Tri::PolygonPoint*>*)>(&::Pathfinding::Poly2Tri::Polygon::AddPoints)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0xa6b08f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {"AddPoints", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Poly2Tri::PolygonPoint*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::Polygon.get_Points
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::TriangulationPoint*>* (::Pathfinding::Poly2Tri::Polygon::*)()>(&::Pathfinding::Poly2Tri::Polygon::get_Points)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b0d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {"get_Points", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::Polygon.get_Triangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>* (::Pathfinding::Poly2Tri::Polygon::*)()>(&::Pathfinding::Poly2Tri::Polygon::get_Triangles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b0d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {"get_Triangles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::Polygon.get_Holes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::Polygon*>* (::Pathfinding::Poly2Tri::Polygon::*)()>(&::Pathfinding::Poly2Tri::Polygon::get_Holes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b0d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {"get_Holes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::Polygon.AddTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::Polygon::*)(::Pathfinding::Poly2Tri::DelaunayTriangle*)>(&::Pathfinding::Poly2Tri::Polygon::AddTriangle)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa6b0d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {"AddTriangle", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::Polygon.AddTriangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::Polygon::*)(::System::Collections::Generic::IEnumerable_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*)>(&::Pathfinding::Poly2Tri::Polygon::AddTriangles)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6b0df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {"AddTriangles", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::Polygon.ClearTriangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::Polygon::*)()>(&::Pathfinding::Poly2Tri::Polygon::ClearTriangles)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa6b0e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {"ClearTriangles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::Polygon.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::Polygon::*)(::Pathfinding::Poly2Tri::TriangulationContext*)>(&::Pathfinding::Poly2Tri::Polygon::Prepare)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0xa6b0eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {"Prepare", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationContext*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*& Pathfinding::Poly2Tri::Polygon::__cordl_internal_get__points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____points;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>* const& Pathfinding::Poly2Tri::Polygon::__cordl_internal_get__points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____points;
}
constexpr void Pathfinding::Poly2Tri::Polygon::__cordl_internal_set__points(::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____points = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*& Pathfinding::Poly2Tri::Polygon::__cordl_internal_get__steinerPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____steinerPoints;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>* const& Pathfinding::Poly2Tri::Polygon::__cordl_internal_get__steinerPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____steinerPoints;
}
constexpr void Pathfinding::Poly2Tri::Polygon::__cordl_internal_set__steinerPoints(::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____steinerPoints = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::Polygon*>*& Pathfinding::Poly2Tri::Polygon::__cordl_internal_get__holes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____holes;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::Polygon*>* const& Pathfinding::Poly2Tri::Polygon::__cordl_internal_get__holes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____holes;
}
constexpr void Pathfinding::Poly2Tri::Polygon::__cordl_internal_set__holes(::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::Polygon*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____holes = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*& Pathfinding::Poly2Tri::Polygon::__cordl_internal_get__triangles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triangles;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>* const& Pathfinding::Poly2Tri::Polygon::__cordl_internal_get__triangles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triangles;
}
constexpr void Pathfinding::Poly2Tri::Polygon::__cordl_internal_set__triangles(::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triangles = value;
}
constexpr ::Pathfinding::Poly2Tri::PolygonPoint*& Pathfinding::Poly2Tri::Polygon::__cordl_internal_get__last()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____last;
}
constexpr ::Pathfinding::Poly2Tri::PolygonPoint* const& Pathfinding::Poly2Tri::Polygon::__cordl_internal_get__last() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____last;
}
constexpr void Pathfinding::Poly2Tri::Polygon::__cordl_internal_set__last(::Pathfinding::Poly2Tri::PolygonPoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____last = value;
}
inline void Pathfinding::Poly2Tri::Polygon::_ctor(::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::PolygonPoint*>*  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::PolygonPoint*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points);
}
inline ::Pathfinding::Poly2Tri::TriangulationMode Pathfinding::Poly2Tri::Polygon::get_TriangulationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {"get_TriangulationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::TriangulationMode>(this, ___internal_method);
}
inline void Pathfinding::Poly2Tri::Polygon::AddHole(::Pathfinding::Poly2Tri::Polygon*  poly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {"AddHole", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::Polygon*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poly);
}
inline void Pathfinding::Poly2Tri::Polygon::AddPoints(::System::Collections::Generic::IEnumerable_1<::Pathfinding::Poly2Tri::PolygonPoint*>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {"AddPoints", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Poly2Tri::PolygonPoint*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline ::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::TriangulationPoint*>* Pathfinding::Poly2Tri::Polygon::get_Points()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {"get_Points", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>* Pathfinding::Poly2Tri::Polygon::get_Triangles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {"get_Triangles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::Polygon*>* Pathfinding::Poly2Tri::Polygon::get_Holes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {"get_Holes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::Polygon*>*>(this, ___internal_method);
}
inline void Pathfinding::Poly2Tri::Polygon::AddTriangle(::Pathfinding::Poly2Tri::DelaunayTriangle*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {"AddTriangle", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void Pathfinding::Poly2Tri::Polygon::AddTriangles(::System::Collections::Generic::IEnumerable_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {"AddTriangles", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline void Pathfinding::Poly2Tri::Polygon::ClearTriangles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {"ClearTriangles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Poly2Tri::Polygon::Prepare(::Pathfinding::Poly2Tri::TriangulationContext*  tcx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::Polygon*>(),
                        {"Prepare", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tcx);
}
inline ::Pathfinding::Poly2Tri::Polygon* Pathfinding::Poly2Tri::Polygon::New_ctor(::System::Collections::Generic::IList_1<::Pathfinding::Poly2Tri::PolygonPoint*>*  points)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Poly2Tri::Polygon*>(points));
}
/// @brief Convert operator to "::Pathfinding::Poly2Tri::Triangulatable"
constexpr  Pathfinding::Poly2Tri::Polygon::operator ::Pathfinding::Poly2Tri::Triangulatable*() noexcept {
return static_cast<::Pathfinding::Poly2Tri::Triangulatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::Poly2Tri::Triangulatable"
constexpr ::Pathfinding::Poly2Tri::Triangulatable* Pathfinding::Poly2Tri::Polygon::i___Pathfinding__Poly2Tri__Triangulatable() noexcept {
return static_cast<::Pathfinding::Poly2Tri::Triangulatable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::Poly2Tri::Polygon::Polygon()   {
}
