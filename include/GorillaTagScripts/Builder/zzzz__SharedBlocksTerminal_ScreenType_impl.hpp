#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksTerminal_ScreenType.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksTerminal_ScreenType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SharedBlocksTerminal_ScreenType::SharedBlocksTerminal_ScreenType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SharedBlocksTerminal_ScreenType::SharedBlocksTerminal_ScreenType()   {
}
constexpr ::GlobalNamespace::SharedBlocksTerminal_ScreenType  GlobalNamespace::SharedBlocksTerminal_ScreenType::NO_DRIVER{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SharedBlocksTerminal_ScreenType  GlobalNamespace::SharedBlocksTerminal_ScreenType::SEARCH{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SharedBlocksTerminal_ScreenType  GlobalNamespace::SharedBlocksTerminal_ScreenType::LOADING{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SharedBlocksTerminal_ScreenType  GlobalNamespace::SharedBlocksTerminal_ScreenType::ERROR{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::SharedBlocksTerminal_ScreenType  GlobalNamespace::SharedBlocksTerminal_ScreenType::SCAN_INFO{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::SharedBlocksTerminal_ScreenType  GlobalNamespace::SharedBlocksTerminal_ScreenType::OTHER_DRIVER{static_cast<int32_t>(0x5)};
