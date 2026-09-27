#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBossMoonTentacleAttack.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackSimple_impl.hpp"
#include "GlobalNamespace/zzzz__GRBossMoonTentacleAttack_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRBossMoonTentacleAttack._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBossMoonTentacleAttack::*)()>(&::GlobalNamespace::GRBossMoonTentacleAttack::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x586ff10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBossMoonTentacleAttack*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GRBossMoonTentacleAttack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBossMoonTentacleAttack*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRBossMoonTentacleAttack* GlobalNamespace::GRBossMoonTentacleAttack::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRBossMoonTentacleAttack*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack::GRBossMoonTentacleAttack()   {
}
