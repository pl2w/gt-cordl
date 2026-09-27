#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectConnectionDataStatus.hpp"
#include "Fusion/zzzz__NetworkObjectConnectionDataStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkObjectConnectionDataStatus::NetworkObjectConnectionDataStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectConnectionDataStatus::NetworkObjectConnectionDataStatus()   {
}
constexpr ::Fusion::NetworkObjectConnectionDataStatus  Fusion::NetworkObjectConnectionDataStatus::CreatedUnconfirmed{static_cast<int32_t>(0x0)};
constexpr ::Fusion::NetworkObjectConnectionDataStatus  Fusion::NetworkObjectConnectionDataStatus::CreatedConfirmed{static_cast<int32_t>(0x1)};
constexpr ::Fusion::NetworkObjectConnectionDataStatus  Fusion::NetworkObjectConnectionDataStatus::DestroyUnconfirmed{static_cast<int32_t>(0x2)};
constexpr ::Fusion::NetworkObjectConnectionDataStatus  Fusion::NetworkObjectConnectionDataStatus::DestroyPending{static_cast<int32_t>(0x3)};
