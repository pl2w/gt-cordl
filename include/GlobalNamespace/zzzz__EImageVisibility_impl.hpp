#pragma once
// IWYU pragma private; include "GlobalNamespace/EImageVisibility.hpp"
#include "GlobalNamespace/zzzz__EImageVisibility_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EImageVisibility::EImageVisibility(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EImageVisibility::EImageVisibility()   {
}
constexpr ::GlobalNamespace::EImageVisibility  GlobalNamespace::EImageVisibility::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::EImageVisibility  GlobalNamespace::EImageVisibility::AfterBody{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::EImageVisibility  GlobalNamespace::EImageVisibility::BeforeBody{static_cast<int32_t>(0x2)};
