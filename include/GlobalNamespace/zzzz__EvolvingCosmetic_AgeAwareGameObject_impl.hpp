#pragma once
// IWYU pragma private; include "GlobalNamespace/EvolvingCosmetic_AgeAwareGameObject.hpp"
#include "GlobalNamespace/zzzz__EvolvingCosmetic_AgeAwareGameObject_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "gameObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minActiveDays", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxActiveDays", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requireCurrentSubscription", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EvolvingCosmetic_AgeAwareGameObject::EvolvingCosmetic_AgeAwareGameObject(::UnityW<::UnityEngine::GameObject>  gameObject, int32_t  minActiveDays, int32_t  maxActiveDays, bool  requireCurrentSubscription) noexcept  {
this->gameObject = gameObject;
this->minActiveDays = minActiveDays;
this->maxActiveDays = maxActiveDays;
this->requireCurrentSubscription = requireCurrentSubscription;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EvolvingCosmetic_AgeAwareGameObject::EvolvingCosmetic_AgeAwareGameObject()   {
}
