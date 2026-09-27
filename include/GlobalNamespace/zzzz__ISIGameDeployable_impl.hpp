#pragma once
// IWYU pragma private; include "GlobalNamespace/ISIGameDeployable.hpp"
#include "GlobalNamespace/zzzz__ISIGameDeployable_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ISIGameDeployable.ApplyUpgrades
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ISIGameDeployable::*)(::GlobalNamespace::SIUpgradeSet)>(&::GlobalNamespace::ISIGameDeployable::ApplyUpgrades)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ISIGameDeployable*>(),
                    {::i2c::class_of<::GlobalNamespace::ISIGameDeployable*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ISIGameDeployable::ApplyUpgrades(::GlobalNamespace::SIUpgradeSet  upgrades)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ISIGameDeployable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, upgrades);
}
