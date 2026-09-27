#pragma once
// IWYU pragma private; include "Pathfinding/RecastGraph.hpp"
#include "Pathfinding/Voxels/zzzz__Voxelize_impl.hpp"
#include "Pathfinding/zzzz__NavmeshBase_impl.hpp"
#include "Pathfinding/zzzz__Progress_impl.hpp"
#include "Pathfinding/zzzz__RecastGraph_RelevantGraphSurfaceMode_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__RecastGraph_def.hpp"
#include "Pathfinding/Serialization/zzzz__GraphSerializationContext_def.hpp"
#include "Pathfinding/Util/zzzz__GraphTransform_def.hpp"
#include "Pathfinding/Voxels/zzzz__RasterizationMesh_def.hpp"
#include "Pathfinding/Voxels/zzzz__VoxelMesh_def.hpp"
#include "Pathfinding/Voxels/zzzz__Voxelize_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateObject_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateThreading_def.hpp"
#include "Pathfinding/zzzz__IUpdatableGraph_def.hpp"
#include "Pathfinding/zzzz__Int2_def.hpp"
#include "Pathfinding/zzzz__NavmeshTile_def.hpp"
#include "Pathfinding/zzzz__Progress_def.hpp"
#include "Pathfinding/zzzz__RecastGraph_RelevantGraphSurfaceMode_def.hpp"
#include "Pathfinding/zzzz__RecastGraph_def.hpp"
#include "Pathfinding/zzzz__TriangleMeshNode_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::RecastGraph.get_RecalculateNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RecastGraph::*)()>(&::Pathfinding::RecastGraph::get_RecalculateNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e8fdec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                    {::i2c::class_of<::Pathfinding::RecastGraph*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.get_TileWorldSizeX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RecastGraph::*)()>(&::Pathfinding::RecastGraph::get_TileWorldSizeX)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e8fdf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                    {::i2c::class_of<::Pathfinding::RecastGraph*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.get_TileWorldSizeZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RecastGraph::*)()>(&::Pathfinding::RecastGraph::get_TileWorldSizeZ)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e8fe08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                    {::i2c::class_of<::Pathfinding::RecastGraph*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.get_MaxTileConnectionEdgeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RecastGraph::*)()>(&::Pathfinding::RecastGraph::get_MaxTileConnectionEdgeDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e8fe1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                    {::i2c::class_of<::Pathfinding::RecastGraph*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.get_forcedBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Pathfinding::RecastGraph::*)()>(&::Pathfinding::RecastGraph::get_forcedBounds)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e8fe24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"get_forcedBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.ClosestPointOnNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::RecastGraph::*)(::Pathfinding::TriangleMeshNode*, ::UnityEngine::Vector3)>(&::Pathfinding::RecastGraph::ClosestPointOnNode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e8fe5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"ClosestPointOnNode", {}, {::i2c::type_of<::Pathfinding::TriangleMeshNode*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.ContainsPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RecastGraph::*)(::Pathfinding::TriangleMeshNode*, ::UnityEngine::Vector3)>(&::Pathfinding::RecastGraph::ContainsPoint)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e8fe80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"ContainsPoint", {}, {::i2c::type_of<::Pathfinding::TriangleMeshNode*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.SnapForceBoundsToScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastGraph::*)()>(&::Pathfinding::RecastGraph::SnapForceBoundsToScene)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5e8febc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"SnapForceBoundsToScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.Pathfinding_IUpdatableGraph_CanUpdateAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphUpdateThreading (::Pathfinding::RecastGraph::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::RecastGraph::Pathfinding_IUpdatableGraph_CanUpdateAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e902f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"Pathfinding.IUpdatableGraph.CanUpdateAsync", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.Pathfinding_IUpdatableGraph_UpdateAreaInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastGraph::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::RecastGraph::Pathfinding_IUpdatableGraph_UpdateAreaInit)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5e90318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateAreaInit", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.Pathfinding_IUpdatableGraph_UpdateArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastGraph::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::RecastGraph::Pathfinding_IUpdatableGraph_UpdateArea)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5e9053c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateArea", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.Pathfinding_IUpdatableGraph_UpdateAreaPost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastGraph::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::RecastGraph::Pathfinding_IUpdatableGraph_UpdateAreaPost)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5e90c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateAreaPost", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.ScanInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* (::Pathfinding::RecastGraph::*)()>(&::Pathfinding::RecastGraph::ScanInternal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e90e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                    {::i2c::class_of<::Pathfinding::RecastGraph*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.CalculateTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Util::GraphTransform* (::Pathfinding::RecastGraph::*)()>(&::Pathfinding::RecastGraph::CalculateTransform)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5e90f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                    {::i2c::class_of<::Pathfinding::RecastGraph*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.InitializeTileInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastGraph::*)()>(&::Pathfinding::RecastGraph::InitializeTileInfo)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5e9114c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"InitializeTileInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.PutMeshesIntoTileBuckets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*> (::Pathfinding::RecastGraph::*)(::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*)>(&::Pathfinding::RecastGraph::PutMeshesIntoTileBuckets)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x5e91338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"PutMeshesIntoTileBuckets", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.ScanAllTiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* (::Pathfinding::RecastGraph::*)()>(&::Pathfinding::RecastGraph::ScanAllTiles)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e91624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"ScanAllTiles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.CollectMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>* (::Pathfinding::RecastGraph::*)(::UnityEngine::Bounds)>(&::Pathfinding::RecastGraph::CollectMeshes)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5e900f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"CollectMeshes", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.get_CellHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RecastGraph::*)()>(&::Pathfinding::RecastGraph::get_CellHeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e9051c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"get_CellHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.get_CharacterRadiusInVoxels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::RecastGraph::*)()>(&::Pathfinding::RecastGraph::get_CharacterRadiusInVoxels)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e916d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"get_CharacterRadiusInVoxels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.get_TileBorderSizeInVoxels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::RecastGraph::*)()>(&::Pathfinding::RecastGraph::get_TileBorderSizeInVoxels)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e91758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"get_TileBorderSizeInVoxels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.get_TileBorderSizeInWorldUnits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RecastGraph::*)()>(&::Pathfinding::RecastGraph::get_TileBorderSizeInWorldUnits)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e904f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"get_TileBorderSizeInWorldUnits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.CalculateTileBoundsWithBorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Pathfinding::RecastGraph::*)(int32_t, int32_t)>(&::Pathfinding::RecastGraph::CalculateTileBoundsWithBorder)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5e9176c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"CalculateTileBoundsWithBorder", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.BuildTileMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NavmeshTile* (::Pathfinding::RecastGraph::*)(::Pathfinding::Voxels::Voxelize*, int32_t, int32_t, int32_t)>(&::Pathfinding::RecastGraph::BuildTileMesh)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x5e908e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"BuildTileMesh", {}, {::i2c::type_of<::Pathfinding::Voxels::Voxelize*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.CreateTile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NavmeshTile* (::Pathfinding::RecastGraph::*)(::Pathfinding::Voxels::Voxelize*, ::Pathfinding::Voxels::VoxelMesh, int32_t, int32_t, int32_t)>(&::Pathfinding::RecastGraph::CreateTile)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x5e918a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"CreateTile", {}, {::i2c::type_of<::Pathfinding::Voxels::Voxelize*>(), ::i2c::type_of<::Pathfinding::Voxels::VoxelMesh>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph.DeserializeSettingsCompatibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::RecastGraph::DeserializeSettingsCompatibility)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x5e92170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                    {::i2c::class_of<::Pathfinding::RecastGraph*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastGraph::*)()>(&::Pathfinding::RecastGraph::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5e925d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Pathfinding::RecastGraph::__cordl_internal_get_characterRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___characterRadius;
}
constexpr float_t const& Pathfinding::RecastGraph::__cordl_internal_get_characterRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___characterRadius;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_characterRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___characterRadius = value;
}
constexpr float_t& Pathfinding::RecastGraph::__cordl_internal_get_contourMaxError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contourMaxError;
}
constexpr float_t const& Pathfinding::RecastGraph::__cordl_internal_get_contourMaxError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contourMaxError;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_contourMaxError(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contourMaxError = value;
}
constexpr float_t& Pathfinding::RecastGraph::__cordl_internal_get_cellSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cellSize;
}
constexpr float_t const& Pathfinding::RecastGraph::__cordl_internal_get_cellSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cellSize;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_cellSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cellSize = value;
}
constexpr float_t& Pathfinding::RecastGraph::__cordl_internal_get_walkableHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___walkableHeight;
}
constexpr float_t const& Pathfinding::RecastGraph::__cordl_internal_get_walkableHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___walkableHeight;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_walkableHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___walkableHeight = value;
}
constexpr float_t& Pathfinding::RecastGraph::__cordl_internal_get_walkableClimb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___walkableClimb;
}
constexpr float_t const& Pathfinding::RecastGraph::__cordl_internal_get_walkableClimb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___walkableClimb;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_walkableClimb(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___walkableClimb = value;
}
constexpr float_t& Pathfinding::RecastGraph::__cordl_internal_get_maxSlope()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSlope;
}
constexpr float_t const& Pathfinding::RecastGraph::__cordl_internal_get_maxSlope() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSlope;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_maxSlope(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSlope = value;
}
constexpr float_t& Pathfinding::RecastGraph::__cordl_internal_get_maxEdgeLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxEdgeLength;
}
constexpr float_t const& Pathfinding::RecastGraph::__cordl_internal_get_maxEdgeLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxEdgeLength;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_maxEdgeLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxEdgeLength = value;
}
constexpr float_t& Pathfinding::RecastGraph::__cordl_internal_get_minRegionSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minRegionSize;
}
constexpr float_t const& Pathfinding::RecastGraph::__cordl_internal_get_minRegionSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minRegionSize;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_minRegionSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minRegionSize = value;
}
constexpr int32_t& Pathfinding::RecastGraph::__cordl_internal_get_editorTileSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorTileSize;
}
constexpr int32_t const& Pathfinding::RecastGraph::__cordl_internal_get_editorTileSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorTileSize;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_editorTileSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___editorTileSize = value;
}
constexpr int32_t& Pathfinding::RecastGraph::__cordl_internal_get_tileSizeX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tileSizeX;
}
constexpr int32_t const& Pathfinding::RecastGraph::__cordl_internal_get_tileSizeX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tileSizeX;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_tileSizeX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tileSizeX = value;
}
constexpr int32_t& Pathfinding::RecastGraph::__cordl_internal_get_tileSizeZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tileSizeZ;
}
constexpr int32_t const& Pathfinding::RecastGraph::__cordl_internal_get_tileSizeZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tileSizeZ;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_tileSizeZ(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tileSizeZ = value;
}
constexpr bool& Pathfinding::RecastGraph::__cordl_internal_get_useTiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useTiles;
}
constexpr bool const& Pathfinding::RecastGraph::__cordl_internal_get_useTiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useTiles;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_useTiles(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useTiles = value;
}
constexpr bool& Pathfinding::RecastGraph::__cordl_internal_get_scanEmptyGraph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanEmptyGraph;
}
constexpr bool const& Pathfinding::RecastGraph::__cordl_internal_get_scanEmptyGraph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanEmptyGraph;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_scanEmptyGraph(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scanEmptyGraph = value;
}
constexpr ::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode& Pathfinding::RecastGraph::__cordl_internal_get_relevantGraphSurfaceMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relevantGraphSurfaceMode;
}
constexpr ::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode const& Pathfinding::RecastGraph::__cordl_internal_get_relevantGraphSurfaceMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relevantGraphSurfaceMode;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_relevantGraphSurfaceMode(::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___relevantGraphSurfaceMode = value;
}
constexpr bool& Pathfinding::RecastGraph::__cordl_internal_get_rasterizeColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rasterizeColliders;
}
constexpr bool const& Pathfinding::RecastGraph::__cordl_internal_get_rasterizeColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rasterizeColliders;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_rasterizeColliders(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rasterizeColliders = value;
}
constexpr bool& Pathfinding::RecastGraph::__cordl_internal_get_rasterizeMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rasterizeMeshes;
}
constexpr bool const& Pathfinding::RecastGraph::__cordl_internal_get_rasterizeMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rasterizeMeshes;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_rasterizeMeshes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rasterizeMeshes = value;
}
constexpr bool& Pathfinding::RecastGraph::__cordl_internal_get_rasterizeTerrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rasterizeTerrain;
}
constexpr bool const& Pathfinding::RecastGraph::__cordl_internal_get_rasterizeTerrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rasterizeTerrain;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_rasterizeTerrain(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rasterizeTerrain = value;
}
constexpr bool& Pathfinding::RecastGraph::__cordl_internal_get_rasterizeTrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rasterizeTrees;
}
constexpr bool const& Pathfinding::RecastGraph::__cordl_internal_get_rasterizeTrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rasterizeTrees;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_rasterizeTrees(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rasterizeTrees = value;
}
constexpr float_t& Pathfinding::RecastGraph::__cordl_internal_get_colliderRasterizeDetail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderRasterizeDetail;
}
constexpr float_t const& Pathfinding::RecastGraph::__cordl_internal_get_colliderRasterizeDetail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderRasterizeDetail;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_colliderRasterizeDetail(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliderRasterizeDetail = value;
}
constexpr ::UnityEngine::LayerMask& Pathfinding::RecastGraph::__cordl_internal_get_mask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr ::UnityEngine::LayerMask const& Pathfinding::RecastGraph::__cordl_internal_get_mask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_mask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mask = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Pathfinding::RecastGraph::__cordl_internal_get_tagMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagMask;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Pathfinding::RecastGraph::__cordl_internal_get_tagMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagMask;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_tagMask(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagMask = value;
}
constexpr int32_t& Pathfinding::RecastGraph::__cordl_internal_get_terrainSampleSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainSampleSize;
}
constexpr int32_t const& Pathfinding::RecastGraph::__cordl_internal_get_terrainSampleSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainSampleSize;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_terrainSampleSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainSampleSize = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::RecastGraph::__cordl_internal_get_rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::RecastGraph::__cordl_internal_get_rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_rotation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotation = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::RecastGraph::__cordl_internal_get_forcedBoundsCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forcedBoundsCenter;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::RecastGraph::__cordl_internal_get_forcedBoundsCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forcedBoundsCenter;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_forcedBoundsCenter(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forcedBoundsCenter = value;
}
constexpr ::Pathfinding::Voxels::Voxelize*& Pathfinding::RecastGraph::__cordl_internal_get_globalVox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalVox;
}
constexpr ::Pathfinding::Voxels::Voxelize* const& Pathfinding::RecastGraph::__cordl_internal_get_globalVox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalVox;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_globalVox(::Pathfinding::Voxels::Voxelize*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalVox = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::NavmeshTile*>*& Pathfinding::RecastGraph::__cordl_internal_get_stagingTiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stagingTiles;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::NavmeshTile*>* const& Pathfinding::RecastGraph::__cordl_internal_get_stagingTiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stagingTiles;
}
constexpr void Pathfinding::RecastGraph::__cordl_internal_set_stagingTiles(::System::Collections::Generic::List_1<::Pathfinding::NavmeshTile*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stagingTiles = value;
}
inline bool Pathfinding::RecastGraph::get_RecalculateNormals()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RecastGraph*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Pathfinding::RecastGraph::get_TileWorldSizeX()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RecastGraph*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Pathfinding::RecastGraph::get_TileWorldSizeZ()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RecastGraph*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Pathfinding::RecastGraph::get_MaxTileConnectionEdgeDistance()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RecastGraph*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Bounds Pathfinding::RecastGraph::get_forcedBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"get_forcedBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::RecastGraph::ClosestPointOnNode(::Pathfinding::TriangleMeshNode*  node, ::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"ClosestPointOnNode", {}, {::i2c::type_of<::Pathfinding::TriangleMeshNode*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, node, pos);
}
inline bool Pathfinding::RecastGraph::ContainsPoint(::Pathfinding::TriangleMeshNode*  node, ::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"ContainsPoint", {}, {::i2c::type_of<::Pathfinding::TriangleMeshNode*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node, pos);
}
inline void Pathfinding::RecastGraph::SnapForceBoundsToScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"SnapForceBoundsToScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::GraphUpdateThreading Pathfinding::RecastGraph::Pathfinding_IUpdatableGraph_CanUpdateAsync(::Pathfinding::GraphUpdateObject*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"Pathfinding.IUpdatableGraph.CanUpdateAsync", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphUpdateThreading>(this, ___internal_method, o);
}
inline void Pathfinding::RecastGraph::Pathfinding_IUpdatableGraph_UpdateAreaInit(::Pathfinding::GraphUpdateObject*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateAreaInit", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void Pathfinding::RecastGraph::Pathfinding_IUpdatableGraph_UpdateArea(::Pathfinding::GraphUpdateObject*  guo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateArea", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, guo);
}
inline void Pathfinding::RecastGraph::Pathfinding_IUpdatableGraph_UpdateAreaPost(::Pathfinding::GraphUpdateObject*  guo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateAreaPost", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, guo);
}
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* Pathfinding::RecastGraph::ScanInternal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RecastGraph*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(this, ___internal_method);
}
inline ::Pathfinding::Util::GraphTransform* Pathfinding::RecastGraph::CalculateTransform()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RecastGraph*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Util::GraphTransform*>(this, ___internal_method);
}
inline void Pathfinding::RecastGraph::InitializeTileInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"InitializeTileInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*> Pathfinding::RecastGraph::PutMeshesIntoTileBuckets(::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  meshes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"PutMeshesIntoTileBuckets", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>>(this, ___internal_method, meshes);
}
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* Pathfinding::RecastGraph::ScanAllTiles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"ScanAllTiles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>* Pathfinding::RecastGraph::CollectMeshes(::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"CollectMeshes", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>(this, ___internal_method, bounds);
}
inline float_t Pathfinding::RecastGraph::get_CellHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"get_CellHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t Pathfinding::RecastGraph::get_CharacterRadiusInVoxels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"get_CharacterRadiusInVoxels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::RecastGraph::get_TileBorderSizeInVoxels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"get_TileBorderSizeInVoxels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t Pathfinding::RecastGraph::get_TileBorderSizeInWorldUnits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"get_TileBorderSizeInWorldUnits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Bounds Pathfinding::RecastGraph::CalculateTileBoundsWithBorder(int32_t  x, int32_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"CalculateTileBoundsWithBorder", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, x, z);
}
inline ::Pathfinding::NavmeshTile* Pathfinding::RecastGraph::BuildTileMesh(::Pathfinding::Voxels::Voxelize*  vox, int32_t  x, int32_t  z, int32_t  threadIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"BuildTileMesh", {}, {::i2c::type_of<::Pathfinding::Voxels::Voxelize*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NavmeshTile*>(this, ___internal_method, vox, x, z, threadIndex);
}
inline ::Pathfinding::NavmeshTile* Pathfinding::RecastGraph::CreateTile(::Pathfinding::Voxels::Voxelize*  vox, ::Pathfinding::Voxels::VoxelMesh  mesh, int32_t  x, int32_t  z, int32_t  threadIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {"CreateTile", {}, {::i2c::type_of<::Pathfinding::Voxels::Voxelize*>(), ::i2c::type_of<::Pathfinding::Voxels::VoxelMesh>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NavmeshTile*>(this, ___internal_method, vox, mesh, x, z, threadIndex);
}
inline void Pathfinding::RecastGraph::DeserializeSettingsCompatibility(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RecastGraph*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::RecastGraph::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RecastGraph* Pathfinding::RecastGraph::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RecastGraph*>());
}
/// @brief Convert operator to "::Pathfinding::IUpdatableGraph"
constexpr  Pathfinding::RecastGraph::operator ::Pathfinding::IUpdatableGraph*() noexcept {
return static_cast<::Pathfinding::IUpdatableGraph*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::IUpdatableGraph"
constexpr ::Pathfinding::IUpdatableGraph* Pathfinding::RecastGraph::i___Pathfinding__IUpdatableGraph() noexcept {
return static_cast<::Pathfinding::IUpdatableGraph*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::RecastGraph::RecastGraph()   {
}
//  Writing Method size for method: ::Pathfinding::RecastGraph__ScanInternal_d__46._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastGraph__ScanInternal_d__46::*)(int32_t)>(&::Pathfinding::RecastGraph__ScanInternal_d__46::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e90ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanInternal_d__46*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph__ScanInternal_d__46.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastGraph__ScanInternal_d__46::*)()>(&::Pathfinding::RecastGraph__ScanInternal_d__46::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e93e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanInternal_d__46*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph__ScanInternal_d__46.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RecastGraph__ScanInternal_d__46::*)()>(&::Pathfinding::RecastGraph__ScanInternal_d__46::MoveNext)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x5e93e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanInternal_d__46*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph__ScanInternal_d__46.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastGraph__ScanInternal_d__46::*)()>(&::Pathfinding::RecastGraph__ScanInternal_d__46::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e941c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanInternal_d__46*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph__ScanInternal_d__46.System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Progress (::Pathfinding::RecastGraph__ScanInternal_d__46::*)()>(&::Pathfinding::RecastGraph__ScanInternal_d__46::System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e94274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanInternal_d__46*>(),
                        {"System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph__ScanInternal_d__46.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastGraph__ScanInternal_d__46::*)()>(&::Pathfinding::RecastGraph__ScanInternal_d__46::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e94280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanInternal_d__46*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph__ScanInternal_d__46.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::RecastGraph__ScanInternal_d__46::*)()>(&::Pathfinding::RecastGraph__ScanInternal_d__46::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e942b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanInternal_d__46*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph__ScanInternal_d__46.System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* (::Pathfinding::RecastGraph__ScanInternal_d__46::*)()>(&::Pathfinding::RecastGraph__ScanInternal_d__46::System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e94314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanInternal_d__46*>(),
                        {"System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph__ScanInternal_d__46.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::RecastGraph__ScanInternal_d__46::*)()>(&::Pathfinding::RecastGraph__ScanInternal_d__46::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e943b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanInternal_d__46*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::RecastGraph__ScanInternal_d__46::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::RecastGraph__ScanInternal_d__46::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::RecastGraph__ScanInternal_d__46::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::Pathfinding::Progress& Pathfinding::RecastGraph__ScanInternal_d__46::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::Pathfinding::Progress const& Pathfinding::RecastGraph__ScanInternal_d__46::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::RecastGraph__ScanInternal_d__46::__cordl_internal_set___2__current(::Pathfinding::Progress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Pathfinding::RecastGraph__ScanInternal_d__46::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Pathfinding::RecastGraph__ScanInternal_d__46::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Pathfinding::RecastGraph__ScanInternal_d__46::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::Pathfinding::RecastGraph*& Pathfinding::RecastGraph__ScanInternal_d__46::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Pathfinding::RecastGraph* const& Pathfinding::RecastGraph__ScanInternal_d__46::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::RecastGraph__ScanInternal_d__46::__cordl_internal_set___4__this(::Pathfinding::RecastGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*& Pathfinding::RecastGraph__ScanInternal_d__46::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* const& Pathfinding::RecastGraph__ScanInternal_d__46::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void Pathfinding::RecastGraph__ScanInternal_d__46::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
inline void Pathfinding::RecastGraph__ScanInternal_d__46::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanInternal_d__46*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::RecastGraph__ScanInternal_d__46::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanInternal_d__46*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::RecastGraph__ScanInternal_d__46::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanInternal_d__46*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::RecastGraph__ScanInternal_d__46::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanInternal_d__46*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Progress Pathfinding::RecastGraph__ScanInternal_d__46::System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanInternal_d__46*>(),
                        {"System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Progress>(this, ___internal_method);
}
inline void Pathfinding::RecastGraph__ScanInternal_d__46::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanInternal_d__46*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::RecastGraph__ScanInternal_d__46::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanInternal_d__46*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* Pathfinding::RecastGraph__ScanInternal_d__46::System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanInternal_d__46*>(),
                        {"System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Pathfinding::RecastGraph__ScanInternal_d__46::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanInternal_d__46*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::RecastGraph__ScanInternal_d__46* Pathfinding::RecastGraph__ScanInternal_d__46::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RecastGraph__ScanInternal_d__46*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr  Pathfinding::RecastGraph__ScanInternal_d__46::operator ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* Pathfinding::RecastGraph__ScanInternal_d__46::i___System__Collections__Generic__IEnumerable_1___Pathfinding__Progress_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Pathfinding::RecastGraph__ScanInternal_d__46::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Pathfinding::RecastGraph__ScanInternal_d__46::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr  Pathfinding::RecastGraph__ScanInternal_d__46::operator ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* Pathfinding::RecastGraph__ScanInternal_d__46::i___System__Collections__Generic__IEnumerator_1___Pathfinding__Progress_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::RecastGraph__ScanInternal_d__46::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::RecastGraph__ScanInternal_d__46::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::RecastGraph__ScanInternal_d__46::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::RecastGraph__ScanInternal_d__46::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::RecastGraph__ScanInternal_d__46::RecastGraph__ScanInternal_d__46()   {
}
//  Writing Method size for method: ::Pathfinding::RecastGraph__ScanAllTiles_d__50._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastGraph__ScanAllTiles_d__50::*)(int32_t)>(&::Pathfinding::RecastGraph__ScanAllTiles_d__50::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e916a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanAllTiles_d__50*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph__ScanAllTiles_d__50.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastGraph__ScanAllTiles_d__50::*)()>(&::Pathfinding::RecastGraph__ScanAllTiles_d__50::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e92978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanAllTiles_d__50*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph__ScanAllTiles_d__50.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RecastGraph__ScanAllTiles_d__50::*)()>(&::Pathfinding::RecastGraph__ScanAllTiles_d__50::MoveNext)> {
  constexpr static std::size_t size = 0x11cc;
  constexpr static std::size_t addrs = 0x5e929b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanAllTiles_d__50*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph__ScanAllTiles_d__50.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastGraph__ScanAllTiles_d__50::*)()>(&::Pathfinding::RecastGraph__ScanAllTiles_d__50::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e93b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanAllTiles_d__50*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph__ScanAllTiles_d__50.__m__Finally2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastGraph__ScanAllTiles_d__50::*)()>(&::Pathfinding::RecastGraph__ScanAllTiles_d__50::__m__Finally2)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e93c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanAllTiles_d__50*>(),
                        {"<>m__Finally2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph__ScanAllTiles_d__50.System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Progress (::Pathfinding::RecastGraph__ScanAllTiles_d__50::*)()>(&::Pathfinding::RecastGraph__ScanAllTiles_d__50::System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e93cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanAllTiles_d__50*>(),
                        {"System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph__ScanAllTiles_d__50.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastGraph__ScanAllTiles_d__50::*)()>(&::Pathfinding::RecastGraph__ScanAllTiles_d__50::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e93ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanAllTiles_d__50*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph__ScanAllTiles_d__50.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::RecastGraph__ScanAllTiles_d__50::*)()>(&::Pathfinding::RecastGraph__ScanAllTiles_d__50::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e93d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanAllTiles_d__50*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph__ScanAllTiles_d__50.System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* (::Pathfinding::RecastGraph__ScanAllTiles_d__50::*)()>(&::Pathfinding::RecastGraph__ScanAllTiles_d__50::System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e93d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanAllTiles_d__50*>(),
                        {"System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph__ScanAllTiles_d__50.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::RecastGraph__ScanAllTiles_d__50::*)()>(&::Pathfinding::RecastGraph__ScanAllTiles_d__50::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e93e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanAllTiles_d__50*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::Pathfinding::Progress& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::Pathfinding::Progress const& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_set___2__current(::Pathfinding::Progress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::Pathfinding::RecastGraph*& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Pathfinding::RecastGraph* const& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_set___4__this(::Pathfinding::RecastGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Pathfinding::RecastGraph___c__DisplayClass50_0*& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::Pathfinding::RecastGraph___c__DisplayClass50_0* const& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_set___8__1(::Pathfinding::RecastGraph___c__DisplayClass50_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
constexpr ::Pathfinding::RecastGraph___c__DisplayClass50_1*& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get___8__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__2;
}
constexpr ::Pathfinding::RecastGraph___c__DisplayClass50_1* const& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get___8__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__2;
}
constexpr void Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_set___8__2(::Pathfinding::RecastGraph___c__DisplayClass50_1*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__2 = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get__meshes_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshes_5__2;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>* const& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get__meshes_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshes_5__2;
}
constexpr void Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_set__meshes_5__2(::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshes_5__2 = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::Int2>*& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get__tileQueue_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tileQueue_5__3;
}
constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::Int2>* const& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get__tileQueue_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tileQueue_5__3;
}
constexpr void Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_set__tileQueue_5__3(::System::Collections::Generic::Queue_1<::Pathfinding::Int2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tileQueue_5__3 = value;
}
constexpr int32_t& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get__timeoutMillis_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeoutMillis_5__4;
}
constexpr int32_t const& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get__timeoutMillis_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeoutMillis_5__4;
}
constexpr void Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_set__timeoutMillis_5__4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeoutMillis_5__4 = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>*& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get___7__wrap4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap4;
}
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* const& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get___7__wrap4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap4;
}
constexpr void Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_set___7__wrap4(::System::Collections::Generic::IEnumerator_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap4 = value;
}
constexpr int32_t& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get__coordinateSum_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coordinateSum_5__6;
}
constexpr int32_t const& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get__coordinateSum_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coordinateSum_5__6;
}
constexpr void Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_set__coordinateSum_5__6(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____coordinateSum_5__6 = value;
}
constexpr int32_t& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get__numTilesInQueue_5__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numTilesInQueue_5__7;
}
constexpr int32_t const& Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_get__numTilesInQueue_5__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numTilesInQueue_5__7;
}
constexpr void Pathfinding::RecastGraph__ScanAllTiles_d__50::__cordl_internal_set__numTilesInQueue_5__7(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____numTilesInQueue_5__7 = value;
}
inline void Pathfinding::RecastGraph__ScanAllTiles_d__50::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanAllTiles_d__50*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::RecastGraph__ScanAllTiles_d__50::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanAllTiles_d__50*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::RecastGraph__ScanAllTiles_d__50::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanAllTiles_d__50*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::RecastGraph__ScanAllTiles_d__50::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanAllTiles_d__50*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RecastGraph__ScanAllTiles_d__50::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanAllTiles_d__50*>(),
                        {"<>m__Finally2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Progress Pathfinding::RecastGraph__ScanAllTiles_d__50::System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanAllTiles_d__50*>(),
                        {"System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Progress>(this, ___internal_method);
}
inline void Pathfinding::RecastGraph__ScanAllTiles_d__50::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanAllTiles_d__50*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::RecastGraph__ScanAllTiles_d__50::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanAllTiles_d__50*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* Pathfinding::RecastGraph__ScanAllTiles_d__50::System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanAllTiles_d__50*>(),
                        {"System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Pathfinding::RecastGraph__ScanAllTiles_d__50::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph__ScanAllTiles_d__50*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::RecastGraph__ScanAllTiles_d__50* Pathfinding::RecastGraph__ScanAllTiles_d__50::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RecastGraph__ScanAllTiles_d__50*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr  Pathfinding::RecastGraph__ScanAllTiles_d__50::operator ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* Pathfinding::RecastGraph__ScanAllTiles_d__50::i___System__Collections__Generic__IEnumerable_1___Pathfinding__Progress_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Pathfinding::RecastGraph__ScanAllTiles_d__50::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Pathfinding::RecastGraph__ScanAllTiles_d__50::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr  Pathfinding::RecastGraph__ScanAllTiles_d__50::operator ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* Pathfinding::RecastGraph__ScanAllTiles_d__50::i___System__Collections__Generic__IEnumerator_1___Pathfinding__Progress_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::RecastGraph__ScanAllTiles_d__50::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::RecastGraph__ScanAllTiles_d__50::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::RecastGraph__ScanAllTiles_d__50::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::RecastGraph__ScanAllTiles_d__50::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::RecastGraph__ScanAllTiles_d__50::RecastGraph__ScanAllTiles_d__50()   {
}
//  Writing Method size for method: ::Pathfinding::RecastGraph___c__DisplayClass50_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastGraph___c__DisplayClass50_1::*)()>(&::Pathfinding::RecastGraph___c__DisplayClass50_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e9286c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph___c__DisplayClass50_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph___c__DisplayClass50_1._ScanAllTiles_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastGraph___c__DisplayClass50_1::*)(::Pathfinding::Int2, int32_t)>(&::Pathfinding::RecastGraph___c__DisplayClass50_1::_ScanAllTiles_b__2)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5e92874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph___c__DisplayClass50_1*>(),
                        {"<ScanAllTiles>b__2", {}, {::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::RecastGraph___c__DisplayClass50_1::__cordl_internal_get_direction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr int32_t const& Pathfinding::RecastGraph___c__DisplayClass50_1::__cordl_internal_get_direction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr void Pathfinding::RecastGraph___c__DisplayClass50_1::__cordl_internal_set_direction(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___direction = value;
}
constexpr ::Pathfinding::RecastGraph___c__DisplayClass50_0*& Pathfinding::RecastGraph___c__DisplayClass50_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::Pathfinding::RecastGraph___c__DisplayClass50_0* const& Pathfinding::RecastGraph___c__DisplayClass50_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void Pathfinding::RecastGraph___c__DisplayClass50_1::__cordl_internal_set_CS$__8__locals1(::Pathfinding::RecastGraph___c__DisplayClass50_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void Pathfinding::RecastGraph___c__DisplayClass50_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph___c__DisplayClass50_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RecastGraph___c__DisplayClass50_1::_ScanAllTiles_b__2(::Pathfinding::Int2  tile, int32_t  threadIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph___c__DisplayClass50_1*>(),
                        {"<ScanAllTiles>b__2", {}, {::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tile, threadIndex);
}
inline ::Pathfinding::RecastGraph___c__DisplayClass50_1* Pathfinding::RecastGraph___c__DisplayClass50_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RecastGraph___c__DisplayClass50_1*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::RecastGraph___c__DisplayClass50_1::RecastGraph___c__DisplayClass50_1()   {
}
//  Writing Method size for method: ::Pathfinding::RecastGraph___c__DisplayClass50_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastGraph___c__DisplayClass50_0::*)()>(&::Pathfinding::RecastGraph___c__DisplayClass50_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e92734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph___c__DisplayClass50_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph___c__DisplayClass50_0._ScanAllTiles_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastGraph___c__DisplayClass50_0::*)(::Pathfinding::Int2, int32_t)>(&::Pathfinding::RecastGraph___c__DisplayClass50_0::_ScanAllTiles_b__0)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5e9273c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph___c__DisplayClass50_0*>(),
                        {"<ScanAllTiles>b__0", {}, {::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastGraph___c__DisplayClass50_0._ScanAllTiles_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastGraph___c__DisplayClass50_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::RecastGraph___c__DisplayClass50_0::_ScanAllTiles_b__1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e9284c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph___c__DisplayClass50_0*>(),
                        {"<ScanAllTiles>b__1", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Pathfinding::Voxels::Voxelize*>& Pathfinding::RecastGraph___c__DisplayClass50_0::__cordl_internal_get_voxelizers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voxelizers;
}
constexpr ::ArrayW<::Pathfinding::Voxels::Voxelize*> const& Pathfinding::RecastGraph___c__DisplayClass50_0::__cordl_internal_get_voxelizers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voxelizers;
}
constexpr void Pathfinding::RecastGraph___c__DisplayClass50_0::__cordl_internal_set_voxelizers(::ArrayW<::Pathfinding::Voxels::Voxelize*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voxelizers = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>& Pathfinding::RecastGraph___c__DisplayClass50_0::__cordl_internal_get_buckets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buckets;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*> const& Pathfinding::RecastGraph___c__DisplayClass50_0::__cordl_internal_get_buckets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buckets;
}
constexpr void Pathfinding::RecastGraph___c__DisplayClass50_0::__cordl_internal_set_buckets(::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buckets = value;
}
constexpr ::Pathfinding::RecastGraph*& Pathfinding::RecastGraph___c__DisplayClass50_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Pathfinding::RecastGraph* const& Pathfinding::RecastGraph___c__DisplayClass50_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::RecastGraph___c__DisplayClass50_0::__cordl_internal_set___4__this(::Pathfinding::RecastGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr uint32_t& Pathfinding::RecastGraph___c__DisplayClass50_0::__cordl_internal_get_graphIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphIndex;
}
constexpr uint32_t const& Pathfinding::RecastGraph___c__DisplayClass50_0::__cordl_internal_get_graphIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphIndex;
}
constexpr void Pathfinding::RecastGraph___c__DisplayClass50_0::__cordl_internal_set_graphIndex(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphIndex = value;
}
inline void Pathfinding::RecastGraph___c__DisplayClass50_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph___c__DisplayClass50_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RecastGraph___c__DisplayClass50_0::_ScanAllTiles_b__0(::Pathfinding::Int2  tile, int32_t  threadIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph___c__DisplayClass50_0*>(),
                        {"<ScanAllTiles>b__0", {}, {::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tile, threadIndex);
}
inline void Pathfinding::RecastGraph___c__DisplayClass50_0::_ScanAllTiles_b__1(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastGraph___c__DisplayClass50_0*>(),
                        {"<ScanAllTiles>b__1", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::RecastGraph___c__DisplayClass50_0* Pathfinding::RecastGraph___c__DisplayClass50_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RecastGraph___c__DisplayClass50_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::RecastGraph___c__DisplayClass50_0::RecastGraph___c__DisplayClass50_0()   {
}
