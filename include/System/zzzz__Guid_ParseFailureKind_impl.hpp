#pragma once
// IWYU pragma private; include "System/Guid_ParseFailureKind.hpp"
#include "System/zzzz__Guid_ParseFailureKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Guid_ParseFailureKind::Guid_ParseFailureKind(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Guid_ParseFailureKind::Guid_ParseFailureKind()   {
}
constexpr ::GlobalNamespace::Guid_ParseFailureKind  GlobalNamespace::Guid_ParseFailureKind::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Guid_ParseFailureKind  GlobalNamespace::Guid_ParseFailureKind::ArgumentNull{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Guid_ParseFailureKind  GlobalNamespace::Guid_ParseFailureKind::Format{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Guid_ParseFailureKind  GlobalNamespace::Guid_ParseFailureKind::FormatWithParameter{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::Guid_ParseFailureKind  GlobalNamespace::Guid_ParseFailureKind::NativeException{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::Guid_ParseFailureKind  GlobalNamespace::Guid_ParseFailureKind::FormatWithInnerException{static_cast<int32_t>(0x5)};
