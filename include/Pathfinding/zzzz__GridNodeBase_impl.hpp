#pragma once
// IWYU pragma private; include "Pathfinding/GridNodeBase.hpp"
#include "Pathfinding/zzzz__Connection_impl.hpp"
#include "Pathfinding/zzzz__GraphNode_impl.hpp"
#include "Pathfinding/zzzz__GridNodeBase_def.hpp"
#include "GlobalNamespace/zzzz__AstarPath_def.hpp"
#include "Pathfinding/Serialization/zzzz__GraphSerializationContext_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__PathHandler_def.hpp"
#include "Pathfinding/zzzz__PathNode_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::GridNodeBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNodeBase::*)(::GlobalNamespace::AstarPath*)>(&::Pathfinding::GridNodeBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e869d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.get_NodeInGridIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::GridNodeBase::*)()>(&::Pathfinding::GridNodeBase::get_NodeInGridIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e87044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"get_NodeInGridIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.set_NodeInGridIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNodeBase::*)(int32_t)>(&::Pathfinding::GridNodeBase::set_NodeInGridIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e88a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"set_NodeInGridIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.get_XCoordinateInGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::GridNodeBase::*)()>(&::Pathfinding::GridNodeBase::get_XCoordinateInGrid)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e88a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"get_XCoordinateInGrid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.get_ZCoordinateInGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::GridNodeBase::*)()>(&::Pathfinding::GridNodeBase::get_ZCoordinateInGrid)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e88a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"get_ZCoordinateInGrid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.get_WalkableErosion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridNodeBase::*)()>(&::Pathfinding::GridNodeBase::get_WalkableErosion)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e88b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"get_WalkableErosion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.set_WalkableErosion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNodeBase::*)(bool)>(&::Pathfinding::GridNodeBase::set_WalkableErosion)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e88b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"set_WalkableErosion", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.get_TmpWalkable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridNodeBase::*)()>(&::Pathfinding::GridNodeBase::get_TmpWalkable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e88b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"get_TmpWalkable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.set_TmpWalkable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNodeBase::*)(bool)>(&::Pathfinding::GridNodeBase::set_TmpWalkable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e88b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"set_TmpWalkable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.get_HasConnectionsToAllEightNeighbours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridNodeBase::*)()>(&::Pathfinding::GridNodeBase::get_HasConnectionsToAllEightNeighbours)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                    {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.SurfaceArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::GridNodeBase::*)()>(&::Pathfinding::GridNodeBase::SurfaceArea)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e88b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                    {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.RandomPointOnSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::GridNodeBase::*)()>(&::Pathfinding::GridNodeBase::RandomPointOnSurface)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5e88c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                    {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.NormalizePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Pathfinding::GridNodeBase::*)(::UnityEngine::Vector3)>(&::Pathfinding::GridNodeBase::NormalizePoint)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e88d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"NormalizePoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.UnNormalizePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::GridNodeBase::*)(::UnityEngine::Vector2)>(&::Pathfinding::GridNodeBase::UnNormalizePoint)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e88ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"UnNormalizePoint", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.GetGizmoHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::GridNodeBase::*)()>(&::Pathfinding::GridNodeBase::GetGizmoHashCode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e88ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                    {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.GetNeighbourAlongDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GridNodeBase* (::Pathfinding::GridNodeBase::*)(int32_t)>(&::Pathfinding::GridNodeBase::GetNeighbourAlongDirection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                    {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.HasConnectionInDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridNodeBase::*)(int32_t)>(&::Pathfinding::GridNodeBase::HasConnectionInDirection)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e88f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                    {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.ContainsConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridNodeBase::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::GridNodeBase::ContainsConnection)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e88f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                    {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.ClearCustomConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNodeBase::*)(bool)>(&::Pathfinding::GridNodeBase::ClearCustomConnections)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5e88ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"ClearCustomConnections", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.ClearConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNodeBase::*)(bool)>(&::Pathfinding::GridNodeBase::ClearConnections)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e8712c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                    {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.GetConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNodeBase::*)(::System::Action_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::GridNodeBase::GetConnections)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e87250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                    {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.UpdateRecursiveG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNodeBase::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&::Pathfinding::GridNodeBase::UpdateRecursiveG)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5e87d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                    {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.Open
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNodeBase::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&::Pathfinding::GridNodeBase::Open)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5e880dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                    {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.AddConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNodeBase::*)(::Pathfinding::GraphNode*, uint32_t)>(&::Pathfinding::GridNodeBase::AddConnection)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5e88510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                    {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.RemoveConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNodeBase::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::GridNodeBase::RemoveConnection)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5e887bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                    {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.SerializeReferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNodeBase::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::GridNodeBase::SerializeReferences)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e890dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                    {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridNodeBase.DeserializeReferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridNodeBase::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::GridNodeBase::DeserializeReferences)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5e891d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                    {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 19}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::GridNodeBase::__cordl_internal_get_nodeInGridIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeInGridIndex;
}
constexpr int32_t const& Pathfinding::GridNodeBase::__cordl_internal_get_nodeInGridIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeInGridIndex;
}
constexpr void Pathfinding::GridNodeBase::__cordl_internal_set_nodeInGridIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeInGridIndex = value;
}
constexpr uint16_t& Pathfinding::GridNodeBase::__cordl_internal_get_gridFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridFlags;
}
constexpr uint16_t const& Pathfinding::GridNodeBase::__cordl_internal_get_gridFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridFlags;
}
constexpr void Pathfinding::GridNodeBase::__cordl_internal_set_gridFlags(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gridFlags = value;
}
constexpr ::ArrayW<::Pathfinding::Connection>& Pathfinding::GridNodeBase::__cordl_internal_get_connections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connections;
}
constexpr ::ArrayW<::Pathfinding::Connection> const& Pathfinding::GridNodeBase::__cordl_internal_get_connections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connections;
}
constexpr void Pathfinding::GridNodeBase::__cordl_internal_set_connections(::ArrayW<::Pathfinding::Connection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connections = value;
}
inline void Pathfinding::GridNodeBase::_ctor(::GlobalNamespace::AstarPath*  astar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, astar);
}
inline int32_t Pathfinding::GridNodeBase::get_NodeInGridIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"get_NodeInGridIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::GridNodeBase::set_NodeInGridIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"set_NodeInGridIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Pathfinding::GridNodeBase::get_XCoordinateInGrid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"get_XCoordinateInGrid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::GridNodeBase::get_ZCoordinateInGrid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"get_ZCoordinateInGrid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Pathfinding::GridNodeBase::get_WalkableErosion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"get_WalkableErosion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::GridNodeBase::set_WalkableErosion(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"set_WalkableErosion", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::GridNodeBase::get_TmpWalkable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"get_TmpWalkable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::GridNodeBase::set_TmpWalkable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"set_TmpWalkable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::GridNodeBase::get_HasConnectionsToAllEightNeighbours()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Pathfinding::GridNodeBase::SurfaceArea()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::GridNodeBase::RandomPointOnSurface()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Pathfinding::GridNodeBase::NormalizePoint(::UnityEngine::Vector3  worldPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"NormalizePoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, worldPoint);
}
inline ::UnityEngine::Vector3 Pathfinding::GridNodeBase::UnNormalizePoint(::UnityEngine::Vector2  normalizedPointOnSurface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"UnNormalizePoint", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, normalizedPointOnSurface);
}
inline int32_t Pathfinding::GridNodeBase::GetGizmoHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Pathfinding::GridNodeBase* Pathfinding::GridNodeBase::GetNeighbourAlongDirection(int32_t  direction)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GridNodeBase*>(this, ___internal_method, direction);
}
inline bool Pathfinding::GridNodeBase::HasConnectionInDirection(int32_t  direction)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, direction);
}
inline bool Pathfinding::GridNodeBase::ContainsConnection(::Pathfinding::GraphNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline void Pathfinding::GridNodeBase::ClearCustomConnections(bool  alsoReverse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridNodeBase*>(),
                        {"ClearCustomConnections", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alsoReverse);
}
inline void Pathfinding::GridNodeBase::ClearConnections(bool  alsoReverse)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alsoReverse);
}
inline void Pathfinding::GridNodeBase::GetConnections(::System::Action_1<::Pathfinding::GraphNode*>*  action)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void Pathfinding::GridNodeBase::UpdateRecursiveG(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, pathNode, handler);
}
inline void Pathfinding::GridNodeBase::Open(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, pathNode, handler);
}
inline void Pathfinding::GridNodeBase::AddConnection(::Pathfinding::GraphNode*  node, uint32_t  cost)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, cost);
}
inline void Pathfinding::GridNodeBase::RemoveConnection(::Pathfinding::GraphNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::GridNodeBase::SerializeReferences(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::GridNodeBase::DeserializeReferences(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridNodeBase*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline ::Pathfinding::GridNodeBase* Pathfinding::GridNodeBase::New_ctor(::GlobalNamespace::AstarPath*  astar)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::GridNodeBase*>(astar));
}
// Ctor Parameters []
constexpr ::Pathfinding::GridNodeBase::GridNodeBase()   {
}
