#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHandLeft.hpp"
#include "GlobalNamespace/zzzz__GorillaHandNode_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaHandLeft_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaHandLeft._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHandLeft::*)()>(&::GlobalNamespace::GorillaHandLeft::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590d420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandLeft*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaHandLeft::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandLeft*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaHandLeft* GlobalNamespace::GorillaHandLeft::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaHandLeft*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaHandLeft::GorillaHandLeft()   {
}
