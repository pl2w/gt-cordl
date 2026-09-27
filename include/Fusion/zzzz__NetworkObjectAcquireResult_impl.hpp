#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectAcquireResult.hpp"
#include "Fusion/zzzz__NetworkObjectAcquireResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkObjectAcquireResult::NetworkObjectAcquireResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectAcquireResult::NetworkObjectAcquireResult()   {
}
constexpr ::Fusion::NetworkObjectAcquireResult  Fusion::NetworkObjectAcquireResult::Success{static_cast<int32_t>(0x0)};
constexpr ::Fusion::NetworkObjectAcquireResult  Fusion::NetworkObjectAcquireResult::Failed{static_cast<int32_t>(0x1)};
constexpr ::Fusion::NetworkObjectAcquireResult  Fusion::NetworkObjectAcquireResult::Retry{static_cast<int32_t>(0x2)};
constexpr ::Fusion::NetworkObjectAcquireResult  Fusion::NetworkObjectAcquireResult::Ignore{static_cast<int32_t>(0x3)};
