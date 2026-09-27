#pragma once
// IWYU pragma private; include "Pathfinding/GridNode.hpp"
#include "Pathfinding/zzzz__GridGraph_impl.hpp"
#include "Pathfinding/zzzz__GridNodeBase_impl.hpp"
#include "Pathfinding/zzzz__GridNode_def.hpp"
#include "GlobalNamespace/zzzz__AstarPath_def.hpp"
#include "Pathfinding/Serialization/zzzz__GraphSerializationContext_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__GridGraph_def.hpp"
#include "Pathfinding/zzzz__GridNodeBase_def.hpp"
#include "Pathfinding/zzzz__PathHandler_def.hpp"
#include "Pathfinding/zzzz__PathNode_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::GridNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNode::*)(::GlobalNamespace::AstarPath*)>(&::Pathfinding::GridNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e869c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.GetGridGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GridGraph* (*)(uint32_t)>(&::Pathfinding::GridNode::GetGridGraph)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e869d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"GetGridGraph", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.SetGridGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::Pathfinding::GridGraph*)>(&::Pathfinding::GridNode::SetGridGraph)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5e86a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"SetGridGraph", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::GridGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.ClearGridGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::Pathfinding::GridGraph*)>(&::Pathfinding::GridNode::ClearGridGraph)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e86c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"ClearGridGraph", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::GridGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.get_InternalGridFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Pathfinding::GridNode::*)()>(&::Pathfinding::GridNode::get_InternalGridFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e86d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"get_InternalGridFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.set_InternalGridFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNode::*)(uint16_t)>(&::Pathfinding::GridNode::set_InternalGridFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e86d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"set_InternalGridFlags", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.get_HasConnectionsToAllEightNeighbours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridNode::*)()>(&::Pathfinding::GridNode::get_HasConnectionsToAllEightNeighbours)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e86d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNode*>(),
                    {::i2c::class_of<::Pathfinding::GridNode*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.HasConnectionInDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridNode::*)(int32_t)>(&::Pathfinding::GridNode::HasConnectionInDirection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e86d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNode*>(),
                    {::i2c::class_of<::Pathfinding::GridNode*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.GetConnectionInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridNode::*)(int32_t)>(&::Pathfinding::GridNode::GetConnectionInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e86d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"GetConnectionInternal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.SetConnectionInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNode::*)(int32_t, bool)>(&::Pathfinding::GridNode::SetConnectionInternal)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e86d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"SetConnectionInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.SetAllConnectionInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNode::*)(int32_t)>(&::Pathfinding::GridNode::SetAllConnectionInternal)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e86e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"SetAllConnectionInternal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.ResetConnectionsInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNode::*)()>(&::Pathfinding::GridNode::ResetConnectionsInternal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e86ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"ResetConnectionsInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.get_EdgeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridNode::*)()>(&::Pathfinding::GridNode::get_EdgeNode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e86f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"get_EdgeNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.set_EdgeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNode::*)(bool)>(&::Pathfinding::GridNode::set_EdgeNode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e86f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"set_EdgeNode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.GetNeighbourAlongDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GridNodeBase* (::Pathfinding::GridNode::*)(int32_t)>(&::Pathfinding::GridNode::GetNeighbourAlongDirection)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e86f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNode*>(),
                    {::i2c::class_of<::Pathfinding::GridNode*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.ClearConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNode::*)(bool)>(&::Pathfinding::GridNode::ClearConnections)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e87050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNode*>(),
                    {::i2c::class_of<::Pathfinding::GridNode*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.GetConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNode::*)(::System::Action_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::GridNode::GetConnections)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5e87134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNode*>(),
                    {::i2c::class_of<::Pathfinding::GridNode*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.ClosestPointOnNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::GridNode::*)(::UnityEngine::Vector3)>(&::Pathfinding::GridNode::ClosestPointOnNode)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5e872cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNode*>(),
                    {::i2c::class_of<::Pathfinding::GridNode*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.GetPortal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridNode::*)(::Pathfinding::GraphNode*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, bool)>(&::Pathfinding::GridNode::GetPortal)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x5e87400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNode*>(),
                    {::i2c::class_of<::Pathfinding::GridNode*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.UpdateRecursiveG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNode::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&::Pathfinding::GridNode::UpdateRecursiveG)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5e87bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNode*>(),
                    {::i2c::class_of<::Pathfinding::GridNode*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.Open
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNode::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&::Pathfinding::GridNode::Open)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5e87e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNode*>(),
                    {::i2c::class_of<::Pathfinding::GridNode*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.SerializeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::GridNode::SerializeNode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e88290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNode*>(),
                    {::i2c::class_of<::Pathfinding::GridNode*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.DeserializeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::GridNode::DeserializeNode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e882e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNode*>(),
                    {::i2c::class_of<::Pathfinding::GridNode*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.AddConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNode::*)(::Pathfinding::GraphNode*, uint32_t)>(&::Pathfinding::GridNode::AddConnection)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e88344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNode*>(),
                    {::i2c::class_of<::Pathfinding::GridNode*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.RemoveConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNode::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::GridNode::RemoveConnection)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e88704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNode*>(),
                    {::i2c::class_of<::Pathfinding::GridNode*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNode.RemoveGridConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNode::*)(::Pathfinding::GridNode*)>(&::Pathfinding::GridNode::RemoveGridConnection)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5e88400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"RemoveGridConnection", {}, {::i2c::type_of<::Pathfinding::GridNode*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::GridNode::setStaticF__gridGraphs(::ArrayW<::Pathfinding::GridGraph*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Pathfinding::GridGraph*>, "_gridGraphs", ::Pathfinding::GridNode*>(std::forward<::ArrayW<::Pathfinding::GridGraph*>>(value));
}
inline ::ArrayW<::Pathfinding::GridGraph*> Pathfinding::GridNode::getStaticF__gridGraphs()  {
return ::cordl_internals::getStaticField<::ArrayW<::Pathfinding::GridGraph*>, "_gridGraphs", ::Pathfinding::GridNode*>();
}
inline void Pathfinding::GridNode::_ctor(::GlobalNamespace::AstarPath*  astar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, astar);
}
inline ::Pathfinding::GridGraph* Pathfinding::GridNode::GetGridGraph(uint32_t  graphIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"GetGridGraph", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GridGraph*>(nullptr, ___internal_method, graphIndex);
}
inline void Pathfinding::GridNode::SetGridGraph(int32_t  graphIndex, ::Pathfinding::GridGraph*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"SetGridGraph", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::GridGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, graphIndex, graph);
}
inline void Pathfinding::GridNode::ClearGridGraph(int32_t  graphIndex, ::Pathfinding::GridGraph*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"ClearGridGraph", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::GridGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, graphIndex, graph);
}
inline uint16_t Pathfinding::GridNode::get_InternalGridFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"get_InternalGridFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void Pathfinding::GridNode::set_InternalGridFlags(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"set_InternalGridFlags", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::GridNode::get_HasConnectionsToAllEightNeighbours()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNode*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::GridNode::HasConnectionInDirection(int32_t  dir)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNode*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dir);
}
inline bool Pathfinding::GridNode::GetConnectionInternal(int32_t  dir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"GetConnectionInternal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dir);
}
inline void Pathfinding::GridNode::SetConnectionInternal(int32_t  dir, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"SetConnectionInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dir, value);
}
inline void Pathfinding::GridNode::SetAllConnectionInternal(int32_t  connections)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"SetAllConnectionInternal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connections);
}
inline void Pathfinding::GridNode::ResetConnectionsInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"ResetConnectionsInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::GridNode::get_EdgeNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"get_EdgeNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::GridNode::set_EdgeNode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"set_EdgeNode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::GridNodeBase* Pathfinding::GridNode::GetNeighbourAlongDirection(int32_t  direction)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNode*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GridNodeBase*>(this, ___internal_method, direction);
}
inline void Pathfinding::GridNode::ClearConnections(bool  alsoReverse)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNode*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alsoReverse);
}
inline void Pathfinding::GridNode::GetConnections(::System::Action_1<::Pathfinding::GraphNode*>*  action)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNode*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline ::UnityEngine::Vector3 Pathfinding::GridNode::ClosestPointOnNode(::UnityEngine::Vector3  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNode*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, p);
}
inline bool Pathfinding::GridNode::GetPortal(::Pathfinding::GraphNode*  other, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  left, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  right, bool  backwards)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNode*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other, left, right, backwards);
}
inline void Pathfinding::GridNode::UpdateRecursiveG(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNode*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, pathNode, handler);
}
inline void Pathfinding::GridNode::Open(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNode*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, pathNode, handler);
}
inline void Pathfinding::GridNode::SerializeNode(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNode*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::GridNode::DeserializeNode(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNode*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::GridNode::AddConnection(::Pathfinding::GraphNode*  node, uint32_t  cost)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNode*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, cost);
}
inline void Pathfinding::GridNode::RemoveConnection(::Pathfinding::GraphNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNode*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::GridNode::RemoveGridConnection(::Pathfinding::GridNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNode*>(),
                        {"RemoveGridConnection", {}, {::i2c::type_of<::Pathfinding::GridNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::GridNode* Pathfinding::GridNode::New_ctor(::GlobalNamespace::AstarPath*  astar)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::GridNode*>(astar));
}
// Ctor Parameters []
constexpr ::Pathfinding::GridNode::GridNode()   {
}
