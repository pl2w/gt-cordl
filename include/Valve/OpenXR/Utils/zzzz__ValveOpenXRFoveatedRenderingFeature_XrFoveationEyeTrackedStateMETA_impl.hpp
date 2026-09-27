#pragma once
// IWYU pragma private; include "Valve/OpenXR/Utils/ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Valve/OpenXR/Utils/zzzz__ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA_impl.hpp"
#include "Valve/OpenXR/Utils/zzzz__XrStructureType_impl.hpp"
#include "Valve/OpenXR/Utils/zzzz__XrVector2f_impl.hpp"
#include "Valve/OpenXR/Utils/zzzz__ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA_def.hpp"
#include "Valve/OpenXR/Utils/zzzz__XrVector2f_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "::Valve::OpenXR::Utils::XrStructureType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "next", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "foveationCenter", ty: "::ArrayW<::Valve::OpenXR::Utils::XrVector2f>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "flags", ty: "::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA(::Valve::OpenXR::Utils::XrStructureType  type, ::System::IntPtr  next, ::ArrayW<::Valve::OpenXR::Utils::XrVector2f>  foveationCenter, ::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA  flags) noexcept  {
this->type = type;
this->next = next;
this->foveationCenter = foveationCenter;
this->flags = flags;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA()   {
}
