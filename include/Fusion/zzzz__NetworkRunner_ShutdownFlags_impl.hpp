#pragma once
// IWYU pragma private; include "Fusion/NetworkRunner_ShutdownFlags.hpp"
#include "Fusion/zzzz__NetworkRunner_ShutdownFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkRunner_ShutdownFlags::NetworkRunner_ShutdownFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkRunner_ShutdownFlags::NetworkRunner_ShutdownFlags()   {
}
constexpr ::GlobalNamespace::NetworkRunner_ShutdownFlags  GlobalNamespace::NetworkRunner_ShutdownFlags::Regular{static_cast<int32_t>(0x1)};
