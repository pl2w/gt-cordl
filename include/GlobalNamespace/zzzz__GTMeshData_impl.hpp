#pragma once
// IWYU pragma private; include "GlobalNamespace/GTMeshData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__BoneWeight_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__GTMeshData_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTMeshData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTMeshData::*)(::UnityEngine::Mesh*)>(&::GlobalNamespace::GTMeshData::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5b3ae54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTMeshData*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTMeshData.ExtractSubmesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::GlobalNamespace::GTMeshData::*)(int32_t, bool)>(&::GlobalNamespace::GTMeshData::ExtractSubmesh)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x5b3b024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTMeshData*>(),
                        {"ExtractSubmesh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTMeshData.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GTMeshData* (*)(::UnityEngine::Mesh*)>(&::GlobalNamespace::GTMeshData::Parse)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b3b35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTMeshData*>(),
                        {"Parse", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::GTMeshData::__cordl_internal_get_mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::GTMeshData::__cordl_internal_get_mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr void GlobalNamespace::GTMeshData::__cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mesh = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::GTMeshData::__cordl_internal_get_vertices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertices;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::GTMeshData::__cordl_internal_get_vertices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertices;
}
constexpr void GlobalNamespace::GTMeshData::__cordl_internal_set_vertices(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertices = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::GTMeshData::__cordl_internal_get_normals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normals;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::GTMeshData::__cordl_internal_get_normals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normals;
}
constexpr void GlobalNamespace::GTMeshData::__cordl_internal_set_normals(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normals = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& GlobalNamespace::GTMeshData::__cordl_internal_get_tangents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tangents;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& GlobalNamespace::GTMeshData::__cordl_internal_get_tangents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tangents;
}
constexpr void GlobalNamespace::GTMeshData::__cordl_internal_set_tangents(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tangents = value;
}
constexpr ::ArrayW<::UnityEngine::Color32>& GlobalNamespace::GTMeshData::__cordl_internal_get_colors32()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colors32;
}
constexpr ::ArrayW<::UnityEngine::Color32> const& GlobalNamespace::GTMeshData::__cordl_internal_get_colors32() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colors32;
}
constexpr void GlobalNamespace::GTMeshData::__cordl_internal_set_colors32(::ArrayW<::UnityEngine::Color32>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colors32 = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::GTMeshData::__cordl_internal_get_triangles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triangles;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::GTMeshData::__cordl_internal_get_triangles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triangles;
}
constexpr void GlobalNamespace::GTMeshData::__cordl_internal_set_triangles(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triangles = value;
}
constexpr ::ArrayW<::UnityEngine::BoneWeight>& GlobalNamespace::GTMeshData::__cordl_internal_get_boneWeights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneWeights;
}
constexpr ::ArrayW<::UnityEngine::BoneWeight> const& GlobalNamespace::GTMeshData::__cordl_internal_get_boneWeights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneWeights;
}
constexpr void GlobalNamespace::GTMeshData::__cordl_internal_set_boneWeights(::ArrayW<::UnityEngine::BoneWeight>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boneWeights = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& GlobalNamespace::GTMeshData::__cordl_internal_get_uv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& GlobalNamespace::GTMeshData::__cordl_internal_get_uv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv;
}
constexpr void GlobalNamespace::GTMeshData::__cordl_internal_set_uv(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& GlobalNamespace::GTMeshData::__cordl_internal_get_uv2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv2;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& GlobalNamespace::GTMeshData::__cordl_internal_get_uv2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv2;
}
constexpr void GlobalNamespace::GTMeshData::__cordl_internal_set_uv2(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv2 = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& GlobalNamespace::GTMeshData::__cordl_internal_get_uv3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv3;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& GlobalNamespace::GTMeshData::__cordl_internal_get_uv3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv3;
}
constexpr void GlobalNamespace::GTMeshData::__cordl_internal_set_uv3(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv3 = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& GlobalNamespace::GTMeshData::__cordl_internal_get_uv4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv4;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& GlobalNamespace::GTMeshData::__cordl_internal_get_uv4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv4;
}
constexpr void GlobalNamespace::GTMeshData::__cordl_internal_set_uv4(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv4 = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& GlobalNamespace::GTMeshData::__cordl_internal_get_uv5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv5;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& GlobalNamespace::GTMeshData::__cordl_internal_get_uv5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv5;
}
constexpr void GlobalNamespace::GTMeshData::__cordl_internal_set_uv5(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv5 = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& GlobalNamespace::GTMeshData::__cordl_internal_get_uv6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv6;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& GlobalNamespace::GTMeshData::__cordl_internal_get_uv6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv6;
}
constexpr void GlobalNamespace::GTMeshData::__cordl_internal_set_uv6(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv6 = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& GlobalNamespace::GTMeshData::__cordl_internal_get_uv7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv7;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& GlobalNamespace::GTMeshData::__cordl_internal_get_uv7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv7;
}
constexpr void GlobalNamespace::GTMeshData::__cordl_internal_set_uv7(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv7 = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& GlobalNamespace::GTMeshData::__cordl_internal_get_uv8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv8;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& GlobalNamespace::GTMeshData::__cordl_internal_get_uv8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv8;
}
constexpr void GlobalNamespace::GTMeshData::__cordl_internal_set_uv8(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv8 = value;
}
constexpr int32_t& GlobalNamespace::GTMeshData::__cordl_internal_get_subMeshCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subMeshCount;
}
constexpr int32_t const& GlobalNamespace::GTMeshData::__cordl_internal_get_subMeshCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subMeshCount;
}
constexpr void GlobalNamespace::GTMeshData::__cordl_internal_set_subMeshCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subMeshCount = value;
}
inline void GlobalNamespace::GTMeshData::_ctor(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTMeshData*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m);
}
inline ::UnityW<::UnityEngine::Mesh> GlobalNamespace::GTMeshData::ExtractSubmesh(int32_t  subMeshIndex, bool  optimize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTMeshData*>(),
                        {"ExtractSubmesh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method, subMeshIndex, optimize);
}
inline ::GlobalNamespace::GTMeshData* GlobalNamespace::GTMeshData::Parse(::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTMeshData*>(),
                        {"Parse", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTMeshData*>(nullptr, ___internal_method, mesh);
}
inline ::GlobalNamespace::GTMeshData* GlobalNamespace::GTMeshData::New_ctor(::UnityEngine::Mesh*  m)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTMeshData*>(m));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTMeshData::GTMeshData()   {
}
