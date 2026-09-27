#pragma once
// IWYU pragma private; include "Pathfinding/ITraversalProvider.hpp"
#include "Pathfinding/zzzz__ITraversalProvider_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
//  Writing Method size for method: ::Pathfinding::ITraversalProvider.CanTraverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ITraversalProvider::*)(::Pathfinding::Path*, ::Pathfinding::GraphNode*)>(&::Pathfinding::ITraversalProvider::CanTraverse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::ITraversalProvider*>(),
                    {::i2c::class_of<::Pathfinding::ITraversalProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ITraversalProvider.GetTraversalCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::ITraversalProvider::*)(::Pathfinding::Path*, ::Pathfinding::GraphNode*)>(&::Pathfinding::ITraversalProvider::GetTraversalCost)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::ITraversalProvider*>(),
                    {::i2c::class_of<::Pathfinding::ITraversalProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
inline bool Pathfinding::ITraversalProvider::CanTraverse(::Pathfinding::Path*  path, ::Pathfinding::GraphNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::ITraversalProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, path, node);
}
inline uint32_t Pathfinding::ITraversalProvider::GetTraversalCost(::Pathfinding::Path*  path, ::Pathfinding::GraphNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::ITraversalProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, path, node);
}
