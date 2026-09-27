#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/FingerFlexEvent_EventType.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent_EventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FingerFlexEvent_EventType::FingerFlexEvent_EventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FingerFlexEvent_EventType::FingerFlexEvent_EventType()   {
}
constexpr ::GlobalNamespace::FingerFlexEvent_EventType  GlobalNamespace::FingerFlexEvent_EventType::OnFingerFlexed{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::FingerFlexEvent_EventType  GlobalNamespace::FingerFlexEvent_EventType::OnFingerReleased{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::FingerFlexEvent_EventType  GlobalNamespace::FingerFlexEvent_EventType::OnFingerFlexStayed{static_cast<int32_t>(0x2)};
