#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Input/OpenXRInput_InputSourceNameFlags.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__OpenXRInput_InputSourceNameFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OpenXRInput_InputSourceNameFlags::OpenXRInput_InputSourceNameFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OpenXRInput_InputSourceNameFlags::OpenXRInput_InputSourceNameFlags()   {
}
constexpr ::GlobalNamespace::OpenXRInput_InputSourceNameFlags  GlobalNamespace::OpenXRInput_InputSourceNameFlags::UserPath{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OpenXRInput_InputSourceNameFlags  GlobalNamespace::OpenXRInput_InputSourceNameFlags::InteractionProfile{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OpenXRInput_InputSourceNameFlags  GlobalNamespace::OpenXRInput_InputSourceNameFlags::Component{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OpenXRInput_InputSourceNameFlags  GlobalNamespace::OpenXRInput_InputSourceNameFlags::All{static_cast<int32_t>(0x7)};
