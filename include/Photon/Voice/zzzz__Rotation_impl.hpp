#pragma once
// IWYU pragma private; include "Photon/Voice/Rotation.hpp"
#include "Photon/Voice/zzzz__Rotation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Photon::Voice::Rotation::Rotation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Voice::Rotation::Rotation()   {
}
constexpr ::Photon::Voice::Rotation  Photon::Voice::Rotation::Undefined{static_cast<int32_t>(0xffffffff)};
constexpr ::Photon::Voice::Rotation  Photon::Voice::Rotation::Rotate0{static_cast<int32_t>(0x0)};
constexpr ::Photon::Voice::Rotation  Photon::Voice::Rotation::Rotate90{static_cast<int32_t>(0x5a)};
constexpr ::Photon::Voice::Rotation  Photon::Voice::Rotation::Rotate180{static_cast<int32_t>(0xb4)};
constexpr ::Photon::Voice::Rotation  Photon::Voice::Rotation::Rotate270{static_cast<int32_t>(0x10e)};
