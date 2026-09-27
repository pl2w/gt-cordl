#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_MainScreen_FeatureToggleSetup.hpp"
#include "GlobalNamespace/zzzz__EKIDFeatures_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUI_MainScreen_FeatureToggleSetup_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedString_def.hpp"
// Ctor Parameters [CppParam { name: "linkedFeature", ty: "::GlobalNamespace::EKIDFeatures", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "permissionName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "featureName", ty: "::UnityEngine::Localization::LocalizedString*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requiresToggle", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "alwaysCheckFeatureSetting", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "enabledText", ty: "::UnityEngine::Localization::LocalizedString*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "disabledText", ty: "::UnityEngine::Localization::LocalizedString*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup::KIDUI_MainScreen_FeatureToggleSetup(::GlobalNamespace::EKIDFeatures  linkedFeature, ::StringW  permissionName, ::UnityEngine::Localization::LocalizedString*  featureName, bool  requiresToggle, bool  alwaysCheckFeatureSetting, ::UnityEngine::Localization::LocalizedString*  enabledText, ::UnityEngine::Localization::LocalizedString*  disabledText) noexcept  {
this->linkedFeature = linkedFeature;
this->permissionName = permissionName;
this->featureName = featureName;
this->requiresToggle = requiresToggle;
this->alwaysCheckFeatureSetting = alwaysCheckFeatureSetting;
this->enabledText = enabledText;
this->disabledText = disabledText;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup::KIDUI_MainScreen_FeatureToggleSetup()   {
}
