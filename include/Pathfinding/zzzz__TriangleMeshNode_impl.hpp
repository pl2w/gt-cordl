#pragma once
// IWYU pragma private; include "Pathfinding/TriangleMeshNode.hpp"
#include "Pathfinding/zzzz__INavmeshHolder_impl.hpp"
#include "Pathfinding/zzzz__MeshNode_impl.hpp"
#include "Pathfinding/zzzz__TriangleMeshNode_def.hpp"
#include "GlobalNamespace/zzzz__AstarPath_def.hpp"
#include "Pathfinding/Serialization/zzzz__GraphSerializationContext_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__INavmeshHolder_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "Pathfinding/zzzz__PathHandler_def.hpp"
#include "Pathfinding/zzzz__PathNode_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::TriangleMeshNode::*)(::GlobalNamespace::AstarPath*)>(&::Pathfinding::TriangleMeshNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e8a034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.GetNavmeshHolder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::INavmeshHolder* (*)(uint32_t)>(&::Pathfinding::TriangleMeshNode::GetNavmeshHolder)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e8a03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"GetNavmeshHolder", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.SetNavmeshHolder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::Pathfinding::INavmeshHolder*)>(&::Pathfinding::TriangleMeshNode::SetNavmeshHolder)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5e86658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"SetNavmeshHolder", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::INavmeshHolder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.UpdatePositionFromVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::TriangleMeshNode::*)()>(&::Pathfinding::TriangleMeshNode::UpdatePositionFromVertices)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e8a0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"UpdatePositionFromVertices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.GetVertexIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::TriangleMeshNode::*)(int32_t)>(&::Pathfinding::TriangleMeshNode::GetVertexIndex)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e8a320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"GetVertexIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.GetVertexArrayIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::TriangleMeshNode::*)(int32_t)>(&::Pathfinding::TriangleMeshNode::GetVertexArrayIndex)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5e8a344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"GetVertexArrayIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.GetVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::TriangleMeshNode::*)(::by_ref<::Pathfinding::Int3>, ::by_ref<::Pathfinding::Int3>, ::by_ref<::Pathfinding::Int3>)>(&::Pathfinding::TriangleMeshNode::GetVertices)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5e8a140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"GetVertices", {}, {::i2c::type_of<::by_ref<::Pathfinding::Int3>>(), ::i2c::type_of<::by_ref<::Pathfinding::Int3>>(), ::i2c::type_of<::by_ref<::Pathfinding::Int3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.GetVerticesInGraphSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::TriangleMeshNode::*)(::by_ref<::Pathfinding::Int3>, ::by_ref<::Pathfinding::Int3>, ::by_ref<::Pathfinding::Int3>)>(&::Pathfinding::TriangleMeshNode::GetVerticesInGraphSpace)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5e8a45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"GetVerticesInGraphSpace", {}, {::i2c::type_of<::by_ref<::Pathfinding::Int3>>(), ::i2c::type_of<::by_ref<::Pathfinding::Int3>>(), ::i2c::type_of<::by_ref<::Pathfinding::Int3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.GetVertex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Int3 (::Pathfinding::TriangleMeshNode::*)(int32_t)>(&::Pathfinding::TriangleMeshNode::GetVertex)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5e8a648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                    {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.GetVertexInGraphSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Int3 (::Pathfinding::TriangleMeshNode::*)(int32_t)>(&::Pathfinding::TriangleMeshNode::GetVertexInGraphSpace)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5e85dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"GetVertexInGraphSpace", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.GetVertexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::TriangleMeshNode::*)()>(&::Pathfinding::TriangleMeshNode::GetVertexCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e8a764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                    {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.ClosestPointOnNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::TriangleMeshNode::*)(::UnityEngine::Vector3)>(&::Pathfinding::TriangleMeshNode::ClosestPointOnNode)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5e8a76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                    {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.ClosestPointOnNodeXZInGraphSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Int3 (::Pathfinding::TriangleMeshNode::*)(::UnityEngine::Vector3)>(&::Pathfinding::TriangleMeshNode::ClosestPointOnNodeXZInGraphSpace)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x5e8a8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"ClosestPointOnNodeXZInGraphSpace", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.ClosestPointOnNodeXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::TriangleMeshNode::*)(::UnityEngine::Vector3)>(&::Pathfinding::TriangleMeshNode::ClosestPointOnNodeXZ)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5e8ac60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                    {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.ContainsPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::TriangleMeshNode::*)(::UnityEngine::Vector3)>(&::Pathfinding::TriangleMeshNode::ContainsPoint)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5e8ad98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                    {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.ContainsPointInGraphSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::TriangleMeshNode::*)(::Pathfinding::Int3)>(&::Pathfinding::TriangleMeshNode::ContainsPointInGraphSpace)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5e8aed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                    {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.UpdateRecursiveG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::TriangleMeshNode::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&::Pathfinding::TriangleMeshNode::UpdateRecursiveG)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5e8afa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                    {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.Open
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::TriangleMeshNode::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&::Pathfinding::TriangleMeshNode::Open)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5e8b090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                    {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.SharedEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::TriangleMeshNode::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::TriangleMeshNode::SharedEdge)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e8b2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"SharedEdge", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.GetPortal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::TriangleMeshNode::*)(::Pathfinding::GraphNode*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, bool)>(&::Pathfinding::TriangleMeshNode::GetPortal)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e8b2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                    {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.GetPortal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::TriangleMeshNode::*)(::Pathfinding::GraphNode*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, bool, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Pathfinding::TriangleMeshNode::GetPortal)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x5e8b308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"GetPortal", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.SurfaceArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::TriangleMeshNode::*)()>(&::Pathfinding::TriangleMeshNode::SurfaceArea)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5e8ba34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                    {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.RandomPointOnSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::TriangleMeshNode::*)()>(&::Pathfinding::TriangleMeshNode::RandomPointOnSurface)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5e8bc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                    {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.SerializeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::TriangleMeshNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::TriangleMeshNode::SerializeNode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e8bfec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                    {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TriangleMeshNode.DeserializeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::TriangleMeshNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::TriangleMeshNode::DeserializeNode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e8c068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                    {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 17}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::TriangleMeshNode::__cordl_internal_get_v0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___v0;
}
constexpr int32_t const& Pathfinding::TriangleMeshNode::__cordl_internal_get_v0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___v0;
}
constexpr void Pathfinding::TriangleMeshNode::__cordl_internal_set_v0(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___v0 = value;
}
constexpr int32_t& Pathfinding::TriangleMeshNode::__cordl_internal_get_v1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___v1;
}
constexpr int32_t const& Pathfinding::TriangleMeshNode::__cordl_internal_get_v1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___v1;
}
constexpr void Pathfinding::TriangleMeshNode::__cordl_internal_set_v1(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___v1 = value;
}
constexpr int32_t& Pathfinding::TriangleMeshNode::__cordl_internal_get_v2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___v2;
}
constexpr int32_t const& Pathfinding::TriangleMeshNode::__cordl_internal_get_v2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___v2;
}
constexpr void Pathfinding::TriangleMeshNode::__cordl_internal_set_v2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___v2 = value;
}
inline void Pathfinding::TriangleMeshNode::setStaticF__navmeshHolders(::ArrayW<::Pathfinding::INavmeshHolder*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Pathfinding::INavmeshHolder*>, "_navmeshHolders", ::Pathfinding::TriangleMeshNode*>(std::forward<::ArrayW<::Pathfinding::INavmeshHolder*>>(value));
}
inline ::ArrayW<::Pathfinding::INavmeshHolder*> Pathfinding::TriangleMeshNode::getStaticF__navmeshHolders()  {
return ::cordl_internals::getStaticField<::ArrayW<::Pathfinding::INavmeshHolder*>, "_navmeshHolders", ::Pathfinding::TriangleMeshNode*>();
}
inline void Pathfinding::TriangleMeshNode::setStaticF_lockObject(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "lockObject", ::Pathfinding::TriangleMeshNode*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Pathfinding::TriangleMeshNode::getStaticF_lockObject()  {
return ::cordl_internals::getStaticField<::System::Object*, "lockObject", ::Pathfinding::TriangleMeshNode*>();
}
inline void Pathfinding::TriangleMeshNode::_ctor(::GlobalNamespace::AstarPath*  astar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, astar);
}
inline ::Pathfinding::INavmeshHolder* Pathfinding::TriangleMeshNode::GetNavmeshHolder(uint32_t  graphIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"GetNavmeshHolder", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::INavmeshHolder*>(nullptr, ___internal_method, graphIndex);
}
inline void Pathfinding::TriangleMeshNode::SetNavmeshHolder(int32_t  graphIndex, ::Pathfinding::INavmeshHolder*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"SetNavmeshHolder", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::INavmeshHolder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, graphIndex, graph);
}
inline void Pathfinding::TriangleMeshNode::UpdatePositionFromVertices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"UpdatePositionFromVertices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Pathfinding::TriangleMeshNode::GetVertexIndex(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"GetVertexIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, i);
}
inline int32_t Pathfinding::TriangleMeshNode::GetVertexArrayIndex(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"GetVertexArrayIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, i);
}
inline void Pathfinding::TriangleMeshNode::GetVertices(::by_ref<::Pathfinding::Int3>  v0, ::by_ref<::Pathfinding::Int3>  v1, ::by_ref<::Pathfinding::Int3>  v2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"GetVertices", {}, {::i2c::type_of<::by_ref<::Pathfinding::Int3>>(), ::i2c::type_of<::by_ref<::Pathfinding::Int3>>(), ::i2c::type_of<::by_ref<::Pathfinding::Int3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v0, v1, v2);
}
inline void Pathfinding::TriangleMeshNode::GetVerticesInGraphSpace(::by_ref<::Pathfinding::Int3>  v0, ::by_ref<::Pathfinding::Int3>  v1, ::by_ref<::Pathfinding::Int3>  v2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"GetVerticesInGraphSpace", {}, {::i2c::type_of<::by_ref<::Pathfinding::Int3>>(), ::i2c::type_of<::by_ref<::Pathfinding::Int3>>(), ::i2c::type_of<::by_ref<::Pathfinding::Int3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v0, v1, v2);
}
inline ::Pathfinding::Int3 Pathfinding::TriangleMeshNode::GetVertex(int32_t  i)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Int3>(this, ___internal_method, i);
}
inline ::Pathfinding::Int3 Pathfinding::TriangleMeshNode::GetVertexInGraphSpace(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"GetVertexInGraphSpace", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Int3>(this, ___internal_method, i);
}
inline int32_t Pathfinding::TriangleMeshNode::GetVertexCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::TriangleMeshNode::ClosestPointOnNode(::UnityEngine::Vector3  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, p);
}
inline ::Pathfinding::Int3 Pathfinding::TriangleMeshNode::ClosestPointOnNodeXZInGraphSpace(::UnityEngine::Vector3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"ClosestPointOnNodeXZInGraphSpace", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Int3>(this, ___internal_method, p);
}
inline ::UnityEngine::Vector3 Pathfinding::TriangleMeshNode::ClosestPointOnNodeXZ(::UnityEngine::Vector3  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, p);
}
inline bool Pathfinding::TriangleMeshNode::ContainsPoint(::UnityEngine::Vector3  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline bool Pathfinding::TriangleMeshNode::ContainsPointInGraphSpace(::Pathfinding::Int3  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline void Pathfinding::TriangleMeshNode::UpdateRecursiveG(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, pathNode, handler);
}
inline void Pathfinding::TriangleMeshNode::Open(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, pathNode, handler);
}
inline int32_t Pathfinding::TriangleMeshNode::SharedEdge(::Pathfinding::GraphNode*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"SharedEdge", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline bool Pathfinding::TriangleMeshNode::GetPortal(::Pathfinding::GraphNode*  toNode, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  left, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  right, bool  backwards)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, toNode, left, right, backwards);
}
inline bool Pathfinding::TriangleMeshNode::GetPortal(::Pathfinding::GraphNode*  toNode, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  left, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  right, bool  backwards, ::by_ref<int32_t>  aIndex, ::by_ref<int32_t>  bIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TriangleMeshNode*>(),
                        {"GetPortal", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, toNode, left, right, backwards, aIndex, bIndex);
}
inline float_t Pathfinding::TriangleMeshNode::SurfaceArea()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::TriangleMeshNode::RandomPointOnSurface()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Pathfinding::TriangleMeshNode::SerializeNode(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::TriangleMeshNode::DeserializeNode(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::TriangleMeshNode*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline ::Pathfinding::TriangleMeshNode* Pathfinding::TriangleMeshNode::New_ctor(::GlobalNamespace::AstarPath*  astar)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::TriangleMeshNode*>(astar));
}
// Ctor Parameters []
constexpr ::Pathfinding::TriangleMeshNode::TriangleMeshNode()   {
}
