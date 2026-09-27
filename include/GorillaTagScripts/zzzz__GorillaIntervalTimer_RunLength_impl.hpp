#pragma once
// IWYU pragma private; include "GorillaTagScripts/GorillaIntervalTimer_RunLength.hpp"
#include "GorillaTagScripts/zzzz__GorillaIntervalTimer_RunLength_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaIntervalTimer_RunLength::GorillaIntervalTimer_RunLength(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaIntervalTimer_RunLength::GorillaIntervalTimer_RunLength()   {
}
constexpr ::GlobalNamespace::GorillaIntervalTimer_RunLength  GlobalNamespace::GorillaIntervalTimer_RunLength::Infinite{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GorillaIntervalTimer_RunLength  GlobalNamespace::GorillaIntervalTimer_RunLength::Finite{static_cast<int32_t>(0x1)};
