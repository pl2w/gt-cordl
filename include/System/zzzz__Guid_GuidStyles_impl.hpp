#pragma once
// IWYU pragma private; include "System/Guid_GuidStyles.hpp"
#include "System/zzzz__Guid_GuidStyles_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Guid_GuidStyles::Guid_GuidStyles(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Guid_GuidStyles::Guid_GuidStyles()   {
}
constexpr ::GlobalNamespace::Guid_GuidStyles  GlobalNamespace::Guid_GuidStyles::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Guid_GuidStyles  GlobalNamespace::Guid_GuidStyles::AllowParenthesis{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Guid_GuidStyles  GlobalNamespace::Guid_GuidStyles::AllowBraces{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Guid_GuidStyles  GlobalNamespace::Guid_GuidStyles::AllowDashes{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::Guid_GuidStyles  GlobalNamespace::Guid_GuidStyles::AllowHexPrefix{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::Guid_GuidStyles  GlobalNamespace::Guid_GuidStyles::RequireParenthesis{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::Guid_GuidStyles  GlobalNamespace::Guid_GuidStyles::RequireBraces{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::Guid_GuidStyles  GlobalNamespace::Guid_GuidStyles::RequireDashes{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::Guid_GuidStyles  GlobalNamespace::Guid_GuidStyles::RequireHexPrefix{static_cast<int32_t>(0x80)};
constexpr ::GlobalNamespace::Guid_GuidStyles  GlobalNamespace::Guid_GuidStyles::HexFormat{static_cast<int32_t>(0xa0)};
constexpr ::GlobalNamespace::Guid_GuidStyles  GlobalNamespace::Guid_GuidStyles::NumberFormat{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Guid_GuidStyles  GlobalNamespace::Guid_GuidStyles::DigitFormat{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::Guid_GuidStyles  GlobalNamespace::Guid_GuidStyles::BraceFormat{static_cast<int32_t>(0x60)};
constexpr ::GlobalNamespace::Guid_GuidStyles  GlobalNamespace::Guid_GuidStyles::ParenthesisFormat{static_cast<int32_t>(0x50)};
constexpr ::GlobalNamespace::Guid_GuidStyles  GlobalNamespace::Guid_GuidStyles::Any{static_cast<int32_t>(0xf)};
