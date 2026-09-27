#pragma once
// IWYU pragma private; include "Pathfinding/Polygon.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__Polygon_def.hpp"
#include "Pathfinding/zzzz__Int2_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Polygon.ContainsPointXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::Polygon::ContainsPointXZ)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e4f190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"ContainsPointXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Polygon.ContainsPointXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3)>(&::Pathfinding::Polygon::ContainsPointXZ)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e4f228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"ContainsPointXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Polygon.ContainsPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Int2, ::Pathfinding::Int2, ::Pathfinding::Int2, ::Pathfinding::Int2)>(&::Pathfinding::Polygon::ContainsPoint)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e4f294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"ContainsPoint", {}, {::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Polygon.ContainsPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Vector2>, ::UnityEngine::Vector2)>(&::Pathfinding::Polygon::ContainsPoint)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5e4f324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"ContainsPoint", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Polygon.ContainsPointXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::Vector3)>(&::Pathfinding::Polygon::ContainsPointXZ)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e4f3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"ContainsPointXZ", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Polygon.SampleYCoordinateInTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3)>(&::Pathfinding::Polygon::SampleYCoordinateInTriangle)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5e4f4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"SampleYCoordinateInTriangle", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Polygon.ConvexHullXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (*)(::ArrayW<::UnityEngine::Vector3>)>(&::Pathfinding::Polygon::ConvexHullXZ)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x5e4f684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"ConvexHullXZ", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Polygon.ClosestPointOnTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Pathfinding::Polygon::ClosestPointOnTriangle)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5e4f98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"ClosestPointOnTriangle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Polygon.ClosestPointOnTriangleXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::Polygon::ClosestPointOnTriangleXZ)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5e4fb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"ClosestPointOnTriangleXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Polygon.ClosestPointOnTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::Polygon::ClosestPointOnTriangle)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5e4fd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"ClosestPointOnTriangle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Polygon.CompressMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::Pathfinding::Int3>*, ::System::Collections::Generic::List_1<int32_t>*, ::by_ref<::ArrayW<::Pathfinding::Int3>>, ::by_ref<::ArrayW<int32_t>>)>(&::Pathfinding::Polygon::CompressMesh)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x5e4ff88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"CompressMesh", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Int3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::by_ref<::ArrayW<::Pathfinding::Int3>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Polygon.TraceContours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, ::System::Collections::Generic::HashSet_1<int32_t>*, ::System::Action_2<::System::Collections::Generic::List_1<int32_t>*,bool>*)>(&::Pathfinding::Polygon::TraceContours)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5e50490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"TraceContours", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>(), ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<int32_t>*,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Polygon.Subdivide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, int32_t)>(&::Pathfinding::Polygon::Subdivide)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5e50800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"Subdivide", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Polygon::setStaticF_cached_Int3_int_dict(::System::Collections::Generic::Dictionary_2<::Pathfinding::Int3,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Pathfinding::Int3,int32_t>*, "cached_Int3_int_dict", ::Pathfinding::Polygon*>(std::forward<::System::Collections::Generic::Dictionary_2<::Pathfinding::Int3,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Pathfinding::Int3,int32_t>* Pathfinding::Polygon::getStaticF_cached_Int3_int_dict()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Pathfinding::Int3,int32_t>*, "cached_Int3_int_dict", ::Pathfinding::Polygon*>();
}
inline bool Pathfinding::Polygon::ContainsPointXZ(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c, ::UnityEngine::Vector3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"ContainsPointXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, c, p);
}
inline bool Pathfinding::Polygon::ContainsPointXZ(::Pathfinding::Int3  a, ::Pathfinding::Int3  b, ::Pathfinding::Int3  c, ::Pathfinding::Int3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"ContainsPointXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, c, p);
}
inline bool Pathfinding::Polygon::ContainsPoint(::Pathfinding::Int2  a, ::Pathfinding::Int2  b, ::Pathfinding::Int2  c, ::Pathfinding::Int2  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"ContainsPoint", {}, {::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, c, p);
}
inline bool Pathfinding::Polygon::ContainsPoint(::ArrayW<::UnityEngine::Vector2>  polyPoints, ::UnityEngine::Vector2  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"ContainsPoint", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, polyPoints, p);
}
inline bool Pathfinding::Polygon::ContainsPointXZ(::ArrayW<::UnityEngine::Vector3>  polyPoints, ::UnityEngine::Vector3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"ContainsPointXZ", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, polyPoints, p);
}
inline int32_t Pathfinding::Polygon::SampleYCoordinateInTriangle(::Pathfinding::Int3  p1, ::Pathfinding::Int3  p2, ::Pathfinding::Int3  p3, ::Pathfinding::Int3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"SampleYCoordinateInTriangle", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, p1, p2, p3, p);
}
inline ::ArrayW<::UnityEngine::Vector3> Pathfinding::Polygon::ConvexHullXZ(::ArrayW<::UnityEngine::Vector3>  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"ConvexHullXZ", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(nullptr, ___internal_method, points);
}
inline ::UnityEngine::Vector2 Pathfinding::Polygon::ClosestPointOnTriangle(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b, ::UnityEngine::Vector2  c, ::UnityEngine::Vector2  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"ClosestPointOnTriangle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, a, b, c, p);
}
inline ::UnityEngine::Vector3 Pathfinding::Polygon::ClosestPointOnTriangleXZ(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c, ::UnityEngine::Vector3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"ClosestPointOnTriangleXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, a, b, c, p);
}
inline ::UnityEngine::Vector3 Pathfinding::Polygon::ClosestPointOnTriangle(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c, ::UnityEngine::Vector3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"ClosestPointOnTriangle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, a, b, c, p);
}
inline void Pathfinding::Polygon::CompressMesh(::System::Collections::Generic::List_1<::Pathfinding::Int3>*  vertices, ::System::Collections::Generic::List_1<int32_t>*  triangles, ::by_ref<::ArrayW<::Pathfinding::Int3>>  outVertices, ::by_ref<::ArrayW<int32_t>>  outTriangles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"CompressMesh", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Int3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::by_ref<::ArrayW<::Pathfinding::Int3>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vertices, triangles, outVertices, outTriangles);
}
inline void Pathfinding::Polygon::TraceContours(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  outline, ::System::Collections::Generic::HashSet_1<int32_t>*  hasInEdge, ::System::Action_2<::System::Collections::Generic::List_1<int32_t>*,bool>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"TraceContours", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>(), ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<int32_t>*,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, outline, hasInEdge, results);
}
inline void Pathfinding::Polygon::Subdivide(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  result, int32_t  subSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Polygon*>(),
                        {"Subdivide", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, result, subSegments);
}
// Ctor Parameters []
constexpr ::Pathfinding::Polygon::Polygon()   {
}
