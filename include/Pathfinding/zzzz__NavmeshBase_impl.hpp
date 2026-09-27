#pragma once
// IWYU pragma private; include "Pathfinding/NavmeshBase.hpp"
#include "Pathfinding/zzzz__NavGraph_impl.hpp"
#include "Pathfinding/zzzz__NavmeshTile_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__NavmeshBase_def.hpp"
#include "Pathfinding/Serialization/zzzz__GraphSerializationContext_def.hpp"
#include "Pathfinding/Util/zzzz__GraphGizmoHelper_def.hpp"
#include "Pathfinding/Util/zzzz__GraphTransform_def.hpp"
#include "Pathfinding/Util/zzzz__RetainedGizmos_def.hpp"
#include "Pathfinding/zzzz__Connection_def.hpp"
#include "Pathfinding/zzzz__GraphHitInfo_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__INavmeshHolder_def.hpp"
#include "Pathfinding/zzzz__INavmesh_def.hpp"
#include "Pathfinding/zzzz__IRaycastableGraph_def.hpp"
#include "Pathfinding/zzzz__ITransformedGraph_def.hpp"
#include "Pathfinding/zzzz__Int2_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "Pathfinding/zzzz__IntRect_def.hpp"
#include "Pathfinding/zzzz__MeshNode_def.hpp"
#include "Pathfinding/zzzz__NNConstraint_def.hpp"
#include "Pathfinding/zzzz__NNInfoInternal_def.hpp"
#include "Pathfinding/zzzz__NavmeshBase_def.hpp"
#include "Pathfinding/zzzz__NavmeshTile_def.hpp"
#include "Pathfinding/zzzz__NavmeshUpdates_def.hpp"
#include "Pathfinding/zzzz__TriangleMeshNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::NavmeshBase.get_TileWorldSizeX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::NavmeshBase::*)()>(&::Pathfinding::NavmeshBase::get_TileWorldSizeX)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.get_TileWorldSizeZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::NavmeshBase::*)()>(&::Pathfinding::NavmeshBase::get_TileWorldSizeZ)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.get_MaxTileConnectionEdgeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::NavmeshBase::*)()>(&::Pathfinding::NavmeshBase::get_MaxTileConnectionEdgeDistance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.Pathfinding_ITransformedGraph_get_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Util::GraphTransform* (::Pathfinding::NavmeshBase::*)()>(&::Pathfinding::NavmeshBase::Pathfinding_ITransformedGraph_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e7ce90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"Pathfinding.ITransformedGraph.get_transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.get_RecalculateNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::NavmeshBase::*)()>(&::Pathfinding::NavmeshBase::get_RecalculateNormals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.CalculateTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Util::GraphTransform* (::Pathfinding::NavmeshBase::*)()>(&::Pathfinding::NavmeshBase::CalculateTransform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.GetTile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NavmeshTile* (::Pathfinding::NavmeshBase::*)(int32_t, int32_t)>(&::Pathfinding::NavmeshBase::GetTile)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e7ce98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTile", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.GetVertex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Int3 (::Pathfinding::NavmeshBase::*)(int32_t)>(&::Pathfinding::NavmeshBase::GetVertex)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e7ced0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetVertex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.GetVertexInGraphSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Int3 (::Pathfinding::NavmeshBase::*)(int32_t)>(&::Pathfinding::NavmeshBase::GetVertexInGraphSpace)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e7cf14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetVertexInGraphSpace", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.GetTileIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Pathfinding::NavmeshBase::GetTileIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e7cf58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTileIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.GetVertexArrayIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::NavmeshBase::*)(int32_t)>(&::Pathfinding::NavmeshBase::GetVertexArrayIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e7cf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetVertexArrayIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.GetTileCoordinates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)(int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Pathfinding::NavmeshBase::GetTileCoordinates)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e7cf68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTileCoordinates", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.GetTiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Pathfinding::NavmeshTile*> (::Pathfinding::NavmeshBase::*)()>(&::Pathfinding::NavmeshBase::GetTiles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e7cf84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTiles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.GetTileBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Pathfinding::NavmeshBase::*)(::Pathfinding::IntRect)>(&::Pathfinding::NavmeshBase::GetTileBounds)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e7cf8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTileBounds", {}, {::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.GetTileBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Pathfinding::NavmeshBase::*)(int32_t, int32_t, int32_t, int32_t)>(&::Pathfinding::NavmeshBase::GetTileBounds)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e7d00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTileBounds", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.GetTileBoundsInGraphSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Pathfinding::NavmeshBase::*)(::Pathfinding::IntRect)>(&::Pathfinding::NavmeshBase::GetTileBoundsInGraphSpace)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e7d174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTileBoundsInGraphSpace", {}, {::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.GetTileBoundsInGraphSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Pathfinding::NavmeshBase::*)(int32_t, int32_t, int32_t, int32_t)>(&::Pathfinding::NavmeshBase::GetTileBoundsInGraphSpace)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e7d074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTileBoundsInGraphSpace", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.GetTileCoordinates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Int2 (::Pathfinding::NavmeshBase::*)(::UnityEngine::Vector3)>(&::Pathfinding::NavmeshBase::GetTileCoordinates)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e7d1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTileCoordinates", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)()>(&::Pathfinding::NavmeshBase::OnDestroy)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e7d298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.RelocateNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)(::UnityEngine::Matrix4x4)>(&::Pathfinding::NavmeshBase::RelocateNodes)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e7d388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.RelocateNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)(::Pathfinding::Util::GraphTransform*)>(&::Pathfinding::NavmeshBase::RelocateNodes)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5e7d42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"RelocateNodes", {}, {::i2c::type_of<::Pathfinding::Util::GraphTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.NewEmptyTile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NavmeshTile* (::Pathfinding::NavmeshBase::*)(int32_t, int32_t)>(&::Pathfinding::NavmeshBase::NewEmptyTile)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5e7d518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"NewEmptyTile", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.GetNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)(::System::Action_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::NavmeshBase::GetNodes)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5e7d68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.GetTouchingTiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::IntRect (::Pathfinding::NavmeshBase::*)(::UnityEngine::Bounds, float_t)>(&::Pathfinding::NavmeshBase::GetTouchingTiles)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5e7d75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTouchingTiles", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.GetTouchingTilesInGraphSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::IntRect (::Pathfinding::NavmeshBase::*)(::UnityEngine::Rect)>(&::Pathfinding::NavmeshBase::GetTouchingTilesInGraphSpace)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5e7d9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTouchingTilesInGraphSpace", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.GetTouchingTilesRound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::IntRect (::Pathfinding::NavmeshBase::*)(::UnityEngine::Bounds)>(&::Pathfinding::NavmeshBase::GetTouchingTilesRound)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x5e7dc08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTouchingTilesRound", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.ConnectTileWithNeighbours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)(::Pathfinding::NavmeshTile*, bool)>(&::Pathfinding::NavmeshBase::ConnectTileWithNeighbours)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5e7e020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"ConnectTileWithNeighbours", {}, {::i2c::type_of<::Pathfinding::NavmeshTile*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.RemoveConnectionsFromTile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)(::Pathfinding::NavmeshTile*)>(&::Pathfinding::NavmeshBase::RemoveConnectionsFromTile)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5e7edb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"RemoveConnectionsFromTile", {}, {::i2c::type_of<::Pathfinding::NavmeshTile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.RemoveConnectionsFromTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)(::Pathfinding::NavmeshTile*, ::Pathfinding::NavmeshTile*)>(&::Pathfinding::NavmeshBase::RemoveConnectionsFromTo)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5e7ef90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"RemoveConnectionsFromTo", {}, {::i2c::type_of<::Pathfinding::NavmeshTile*>(), ::i2c::type_of<::Pathfinding::NavmeshTile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.GetNearest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NNInfoInternal (::Pathfinding::NavmeshBase::*)(::UnityEngine::Vector3, ::Pathfinding::NNConstraint*, ::Pathfinding::GraphNode*)>(&::Pathfinding::NavmeshBase::GetNearest)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e7f0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.GetNearestForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NNInfoInternal (::Pathfinding::NavmeshBase::*)(::UnityEngine::Vector3, ::Pathfinding::NNConstraint*)>(&::Pathfinding::NavmeshBase::GetNearestForce)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x5e7f1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.PointOnNavmesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphNode* (::Pathfinding::NavmeshBase::*)(::UnityEngine::Vector3, ::Pathfinding::NNConstraint*)>(&::Pathfinding::NavmeshBase::PointOnNavmesh)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e7f578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"PointOnNavmesh", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.FillWithEmptyTiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)()>(&::Pathfinding::NavmeshBase::FillWithEmptyTiles)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5e7f628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"FillWithEmptyTiles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.CreateNodeConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::Pathfinding::TriangleMeshNode*>)>(&::Pathfinding::NavmeshBase::CreateNodeConnections)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x5e7f6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"CreateNodeConnections", {}, {::i2c::type_of<::ArrayW<::Pathfinding::TriangleMeshNode*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.ConnectTiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)(::Pathfinding::NavmeshTile*, ::Pathfinding::NavmeshTile*)>(&::Pathfinding::NavmeshBase::ConnectTiles)> {
  constexpr static std::size_t size = 0xc48;
  constexpr static std::size_t addrs = 0x5e7e168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"ConnectTiles", {}, {::i2c::type_of<::Pathfinding::NavmeshTile*>(), ::i2c::type_of<::Pathfinding::NavmeshTile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.StartBatchTileUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)()>(&::Pathfinding::NavmeshBase::StartBatchTileUpdate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e7fc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"StartBatchTileUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.DestroyNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)(::System::Collections::Generic::List_1<::Pathfinding::MeshNode*>*)>(&::Pathfinding::NavmeshBase::DestroyNodes)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5e7fcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"DestroyNodes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::MeshNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.TryConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)(int32_t, int32_t)>(&::Pathfinding::NavmeshBase::TryConnect)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e7fe54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"TryConnect", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.EndBatchTileUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)()>(&::Pathfinding::NavmeshBase::EndBatchTileUpdate)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x5e7fecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"EndBatchTileUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.ClearTile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)(int32_t, int32_t)>(&::Pathfinding::NavmeshBase::ClearTile)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5e80214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"ClearTile", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.PrepareNodeRecycling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)(int32_t, int32_t, ::ArrayW<::Pathfinding::Int3>, ::ArrayW<int32_t>, ::ArrayW<::Pathfinding::TriangleMeshNode*>)>(&::Pathfinding::NavmeshBase::PrepareNodeRecycling)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x5e803e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"PrepareNodeRecycling", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::Pathfinding::TriangleMeshNode*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.ReplaceTile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)(int32_t, int32_t, ::ArrayW<::Pathfinding::Int3>, ::ArrayW<int32_t>)>(&::Pathfinding::NavmeshBase::ReplaceTile)> {
  constexpr static std::size_t size = 0xba0;
  constexpr static std::size_t addrs = 0x5e80a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"ReplaceTile", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.CreateNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)(::ArrayW<::Pathfinding::TriangleMeshNode*>, ::ArrayW<int32_t>, int32_t, uint32_t)>(&::Pathfinding::NavmeshBase::CreateNodes)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x5e81624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"CreateNodes", {}, {::i2c::type_of<::ArrayW<::Pathfinding::TriangleMeshNode*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)()>(&::Pathfinding::NavmeshBase::_ctor)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5e81984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::NavmeshBase::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::NavmeshBase::Linecast)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e81ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::NavmeshBase::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Pathfinding::GraphNode*, ::by_ref<::Pathfinding::GraphHitInfo>)>(&::Pathfinding::NavmeshBase::Linecast)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e81c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphHitInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::NavmeshBase::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Pathfinding::GraphNode*)>(&::Pathfinding::NavmeshBase::Linecast)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e81ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::NavmeshBase::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Pathfinding::GraphNode*, ::by_ref<::Pathfinding::GraphHitInfo>, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::NavmeshBase::Linecast)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5e82844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphHitInfo>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::NavmeshBase::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::Pathfinding::GraphHitInfo>, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*, ::System::Func_2<::Pathfinding::GraphNode*,bool>*)>(&::Pathfinding::NavmeshBase::Linecast)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5e8290c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphHitInfo>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::NavmeshBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Pathfinding::GraphNode*, ::by_ref<::Pathfinding::GraphHitInfo>)>(&::Pathfinding::NavmeshBase::Linecast)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e829d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"Linecast", {}, {::i2c::type_of<::Pathfinding::NavmeshBase*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphHitInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::NavmeshBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Pathfinding::GraphNode*, ::by_ref<::Pathfinding::GraphHitInfo>, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*, ::System::Func_2<::Pathfinding::GraphNode*,bool>*)>(&::Pathfinding::NavmeshBase::Linecast)> {
  constexpr static std::size_t size = 0xb08;
  constexpr static std::size_t addrs = 0x5e81d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"Linecast", {}, {::i2c::type_of<::Pathfinding::NavmeshBase*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphHitInfo>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)(::Pathfinding::Util::RetainedGizmos*, bool)>(&::Pathfinding::NavmeshBase::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x5e82d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.CreateNavmeshSurfaceVisualization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)(::ArrayW<::Pathfinding::NavmeshTile*>, int32_t, int32_t, ::Pathfinding::Util::GraphGizmoHelper*)>(&::Pathfinding::NavmeshBase::CreateNavmeshSurfaceVisualization)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x5e83370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"CreateNavmeshSurfaceVisualization", {}, {::i2c::type_of<::ArrayW<::Pathfinding::NavmeshTile*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Util::GraphGizmoHelper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.CreateNavmeshOutlineVisualization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::Pathfinding::NavmeshTile*>, int32_t, int32_t, ::Pathfinding::Util::GraphGizmoHelper*)>(&::Pathfinding::NavmeshBase::CreateNavmeshOutlineVisualization)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x5e837b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"CreateNavmeshOutlineVisualization", {}, {::i2c::type_of<::ArrayW<::Pathfinding::NavmeshTile*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Util::GraphGizmoHelper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.SerializeExtraInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::NavmeshBase::SerializeExtraInfo)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x5e83b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.DeserializeExtraInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::NavmeshBase::DeserializeExtraInfo)> {
  constexpr static std::size_t size = 0x7ec;
  constexpr static std::size_t addrs = 0x5e83f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase.PostDeserialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::NavmeshBase::PostDeserialization)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x5e84714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 23}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Pathfinding::NavmeshBase::__cordl_internal_get_forcedBoundsSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forcedBoundsSize;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::NavmeshBase::__cordl_internal_get_forcedBoundsSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forcedBoundsSize;
}
constexpr void Pathfinding::NavmeshBase::__cordl_internal_set_forcedBoundsSize(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forcedBoundsSize = value;
}
constexpr bool& Pathfinding::NavmeshBase::__cordl_internal_get_showMeshOutline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showMeshOutline;
}
constexpr bool const& Pathfinding::NavmeshBase::__cordl_internal_get_showMeshOutline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showMeshOutline;
}
constexpr void Pathfinding::NavmeshBase::__cordl_internal_set_showMeshOutline(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showMeshOutline = value;
}
constexpr bool& Pathfinding::NavmeshBase::__cordl_internal_get_showNodeConnections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showNodeConnections;
}
constexpr bool const& Pathfinding::NavmeshBase::__cordl_internal_get_showNodeConnections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showNodeConnections;
}
constexpr void Pathfinding::NavmeshBase::__cordl_internal_set_showNodeConnections(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showNodeConnections = value;
}
constexpr bool& Pathfinding::NavmeshBase::__cordl_internal_get_showMeshSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showMeshSurface;
}
constexpr bool const& Pathfinding::NavmeshBase::__cordl_internal_get_showMeshSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showMeshSurface;
}
constexpr void Pathfinding::NavmeshBase::__cordl_internal_set_showMeshSurface(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showMeshSurface = value;
}
constexpr int32_t& Pathfinding::NavmeshBase::__cordl_internal_get_tileXCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tileXCount;
}
constexpr int32_t const& Pathfinding::NavmeshBase::__cordl_internal_get_tileXCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tileXCount;
}
constexpr void Pathfinding::NavmeshBase::__cordl_internal_set_tileXCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tileXCount = value;
}
constexpr int32_t& Pathfinding::NavmeshBase::__cordl_internal_get_tileZCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tileZCount;
}
constexpr int32_t const& Pathfinding::NavmeshBase::__cordl_internal_get_tileZCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tileZCount;
}
constexpr void Pathfinding::NavmeshBase::__cordl_internal_set_tileZCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tileZCount = value;
}
constexpr ::ArrayW<::Pathfinding::NavmeshTile*>& Pathfinding::NavmeshBase::__cordl_internal_get_tiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiles;
}
constexpr ::ArrayW<::Pathfinding::NavmeshTile*> const& Pathfinding::NavmeshBase::__cordl_internal_get_tiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiles;
}
constexpr void Pathfinding::NavmeshBase::__cordl_internal_set_tiles(::ArrayW<::Pathfinding::NavmeshTile*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tiles = value;
}
constexpr bool& Pathfinding::NavmeshBase::__cordl_internal_get_nearestSearchOnlyXZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearestSearchOnlyXZ;
}
constexpr bool const& Pathfinding::NavmeshBase::__cordl_internal_get_nearestSearchOnlyXZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearestSearchOnlyXZ;
}
constexpr void Pathfinding::NavmeshBase::__cordl_internal_set_nearestSearchOnlyXZ(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nearestSearchOnlyXZ = value;
}
constexpr bool& Pathfinding::NavmeshBase::__cordl_internal_get_enableNavmeshCutting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableNavmeshCutting;
}
constexpr bool const& Pathfinding::NavmeshBase::__cordl_internal_get_enableNavmeshCutting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableNavmeshCutting;
}
constexpr void Pathfinding::NavmeshBase::__cordl_internal_set_enableNavmeshCutting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableNavmeshCutting = value;
}
constexpr ::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings*& Pathfinding::NavmeshBase::__cordl_internal_get_navmeshUpdateData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navmeshUpdateData;
}
constexpr ::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings* const& Pathfinding::NavmeshBase::__cordl_internal_get_navmeshUpdateData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navmeshUpdateData;
}
constexpr void Pathfinding::NavmeshBase::__cordl_internal_set_navmeshUpdateData(::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___navmeshUpdateData = value;
}
constexpr bool& Pathfinding::NavmeshBase::__cordl_internal_get_batchTileUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___batchTileUpdate;
}
constexpr bool const& Pathfinding::NavmeshBase::__cordl_internal_get_batchTileUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___batchTileUpdate;
}
constexpr void Pathfinding::NavmeshBase::__cordl_internal_set_batchTileUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___batchTileUpdate = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Pathfinding::NavmeshBase::__cordl_internal_get_batchUpdatedTiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___batchUpdatedTiles;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Pathfinding::NavmeshBase::__cordl_internal_get_batchUpdatedTiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___batchUpdatedTiles;
}
constexpr void Pathfinding::NavmeshBase::__cordl_internal_set_batchUpdatedTiles(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___batchUpdatedTiles = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::MeshNode*>*& Pathfinding::NavmeshBase::__cordl_internal_get_batchNodesToDestroy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___batchNodesToDestroy;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::MeshNode*>* const& Pathfinding::NavmeshBase::__cordl_internal_get_batchNodesToDestroy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___batchNodesToDestroy;
}
constexpr void Pathfinding::NavmeshBase::__cordl_internal_set_batchNodesToDestroy(::System::Collections::Generic::List_1<::Pathfinding::MeshNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___batchNodesToDestroy = value;
}
constexpr ::Pathfinding::Util::GraphTransform*& Pathfinding::NavmeshBase::__cordl_internal_get_transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr ::Pathfinding::Util::GraphTransform* const& Pathfinding::NavmeshBase::__cordl_internal_get_transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr void Pathfinding::NavmeshBase::__cordl_internal_set_transform(::Pathfinding::Util::GraphTransform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transform = value;
}
constexpr ::System::Action_1<::ArrayW<::Pathfinding::NavmeshTile*>>*& Pathfinding::NavmeshBase::__cordl_internal_get_OnRecalculatedTiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRecalculatedTiles;
}
constexpr ::System::Action_1<::ArrayW<::Pathfinding::NavmeshTile*>>* const& Pathfinding::NavmeshBase::__cordl_internal_get_OnRecalculatedTiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRecalculatedTiles;
}
constexpr void Pathfinding::NavmeshBase::__cordl_internal_set_OnRecalculatedTiles(::System::Action_1<::ArrayW<::Pathfinding::NavmeshTile*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRecalculatedTiles = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& Pathfinding::NavmeshBase::__cordl_internal_get_nodeRecyclingHashBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeRecyclingHashBuffer;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& Pathfinding::NavmeshBase::__cordl_internal_get_nodeRecyclingHashBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeRecyclingHashBuffer;
}
constexpr void Pathfinding::NavmeshBase::__cordl_internal_set_nodeRecyclingHashBuffer(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeRecyclingHashBuffer = value;
}
inline void Pathfinding::NavmeshBase::setStaticF_NNConstraintDistanceXZ(::Pathfinding::NNConstraint*  value)  {
::cordl_internals::setStaticField<::Pathfinding::NNConstraint*, "NNConstraintDistanceXZ", ::Pathfinding::NavmeshBase*>(std::forward<::Pathfinding::NNConstraint*>(value));
}
inline ::Pathfinding::NNConstraint* Pathfinding::NavmeshBase::getStaticF_NNConstraintDistanceXZ()  {
return ::cordl_internals::getStaticField<::Pathfinding::NNConstraint*, "NNConstraintDistanceXZ", ::Pathfinding::NavmeshBase*>();
}
inline void Pathfinding::NavmeshBase::setStaticF_NNConstraintNoneXZ(::Pathfinding::NNConstraint*  value)  {
::cordl_internals::setStaticField<::Pathfinding::NNConstraint*, "NNConstraintNoneXZ", ::Pathfinding::NavmeshBase*>(std::forward<::Pathfinding::NNConstraint*>(value));
}
inline ::Pathfinding::NNConstraint* Pathfinding::NavmeshBase::getStaticF_NNConstraintNoneXZ()  {
return ::cordl_internals::getStaticField<::Pathfinding::NNConstraint*, "NNConstraintNoneXZ", ::Pathfinding::NavmeshBase*>();
}
inline void Pathfinding::NavmeshBase::setStaticF_LinecastShapeEdgeLookup(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "LinecastShapeEdgeLookup", ::Pathfinding::NavmeshBase*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Pathfinding::NavmeshBase::getStaticF_LinecastShapeEdgeLookup()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "LinecastShapeEdgeLookup", ::Pathfinding::NavmeshBase*>();
}
inline float_t Pathfinding::NavmeshBase::get_TileWorldSizeX()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Pathfinding::NavmeshBase::get_TileWorldSizeZ()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Pathfinding::NavmeshBase::get_MaxTileConnectionEdgeDistance()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Pathfinding::Util::GraphTransform* Pathfinding::NavmeshBase::Pathfinding_ITransformedGraph_get_transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"Pathfinding.ITransformedGraph.get_transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Util::GraphTransform*>(this, ___internal_method);
}
inline bool Pathfinding::NavmeshBase::get_RecalculateNormals()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Pathfinding::Util::GraphTransform* Pathfinding::NavmeshBase::CalculateTransform()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Util::GraphTransform*>(this, ___internal_method);
}
inline ::Pathfinding::NavmeshTile* Pathfinding::NavmeshBase::GetTile(int32_t  x, int32_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTile", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NavmeshTile*>(this, ___internal_method, x, z);
}
inline ::Pathfinding::Int3 Pathfinding::NavmeshBase::GetVertex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetVertex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Int3>(this, ___internal_method, index);
}
inline ::Pathfinding::Int3 Pathfinding::NavmeshBase::GetVertexInGraphSpace(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetVertexInGraphSpace", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Int3>(this, ___internal_method, index);
}
inline int32_t Pathfinding::NavmeshBase::GetTileIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTileIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, index);
}
inline int32_t Pathfinding::NavmeshBase::GetVertexArrayIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetVertexArrayIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline void Pathfinding::NavmeshBase::GetTileCoordinates(int32_t  tileIndex, ::by_ref<int32_t>  x, ::by_ref<int32_t>  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTileCoordinates", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tileIndex, x, z);
}
inline ::ArrayW<::Pathfinding::NavmeshTile*> Pathfinding::NavmeshBase::GetTiles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTiles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Pathfinding::NavmeshTile*>>(this, ___internal_method);
}
inline ::UnityEngine::Bounds Pathfinding::NavmeshBase::GetTileBounds(::Pathfinding::IntRect  rect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTileBounds", {}, {::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, rect);
}
inline ::UnityEngine::Bounds Pathfinding::NavmeshBase::GetTileBounds(int32_t  x, int32_t  z, int32_t  width, int32_t  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTileBounds", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, x, z, width, depth);
}
inline ::UnityEngine::Bounds Pathfinding::NavmeshBase::GetTileBoundsInGraphSpace(::Pathfinding::IntRect  rect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTileBoundsInGraphSpace", {}, {::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, rect);
}
inline ::UnityEngine::Bounds Pathfinding::NavmeshBase::GetTileBoundsInGraphSpace(int32_t  x, int32_t  z, int32_t  width, int32_t  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTileBoundsInGraphSpace", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, x, z, width, depth);
}
inline ::Pathfinding::Int2 Pathfinding::NavmeshBase::GetTileCoordinates(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTileCoordinates", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Int2>(this, ___internal_method, position);
}
inline void Pathfinding::NavmeshBase::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavmeshBase::RelocateNodes(::UnityEngine::Matrix4x4  deltaMatrix)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaMatrix);
}
inline void Pathfinding::NavmeshBase::RelocateNodes(::Pathfinding::Util::GraphTransform*  newTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"RelocateNodes", {}, {::i2c::type_of<::Pathfinding::Util::GraphTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newTransform);
}
inline ::Pathfinding::NavmeshTile* Pathfinding::NavmeshBase::NewEmptyTile(int32_t  x, int32_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"NewEmptyTile", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NavmeshTile*>(this, ___internal_method, x, z);
}
inline void Pathfinding::NavmeshBase::GetNodes(::System::Action_1<::Pathfinding::GraphNode*>*  action)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline ::Pathfinding::IntRect Pathfinding::NavmeshBase::GetTouchingTiles(::UnityEngine::Bounds  bounds, float_t  margin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTouchingTiles", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::IntRect>(this, ___internal_method, bounds, margin);
}
inline ::Pathfinding::IntRect Pathfinding::NavmeshBase::GetTouchingTilesInGraphSpace(::UnityEngine::Rect  rect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTouchingTilesInGraphSpace", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::IntRect>(this, ___internal_method, rect);
}
inline ::Pathfinding::IntRect Pathfinding::NavmeshBase::GetTouchingTilesRound(::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"GetTouchingTilesRound", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::IntRect>(this, ___internal_method, bounds);
}
inline void Pathfinding::NavmeshBase::ConnectTileWithNeighbours(::Pathfinding::NavmeshTile*  tile, bool  onlyUnflagged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"ConnectTileWithNeighbours", {}, {::i2c::type_of<::Pathfinding::NavmeshTile*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tile, onlyUnflagged);
}
inline void Pathfinding::NavmeshBase::RemoveConnectionsFromTile(::Pathfinding::NavmeshTile*  tile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"RemoveConnectionsFromTile", {}, {::i2c::type_of<::Pathfinding::NavmeshTile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tile);
}
inline void Pathfinding::NavmeshBase::RemoveConnectionsFromTo(::Pathfinding::NavmeshTile*  a, ::Pathfinding::NavmeshTile*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"RemoveConnectionsFromTo", {}, {::i2c::type_of<::Pathfinding::NavmeshTile*>(), ::i2c::type_of<::Pathfinding::NavmeshTile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b);
}
inline ::Pathfinding::NNInfoInternal Pathfinding::NavmeshBase::GetNearest(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint, ::Pathfinding::GraphNode*  hint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NNInfoInternal>(this, ___internal_method, position, constraint, hint);
}
inline ::Pathfinding::NNInfoInternal Pathfinding::NavmeshBase::GetNearestForce(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NNInfoInternal>(this, ___internal_method, position, constraint);
}
inline ::Pathfinding::GraphNode* Pathfinding::NavmeshBase::PointOnNavmesh(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"PointOnNavmesh", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphNode*>(this, ___internal_method, position, constraint);
}
inline void Pathfinding::NavmeshBase::FillWithEmptyTiles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"FillWithEmptyTiles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavmeshBase::CreateNodeConnections(::ArrayW<::Pathfinding::TriangleMeshNode*>  nodes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"CreateNodeConnections", {}, {::i2c::type_of<::ArrayW<::Pathfinding::TriangleMeshNode*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nodes);
}
inline void Pathfinding::NavmeshBase::ConnectTiles(::Pathfinding::NavmeshTile*  tile1, ::Pathfinding::NavmeshTile*  tile2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"ConnectTiles", {}, {::i2c::type_of<::Pathfinding::NavmeshTile*>(), ::i2c::type_of<::Pathfinding::NavmeshTile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tile1, tile2);
}
inline void Pathfinding::NavmeshBase::StartBatchTileUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"StartBatchTileUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavmeshBase::DestroyNodes(::System::Collections::Generic::List_1<::Pathfinding::MeshNode*>*  nodes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"DestroyNodes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::MeshNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodes);
}
inline void Pathfinding::NavmeshBase::TryConnect(int32_t  tileIdx1, int32_t  tileIdx2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"TryConnect", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tileIdx1, tileIdx2);
}
inline void Pathfinding::NavmeshBase::EndBatchTileUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"EndBatchTileUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavmeshBase::ClearTile(int32_t  x, int32_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"ClearTile", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, z);
}
inline void Pathfinding::NavmeshBase::PrepareNodeRecycling(int32_t  x, int32_t  z, ::ArrayW<::Pathfinding::Int3>  verts, ::ArrayW<int32_t>  tris, ::ArrayW<::Pathfinding::TriangleMeshNode*>  recycledNodeBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"PrepareNodeRecycling", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::Pathfinding::TriangleMeshNode*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, z, verts, tris, recycledNodeBuffer);
}
inline void Pathfinding::NavmeshBase::ReplaceTile(int32_t  x, int32_t  z, ::ArrayW<::Pathfinding::Int3>  verts, ::ArrayW<int32_t>  tris)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"ReplaceTile", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, z, verts, tris);
}
inline void Pathfinding::NavmeshBase::CreateNodes(::ArrayW<::Pathfinding::TriangleMeshNode*>  buffer, ::ArrayW<int32_t>  tris, int32_t  tileIndex, uint32_t  graphIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"CreateNodes", {}, {::i2c::type_of<::ArrayW<::Pathfinding::TriangleMeshNode*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, tris, tileIndex, graphIndex);
}
inline void Pathfinding::NavmeshBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::NavmeshBase::Linecast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, origin, end);
}
inline bool Pathfinding::NavmeshBase::Linecast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  end, ::Pathfinding::GraphNode*  hint, ::by_ref<::Pathfinding::GraphHitInfo>  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphHitInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, origin, end, hint, hit);
}
inline bool Pathfinding::NavmeshBase::Linecast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  end, ::Pathfinding::GraphNode*  hint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, origin, end, hint);
}
inline bool Pathfinding::NavmeshBase::Linecast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  end, ::Pathfinding::GraphNode*  hint, ::by_ref<::Pathfinding::GraphHitInfo>  hit, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  trace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphHitInfo>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, origin, end, hint, hit, trace);
}
inline bool Pathfinding::NavmeshBase::Linecast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  end, ::by_ref<::Pathfinding::GraphHitInfo>  hit, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  trace, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphHitInfo>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, origin, end, hit, trace, filter);
}
inline bool Pathfinding::NavmeshBase::Linecast(::Pathfinding::NavmeshBase*  graph, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  end, ::Pathfinding::GraphNode*  hint, ::by_ref<::Pathfinding::GraphHitInfo>  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"Linecast", {}, {::i2c::type_of<::Pathfinding::NavmeshBase*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphHitInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, origin, end, hint, hit);
}
inline bool Pathfinding::NavmeshBase::Linecast(::Pathfinding::NavmeshBase*  graph, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  end, ::Pathfinding::GraphNode*  hint, ::by_ref<::Pathfinding::GraphHitInfo>  hit, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  trace, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"Linecast", {}, {::i2c::type_of<::Pathfinding::NavmeshBase*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphHitInfo>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, origin, end, hint, hit, trace, filter);
}
inline void Pathfinding::NavmeshBase::OnDrawGizmos(::Pathfinding::Util::RetainedGizmos*  gizmos, bool  drawNodes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gizmos, drawNodes);
}
inline void Pathfinding::NavmeshBase::CreateNavmeshSurfaceVisualization(::ArrayW<::Pathfinding::NavmeshTile*>  tiles, int32_t  startTile, int32_t  endTile, ::Pathfinding::Util::GraphGizmoHelper*  helper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"CreateNavmeshSurfaceVisualization", {}, {::i2c::type_of<::ArrayW<::Pathfinding::NavmeshTile*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Util::GraphGizmoHelper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tiles, startTile, endTile, helper);
}
inline void Pathfinding::NavmeshBase::CreateNavmeshOutlineVisualization(::ArrayW<::Pathfinding::NavmeshTile*>  tiles, int32_t  startTile, int32_t  endTile, ::Pathfinding::Util::GraphGizmoHelper*  helper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase*>(),
                        {"CreateNavmeshOutlineVisualization", {}, {::i2c::type_of<::ArrayW<::Pathfinding::NavmeshTile*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Util::GraphGizmoHelper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tiles, startTile, endTile, helper);
}
inline void Pathfinding::NavmeshBase::SerializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::NavmeshBase::DeserializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::NavmeshBase::PostDeserialization(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshBase*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline ::Pathfinding::NavmeshBase* Pathfinding::NavmeshBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavmeshBase*>());
}
/// @brief Convert operator to "::Pathfinding::INavmesh"
constexpr  Pathfinding::NavmeshBase::operator ::Pathfinding::INavmesh*() noexcept {
return static_cast<::Pathfinding::INavmesh*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::INavmesh"
constexpr ::Pathfinding::INavmesh* Pathfinding::NavmeshBase::i___Pathfinding__INavmesh() noexcept {
return static_cast<::Pathfinding::INavmesh*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Pathfinding::INavmeshHolder"
constexpr  Pathfinding::NavmeshBase::operator ::Pathfinding::INavmeshHolder*() noexcept {
return static_cast<::Pathfinding::INavmeshHolder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::INavmeshHolder"
constexpr ::Pathfinding::INavmeshHolder* Pathfinding::NavmeshBase::i___Pathfinding__INavmeshHolder() noexcept {
return static_cast<::Pathfinding::INavmeshHolder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Pathfinding::ITransformedGraph"
constexpr  Pathfinding::NavmeshBase::operator ::Pathfinding::ITransformedGraph*() noexcept {
return static_cast<::Pathfinding::ITransformedGraph*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::ITransformedGraph"
constexpr ::Pathfinding::ITransformedGraph* Pathfinding::NavmeshBase::i___Pathfinding__ITransformedGraph() noexcept {
return static_cast<::Pathfinding::ITransformedGraph*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Pathfinding::IRaycastableGraph"
constexpr  Pathfinding::NavmeshBase::operator ::Pathfinding::IRaycastableGraph*() noexcept {
return static_cast<::Pathfinding::IRaycastableGraph*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::IRaycastableGraph"
constexpr ::Pathfinding::IRaycastableGraph* Pathfinding::NavmeshBase::i___Pathfinding__IRaycastableGraph() noexcept {
return static_cast<::Pathfinding::IRaycastableGraph*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::NavmeshBase::NavmeshBase()   {
}
//  Writing Method size for method: ::Pathfinding::NavmeshBase___c__DisplayClass84_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase___c__DisplayClass84_1::*)()>(&::Pathfinding::NavmeshBase___c__DisplayClass84_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e84f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase___c__DisplayClass84_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase___c__DisplayClass84_1._PostDeserialization_b__4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::NavmeshBase___c__DisplayClass84_1::*)(::Pathfinding::Connection)>(&::Pathfinding::NavmeshBase___c__DisplayClass84_1::_PostDeserialization_b__4)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e84f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase___c__DisplayClass84_1*>(),
                        {"<PostDeserialization>b__4", {}, {::i2c::type_of<::Pathfinding::Connection>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::TriangleMeshNode*& Pathfinding::NavmeshBase___c__DisplayClass84_1::__cordl_internal_get_triNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triNode;
}
constexpr ::Pathfinding::TriangleMeshNode* const& Pathfinding::NavmeshBase___c__DisplayClass84_1::__cordl_internal_get_triNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triNode;
}
constexpr void Pathfinding::NavmeshBase___c__DisplayClass84_1::__cordl_internal_set_triNode(::Pathfinding::TriangleMeshNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triNode = value;
}
constexpr ::System::Func_2<::Pathfinding::Connection,bool>*& Pathfinding::NavmeshBase___c__DisplayClass84_1::__cordl_internal_get___9__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__4;
}
constexpr ::System::Func_2<::Pathfinding::Connection,bool>* const& Pathfinding::NavmeshBase___c__DisplayClass84_1::__cordl_internal_get___9__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__4;
}
constexpr void Pathfinding::NavmeshBase___c__DisplayClass84_1::__cordl_internal_set___9__4(::System::Func_2<::Pathfinding::Connection,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__4 = value;
}
inline void Pathfinding::NavmeshBase___c__DisplayClass84_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase___c__DisplayClass84_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::NavmeshBase___c__DisplayClass84_1::_PostDeserialization_b__4(::Pathfinding::Connection  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase___c__DisplayClass84_1*>(),
                        {"<PostDeserialization>b__4", {}, {::i2c::type_of<::Pathfinding::Connection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, conn);
}
inline ::Pathfinding::NavmeshBase___c__DisplayClass84_1* Pathfinding::NavmeshBase___c__DisplayClass84_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavmeshBase___c__DisplayClass84_1*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::NavmeshBase___c__DisplayClass84_1::NavmeshBase___c__DisplayClass84_1()   {
}
//  Writing Method size for method: ::Pathfinding::NavmeshBase___c__DisplayClass84_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase___c__DisplayClass84_0::*)()>(&::Pathfinding::NavmeshBase___c__DisplayClass84_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e84c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase___c__DisplayClass84_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase___c__DisplayClass84_0._PostDeserialization_b__3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase___c__DisplayClass84_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::NavmeshBase___c__DisplayClass84_0::_PostDeserialization_b__3)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5e84c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase___c__DisplayClass84_0*>(),
                        {"<PostDeserialization>b__3", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::TriangleMeshNode*,::ArrayW<::Pathfinding::Connection>>*& Pathfinding::NavmeshBase___c__DisplayClass84_0::__cordl_internal_get_conns()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conns;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::TriangleMeshNode*,::ArrayW<::Pathfinding::Connection>>* const& Pathfinding::NavmeshBase___c__DisplayClass84_0::__cordl_internal_get_conns() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conns;
}
constexpr void Pathfinding::NavmeshBase___c__DisplayClass84_0::__cordl_internal_set_conns(::System::Collections::Generic::Dictionary_2<::Pathfinding::TriangleMeshNode*,::ArrayW<::Pathfinding::Connection>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conns = value;
}
inline void Pathfinding::NavmeshBase___c__DisplayClass84_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase___c__DisplayClass84_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavmeshBase___c__DisplayClass84_0::_PostDeserialization_b__3(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase___c__DisplayClass84_0*>(),
                        {"<PostDeserialization>b__3", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::NavmeshBase___c__DisplayClass84_0* Pathfinding::NavmeshBase___c__DisplayClass84_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavmeshBase___c__DisplayClass84_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::NavmeshBase___c__DisplayClass84_0::NavmeshBase___c__DisplayClass84_0()   {
}
//  Writing Method size for method: ::Pathfinding::NavmeshBase___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshBase___c::*)()>(&::Pathfinding::NavmeshBase___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e84bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase___c._PostDeserialization_b__84_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::TriangleMeshNode*>* (::Pathfinding::NavmeshBase___c::*)(::Pathfinding::NavmeshTile*)>(&::Pathfinding::NavmeshBase___c::_PostDeserialization_b__84_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e84bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase___c*>(),
                        {"<PostDeserialization>b__84_0", {}, {::i2c::type_of<::Pathfinding::NavmeshTile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase___c._PostDeserialization_b__84_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::TriangleMeshNode* (::Pathfinding::NavmeshBase___c::*)(::Pathfinding::TriangleMeshNode*)>(&::Pathfinding::NavmeshBase___c::_PostDeserialization_b__84_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e84bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase___c*>(),
                        {"<PostDeserialization>b__84_1", {}, {::i2c::type_of<::Pathfinding::TriangleMeshNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshBase___c._PostDeserialization_b__84_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Pathfinding::Connection> (::Pathfinding::NavmeshBase___c::*)(::Pathfinding::TriangleMeshNode*)>(&::Pathfinding::NavmeshBase___c::_PostDeserialization_b__84_2)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5e84bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase___c*>(),
                        {"<PostDeserialization>b__84_2", {}, {::i2c::type_of<::Pathfinding::TriangleMeshNode*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::NavmeshBase___c::setStaticF___9(::Pathfinding::NavmeshBase___c*  value)  {
::cordl_internals::setStaticField<::Pathfinding::NavmeshBase___c*, "<>9", ::Pathfinding::NavmeshBase___c*>(std::forward<::Pathfinding::NavmeshBase___c*>(value));
}
inline ::Pathfinding::NavmeshBase___c* Pathfinding::NavmeshBase___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Pathfinding::NavmeshBase___c*, "<>9", ::Pathfinding::NavmeshBase___c*>();
}
inline void Pathfinding::NavmeshBase___c::setStaticF___9__84_0(::System::Func_2<::Pathfinding::NavmeshTile*,::System::Collections::Generic::IEnumerable_1<::Pathfinding::TriangleMeshNode*>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Pathfinding::NavmeshTile*,::System::Collections::Generic::IEnumerable_1<::Pathfinding::TriangleMeshNode*>*>*, "<>9__84_0", ::Pathfinding::NavmeshBase___c*>(std::forward<::System::Func_2<::Pathfinding::NavmeshTile*,::System::Collections::Generic::IEnumerable_1<::Pathfinding::TriangleMeshNode*>*>*>(value));
}
inline ::System::Func_2<::Pathfinding::NavmeshTile*,::System::Collections::Generic::IEnumerable_1<::Pathfinding::TriangleMeshNode*>*>* Pathfinding::NavmeshBase___c::getStaticF___9__84_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Pathfinding::NavmeshTile*,::System::Collections::Generic::IEnumerable_1<::Pathfinding::TriangleMeshNode*>*>*, "<>9__84_0", ::Pathfinding::NavmeshBase___c*>();
}
inline void Pathfinding::NavmeshBase___c::setStaticF___9__84_1(::System::Func_2<::Pathfinding::TriangleMeshNode*,::Pathfinding::TriangleMeshNode*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Pathfinding::TriangleMeshNode*,::Pathfinding::TriangleMeshNode*>*, "<>9__84_1", ::Pathfinding::NavmeshBase___c*>(std::forward<::System::Func_2<::Pathfinding::TriangleMeshNode*,::Pathfinding::TriangleMeshNode*>*>(value));
}
inline ::System::Func_2<::Pathfinding::TriangleMeshNode*,::Pathfinding::TriangleMeshNode*>* Pathfinding::NavmeshBase___c::getStaticF___9__84_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Pathfinding::TriangleMeshNode*,::Pathfinding::TriangleMeshNode*>*, "<>9__84_1", ::Pathfinding::NavmeshBase___c*>();
}
inline void Pathfinding::NavmeshBase___c::setStaticF___9__84_2(::System::Func_2<::Pathfinding::TriangleMeshNode*,::ArrayW<::Pathfinding::Connection>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Pathfinding::TriangleMeshNode*,::ArrayW<::Pathfinding::Connection>>*, "<>9__84_2", ::Pathfinding::NavmeshBase___c*>(std::forward<::System::Func_2<::Pathfinding::TriangleMeshNode*,::ArrayW<::Pathfinding::Connection>>*>(value));
}
inline ::System::Func_2<::Pathfinding::TriangleMeshNode*,::ArrayW<::Pathfinding::Connection>>* Pathfinding::NavmeshBase___c::getStaticF___9__84_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Pathfinding::TriangleMeshNode*,::ArrayW<::Pathfinding::Connection>>*, "<>9__84_2", ::Pathfinding::NavmeshBase___c*>();
}
inline void Pathfinding::NavmeshBase___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::TriangleMeshNode*>* Pathfinding::NavmeshBase___c::_PostDeserialization_b__84_0(::Pathfinding::NavmeshTile*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase___c*>(),
                        {"<PostDeserialization>b__84_0", {}, {::i2c::type_of<::Pathfinding::NavmeshTile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Pathfinding::TriangleMeshNode*>*>(this, ___internal_method, s);
}
inline ::Pathfinding::TriangleMeshNode* Pathfinding::NavmeshBase___c::_PostDeserialization_b__84_1(::Pathfinding::TriangleMeshNode*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase___c*>(),
                        {"<PostDeserialization>b__84_1", {}, {::i2c::type_of<::Pathfinding::TriangleMeshNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::TriangleMeshNode*>(this, ___internal_method, n);
}
inline ::ArrayW<::Pathfinding::Connection> Pathfinding::NavmeshBase___c::_PostDeserialization_b__84_2(::Pathfinding::TriangleMeshNode*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshBase___c*>(),
                        {"<PostDeserialization>b__84_2", {}, {::i2c::type_of<::Pathfinding::TriangleMeshNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Pathfinding::Connection>>(this, ___internal_method, n);
}
inline ::Pathfinding::NavmeshBase___c* Pathfinding::NavmeshBase___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavmeshBase___c*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::NavmeshBase___c::NavmeshBase___c()   {
}
