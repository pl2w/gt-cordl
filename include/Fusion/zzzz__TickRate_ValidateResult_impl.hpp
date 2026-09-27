#pragma once
// IWYU pragma private; include "Fusion/TickRate_ValidateResult.hpp"
#include "Fusion/zzzz__TickRate_ValidateResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TickRate_ValidateResult::TickRate_ValidateResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TickRate_ValidateResult::TickRate_ValidateResult()   {
}
constexpr ::GlobalNamespace::TickRate_ValidateResult  GlobalNamespace::TickRate_ValidateResult::Ok{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TickRate_ValidateResult  GlobalNamespace::TickRate_ValidateResult::Error{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TickRate_ValidateResult  GlobalNamespace::TickRate_ValidateResult::NotFound{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::TickRate_ValidateResult  GlobalNamespace::TickRate_ValidateResult::InvalidTickRate{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::TickRate_ValidateResult  GlobalNamespace::TickRate_ValidateResult::ServerIndexOutOfRange{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::TickRate_ValidateResult  GlobalNamespace::TickRate_ValidateResult::ClientSendIndexOutOfRange{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::TickRate_ValidateResult  GlobalNamespace::TickRate_ValidateResult::ServerSendIndexOutOfRange{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::TickRate_ValidateResult  GlobalNamespace::TickRate_ValidateResult::ServerSendRateLargerThanTickRate{static_cast<int32_t>(0x7)};
