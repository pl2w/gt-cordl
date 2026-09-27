#pragma once
// IWYU pragma private; include "GlobalNamespace/NexusManager_Environment.hpp"
#include "GlobalNamespace/zzzz__NexusManager_Environment_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NexusManager_Environment::NexusManager_Environment(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NexusManager_Environment::NexusManager_Environment()   {
}
constexpr ::GlobalNamespace::NexusManager_Environment  GlobalNamespace::NexusManager_Environment::PRODUCTION{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NexusManager_Environment  GlobalNamespace::NexusManager_Environment::SANDBOX{static_cast<int32_t>(0x1)};
