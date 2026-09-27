#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadget_UpgradeVisual.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadget_UpgradeVisual_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadget_UpgradeVisual.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget_UpgradeVisual::*)(::GlobalNamespace::SIUpgradeSet)>(&::GlobalNamespace::SIGadget_UpgradeVisual::Update)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x58dc6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget_UpgradeVisual>(),
                        {"Update", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeSet>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SIGadget_UpgradeVisual::Update(::GlobalNamespace::SIUpgradeSet  withUpgrades)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget_UpgradeVisual>(),
                        {"Update", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, withUpgrades);
}
// Ctor Parameters [CppParam { name: "objects", ty: "::ArrayW<::UnityW<::UnityEngine::GameObject>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "appearRequirements", ty: "::ArrayW<::GlobalNamespace::SIUpgradeType>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "disappearRequirements", ty: "::ArrayW<::GlobalNamespace::SIUpgradeType>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIGadget_UpgradeVisual::SIGadget_UpgradeVisual(::ArrayW<::UnityW<::UnityEngine::GameObject>>  objects, ::ArrayW<::GlobalNamespace::SIUpgradeType>  appearRequirements, ::ArrayW<::GlobalNamespace::SIUpgradeType>  disappearRequirements) noexcept  {
this->objects = objects;
this->appearRequirements = appearRequirements;
this->disappearRequirements = disappearRequirements;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadget_UpgradeVisual::SIGadget_UpgradeVisual()   {
}
