#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousPropertyTimeline_TimelineEvent.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyTimeline_TimelineEvent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent::ContinuousPropertyTimeline_TimelineEvent(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent::ContinuousPropertyTimeline_TimelineEvent()   {
}
constexpr ::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent  GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent::OnReachedEnd{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent  GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent::OnReachedBeginning{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent  GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent::OnEnable{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent  GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent::OnDisable{static_cast<int32_t>(0x8)};
