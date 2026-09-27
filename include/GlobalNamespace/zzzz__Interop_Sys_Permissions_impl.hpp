#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop_Sys_Permissions.hpp"
#include "GlobalNamespace/zzzz__Interop_Sys_Permissions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Sys_Interop_Permissions::Sys_Interop_Permissions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Sys_Interop_Permissions::Sys_Interop_Permissions()   {
}
constexpr ::GlobalNamespace::Sys_Interop_Permissions  GlobalNamespace::Sys_Interop_Permissions::Mask{static_cast<int32_t>(0x1ff)};
constexpr ::GlobalNamespace::Sys_Interop_Permissions  GlobalNamespace::Sys_Interop_Permissions::S_IRWXU{static_cast<int32_t>(0x1c0)};
constexpr ::GlobalNamespace::Sys_Interop_Permissions  GlobalNamespace::Sys_Interop_Permissions::S_IRUSR{static_cast<int32_t>(0x100)};
constexpr ::GlobalNamespace::Sys_Interop_Permissions  GlobalNamespace::Sys_Interop_Permissions::S_IWUSR{static_cast<int32_t>(0x80)};
constexpr ::GlobalNamespace::Sys_Interop_Permissions  GlobalNamespace::Sys_Interop_Permissions::S_IXUSR{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::Sys_Interop_Permissions  GlobalNamespace::Sys_Interop_Permissions::S_IRWXG{static_cast<int32_t>(0x38)};
constexpr ::GlobalNamespace::Sys_Interop_Permissions  GlobalNamespace::Sys_Interop_Permissions::S_IRGRP{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::Sys_Interop_Permissions  GlobalNamespace::Sys_Interop_Permissions::S_IWGRP{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::Sys_Interop_Permissions  GlobalNamespace::Sys_Interop_Permissions::S_IXGRP{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::Sys_Interop_Permissions  GlobalNamespace::Sys_Interop_Permissions::S_IRWXO{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::Sys_Interop_Permissions  GlobalNamespace::Sys_Interop_Permissions::S_IROTH{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::Sys_Interop_Permissions  GlobalNamespace::Sys_Interop_Permissions::S_IWOTH{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Sys_Interop_Permissions  GlobalNamespace::Sys_Interop_Permissions::S_IXOTH{static_cast<int32_t>(0x1)};
