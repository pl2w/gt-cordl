#pragma once
// IWYU pragma private; include "Fusion/NetworkRunner_AttachOptions.hpp"
#include "Fusion/zzzz__NetworkRunner_AttachOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkRunner_AttachOptions::NetworkRunner_AttachOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkRunner_AttachOptions::NetworkRunner_AttachOptions()   {
}
constexpr ::GlobalNamespace::NetworkRunner_AttachOptions  GlobalNamespace::NetworkRunner_AttachOptions::LocalSpawn{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NetworkRunner_AttachOptions  GlobalNamespace::NetworkRunner_AttachOptions::AttachExisting{static_cast<int32_t>(0x2)};
