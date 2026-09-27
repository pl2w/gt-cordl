#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUIFeatureSetting.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EKIDFeatures_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_MainScreen_FeatureToggleSetup_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(KIDUIFeatureSetting)
namespace GlobalNamespace {
struct EKIDFeatures;
}
namespace GlobalNamespace {
class KIDUIFeatureSetting___c;
}
namespace GlobalNamespace {
class KIDUIToggle;
}
namespace GlobalNamespace {
struct KIDUI_MainScreen_FeatureToggleSetup;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDUIFeatureSetting;
}
namespace GlobalNamespace {
class KIDUIFeatureSetting___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUIFeatureSetting*);
MARK_REF_T(::GlobalNamespace::KIDUIFeatureSetting___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUIFeatureSetting*, "", "KIDUIFeatureSetting");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUIFeatureSetting___c*, "", "KIDUIFeatureSetting/<>c");
// Dependencies EKIDFeatures, KIDUI_MainScreen::FeatureToggleSetup, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUIFeatureSetting
class CORDL_TYPE KIDUIFeatureSetting : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::KIDUIFeatureSetting___c;

 __declspec(property(get=get_AlwaysCheckFeatureSetting, put=set_AlwaysCheckFeatureSetting)) bool  AlwaysCheckFeatureSetting;

/// @brief Field <AlwaysCheckFeatureSetting>k__BackingField, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get__AlwaysCheckFeatureSetting_k__BackingField, put=__cordl_internal_set__AlwaysCheckFeatureSetting_k__BackingField)) bool  _AlwaysCheckFeatureSetting_k__BackingField;

/// @brief Field _crossIcon, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__crossIcon, put=__cordl_internal_set__crossIcon)) ::UnityW<::UnityEngine::GameObject>  _crossIcon;

/// @brief Field _disabledTextStr, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__disabledTextStr, put=__cordl_internal_set__disabledTextStr)) ::StringW  _disabledTextStr;

/// @brief Field _enabledTextStr, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__enabledTextStr, put=__cordl_internal_set__enabledTextStr)) ::StringW  _enabledTextStr;

/// @brief Field _feature, offset 0x90, size 0x30 
 __declspec(property(get=__cordl_internal_get__feature, put=__cordl_internal_set__feature)) ::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup  _feature;

/// @brief Field _featureName, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureName, put=__cordl_internal_set__featureName)) ::StringW  _featureName;

/// @brief Field _featureNameTxt, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureNameTxt, put=__cordl_internal_set__featureNameTxt)) ::UnityW<::TMPro::TMP_Text>  _featureNameTxt;

/// @brief Field _featureStatusTxt, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureStatusTxt, put=__cordl_internal_set__featureStatusTxt)) ::UnityW<::TMPro::TMP_Text>  _featureStatusTxt;

/// @brief Field _featureToggle, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureToggle, put=__cordl_internal_set__featureToggle)) ::UnityW<::GlobalNamespace::KIDUIToggle>  _featureToggle;

/// @brief Field _featureType, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__featureType, put=__cordl_internal_set__featureType)) ::GlobalNamespace::EKIDFeatures  _featureType;

/// @brief Field _guardianManagedEnabled, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__guardianManagedEnabled, put=__cordl_internal_set__guardianManagedEnabled)) ::UnityW<::UnityEngine::GameObject>  _guardianManagedEnabled;

/// @brief Field _guardianManagedLocked, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__guardianManagedLocked, put=__cordl_internal_set__guardianManagedLocked)) ::UnityW<::UnityEngine::GameObject>  _guardianManagedLocked;

/// @brief Field _hasToggle, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasToggle, put=__cordl_internal_set__hasToggle)) bool  _hasToggle;

/// @brief Field _onChangeCallback, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__onChangeCallback, put=__cordl_internal_set__onChangeCallback)) ::System::Action_1<::GlobalNamespace::EKIDFeatures>*  _onChangeCallback;

/// @brief Field _permissionName, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__permissionName, put=__cordl_internal_set__permissionName)) ::StringW  _permissionName;

