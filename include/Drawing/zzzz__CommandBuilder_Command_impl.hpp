#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_Command.hpp"
#include "Drawing/zzzz__CommandBuilder_Command_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CommandBuilder_Command::CommandBuilder_Command(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandBuilder_Command::CommandBuilder_Command()   {
}
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::PushColorInline{static_cast<int32_t>(0x100)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::PushColor{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::PopColor{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::PushMatrix{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::PushSetMatrix{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::PopMatrix{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::Line{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::Circle{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::CircleXZ{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::Disc{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::DiscXZ{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::SphereOutline{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::Box{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::WirePlane{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::WireBox{static_cast<int32_t>(0xd)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::SolidTriangle{static_cast<int32_t>(0xe)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::PushPersist{static_cast<int32_t>(0xf)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::PopPersist{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::Text{static_cast<int32_t>(0x11)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::Text3D{static_cast<int32_t>(0x12)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::PushLineWidth{static_cast<int32_t>(0x13)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::PopLineWidth{static_cast<int32_t>(0x14)};
constexpr ::GlobalNamespace::CommandBuilder_Command  GlobalNamespace::CommandBuilder_Command::CaptureState{static_cast<int32_t>(0x15)};
