#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/TargetPriorityMode.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__TargetPriorityMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode::TargetPriorityMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode::TargetPriorityMode()   {
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode::HighestPriorityOnly{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode::All{static_cast<int32_t>(0x2)};
