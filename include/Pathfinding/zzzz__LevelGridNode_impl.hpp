#pragma once
// IWYU pragma private; include "Pathfinding/LevelGridNode.hpp"
#include "Pathfinding/zzzz__GridNodeBase_impl.hpp"
#include "Pathfinding/zzzz__LayerGridGraph_impl.hpp"
#include "Pathfinding/zzzz__LevelGridNode_def.hpp"
#include "GlobalNamespace/zzzz__AstarPath_def.hpp"
#include "Pathfinding/Serialization/zzzz__GraphSerializationContext_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__GridNodeBase_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "Pathfinding/zzzz__LayerGridGraph_def.hpp"
#include "Pathfinding/zzzz__PathHandler_def.hpp"
#include "Pathfinding/zzzz__PathNode_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::LevelGridNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LevelGridNode::*)(::GlobalNamespace::AstarPath*)>(&::Pathfinding::LevelGridNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e7a350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.GetGridGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::LayerGridGraph* (*)(uint32_t)>(&::Pathfinding::LevelGridNode::GetGridGraph)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e7bbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"GetGridGraph", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.SetGridGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::Pathfinding::LayerGridGraph*)>(&::Pathfinding::LevelGridNode::SetGridGraph)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5e77ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"SetGridGraph", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::LayerGridGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.ResetAllGridConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LevelGridNode::*)()>(&::Pathfinding::LevelGridNode::ResetAllGridConnections)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e7a9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"ResetAllGridConnections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.HasAnyGridConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::LevelGridNode::*)()>(&::Pathfinding::LevelGridNode::HasAnyGridConnections)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e7ba64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"HasAnyGridConnections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.get_HasConnectionsToAllEightNeighbours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::LevelGridNode::*)()>(&::Pathfinding::LevelGridNode::get_HasConnectionsToAllEightNeighbours)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e7bc38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                    {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.get_LayerCoordinateInGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::LevelGridNode::*)()>(&::Pathfinding::LevelGridNode::get_LayerCoordinateInGrid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e7a544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"get_LayerCoordinateInGrid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.set_LayerCoordinateInGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LevelGridNode::*)(int32_t)>(&::Pathfinding::LevelGridNode::set_LayerCoordinateInGrid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e7a358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"set_LayerCoordinateInGrid", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.SetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LevelGridNode::*)(::Pathfinding::Int3)>(&::Pathfinding::LevelGridNode::SetPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e7bc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"SetPosition", {}, {::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.GetGizmoHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::LevelGridNode::*)()>(&::Pathfinding::LevelGridNode::GetGizmoHashCode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e7bc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                    {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.GetNeighbourAlongDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GridNodeBase* (::Pathfinding::LevelGridNode::*)(int32_t)>(&::Pathfinding::LevelGridNode::GetNeighbourAlongDirection)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e7bc78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                    {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.ClearConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LevelGridNode::*)(bool)>(&::Pathfinding::LevelGridNode::ClearConnections)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5e7bd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                    {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.GetConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LevelGridNode::*)(::System::Action_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::LevelGridNode::GetConnections)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5e7bf04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                    {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.GetConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::LevelGridNode::*)(int32_t)>(&::Pathfinding::LevelGridNode::GetConnection)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e7c048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"GetConnection", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.HasConnectionInDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::LevelGridNode::*)(int32_t)>(&::Pathfinding::LevelGridNode::HasConnectionInDirection)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e7c064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                    {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.SetConnectionValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LevelGridNode::*)(int32_t, int32_t)>(&::Pathfinding::LevelGridNode::SetConnectionValue)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e7aa58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"SetConnectionValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.GetConnectionValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::LevelGridNode::*)(int32_t)>(&::Pathfinding::LevelGridNode::GetConnectionValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e7bd78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"GetConnectionValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.AddConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LevelGridNode::*)(::Pathfinding::GraphNode*, uint32_t)>(&::Pathfinding::LevelGridNode::AddConnection)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e7c080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                    {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.RemoveConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LevelGridNode::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::LevelGridNode::RemoveConnection)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e7c268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                    {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.RemoveGridConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LevelGridNode::*)(::Pathfinding::LevelGridNode*)>(&::Pathfinding::LevelGridNode::RemoveGridConnection)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5e7c140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"RemoveGridConnection", {}, {::i2c::type_of<::Pathfinding::LevelGridNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.GetPortal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::LevelGridNode::*)(::Pathfinding::GraphNode*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, bool)>(&::Pathfinding::LevelGridNode::GetPortal)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5e7c324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                    {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.UpdateRecursiveG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LevelGridNode::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&::Pathfinding::LevelGridNode::UpdateRecursiveG)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5e7c6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                    {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.Open
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LevelGridNode::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&::Pathfinding::LevelGridNode::Open)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5e7c890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                    {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.ClosestPointOnNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::LevelGridNode::*)(::UnityEngine::Vector3)>(&::Pathfinding::LevelGridNode::ClosestPointOnNode)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5e7cb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                    {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.SerializeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LevelGridNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::LevelGridNode::SerializeNode)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e7cc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                    {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LevelGridNode.DeserializeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LevelGridNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::LevelGridNode::DeserializeNode)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e7cd04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                    {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 17}
                ));
    return ___internal_method;
  }
};
constexpr uint64_t& Pathfinding::LevelGridNode::__cordl_internal_get_gridConnections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridConnections;
}
constexpr uint64_t const& Pathfinding::LevelGridNode::__cordl_internal_get_gridConnections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridConnections;
}
constexpr void Pathfinding::LevelGridNode::__cordl_internal_set_gridConnections(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gridConnections = value;
}
inline void Pathfinding::LevelGridNode::setStaticF__gridGraphs(::ArrayW<::Pathfinding::LayerGridGraph*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Pathfinding::LayerGridGraph*>, "_gridGraphs", ::Pathfinding::LevelGridNode*>(std::forward<::ArrayW<::Pathfinding::LayerGridGraph*>>(value));
}
inline ::ArrayW<::Pathfinding::LayerGridGraph*> Pathfinding::LevelGridNode::getStaticF__gridGraphs()  {
return ::cordl_internals::getStaticField<::ArrayW<::Pathfinding::LayerGridGraph*>, "_gridGraphs", ::Pathfinding::LevelGridNode*>();
}
inline void Pathfinding::LevelGridNode::setStaticF_gridGraphs(::ArrayW<::Pathfinding::LayerGridGraph*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Pathfinding::LayerGridGraph*>, "gridGraphs", ::Pathfinding::LevelGridNode*>(std::forward<::ArrayW<::Pathfinding::LayerGridGraph*>>(value));
}
inline ::ArrayW<::Pathfinding::LayerGridGraph*> Pathfinding::LevelGridNode::getStaticF_gridGraphs()  {
return ::cordl_internals::getStaticField<::ArrayW<::Pathfinding::LayerGridGraph*>, "gridGraphs", ::Pathfinding::LevelGridNode*>();
}
inline void Pathfinding::LevelGridNode::_ctor(::GlobalNamespace::AstarPath*  astar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, astar);
}
inline ::Pathfinding::LayerGridGraph* Pathfinding::LevelGridNode::GetGridGraph(uint32_t  graphIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"GetGridGraph", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::LayerGridGraph*>(nullptr, ___internal_method, graphIndex);
}
inline void Pathfinding::LevelGridNode::SetGridGraph(int32_t  graphIndex, ::Pathfinding::LayerGridGraph*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"SetGridGraph", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::LayerGridGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, graphIndex, graph);
}
inline void Pathfinding::LevelGridNode::ResetAllGridConnections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"ResetAllGridConnections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::LevelGridNode::HasAnyGridConnections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"HasAnyGridConnections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::LevelGridNode::get_HasConnectionsToAllEightNeighbours()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Pathfinding::LevelGridNode::get_LayerCoordinateInGrid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"get_LayerCoordinateInGrid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::LevelGridNode::set_LayerCoordinateInGrid(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"set_LayerCoordinateInGrid", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::LevelGridNode::SetPosition(::Pathfinding::Int3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"SetPosition", {}, {::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline int32_t Pathfinding::LevelGridNode::GetGizmoHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Pathfinding::GridNodeBase* Pathfinding::LevelGridNode::GetNeighbourAlongDirection(int32_t  direction)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GridNodeBase*>(this, ___internal_method, direction);
}
inline void Pathfinding::LevelGridNode::ClearConnections(bool  alsoReverse)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alsoReverse);
}
inline void Pathfinding::LevelGridNode::GetConnections(::System::Action_1<::Pathfinding::GraphNode*>*  action)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline bool Pathfinding::LevelGridNode::GetConnection(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"GetConnection", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, i);
}
inline bool Pathfinding::LevelGridNode::HasConnectionInDirection(int32_t  direction)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, direction);
}
inline void Pathfinding::LevelGridNode::SetConnectionValue(int32_t  dir, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"SetConnectionValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dir, value);
}
inline int32_t Pathfinding::LevelGridNode::GetConnectionValue(int32_t  dir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"GetConnectionValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, dir);
}
inline void Pathfinding::LevelGridNode::AddConnection(::Pathfinding::GraphNode*  node, uint32_t  cost)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, cost);
}
inline void Pathfinding::LevelGridNode::RemoveConnection(::Pathfinding::GraphNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::LevelGridNode::RemoveGridConnection(::Pathfinding::LevelGridNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LevelGridNode*>(),
                        {"RemoveGridConnection", {}, {::i2c::type_of<::Pathfinding::LevelGridNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline bool Pathfinding::LevelGridNode::GetPortal(::Pathfinding::GraphNode*  other, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  left, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  right, bool  backwards)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other, left, right, backwards);
}
inline void Pathfinding::LevelGridNode::UpdateRecursiveG(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, pathNode, handler);
}
inline void Pathfinding::LevelGridNode::Open(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, pathNode, handler);
}
inline ::UnityEngine::Vector3 Pathfinding::LevelGridNode::ClosestPointOnNode(::UnityEngine::Vector3  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, p);
}
inline void Pathfinding::LevelGridNode::SerializeNode(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::LevelGridNode::DeserializeNode(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::LevelGridNode*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline ::Pathfinding::LevelGridNode* Pathfinding::LevelGridNode::New_ctor(::GlobalNamespace::AstarPath*  astar)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::LevelGridNode*>(astar));
}
// Ctor Parameters []
constexpr ::Pathfinding::LevelGridNode::LevelGridNode()   {
}
