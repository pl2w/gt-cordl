#pragma once
// IWYU pragma private; include "Pathfinding/LayerGridGraph.hpp"
#include "Pathfinding/zzzz__GridGraph_impl.hpp"
#include "Pathfinding/zzzz__LayerGridGraph_HeightSample_impl.hpp"
#include "Pathfinding/zzzz__Progress_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__LayerGridGraph_def.hpp"
#include "Pathfinding/Serialization/zzzz__GraphSerializationContext_def.hpp"
#include "Pathfinding/zzzz__GraphCollision_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateObject_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateShape_def.hpp"
#include "Pathfinding/zzzz__GridNodeBase_def.hpp"
#include "Pathfinding/zzzz__IUpdatableGraph_def.hpp"
#include "Pathfinding/zzzz__IntRect_def.hpp"
#include "Pathfinding/zzzz__LayerGridGraph_HeightSample_def.hpp"
#include "Pathfinding/zzzz__LayerGridGraph_def.hpp"
#include "Pathfinding/zzzz__LevelGridNode_def.hpp"
#include "Pathfinding/zzzz__NNConstraint_def.hpp"
#include "Pathfinding/zzzz__NNInfoInternal_def.hpp"
#include "Pathfinding/zzzz__Progress_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LayerGridGraph::*)()>(&::Pathfinding::LayerGridGraph::OnDestroy)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e77f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                    {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.RemoveGridGraphFromStatic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LayerGridGraph::*)()>(&::Pathfinding::LayerGridGraph::RemoveGridGraphFromStatic)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e77f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                        {"RemoveGridGraphFromStatic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.get_uniformWidthDepthGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::LayerGridGraph::*)()>(&::Pathfinding::LayerGridGraph::get_uniformWidthDepthGrid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e78204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                    {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.get_LayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::LayerGridGraph::*)()>(&::Pathfinding::LayerGridGraph::get_LayerCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e7820c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                    {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.CountNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::LayerGridGraph::*)()>(&::Pathfinding::LayerGridGraph::CountNodes)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5e78214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                    {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.GetNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LayerGridGraph::*)(::System::Action_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::LayerGridGraph::GetNodes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e78254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                    {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.GetNodesInRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* (::Pathfinding::LayerGridGraph::*)(::UnityEngine::Bounds, ::Pathfinding::GraphUpdateShape*)>(&::Pathfinding::LayerGridGraph::GetNodesInRegion)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5e782c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                    {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.GetNodesInRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* (::Pathfinding::LayerGridGraph::*)(::Pathfinding::IntRect)>(&::Pathfinding::LayerGridGraph::GetNodesInRegion)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5e785a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                    {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.GetNodesInRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::LayerGridGraph::*)(::Pathfinding::IntRect, ::ArrayW<::Pathfinding::GridNodeBase*>)>(&::Pathfinding::LayerGridGraph::GetNodesInRegion)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5e787c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                    {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.GetNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GridNodeBase* (::Pathfinding::LayerGridGraph::*)(int32_t, int32_t)>(&::Pathfinding::LayerGridGraph::GetNode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e78a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                    {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.GetNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GridNodeBase* (::Pathfinding::LayerGridGraph::*)(int32_t, int32_t, int32_t)>(&::Pathfinding::LayerGridGraph::GetNode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e78ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                        {"GetNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.Pathfinding_IUpdatableGraph_UpdateArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LayerGridGraph::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::LayerGridGraph::Pathfinding_IUpdatableGraph_UpdateArea)> {
  constexpr static std::size_t size = 0x854;
  constexpr static std::size_t addrs = 0x5e78b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateArea", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.ScanInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* (::Pathfinding::LayerGridGraph::*)()>(&::Pathfinding::LayerGridGraph::ScanInternal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e793a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                    {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.SampleHeights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::LayerGridGraph_HeightSample> (*)(::Pathfinding::GraphCollision*, float_t, ::UnityEngine::Vector3, ::by_ref<int32_t>)>(&::Pathfinding::LayerGridGraph::SampleHeights)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x5e79454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                        {"SampleHeights", {}, {::i2c::type_of<::Pathfinding::GraphCollision*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.RecalculateCell
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LayerGridGraph::*)(int32_t, int32_t, bool, bool)>(&::Pathfinding::LayerGridGraph::RecalculateCell)> {
  constexpr static std::size_t size = 0x914;
  constexpr static std::size_t addrs = 0x5e79828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                    {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.AddLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LayerGridGraph::*)(int32_t)>(&::Pathfinding::LayerGridGraph::AddLayers)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5e7a13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                        {"AddLayers", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.ErosionAnyFalseConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::LayerGridGraph::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::LayerGridGraph::ErosionAnyFalseConnections)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5e7a360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                    {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.CalculateConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LayerGridGraph::*)(::Pathfinding::GridNodeBase*)>(&::Pathfinding::LayerGridGraph::CalculateConnections)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e7a4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                    {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.CalculateConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LayerGridGraph::*)(int32_t, int32_t, int32_t, ::Pathfinding::LevelGridNode*)>(&::Pathfinding::LayerGridGraph::CalculateConnections)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e7a97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                        {"CalculateConnections", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::LevelGridNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.CalculateConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LayerGridGraph::*)(int32_t, int32_t)>(&::Pathfinding::LayerGridGraph::CalculateConnections)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e7a980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                    {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.CalculateConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LayerGridGraph::*)(int32_t, int32_t, int32_t)>(&::Pathfinding::LayerGridGraph::CalculateConnections)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x5e7a54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                        {"CalculateConnections", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.GetNearest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NNInfoInternal (::Pathfinding::LayerGridGraph::*)(::UnityEngine::Vector3, ::Pathfinding::NNConstraint*, ::Pathfinding::GraphNode*)>(&::Pathfinding::LayerGridGraph::GetNearest)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5e7ab00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                    {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.GetNearestFromGraphSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GridNodeBase* (::Pathfinding::LayerGridGraph::*)(::UnityEngine::Vector3)>(&::Pathfinding::LayerGridGraph::GetNearestFromGraphSpace)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e7ade4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                    {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.GetNearestNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GridNodeBase* (::Pathfinding::LayerGridGraph::*)(::UnityEngine::Vector3, int32_t, int32_t, ::Pathfinding::NNConstraint*)>(&::Pathfinding::LayerGridGraph::GetNearestNode)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5e7acb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                        {"GetNearestNode", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::NNConstraint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.CheckConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::LevelGridNode*, int32_t)>(&::Pathfinding::LayerGridGraph::CheckConnection)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e7aea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                        {"CheckConnection", {}, {::i2c::type_of<::Pathfinding::LevelGridNode*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.SerializeExtraInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LayerGridGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::LayerGridGraph::SerializeExtraInfo)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5e7aebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                    {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.DeserializeExtraInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LayerGridGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::LayerGridGraph::DeserializeExtraInfo)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5e7afdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                    {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph.PostDeserialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LayerGridGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::LayerGridGraph::PostDeserialization)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5e7b1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                    {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LayerGridGraph::*)()>(&::Pathfinding::LayerGridGraph::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e7b3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::LayerGridGraph::__cordl_internal_get_layerCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerCount;
}
constexpr int32_t const& Pathfinding::LayerGridGraph::__cordl_internal_get_layerCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerCount;
}
constexpr void Pathfinding::LayerGridGraph::__cordl_internal_set_layerCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerCount = value;
}
constexpr float_t& Pathfinding::LayerGridGraph::__cordl_internal_get_mergeSpanRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mergeSpanRange;
}
constexpr float_t const& Pathfinding::LayerGridGraph::__cordl_internal_get_mergeSpanRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mergeSpanRange;
}
constexpr void Pathfinding::LayerGridGraph::__cordl_internal_set_mergeSpanRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mergeSpanRange = value;
}
constexpr float_t& Pathfinding::LayerGridGraph::__cordl_internal_get_characterHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___characterHeight;
}
constexpr float_t const& Pathfinding::LayerGridGraph::__cordl_internal_get_characterHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___characterHeight;
}
constexpr void Pathfinding::LayerGridGraph::__cordl_internal_set_characterHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___characterHeight = value;
}
constexpr int32_t& Pathfinding::LayerGridGraph::__cordl_internal_get_lastScannedWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastScannedWidth;
}
constexpr int32_t const& Pathfinding::LayerGridGraph::__cordl_internal_get_lastScannedWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastScannedWidth;
}
constexpr void Pathfinding::LayerGridGraph::__cordl_internal_set_lastScannedWidth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastScannedWidth = value;
}
constexpr int32_t& Pathfinding::LayerGridGraph::__cordl_internal_get_lastScannedDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastScannedDepth;
}
constexpr int32_t const& Pathfinding::LayerGridGraph::__cordl_internal_get_lastScannedDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastScannedDepth;
}
constexpr void Pathfinding::LayerGridGraph::__cordl_internal_set_lastScannedDepth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastScannedDepth = value;
}
inline void Pathfinding::LayerGridGraph::setStaticF_comparer(::Pathfinding::LayerGridGraph_HitComparer*  value)  {
::cordl_internals::setStaticField<::Pathfinding::LayerGridGraph_HitComparer*, "comparer", ::Pathfinding::LayerGridGraph*>(std::forward<::Pathfinding::LayerGridGraph_HitComparer*>(value));
}
inline ::Pathfinding::LayerGridGraph_HitComparer* Pathfinding::LayerGridGraph::getStaticF_comparer()  {
return ::cordl_internals::getStaticField<::Pathfinding::LayerGridGraph_HitComparer*, "comparer", ::Pathfinding::LayerGridGraph*>();
}
inline void Pathfinding::LayerGridGraph::setStaticF_heightSampleBuffer(::ArrayW<::GlobalNamespace::LayerGridGraph_HeightSample>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::LayerGridGraph_HeightSample>, "heightSampleBuffer", ::Pathfinding::LayerGridGraph*>(std::forward<::ArrayW<::GlobalNamespace::LayerGridGraph_HeightSample>>(value));
}
inline ::ArrayW<::GlobalNamespace::LayerGridGraph_HeightSample> Pathfinding::LayerGridGraph::getStaticF_heightSampleBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::LayerGridGraph_HeightSample>, "heightSampleBuffer", ::Pathfinding::LayerGridGraph*>();
}
inline void Pathfinding::LayerGridGraph::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::LayerGridGraph::RemoveGridGraphFromStatic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                        {"RemoveGridGraphFromStatic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::LayerGridGraph::get_uniformWidthDepthGrid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Pathfinding::LayerGridGraph::get_LayerCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::LayerGridGraph::CountNodes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::LayerGridGraph::GetNodes(::System::Action_1<::Pathfinding::GraphNode*>*  action)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* Pathfinding::LayerGridGraph::GetNodesInRegion(::UnityEngine::Bounds  b, ::Pathfinding::GraphUpdateShape*  shape)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(this, ___internal_method, b, shape);
}
inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* Pathfinding::LayerGridGraph::GetNodesInRegion(::Pathfinding::IntRect  rect)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(this, ___internal_method, rect);
}
inline int32_t Pathfinding::LayerGridGraph::GetNodesInRegion(::Pathfinding::IntRect  rect, ::ArrayW<::Pathfinding::GridNodeBase*>  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, rect, buffer);
}
inline ::Pathfinding::GridNodeBase* Pathfinding::LayerGridGraph::GetNode(int32_t  x, int32_t  z)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GridNodeBase*>(this, ___internal_method, x, z);
}
inline ::Pathfinding::GridNodeBase* Pathfinding::LayerGridGraph::GetNode(int32_t  x, int32_t  z, int32_t  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                        {"GetNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GridNodeBase*>(this, ___internal_method, x, z, layer);
}
inline void Pathfinding::LayerGridGraph::Pathfinding_IUpdatableGraph_UpdateArea(::Pathfinding::GraphUpdateObject*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateArea", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* Pathfinding::LayerGridGraph::ScanInternal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::LayerGridGraph_HeightSample> Pathfinding::LayerGridGraph::SampleHeights(::Pathfinding::GraphCollision*  collision, float_t  mergeSpanRange, ::UnityEngine::Vector3  position, ::by_ref<int32_t>  numHits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                        {"SampleHeights", {}, {::i2c::type_of<::Pathfinding::GraphCollision*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::LayerGridGraph_HeightSample>>(nullptr, ___internal_method, collision, mergeSpanRange, position, numHits);
}
inline void Pathfinding::LayerGridGraph::RecalculateCell(int32_t  x, int32_t  z, bool  resetPenalties, bool  resetTags)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, z, resetPenalties, resetTags);
}
inline void Pathfinding::LayerGridGraph::AddLayers(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                        {"AddLayers", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline bool Pathfinding::LayerGridGraph::ErosionAnyFalseConnections(::Pathfinding::GraphNode*  baseNode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, baseNode);
}
inline void Pathfinding::LayerGridGraph::CalculateConnections(::Pathfinding::GridNodeBase*  baseNode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseNode);
}
inline void Pathfinding::LayerGridGraph::CalculateConnections(int32_t  x, int32_t  z, int32_t  layerIndex, ::Pathfinding::LevelGridNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                        {"CalculateConnections", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::LevelGridNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, z, layerIndex, node);
}
inline void Pathfinding::LayerGridGraph::CalculateConnections(int32_t  x, int32_t  z)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, z);
}
inline void Pathfinding::LayerGridGraph::CalculateConnections(int32_t  x, int32_t  z, int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                        {"CalculateConnections", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, z, layerIndex);
}
inline ::Pathfinding::NNInfoInternal Pathfinding::LayerGridGraph::GetNearest(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint, ::Pathfinding::GraphNode*  hint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NNInfoInternal>(this, ___internal_method, position, constraint, hint);
}
inline ::Pathfinding::GridNodeBase* Pathfinding::LayerGridGraph::GetNearestFromGraphSpace(::UnityEngine::Vector3  positionGraphSpace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GridNodeBase*>(this, ___internal_method, positionGraphSpace);
}
inline ::Pathfinding::GridNodeBase* Pathfinding::LayerGridGraph::GetNearestNode(::UnityEngine::Vector3  position, int32_t  x, int32_t  z, ::Pathfinding::NNConstraint*  constraint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                        {"GetNearestNode", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::NNConstraint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GridNodeBase*>(this, ___internal_method, position, x, z, constraint);
}
inline bool Pathfinding::LayerGridGraph::CheckConnection(::Pathfinding::LevelGridNode*  node, int32_t  dir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                        {"CheckConnection", {}, {::i2c::type_of<::Pathfinding::LevelGridNode*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node, dir);
}
inline void Pathfinding::LayerGridGraph::SerializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::LayerGridGraph::DeserializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::LayerGridGraph::PostDeserialization(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LayerGridGraph*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::LayerGridGraph::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::LayerGridGraph* Pathfinding::LayerGridGraph::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::LayerGridGraph*>());
}
/// @brief Convert operator to "::Pathfinding::IUpdatableGraph"
constexpr  Pathfinding::LayerGridGraph::operator ::Pathfinding::IUpdatableGraph*() noexcept {
return static_cast<::Pathfinding::IUpdatableGraph*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::IUpdatableGraph"
constexpr ::Pathfinding::IUpdatableGraph* Pathfinding::LayerGridGraph::i___Pathfinding__IUpdatableGraph() noexcept {
return static_cast<::Pathfinding::IUpdatableGraph*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::LayerGridGraph::LayerGridGraph()   {
}
//  Writing Method size for method: ::Pathfinding::LayerGridGraph__ScanInternal_d__19._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LayerGridGraph__ScanInternal_d__19::*)(int32_t)>(&::Pathfinding::LayerGridGraph__ScanInternal_d__19::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e79420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph__ScanInternal_d__19*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph__ScanInternal_d__19.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LayerGridGraph__ScanInternal_d__19::*)()>(&::Pathfinding::LayerGridGraph__ScanInternal_d__19::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e7b538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph__ScanInternal_d__19*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph__ScanInternal_d__19.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::LayerGridGraph__ScanInternal_d__19::*)()>(&::Pathfinding::LayerGridGraph__ScanInternal_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x5e7b53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph__ScanInternal_d__19*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph__ScanInternal_d__19.System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Progress (::Pathfinding::LayerGridGraph__ScanInternal_d__19::*)()>(&::Pathfinding::LayerGridGraph__ScanInternal_d__19::System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e7ba74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph__ScanInternal_d__19*>(),
                        {"System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph__ScanInternal_d__19.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LayerGridGraph__ScanInternal_d__19::*)()>(&::Pathfinding::LayerGridGraph__ScanInternal_d__19::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e7ba80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph__ScanInternal_d__19*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph__ScanInternal_d__19.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::LayerGridGraph__ScanInternal_d__19::*)()>(&::Pathfinding::LayerGridGraph__ScanInternal_d__19::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e7bab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph__ScanInternal_d__19*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph__ScanInternal_d__19.System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* (::Pathfinding::LayerGridGraph__ScanInternal_d__19::*)()>(&::Pathfinding::LayerGridGraph__ScanInternal_d__19::System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e7bb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph__ScanInternal_d__19*>(),
                        {"System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph__ScanInternal_d__19.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::LayerGridGraph__ScanInternal_d__19::*)()>(&::Pathfinding::LayerGridGraph__ScanInternal_d__19::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e7bbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph__ScanInternal_d__19*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::LayerGridGraph__ScanInternal_d__19::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::LayerGridGraph__ScanInternal_d__19::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::LayerGridGraph__ScanInternal_d__19::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::Pathfinding::Progress& Pathfinding::LayerGridGraph__ScanInternal_d__19::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::Pathfinding::Progress const& Pathfinding::LayerGridGraph__ScanInternal_d__19::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::LayerGridGraph__ScanInternal_d__19::__cordl_internal_set___2__current(::Pathfinding::Progress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Pathfinding::LayerGridGraph__ScanInternal_d__19::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Pathfinding::LayerGridGraph__ScanInternal_d__19::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Pathfinding::LayerGridGraph__ScanInternal_d__19::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::Pathfinding::LayerGridGraph*& Pathfinding::LayerGridGraph__ScanInternal_d__19::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Pathfinding::LayerGridGraph* const& Pathfinding::LayerGridGraph__ScanInternal_d__19::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::LayerGridGraph__ScanInternal_d__19::__cordl_internal_set___4__this(::Pathfinding::LayerGridGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Pathfinding::LayerGridGraph__ScanInternal_d__19::__cordl_internal_get__progressCounter_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressCounter_5__2;
}
constexpr int32_t const& Pathfinding::LayerGridGraph__ScanInternal_d__19::__cordl_internal_get__progressCounter_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressCounter_5__2;
}
constexpr void Pathfinding::LayerGridGraph__ScanInternal_d__19::__cordl_internal_set__progressCounter_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progressCounter_5__2 = value;
}
constexpr int32_t& Pathfinding::LayerGridGraph__ScanInternal_d__19::__cordl_internal_get__z_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____z_5__3;
}
constexpr int32_t const& Pathfinding::LayerGridGraph__ScanInternal_d__19::__cordl_internal_get__z_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____z_5__3;
}
constexpr void Pathfinding::LayerGridGraph__ScanInternal_d__19::__cordl_internal_set__z_5__3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____z_5__3 = value;
}
inline void Pathfinding::LayerGridGraph__ScanInternal_d__19::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph__ScanInternal_d__19*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::LayerGridGraph__ScanInternal_d__19::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph__ScanInternal_d__19*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::LayerGridGraph__ScanInternal_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph__ScanInternal_d__19*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Pathfinding::Progress Pathfinding::LayerGridGraph__ScanInternal_d__19::System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph__ScanInternal_d__19*>(),
                        {"System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Progress>(this, ___internal_method);
}
inline void Pathfinding::LayerGridGraph__ScanInternal_d__19::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph__ScanInternal_d__19*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::LayerGridGraph__ScanInternal_d__19::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph__ScanInternal_d__19*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* Pathfinding::LayerGridGraph__ScanInternal_d__19::System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph__ScanInternal_d__19*>(),
                        {"System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Pathfinding::LayerGridGraph__ScanInternal_d__19::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph__ScanInternal_d__19*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::LayerGridGraph__ScanInternal_d__19* Pathfinding::LayerGridGraph__ScanInternal_d__19::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::LayerGridGraph__ScanInternal_d__19*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr  Pathfinding::LayerGridGraph__ScanInternal_d__19::operator ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* Pathfinding::LayerGridGraph__ScanInternal_d__19::i___System__Collections__Generic__IEnumerable_1___Pathfinding__Progress_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Pathfinding::LayerGridGraph__ScanInternal_d__19::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Pathfinding::LayerGridGraph__ScanInternal_d__19::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr  Pathfinding::LayerGridGraph__ScanInternal_d__19::operator ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* Pathfinding::LayerGridGraph__ScanInternal_d__19::i___System__Collections__Generic__IEnumerator_1___Pathfinding__Progress_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::LayerGridGraph__ScanInternal_d__19::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::LayerGridGraph__ScanInternal_d__19::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::LayerGridGraph__ScanInternal_d__19::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::LayerGridGraph__ScanInternal_d__19::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::LayerGridGraph__ScanInternal_d__19::LayerGridGraph__ScanInternal_d__19()   {
}
//  Writing Method size for method: ::Pathfinding::LayerGridGraph_HitComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::LayerGridGraph_HitComparer::*)(::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit)>(&::Pathfinding::LayerGridGraph_HitComparer::Compare)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e7b4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph_HitComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LayerGridGraph_HitComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LayerGridGraph_HitComparer::*)()>(&::Pathfinding::LayerGridGraph_HitComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e7b4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph_HitComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Pathfinding::LayerGridGraph_HitComparer::Compare(::UnityEngine::RaycastHit  a, ::UnityEngine::RaycastHit  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph_HitComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline void Pathfinding::LayerGridGraph_HitComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraph_HitComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::LayerGridGraph_HitComparer* Pathfinding::LayerGridGraph_HitComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::LayerGridGraph_HitComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
constexpr  Pathfinding::LayerGridGraph_HitComparer::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>* Pathfinding::LayerGridGraph_HitComparer::i___System__Collections__Generic__IComparer_1___UnityEngine__RaycastHit_() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::LayerGridGraph_HitComparer::LayerGridGraph_HitComparer()   {
}
