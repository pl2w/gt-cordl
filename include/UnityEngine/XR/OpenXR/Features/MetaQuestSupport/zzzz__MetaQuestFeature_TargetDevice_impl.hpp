#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/MetaQuestSupport/MetaQuestFeature_TargetDevice.hpp"
#include "UnityEngine/XR/OpenXR/Features/MetaQuestSupport/zzzz__MetaQuestFeature_TargetDevice_def.hpp"
// Ctor Parameters [CppParam { name: "visibleName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "manifestName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "active", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MetaQuestFeature_TargetDevice::MetaQuestFeature_TargetDevice(::StringW  visibleName, ::StringW  manifestName, bool  enabled, bool  active) noexcept  {
this->visibleName = visibleName;
this->manifestName = manifestName;
this->enabled = enabled;
this->active = active;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaQuestFeature_TargetDevice::MetaQuestFeature_TargetDevice()   {
}