/// @brief Field _tickIcon, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__tickIcon, put=__cordl_internal_set__tickIcon)) ::UnityW<::UnityEngine::GameObject>  _tickIcon;

/// @brief Method AddDeniedSoundHandler, addr 0x5a495b0, size 0x2ac, virtual false, abstract: false, final false
inline void AddDeniedSoundHandler(::UnityEngine::GameObject*  obj) ;

/// @brief Method CreateNewFeatureSettingGuardianManaged, addr 0x5a489ec, size 0x70, virtual false, abstract: false, final false
inline void CreateNewFeatureSettingGuardianManaged(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup  feature, bool  isEnabled) ;

/// @brief Method CreateNewFeatureSettingWithToggle, addr 0x5a48a8c, size 0xec, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::KIDUIToggle> CreateNewFeatureSettingWithToggle(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup  feature, bool  initialState, bool  alwaysCheckFeatureSetting) ;

/// @brief Method CreateNewFeatureSettingWithoutToggle, addr 0x5a48a5c, size 0x30, virtual false, abstract: false, final false
inline void CreateNewFeatureSettingWithoutToggle(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup  feature, bool  alwaysCheckFeatureSetting) ;

/// @brief Method EnsureRaycastTarget, addr 0x5a4985c, size 0x148, virtual false, abstract: false, final false
inline void EnsureRaycastTarget(::UnityEngine::GameObject*  obj) ;

/// @brief Method GetFeatureToggleState, addr 0x5a4934c, size 0xe0, virtual false, abstract: false, final false
inline bool GetFeatureToggleState() ;

/// @brief Method GetHasToggle, addr 0x5a4942c, size 0x8, virtual false, abstract: false, final false
inline bool GetHasToggle() ;

static inline ::GlobalNamespace::KIDUIFeatureSetting* New_ctor() ;

/// @brief Method RefreshTextOnLanguageChanged, addr 0x5a48fe0, size 0x2f4, virtual false, abstract: false, final false
inline void RefreshTextOnLanguageChanged() ;

/// @brief Method RegisterToggleOffEvent, addr 0x5a4931c, size 0x18, virtual false, abstract: false, final false
inline void RegisterToggleOffEvent(::System::Action*  action) ;

/// @brief Method RegisterToggleOnEvent, addr 0x5a492ec, size 0x18, virtual false, abstract: false, final false
inline void RegisterToggleOnEvent(::System::Action*  action) ;

/// @brief Method SetFeatureData, addr 0x5a48b78, size 0x33c, virtual false, abstract: false, final false
inline void SetFeatureData(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup  feature, bool  alwaysCheckFeatureSetting, bool  featureToggleEnabled) ;

/// @brief Method SetFeatureName, addr 0x5a48eb4, size 0x12c, virtual false, abstract: false, final false
inline void SetFeatureName() ;

/// @brief Method SetFeatureSettingVisible, addr 0x5a49434, size 0x28, virtual false, abstract: false, final false
inline void SetFeatureSettingVisible(bool  visible) ;

/// @brief Method SetFeatureToggle, addr 0x5a4945c, size 0x1c, virtual false, abstract: false, final false
inline void SetFeatureToggle(bool  enableToggle) ;

/// @brief Method SetGuardianManagedState, addr 0x5a49478, size 0x88, virtual false, abstract: false, final false
inline void SetGuardianManagedState(bool  isEnabled) ;

/// @brief Method SetPlayerManagedState, addr 0x5a49520, size 0x90, virtual false, abstract: false, final false
inline void SetPlayerManagedState(bool  isInteractable, bool  isOptedIn) ;

/// @brief Method SetupGuardianManagedClickHandlers, addr 0x5a49500, size 0x20, virtual false, abstract: false, final false
inline void SetupGuardianManagedClickHandlers() ;

/// @brief Method UnregisterOnToggleChangeEvent, addr 0x5a492d4, size 0x18, virtual false, abstract: false, final false
inline void UnregisterOnToggleChangeEvent(::System::Action*  action) ;

