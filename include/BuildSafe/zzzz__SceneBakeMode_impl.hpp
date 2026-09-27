#pragma once
// IWYU pragma private; include "BuildSafe/SceneBakeMode.hpp"
#include "BuildSafe/zzzz__SceneBakeMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::BuildSafe::SceneBakeMode::SceneBakeMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BuildSafe::SceneBakeMode::SceneBakeMode()   {
}
constexpr ::BuildSafe::SceneBakeMode  BuildSafe::SceneBakeMode::Always{static_cast<int32_t>(0x0)};
constexpr ::BuildSafe::SceneBakeMode  BuildSafe::SceneBakeMode::OnBuildPlayer{static_cast<int32_t>(0x1)};
constexpr ::BuildSafe::SceneBakeMode  BuildSafe::SceneBakeMode::OnEditorPlayMode{static_cast<int32_t>(0x2)};
constexpr ::BuildSafe::SceneBakeMode  BuildSafe::SceneBakeMode::Disabled{static_cast<int32_t>(0x3)};
