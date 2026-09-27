#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/EffectType.hpp"
#include "PlayFab/ProfilesModels/zzzz__EffectType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::ProfilesModels::EffectType::EffectType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::EffectType::EffectType()   {
}
constexpr ::PlayFab::ProfilesModels::EffectType  PlayFab::ProfilesModels::EffectType::Allow{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::ProfilesModels::EffectType  PlayFab::ProfilesModels::EffectType::Deny{static_cast<int32_t>(0x1)};
