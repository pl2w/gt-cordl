#pragma once
// IWYU pragma private; include "System/Exception_ExceptionMessageKind.hpp"
#include "System/zzzz__Exception_ExceptionMessageKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Exception_ExceptionMessageKind::Exception_ExceptionMessageKind(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Exception_ExceptionMessageKind::Exception_ExceptionMessageKind()   {
}
constexpr ::GlobalNamespace::Exception_ExceptionMessageKind  GlobalNamespace::Exception_ExceptionMessageKind::ThreadAbort{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Exception_ExceptionMessageKind  GlobalNamespace::Exception_ExceptionMessageKind::ThreadInterrupted{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Exception_ExceptionMessageKind  GlobalNamespace::Exception_ExceptionMessageKind::OutOfMemory{static_cast<int32_t>(0x3)};
