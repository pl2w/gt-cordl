#pragma once
// IWYU pragma private; include "System/Net/FtpControlStream_GetPathOption.hpp"
#include "System/Net/zzzz__FtpControlStream_GetPathOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FtpControlStream_GetPathOption::FtpControlStream_GetPathOption(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FtpControlStream_GetPathOption::FtpControlStream_GetPathOption()   {
}
constexpr ::GlobalNamespace::FtpControlStream_GetPathOption  GlobalNamespace::FtpControlStream_GetPathOption::Normal{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::FtpControlStream_GetPathOption  GlobalNamespace::FtpControlStream_GetPathOption::AssumeFilename{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::FtpControlStream_GetPathOption  GlobalNamespace::FtpControlStream_GetPathOption::AssumeNoFilename{static_cast<int32_t>(0x2)};
