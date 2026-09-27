#pragma once
// IWYU pragma private; include "GorillaNetworking/ScheduledEvents/ScheduledEventPhase.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventPhase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase::ScheduledEventPhase(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase::ScheduledEventPhase()   {
}
constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  GorillaNetworking::ScheduledEvents::ScheduledEventPhase::Before{static_cast<int32_t>(0x0)};
constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  GorillaNetworking::ScheduledEvents::ScheduledEventPhase::During{static_cast<int32_t>(0x1)};
constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  GorillaNetworking::ScheduledEvents::ScheduledEventPhase::After{static_cast<int32_t>(0x2)};
constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  GorillaNetworking::ScheduledEvents::ScheduledEventPhase::NoEvent{static_cast<int32_t>(0x3)};
constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  GorillaNetworking::ScheduledEvents::ScheduledEventPhase::None{static_cast<int32_t>(0x4)};
