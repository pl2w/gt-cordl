#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHandRight.hpp"
#include "GlobalNamespace/zzzz__GorillaHandNode_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaHandRight_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaHandRight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHandRight::*)()>(&::GlobalNamespace::GorillaHandRight::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590d934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandRight*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaHandRight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandRight*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaHandRight* GlobalNamespace::GorillaHandRight::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaHandRight*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaHandRight::GorillaHandRight()   {
}
