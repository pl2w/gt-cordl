#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionRebindingExtensions_RebindingOperation_Flags.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_RebindingOperation_Flags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags::RebindingOperation_InputActionRebindingExtensions_Flags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags::RebindingOperation_InputActionRebindingExtensions_Flags()   {
}
constexpr ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags  GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags::Started{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags  GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags::Completed{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags  GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags::Canceled{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags  GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags::OnEventHooked{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags  GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags::OnAfterUpdateHooked{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags  GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags::DontIgnoreNoisyControls{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags  GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags::DontGeneralizePathOfSelectedControl{static_cast<int32_t>(0x80)};
constexpr ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags  GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags::AddNewBinding{static_cast<int32_t>(0x100)};
constexpr ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags  GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags::SuppressMatchingEvents{static_cast<int32_t>(0x200)};
