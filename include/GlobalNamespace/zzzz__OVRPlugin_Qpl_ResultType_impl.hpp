#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Qpl_ResultType.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Qpl_ResultType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Qpl_OVRPlugin_ResultType::Qpl_OVRPlugin_ResultType(int16_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Qpl_OVRPlugin_ResultType::Qpl_OVRPlugin_ResultType()   {
}
constexpr ::GlobalNamespace::Qpl_OVRPlugin_ResultType  GlobalNamespace::Qpl_OVRPlugin_ResultType::Success{static_cast<int16_t>(0x2)};
constexpr ::GlobalNamespace::Qpl_OVRPlugin_ResultType  GlobalNamespace::Qpl_OVRPlugin_ResultType::Fail{static_cast<int16_t>(0x3)};
constexpr ::GlobalNamespace::Qpl_OVRPlugin_ResultType  GlobalNamespace::Qpl_OVRPlugin_ResultType::Cancel{static_cast<int16_t>(0x4)};
