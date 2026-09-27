#pragma once
// IWYU pragma private; include "System/Guid_GuidParseThrowStyle.hpp"
#include "System/zzzz__Guid_GuidParseThrowStyle_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Guid_GuidParseThrowStyle::Guid_GuidParseThrowStyle(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Guid_GuidParseThrowStyle::Guid_GuidParseThrowStyle()   {
}
constexpr ::GlobalNamespace::Guid_GuidParseThrowStyle  GlobalNamespace::Guid_GuidParseThrowStyle::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Guid_GuidParseThrowStyle  GlobalNamespace::Guid_GuidParseThrowStyle::All{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Guid_GuidParseThrowStyle  GlobalNamespace::Guid_GuidParseThrowStyle::AllButOverflow{static_cast<int32_t>(0x2)};
