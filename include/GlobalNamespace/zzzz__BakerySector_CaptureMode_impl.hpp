#pragma once
// IWYU pragma private; include "GlobalNamespace/BakerySector_CaptureMode.hpp"
#include "GlobalNamespace/zzzz__BakerySector_CaptureMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BakerySector_CaptureMode::BakerySector_CaptureMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakerySector_CaptureMode::BakerySector_CaptureMode()   {
}
constexpr ::GlobalNamespace::BakerySector_CaptureMode  GlobalNamespace::BakerySector_CaptureMode::None{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::BakerySector_CaptureMode  GlobalNamespace::BakerySector_CaptureMode::CaptureInPlace{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BakerySector_CaptureMode  GlobalNamespace::BakerySector_CaptureMode::CaptureToAsset{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BakerySector_CaptureMode  GlobalNamespace::BakerySector_CaptureMode::LoadCaptured{static_cast<int32_t>(0x2)};
