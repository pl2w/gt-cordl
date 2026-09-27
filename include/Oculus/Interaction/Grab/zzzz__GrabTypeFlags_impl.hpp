#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabTypeFlags.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabTypeFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::Grab::GrabTypeFlags::GrabTypeFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Grab::GrabTypeFlags::GrabTypeFlags()   {
}
constexpr ::Oculus::Interaction::Grab::GrabTypeFlags  Oculus::Interaction::Grab::GrabTypeFlags::None{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Interaction::Grab::GrabTypeFlags  Oculus::Interaction::Grab::GrabTypeFlags::Pinch{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Interaction::Grab::GrabTypeFlags  Oculus::Interaction::Grab::GrabTypeFlags::Palm{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Interaction::Grab::GrabTypeFlags  Oculus::Interaction::Grab::GrabTypeFlags::All{static_cast<int32_t>(0x3)};