/// @brief Method UnregisterToggleOffEvent, addr 0x5a49334, size 0x18, virtual false, abstract: false, final false
inline void UnregisterToggleOffEvent(::System::Action*  action) ;

/// @brief Method UnregisterToggleOnEvent, addr 0x5a49304, size 0x18, virtual false, abstract: false, final false
inline void UnregisterToggleOnEvent(::System::Action*  action) ;

constexpr bool const& __cordl_internal_get__AlwaysCheckFeatureSetting_k__BackingField() const;

constexpr bool& __cordl_internal_get__AlwaysCheckFeatureSetting_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__crossIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__crossIcon() ;

constexpr ::StringW const& __cordl_internal_get__disabledTextStr() const;

constexpr ::StringW& __cordl_internal_get__disabledTextStr() ;

constexpr ::StringW const& __cordl_internal_get__enabledTextStr() const;

constexpr ::StringW& __cordl_internal_get__enabledTextStr() ;

constexpr ::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup const& __cordl_internal_get__feature() const;

constexpr ::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup& __cordl_internal_get__feature() ;

constexpr ::StringW const& __cordl_internal_get__featureName() const;

constexpr ::StringW& __cordl_internal_get__featureName() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__featureNameTxt() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__featureNameTxt() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__featureStatusTxt() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__featureStatusTxt() ;

constexpr ::UnityW<::GlobalNamespace::KIDUIToggle> const& __cordl_internal_get__featureToggle() const;

constexpr ::UnityW<::GlobalNamespace::KIDUIToggle>& __cordl_internal_get__featureToggle() ;

constexpr ::GlobalNamespace::EKIDFeatures const& __cordl_internal_get__featureType() const;

constexpr ::GlobalNamespace::EKIDFeatures& __cordl_internal_get__featureType() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__guardianManagedEnabled() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__guardianManagedEnabled() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__guardianManagedLocked() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__guardianManagedLocked() ;

constexpr bool const& __cordl_internal_get__hasToggle() const;

constexpr bool& __cordl_internal_get__hasToggle() ;

constexpr ::System::Action_1<::GlobalNamespace::EKIDFeatures>* const& __cordl_internal_get__onChangeCallback() const;

constexpr ::System::Action_1<::GlobalNamespace::EKIDFeatures>*& __cordl_internal_get__onChangeCallback() ;

constexpr ::StringW const& __cordl_internal_get__permissionName() const;

constexpr ::StringW& __cordl_internal_get__permissionName() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__tickIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__tickIcon() ;

constexpr void __cordl_internal_set__AlwaysCheckFeatureSetting_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__crossIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__disabledTextStr(::StringW  value) ;

constexpr void __cordl_internal_set__enabledTextStr(::StringW  value) ;

constexpr void __cordl_internal_set__feature(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup  value) ;

constexpr void __cordl_internal_set__featureName(::StringW  value) ;

