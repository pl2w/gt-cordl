#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL_dictIssue_directive.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_dictIssue_directive_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LL_dictIssue_directive::LL_dictIssue_directive(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LL_dictIssue_directive::LL_dictIssue_directive()   {
}
constexpr ::GlobalNamespace::LL_dictIssue_directive  GlobalNamespace::LL_dictIssue_directive::noDictIssue{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LL_dictIssue_directive  GlobalNamespace::LL_dictIssue_directive::dictSmall{static_cast<int32_t>(0x1)};
