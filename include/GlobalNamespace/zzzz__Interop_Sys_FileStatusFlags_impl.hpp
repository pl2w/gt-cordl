#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop_Sys_FileStatusFlags.hpp"
#include "GlobalNamespace/zzzz__Interop_Sys_FileStatusFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Sys_Interop_FileStatusFlags::Sys_Interop_FileStatusFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Sys_Interop_FileStatusFlags::Sys_Interop_FileStatusFlags()   {
}
constexpr ::GlobalNamespace::Sys_Interop_FileStatusFlags  GlobalNamespace::Sys_Interop_FileStatusFlags::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Sys_Interop_FileStatusFlags  GlobalNamespace::Sys_Interop_FileStatusFlags::HasBirthTime{static_cast<int32_t>(0x1)};
