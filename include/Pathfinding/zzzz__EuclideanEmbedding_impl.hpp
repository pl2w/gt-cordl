#pragma once
// IWYU pragma private; include "Pathfinding/EuclideanEmbedding.hpp"
#include "Pathfinding/zzzz__GraphNode_impl.hpp"
#include "Pathfinding/zzzz__HeuristicOptimizationMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__EuclideanEmbedding_def.hpp"
#include "Pathfinding/zzzz__EuclideanEmbedding_def.hpp"
#include "Pathfinding/zzzz__FloodPath_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__OnPathDelegate_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding.GetRandom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::EuclideanEmbedding::*)()>(&::Pathfinding::EuclideanEmbedding::GetRandom)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e96208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {"GetRandom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding.EnsureCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EuclideanEmbedding::*)(int32_t)>(&::Pathfinding::EuclideanEmbedding::EnsureCapacity)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5e9622c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {"EnsureCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding.GetHeuristic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::EuclideanEmbedding::*)(int32_t, int32_t)>(&::Pathfinding::EuclideanEmbedding::GetHeuristic)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5e96438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {"GetHeuristic", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding.GetClosestWalkableNodesToChildrenRecursively
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EuclideanEmbedding::*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::EuclideanEmbedding::GetClosestWalkableNodesToChildrenRecursively)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x5e96578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {"GetClosestWalkableNodesToChildrenRecursively", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding.PickNRandomNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EuclideanEmbedding::*)(int32_t, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::EuclideanEmbedding::PickNRandomNodes)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5e96974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {"PickNRandomNodes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding.PickAnyWalkableNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphNode* (::Pathfinding::EuclideanEmbedding::*)()>(&::Pathfinding::EuclideanEmbedding::PickAnyWalkableNode)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5e96b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {"PickAnyWalkableNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding.RecalculatePivots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EuclideanEmbedding::*)()>(&::Pathfinding::EuclideanEmbedding::RecalculatePivots)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x5e96c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {"RecalculatePivots", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding.RecalculateCosts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EuclideanEmbedding::*)()>(&::Pathfinding::EuclideanEmbedding::RecalculateCosts)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x5e970a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {"RecalculateCosts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding.ApplyGridGraphEndpointSpecialCase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EuclideanEmbedding::*)()>(&::Pathfinding::EuclideanEmbedding::ApplyGridGraphEndpointSpecialCase)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x5e973d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {"ApplyGridGraphEndpointSpecialCase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EuclideanEmbedding::*)()>(&::Pathfinding::EuclideanEmbedding::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5e978b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EuclideanEmbedding::*)()>(&::Pathfinding::EuclideanEmbedding::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e97a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::HeuristicOptimizationMode& Pathfinding::EuclideanEmbedding::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::Pathfinding::HeuristicOptimizationMode const& Pathfinding::EuclideanEmbedding::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void Pathfinding::EuclideanEmbedding::__cordl_internal_set_mode(::Pathfinding::HeuristicOptimizationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr int32_t& Pathfinding::EuclideanEmbedding::__cordl_internal_get_seed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr int32_t const& Pathfinding::EuclideanEmbedding::__cordl_internal_get_seed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr void Pathfinding::EuclideanEmbedding::__cordl_internal_set_seed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seed = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::EuclideanEmbedding::__cordl_internal_get_pivotPointRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pivotPointRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::EuclideanEmbedding::__cordl_internal_get_pivotPointRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pivotPointRoot;
}
constexpr void Pathfinding::EuclideanEmbedding::__cordl_internal_set_pivotPointRoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pivotPointRoot = value;
}
constexpr int32_t& Pathfinding::EuclideanEmbedding::__cordl_internal_get_spreadOutCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spreadOutCount;
}
constexpr int32_t const& Pathfinding::EuclideanEmbedding::__cordl_internal_get_spreadOutCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spreadOutCount;
}
constexpr void Pathfinding::EuclideanEmbedding::__cordl_internal_set_spreadOutCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spreadOutCount = value;
}
constexpr bool& Pathfinding::EuclideanEmbedding::__cordl_internal_get_dirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirty;
}
constexpr bool const& Pathfinding::EuclideanEmbedding::__cordl_internal_get_dirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirty;
}
constexpr void Pathfinding::EuclideanEmbedding::__cordl_internal_set_dirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dirty = value;
}
constexpr ::ArrayW<uint32_t>& Pathfinding::EuclideanEmbedding::__cordl_internal_get_costs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___costs;
}
constexpr ::ArrayW<uint32_t> const& Pathfinding::EuclideanEmbedding::__cordl_internal_get_costs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___costs;
}
constexpr void Pathfinding::EuclideanEmbedding::__cordl_internal_set_costs(::ArrayW<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___costs = value;
}
constexpr int32_t& Pathfinding::EuclideanEmbedding::__cordl_internal_get_maxNodeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNodeIndex;
}
constexpr int32_t const& Pathfinding::EuclideanEmbedding::__cordl_internal_get_maxNodeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNodeIndex;
}
constexpr void Pathfinding::EuclideanEmbedding::__cordl_internal_set_maxNodeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxNodeIndex = value;
}
constexpr int32_t& Pathfinding::EuclideanEmbedding::__cordl_internal_get_pivotCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pivotCount;
}
constexpr int32_t const& Pathfinding::EuclideanEmbedding::__cordl_internal_get_pivotCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pivotCount;
}
constexpr void Pathfinding::EuclideanEmbedding::__cordl_internal_set_pivotCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pivotCount = value;
}
constexpr ::ArrayW<::Pathfinding::GraphNode*>& Pathfinding::EuclideanEmbedding::__cordl_internal_get_pivots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pivots;
}
constexpr ::ArrayW<::Pathfinding::GraphNode*> const& Pathfinding::EuclideanEmbedding::__cordl_internal_get_pivots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pivots;
}
constexpr void Pathfinding::EuclideanEmbedding::__cordl_internal_set_pivots(::ArrayW<::Pathfinding::GraphNode*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pivots = value;
}
constexpr uint32_t& Pathfinding::EuclideanEmbedding::__cordl_internal_get_rval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rval;
}
constexpr uint32_t const& Pathfinding::EuclideanEmbedding::__cordl_internal_get_rval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rval;
}
constexpr void Pathfinding::EuclideanEmbedding::__cordl_internal_set_rval(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rval = value;
}
constexpr ::System::Object*& Pathfinding::EuclideanEmbedding::__cordl_internal_get_lockObj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockObj;
}
constexpr ::System::Object* const& Pathfinding::EuclideanEmbedding::__cordl_internal_get_lockObj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockObj;
}
constexpr void Pathfinding::EuclideanEmbedding::__cordl_internal_set_lockObj(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lockObj = value;
}
inline uint32_t Pathfinding::EuclideanEmbedding::GetRandom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {"GetRandom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Pathfinding::EuclideanEmbedding::EnsureCapacity(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {"EnsureCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline uint32_t Pathfinding::EuclideanEmbedding::GetHeuristic(int32_t  nodeIndex1, int32_t  nodeIndex2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {"GetHeuristic", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, nodeIndex1, nodeIndex2);
}
inline void Pathfinding::EuclideanEmbedding::GetClosestWalkableNodesToChildrenRecursively(::UnityEngine::Transform*  tr, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {"GetClosestWalkableNodesToChildrenRecursively", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tr, nodes);
}
inline void Pathfinding::EuclideanEmbedding::PickNRandomNodes(int32_t  count, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {"PickNRandomNodes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count, buffer);
}
inline ::Pathfinding::GraphNode* Pathfinding::EuclideanEmbedding::PickAnyWalkableNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {"PickAnyWalkableNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphNode*>(this, ___internal_method);
}
inline void Pathfinding::EuclideanEmbedding::RecalculatePivots()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {"RecalculatePivots", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::EuclideanEmbedding::RecalculateCosts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {"RecalculateCosts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::EuclideanEmbedding::ApplyGridGraphEndpointSpecialCase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {"ApplyGridGraphEndpointSpecialCase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::EuclideanEmbedding::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::EuclideanEmbedding::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::EuclideanEmbedding* Pathfinding::EuclideanEmbedding::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::EuclideanEmbedding*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::EuclideanEmbedding::EuclideanEmbedding()   {
}
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EuclideanEmbedding___c__DisplayClass20_2::*)()>(&::Pathfinding::EuclideanEmbedding___c__DisplayClass20_2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e983f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass20_2*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_2._RecalculateCosts_b__3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EuclideanEmbedding___c__DisplayClass20_2::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::EuclideanEmbedding___c__DisplayClass20_2::_RecalculateCosts_b__3)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5e983fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass20_2*>(),
                        {"<RecalculateCosts>b__3", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& Pathfinding::EuclideanEmbedding___c__DisplayClass20_2::__cordl_internal_get_costOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___costOffset;
}
constexpr uint32_t const& Pathfinding::EuclideanEmbedding___c__DisplayClass20_2::__cordl_internal_get_costOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___costOffset;
}
constexpr void Pathfinding::EuclideanEmbedding___c__DisplayClass20_2::__cordl_internal_set_costOffset(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___costOffset = value;
}
constexpr ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1*& Pathfinding::EuclideanEmbedding___c__DisplayClass20_2::__cordl_internal_get_CS$__8__locals2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals2;
}
constexpr ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1* const& Pathfinding::EuclideanEmbedding___c__DisplayClass20_2::__cordl_internal_get_CS$__8__locals2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals2;
}
constexpr void Pathfinding::EuclideanEmbedding___c__DisplayClass20_2::__cordl_internal_set_CS$__8__locals2(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals2 = value;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& Pathfinding::EuclideanEmbedding___c__DisplayClass20_2::__cordl_internal_get___9__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__3;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& Pathfinding::EuclideanEmbedding___c__DisplayClass20_2::__cordl_internal_get___9__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__3;
}
constexpr void Pathfinding::EuclideanEmbedding___c__DisplayClass20_2::__cordl_internal_set___9__3(::System::Action_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__3 = value;
}
inline void Pathfinding::EuclideanEmbedding___c__DisplayClass20_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass20_2*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::EuclideanEmbedding___c__DisplayClass20_2::_RecalculateCosts_b__3(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass20_2*>(),
                        {"<RecalculateCosts>b__3", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_2* Pathfinding::EuclideanEmbedding___c__DisplayClass20_2::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::EuclideanEmbedding___c__DisplayClass20_2*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_2::EuclideanEmbedding___c__DisplayClass20_2()   {
}
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1::*)()>(&::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e97e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1._RecalculateCosts_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1::*)(::Pathfinding::Path*)>(&::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1::_RecalculateCosts_b__2)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0x5e97e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1*>(),
                        {"<RecalculateCosts>b__2", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::GraphNode*& Pathfinding::EuclideanEmbedding___c__DisplayClass20_1::__cordl_internal_get_pivot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pivot;
}
constexpr ::Pathfinding::GraphNode* const& Pathfinding::EuclideanEmbedding___c__DisplayClass20_1::__cordl_internal_get_pivot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pivot;
}
constexpr void Pathfinding::EuclideanEmbedding___c__DisplayClass20_1::__cordl_internal_set_pivot(::Pathfinding::GraphNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pivot = value;
}
constexpr int32_t& Pathfinding::EuclideanEmbedding___c__DisplayClass20_1::__cordl_internal_get_pivotIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pivotIndex;
}
constexpr int32_t const& Pathfinding::EuclideanEmbedding___c__DisplayClass20_1::__cordl_internal_get_pivotIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pivotIndex;
}
constexpr void Pathfinding::EuclideanEmbedding___c__DisplayClass20_1::__cordl_internal_set_pivotIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pivotIndex = value;
}
constexpr ::Pathfinding::FloodPath*& Pathfinding::EuclideanEmbedding___c__DisplayClass20_1::__cordl_internal_get_floodPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floodPath;
}
constexpr ::Pathfinding::FloodPath* const& Pathfinding::EuclideanEmbedding___c__DisplayClass20_1::__cordl_internal_get_floodPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floodPath;
}
constexpr void Pathfinding::EuclideanEmbedding___c__DisplayClass20_1::__cordl_internal_set_floodPath(::Pathfinding::FloodPath*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floodPath = value;
}
constexpr ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0*& Pathfinding::EuclideanEmbedding___c__DisplayClass20_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0* const& Pathfinding::EuclideanEmbedding___c__DisplayClass20_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void Pathfinding::EuclideanEmbedding___c__DisplayClass20_1::__cordl_internal_set_CS$__8__locals1(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void Pathfinding::EuclideanEmbedding___c__DisplayClass20_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::EuclideanEmbedding___c__DisplayClass20_1::_RecalculateCosts_b__2(::Pathfinding::Path*  _p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1*>(),
                        {"<RecalculateCosts>b__2", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p);
}
inline ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1* Pathfinding::EuclideanEmbedding___c__DisplayClass20_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1::EuclideanEmbedding___c__DisplayClass20_1()   {
}
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::*)()>(&::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e973d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0._RecalculateCosts_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::*)(::Pathfinding::Path*)>(&::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::_RecalculateCosts_b__0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e97c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0*>(),
                        {"<RecalculateCosts>b__0", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0._RecalculateCosts_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::*)(int32_t)>(&::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::_RecalculateCosts_b__1)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5e97cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0*>(),
                        {"<RecalculateCosts>b__1", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::__cordl_internal_get_numComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numComplete;
}
constexpr int32_t const& Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::__cordl_internal_get_numComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numComplete;
}
constexpr void Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::__cordl_internal_set_numComplete(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numComplete = value;
}
constexpr ::Pathfinding::EuclideanEmbedding*& Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Pathfinding::EuclideanEmbedding* const& Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::__cordl_internal_set___4__this(::Pathfinding::EuclideanEmbedding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Pathfinding::OnPathDelegate*& Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::__cordl_internal_get_onComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr ::Pathfinding::OnPathDelegate* const& Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::__cordl_internal_get_onComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr void Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::__cordl_internal_set_onComplete(::Pathfinding::OnPathDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onComplete = value;
}
constexpr ::System::Action_1<int32_t>*& Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::__cordl_internal_get_startCostCalculation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startCostCalculation;
}
constexpr ::System::Action_1<int32_t>* const& Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::__cordl_internal_get_startCostCalculation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startCostCalculation;
}
constexpr void Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::__cordl_internal_set_startCostCalculation(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startCostCalculation = value;
}
inline void Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::_RecalculateCosts_b__0(::Pathfinding::Path*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0*>(),
                        {"<RecalculateCosts>b__0", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::_RecalculateCosts_b__1(int32_t  pivotIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0*>(),
                        {"<RecalculateCosts>b__1", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pivotIndex);
}
inline ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0* Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0::EuclideanEmbedding___c__DisplayClass20_0()   {
}
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding___c__DisplayClass18_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EuclideanEmbedding___c__DisplayClass18_0::*)()>(&::Pathfinding::EuclideanEmbedding___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e96c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass18_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding___c__DisplayClass18_0._PickAnyWalkableNode_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EuclideanEmbedding___c__DisplayClass18_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::EuclideanEmbedding___c__DisplayClass18_0::_PickAnyWalkableNode_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e97c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass18_0*>(),
                        {"<PickAnyWalkableNode>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::GraphNode*& Pathfinding::EuclideanEmbedding___c__DisplayClass18_0::__cordl_internal_get_first()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___first;
}
constexpr ::Pathfinding::GraphNode* const& Pathfinding::EuclideanEmbedding___c__DisplayClass18_0::__cordl_internal_get_first() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___first;
}
constexpr void Pathfinding::EuclideanEmbedding___c__DisplayClass18_0::__cordl_internal_set_first(::Pathfinding::GraphNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___first = value;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& Pathfinding::EuclideanEmbedding___c__DisplayClass18_0::__cordl_internal_get___9__0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& Pathfinding::EuclideanEmbedding___c__DisplayClass18_0::__cordl_internal_get___9__0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr void Pathfinding::EuclideanEmbedding___c__DisplayClass18_0::__cordl_internal_set___9__0(::System::Action_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__0 = value;
}
inline void Pathfinding::EuclideanEmbedding___c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass18_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::EuclideanEmbedding___c__DisplayClass18_0::_PickAnyWalkableNode_b__0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass18_0*>(),
                        {"<PickAnyWalkableNode>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::EuclideanEmbedding___c__DisplayClass18_0* Pathfinding::EuclideanEmbedding___c__DisplayClass18_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::EuclideanEmbedding___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::EuclideanEmbedding___c__DisplayClass18_0::EuclideanEmbedding___c__DisplayClass18_0()   {
}
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::*)()>(&::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e96b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0._PickNRandomNodes_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::_PickNRandomNodes_b__0)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5e97ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0*>(),
                        {"<PickNRandomNodes>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::__cordl_internal_get_n()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___n;
}
constexpr int32_t const& Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::__cordl_internal_get_n() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___n;
}
constexpr void Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::__cordl_internal_set_n(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___n = value;
}
constexpr ::Pathfinding::EuclideanEmbedding*& Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Pathfinding::EuclideanEmbedding* const& Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::__cordl_internal_set___4__this(::Pathfinding::EuclideanEmbedding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::__cordl_internal_get_count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr int32_t const& Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::__cordl_internal_get_count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr void Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::__cordl_internal_set_count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___count = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr void Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::__cordl_internal_set_buffer(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer = value;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::__cordl_internal_get___9__0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::__cordl_internal_get___9__0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr void Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::__cordl_internal_set___9__0(::System::Action_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__0 = value;
}
inline void Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::_PickNRandomNodes_b__0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0*>(),
                        {"<PickNRandomNodes>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0* Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0::EuclideanEmbedding___c__DisplayClass17_0()   {
}