constexpr void __cordl_internal_set__featureNameTxt(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__featureStatusTxt(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__featureToggle(::UnityW<::GlobalNamespace::KIDUIToggle>  value) ;

constexpr void __cordl_internal_set__featureType(::GlobalNamespace::EKIDFeatures  value) ;

constexpr void __cordl_internal_set__guardianManagedEnabled(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__guardianManagedLocked(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__hasToggle(bool  value) ;

constexpr void __cordl_internal_set__onChangeCallback(::System::Action_1<::GlobalNamespace::EKIDFeatures>*  value) ;

constexpr void __cordl_internal_set__permissionName(::StringW  value) ;

constexpr void __cordl_internal_set__tickIcon(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5a499a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_AlwaysCheckFeatureSetting, addr 0x5a489dc, size 0x8, virtual false, abstract: false, final false
inline bool get_AlwaysCheckFeatureSetting() ;

/// [CompilerGenerated]
/// @brief Method set_AlwaysCheckFeatureSetting, addr 0x5a489e4, size 0x8, virtual false, abstract: false, final false
inline void set_AlwaysCheckFeatureSetting(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUIFeatureSetting() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUIFeatureSetting", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUIFeatureSetting(KIDUIFeatureSetting && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUIFeatureSetting", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUIFeatureSetting(KIDUIFeatureSetting const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2987};

/// [SerializeField]
/// @brief Field _featureNameTxt, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____featureNameTxt;

/// [SerializeField]
/// @brief Field _featureStatusTxt, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____featureStatusTxt;

/// [SerializeField]
/// @brief Field _featureToggle, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUIToggle>  ____featureToggle;

/// [SerializeField]
/// @brief Field _tickIcon, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____tickIcon;

/// [SerializeField]
/// @brief Field _crossIcon, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____crossIcon;

/// [SerializeField]
/// @brief Field _guardianManagedLocked, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____guardianManagedLocked;

/// [SerializeField]
/// @brief Field _guardianManagedEnabled, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____guardianManagedEnabled;

/// @brief Field _hasToggle, offset: 0x58, size: 0x1, def value: None
 bool  ____hasToggle;

/// @brief Field _featureName, offset: 0x60, size: 0x8, def value: None
 ::StringW  ____featureName;

/// @brief Field _permissionName, offset: 0x68, size: 0x8, def value: None
 ::StringW  ____permissionName;

/// @brief Field _enabledTextStr, offset: 0x70, size: 0x8, def value: None
 ::StringW  ____enabledTextStr;

/// @brief Field _disabledTextStr, offset: 0x78, size: 0x8, def value: None
 ::StringW  ____disabledTextStr;

/// @brief Field _featureType, offset: 0x80, size: 0x4, def value: None
 ::GlobalNamespace::EKIDFeatures  ____featureType;

/// @brief Field _onChangeCallback, offset: 0x88, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::EKIDFeatures>*  ____onChangeCallback;

/// @brief Field _feature, offset: 0x90, size: 0x30, def value: None
 ::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup  ____feature;

/// [CompilerGenerated]
/// @brief Field <AlwaysCheckFeatureSetting>k__BackingField, offset: 0xc0, size: 0x1, def value: None
 bool  ____AlwaysCheckFeatureSetting_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUIFeatureSetting, ____featureNameTxt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIFeatureSetting, ____featureStatusTxt) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIFeatureSetting, ____featureToggle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIFeatureSetting, ____tickIcon) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIFeatureSetting, ____crossIcon) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIFeatureSetting, ____guardianManagedLocked) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIFeatureSetting, ____guardianManagedEnabled) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIFeatureSetting, ____hasToggle) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIFeatureSetting, ____featureName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIFeatureSetting, ____permissionName) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIFeatureSetting, ____enabledTextStr) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIFeatureSetting, ____disabledTextStr) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIFeatureSetting, ____featureType) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIFeatureSetting, ____onChangeCallback) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIFeatureSetting, ____feature) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIFeatureSetting, ____AlwaysCheckFeatureSetting_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUIFeatureSetting) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUIFeatureSetting/<>c
class CORDL_TYPE KIDUIFeatureSetting___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::KIDUIFeatureSetting___c*  __9;

/// @brief Field <>9__37_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__37_0, put=setStaticF___9__37_0)) ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::BaseEventData*>*  __9__37_0;

static inline ::GlobalNamespace::KIDUIFeatureSetting___c* New_ctor() ;

/// @brief Method <AddDeniedSoundHandler>b__37_0, addr 0x5a49a1c, size 0x8c, virtual false, abstract: false, final false
inline void _AddDeniedSoundHandler_b__37_0(::UnityEngine::EventSystems::BaseEventData*  data) ;

/// @brief Method .ctor, addr 0x5a49a14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::KIDUIFeatureSetting___c* getStaticF___9() ;

static inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::BaseEventData*>* getStaticF___9__37_0() ;

static inline void setStaticF___9(::GlobalNamespace::KIDUIFeatureSetting___c*  value) ;

static inline void setStaticF___9__37_0(::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::BaseEventData*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUIFeatureSetting___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUIFeatureSetting___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUIFeatureSetting___c(KIDUIFeatureSetting___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUIFeatureSetting___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUIFeatureSetting___c(KIDUIFeatureSetting___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2986};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::KIDUIFeatureSetting___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
