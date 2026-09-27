#pragma once
// IWYU pragma private; include "Pathfinding/IWorkItemContext.hpp"
#include "Pathfinding/zzzz__IWorkItemContext_def.hpp"
#include "Pathfinding/zzzz__NavGraph_def.hpp"
//  Writing Method size for method: ::Pathfinding::IWorkItemContext.QueueFloodFill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::IWorkItemContext::*)()>(&::Pathfinding::IWorkItemContext::QueueFloodFill)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::IWorkItemContext*>(),
                    {::i2c::class_of<::Pathfinding::IWorkItemContext*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IWorkItemContext.EnsureValidFloodFill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::IWorkItemContext::*)()>(&::Pathfinding::IWorkItemContext::EnsureValidFloodFill)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::IWorkItemContext*>(),
                    {::i2c::class_of<::Pathfinding::IWorkItemContext*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IWorkItemContext.SetGraphDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::IWorkItemContext::*)(::Pathfinding::NavGraph*)>(&::Pathfinding::IWorkItemContext::SetGraphDirty)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::IWorkItemContext*>(),
                    {::i2c::class_of<::Pathfinding::IWorkItemContext*>(), 2}
                ));
    return ___internal_method;
  }
};
inline void Pathfinding::IWorkItemContext::QueueFloodFill()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::IWorkItemContext*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::IWorkItemContext::EnsureValidFloodFill()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::IWorkItemContext*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::IWorkItemContext::SetGraphDirty(::Pathfinding::NavGraph*  graph)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::IWorkItemContext*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph);
}
