#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandAlignType.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandAlignType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::HandGrab::HandAlignType::HandAlignType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::HandAlignType::HandAlignType()   {
}
constexpr ::Oculus::Interaction::HandGrab::HandAlignType  Oculus::Interaction::HandGrab::HandAlignType::None{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Interaction::HandGrab::HandAlignType  Oculus::Interaction::HandGrab::HandAlignType::AlignOnGrab{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Interaction::HandGrab::HandAlignType  Oculus::Interaction::HandGrab::HandAlignType::AttractOnHover{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Interaction::HandGrab::HandAlignType  Oculus::Interaction::HandGrab::HandAlignType::AlignFingersOnHover{static_cast<int32_t>(0x3)};
