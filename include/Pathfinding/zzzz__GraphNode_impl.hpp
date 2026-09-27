#pragma once
// IWYU pragma private; include "Pathfinding/GraphNode.hpp"
#include "Pathfinding/zzzz__Int3_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "GlobalNamespace/zzzz__AstarPath_def.hpp"
#include "Pathfinding/Serialization/zzzz__GraphSerializationContext_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__NavGraph_def.hpp"
#include "Pathfinding/zzzz__PathHandler_def.hpp"
#include "Pathfinding/zzzz__PathNode_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::GraphNode.get_Graph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NavGraph* (::Pathfinding::GraphNode::*)()>(&::Pathfinding::GraphNode::get_Graph)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e67814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_Graph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)(::GlobalNamespace::AstarPath*)>(&::Pathfinding::GraphNode::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e67838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)()>(&::Pathfinding::GraphNode::Destroy)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e678c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"Destroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.get_Destroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GraphNode::*)()>(&::Pathfinding::GraphNode::get_Destroyed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e5b958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_Destroyed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.get_NodeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::GraphNode::*)()>(&::Pathfinding::GraphNode::get_NodeIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e5a688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_NodeIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.set_NodeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)(int32_t)>(&::Pathfinding::GraphNode::set_NodeIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e679c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"set_NodeIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.get_TemporaryFlag1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GraphNode::*)()>(&::Pathfinding::GraphNode::get_TemporaryFlag1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e679dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_TemporaryFlag1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.set_TemporaryFlag1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)(bool)>(&::Pathfinding::GraphNode::set_TemporaryFlag1)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e679e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"set_TemporaryFlag1", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.get_TemporaryFlag2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GraphNode::*)()>(&::Pathfinding::GraphNode::get_TemporaryFlag2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e67a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_TemporaryFlag2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.set_TemporaryFlag2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)(bool)>(&::Pathfinding::GraphNode::set_TemporaryFlag2)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e67a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"set_TemporaryFlag2", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.get_Flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::GraphNode::*)()>(&::Pathfinding::GraphNode::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e67a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_Flags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.set_Flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)(uint32_t)>(&::Pathfinding::GraphNode::set_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e67a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"set_Flags", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.get_Penalty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::GraphNode::*)()>(&::Pathfinding::GraphNode::get_Penalty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e67a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_Penalty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.set_Penalty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)(uint32_t)>(&::Pathfinding::GraphNode::set_Penalty)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e67a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"set_Penalty", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.get_Walkable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GraphNode::*)()>(&::Pathfinding::GraphNode::get_Walkable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e5a67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_Walkable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.set_Walkable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)(bool)>(&::Pathfinding::GraphNode::set_Walkable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e67b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"set_Walkable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.get_HierarchicalNodeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::GraphNode::*)()>(&::Pathfinding::GraphNode::get_HierarchicalNodeIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e5b970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_HierarchicalNodeIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.set_HierarchicalNodeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)(int32_t)>(&::Pathfinding::GraphNode::set_HierarchicalNodeIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e5be0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"set_HierarchicalNodeIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.get_IsHierarchicalNodeDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GraphNode::*)()>(&::Pathfinding::GraphNode::get_IsHierarchicalNodeDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e5b920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_IsHierarchicalNodeDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.set_IsHierarchicalNodeDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)(bool)>(&::Pathfinding::GraphNode::set_IsHierarchicalNodeDirty)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e5b92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"set_IsHierarchicalNodeDirty", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.get_Area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::GraphNode::*)()>(&::Pathfinding::GraphNode::get_Area)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e67ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_Area", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.get_GraphIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::GraphNode::*)()>(&::Pathfinding::GraphNode::get_GraphIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e5f828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_GraphIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.set_GraphIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)(uint32_t)>(&::Pathfinding::GraphNode::set_GraphIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e67c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"set_GraphIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.get_Tag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::GraphNode::*)()>(&::Pathfinding::GraphNode::get_Tag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e67c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_Tag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.set_Tag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)(uint32_t)>(&::Pathfinding::GraphNode::set_Tag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e67c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"set_Tag", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.SetConnectivityDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)()>(&::Pathfinding::GraphNode::SetConnectivityDirty)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e67c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"SetConnectivityDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.RecalculateConnectionCosts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)()>(&::Pathfinding::GraphNode::RecalculateConnectionCosts)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e67ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"RecalculateConnectionCosts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.UpdateRecursiveG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&::Pathfinding::GraphNode::UpdateRecursiveG)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5e67cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphNode*>(),
                    {::i2c::class_of<::Pathfinding::GraphNode*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.GetConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)(::System::Action_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::GraphNode::GetConnections)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphNode*>(),
                    {::i2c::class_of<::Pathfinding::GraphNode*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.AddConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)(::Pathfinding::GraphNode*, uint32_t)>(&::Pathfinding::GraphNode::AddConnection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphNode*>(),
                    {::i2c::class_of<::Pathfinding::GraphNode*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.RemoveConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::GraphNode::RemoveConnection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphNode*>(),
                    {::i2c::class_of<::Pathfinding::GraphNode*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.ClearConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)(bool)>(&::Pathfinding::GraphNode::ClearConnections)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphNode*>(),
                    {::i2c::class_of<::Pathfinding::GraphNode*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.ContainsConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GraphNode::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::GraphNode::ContainsConnection)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e67e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphNode*>(),
                    {::i2c::class_of<::Pathfinding::GraphNode*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.GetPortal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GraphNode::*)(::Pathfinding::GraphNode*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, bool)>(&::Pathfinding::GraphNode::GetPortal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e67f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphNode*>(),
                    {::i2c::class_of<::Pathfinding::GraphNode*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.Open
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&::Pathfinding::GraphNode::Open)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphNode*>(),
                    {::i2c::class_of<::Pathfinding::GraphNode*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.SurfaceArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::GraphNode::*)()>(&::Pathfinding::GraphNode::SurfaceArea)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e67f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphNode*>(),
                    {::i2c::class_of<::Pathfinding::GraphNode*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.RandomPointOnSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::GraphNode::*)()>(&::Pathfinding::GraphNode::RandomPointOnSurface)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e67f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphNode*>(),
                    {::i2c::class_of<::Pathfinding::GraphNode*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.ClosestPointOnNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::GraphNode::*)(::UnityEngine::Vector3)>(&::Pathfinding::GraphNode::ClosestPointOnNode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphNode*>(),
                    {::i2c::class_of<::Pathfinding::GraphNode*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.GetGizmoHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::GraphNode::*)()>(&::Pathfinding::GraphNode::GetGizmoHashCode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e67f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphNode*>(),
                    {::i2c::class_of<::Pathfinding::GraphNode*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.SerializeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::GraphNode::SerializeNode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e67f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphNode*>(),
                    {::i2c::class_of<::Pathfinding::GraphNode*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.DeserializeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::GraphNode::DeserializeNode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e67fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphNode*>(),
                    {::i2c::class_of<::Pathfinding::GraphNode*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.SerializeReferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::GraphNode::SerializeReferences)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e6806c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphNode*>(),
                    {::i2c::class_of<::Pathfinding::GraphNode*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode.DeserializeReferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::GraphNode::DeserializeReferences)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e68070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphNode*>(),
                    {::i2c::class_of<::Pathfinding::GraphNode*>(), 19}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::GraphNode::__cordl_internal_get_nodeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeIndex;
}
constexpr int32_t const& Pathfinding::GraphNode::__cordl_internal_get_nodeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeIndex;
}
constexpr void Pathfinding::GraphNode::__cordl_internal_set_nodeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeIndex = value;
}
constexpr uint32_t& Pathfinding::GraphNode::__cordl_internal_get_flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr uint32_t const& Pathfinding::GraphNode::__cordl_internal_get_flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr void Pathfinding::GraphNode::__cordl_internal_set_flags(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flags = value;
}
constexpr uint32_t& Pathfinding::GraphNode::__cordl_internal_get_penalty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___penalty;
}
constexpr uint32_t const& Pathfinding::GraphNode::__cordl_internal_get_penalty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___penalty;
}
constexpr void Pathfinding::GraphNode::__cordl_internal_set_penalty(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___penalty = value;
}
constexpr ::Pathfinding::Int3& Pathfinding::GraphNode::__cordl_internal_get_position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr ::Pathfinding::Int3 const& Pathfinding::GraphNode::__cordl_internal_get_position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr void Pathfinding::GraphNode::__cordl_internal_set_position(::Pathfinding::Int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___position = value;
}
inline ::Pathfinding::NavGraph* Pathfinding::GraphNode::get_Graph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_Graph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NavGraph*>(this, ___internal_method);
}
inline void Pathfinding::GraphNode::_ctor(::GlobalNamespace::AstarPath*  astar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, astar);
}
inline void Pathfinding::GraphNode::Destroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"Destroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::GraphNode::get_Destroyed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_Destroyed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Pathfinding::GraphNode::get_NodeIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_NodeIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::GraphNode::set_NodeIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"set_NodeIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::GraphNode::get_TemporaryFlag1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_TemporaryFlag1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::GraphNode::set_TemporaryFlag1(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"set_TemporaryFlag1", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::GraphNode::get_TemporaryFlag2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_TemporaryFlag2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::GraphNode::set_TemporaryFlag2(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"set_TemporaryFlag2", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Pathfinding::GraphNode::get_Flags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_Flags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Pathfinding::GraphNode::set_Flags(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"set_Flags", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Pathfinding::GraphNode::get_Penalty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_Penalty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Pathfinding::GraphNode::set_Penalty(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"set_Penalty", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::GraphNode::get_Walkable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_Walkable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::GraphNode::set_Walkable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"set_Walkable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Pathfinding::GraphNode::get_HierarchicalNodeIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_HierarchicalNodeIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::GraphNode::set_HierarchicalNodeIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"set_HierarchicalNodeIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::GraphNode::get_IsHierarchicalNodeDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_IsHierarchicalNodeDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::GraphNode::set_IsHierarchicalNodeDirty(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"set_IsHierarchicalNodeDirty", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Pathfinding::GraphNode::get_Area()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_Area", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint32_t Pathfinding::GraphNode::get_GraphIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_GraphIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Pathfinding::GraphNode::set_GraphIndex(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"set_GraphIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Pathfinding::GraphNode::get_Tag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"get_Tag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Pathfinding::GraphNode::set_Tag(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"set_Tag", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::GraphNode::SetConnectivityDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"SetConnectivityDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphNode::RecalculateConnectionCosts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode*>(),
                        {"RecalculateConnectionCosts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphNode::UpdateRecursiveG(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphNode*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, pathNode, handler);
}
inline void Pathfinding::GraphNode::GetConnections(::System::Action_1<::Pathfinding::GraphNode*>*  action)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphNode*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void Pathfinding::GraphNode::AddConnection(::Pathfinding::GraphNode*  node, uint32_t  cost)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphNode*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, cost);
}
inline void Pathfinding::GraphNode::RemoveConnection(::Pathfinding::GraphNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphNode*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::GraphNode::ClearConnections(bool  alsoReverse)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphNode*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alsoReverse);
}
inline bool Pathfinding::GraphNode::ContainsConnection(::Pathfinding::GraphNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphNode*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline bool Pathfinding::GraphNode::GetPortal(::Pathfinding::GraphNode*  other, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  left, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  right, bool  backwards)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphNode*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other, left, right, backwards);
}
inline void Pathfinding::GraphNode::Open(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphNode*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, pathNode, handler);
}
inline float_t Pathfinding::GraphNode::SurfaceArea()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphNode*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::GraphNode::RandomPointOnSurface()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphNode*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::GraphNode::ClosestPointOnNode(::UnityEngine::Vector3  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphNode*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, p);
}
inline int32_t Pathfinding::GraphNode::GetGizmoHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphNode*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::GraphNode::SerializeNode(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphNode*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::GraphNode::DeserializeNode(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphNode*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::GraphNode::SerializeReferences(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphNode*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::GraphNode::DeserializeReferences(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphNode*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline ::Pathfinding::GraphNode* Pathfinding::GraphNode::New_ctor(::GlobalNamespace::AstarPath*  astar)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::GraphNode*>(astar));
}
// Ctor Parameters []
constexpr ::Pathfinding::GraphNode::GraphNode()   {
}
//  Writing Method size for method: ::Pathfinding::GraphNode___c__DisplayClass65_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode___c__DisplayClass65_0::*)()>(&::Pathfinding::GraphNode___c__DisplayClass65_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e67f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode___c__DisplayClass65_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode___c__DisplayClass65_0._ContainsConnection_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode___c__DisplayClass65_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::GraphNode___c__DisplayClass65_0::_ContainsConnection_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e6812c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode___c__DisplayClass65_0*>(),
                        {"<ContainsConnection>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Pathfinding::GraphNode___c__DisplayClass65_0::__cordl_internal_get_contains()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contains;
}
constexpr bool const& Pathfinding::GraphNode___c__DisplayClass65_0::__cordl_internal_get_contains() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contains;
}
constexpr void Pathfinding::GraphNode___c__DisplayClass65_0::__cordl_internal_set_contains(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contains = value;
}
constexpr ::Pathfinding::GraphNode*& Pathfinding::GraphNode___c__DisplayClass65_0::__cordl_internal_get_node()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr ::Pathfinding::GraphNode* const& Pathfinding::GraphNode___c__DisplayClass65_0::__cordl_internal_get_node() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr void Pathfinding::GraphNode___c__DisplayClass65_0::__cordl_internal_set_node(::Pathfinding::GraphNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___node = value;
}
inline void Pathfinding::GraphNode___c__DisplayClass65_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode___c__DisplayClass65_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphNode___c__DisplayClass65_0::_ContainsConnection_b__0(::Pathfinding::GraphNode*  neighbour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode___c__DisplayClass65_0*>(),
                        {"<ContainsConnection>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, neighbour);
}
inline ::Pathfinding::GraphNode___c__DisplayClass65_0* Pathfinding::GraphNode___c__DisplayClass65_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::GraphNode___c__DisplayClass65_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::GraphNode___c__DisplayClass65_0::GraphNode___c__DisplayClass65_0()   {
}
//  Writing Method size for method: ::Pathfinding::GraphNode___c__DisplayClass60_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode___c__DisplayClass60_0::*)()>(&::Pathfinding::GraphNode___c__DisplayClass60_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e67de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode___c__DisplayClass60_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphNode___c__DisplayClass60_0._UpdateRecursiveG_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphNode___c__DisplayClass60_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::GraphNode___c__DisplayClass60_0::_UpdateRecursiveG_b__0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e68074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode___c__DisplayClass60_0*>(),
                        {"<UpdateRecursiveG>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::PathHandler*& Pathfinding::GraphNode___c__DisplayClass60_0::__cordl_internal_get_handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr ::Pathfinding::PathHandler* const& Pathfinding::GraphNode___c__DisplayClass60_0::__cordl_internal_get_handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr void Pathfinding::GraphNode___c__DisplayClass60_0::__cordl_internal_set_handler(::Pathfinding::PathHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handler = value;
}
constexpr ::Pathfinding::PathNode*& Pathfinding::GraphNode___c__DisplayClass60_0::__cordl_internal_get_pathNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathNode;
}
constexpr ::Pathfinding::PathNode* const& Pathfinding::GraphNode___c__DisplayClass60_0::__cordl_internal_get_pathNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathNode;
}
constexpr void Pathfinding::GraphNode___c__DisplayClass60_0::__cordl_internal_set_pathNode(::Pathfinding::PathNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathNode = value;
}
constexpr ::Pathfinding::Path*& Pathfinding::GraphNode___c__DisplayClass60_0::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::Pathfinding::Path* const& Pathfinding::GraphNode___c__DisplayClass60_0::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void Pathfinding::GraphNode___c__DisplayClass60_0::__cordl_internal_set_path(::Pathfinding::Path*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
inline void Pathfinding::GraphNode___c__DisplayClass60_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode___c__DisplayClass60_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphNode___c__DisplayClass60_0::_UpdateRecursiveG_b__0(::Pathfinding::GraphNode*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphNode___c__DisplayClass60_0*>(),
                        {"<UpdateRecursiveG>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::Pathfinding::GraphNode___c__DisplayClass60_0* Pathfinding::GraphNode___c__DisplayClass60_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::GraphNode___c__DisplayClass60_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::GraphNode___c__DisplayClass60_0::GraphNode___c__DisplayClass60_0()   {
}
