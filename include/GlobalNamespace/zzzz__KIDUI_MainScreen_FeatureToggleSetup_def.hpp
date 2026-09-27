#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_MainScreen_FeatureToggleSetup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EKIDFeatures_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(KIDUI_MainScreen_FeatureToggleSetup)
namespace UnityEngine::Localization {
class LocalizedString;
}
// Forward declare root types
namespace GlobalNamespace {
struct KIDUI_MainScreen_FeatureToggleSetup;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup, "", "KIDUI_MainScreen/FeatureToggleSetup");
// Dependencies EKIDFeatures
namespace GlobalNamespace {
// Is value type: true
// CS Name: KIDUI_MainScreen/FeatureToggleSetup
struct CORDL_TYPE KIDUI_MainScreen_FeatureToggleSetup {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_MainScreen_FeatureToggleSetup() ;

// Ctor Parameters [CppParam { name: "linkedFeature", ty: "::GlobalNamespace::EKIDFeatures", modifiers: "", def_value: None, comment: None }, CppParam { name: "permissionName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "featureName", ty: "::UnityEngine::Localization::LocalizedString*", modifiers: "", def_value: None, comment: None }, CppParam { name: "requiresToggle", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "alwaysCheckFeatureSetting", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "enabledText", ty: "::UnityEngine::Localization::LocalizedString*", modifiers: "", def_value: None, comment: None }, CppParam { name: "disabledText", ty: "::UnityEngine::Localization::LocalizedString*", modifiers: "", def_value: None, comment: None }]
constexpr KIDUI_MainScreen_FeatureToggleSetup(::GlobalNamespace::EKIDFeatures  linkedFeature, ::StringW  permissionName, ::UnityEngine::Localization::LocalizedString*  featureName, bool  requiresToggle, bool  alwaysCheckFeatureSetting, ::UnityEngine::Localization::LocalizedString*  enabledText, ::UnityEngine::Localization::LocalizedString*  disabledText) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3029};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field linkedFeature, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::EKIDFeatures  linkedFeature;

/// @brief Field permissionName, offset: 0x8, size: 0x8, def value: None
 ::StringW  permissionName;

/// @brief Field featureName, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  featureName;

/// @brief Field requiresToggle, offset: 0x18, size: 0x1, def value: None
 bool  requiresToggle;

/// @brief Field alwaysCheckFeatureSetting, offset: 0x19, size: 0x1, def value: None
 bool  alwaysCheckFeatureSetting;

/// @brief Field enabledText, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  enabledText;

/// @brief Field disabledText, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  disabledText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup, linkedFeature) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup, permissionName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup, featureName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup, requiresToggle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup, alwaysCheckFeatureSetting) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup, enabledText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup, disabledText) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
