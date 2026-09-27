#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/KnownErrorCode.hpp"
#include "Meta/Voice/Logging/zzzz__KnownErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::Logging::KnownErrorCode::KnownErrorCode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::KnownErrorCode::KnownErrorCode()   {
}
constexpr ::Meta::Voice::Logging::KnownErrorCode  Meta::Voice::Logging::KnownErrorCode::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Meta::Voice::Logging::KnownErrorCode  Meta::Voice::Logging::KnownErrorCode::Logging{static_cast<int32_t>(0x1)};
constexpr ::Meta::Voice::Logging::KnownErrorCode  Meta::Voice::Logging::KnownErrorCode::AssemblyMinerNullEnum{static_cast<int32_t>(0x2)};
constexpr ::Meta::Voice::Logging::KnownErrorCode  Meta::Voice::Logging::KnownErrorCode::KnownErrorMissingDescription{static_cast<int32_t>(0x3)};
constexpr ::Meta::Voice::Logging::KnownErrorCode  Meta::Voice::Logging::KnownErrorCode::NullMethodInAssembly{static_cast<int32_t>(0x4)};
constexpr ::Meta::Voice::Logging::KnownErrorCode  Meta::Voice::Logging::KnownErrorCode::NullDeclaringTypeInAssembly{static_cast<int32_t>(0x5)};
constexpr ::Meta::Voice::Logging::KnownErrorCode  Meta::Voice::Logging::KnownErrorCode::InvalidErrorHandlerParameter{static_cast<int32_t>(0x6)};
constexpr ::Meta::Voice::Logging::KnownErrorCode  Meta::Voice::Logging::KnownErrorCode::TtsStreamError{static_cast<int32_t>(0x7)};
