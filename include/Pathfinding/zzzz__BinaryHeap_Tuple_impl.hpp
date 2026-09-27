#pragma once
// IWYU pragma private; include "Pathfinding/BinaryHeap_Tuple.hpp"
#include "Pathfinding/zzzz__BinaryHeap_Tuple_def.hpp"
#include "Pathfinding/zzzz__PathNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BinaryHeap_Tuple._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BinaryHeap_Tuple::*)(uint32_t, ::Pathfinding::PathNode*)>(&::GlobalNamespace::BinaryHeap_Tuple::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e574a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BinaryHeap_Tuple>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::Pathfinding::PathNode*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BinaryHeap_Tuple::_ctor(uint32_t  f, ::Pathfinding::PathNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BinaryHeap_Tuple>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::Pathfinding::PathNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, f, node);
}
// Ctor Parameters [CppParam { name: "node", ty: "::Pathfinding::PathNode*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "F", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BinaryHeap_Tuple::BinaryHeap_Tuple(::Pathfinding::PathNode*  node, uint32_t  F) noexcept  {
this->node = node;
this->F = F;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BinaryHeap_Tuple::BinaryHeap_Tuple()   {
}
