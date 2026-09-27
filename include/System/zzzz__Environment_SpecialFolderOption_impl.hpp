#pragma once
// IWYU pragma private; include "System/Environment_SpecialFolderOption.hpp"
#include "System/zzzz__Environment_SpecialFolderOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Environment_SpecialFolderOption::Environment_SpecialFolderOption(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Environment_SpecialFolderOption::Environment_SpecialFolderOption()   {
}
constexpr ::GlobalNamespace::Environment_SpecialFolderOption  GlobalNamespace::Environment_SpecialFolderOption::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Environment_SpecialFolderOption  GlobalNamespace::Environment_SpecialFolderOption::DoNotVerify{static_cast<int32_t>(0x4000)};
constexpr ::GlobalNamespace::Environment_SpecialFolderOption  GlobalNamespace::Environment_SpecialFolderOption::Create{static_cast<int32_t>(0x8000)};
