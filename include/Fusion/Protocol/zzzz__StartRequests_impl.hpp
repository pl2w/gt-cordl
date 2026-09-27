#pragma once
// IWYU pragma private; include "Fusion/Protocol/StartRequests.hpp"
#include "Fusion/Protocol/zzzz__StartRequests_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Protocol::StartRequests::StartRequests(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::StartRequests::StartRequests()   {
}
constexpr ::Fusion::Protocol::StartRequests  Fusion::Protocol::StartRequests::None{static_cast<uint32_t>(0x0u)};
constexpr ::Fusion::Protocol::StartRequests  Fusion::Protocol::StartRequests::ConnectToShared{static_cast<uint32_t>(0x2u)};
constexpr ::Fusion::Protocol::StartRequests  Fusion::Protocol::StartRequests::WaitForReflexiveInfo{static_cast<uint32_t>(0x4u)};
