#pragma once
// IWYU pragma private; include "Fusion/RunnerVisibilityLink_ComponentType.hpp"
#include "Fusion/zzzz__RunnerVisibilityLink_ComponentType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RunnerVisibilityLink_ComponentType::RunnerVisibilityLink_ComponentType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RunnerVisibilityLink_ComponentType::RunnerVisibilityLink_ComponentType()   {
}
constexpr ::GlobalNamespace::RunnerVisibilityLink_ComponentType  GlobalNamespace::RunnerVisibilityLink_ComponentType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::RunnerVisibilityLink_ComponentType  GlobalNamespace::RunnerVisibilityLink_ComponentType::Renderer{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::RunnerVisibilityLink_ComponentType  GlobalNamespace::RunnerVisibilityLink_ComponentType::Behaviour{static_cast<int32_t>(0x2)};
