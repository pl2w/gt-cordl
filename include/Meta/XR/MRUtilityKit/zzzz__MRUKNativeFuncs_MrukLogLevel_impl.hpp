#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukLogLevel.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukLogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel::MRUKNativeFuncs_MrukLogLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel::MRUKNativeFuncs_MrukLogLevel()   {
}
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel  GlobalNamespace::MRUKNativeFuncs_MrukLogLevel::Debug{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel  GlobalNamespace::MRUKNativeFuncs_MrukLogLevel::Info{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel  GlobalNamespace::MRUKNativeFuncs_MrukLogLevel::Warn{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel  GlobalNamespace::MRUKNativeFuncs_MrukLogLevel::Error{static_cast<int32_t>(0x3)};
