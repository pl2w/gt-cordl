#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagger_StiltTagData.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTagger_StiltTagData_def.hpp"
// Ctor Parameters [CppParam { name: "isLeftHand", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasCurrentPosition", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasLastPosition", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currentPositionForTag", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastPositionForTag", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "wasTouching", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastTap", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastUpTap", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "canTag", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "canStun", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaTagger_StiltTagData::GorillaTagger_StiltTagData(bool  isLeftHand, bool  hasCurrentPosition, bool  hasLastPosition, ::UnityEngine::Vector3  currentPositionForTag, ::UnityEngine::Vector3  lastPositionForTag, bool  wasTouching, float_t  lastTap, float_t  lastUpTap, bool  canTag, bool  canStun) noexcept  {
this->isLeftHand = isLeftHand;
this->hasCurrentPosition = hasCurrentPosition;
this->hasLastPosition = hasLastPosition;
this->currentPositionForTag = currentPositionForTag;
this->lastPositionForTag = lastPositionForTag;
this->wasTouching = wasTouching;
this->lastTap = lastTap;
this->lastUpTap = lastUpTap;
this->canTag = canTag;
this->canStun = canStun;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagger_StiltTagData::GorillaTagger_StiltTagData()   {
}
