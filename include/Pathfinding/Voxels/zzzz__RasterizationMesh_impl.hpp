#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/RasterizationMesh.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/Voxels/zzzz__RasterizationMesh_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Voxels::RasterizationMesh._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::RasterizationMesh::*)()>(&::Pathfinding::Voxels::RasterizationMesh::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebf458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::RasterizationMesh*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::RasterizationMesh._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::RasterizationMesh::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>, ::UnityEngine::Bounds)>(&::Pathfinding::Voxels::RasterizationMesh::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5ebf460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::RasterizationMesh*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::RasterizationMesh._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::RasterizationMesh::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>, ::UnityEngine::Bounds, ::UnityEngine::Matrix4x4)>(&::Pathfinding::Voxels::RasterizationMesh::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5ebf534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::RasterizationMesh*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::RasterizationMesh.RecalculateBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::RasterizationMesh::*)()>(&::Pathfinding::Voxels::RasterizationMesh::RecalculateBounds)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5ebf5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::RasterizationMesh*>(),
                        {"RecalculateBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::RasterizationMesh.Pool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::RasterizationMesh::*)()>(&::Pathfinding::Voxels::RasterizationMesh::Pool)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5ebf754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::RasterizationMesh*>(),
                        {"Pool", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshFilter>& Pathfinding::Voxels::RasterizationMesh::__cordl_internal_get_original()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___original;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& Pathfinding::Voxels::RasterizationMesh::__cordl_internal_get_original() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___original;
}
constexpr void Pathfinding::Voxels::RasterizationMesh::__cordl_internal_set_original(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___original = value;
}
constexpr int32_t& Pathfinding::Voxels::RasterizationMesh::__cordl_internal_get_area()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___area;
}
constexpr int32_t const& Pathfinding::Voxels::RasterizationMesh::__cordl_internal_get_area() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___area;
}
constexpr void Pathfinding::Voxels::RasterizationMesh::__cordl_internal_set_area(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___area = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& Pathfinding::Voxels::RasterizationMesh::__cordl_internal_get_vertices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertices;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& Pathfinding::Voxels::RasterizationMesh::__cordl_internal_get_vertices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertices;
}
constexpr void Pathfinding::Voxels::RasterizationMesh::__cordl_internal_set_vertices(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertices = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::Voxels::RasterizationMesh::__cordl_internal_get_triangles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triangles;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::Voxels::RasterizationMesh::__cordl_internal_get_triangles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triangles;
}
constexpr void Pathfinding::Voxels::RasterizationMesh::__cordl_internal_set_triangles(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triangles = value;
}
constexpr int32_t& Pathfinding::Voxels::RasterizationMesh::__cordl_internal_get_numVertices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numVertices;
}
constexpr int32_t const& Pathfinding::Voxels::RasterizationMesh::__cordl_internal_get_numVertices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numVertices;
}
constexpr void Pathfinding::Voxels::RasterizationMesh::__cordl_internal_set_numVertices(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numVertices = value;
}
constexpr int32_t& Pathfinding::Voxels::RasterizationMesh::__cordl_internal_get_numTriangles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numTriangles;
}
constexpr int32_t const& Pathfinding::Voxels::RasterizationMesh::__cordl_internal_get_numTriangles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numTriangles;
}
constexpr void Pathfinding::Voxels::RasterizationMesh::__cordl_internal_set_numTriangles(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numTriangles = value;
}
constexpr ::UnityEngine::Bounds& Pathfinding::Voxels::RasterizationMesh::__cordl_internal_get_bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr ::UnityEngine::Bounds const& Pathfinding::Voxels::RasterizationMesh::__cordl_internal_get_bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr void Pathfinding::Voxels::RasterizationMesh::__cordl_internal_set_bounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounds = value;
}
constexpr ::UnityEngine::Matrix4x4& Pathfinding::Voxels::RasterizationMesh::__cordl_internal_get_matrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matrix;
}
constexpr ::UnityEngine::Matrix4x4 const& Pathfinding::Voxels::RasterizationMesh::__cordl_internal_get_matrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matrix;
}
constexpr void Pathfinding::Voxels::RasterizationMesh::__cordl_internal_set_matrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matrix = value;
}
constexpr bool& Pathfinding::Voxels::RasterizationMesh::__cordl_internal_get_pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
constexpr bool const& Pathfinding::Voxels::RasterizationMesh::__cordl_internal_get_pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
constexpr void Pathfinding::Voxels::RasterizationMesh::__cordl_internal_set_pool(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pool = value;
}
inline void Pathfinding::Voxels::RasterizationMesh::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::RasterizationMesh*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Voxels::RasterizationMesh::_ctor(::ArrayW<::UnityEngine::Vector3>  vertices, ::ArrayW<int32_t>  triangles, ::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::RasterizationMesh*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertices, triangles, bounds);
}
inline void Pathfinding::Voxels::RasterizationMesh::_ctor(::ArrayW<::UnityEngine::Vector3>  vertices, ::ArrayW<int32_t>  triangles, ::UnityEngine::Bounds  bounds, ::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::RasterizationMesh*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertices, triangles, bounds, matrix);
}
inline void Pathfinding::Voxels::RasterizationMesh::RecalculateBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::RasterizationMesh*>(),
                        {"RecalculateBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Voxels::RasterizationMesh::Pool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::RasterizationMesh*>(),
                        {"Pool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Voxels::RasterizationMesh* Pathfinding::Voxels::RasterizationMesh::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Voxels::RasterizationMesh*>());
}
inline ::Pathfinding::Voxels::RasterizationMesh* Pathfinding::Voxels::RasterizationMesh::New_ctor(::ArrayW<::UnityEngine::Vector3>  vertices, ::ArrayW<int32_t>  triangles, ::UnityEngine::Bounds  bounds)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Voxels::RasterizationMesh*>(vertices, triangles, bounds));
}
inline ::Pathfinding::Voxels::RasterizationMesh* Pathfinding::Voxels::RasterizationMesh::New_ctor(::ArrayW<::UnityEngine::Vector3>  vertices, ::ArrayW<int32_t>  triangles, ::UnityEngine::Bounds  bounds, ::UnityEngine::Matrix4x4  matrix)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Voxels::RasterizationMesh*>(vertices, triangles, bounds, matrix));
}
// Ctor Parameters []
constexpr ::Pathfinding::Voxels::RasterizationMesh::RasterizationMesh()   {
}
