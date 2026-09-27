#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL_endCondition_directive.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_endCondition_directive_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LL_endCondition_directive::LL_endCondition_directive(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LL_endCondition_directive::LL_endCondition_directive()   {
}
constexpr ::GlobalNamespace::LL_endCondition_directive  GlobalNamespace::LL_endCondition_directive::endOnOutputSize{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LL_endCondition_directive  GlobalNamespace::LL_endCondition_directive::endOnInputSize{static_cast<int32_t>(0x1)};
