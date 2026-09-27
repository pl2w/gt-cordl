#pragma once
// IWYU pragma private; include "Fusion/NetworkRunner_SpawnFlagsInternal.hpp"
#include "Fusion/zzzz__NetworkRunner_SpawnFlagsInternal_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkRunner_SpawnFlagsInternal::NetworkRunner_SpawnFlagsInternal(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkRunner_SpawnFlagsInternal::NetworkRunner_SpawnFlagsInternal()   {
}
constexpr ::GlobalNamespace::NetworkRunner_SpawnFlagsInternal  GlobalNamespace::NetworkRunner_SpawnFlagsInternal::DontDestroyOnLoad{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NetworkRunner_SpawnFlagsInternal  GlobalNamespace::NetworkRunner_SpawnFlagsInternal::SharedModeStateAuthMasterClient{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::NetworkRunner_SpawnFlagsInternal  GlobalNamespace::NetworkRunner_SpawnFlagsInternal::SharedModeStateAuthLocalPlayer{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::NetworkRunner_SpawnFlagsInternal  GlobalNamespace::NetworkRunner_SpawnFlagsInternal::Synchronous{static_cast<int32_t>(0x10000)};
