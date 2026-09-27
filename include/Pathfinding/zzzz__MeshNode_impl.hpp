#pragma once
// IWYU pragma private; include "Pathfinding/MeshNode.hpp"
#include "Pathfinding/zzzz__Connection_impl.hpp"
#include "Pathfinding/zzzz__GraphNode_impl.hpp"
#include "Pathfinding/zzzz__MeshNode_def.hpp"
#include "GlobalNamespace/zzzz__AstarPath_def.hpp"
#include "Pathfinding/Serialization/zzzz__GraphSerializationContext_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "Pathfinding/zzzz__PathHandler_def.hpp"
#include "Pathfinding/zzzz__PathNode_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::MeshNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MeshNode::*)(::GlobalNamespace::AstarPath*)>(&::Pathfinding::MeshNode::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e68148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MeshNode*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MeshNode.GetVertex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Int3 (::Pathfinding::MeshNode::*)(int32_t)>(&::Pathfinding::MeshNode::GetVertex)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MeshNode*>(),
                    {::i2c::class_of<::Pathfinding::MeshNode*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MeshNode.GetVertexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::MeshNode::*)()>(&::Pathfinding::MeshNode::GetVertexCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MeshNode*>(),
                    {::i2c::class_of<::Pathfinding::MeshNode*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MeshNode.ClosestPointOnNodeXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::MeshNode::*)(::UnityEngine::Vector3)>(&::Pathfinding::MeshNode::ClosestPointOnNodeXZ)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MeshNode*>(),
                    {::i2c::class_of<::Pathfinding::MeshNode*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MeshNode.ClearConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MeshNode::*)(bool)>(&::Pathfinding::MeshNode::ClearConnections)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5e6814c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MeshNode*>(),
                    {::i2c::class_of<::Pathfinding::MeshNode*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MeshNode.GetConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MeshNode::*)(::System::Action_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::MeshNode::GetConnections)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e6825c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MeshNode*>(),
                    {::i2c::class_of<::Pathfinding::MeshNode*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MeshNode.ContainsConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::MeshNode::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::MeshNode::ContainsConnection)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e682d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MeshNode*>(),
                    {::i2c::class_of<::Pathfinding::MeshNode*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MeshNode.UpdateRecursiveG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MeshNode::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&::Pathfinding::MeshNode::UpdateRecursiveG)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e68340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MeshNode*>(),
                    {::i2c::class_of<::Pathfinding::MeshNode*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MeshNode.AddConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MeshNode::*)(::Pathfinding::GraphNode*, uint32_t)>(&::Pathfinding::MeshNode::AddConnection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e68424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MeshNode*>(),
                    {::i2c::class_of<::Pathfinding::MeshNode*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MeshNode.AddConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MeshNode::*)(::Pathfinding::GraphNode*, uint32_t, uint8_t)>(&::Pathfinding::MeshNode::AddConnection)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5e6842c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MeshNode*>(),
                        {"AddConnection", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MeshNode.RemoveConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MeshNode::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::MeshNode::RemoveConnection)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5e68698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MeshNode*>(),
                    {::i2c::class_of<::Pathfinding::MeshNode*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MeshNode.ContainsPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::MeshNode::*)(::Pathfinding::Int3)>(&::Pathfinding::MeshNode::ContainsPoint)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e688cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MeshNode*>(),
                    {::i2c::class_of<::Pathfinding::MeshNode*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MeshNode.ContainsPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::MeshNode::*)(::UnityEngine::Vector3)>(&::Pathfinding::MeshNode::ContainsPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MeshNode*>(),
                    {::i2c::class_of<::Pathfinding::MeshNode*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MeshNode.ContainsPointInGraphSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::MeshNode::*)(::Pathfinding::Int3)>(&::Pathfinding::MeshNode::ContainsPointInGraphSpace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MeshNode*>(),
                    {::i2c::class_of<::Pathfinding::MeshNode*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MeshNode.GetGizmoHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::MeshNode::*)()>(&::Pathfinding::MeshNode::GetGizmoHashCode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e68900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MeshNode*>(),
                    {::i2c::class_of<::Pathfinding::MeshNode*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MeshNode.SerializeReferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MeshNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::MeshNode::SerializeReferences)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5e689c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MeshNode*>(),
                    {::i2c::class_of<::Pathfinding::MeshNode*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MeshNode.DeserializeReferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MeshNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::MeshNode::DeserializeReferences)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5e68aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MeshNode*>(),
                    {::i2c::class_of<::Pathfinding::MeshNode*>(), 19}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Pathfinding::Connection>& Pathfinding::MeshNode::__cordl_internal_get_connections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connections;
}
constexpr ::ArrayW<::Pathfinding::Connection> const& Pathfinding::MeshNode::__cordl_internal_get_connections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connections;
}
constexpr void Pathfinding::MeshNode::__cordl_internal_set_connections(::ArrayW<::Pathfinding::Connection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connections = value;
}
inline void Pathfinding::MeshNode::_ctor(::GlobalNamespace::AstarPath*  astar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MeshNode*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, astar);
}
inline ::Pathfinding::Int3 Pathfinding::MeshNode::GetVertex(int32_t  i)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MeshNode*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Int3>(this, ___internal_method, i);
}
inline int32_t Pathfinding::MeshNode::GetVertexCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MeshNode*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::MeshNode::ClosestPointOnNodeXZ(::UnityEngine::Vector3  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MeshNode*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, p);
}
inline void Pathfinding::MeshNode::ClearConnections(bool  alsoReverse)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MeshNode*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alsoReverse);
}
inline void Pathfinding::MeshNode::GetConnections(::System::Action_1<::Pathfinding::GraphNode*>*  action)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MeshNode*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline bool Pathfinding::MeshNode::ContainsConnection(::Pathfinding::GraphNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MeshNode*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline void Pathfinding::MeshNode::UpdateRecursiveG(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MeshNode*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, pathNode, handler);
}
inline void Pathfinding::MeshNode::AddConnection(::Pathfinding::GraphNode*  node, uint32_t  cost)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MeshNode*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, cost);
}
inline void Pathfinding::MeshNode::AddConnection(::Pathfinding::GraphNode*  node, uint32_t  cost, uint8_t  shapeEdge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MeshNode*>(),
                        {"AddConnection", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, cost, shapeEdge);
}
inline void Pathfinding::MeshNode::RemoveConnection(::Pathfinding::GraphNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MeshNode*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline bool Pathfinding::MeshNode::ContainsPoint(::Pathfinding::Int3  point)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MeshNode*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point);
}
inline bool Pathfinding::MeshNode::ContainsPoint(::UnityEngine::Vector3  point)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MeshNode*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point);
}
inline bool Pathfinding::MeshNode::ContainsPointInGraphSpace(::Pathfinding::Int3  point)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MeshNode*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point);
}
inline int32_t Pathfinding::MeshNode::GetGizmoHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MeshNode*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::MeshNode::SerializeReferences(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MeshNode*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::MeshNode::DeserializeReferences(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MeshNode*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline ::Pathfinding::MeshNode* Pathfinding::MeshNode::New_ctor(::GlobalNamespace::AstarPath*  astar)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::MeshNode*>(astar));
}
// Ctor Parameters []
constexpr ::Pathfinding::MeshNode::MeshNode()   {
}
