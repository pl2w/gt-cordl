#pragma once
// IWYU pragma private; include "Fusion/RunnerVisibilityLink_PreferredRunners.hpp"
#include "Fusion/zzzz__RunnerVisibilityLink_PreferredRunners_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners::RunnerVisibilityLink_PreferredRunners(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners::RunnerVisibilityLink_PreferredRunners()   {
}
constexpr ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners  GlobalNamespace::RunnerVisibilityLink_PreferredRunners::Auto{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners  GlobalNamespace::RunnerVisibilityLink_PreferredRunners::Server{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners  GlobalNamespace::RunnerVisibilityLink_PreferredRunners::Client{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners  GlobalNamespace::RunnerVisibilityLink_PreferredRunners::InputAuthority{static_cast<int32_t>(0x3)};
