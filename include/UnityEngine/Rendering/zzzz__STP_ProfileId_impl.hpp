#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/STP_ProfileId.hpp"
#include "UnityEngine/Rendering/zzzz__STP_ProfileId_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::STP_ProfileId::STP_ProfileId(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::STP_ProfileId::STP_ProfileId()   {
}
constexpr ::GlobalNamespace::STP_ProfileId  GlobalNamespace::STP_ProfileId::StpSetup{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::STP_ProfileId  GlobalNamespace::STP_ProfileId::StpPreTaa{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::STP_ProfileId  GlobalNamespace::STP_ProfileId::StpTaa{static_cast<int32_t>(0x2)};
