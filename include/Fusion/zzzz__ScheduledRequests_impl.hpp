#pragma once
// IWYU pragma private; include "Fusion/ScheduledRequests.hpp"
#include "Fusion/zzzz__ScheduledRequests_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::ScheduledRequests::ScheduledRequests(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::ScheduledRequests::ScheduledRequests()   {
}
constexpr ::Fusion::ScheduledRequests  Fusion::ScheduledRequests::None{static_cast<uint32_t>(0x0u)};
constexpr ::Fusion::ScheduledRequests  Fusion::ScheduledRequests::ReflexiveInfo{static_cast<uint32_t>(0x2u)};
