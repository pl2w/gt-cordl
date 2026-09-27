#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomSystem_PlayerEffectConfig.hpp"
#include "GlobalNamespace/zzzz__PlayerEffect_impl.hpp"
#include "GlobalNamespace/zzzz__RoomSystem_PlayerEffectConfig_def.hpp"
#include "TagEffects/zzzz__TagEffectPack_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::PlayerEffect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tagEffectPack", ty: "::UnityW<::TagEffects::TagEffectPack>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RoomSystem_PlayerEffectConfig::RoomSystem_PlayerEffectConfig(::GlobalNamespace::PlayerEffect  type, ::UnityW<::TagEffects::TagEffectPack>  tagEffectPack) noexcept  {
this->type = type;
this->tagEffectPack = tagEffectPack;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomSystem_PlayerEffectConfig::RoomSystem_PlayerEffectConfig()   {
}
