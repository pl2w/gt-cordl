#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventBase_EventPropagation.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_EventPropagation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EventBase_EventPropagation::EventBase_EventPropagation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventBase_EventPropagation::EventBase_EventPropagation()   {
}
constexpr ::GlobalNamespace::EventBase_EventPropagation  GlobalNamespace::EventBase_EventPropagation::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::EventBase_EventPropagation  GlobalNamespace::EventBase_EventPropagation::Bubbles{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::EventBase_EventPropagation  GlobalNamespace::EventBase_EventPropagation::TricklesDown{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::EventBase_EventPropagation  GlobalNamespace::EventBase_EventPropagation::SkipDisabledElements{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::EventBase_EventPropagation  GlobalNamespace::EventBase_EventPropagation::BubblesOrTricklesDown{static_cast<int32_t>(0x3)};
