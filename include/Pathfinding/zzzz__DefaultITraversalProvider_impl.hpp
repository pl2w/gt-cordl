#pragma once
// IWYU pragma private; include "Pathfinding/DefaultITraversalProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__DefaultITraversalProvider_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
//  Writing Method size for method: ::Pathfinding::DefaultITraversalProvider.CanTraverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Path*, ::Pathfinding::GraphNode*)>(&::Pathfinding::DefaultITraversalProvider::CanTraverse)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e68cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::DefaultITraversalProvider*>(),
                        {"CanTraverse", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::DefaultITraversalProvider.GetTraversalCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Pathfinding::Path*, ::Pathfinding::GraphNode*)>(&::Pathfinding::DefaultITraversalProvider::GetTraversalCost)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e68d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::DefaultITraversalProvider*>(),
                        {"GetTraversalCost", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Pathfinding::DefaultITraversalProvider::CanTraverse(::Pathfinding::Path*  path, ::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::DefaultITraversalProvider*>(),
                        {"CanTraverse", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path, node);
}
inline uint32_t Pathfinding::DefaultITraversalProvider::GetTraversalCost(::Pathfinding::Path*  path, ::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::DefaultITraversalProvider*>(),
                        {"GetTraversalCost", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, path, node);
}
// Ctor Parameters []
constexpr ::Pathfinding::DefaultITraversalProvider::DefaultITraversalProvider()   {
}
