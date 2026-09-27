#pragma once
// IWYU pragma private; include "GlobalNamespace/SIUpgradeBasedGeneric_1.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeBasedGenericEntry_1_impl.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeBasedGeneric_1_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeBasedGenericEntry_1_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
template<typename T>
inline bool GlobalNamespace::SIUpgradeBasedGeneric_1<T>::TryGetActiveValue(::GlobalNamespace::SIUpgradeSet  withUpgrades, ::by_ref<T>  out_value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeBasedGeneric_1<T>>(),
                        {"TryGetActiveValue", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeSet>(), ::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, withUpgrades, out_value);
}
// Ctor Parameters [CppParam { name: "entries", ty: "::ArrayW<::GlobalNamespace::SIUpgradeBasedGenericEntry_1<T>>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::SIUpgradeBasedGeneric_1<T>::SIUpgradeBasedGeneric_1(::ArrayW<::GlobalNamespace::SIUpgradeBasedGenericEntry_1<T>>  entries) noexcept  {
this->entries = entries;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::SIUpgradeBasedGeneric_1<T>::SIUpgradeBasedGeneric_1()   {
}
