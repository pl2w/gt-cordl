#pragma once
// IWYU pragma private; include "Pathfinding/PointNode.hpp"
#include "Pathfinding/zzzz__Connection_impl.hpp"
#include "Pathfinding/zzzz__GraphNode_impl.hpp"
#include "Pathfinding/zzzz__PointNode_def.hpp"
#include "GlobalNamespace/zzzz__AstarPath_def.hpp"
#include "Pathfinding/Serialization/zzzz__GraphSerializationContext_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "Pathfinding/zzzz__PathHandler_def.hpp"
#include "Pathfinding/zzzz__PathNode_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::PointNode.SetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointNode::*)(::Pathfinding::Int3)>(&::Pathfinding::PointNode::SetPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e89384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointNode*>(),
                        {"SetPosition", {}, {::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointNode::*)(::GlobalNamespace::AstarPath*)>(&::Pathfinding::PointNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e89390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointNode*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointNode.ClosestPointOnNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::PointNode::*)(::UnityEngine::Vector3)>(&::Pathfinding::PointNode::ClosestPointOnNode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e89398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointNode*>(),
                    {::i2c::class_of<::Pathfinding::PointNode*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointNode.GetConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointNode::*)(::System::Action_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::PointNode::GetConnections)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e893ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointNode*>(),
                    {::i2c::class_of<::Pathfinding::PointNode*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointNode.ClearConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointNode::*)(bool)>(&::Pathfinding::PointNode::ClearConnections)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e89428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointNode*>(),
                    {::i2c::class_of<::Pathfinding::PointNode*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointNode.UpdateRecursiveG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointNode::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&::Pathfinding::PointNode::UpdateRecursiveG)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5e89504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointNode*>(),
                    {::i2c::class_of<::Pathfinding::PointNode*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointNode.ContainsConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::PointNode::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::PointNode::ContainsConnection)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5e895f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointNode*>(),
                    {::i2c::class_of<::Pathfinding::PointNode*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointNode.AddConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointNode::*)(::Pathfinding::GraphNode*, uint32_t)>(&::Pathfinding::PointNode::AddConnection)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5e89630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointNode*>(),
                    {::i2c::class_of<::Pathfinding::PointNode*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointNode.RemoveConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointNode::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::PointNode::RemoveConnection)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5e89930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointNode*>(),
                    {::i2c::class_of<::Pathfinding::PointNode*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointNode.Open
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointNode::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&::Pathfinding::PointNode::Open)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5e89b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointNode*>(),
                    {::i2c::class_of<::Pathfinding::PointNode*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointNode.GetGizmoHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::PointNode::*)()>(&::Pathfinding::PointNode::GetGizmoHashCode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e89cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointNode*>(),
                    {::i2c::class_of<::Pathfinding::PointNode*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointNode.SerializeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::PointNode::SerializeNode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e89d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointNode*>(),
                    {::i2c::class_of<::Pathfinding::PointNode*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointNode.DeserializeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::PointNode::DeserializeNode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5e89d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointNode*>(),
                    {::i2c::class_of<::Pathfinding::PointNode*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointNode.SerializeReferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::PointNode::SerializeReferences)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e89dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointNode*>(),
                    {::i2c::class_of<::Pathfinding::PointNode*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointNode.DeserializeReferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::PointNode::DeserializeReferences)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5e89ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PointNode*>(),
                    {::i2c::class_of<::Pathfinding::PointNode*>(), 19}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Pathfinding::Connection>& Pathfinding::PointNode::__cordl_internal_get_connections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connections;
}
constexpr ::ArrayW<::Pathfinding::Connection> const& Pathfinding::PointNode::__cordl_internal_get_connections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connections;
}
constexpr void Pathfinding::PointNode::__cordl_internal_set_connections(::ArrayW<::Pathfinding::Connection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connections = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Pathfinding::PointNode::__cordl_internal_get_gameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Pathfinding::PointNode::__cordl_internal_get_gameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr void Pathfinding::PointNode::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObject = value;
}
inline void Pathfinding::PointNode::SetPosition(::Pathfinding::Int3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointNode*>(),
                        {"SetPosition", {}, {::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::PointNode::_ctor(::GlobalNamespace::AstarPath*  astar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointNode*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, astar);
}
inline ::UnityEngine::Vector3 Pathfinding::PointNode::ClosestPointOnNode(::UnityEngine::Vector3  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointNode*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, p);
}
inline void Pathfinding::PointNode::GetConnections(::System::Action_1<::Pathfinding::GraphNode*>*  action)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointNode*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void Pathfinding::PointNode::ClearConnections(bool  alsoReverse)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointNode*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alsoReverse);
}
inline void Pathfinding::PointNode::UpdateRecursiveG(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointNode*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, pathNode, handler);
}
inline bool Pathfinding::PointNode::ContainsConnection(::Pathfinding::GraphNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointNode*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline void Pathfinding::PointNode::AddConnection(::Pathfinding::GraphNode*  node, uint32_t  cost)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointNode*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, cost);
}
inline void Pathfinding::PointNode::RemoveConnection(::Pathfinding::GraphNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointNode*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::PointNode::Open(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointNode*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, pathNode, handler);
}
inline int32_t Pathfinding::PointNode::GetGizmoHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointNode*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::PointNode::SerializeNode(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointNode*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::PointNode::DeserializeNode(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointNode*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::PointNode::SerializeReferences(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointNode*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::PointNode::DeserializeReferences(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PointNode*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline ::Pathfinding::PointNode* Pathfinding::PointNode::New_ctor(::GlobalNamespace::AstarPath*  astar)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::PointNode*>(astar));
}
// Ctor Parameters []
constexpr ::Pathfinding::PointNode::PointNode()   {
}
