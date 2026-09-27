#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotProjectileAOE.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_impl.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectileAOE_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectileAOE._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectileAOE::*)()>(&::GlobalNamespace::SlingshotProjectileAOE::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x573bf14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileAOE*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SlingshotProjectileAOE::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileAOE*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SlingshotProjectileAOE* GlobalNamespace::SlingshotProjectileAOE::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SlingshotProjectileAOE*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SlingshotProjectileAOE::SlingshotProjectileAOE()   {
}
