#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/GZip/GZipOutputStream_OutputState.hpp"
#include "ICSharpCode/SharpZipLib/GZip/zzzz__GZipOutputStream_OutputState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GZipOutputStream_OutputState::GZipOutputStream_OutputState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GZipOutputStream_OutputState::GZipOutputStream_OutputState()   {
}
constexpr ::GlobalNamespace::GZipOutputStream_OutputState  GlobalNamespace::GZipOutputStream_OutputState::Header{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GZipOutputStream_OutputState  GlobalNamespace::GZipOutputStream_OutputState::Footer{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GZipOutputStream_OutputState  GlobalNamespace::GZipOutputStream_OutputState::Finished{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GZipOutputStream_OutputState  GlobalNamespace::GZipOutputStream_OutputState::Closed{static_cast<int32_t>(0x3)};
