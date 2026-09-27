#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/Recorder_MicType.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_MicType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Recorder_MicType::Recorder_MicType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Recorder_MicType::Recorder_MicType()   {
}
constexpr ::GlobalNamespace::Recorder_MicType  GlobalNamespace::Recorder_MicType::Unity{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Recorder_MicType  GlobalNamespace::Recorder_MicType::Photon{static_cast<int32_t>(0x1)};
