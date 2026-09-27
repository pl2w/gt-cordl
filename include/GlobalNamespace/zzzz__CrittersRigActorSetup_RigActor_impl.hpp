#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersRigActorSetup_RigActor.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_CrittersActorType_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersRigActorSetup_RigActor_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "location", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "type", ty: "::GlobalNamespace::CrittersActor_CrittersActorType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "subIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "actorSet", ty: "::UnityW<::GlobalNamespace::CrittersActor>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CrittersRigActorSetup_RigActor::CrittersRigActorSetup_RigActor(::UnityW<::UnityEngine::Transform>  location, ::GlobalNamespace::CrittersActor_CrittersActorType  type, int32_t  subIndex, ::UnityW<::GlobalNamespace::CrittersActor>  actorSet) noexcept  {
this->location = location;
this->type = type;
this->subIndex = subIndex;
this->actorSet = actorSet;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersRigActorSetup_RigActor::CrittersRigActorSetup_RigActor()   {
}
