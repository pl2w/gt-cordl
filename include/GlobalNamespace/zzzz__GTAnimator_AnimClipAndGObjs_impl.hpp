#pragma once
// IWYU pragma private; include "GlobalNamespace/GTAnimator_AnimClipAndGObjs.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "GlobalNamespace/zzzz__GTAnimator_AnimClipAndGObjs_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "animClip", ty: "::UnityW<::UnityEngine::AnimationClip>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "soundBankToPlayOnStart", ty: "::UnityW<::GlobalNamespace::SoundBankPlayer>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "endStaticGameObjects", ty: "::ArrayW<::UnityW<::UnityEngine::GameObject>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTAnimator_AnimClipAndGObjs::GTAnimator_AnimClipAndGObjs(::UnityW<::UnityEngine::AnimationClip>  animClip, ::UnityW<::GlobalNamespace::SoundBankPlayer>  soundBankToPlayOnStart, ::ArrayW<::UnityW<::UnityEngine::GameObject>>  endStaticGameObjects) noexcept  {
this->animClip = animClip;
this->soundBankToPlayOnStart = soundBankToPlayOnStart;
this->endStaticGameObjects = endStaticGameObjects;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTAnimator_AnimClipAndGObjs::GTAnimator_AnimClipAndGObjs()   {
}
