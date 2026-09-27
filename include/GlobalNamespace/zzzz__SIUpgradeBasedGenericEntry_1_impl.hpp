#pragma once
// IWYU pragma private; include "GlobalNamespace/SIUpgradeBasedGenericEntry_1.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_impl.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeBasedGenericEntry_1_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
template<typename T>
inline bool GlobalNamespace::SIUpgradeBasedGenericEntry_1<T>::IsActive(::GlobalNamespace::SIUpgradeSet  withUpgrades)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeBasedGenericEntry_1<T>>(),
                        {"IsActive", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, withUpgrades);
}
// Ctor Parameters [CppParam { name: "value", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "activeRequirements", ty: "::ArrayW<::GlobalNamespace::SIUpgradeType>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inactiveRequirements", ty: "::ArrayW<::GlobalNamespace::SIUpgradeType>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::SIUpgradeBasedGenericEntry_1<T>::SIUpgradeBasedGenericEntry_1(T  value, ::ArrayW<::GlobalNamespace::SIUpgradeType>  activeRequirements, ::ArrayW<::GlobalNamespace::SIUpgradeType>  inactiveRequirements) noexcept  {
this->value = value;
this->activeRequirements = activeRequirements;
this->inactiveRequirements = inactiveRequirements;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::SIUpgradeBasedGenericEntry_1<T>::SIUpgradeBasedGenericEntry_1()   {
}
