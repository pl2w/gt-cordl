#pragma once
// IWYU pragma private; include "Pathfinding/PathUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__PathUtilities_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__IRaycastableGraph_def.hpp"
#include "Pathfinding/zzzz__PathUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::PathUtilities.IsPathPossible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::GraphNode*, ::Pathfinding::GraphNode*)>(&::Pathfinding::PathUtilities::IsPathPossible)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5eb8384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities*>(),
                        {"IsPathPossible", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathUtilities.IsPathPossible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::PathUtilities::IsPathPossible)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5eb8290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities*>(),
                        {"IsPathPossible", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathUtilities.IsPathPossible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*, int32_t)>(&::Pathfinding::PathUtilities::IsPathPossible)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5eb83f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities*>(),
                        {"IsPathPossible", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathUtilities.GetReachableNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* (*)(::Pathfinding::GraphNode*, int32_t, ::System::Func_2<::Pathfinding::GraphNode*,bool>*)>(&::Pathfinding::PathUtilities::GetReachableNodes)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5eb857c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities*>(),
                        {"GetReachableNodes", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathUtilities.BFS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* (*)(::Pathfinding::GraphNode*, int32_t, int32_t, ::System::Func_2<::Pathfinding::GraphNode*,bool>*)>(&::Pathfinding::PathUtilities::BFS)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x5eb8830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities*>(),
                        {"BFS", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathUtilities.GetSpiralPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector3>* (*)(int32_t, float_t)>(&::Pathfinding::PathUtilities::GetSpiralPoints)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x5eb8bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities*>(),
                        {"GetSpiralPoints", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathUtilities.InvoluteOfCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t)>(&::Pathfinding::PathUtilities::InvoluteOfCircle)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5eb8ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities*>(),
                        {"InvoluteOfCircle", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathUtilities.GetPointsAroundPointWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::Pathfinding::IRaycastableGraph*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, float_t, float_t)>(&::Pathfinding::PathUtilities::GetPointsAroundPointWorld)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5eb8f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities*>(),
                        {"GetPointsAroundPointWorld", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::IRaycastableGraph*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathUtilities.GetPointsAroundPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::Pathfinding::IRaycastableGraph*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, float_t, float_t)>(&::Pathfinding::PathUtilities::GetPointsAroundPoint)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x5eb90d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities*>(),
                        {"GetPointsAroundPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::IRaycastableGraph*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathUtilities.GetPointsOnNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector3>* (*)(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*, int32_t, float_t)>(&::Pathfinding::PathUtilities::GetPointsOnNodes)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x5eb9648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities*>(),
                        {"GetPointsOnNodes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::PathUtilities::setStaticF_BFSQueue(::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>*, "BFSQueue", ::Pathfinding::PathUtilities*>(std::forward<::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>* Pathfinding::PathUtilities::getStaticF_BFSQueue()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>*, "BFSQueue", ::Pathfinding::PathUtilities*>();
}
inline void Pathfinding::PathUtilities::setStaticF_BFSMap(::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,int32_t>*, "BFSMap", ::Pathfinding::PathUtilities*>(std::forward<::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,int32_t>* Pathfinding::PathUtilities::getStaticF_BFSMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,int32_t>*, "BFSMap", ::Pathfinding::PathUtilities*>();
}
inline bool Pathfinding::PathUtilities::IsPathPossible(::Pathfinding::GraphNode*  node1, ::Pathfinding::GraphNode*  node2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities*>(),
                        {"IsPathPossible", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node1, node2);
}
inline bool Pathfinding::PathUtilities::IsPathPossible(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities*>(),
                        {"IsPathPossible", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nodes);
}
inline bool Pathfinding::PathUtilities::IsPathPossible(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodes, int32_t  tagMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities*>(),
                        {"IsPathPossible", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nodes, tagMask);
}
inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* Pathfinding::PathUtilities::GetReachableNodes(::Pathfinding::GraphNode*  seed, int32_t  tagMask, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities*>(),
                        {"GetReachableNodes", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(nullptr, ___internal_method, seed, tagMask, filter);
}
inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* Pathfinding::PathUtilities::BFS(::Pathfinding::GraphNode*  seed, int32_t  depth, int32_t  tagMask, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities*>(),
                        {"BFS", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(nullptr, ___internal_method, seed, depth, tagMask, filter);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Pathfinding::PathUtilities::GetSpiralPoints(int32_t  count, float_t  clearance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities*>(),
                        {"GetSpiralPoints", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(nullptr, ___internal_method, count, clearance);
}
inline ::UnityEngine::Vector3 Pathfinding::PathUtilities::InvoluteOfCircle(float_t  a, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities*>(),
                        {"InvoluteOfCircle", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, a, t);
}
inline void Pathfinding::PathUtilities::GetPointsAroundPointWorld(::UnityEngine::Vector3  p, ::Pathfinding::IRaycastableGraph*  g, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  previousPoints, float_t  radius, float_t  clearanceRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities*>(),
                        {"GetPointsAroundPointWorld", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::IRaycastableGraph*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, g, previousPoints, radius, clearanceRadius);
}
inline void Pathfinding::PathUtilities::GetPointsAroundPoint(::UnityEngine::Vector3  center, ::Pathfinding::IRaycastableGraph*  g, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  previousPoints, float_t  radius, float_t  clearanceRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities*>(),
                        {"GetPointsAroundPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::IRaycastableGraph*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, g, previousPoints, radius, clearanceRadius);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Pathfinding::PathUtilities::GetPointsOnNodes(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodes, int32_t  count, float_t  clearanceRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities*>(),
                        {"GetPointsOnNodes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(nullptr, ___internal_method, nodes, count, clearanceRadius);
}
// Ctor Parameters []
constexpr ::Pathfinding::PathUtilities::PathUtilities()   {
}
//  Writing Method size for method: ::Pathfinding::PathUtilities___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathUtilities___c__DisplayClass6_0::*)()>(&::Pathfinding::PathUtilities___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eb8bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathUtilities___c__DisplayClass6_0._BFS_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathUtilities___c__DisplayClass6_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::PathUtilities___c__DisplayClass6_0::_BFS_b__0)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5eb9ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities___c__DisplayClass6_0*>(),
                        {"<BFS>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathUtilities___c__DisplayClass6_0._BFS_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathUtilities___c__DisplayClass6_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::PathUtilities___c__DisplayClass6_0::_BFS_b__1)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5eba00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities___c__DisplayClass6_0*>(),
                        {"<BFS>b__1", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,int32_t>*& Pathfinding::PathUtilities___c__DisplayClass6_0::__cordl_internal_get_map()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___map;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,int32_t>* const& Pathfinding::PathUtilities___c__DisplayClass6_0::__cordl_internal_get_map() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___map;
}
constexpr void Pathfinding::PathUtilities___c__DisplayClass6_0::__cordl_internal_set_map(::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___map = value;
}
constexpr ::System::Func_2<::Pathfinding::GraphNode*,bool>*& Pathfinding::PathUtilities___c__DisplayClass6_0::__cordl_internal_get_filter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter;
}
constexpr ::System::Func_2<::Pathfinding::GraphNode*,bool>* const& Pathfinding::PathUtilities___c__DisplayClass6_0::__cordl_internal_get_filter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter;
}
constexpr void Pathfinding::PathUtilities___c__DisplayClass6_0::__cordl_internal_set_filter(::System::Func_2<::Pathfinding::GraphNode*,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filter = value;
}
constexpr int32_t& Pathfinding::PathUtilities___c__DisplayClass6_0::__cordl_internal_get_currentDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDist;
}
constexpr int32_t const& Pathfinding::PathUtilities___c__DisplayClass6_0::__cordl_internal_get_currentDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDist;
}
constexpr void Pathfinding::PathUtilities___c__DisplayClass6_0::__cordl_internal_set_currentDist(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentDist = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& Pathfinding::PathUtilities___c__DisplayClass6_0::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& Pathfinding::PathUtilities___c__DisplayClass6_0::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void Pathfinding::PathUtilities___c__DisplayClass6_0::__cordl_internal_set_result(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>*& Pathfinding::PathUtilities___c__DisplayClass6_0::__cordl_internal_get_que()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___que;
}
constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>* const& Pathfinding::PathUtilities___c__DisplayClass6_0::__cordl_internal_get_que() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___que;
}
constexpr void Pathfinding::PathUtilities___c__DisplayClass6_0::__cordl_internal_set_que(::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___que = value;
}
constexpr int32_t& Pathfinding::PathUtilities___c__DisplayClass6_0::__cordl_internal_get_tagMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagMask;
}
constexpr int32_t const& Pathfinding::PathUtilities___c__DisplayClass6_0::__cordl_internal_get_tagMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagMask;
}
constexpr void Pathfinding::PathUtilities___c__DisplayClass6_0::__cordl_internal_set_tagMask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagMask = value;
}
inline void Pathfinding::PathUtilities___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::PathUtilities___c__DisplayClass6_0::_BFS_b__0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities___c__DisplayClass6_0*>(),
                        {"<BFS>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::PathUtilities___c__DisplayClass6_0::_BFS_b__1(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities___c__DisplayClass6_0*>(),
                        {"<BFS>b__1", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::PathUtilities___c__DisplayClass6_0* Pathfinding::PathUtilities___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::PathUtilities___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::PathUtilities___c__DisplayClass6_0::PathUtilities___c__DisplayClass6_0()   {
}
//  Writing Method size for method: ::Pathfinding::PathUtilities___c__DisplayClass3_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathUtilities___c__DisplayClass3_0::*)()>(&::Pathfinding::PathUtilities___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eb8828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathUtilities___c__DisplayClass3_0._GetReachableNodes_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathUtilities___c__DisplayClass3_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::PathUtilities___c__DisplayClass3_0::_GetReachableNodes_b__0)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5eb9c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities___c__DisplayClass3_0*>(),
                        {"<GetReachableNodes>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathUtilities___c__DisplayClass3_0._GetReachableNodes_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathUtilities___c__DisplayClass3_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::PathUtilities___c__DisplayClass3_0::_GetReachableNodes_b__1)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5eb9d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities___c__DisplayClass3_0*>(),
                        {"<GetReachableNodes>b__1", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::Pathfinding::GraphNode*>*& Pathfinding::PathUtilities___c__DisplayClass3_0::__cordl_internal_get_map()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___map;
}
constexpr ::System::Collections::Generic::HashSet_1<::Pathfinding::GraphNode*>* const& Pathfinding::PathUtilities___c__DisplayClass3_0::__cordl_internal_get_map() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___map;
}
constexpr void Pathfinding::PathUtilities___c__DisplayClass3_0::__cordl_internal_set_map(::System::Collections::Generic::HashSet_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___map = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& Pathfinding::PathUtilities___c__DisplayClass3_0::__cordl_internal_get_reachable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachable;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& Pathfinding::PathUtilities___c__DisplayClass3_0::__cordl_internal_get_reachable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachable;
}
constexpr void Pathfinding::PathUtilities___c__DisplayClass3_0::__cordl_internal_set_reachable(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reachable = value;
}
constexpr ::System::Collections::Generic::Stack_1<::Pathfinding::GraphNode*>*& Pathfinding::PathUtilities___c__DisplayClass3_0::__cordl_internal_get_dfsStack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dfsStack;
}
constexpr ::System::Collections::Generic::Stack_1<::Pathfinding::GraphNode*>* const& Pathfinding::PathUtilities___c__DisplayClass3_0::__cordl_internal_get_dfsStack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dfsStack;
}
constexpr void Pathfinding::PathUtilities___c__DisplayClass3_0::__cordl_internal_set_dfsStack(::System::Collections::Generic::Stack_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dfsStack = value;
}
constexpr int32_t& Pathfinding::PathUtilities___c__DisplayClass3_0::__cordl_internal_get_tagMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagMask;
}
constexpr int32_t const& Pathfinding::PathUtilities___c__DisplayClass3_0::__cordl_internal_get_tagMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagMask;
}
constexpr void Pathfinding::PathUtilities___c__DisplayClass3_0::__cordl_internal_set_tagMask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagMask = value;
}
constexpr ::System::Func_2<::Pathfinding::GraphNode*,bool>*& Pathfinding::PathUtilities___c__DisplayClass3_0::__cordl_internal_get_filter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter;
}
constexpr ::System::Func_2<::Pathfinding::GraphNode*,bool>* const& Pathfinding::PathUtilities___c__DisplayClass3_0::__cordl_internal_get_filter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter;
}
constexpr void Pathfinding::PathUtilities___c__DisplayClass3_0::__cordl_internal_set_filter(::System::Func_2<::Pathfinding::GraphNode*,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filter = value;
}
inline void Pathfinding::PathUtilities___c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::PathUtilities___c__DisplayClass3_0::_GetReachableNodes_b__0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities___c__DisplayClass3_0*>(),
                        {"<GetReachableNodes>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::PathUtilities___c__DisplayClass3_0::_GetReachableNodes_b__1(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathUtilities___c__DisplayClass3_0*>(),
                        {"<GetReachableNodes>b__1", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::PathUtilities___c__DisplayClass3_0* Pathfinding::PathUtilities___c__DisplayClass3_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::PathUtilities___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::PathUtilities___c__DisplayClass3_0::PathUtilities___c__DisplayClass3_0()   {
}
