#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_Widget_NameAndTooltip_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_def.hpp"
#include "UnityEngine/Rendering/zzzz__Volume_def.hpp"
// Ctor Parameters [CppParam { name: "nameAndTooltip", ty: "::GlobalNamespace::Widget_DebugUI_NameAndTooltip", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "volumeProfile", ty: "::UnityW<::UnityEngine::Rendering::VolumeProfile>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "volumeComponent", ty: "::UnityW<::UnityEngine::Rendering::VolumeComponent>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "volume", ty: "::UnityW<::UnityEngine::Rendering::Volume>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  nameAndTooltip, ::UnityW<::UnityEngine::Rendering::VolumeProfile>  volumeProfile, ::UnityW<::UnityEngine::Rendering::VolumeComponent>  volumeComponent, ::UnityW<::UnityEngine::Rendering::Volume>  volume) noexcept  {
this->nameAndTooltip = nameAndTooltip;
this->volumeProfile = volumeProfile;
this->volumeComponent = volumeComponent;
this->volume = volume;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain()   {
}
