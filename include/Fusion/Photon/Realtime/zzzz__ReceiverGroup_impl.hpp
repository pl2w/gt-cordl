#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/ReceiverGroup.hpp"
#include "Fusion/Photon/Realtime/zzzz__ReceiverGroup_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Photon::Realtime::ReceiverGroup::ReceiverGroup(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::ReceiverGroup::ReceiverGroup()   {
}
constexpr ::Fusion::Photon::Realtime::ReceiverGroup  Fusion::Photon::Realtime::ReceiverGroup::Others{static_cast<uint8_t>(0x0u)};
constexpr ::Fusion::Photon::Realtime::ReceiverGroup  Fusion::Photon::Realtime::ReceiverGroup::All{static_cast<uint8_t>(0x1u)};
constexpr ::Fusion::Photon::Realtime::ReceiverGroup  Fusion::Photon::Realtime::ReceiverGroup::MasterClient{static_cast<uint8_t>(0x2u)};
