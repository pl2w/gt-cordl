#pragma once
// IWYU pragma private; include "GorillaExtensions/GTExt_ParityOptions.hpp"
#include "GorillaExtensions/zzzz__GTExt_ParityOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTExt_ParityOptions::GTExt_ParityOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTExt_ParityOptions::GTExt_ParityOptions()   {
}
constexpr ::GlobalNamespace::GTExt_ParityOptions  GlobalNamespace::GTExt_ParityOptions::XFlip{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GTExt_ParityOptions  GlobalNamespace::GTExt_ParityOptions::YFlip{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GTExt_ParityOptions  GlobalNamespace::GTExt_ParityOptions::ZFlip{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GTExt_ParityOptions  GlobalNamespace::GTExt_ParityOptions::AllFlip{static_cast<int32_t>(0x3)};
