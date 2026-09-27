#pragma once
// IWYU pragma private; include "GlobalNamespace/GameHitFx.hpp"
#include "GlobalNamespace/zzzz__GameHitFx_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
// Ctor Parameters [CppParam { name: "hitSound", ty: "::GlobalNamespace::AbilitySound*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hitEffect", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameHitFx::GameHitFx(::GlobalNamespace::AbilitySound*  hitSound, ::UnityW<::UnityEngine::ParticleSystem>  hitEffect) noexcept  {
this->hitSound = hitSound;
this->hitEffect = hitEffect;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameHitFx::GameHitFx()   {
}
