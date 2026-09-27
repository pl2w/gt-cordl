#pragma once
// IWYU pragma private; include "GlobalNamespace/ESuperGameModes.hpp"
#include "GlobalNamespace/zzzz__ESuperGameModes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ESuperGameModes::ESuperGameModes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ESuperGameModes::ESuperGameModes()   {
}
constexpr ::GlobalNamespace::ESuperGameModes  GlobalNamespace::ESuperGameModes::SuperInfect{static_cast<int32_t>(0x800)};
constexpr ::GlobalNamespace::ESuperGameModes  GlobalNamespace::ESuperGameModes::SuperCasual{static_cast<int32_t>(0x1000)};
