#pragma once
// IWYU pragma private; include "Cosmetics/GenericNetworkedEventsProvider_EventType.hpp"
#include "Cosmetics/zzzz__GenericNetworkedEventsProvider_EventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GenericNetworkedEventsProvider_EventType::GenericNetworkedEventsProvider_EventType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GenericNetworkedEventsProvider_EventType::GenericNetworkedEventsProvider_EventType()   {
}
constexpr ::GlobalNamespace::GenericNetworkedEventsProvider_EventType  GlobalNamespace::GenericNetworkedEventsProvider_EventType::None{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::GenericNetworkedEventsProvider_EventType  GlobalNamespace::GenericNetworkedEventsProvider_EventType::Int{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::GenericNetworkedEventsProvider_EventType  GlobalNamespace::GenericNetworkedEventsProvider_EventType::Float{static_cast<uint8_t>(0x2u)};
constexpr ::GlobalNamespace::GenericNetworkedEventsProvider_EventType  GlobalNamespace::GenericNetworkedEventsProvider_EventType::Bool{static_cast<uint8_t>(0x3u)};
constexpr ::GlobalNamespace::GenericNetworkedEventsProvider_EventType  GlobalNamespace::GenericNetworkedEventsProvider_EventType::Vector3{static_cast<uint8_t>(0x4u)};
constexpr ::GlobalNamespace::GenericNetworkedEventsProvider_EventType  GlobalNamespace::GenericNetworkedEventsProvider_EventType::String{static_cast<uint8_t>(0x5u)};
constexpr ::GlobalNamespace::GenericNetworkedEventsProvider_EventType  GlobalNamespace::GenericNetworkedEventsProvider_EventType::Long{static_cast<uint8_t>(0x6u)};
constexpr ::GlobalNamespace::GenericNetworkedEventsProvider_EventType  GlobalNamespace::GenericNetworkedEventsProvider_EventType::Quaternion{static_cast<uint8_t>(0x7u)};
