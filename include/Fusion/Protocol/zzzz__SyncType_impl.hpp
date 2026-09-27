#pragma once
// IWYU pragma private; include "Fusion/Protocol/SyncType.hpp"
#include "Fusion/Protocol/zzzz__SyncType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Protocol::SyncType::SyncType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::SyncType::SyncType()   {
}
constexpr ::Fusion::Protocol::SyncType  Fusion::Protocol::SyncType::Request{static_cast<uint8_t>(0x1u)};
constexpr ::Fusion::Protocol::SyncType  Fusion::Protocol::SyncType::Response{static_cast<uint8_t>(0x2u)};
constexpr ::Fusion::Protocol::SyncType  Fusion::Protocol::SyncType::Override{static_cast<uint8_t>(0x3u)};
