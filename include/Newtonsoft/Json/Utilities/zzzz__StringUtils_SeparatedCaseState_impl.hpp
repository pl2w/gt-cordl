#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/StringUtils_SeparatedCaseState.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringUtils_SeparatedCaseState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StringUtils_SeparatedCaseState::StringUtils_SeparatedCaseState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StringUtils_SeparatedCaseState::StringUtils_SeparatedCaseState()   {
}
constexpr ::GlobalNamespace::StringUtils_SeparatedCaseState  GlobalNamespace::StringUtils_SeparatedCaseState::Start{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::StringUtils_SeparatedCaseState  GlobalNamespace::StringUtils_SeparatedCaseState::Lower{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::StringUtils_SeparatedCaseState  GlobalNamespace::StringUtils_SeparatedCaseState::Upper{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::StringUtils_SeparatedCaseState  GlobalNamespace::StringUtils_SeparatedCaseState::NewWord{static_cast<int32_t>(0x3)};
