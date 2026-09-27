#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputRemoting_MessageType.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_MessageType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputRemoting_MessageType::InputRemoting_MessageType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputRemoting_MessageType::InputRemoting_MessageType()   {
}
constexpr ::GlobalNamespace::InputRemoting_MessageType  GlobalNamespace::InputRemoting_MessageType::Connect{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::InputRemoting_MessageType  GlobalNamespace::InputRemoting_MessageType::Disconnect{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::InputRemoting_MessageType  GlobalNamespace::InputRemoting_MessageType::NewLayout{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::InputRemoting_MessageType  GlobalNamespace::InputRemoting_MessageType::NewDevice{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::InputRemoting_MessageType  GlobalNamespace::InputRemoting_MessageType::NewEvents{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::InputRemoting_MessageType  GlobalNamespace::InputRemoting_MessageType::RemoveDevice{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::InputRemoting_MessageType  GlobalNamespace::InputRemoting_MessageType::RemoveLayout{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::InputRemoting_MessageType  GlobalNamespace::InputRemoting_MessageType::ChangeUsages{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::InputRemoting_MessageType  GlobalNamespace::InputRemoting_MessageType::StartSending{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::InputRemoting_MessageType  GlobalNamespace::InputRemoting_MessageType::StopSending{static_cast<int32_t>(0x9)};
