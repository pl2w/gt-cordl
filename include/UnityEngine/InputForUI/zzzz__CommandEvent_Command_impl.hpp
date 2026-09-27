#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/CommandEvent_Command.hpp"
#include "UnityEngine/InputForUI/zzzz__CommandEvent_Command_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CommandEvent_Command::CommandEvent_Command(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandEvent_Command::CommandEvent_Command()   {
}
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::Invalid{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::Cut{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::Copy{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::Paste{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::SelectAll{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::DeselectAll{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::InvertSelection{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::Duplicate{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::Rename{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::Delete{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::SoftDelete{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::Find{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::SelectChildren{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::SelectPrefabRoot{static_cast<int32_t>(0xd)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::UndoRedoPerformed{static_cast<int32_t>(0xe)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::OnLostFocus{static_cast<int32_t>(0xf)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::NewKeyboardFocus{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::ModifierKeysChanged{static_cast<int32_t>(0x11)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::EyeDropperUpdate{static_cast<int32_t>(0x12)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::EyeDropperClicked{static_cast<int32_t>(0x13)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::EyeDropperCancelled{static_cast<int32_t>(0x14)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::ColorPickerChanged{static_cast<int32_t>(0x15)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::FrameSelected{static_cast<int32_t>(0x16)};
constexpr ::GlobalNamespace::CommandEvent_Command  GlobalNamespace::CommandEvent_Command::FrameSelectedWithLock{static_cast<int32_t>(0x17)};
