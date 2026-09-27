#pragma once
// IWYU pragma private; include "Pathfinding/RichFunnel.hpp"
#include "Pathfinding/zzzz__RichPathPart_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__RichFunnel_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__IRaycastableGraph_def.hpp"
#include "Pathfinding/zzzz__NavmeshBase_def.hpp"
#include "Pathfinding/zzzz__RichPath_def.hpp"
#include "Pathfinding/zzzz__TriangleMeshNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::RichFunnel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichFunnel::*)()>(&::Pathfinding::RichFunnel::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5e437e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichFunnel.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RichFunnel* (::Pathfinding::RichFunnel::*)(::Pathfinding::RichPath*, ::Pathfinding::NavmeshBase*)>(&::Pathfinding::RichFunnel::Initialize)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e42f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"Initialize", {}, {::i2c::type_of<::Pathfinding::RichPath*>(), ::i2c::type_of<::Pathfinding::NavmeshBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichFunnel.OnEnterPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichFunnel::*)()>(&::Pathfinding::RichFunnel::OnEnterPool)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5e43920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                    {::i2c::class_of<::Pathfinding::RichFunnel*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichFunnel.get_CurrentNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::TriangleMeshNode* (::Pathfinding::RichFunnel::*)()>(&::Pathfinding::RichFunnel::get_CurrentNode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e439d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"get_CurrentNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichFunnel.BuildFunnelCorridor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichFunnel::*)(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*, int32_t, int32_t)>(&::Pathfinding::RichFunnel::BuildFunnelCorridor)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x5e43054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"BuildFunnelCorridor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichFunnel.SimplifyPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichFunnel::*)(::Pathfinding::IRaycastableGraph*, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*, int32_t, int32_t, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::RichFunnel::SimplifyPath)> {
  constexpr static std::size_t size = 0xd60;
  constexpr static std::size_t addrs = 0x5e43a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"SimplifyPath", {}, {::i2c::type_of<::Pathfinding::IRaycastableGraph*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichFunnel.UpdateFunnelCorridor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichFunnel::*)(int32_t, ::System::Collections::Generic::List_1<::Pathfinding::TriangleMeshNode*>*)>(&::Pathfinding::RichFunnel::UpdateFunnelCorridor)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5e447a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"UpdateFunnelCorridor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::TriangleMeshNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichFunnel.CheckForDestroyedNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichFunnel::*)()>(&::Pathfinding::RichFunnel::CheckForDestroyedNodes)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e44aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"CheckForDestroyedNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichFunnel.get_DistanceToEndOfPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RichFunnel::*)()>(&::Pathfinding::RichFunnel::get_DistanceToEndOfPath)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5e44b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"get_DistanceToEndOfPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichFunnel.ClampToNavmesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::RichFunnel::*)(::UnityEngine::Vector3)>(&::Pathfinding::RichFunnel::ClampToNavmesh)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5e421f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"ClampToNavmesh", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichFunnel.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::RichFunnel::*)(::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, int32_t, ::by_ref<bool>, ::by_ref<bool>)>(&::Pathfinding::RichFunnel::Update)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x5e40774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"Update", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichFunnel.ClampToNavmeshInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichFunnel::*)(::by_ref<::UnityEngine::Vector3>)>(&::Pathfinding::RichFunnel::ClampToNavmeshInternal)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0x5e44c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"ClampToNavmeshInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichFunnel.FindWalls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichFunnel::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, float_t)>(&::Pathfinding::RichFunnel::FindWalls)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e41ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"FindWalls", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichFunnel.FindWalls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichFunnel::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, float_t)>(&::Pathfinding::RichFunnel::FindWalls)> {
  constexpr static std::size_t size = 0x6f8;
  constexpr static std::size_t addrs = 0x5e45c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"FindWalls", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichFunnel.FindNextCorners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichFunnel::*)(::UnityEngine::Vector3, int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, int32_t, ::by_ref<bool>)>(&::Pathfinding::RichFunnel::FindNextCorners)> {
  constexpr static std::size_t size = 0x9e0;
  constexpr static std::size_t addrs = 0x5e4525c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"FindNextCorners", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& Pathfinding::RichFunnel::__cordl_internal_get_left()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___left;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& Pathfinding::RichFunnel::__cordl_internal_get_left() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___left;
}
constexpr void Pathfinding::RichFunnel::__cordl_internal_set_left(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___left = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& Pathfinding::RichFunnel::__cordl_internal_get_right()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___right;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& Pathfinding::RichFunnel::__cordl_internal_get_right() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___right;
}
constexpr void Pathfinding::RichFunnel::__cordl_internal_set_right(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___right = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::TriangleMeshNode*>*& Pathfinding::RichFunnel::__cordl_internal_get_nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::TriangleMeshNode*>* const& Pathfinding::RichFunnel::__cordl_internal_get_nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr void Pathfinding::RichFunnel::__cordl_internal_set_nodes(::System::Collections::Generic::List_1<::Pathfinding::TriangleMeshNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodes = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::RichFunnel::__cordl_internal_get_exactStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exactStart;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::RichFunnel::__cordl_internal_get_exactStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exactStart;
}
constexpr void Pathfinding::RichFunnel::__cordl_internal_set_exactStart(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exactStart = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::RichFunnel::__cordl_internal_get_exactEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exactEnd;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::RichFunnel::__cordl_internal_get_exactEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exactEnd;
}
constexpr void Pathfinding::RichFunnel::__cordl_internal_set_exactEnd(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exactEnd = value;
}
constexpr ::Pathfinding::NavmeshBase*& Pathfinding::RichFunnel::__cordl_internal_get_graph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr ::Pathfinding::NavmeshBase* const& Pathfinding::RichFunnel::__cordl_internal_get_graph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr void Pathfinding::RichFunnel::__cordl_internal_set_graph(::Pathfinding::NavmeshBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graph = value;
}
constexpr int32_t& Pathfinding::RichFunnel::__cordl_internal_get_currentNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentNode;
}
constexpr int32_t const& Pathfinding::RichFunnel::__cordl_internal_get_currentNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentNode;
}
constexpr void Pathfinding::RichFunnel::__cordl_internal_set_currentNode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentNode = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::RichFunnel::__cordl_internal_get_currentPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPosition;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::RichFunnel::__cordl_internal_get_currentPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPosition;
}
constexpr void Pathfinding::RichFunnel::__cordl_internal_set_currentPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPosition = value;
}
constexpr int32_t& Pathfinding::RichFunnel::__cordl_internal_get_checkForDestroyedNodesCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkForDestroyedNodesCounter;
}
constexpr int32_t const& Pathfinding::RichFunnel::__cordl_internal_get_checkForDestroyedNodesCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkForDestroyedNodesCounter;
}
constexpr void Pathfinding::RichFunnel::__cordl_internal_set_checkForDestroyedNodesCounter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkForDestroyedNodesCounter = value;
}
constexpr ::Pathfinding::RichPath*& Pathfinding::RichFunnel::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::Pathfinding::RichPath* const& Pathfinding::RichFunnel::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void Pathfinding::RichFunnel::__cordl_internal_set_path(::Pathfinding::RichPath*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::RichFunnel::__cordl_internal_get_triBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triBuffer;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::RichFunnel::__cordl_internal_get_triBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triBuffer;
}
constexpr void Pathfinding::RichFunnel::__cordl_internal_set_triBuffer(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triBuffer = value;
}
constexpr bool& Pathfinding::RichFunnel::__cordl_internal_get_funnelSimplification()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___funnelSimplification;
}
constexpr bool const& Pathfinding::RichFunnel::__cordl_internal_get_funnelSimplification() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___funnelSimplification;
}
constexpr void Pathfinding::RichFunnel::__cordl_internal_set_funnelSimplification(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___funnelSimplification = value;
}
inline void Pathfinding::RichFunnel::setStaticF_navmeshClampQueue(::System::Collections::Generic::Queue_1<::Pathfinding::TriangleMeshNode*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::Pathfinding::TriangleMeshNode*>*, "navmeshClampQueue", ::Pathfinding::RichFunnel*>(std::forward<::System::Collections::Generic::Queue_1<::Pathfinding::TriangleMeshNode*>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::Pathfinding::TriangleMeshNode*>* Pathfinding::RichFunnel::getStaticF_navmeshClampQueue()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::Pathfinding::TriangleMeshNode*>*, "navmeshClampQueue", ::Pathfinding::RichFunnel*>();
}
inline void Pathfinding::RichFunnel::setStaticF_navmeshClampList(::System::Collections::Generic::List_1<::Pathfinding::TriangleMeshNode*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Pathfinding::TriangleMeshNode*>*, "navmeshClampList", ::Pathfinding::RichFunnel*>(std::forward<::System::Collections::Generic::List_1<::Pathfinding::TriangleMeshNode*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Pathfinding::TriangleMeshNode*>* Pathfinding::RichFunnel::getStaticF_navmeshClampList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Pathfinding::TriangleMeshNode*>*, "navmeshClampList", ::Pathfinding::RichFunnel*>();
}
inline void Pathfinding::RichFunnel::setStaticF_navmeshClampDict(::System::Collections::Generic::Dictionary_2<::Pathfinding::TriangleMeshNode*,::Pathfinding::TriangleMeshNode*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Pathfinding::TriangleMeshNode*,::Pathfinding::TriangleMeshNode*>*, "navmeshClampDict", ::Pathfinding::RichFunnel*>(std::forward<::System::Collections::Generic::Dictionary_2<::Pathfinding::TriangleMeshNode*,::Pathfinding::TriangleMeshNode*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Pathfinding::TriangleMeshNode*,::Pathfinding::TriangleMeshNode*>* Pathfinding::RichFunnel::getStaticF_navmeshClampDict()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Pathfinding::TriangleMeshNode*,::Pathfinding::TriangleMeshNode*>*, "navmeshClampDict", ::Pathfinding::RichFunnel*>();
}
inline void Pathfinding::RichFunnel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RichFunnel* Pathfinding::RichFunnel::Initialize(::Pathfinding::RichPath*  path, ::Pathfinding::NavmeshBase*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"Initialize", {}, {::i2c::type_of<::Pathfinding::RichPath*>(), ::i2c::type_of<::Pathfinding::NavmeshBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RichFunnel*>(this, ___internal_method, path, graph);
}
inline void Pathfinding::RichFunnel::OnEnterPool()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RichFunnel*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::TriangleMeshNode* Pathfinding::RichFunnel::get_CurrentNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"get_CurrentNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::TriangleMeshNode*>(this, ___internal_method);
}
inline void Pathfinding::RichFunnel::BuildFunnelCorridor(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodes, int32_t  start, int32_t  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"BuildFunnelCorridor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodes, start, end);
}
inline void Pathfinding::RichFunnel::SimplifyPath(::Pathfinding::IRaycastableGraph*  graph, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodes, int32_t  start, int32_t  end, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  result, ::UnityEngine::Vector3  startPoint, ::UnityEngine::Vector3  endPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"SimplifyPath", {}, {::i2c::type_of<::Pathfinding::IRaycastableGraph*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph, nodes, start, end, result, startPoint, endPoint);
}
inline void Pathfinding::RichFunnel::UpdateFunnelCorridor(int32_t  splitIndex, ::System::Collections::Generic::List_1<::Pathfinding::TriangleMeshNode*>*  prefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"UpdateFunnelCorridor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::TriangleMeshNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, splitIndex, prefix);
}
inline bool Pathfinding::RichFunnel::CheckForDestroyedNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"CheckForDestroyedNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Pathfinding::RichFunnel::get_DistanceToEndOfPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"get_DistanceToEndOfPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::RichFunnel::ClampToNavmesh(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"ClampToNavmesh", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position);
}
inline ::UnityEngine::Vector3 Pathfinding::RichFunnel::Update(::UnityEngine::Vector3  position, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  buffer, int32_t  numCorners, ::by_ref<bool>  lastCorner, ::by_ref<bool>  requiresRepath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"Update", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position, buffer, numCorners, lastCorner, requiresRepath);
}
inline bool Pathfinding::RichFunnel::ClampToNavmeshInternal(::by_ref<::UnityEngine::Vector3>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"ClampToNavmeshInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position);
}
inline void Pathfinding::RichFunnel::FindWalls(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  wallBuffer, float_t  range)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"FindWalls", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wallBuffer, range);
}
inline void Pathfinding::RichFunnel::FindWalls(int32_t  nodeIndex, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  wallBuffer, ::UnityEngine::Vector3  position, float_t  range)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"FindWalls", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeIndex, wallBuffer, position, range);
}
inline bool Pathfinding::RichFunnel::FindNextCorners(::UnityEngine::Vector3  origin, int32_t  startIndex, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  funnelPath, int32_t  numCorners, ::by_ref<bool>  lastCorner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichFunnel*>(),
                        {"FindNextCorners", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, origin, startIndex, funnelPath, numCorners, lastCorner);
}
inline ::Pathfinding::RichFunnel* Pathfinding::RichFunnel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RichFunnel*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::RichFunnel::RichFunnel()   {
}
