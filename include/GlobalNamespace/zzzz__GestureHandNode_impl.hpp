#pragma once
// IWYU pragma private; include "GlobalNamespace/GestureHandNode.hpp"
#include "GlobalNamespace/zzzz__GestureNode_impl.hpp"
#include "GlobalNamespace/zzzz__GestureHandNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GestureHandNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GestureHandNode::*)()>(&::GlobalNamespace::GestureHandNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564ec90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GestureHandNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GestureHandNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GestureHandNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GestureHandNode* GlobalNamespace::GestureHandNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GestureHandNode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GestureHandNode::GestureHandNode()   {
}
