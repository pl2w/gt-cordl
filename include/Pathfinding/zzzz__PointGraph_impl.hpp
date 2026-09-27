#pragma once
// IWYU pragma private; include "Pathfinding/PointGraph.hpp"
#include "Pathfinding/zzzz__NavGraph_impl.hpp"
#include "Pathfinding/zzzz__PointGraph_NodeDistanceMode_impl.hpp"
#include "Pathfinding/zzzz__PointNode_impl.hpp"
#include "Pathfinding/zzzz__Progress_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__PointGraph_def.hpp"
#include "Pathfinding/Serialization/zzzz__GraphSerializationContext_def.hpp"
#include "Pathfinding/zzzz__Connection_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateObject_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateThreading_def.hpp"
#include "Pathfinding/zzzz__IUpdatableGraph_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "Pathfinding/zzzz__NNConstraint_def.hpp"
#include "Pathfinding/zzzz__NNInfoInternal_def.hpp"
#include "Pathfinding/zzzz__PointGraph_NodeDistanceMode_def.hpp"
#include "Pathfinding/zzzz__PointGraph_def.hpp"
#include "Pathfinding/zzzz__PointKDTree_def.hpp"
#include "Pathfinding/zzzz__PointNode_def.hpp"
#include "Pathfinding/zzzz__Progress_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::PointGraph.get_nodeCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::PointGraph::*)()>(&::Pathfinding::PointGraph::get_nodeCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e8c1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"get_nodeCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.set_nodeCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph::*)(int32_t)>(&::Pathfinding::PointGraph::set_nodeCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e8c1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"set_nodeCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.CountNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::PointGraph::*)()>(&::Pathfinding::PointGraph::CountNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e8c1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointGraph*>(),
                    {::i2c::class_of<::Pathfinding::PointGraph*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.GetNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph::*)(::System::Action_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::PointGraph::GetNodes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e8c1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointGraph*>(),
                    {::i2c::class_of<::Pathfinding::PointGraph*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.GetNearest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NNInfoInternal (::Pathfinding::PointGraph::*)(::UnityEngine::Vector3, ::Pathfinding::NNConstraint*, ::Pathfinding::GraphNode*)>(&::Pathfinding::PointGraph::GetNearest)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e8c240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointGraph*>(),
                    {::i2c::class_of<::Pathfinding::PointGraph*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.GetNearestForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NNInfoInternal (::Pathfinding::PointGraph::*)(::UnityEngine::Vector3, ::Pathfinding::NNConstraint*)>(&::Pathfinding::PointGraph::GetNearestForce)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e8c5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointGraph*>(),
                    {::i2c::class_of<::Pathfinding::PointGraph*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.GetNearestInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NNInfoInternal (::Pathfinding::PointGraph::*)(::UnityEngine::Vector3, ::Pathfinding::NNConstraint*, bool)>(&::Pathfinding::PointGraph::GetNearestInternal)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x5e8c278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"GetNearestInternal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.FindClosestConnectionPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NNInfoInternal (::Pathfinding::PointGraph::*)(::Pathfinding::PointNode*, ::UnityEngine::Vector3)>(&::Pathfinding::PointGraph::FindClosestConnectionPoint)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5e8c60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"FindClosestConnectionPoint", {}, {::i2c::type_of<::Pathfinding::PointNode*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.AddNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::PointNode* (::Pathfinding::PointGraph::*)(::Pathfinding::Int3)>(&::Pathfinding::PointGraph::AddNode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e8c7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"AddNode", {}, {::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.CountChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Transform*)>(&::Pathfinding::PointGraph::CountChildren)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5e8c868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"CountChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.AddChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph::*)(::by_ref<int32_t>, ::UnityEngine::Transform*)>(&::Pathfinding::PointGraph::AddChildren)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5e8cb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"AddChildren", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.RebuildNodeLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph::*)()>(&::Pathfinding::PointGraph::RebuildNodeLookup)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e8cedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"RebuildNodeLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.RebuildConnectionDistanceLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph::*)()>(&::Pathfinding::PointGraph::RebuildConnectionDistanceLookup)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5e8cf74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"RebuildConnectionDistanceLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.AddToLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph::*)(::Pathfinding::PointNode*)>(&::Pathfinding::PointGraph::AddToLookup)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e8d09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"AddToLookup", {}, {::i2c::type_of<::Pathfinding::PointNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.RegisterConnectionLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph::*)(int64_t)>(&::Pathfinding::PointGraph::RegisterConnectionLength)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e898bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"RegisterConnectionLength", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.CreateNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Pathfinding::PointNode*> (::Pathfinding::PointGraph::*)(int32_t)>(&::Pathfinding::PointGraph::CreateNodes)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5e8d0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointGraph*>(),
                    {::i2c::class_of<::Pathfinding::PointGraph*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.ScanInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* (::Pathfinding::PointGraph::*)()>(&::Pathfinding::PointGraph::ScanInternal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e8d1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointGraph*>(),
                    {::i2c::class_of<::Pathfinding::PointGraph*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.ConnectNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph::*)()>(&::Pathfinding::PointGraph::ConnectNodes)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5e8d278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"ConnectNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.ConnectNodesAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* (::Pathfinding::PointGraph::*)()>(&::Pathfinding::PointGraph::ConnectNodesAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e8d3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"ConnectNodesAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.IsValidConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::PointGraph::*)(::Pathfinding::GraphNode*, ::Pathfinding::GraphNode*, ::by_ref<float_t>)>(&::Pathfinding::PointGraph::IsValidConnection)> {
  constexpr static std::size_t size = 0x6dc;
  constexpr static std::size_t addrs = 0x5e8d454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointGraph*>(),
                    {::i2c::class_of<::Pathfinding::PointGraph*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.Pathfinding_IUpdatableGraph_CanUpdateAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphUpdateThreading (::Pathfinding::PointGraph::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::PointGraph::Pathfinding_IUpdatableGraph_CanUpdateAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e8db30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"Pathfinding.IUpdatableGraph.CanUpdateAsync", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.Pathfinding_IUpdatableGraph_UpdateAreaInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::PointGraph::Pathfinding_IUpdatableGraph_UpdateAreaInit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e8db38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateAreaInit", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.Pathfinding_IUpdatableGraph_UpdateAreaPost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::PointGraph::Pathfinding_IUpdatableGraph_UpdateAreaPost)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e8db3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateAreaPost", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.Pathfinding_IUpdatableGraph_UpdateArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::PointGraph::Pathfinding_IUpdatableGraph_UpdateArea)> {
  constexpr static std::size_t size = 0x64c;
  constexpr static std::size_t addrs = 0x5e8db40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateArea", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.PostDeserialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::PointGraph::PostDeserialization)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e8e18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointGraph*>(),
                    {::i2c::class_of<::Pathfinding::PointGraph*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.RelocateNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph::*)(::UnityEngine::Matrix4x4)>(&::Pathfinding::PointGraph::RelocateNodes)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e8e190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointGraph*>(),
                    {::i2c::class_of<::Pathfinding::PointGraph*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.DeserializeSettingsCompatibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::PointGraph::DeserializeSettingsCompatibility)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5e8e1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointGraph*>(),
                    {::i2c::class_of<::Pathfinding::PointGraph*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.SerializeExtraInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::PointGraph::SerializeExtraInfo)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5e8e414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointGraph*>(),
                    {::i2c::class_of<::Pathfinding::PointGraph*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph.DeserializeExtraInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::PointGraph::DeserializeExtraInfo)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5e8e538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointGraph*>(),
                    {::i2c::class_of<::Pathfinding::PointGraph*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph::*)()>(&::Pathfinding::PointGraph::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e8e6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::PointGraph::__cordl_internal_get_root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___root;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::PointGraph::__cordl_internal_get_root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___root;
}
constexpr void Pathfinding::PointGraph::__cordl_internal_set_root(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___root = value;
}
constexpr ::StringW& Pathfinding::PointGraph::__cordl_internal_get_searchTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchTag;
}
constexpr ::StringW const& Pathfinding::PointGraph::__cordl_internal_get_searchTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchTag;
}
constexpr void Pathfinding::PointGraph::__cordl_internal_set_searchTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchTag = value;
}
constexpr float_t& Pathfinding::PointGraph::__cordl_internal_get_maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr float_t const& Pathfinding::PointGraph::__cordl_internal_get_maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr void Pathfinding::PointGraph::__cordl_internal_set_maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistance = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::PointGraph::__cordl_internal_get_limits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limits;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::PointGraph::__cordl_internal_get_limits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limits;
}
constexpr void Pathfinding::PointGraph::__cordl_internal_set_limits(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___limits = value;
}
constexpr bool& Pathfinding::PointGraph::__cordl_internal_get_raycast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycast;
}
constexpr bool const& Pathfinding::PointGraph::__cordl_internal_get_raycast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycast;
}
constexpr void Pathfinding::PointGraph::__cordl_internal_set_raycast(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raycast = value;
}
constexpr bool& Pathfinding::PointGraph::__cordl_internal_get_use2DPhysics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___use2DPhysics;
}
constexpr bool const& Pathfinding::PointGraph::__cordl_internal_get_use2DPhysics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___use2DPhysics;
}
constexpr void Pathfinding::PointGraph::__cordl_internal_set_use2DPhysics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___use2DPhysics = value;
}
constexpr bool& Pathfinding::PointGraph::__cordl_internal_get_thickRaycast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thickRaycast;
}
constexpr bool const& Pathfinding::PointGraph::__cordl_internal_get_thickRaycast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thickRaycast;
}
constexpr void Pathfinding::PointGraph::__cordl_internal_set_thickRaycast(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thickRaycast = value;
}
constexpr float_t& Pathfinding::PointGraph::__cordl_internal_get_thickRaycastRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thickRaycastRadius;
}
constexpr float_t const& Pathfinding::PointGraph::__cordl_internal_get_thickRaycastRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thickRaycastRadius;
}
constexpr void Pathfinding::PointGraph::__cordl_internal_set_thickRaycastRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thickRaycastRadius = value;
}
constexpr bool& Pathfinding::PointGraph::__cordl_internal_get_recursive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recursive;
}
constexpr bool const& Pathfinding::PointGraph::__cordl_internal_get_recursive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recursive;
}
constexpr void Pathfinding::PointGraph::__cordl_internal_set_recursive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recursive = value;
}
constexpr ::UnityEngine::LayerMask& Pathfinding::PointGraph::__cordl_internal_get_mask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr ::UnityEngine::LayerMask const& Pathfinding::PointGraph::__cordl_internal_get_mask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr void Pathfinding::PointGraph::__cordl_internal_set_mask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mask = value;
}
constexpr bool& Pathfinding::PointGraph::__cordl_internal_get_optimizeForSparseGraph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optimizeForSparseGraph;
}
constexpr bool const& Pathfinding::PointGraph::__cordl_internal_get_optimizeForSparseGraph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optimizeForSparseGraph;
}
constexpr void Pathfinding::PointGraph::__cordl_internal_set_optimizeForSparseGraph(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___optimizeForSparseGraph = value;
}
constexpr ::Pathfinding::PointKDTree*& Pathfinding::PointGraph::__cordl_internal_get_lookupTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookupTree;
}
constexpr ::Pathfinding::PointKDTree* const& Pathfinding::PointGraph::__cordl_internal_get_lookupTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookupTree;
}
constexpr void Pathfinding::PointGraph::__cordl_internal_set_lookupTree(::Pathfinding::PointKDTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookupTree = value;
}
constexpr int64_t& Pathfinding::PointGraph::__cordl_internal_get_maximumConnectionLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumConnectionLength;
}
constexpr int64_t const& Pathfinding::PointGraph::__cordl_internal_get_maximumConnectionLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumConnectionLength;
}
constexpr void Pathfinding::PointGraph::__cordl_internal_set_maximumConnectionLength(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maximumConnectionLength = value;
}
constexpr ::ArrayW<::Pathfinding::PointNode*>& Pathfinding::PointGraph::__cordl_internal_get_nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr ::ArrayW<::Pathfinding::PointNode*> const& Pathfinding::PointGraph::__cordl_internal_get_nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr void Pathfinding::PointGraph::__cordl_internal_set_nodes(::ArrayW<::Pathfinding::PointNode*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodes = value;
}
constexpr ::GlobalNamespace::PointGraph_NodeDistanceMode& Pathfinding::PointGraph::__cordl_internal_get_nearestNodeDistanceMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearestNodeDistanceMode;
}
constexpr ::GlobalNamespace::PointGraph_NodeDistanceMode const& Pathfinding::PointGraph::__cordl_internal_get_nearestNodeDistanceMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearestNodeDistanceMode;
}
constexpr void Pathfinding::PointGraph::__cordl_internal_set_nearestNodeDistanceMode(::GlobalNamespace::PointGraph_NodeDistanceMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nearestNodeDistanceMode = value;
}
constexpr int32_t& Pathfinding::PointGraph::__cordl_internal_get__nodeCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodeCount_k__BackingField;
}
constexpr int32_t const& Pathfinding::PointGraph::__cordl_internal_get__nodeCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodeCount_k__BackingField;
}
constexpr void Pathfinding::PointGraph::__cordl_internal_set__nodeCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nodeCount_k__BackingField = value;
}
inline int32_t Pathfinding::PointGraph::get_nodeCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"get_nodeCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::PointGraph::set_nodeCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"set_nodeCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Pathfinding::PointGraph::CountNodes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointGraph*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::PointGraph::GetNodes(::System::Action_1<::Pathfinding::GraphNode*>*  action)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointGraph*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline ::Pathfinding::NNInfoInternal Pathfinding::PointGraph::GetNearest(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint, ::Pathfinding::GraphNode*  hint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointGraph*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NNInfoInternal>(this, ___internal_method, position, constraint, hint);
}
inline ::Pathfinding::NNInfoInternal Pathfinding::PointGraph::GetNearestForce(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointGraph*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NNInfoInternal>(this, ___internal_method, position, constraint);
}
inline ::Pathfinding::NNInfoInternal Pathfinding::PointGraph::GetNearestInternal(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint, bool  fastCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"GetNearestInternal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NNInfoInternal>(this, ___internal_method, position, constraint, fastCheck);
}
inline ::Pathfinding::NNInfoInternal Pathfinding::PointGraph::FindClosestConnectionPoint(::Pathfinding::PointNode*  node, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"FindClosestConnectionPoint", {}, {::i2c::type_of<::Pathfinding::PointNode*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NNInfoInternal>(this, ___internal_method, node, position);
}
inline ::Pathfinding::PointNode* Pathfinding::PointGraph::AddNode(::Pathfinding::Int3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"AddNode", {}, {::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::PointNode*>(this, ___internal_method, position);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Pathfinding::PointNode*>)
inline T Pathfinding::PointGraph::AddNode(T  node, ::Pathfinding::Int3  position)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointGraph*>(),
                    {"AddNode", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, node, position);
}
inline int32_t Pathfinding::PointGraph::CountChildren(::UnityEngine::Transform*  tr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"CountChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, tr);
}
inline void Pathfinding::PointGraph::AddChildren(::by_ref<int32_t>  c, ::UnityEngine::Transform*  tr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"AddChildren", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c, tr);
}
inline void Pathfinding::PointGraph::RebuildNodeLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"RebuildNodeLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::PointGraph::RebuildConnectionDistanceLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"RebuildConnectionDistanceLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::PointGraph::AddToLookup(::Pathfinding::PointNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"AddToLookup", {}, {::i2c::type_of<::Pathfinding::PointNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::PointGraph::RegisterConnectionLength(int64_t  sqrLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"RegisterConnectionLength", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sqrLength);
}
inline ::ArrayW<::Pathfinding::PointNode*> Pathfinding::PointGraph::CreateNodes(int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointGraph*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Pathfinding::PointNode*>>(this, ___internal_method, count);
}
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* Pathfinding::PointGraph::ScanInternal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointGraph*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(this, ___internal_method);
}
inline void Pathfinding::PointGraph::ConnectNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"ConnectNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* Pathfinding::PointGraph::ConnectNodesAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"ConnectNodesAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(this, ___internal_method);
}
inline bool Pathfinding::PointGraph::IsValidConnection(::Pathfinding::GraphNode*  a, ::Pathfinding::GraphNode*  b, ::by_ref<float_t>  dist)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointGraph*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b, dist);
}
inline ::Pathfinding::GraphUpdateThreading Pathfinding::PointGraph::Pathfinding_IUpdatableGraph_CanUpdateAsync(::Pathfinding::GraphUpdateObject*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"Pathfinding.IUpdatableGraph.CanUpdateAsync", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphUpdateThreading>(this, ___internal_method, o);
}
inline void Pathfinding::PointGraph::Pathfinding_IUpdatableGraph_UpdateAreaInit(::Pathfinding::GraphUpdateObject*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateAreaInit", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void Pathfinding::PointGraph::Pathfinding_IUpdatableGraph_UpdateAreaPost(::Pathfinding::GraphUpdateObject*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateAreaPost", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void Pathfinding::PointGraph::Pathfinding_IUpdatableGraph_UpdateArea(::Pathfinding::GraphUpdateObject*  guo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateArea", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, guo);
}
inline void Pathfinding::PointGraph::PostDeserialization(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointGraph*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::PointGraph::RelocateNodes(::UnityEngine::Matrix4x4  deltaMatrix)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointGraph*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaMatrix);
}
inline void Pathfinding::PointGraph::DeserializeSettingsCompatibility(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointGraph*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::PointGraph::SerializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointGraph*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::PointGraph::DeserializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointGraph*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::PointGraph::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::PointGraph* Pathfinding::PointGraph::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::PointGraph*>());
}
/// @brief Convert operator to "::Pathfinding::IUpdatableGraph"
constexpr  Pathfinding::PointGraph::operator ::Pathfinding::IUpdatableGraph*() noexcept {
return static_cast<::Pathfinding::IUpdatableGraph*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::IUpdatableGraph"
constexpr ::Pathfinding::IUpdatableGraph* Pathfinding::PointGraph::i___Pathfinding__IUpdatableGraph() noexcept {
return static_cast<::Pathfinding::IUpdatableGraph*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::PointGraph::PointGraph()   {
}
//  Writing Method size for method: ::Pathfinding::PointGraph__ScanInternal_d__35._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph__ScanInternal_d__35::*)(int32_t)>(&::Pathfinding::PointGraph__ScanInternal_d__35::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e8d244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ScanInternal_d__35*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph__ScanInternal_d__35.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph__ScanInternal_d__35::*)()>(&::Pathfinding::PointGraph__ScanInternal_d__35::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e8f030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ScanInternal_d__35*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph__ScanInternal_d__35.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::PointGraph__ScanInternal_d__35::*)()>(&::Pathfinding::PointGraph__ScanInternal_d__35::MoveNext)> {
  constexpr static std::size_t size = 0xba8;
  constexpr static std::size_t addrs = 0x5e8f04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ScanInternal_d__35*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph__ScanInternal_d__35.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph__ScanInternal_d__35::*)()>(&::Pathfinding::PointGraph__ScanInternal_d__35::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e8fbf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ScanInternal_d__35*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph__ScanInternal_d__35.System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Progress (::Pathfinding::PointGraph__ScanInternal_d__35::*)()>(&::Pathfinding::PointGraph__ScanInternal_d__35::System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e8fca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ScanInternal_d__35*>(),
                        {"System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph__ScanInternal_d__35.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph__ScanInternal_d__35::*)()>(&::Pathfinding::PointGraph__ScanInternal_d__35::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e8fcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ScanInternal_d__35*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph__ScanInternal_d__35.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::PointGraph__ScanInternal_d__35::*)()>(&::Pathfinding::PointGraph__ScanInternal_d__35::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e8fce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ScanInternal_d__35*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph__ScanInternal_d__35.System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* (::Pathfinding::PointGraph__ScanInternal_d__35::*)()>(&::Pathfinding::PointGraph__ScanInternal_d__35::System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e8fd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ScanInternal_d__35*>(),
                        {"System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph__ScanInternal_d__35.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::PointGraph__ScanInternal_d__35::*)()>(&::Pathfinding::PointGraph__ScanInternal_d__35::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e8fde8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ScanInternal_d__35*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::PointGraph__ScanInternal_d__35::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::PointGraph__ScanInternal_d__35::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::PointGraph__ScanInternal_d__35::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::Pathfinding::Progress& Pathfinding::PointGraph__ScanInternal_d__35::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::Pathfinding::Progress const& Pathfinding::PointGraph__ScanInternal_d__35::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::PointGraph__ScanInternal_d__35::__cordl_internal_set___2__current(::Pathfinding::Progress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Pathfinding::PointGraph__ScanInternal_d__35::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Pathfinding::PointGraph__ScanInternal_d__35::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Pathfinding::PointGraph__ScanInternal_d__35::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::Pathfinding::PointGraph*& Pathfinding::PointGraph__ScanInternal_d__35::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Pathfinding::PointGraph* const& Pathfinding::PointGraph__ScanInternal_d__35::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::PointGraph__ScanInternal_d__35::__cordl_internal_set___4__this(::Pathfinding::PointGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& Pathfinding::PointGraph__ScanInternal_d__35::__cordl_internal_get__gos_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gos_5__2;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& Pathfinding::PointGraph__ScanInternal_d__35::__cordl_internal_get__gos_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gos_5__2;
}
constexpr void Pathfinding::PointGraph__ScanInternal_d__35::__cordl_internal_set__gos_5__2(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gos_5__2 = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*& Pathfinding::PointGraph__ScanInternal_d__35::__cordl_internal_get___7__wrap2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* const& Pathfinding::PointGraph__ScanInternal_d__35::__cordl_internal_get___7__wrap2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
constexpr void Pathfinding::PointGraph__ScanInternal_d__35::__cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap2 = value;
}
inline void Pathfinding::PointGraph__ScanInternal_d__35::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ScanInternal_d__35*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::PointGraph__ScanInternal_d__35::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ScanInternal_d__35*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::PointGraph__ScanInternal_d__35::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ScanInternal_d__35*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::PointGraph__ScanInternal_d__35::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ScanInternal_d__35*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Progress Pathfinding::PointGraph__ScanInternal_d__35::System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ScanInternal_d__35*>(),
                        {"System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Progress>(this, ___internal_method);
}
inline void Pathfinding::PointGraph__ScanInternal_d__35::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ScanInternal_d__35*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::PointGraph__ScanInternal_d__35::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ScanInternal_d__35*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* Pathfinding::PointGraph__ScanInternal_d__35::System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ScanInternal_d__35*>(),
                        {"System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Pathfinding::PointGraph__ScanInternal_d__35::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ScanInternal_d__35*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::PointGraph__ScanInternal_d__35* Pathfinding::PointGraph__ScanInternal_d__35::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::PointGraph__ScanInternal_d__35*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr  Pathfinding::PointGraph__ScanInternal_d__35::operator ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* Pathfinding::PointGraph__ScanInternal_d__35::i___System__Collections__Generic__IEnumerable_1___Pathfinding__Progress_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Pathfinding::PointGraph__ScanInternal_d__35::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Pathfinding::PointGraph__ScanInternal_d__35::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr  Pathfinding::PointGraph__ScanInternal_d__35::operator ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* Pathfinding::PointGraph__ScanInternal_d__35::i___System__Collections__Generic__IEnumerator_1___Pathfinding__Progress_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::PointGraph__ScanInternal_d__35::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::PointGraph__ScanInternal_d__35::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::PointGraph__ScanInternal_d__35::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::PointGraph__ScanInternal_d__35::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::PointGraph__ScanInternal_d__35::PointGraph__ScanInternal_d__35()   {
}
//  Writing Method size for method: ::Pathfinding::PointGraph__ConnectNodesAsync_d__37._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph__ConnectNodesAsync_d__37::*)(int32_t)>(&::Pathfinding::PointGraph__ConnectNodesAsync_d__37::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e8d420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ConnectNodesAsync_d__37*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph__ConnectNodesAsync_d__37.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph__ConnectNodesAsync_d__37::*)()>(&::Pathfinding::PointGraph__ConnectNodesAsync_d__37::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e8e76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ConnectNodesAsync_d__37*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph__ConnectNodesAsync_d__37.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::PointGraph__ConnectNodesAsync_d__37::*)()>(&::Pathfinding::PointGraph__ConnectNodesAsync_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x778;
  constexpr static std::size_t addrs = 0x5e8e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ConnectNodesAsync_d__37*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph__ConnectNodesAsync_d__37.System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Progress (::Pathfinding::PointGraph__ConnectNodesAsync_d__37::*)()>(&::Pathfinding::PointGraph__ConnectNodesAsync_d__37::System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e8eee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ConnectNodesAsync_d__37*>(),
                        {"System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph__ConnectNodesAsync_d__37.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointGraph__ConnectNodesAsync_d__37::*)()>(&::Pathfinding::PointGraph__ConnectNodesAsync_d__37::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e8eef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ConnectNodesAsync_d__37*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph__ConnectNodesAsync_d__37.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::PointGraph__ConnectNodesAsync_d__37::*)()>(&::Pathfinding::PointGraph__ConnectNodesAsync_d__37::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e8ef2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ConnectNodesAsync_d__37*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph__ConnectNodesAsync_d__37.System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* (::Pathfinding::PointGraph__ConnectNodesAsync_d__37::*)()>(&::Pathfinding::PointGraph__ConnectNodesAsync_d__37::System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e8ef88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ConnectNodesAsync_d__37*>(),
                        {"System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointGraph__ConnectNodesAsync_d__37.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::PointGraph__ConnectNodesAsync_d__37::*)()>(&::Pathfinding::PointGraph__ConnectNodesAsync_d__37::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e8f02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ConnectNodesAsync_d__37*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::Pathfinding::Progress& Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::Pathfinding::Progress const& Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_set___2__current(::Pathfinding::Progress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::Pathfinding::PointGraph*& Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Pathfinding::PointGraph* const& Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_set___4__this(::Pathfinding::PointGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Connection>*& Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_get__connections_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connections_5__2;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Connection>* const& Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_get__connections_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connections_5__2;
}
constexpr void Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_set__connections_5__2(::System::Collections::Generic::List_1<::Pathfinding::Connection>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____connections_5__2 = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_get__candidateConnections_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____candidateConnections_5__3;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_get__candidateConnections_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____candidateConnections_5__3;
}
constexpr void Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_set__candidateConnections_5__3(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____candidateConnections_5__3 = value;
}
constexpr int64_t& Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_get__maxSquaredRange_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSquaredRange_5__4;
}
constexpr int64_t const& Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_get__maxSquaredRange_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSquaredRange_5__4;
}
constexpr void Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_set__maxSquaredRange_5__4(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxSquaredRange_5__4 = value;
}
constexpr int32_t& Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_get__i_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__5;
}
constexpr int32_t const& Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_get__i_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__5;
}
constexpr void Pathfinding::PointGraph__ConnectNodesAsync_d__37::__cordl_internal_set__i_5__5(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__5 = value;
}
inline void Pathfinding::PointGraph__ConnectNodesAsync_d__37::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ConnectNodesAsync_d__37*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::PointGraph__ConnectNodesAsync_d__37::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ConnectNodesAsync_d__37*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::PointGraph__ConnectNodesAsync_d__37::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ConnectNodesAsync_d__37*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Pathfinding::Progress Pathfinding::PointGraph__ConnectNodesAsync_d__37::System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ConnectNodesAsync_d__37*>(),
                        {"System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Progress>(this, ___internal_method);
}
inline void Pathfinding::PointGraph__ConnectNodesAsync_d__37::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ConnectNodesAsync_d__37*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::PointGraph__ConnectNodesAsync_d__37::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ConnectNodesAsync_d__37*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* Pathfinding::PointGraph__ConnectNodesAsync_d__37::System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ConnectNodesAsync_d__37*>(),
                        {"System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Pathfinding::PointGraph__ConnectNodesAsync_d__37::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointGraph__ConnectNodesAsync_d__37*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::PointGraph__ConnectNodesAsync_d__37* Pathfinding::PointGraph__ConnectNodesAsync_d__37::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::PointGraph__ConnectNodesAsync_d__37*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr  Pathfinding::PointGraph__ConnectNodesAsync_d__37::operator ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* Pathfinding::PointGraph__ConnectNodesAsync_d__37::i___System__Collections__Generic__IEnumerable_1___Pathfinding__Progress_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Pathfinding::PointGraph__ConnectNodesAsync_d__37::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Pathfinding::PointGraph__ConnectNodesAsync_d__37::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr  Pathfinding::PointGraph__ConnectNodesAsync_d__37::operator ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* Pathfinding::PointGraph__ConnectNodesAsync_d__37::i___System__Collections__Generic__IEnumerator_1___Pathfinding__Progress_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::PointGraph__ConnectNodesAsync_d__37::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::PointGraph__ConnectNodesAsync_d__37::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::PointGraph__ConnectNodesAsync_d__37::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::PointGraph__ConnectNodesAsync_d__37::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::PointGraph__ConnectNodesAsync_d__37::PointGraph__ConnectNodesAsync_d__37()   {
}
