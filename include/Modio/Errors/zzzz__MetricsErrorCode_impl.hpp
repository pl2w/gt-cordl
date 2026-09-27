#pragma once
// IWYU pragma private; include "Modio/Errors/MetricsErrorCode.hpp"
#include "Modio/Errors/zzzz__MetricsErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Errors::MetricsErrorCode::MetricsErrorCode(int64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Errors::MetricsErrorCode::MetricsErrorCode()   {
}
constexpr ::Modio::Errors::MetricsErrorCode  Modio::Errors::MetricsErrorCode::NONE{static_cast<int64_t>(0x0)};
constexpr ::Modio::Errors::MetricsErrorCode  Modio::Errors::MetricsErrorCode::UNKNOWN{static_cast<int64_t>(0xffffffff80000000)};
constexpr ::Modio::Errors::MetricsErrorCode  Modio::Errors::MetricsErrorCode::INVALID_METRICS_SECRET{static_cast<int64_t>(0xffffffff80000061)};
