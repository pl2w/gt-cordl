#pragma once
// IWYU pragma private; include "Pathfinding/Recast/RecastMeshGatherer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/Recast/zzzz__RecastMeshGatherer_def.hpp"
#include "Pathfinding/Recast/zzzz__RecastMeshGatherer_def.hpp"
#include "Pathfinding/Voxels/zzzz__RasterizationMesh_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Recast::RecastMeshGatherer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Recast::RecastMeshGatherer::*)(::UnityEngine::Bounds, int32_t, ::UnityEngine::LayerMask, ::System::Collections::Generic::List_1<::StringW>*, float_t)>(&::Pathfinding::Recast::RecastMeshGatherer::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5ec98cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Recast::RecastMeshGatherer.FilterMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* (*)(::ArrayW<::UnityEngine::MeshFilter*>, ::System::Collections::Generic::List_1<::StringW>*, ::UnityEngine::LayerMask)>(&::Pathfinding::Recast::RecastMeshGatherer::FilterMeshes)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5ec9a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"FilterMeshes", {}, {::i2c::type_of<::ArrayW<::UnityEngine::MeshFilter*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Recast::RecastMeshGatherer.CollectSceneMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Recast::RecastMeshGatherer::*)(::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*)>(&::Pathfinding::Recast::RecastMeshGatherer::CollectSceneMeshes)> {
  constexpr static std::size_t size = 0x594;
  constexpr static std::size_t addrs = 0x5ec9ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"CollectSceneMeshes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Recast::RecastMeshGatherer.CollectRecastMeshObjs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Recast::RecastMeshGatherer::*)(::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*)>(&::Pathfinding::Recast::RecastMeshGatherer::CollectRecastMeshObjs)> {
  constexpr static std::size_t size = 0x778;
  constexpr static std::size_t addrs = 0x5eca278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"CollectRecastMeshObjs", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Recast::RecastMeshGatherer.CollectTerrainMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Recast::RecastMeshGatherer::*)(bool, float_t, ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*)>(&::Pathfinding::Recast::RecastMeshGatherer::CollectTerrainMeshes)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5ecaa58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"CollectTerrainMeshes", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Recast::RecastMeshGatherer.GenerateTerrainChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Recast::RecastMeshGatherer::*)(::UnityEngine::Terrain*, ::UnityEngine::Bounds, float_t, ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*)>(&::Pathfinding::Recast::RecastMeshGatherer::GenerateTerrainChunks)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x5ecaba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"GenerateTerrainChunks", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Recast::RecastMeshGatherer.CeilDivision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Pathfinding::Recast::RecastMeshGatherer::CeilDivision)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ecba4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"CeilDivision", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Recast::RecastMeshGatherer.GenerateHeightmapChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Voxels::RasterizationMesh* (::Pathfinding::Recast::RecastMeshGatherer::*)(::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::Pathfinding::Recast::RecastMeshGatherer::GenerateHeightmapChunk)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x5ecb5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"GenerateHeightmapChunk", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Recast::RecastMeshGatherer.CollectTreeMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Recast::RecastMeshGatherer::*)(::UnityEngine::Terrain*, ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*)>(&::Pathfinding::Recast::RecastMeshGatherer::CollectTreeMeshes)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x5ecb0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"CollectTreeMeshes", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Recast::RecastMeshGatherer.CollectColliderMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Recast::RecastMeshGatherer::*)(::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*)>(&::Pathfinding::Recast::RecastMeshGatherer::CollectColliderMeshes)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x5ecbffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"CollectColliderMeshes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Recast::RecastMeshGatherer.RasterizeCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Voxels::RasterizationMesh* (::Pathfinding::Recast::RecastMeshGatherer::*)(::UnityEngine::Collider*)>(&::Pathfinding::Recast::RecastMeshGatherer::RasterizeCollider)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5eca9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"RasterizeCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Recast::RecastMeshGatherer.RasterizeCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Voxels::RasterizationMesh* (::Pathfinding::Recast::RecastMeshGatherer::*)(::UnityEngine::Collider*, ::UnityEngine::Matrix4x4)>(&::Pathfinding::Recast::RecastMeshGatherer::RasterizeCollider)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x5ecba5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"RasterizeCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Recast::RecastMeshGatherer.RasterizeBoxCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Voxels::RasterizationMesh* (::Pathfinding::Recast::RecastMeshGatherer::*)(::UnityEngine::BoxCollider*, ::UnityEngine::Matrix4x4)>(&::Pathfinding::Recast::RecastMeshGatherer::RasterizeBoxCollider)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5ecc3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"RasterizeBoxCollider", {}, {::i2c::type_of<::UnityEngine::BoxCollider*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Recast::RecastMeshGatherer.RasterizeCapsuleCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Voxels::RasterizationMesh* (::Pathfinding::Recast::RecastMeshGatherer::*)(float_t, float_t, ::UnityEngine::Bounds, ::UnityEngine::Matrix4x4)>(&::Pathfinding::Recast::RecastMeshGatherer::RasterizeCapsuleCollider)> {
  constexpr static std::size_t size = 0xbac;
  constexpr static std::size_t addrs = 0x5ecc5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"RasterizeCapsuleCollider", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::Recast::RecastMeshGatherer::__cordl_internal_get_terrainSampleSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainSampleSize;
}
constexpr int32_t const& Pathfinding::Recast::RecastMeshGatherer::__cordl_internal_get_terrainSampleSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainSampleSize;
}
constexpr void Pathfinding::Recast::RecastMeshGatherer::__cordl_internal_set_terrainSampleSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainSampleSize = value;
}
constexpr ::UnityEngine::LayerMask& Pathfinding::Recast::RecastMeshGatherer::__cordl_internal_get_mask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr ::UnityEngine::LayerMask const& Pathfinding::Recast::RecastMeshGatherer::__cordl_internal_get_mask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr void Pathfinding::Recast::RecastMeshGatherer::__cordl_internal_set_mask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mask = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Pathfinding::Recast::RecastMeshGatherer::__cordl_internal_get_tagMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagMask;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Pathfinding::Recast::RecastMeshGatherer::__cordl_internal_get_tagMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagMask;
}
constexpr void Pathfinding::Recast::RecastMeshGatherer::__cordl_internal_set_tagMask(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagMask = value;
}
constexpr float_t& Pathfinding::Recast::RecastMeshGatherer::__cordl_internal_get_colliderRasterizeDetail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderRasterizeDetail;
}
constexpr float_t const& Pathfinding::Recast::RecastMeshGatherer::__cordl_internal_get_colliderRasterizeDetail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderRasterizeDetail;
}
constexpr void Pathfinding::Recast::RecastMeshGatherer::__cordl_internal_set_colliderRasterizeDetail(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliderRasterizeDetail = value;
}
constexpr ::UnityEngine::Bounds& Pathfinding::Recast::RecastMeshGatherer::__cordl_internal_get_bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr ::UnityEngine::Bounds const& Pathfinding::Recast::RecastMeshGatherer::__cordl_internal_get_bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr void Pathfinding::Recast::RecastMeshGatherer::__cordl_internal_set_bounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounds = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache*>*& Pathfinding::Recast::RecastMeshGatherer::__cordl_internal_get_capsuleCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___capsuleCache;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache*>* const& Pathfinding::Recast::RecastMeshGatherer::__cordl_internal_get_capsuleCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___capsuleCache;
}
constexpr void Pathfinding::Recast::RecastMeshGatherer::__cordl_internal_set_capsuleCache(::System::Collections::Generic::List_1<::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___capsuleCache = value;
}
inline void Pathfinding::Recast::RecastMeshGatherer::setStaticF_BoxColliderTris(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "BoxColliderTris", ::Pathfinding::Recast::RecastMeshGatherer*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Pathfinding::Recast::RecastMeshGatherer::getStaticF_BoxColliderTris()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "BoxColliderTris", ::Pathfinding::Recast::RecastMeshGatherer*>();
}
inline void Pathfinding::Recast::RecastMeshGatherer::setStaticF_BoxColliderVerts(::ArrayW<::UnityEngine::Vector3>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "BoxColliderVerts", ::Pathfinding::Recast::RecastMeshGatherer*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> Pathfinding::Recast::RecastMeshGatherer::getStaticF_BoxColliderVerts()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "BoxColliderVerts", ::Pathfinding::Recast::RecastMeshGatherer*>();
}
inline void Pathfinding::Recast::RecastMeshGatherer::_ctor(::UnityEngine::Bounds  bounds, int32_t  terrainSampleSize, ::UnityEngine::LayerMask  mask, ::System::Collections::Generic::List_1<::StringW>*  tagMask, float_t  colliderRasterizeDetail)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bounds, terrainSampleSize, mask, tagMask, colliderRasterizeDetail);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* Pathfinding::Recast::RecastMeshGatherer::FilterMeshes(::ArrayW<::UnityEngine::MeshFilter*>  meshFilters, ::System::Collections::Generic::List_1<::StringW>*  tagMask, ::UnityEngine::LayerMask  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"FilterMeshes", {}, {::i2c::type_of<::ArrayW<::UnityEngine::MeshFilter*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*>(nullptr, ___internal_method, meshFilters, tagMask, layerMask);
}
inline void Pathfinding::Recast::RecastMeshGatherer::CollectSceneMeshes(::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  meshes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"CollectSceneMeshes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meshes);
}
inline void Pathfinding::Recast::RecastMeshGatherer::CollectRecastMeshObjs(::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"CollectRecastMeshObjs", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void Pathfinding::Recast::RecastMeshGatherer::CollectTerrainMeshes(bool  rasterizeTrees, float_t  desiredChunkSize, ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"CollectTerrainMeshes", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rasterizeTrees, desiredChunkSize, result);
}
inline void Pathfinding::Recast::RecastMeshGatherer::GenerateTerrainChunks(::UnityEngine::Terrain*  terrain, ::UnityEngine::Bounds  bounds, float_t  desiredChunkSize, ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"GenerateTerrainChunks", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain, bounds, desiredChunkSize, result);
}
inline int32_t Pathfinding::Recast::RecastMeshGatherer::CeilDivision(int32_t  lhs, int32_t  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"CeilDivision", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Pathfinding::Voxels::RasterizationMesh* Pathfinding::Recast::RecastMeshGatherer::GenerateHeightmapChunk(::System::Object*  heights, ::UnityEngine::Vector3  sampleSize, ::UnityEngine::Vector3  offset, int32_t  x0, int32_t  z0, int32_t  width, int32_t  depth, int32_t  stride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"GenerateHeightmapChunk", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Voxels::RasterizationMesh*>(this, ___internal_method, heights, sampleSize, offset, x0, z0, width, depth, stride);
}
inline void Pathfinding::Recast::RecastMeshGatherer::CollectTreeMeshes(::UnityEngine::Terrain*  terrain, ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"CollectTreeMeshes", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain, result);
}
inline void Pathfinding::Recast::RecastMeshGatherer::CollectColliderMeshes(::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"CollectColliderMeshes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Pathfinding::Voxels::RasterizationMesh* Pathfinding::Recast::RecastMeshGatherer::RasterizeCollider(::UnityEngine::Collider*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"RasterizeCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Voxels::RasterizationMesh*>(this, ___internal_method, col);
}
inline ::Pathfinding::Voxels::RasterizationMesh* Pathfinding::Recast::RecastMeshGatherer::RasterizeCollider(::UnityEngine::Collider*  col, ::UnityEngine::Matrix4x4  localToWorldMatrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"RasterizeCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Voxels::RasterizationMesh*>(this, ___internal_method, col, localToWorldMatrix);
}
inline ::Pathfinding::Voxels::RasterizationMesh* Pathfinding::Recast::RecastMeshGatherer::RasterizeBoxCollider(::UnityEngine::BoxCollider*  collider, ::UnityEngine::Matrix4x4  localToWorldMatrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"RasterizeBoxCollider", {}, {::i2c::type_of<::UnityEngine::BoxCollider*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Voxels::RasterizationMesh*>(this, ___internal_method, collider, localToWorldMatrix);
}
inline ::Pathfinding::Voxels::RasterizationMesh* Pathfinding::Recast::RecastMeshGatherer::RasterizeCapsuleCollider(float_t  radius, float_t  height, ::UnityEngine::Bounds  bounds, ::UnityEngine::Matrix4x4  localToWorldMatrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer*>(),
                        {"RasterizeCapsuleCollider", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Voxels::RasterizationMesh*>(this, ___internal_method, radius, height, bounds, localToWorldMatrix);
}
inline ::Pathfinding::Recast::RecastMeshGatherer* Pathfinding::Recast::RecastMeshGatherer::New_ctor(::UnityEngine::Bounds  bounds, int32_t  terrainSampleSize, ::UnityEngine::LayerMask  mask, ::System::Collections::Generic::List_1<::StringW>*  tagMask, float_t  colliderRasterizeDetail)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Recast::RecastMeshGatherer*>(bounds, terrainSampleSize, mask, tagMask, colliderRasterizeDetail));
}
// Ctor Parameters []
constexpr ::Pathfinding::Recast::RecastMeshGatherer::RecastMeshGatherer()   {
}
//  Writing Method size for method: ::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache::*)()>(&::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ecd184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::Recast::RecastMeshGatherer_CapsuleCache::__cordl_internal_get_rows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rows;
}
constexpr int32_t const& Pathfinding::Recast::RecastMeshGatherer_CapsuleCache::__cordl_internal_get_rows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rows;
}
constexpr void Pathfinding::Recast::RecastMeshGatherer_CapsuleCache::__cordl_internal_set_rows(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rows = value;
}
constexpr float_t& Pathfinding::Recast::RecastMeshGatherer_CapsuleCache::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr float_t const& Pathfinding::Recast::RecastMeshGatherer_CapsuleCache::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void Pathfinding::Recast::RecastMeshGatherer_CapsuleCache::__cordl_internal_set_height(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& Pathfinding::Recast::RecastMeshGatherer_CapsuleCache::__cordl_internal_get_verts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verts;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& Pathfinding::Recast::RecastMeshGatherer_CapsuleCache::__cordl_internal_get_verts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verts;
}
constexpr void Pathfinding::Recast::RecastMeshGatherer_CapsuleCache::__cordl_internal_set_verts(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verts = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::Recast::RecastMeshGatherer_CapsuleCache::__cordl_internal_get_tris()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tris;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::Recast::RecastMeshGatherer_CapsuleCache::__cordl_internal_get_tris() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tris;
}
constexpr void Pathfinding::Recast::RecastMeshGatherer_CapsuleCache::__cordl_internal_set_tris(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tris = value;
}
inline void Pathfinding::Recast::RecastMeshGatherer_CapsuleCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache* Pathfinding::Recast::RecastMeshGatherer_CapsuleCache::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Recast::RecastMeshGatherer_CapsuleCache::RecastMeshGatherer_CapsuleCache()   {
}
