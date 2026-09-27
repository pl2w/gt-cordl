#pragma once
// IWYU pragma private; include "Modio/Errors/TempModsErrorCode.hpp"
#include "Modio/Errors/zzzz__TempModsErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Errors::TempModsErrorCode::TempModsErrorCode(int64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Errors::TempModsErrorCode::TempModsErrorCode()   {
}
constexpr ::Modio::Errors::TempModsErrorCode  Modio::Errors::TempModsErrorCode::NONE{static_cast<int64_t>(0x0)};
constexpr ::Modio::Errors::TempModsErrorCode  Modio::Errors::TempModsErrorCode::UNKNOWN{static_cast<int64_t>(0xffffffff80000000)};
constexpr ::Modio::Errors::TempModsErrorCode  Modio::Errors::TempModsErrorCode::CANT_INSTALL_TAINTED_MOD{static_cast<int64_t>(0xffffffff80000062)};
