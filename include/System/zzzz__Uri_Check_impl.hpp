#pragma once
// IWYU pragma private; include "System/Uri_Check.hpp"
#include "System/zzzz__Uri_Check_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Uri_Check::Uri_Check(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Uri_Check::Uri_Check()   {
}
constexpr ::GlobalNamespace::Uri_Check  GlobalNamespace::Uri_Check::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Uri_Check  GlobalNamespace::Uri_Check::EscapedCanonical{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Uri_Check  GlobalNamespace::Uri_Check::DisplayCanonical{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Uri_Check  GlobalNamespace::Uri_Check::DotSlashAttn{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::Uri_Check  GlobalNamespace::Uri_Check::DotSlashEscaped{static_cast<int32_t>(0x80)};
constexpr ::GlobalNamespace::Uri_Check  GlobalNamespace::Uri_Check::BackslashInPath{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::Uri_Check  GlobalNamespace::Uri_Check::ReservedFound{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::Uri_Check  GlobalNamespace::Uri_Check::NotIriCanonical{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::Uri_Check  GlobalNamespace::Uri_Check::FoundNonAscii{static_cast<int32_t>(0x8)};
