#pragma once
// IWYU pragma private; include "Fusion/Protocol/JoinRequests.hpp"
#include "Fusion/Protocol/zzzz__JoinRequests_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Protocol::JoinRequests::JoinRequests(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::JoinRequests::JoinRequests()   {
}
constexpr ::Fusion::Protocol::JoinRequests  Fusion::Protocol::JoinRequests::None{static_cast<uint32_t>(0x0u)};
constexpr ::Fusion::Protocol::JoinRequests  Fusion::Protocol::JoinRequests::NetworkConfig{static_cast<uint32_t>(0x2u)};
constexpr ::Fusion::Protocol::JoinRequests  Fusion::Protocol::JoinRequests::ReflexiveInfo{static_cast<uint32_t>(0x4u)};
constexpr ::Fusion::Protocol::JoinRequests  Fusion::Protocol::JoinRequests::DisableNATPunch{static_cast<uint32_t>(0x8u)};
