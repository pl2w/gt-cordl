#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/EnhancedTouch/Touch_ExtraDataPerTouchState.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_ExtraDataPerTouchState_def.hpp"
// Ctor Parameters [CppParam { name: "accumulatedDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uniqueId", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Touch_ExtraDataPerTouchState::Touch_ExtraDataPerTouchState(::UnityEngine::Vector2  accumulatedDelta, uint32_t  uniqueId) noexcept  {
this->accumulatedDelta = accumulatedDelta;
this->uniqueId = uniqueId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Touch_ExtraDataPerTouchState::Touch_ExtraDataPerTouchState()   {
}
