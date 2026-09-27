#pragma once
// IWYU pragma private; include "GlobalNamespace/TitleDataDateRefActivation_ReadyState.hpp"
#include "GlobalNamespace/zzzz__TitleDataDateRefActivation_ReadyState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TitleDataDateRefActivation_ReadyState::TitleDataDateRefActivation_ReadyState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TitleDataDateRefActivation_ReadyState::TitleDataDateRefActivation_ReadyState()   {
}
constexpr ::GlobalNamespace::TitleDataDateRefActivation_ReadyState  GlobalNamespace::TitleDataDateRefActivation_ReadyState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TitleDataDateRefActivation_ReadyState  GlobalNamespace::TitleDataDateRefActivation_ReadyState::Initializing{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TitleDataDateRefActivation_ReadyState  GlobalNamespace::TitleDataDateRefActivation_ReadyState::Ready{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::TitleDataDateRefActivation_ReadyState  GlobalNamespace::TitleDataDateRefActivation_ReadyState::Crashed{static_cast<int32_t>(0x3)};
