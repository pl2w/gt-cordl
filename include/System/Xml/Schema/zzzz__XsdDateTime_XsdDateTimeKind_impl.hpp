#pragma once
// IWYU pragma private; include "System/Xml/Schema/XsdDateTime_XsdDateTimeKind.hpp"
#include "System/Xml/Schema/zzzz__XsdDateTime_XsdDateTimeKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XsdDateTime_XsdDateTimeKind::XsdDateTime_XsdDateTimeKind(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XsdDateTime_XsdDateTimeKind::XsdDateTime_XsdDateTimeKind()   {
}
constexpr ::GlobalNamespace::XsdDateTime_XsdDateTimeKind  GlobalNamespace::XsdDateTime_XsdDateTimeKind::Unspecified{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XsdDateTime_XsdDateTimeKind  GlobalNamespace::XsdDateTime_XsdDateTimeKind::Zulu{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XsdDateTime_XsdDateTimeKind  GlobalNamespace::XsdDateTime_XsdDateTimeKind::LocalWestOfZulu{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::XsdDateTime_XsdDateTimeKind  GlobalNamespace::XsdDateTime_XsdDateTimeKind::LocalEastOfZulu{static_cast<int32_t>(0x3)};
