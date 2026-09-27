#pragma once
// IWYU pragma private; include "Pathfinding/IUpdatableGraph.hpp"
#include "Pathfinding/zzzz__IUpdatableGraph_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateObject_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateThreading_def.hpp"
//  Writing Method size for method: ::Pathfinding::IUpdatableGraph.UpdateArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::IUpdatableGraph::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::IUpdatableGraph::UpdateArea)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::IUpdatableGraph*>(),
                    {::i2c::class_of<::Pathfinding::IUpdatableGraph*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IUpdatableGraph.UpdateAreaInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::IUpdatableGraph::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::IUpdatableGraph::UpdateAreaInit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::IUpdatableGraph*>(),
                    {::i2c::class_of<::Pathfinding::IUpdatableGraph*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IUpdatableGraph.UpdateAreaPost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::IUpdatableGraph::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::IUpdatableGraph::UpdateAreaPost)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::IUpdatableGraph*>(),
                    {::i2c::class_of<::Pathfinding::IUpdatableGraph*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IUpdatableGraph.CanUpdateAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphUpdateThreading (::Pathfinding::IUpdatableGraph::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::IUpdatableGraph::CanUpdateAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::IUpdatableGraph*>(),
                    {::i2c::class_of<::Pathfinding::IUpdatableGraph*>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Pathfinding::IUpdatableGraph::UpdateArea(::Pathfinding::GraphUpdateObject*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::IUpdatableGraph*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void Pathfinding::IUpdatableGraph::UpdateAreaInit(::Pathfinding::GraphUpdateObject*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::IUpdatableGraph*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void Pathfinding::IUpdatableGraph::UpdateAreaPost(::Pathfinding::GraphUpdateObject*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::IUpdatableGraph*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Pathfinding::GraphUpdateThreading Pathfinding::IUpdatableGraph::CanUpdateAsync(::Pathfinding::GraphUpdateObject*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::IUpdatableGraph*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphUpdateThreading>(this, ___internal_method, o);
}
