#pragma once
// IWYU pragma private; include "Pathfinding/ITransformedGraph.hpp"
#include "Pathfinding/zzzz__ITransformedGraph_def.hpp"
#include "Pathfinding/Util/zzzz__GraphTransform_def.hpp"
//  Writing Method size for method: ::Pathfinding::ITransformedGraph.get_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Util::GraphTransform* (::Pathfinding::ITransformedGraph::*)()>(&::Pathfinding::ITransformedGraph::get_transform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::ITransformedGraph*>(),
                    {::i2c::class_of<::Pathfinding::ITransformedGraph*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Pathfinding::Util::GraphTransform* Pathfinding::ITransformedGraph::get_transform()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::ITransformedGraph*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Util::GraphTransform*>(this, ___internal_method);
}
