#pragma once
// IWYU pragma private; include "Pathfinding/IRaycastableGraph.hpp"
#include "Pathfinding/zzzz__IRaycastableGraph_def.hpp"
#include "Pathfinding/zzzz__GraphHitInfo_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::IRaycastableGraph.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::IRaycastableGraph::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::IRaycastableGraph::Linecast)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::IRaycastableGraph*>(),
                    {::i2c::class_of<::Pathfinding::IRaycastableGraph*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IRaycastableGraph.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::IRaycastableGraph::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Pathfinding::GraphNode*)>(&::Pathfinding::IRaycastableGraph::Linecast)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::IRaycastableGraph*>(),
                    {::i2c::class_of<::Pathfinding::IRaycastableGraph*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IRaycastableGraph.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::IRaycastableGraph::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Pathfinding::GraphNode*, ::by_ref<::Pathfinding::GraphHitInfo>)>(&::Pathfinding::IRaycastableGraph::Linecast)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::IRaycastableGraph*>(),
                    {::i2c::class_of<::Pathfinding::IRaycastableGraph*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IRaycastableGraph.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::IRaycastableGraph::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Pathfinding::GraphNode*, ::by_ref<::Pathfinding::GraphHitInfo>, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::IRaycastableGraph::Linecast)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::IRaycastableGraph*>(),
                    {::i2c::class_of<::Pathfinding::IRaycastableGraph*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IRaycastableGraph.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::IRaycastableGraph::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::Pathfinding::GraphHitInfo>, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*, ::System::Func_2<::Pathfinding::GraphNode*,bool>*)>(&::Pathfinding::IRaycastableGraph::Linecast)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::IRaycastableGraph*>(),
                    {::i2c::class_of<::Pathfinding::IRaycastableGraph*>(), 4}
                ));
    return ___internal_method;
  }
};
inline bool Pathfinding::IRaycastableGraph::Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::IRaycastableGraph*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, start, end);
}
inline bool Pathfinding::IRaycastableGraph::Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::Pathfinding::GraphNode*  hint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::IRaycastableGraph*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, start, end, hint);
}
inline bool Pathfinding::IRaycastableGraph::Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::Pathfinding::GraphNode*  hint, ::by_ref<::Pathfinding::GraphHitInfo>  hit)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::IRaycastableGraph*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, start, end, hint, hit);
}
inline bool Pathfinding::IRaycastableGraph::Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::Pathfinding::GraphNode*  hint, ::by_ref<::Pathfinding::GraphHitInfo>  hit, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  trace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::IRaycastableGraph*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, start, end, hint, hit, trace);
}
inline bool Pathfinding::IRaycastableGraph::Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::by_ref<::Pathfinding::GraphHitInfo>  hit, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  trace, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::IRaycastableGraph*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, start, end, hit, trace, filter);
}
