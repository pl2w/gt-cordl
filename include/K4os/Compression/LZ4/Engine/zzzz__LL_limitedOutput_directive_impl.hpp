#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL_limitedOutput_directive.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_limitedOutput_directive_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LL_limitedOutput_directive::LL_limitedOutput_directive(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LL_limitedOutput_directive::LL_limitedOutput_directive()   {
}
constexpr ::GlobalNamespace::LL_limitedOutput_directive  GlobalNamespace::LL_limitedOutput_directive::notLimited{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LL_limitedOutput_directive  GlobalNamespace::LL_limitedOutput_directive::limitedOutput{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LL_limitedOutput_directive  GlobalNamespace::LL_limitedOutput_directive::fillOutput{static_cast<int32_t>(0x2)};
