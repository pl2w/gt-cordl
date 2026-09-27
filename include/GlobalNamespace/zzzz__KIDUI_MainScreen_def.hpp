#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_MainScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EKIDFeatures_def.hpp"
#include "GlobalNamespace/zzzz__EMainScreenStatus_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_Controller_Metrics_ShowReason_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KIDUI_MainScreen)
namespace GlobalNamespace {
struct EGetPermissionsStatus;
}
namespace GlobalNamespace {
struct EKIDFeatures;
}
namespace GlobalNamespace {
struct EMainScreenStatus;
}
namespace GlobalNamespace {
class KIDUIButton;
}
namespace GlobalNamespace {
class KIDUIFeatureSetting;
}
namespace GlobalNamespace {
class KIDUI_AnimatedEllipsis;
}
namespace GlobalNamespace {
struct KIDUI_Controller_Metrics_ShowReason;
}
namespace GlobalNamespace {
struct KIDUI_MainScreen_FeatureToggleSetup;
}
namespace GlobalNamespace {
struct KIDUI_MainScreen__OnAskForPermission_d__52;
}
namespace GlobalNamespace {
struct KIDUI_MainScreen__UpdateAndCheckForMissingPermissions_d__55;
}
namespace GlobalNamespace {
class KIDUI_MainScreen___c;
}
namespace GlobalNamespace {
class KIDUI_MainScreen___c__DisplayClass55_0;
}
namespace GlobalNamespace {
class KIDUI_SendUpgradeEmailScreen;
}
namespace GlobalNamespace {
class KIDUI_SetupScreen;
}
namespace KID::Model {
class Permission;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDUI_MainScreen;
}
namespace GlobalNamespace {
class KIDUI_MainScreen___c;
}
namespace GlobalNamespace {
class KIDUI_MainScreen___c__DisplayClass55_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUI_MainScreen*);
MARK_REF_T(::GlobalNamespace::KIDUI_MainScreen___c*);
MARK_REF_T(::GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_MainScreen*, "", "KIDUI_MainScreen");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_MainScreen___c*, "", "KIDUI_MainScreen/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0*, "", "KIDUI_MainScreen/<>c__DisplayClass55_0");
// Dependencies EKIDFeatures, EMainScreenStatus, KIDUI_Controller::Metrics_ShowReason, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_MainScreen
class CORDL_TYPE KIDUI_MainScreen : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FeatureToggleSetup = ::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup;

using _OnAskForPermission_d__52 = ::GlobalNamespace::KIDUI_MainScreen__OnAskForPermission_d__52;

using _UpdateAndCheckForMissingPermissions_d__55 = ::GlobalNamespace::KIDUI_MainScreen__UpdateAndCheckForMissingPermissions_d__55;

using __c = ::GlobalNamespace::KIDUI_MainScreen___c;

using __c__DisplayClass55_0 = ::GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0;

/// @brief Field ShownSettingsScreen, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_ShownSettingsScreen, put=setStaticF_ShownSettingsScreen)) bool  ShownSettingsScreen;

/// @brief Field _animatedEllipsis, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__animatedEllipsis, put=__cordl_internal_set__animatedEllipsis)) ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>  _animatedEllipsis;

/// @brief Field _customNameEnabled, offset 0xf9, size 0x1 
 __declspec(property(get=__cordl_internal_get__customNameEnabled, put=__cordl_internal_set__customNameEnabled)) bool  _customNameEnabled;

/// @brief Field _declinedStatus, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__declinedStatus, put=__cordl_internal_set__declinedStatus)) ::UnityW<::UnityEngine::GameObject>  _declinedStatus;

/// @brief Field _defaultButtonsContainer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultButtonsContainer, put=__cordl_internal_set__defaultButtonsContainer)) ::UnityW<::UnityEngine::GameObject>  _defaultButtonsContainer;

/// @brief Field _displayOrder, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__displayOrder, put=__cordl_internal_set__displayOrder)) ::ArrayW<::GlobalNamespace::EKIDFeatures>  _displayOrder;

/// @brief Field _emailAddress, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__emailAddress, put=__cordl_internal_set__emailAddress)) ::StringW  _emailAddress;

/// @brief Field _eventSystemObj, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventSystemObj, put=__cordl_internal_set__eventSystemObj)) ::UnityW<::UnityEngine::GameObject>  _eventSystemObj;

/// @brief Field _featurePrefab, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__featurePrefab, put=__cordl_internal_set__featurePrefab)) ::UnityW<::UnityEngine::GameObject>  _featurePrefab;

/// @brief Field _featureRootTransform, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureRootTransform, put=__cordl_internal_set__featureRootTransform)) ::UnityW<::UnityEngine::Transform>  _featureRootTransform;

/// @brief Field _featureSetups, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureSetups, put=__cordl_internal_set__featureSetups)) ::System::Collections::Generic::List_1<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>*  _featureSetups;

/// @brief Field _featuresList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__featuresList, put=setStaticF__featuresList)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EKIDFeatures,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::KIDUIFeatureSetting>>*>*  _featuresList;

/// @brief Field _fullPlayerControlStatus, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__fullPlayerControlStatus, put=__cordl_internal_set__fullPlayerControlStatus)) ::UnityW<::UnityEngine::GameObject>  _fullPlayerControlStatus;

/// @brief Field _getPermissionsButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__getPermissionsButton, put=__cordl_internal_set__getPermissionsButton)) ::UnityW<::GlobalNamespace::KIDUIButton>  _getPermissionsButton;

/// @brief Field _gettingPermissionsButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__gettingPermissionsButton, put=__cordl_internal_set__gettingPermissionsButton)) ::UnityW<::GlobalNamespace::KIDUIButton>  _gettingPermissionsButton;

/// @brief Field _hasAllPermissions, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasAllPermissions, put=__cordl_internal_set__hasAllPermissions)) bool  _hasAllPermissions;

/// @brief Field _initialised, offset 0xfb, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialised, put=__cordl_internal_set__initialised)) bool  _initialised;

/// @brief Field _kidScreensGroup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__kidScreensGroup, put=__cordl_internal_set__kidScreensGroup)) ::UnityW<::UnityEngine::GameObject>  _kidScreensGroup;

/// @brief Field _mainScreenOpenedReason, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get__mainScreenOpenedReason, put=__cordl_internal_set__mainScreenOpenedReason)) ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason  _mainScreenOpenedReason;

/// @brief Field _missingStatus, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__missingStatus, put=__cordl_internal_set__missingStatus)) ::UnityW<::UnityEngine::GameObject>  _missingStatus;

/// @brief Field _multiplayerEnabled, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get__multiplayerEnabled, put=__cordl_internal_set__multiplayerEnabled)) bool  _multiplayerEnabled;

/// @brief Field _pendingStatus, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__pendingStatus, put=__cordl_internal_set__pendingStatus)) ::UnityW<::UnityEngine::GameObject>  _pendingStatus;

/// @brief Field _permissionsRequestedButtonContainer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__permissionsRequestedButtonContainer, put=__cordl_internal_set__permissionsRequestedButtonContainer)) ::UnityW<::UnityEngine::GameObject>  _permissionsRequestedButtonContainer;

/// @brief Field _permissionsRequestingButtonContainer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__permissionsRequestingButtonContainer, put=__cordl_internal_set__permissionsRequestingButtonContainer)) ::UnityW<::UnityEngine::GameObject>  _permissionsRequestingButtonContainer;

/// @brief Field _permissionsTip, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__permissionsTip, put=__cordl_internal_set__permissionsTip)) ::UnityW<::UnityEngine::GameObject>  _permissionsTip;

/// @brief Field _requestPermissionsButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__requestPermissionsButton, put=__cordl_internal_set__requestPermissionsButton)) ::UnityW<::GlobalNamespace::KIDUIButton>  _requestPermissionsButton;

/// @brief Field _screenStatus, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get__screenStatus, put=__cordl_internal_set__screenStatus)) ::GlobalNamespace::EMainScreenStatus  _screenStatus;

/// @brief Field _sendUpgradeEmailScreen, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__sendUpgradeEmailScreen, put=__cordl_internal_set__sendUpgradeEmailScreen)) ::UnityW<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen>  _sendUpgradeEmailScreen;

/// @brief Field _setupKidScreen, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__setupKidScreen, put=__cordl_internal_set__setupKidScreen)) ::UnityW<::GlobalNamespace::KIDUI_SetupScreen>  _setupKidScreen;

/// @brief Field _setupRequiredStatus, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__setupRequiredStatus, put=__cordl_internal_set__setupRequiredStatus)) ::UnityW<::UnityEngine::GameObject>  _setupRequiredStatus;

/// @brief Field _timeoutStatus, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeoutStatus, put=__cordl_internal_set__timeoutStatus)) ::UnityW<::UnityEngine::GameObject>  _timeoutStatus;

/// @brief Field _titleFeaturePermissions, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__titleFeaturePermissions, put=__cordl_internal_set__titleFeaturePermissions)) ::UnityW<::UnityEngine::GameObject>  _titleFeaturePermissions;

/// @brief Field _titleGameFeatures, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__titleGameFeatures, put=__cordl_internal_set__titleGameFeatures)) ::UnityW<::UnityEngine::GameObject>  _titleGameFeatures;

/// @brief Field _updatedStatus, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__updatedStatus, put=__cordl_internal_set__updatedStatus)) ::UnityW<::UnityEngine::GameObject>  _updatedStatus;

/// @brief Field _voiceChatEnabled, offset 0xfa, size 0x1 
 __declspec(property(get=__cordl_internal_get__voiceChatEnabled, put=__cordl_internal_set__voiceChatEnabled)) bool  _voiceChatEnabled;

/// @brief Field _voiceChatLabel, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__voiceChatLabel, put=__cordl_internal_set__voiceChatLabel)) ::UnityW<::UnityEngine::GameObject>  _voiceChatLabel;

/// @brief Method Awake, addr 0x5a56768, size 0x194, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CollectPermissionsToUpgrade, addr 0x5a59298, size 0x1ec, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* CollectPermissionsToUpgrade() ;

/// @brief Method ConfigurePermissionsButtons, addr 0x5a57d44, size 0x220, virtual false, abstract: false, final false
inline void ConfigurePermissionsButtons() ;

/// @brief Method ConstructAdditionalSetup, addr 0x5a579f4, size 0x4, virtual false, abstract: false, final false
inline void ConstructAdditionalSetup(::GlobalNamespace::EKIDFeatures  feature, ::UnityEngine::GameObject*  featureObject) ;

/// @brief Method ConstructFeatureSettings, addr 0x5a57308, size 0x12c, virtual false, abstract: false, final false
inline void ConstructFeatureSettings() ;

/// @brief Method CreateNewFeatureDisplay, addr 0x5a57434, size 0x5c0, virtual false, abstract: false, final false
inline void CreateNewFeatureDisplay(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup  setup) ;

/// @brief Method GetActiveStatusObject, addr 0x5a57f64, size 0x3a8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetActiveStatusObject() ;

/// @brief Method GetFeatureListingCount, addr 0x5a554b0, size 0x190, virtual false, abstract: false, final false
inline int32_t GetFeatureListingCount() ;

/// @brief Method GetPermissionState, addr 0x5a5830c, size 0x150, virtual false, abstract: false, final false
static inline ::GlobalNamespace::EGetPermissionsStatus GetPermissionState() ;

/// @brief Method HideMainScreen, addr 0x5a53cb0, size 0x24, virtual false, abstract: false, final false
inline void HideMainScreen() ;

/// @brief Method InitialiseMainScreen, addr 0x5a55390, size 0x120, virtual false, abstract: false, final false
inline void InitialiseMainScreen() ;

/// @brief Method IsFeatureToggledOn, addr 0x5a57b34, size 0x210, virtual false, abstract: false, final false
inline bool IsFeatureToggledOn(::GlobalNamespace::EKIDFeatures  permissionFeature) ;

static inline ::GlobalNamespace::KIDUI_MainScreen* New_ctor() ;

/// [AsyncStateMachine(typeof(KIDUI_MainScreen::<OnAskForPermission>d__52))]
/// @brief Method OnAskForPermission, addr 0x5a5845c, size 0xa8, virtual false, abstract: false, final false
inline void OnAskForPermission() ;

/// @brief Method OnConfirmedEmailAddress, addr 0x5a52de8, size 0x110, virtual false, abstract: false, final false
inline void OnConfirmedEmailAddress(::StringW  emailAddress) ;

/// @brief Method OnCustomNametagsToggled, addr 0x5a599bc, size 0xdc, virtual false, abstract: false, final false
inline void OnCustomNametagsToggled() ;

/// @brief Method OnDestroy, addr 0x5a57304, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5a571e8, size 0x11c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5a568fc, size 0x114, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnFeatureToggleChanged, addr 0x5a59484, size 0x1c8, virtual false, abstract: false, final false
inline void OnFeatureToggleChanged(::GlobalNamespace::EKIDFeatures  feature) ;

/// @brief Method OnGroupToggleChanged, addr 0x5a59804, size 0xdc, virtual false, abstract: false, final false
inline void OnGroupToggleChanged() ;

/// @brief Method OnLanguageChanged, addr 0x5a59064, size 0x234, virtual false, abstract: false, final false
inline void OnLanguageChanged() ;

/// @brief Method OnModToggleChanged, addr 0x5a598e0, size 0xdc, virtual false, abstract: false, final false
inline void OnModToggleChanged() ;

/// @brief Method OnMultiplayerToggled, addr 0x5a5964c, size 0xdc, virtual false, abstract: false, final false
inline void OnMultiplayerToggled() ;

/// @brief Method OnSaveAndExit, addr 0x5a58504, size 0x8b0, virtual false, abstract: false, final false
inline void OnSaveAndExit() ;

/// @brief Method OnVoiceChatToggled, addr 0x5a59728, size 0xdc, virtual false, abstract: false, final false
inline void OnVoiceChatToggled() ;

/// @brief Method SetButtonContainersVisibility, addr 0x5a579f8, size 0x13c, virtual false, abstract: false, final false
inline void SetButtonContainersVisibility(::GlobalNamespace::EGetPermissionsStatus  permissionStatus) ;

/// @brief Method ShowMainScreen, addr 0x5a5644c, size 0xa0, virtual false, abstract: false, final false
inline void ShowMainScreen(::GlobalNamespace::EMainScreenStatus  showStatus) ;

/// @brief Method ShowMainScreen, addr 0x5a55e40, size 0x4e4, virtual false, abstract: false, final false
inline void ShowMainScreen(::GlobalNamespace::EMainScreenStatus  showStatus, ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason  reason) ;

/// [AsyncStateMachine(typeof(KIDUI_MainScreen::<UpdateAndCheckForMissingPermissions>d__55))]
/// @brief Method UpdateAndCheckForMissingPermissions, addr 0x5a58f58, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* UpdateAndCheckForMissingPermissions() ;

/// @brief Method UpdateOptInSetting, addr 0x5a58db4, size 0x1a4, virtual false, abstract: false, final false
inline void UpdateOptInSetting(::KID::Model::Permission*  permissionData, ::GlobalNamespace::EKIDFeatures  feature, ::System::Action_3<bool,::KID::Model::Permission*,bool>*  onOptedIn) ;

/// @brief Method UpdatePermissionsAndFeaturesScreen, addr 0x5a56a10, size 0x7d8, virtual false, abstract: false, final false
inline void UpdatePermissionsAndFeaturesScreen() ;

/// @brief Method UpdateScreenStatus, addr 0x5a53f00, size 0x6e0, virtual false, abstract: false, final false
inline void UpdateScreenStatus(::GlobalNamespace::EMainScreenStatus  showStatus, bool  sendMetrics) ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis> const& __cordl_internal_get__animatedEllipsis() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>& __cordl_internal_get__animatedEllipsis() ;

constexpr bool const& __cordl_internal_get__customNameEnabled() const;

constexpr bool& __cordl_internal_get__customNameEnabled() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__declinedStatus() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__declinedStatus() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__defaultButtonsContainer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__defaultButtonsContainer() ;

constexpr ::ArrayW<::GlobalNamespace::EKIDFeatures> const& __cordl_internal_get__displayOrder() const;

constexpr ::ArrayW<::GlobalNamespace::EKIDFeatures>& __cordl_internal_get__displayOrder() ;

constexpr ::StringW const& __cordl_internal_get__emailAddress() const;

constexpr ::StringW& __cordl_internal_get__emailAddress() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__eventSystemObj() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__eventSystemObj() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__featurePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__featurePrefab() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__featureRootTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__featureRootTransform() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>* const& __cordl_internal_get__featureSetups() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>*& __cordl_internal_get__featureSetups() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__fullPlayerControlStatus() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__fullPlayerControlStatus() ;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& __cordl_internal_get__getPermissionsButton() const;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& __cordl_internal_get__getPermissionsButton() ;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& __cordl_internal_get__gettingPermissionsButton() const;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& __cordl_internal_get__gettingPermissionsButton() ;

constexpr bool const& __cordl_internal_get__hasAllPermissions() const;

constexpr bool& __cordl_internal_get__hasAllPermissions() ;

constexpr bool const& __cordl_internal_get__initialised() const;

constexpr bool& __cordl_internal_get__initialised() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__kidScreensGroup() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__kidScreensGroup() ;

constexpr ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason const& __cordl_internal_get__mainScreenOpenedReason() const;

constexpr ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason& __cordl_internal_get__mainScreenOpenedReason() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__missingStatus() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__missingStatus() ;

constexpr bool const& __cordl_internal_get__multiplayerEnabled() const;

constexpr bool& __cordl_internal_get__multiplayerEnabled() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__pendingStatus() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__pendingStatus() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__permissionsRequestedButtonContainer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__permissionsRequestedButtonContainer() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__permissionsRequestingButtonContainer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__permissionsRequestingButtonContainer() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__permissionsTip() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__permissionsTip() ;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& __cordl_internal_get__requestPermissionsButton() const;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& __cordl_internal_get__requestPermissionsButton() ;

constexpr ::GlobalNamespace::EMainScreenStatus const& __cordl_internal_get__screenStatus() const;

constexpr ::GlobalNamespace::EMainScreenStatus& __cordl_internal_get__screenStatus() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen> const& __cordl_internal_get__sendUpgradeEmailScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen>& __cordl_internal_get__sendUpgradeEmailScreen() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_SetupScreen> const& __cordl_internal_get__setupKidScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_SetupScreen>& __cordl_internal_get__setupKidScreen() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__setupRequiredStatus() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__setupRequiredStatus() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__timeoutStatus() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__timeoutStatus() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__titleFeaturePermissions() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__titleFeaturePermissions() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__titleGameFeatures() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__titleGameFeatures() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__updatedStatus() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__updatedStatus() ;

constexpr bool const& __cordl_internal_get__voiceChatEnabled() const;

constexpr bool& __cordl_internal_get__voiceChatEnabled() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__voiceChatLabel() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__voiceChatLabel() ;

constexpr void __cordl_internal_set__animatedEllipsis(::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>  value) ;

constexpr void __cordl_internal_set__customNameEnabled(bool  value) ;

constexpr void __cordl_internal_set__declinedStatus(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__defaultButtonsContainer(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__displayOrder(::ArrayW<::GlobalNamespace::EKIDFeatures>  value) ;

constexpr void __cordl_internal_set__emailAddress(::StringW  value) ;

constexpr void __cordl_internal_set__eventSystemObj(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__featurePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__featureRootTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__featureSetups(::System::Collections::Generic::List_1<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>*  value) ;

constexpr void __cordl_internal_set__fullPlayerControlStatus(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__getPermissionsButton(::UnityW<::GlobalNamespace::KIDUIButton>  value) ;

constexpr void __cordl_internal_set__gettingPermissionsButton(::UnityW<::GlobalNamespace::KIDUIButton>  value) ;

constexpr void __cordl_internal_set__hasAllPermissions(bool  value) ;

constexpr void __cordl_internal_set__initialised(bool  value) ;

constexpr void __cordl_internal_set__kidScreensGroup(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__mainScreenOpenedReason(::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason  value) ;

constexpr void __cordl_internal_set__missingStatus(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__multiplayerEnabled(bool  value) ;

constexpr void __cordl_internal_set__pendingStatus(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__permissionsRequestedButtonContainer(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__permissionsRequestingButtonContainer(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__permissionsTip(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__requestPermissionsButton(::UnityW<::GlobalNamespace::KIDUIButton>  value) ;

constexpr void __cordl_internal_set__screenStatus(::GlobalNamespace::EMainScreenStatus  value) ;

constexpr void __cordl_internal_set__sendUpgradeEmailScreen(::UnityW<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen>  value) ;

constexpr void __cordl_internal_set__setupKidScreen(::UnityW<::GlobalNamespace::KIDUI_SetupScreen>  value) ;

constexpr void __cordl_internal_set__setupRequiredStatus(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__timeoutStatus(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__titleFeaturePermissions(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__titleGameFeatures(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__updatedStatus(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__voiceChatEnabled(bool  value) ;

constexpr void __cordl_internal_set__voiceChatLabel(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5a59a98, size 0xb8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_ShownSettingsScreen() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EKIDFeatures,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::KIDUIFeatureSetting>>*>* getStaticF__featuresList() ;

static inline void setStaticF_ShownSettingsScreen(bool  value) ;

static inline void setStaticF__featuresList(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EKIDFeatures,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::KIDUIFeatureSetting>>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_MainScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_MainScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_MainScreen(KIDUI_MainScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_MainScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_MainScreen(KIDUI_MainScreen const& ) = delete;

/// @brief Field OPT_IN_SUFFIX offset 0xffffffff size 0x8
static constexpr ::ConstString  OPT_IN_SUFFIX{u"-opt-in"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3034};

/// [SerializeField]
/// @brief Field _kidScreensGroup, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____kidScreensGroup;

/// [SerializeField]
/// @brief Field _setupKidScreen, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_SetupScreen>  ____setupKidScreen;

/// [SerializeField]
/// @brief Field _sendUpgradeEmailScreen, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen>  ____sendUpgradeEmailScreen;

/// [SerializeField]
/// @brief Field _animatedEllipsis, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>  ____animatedEllipsis;

/// [Header("Permission Request Buttons")]
/// [SerializeField]
/// @brief Field _getPermissionsButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUIButton>  ____getPermissionsButton;

/// [SerializeField]
/// @brief Field _gettingPermissionsButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUIButton>  ____gettingPermissionsButton;

/// [SerializeField]
/// @brief Field _requestPermissionsButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUIButton>  ____requestPermissionsButton;

/// [SerializeField]
/// @brief Field _defaultButtonsContainer, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____defaultButtonsContainer;

/// [SerializeField]
/// @brief Field _permissionsRequestingButtonContainer, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____permissionsRequestingButtonContainer;

/// [SerializeField]
/// @brief Field _permissionsRequestedButtonContainer, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____permissionsRequestedButtonContainer;

/// @brief Field _hasAllPermissions, offset: 0x70, size: 0x1, def value: None
 bool  ____hasAllPermissions;

/// [Header("Dynamic Feature Settings Setup")]
/// [SerializeField]
/// @brief Field _featurePrefab, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____featurePrefab;

/// [SerializeField]
/// @brief Field _featureRootTransform, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____featureRootTransform;

/// [SerializeField]
/// @brief Field _displayOrder, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::EKIDFeatures>  ____displayOrder;

/// [SerializeField]
/// @brief Field _featureSetups, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>*  ____featureSetups;

/// [Header("Additional Feature-Specific Setup")]
/// [SerializeField]
/// @brief Field _voiceChatLabel, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____voiceChatLabel;

/// [Header("Hide Permissions Tip")]
/// [SerializeField]
/// @brief Field _permissionsTip, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____permissionsTip;

/// [Header("Titles")]
/// [SerializeField]
/// @brief Field _titleFeaturePermissions, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____titleFeaturePermissions;

/// [SerializeField]
/// @brief Field _titleGameFeatures, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____titleGameFeatures;

/// [Header("Game Status Setup")]
/// [SerializeField]
/// @brief Field _missingStatus, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____missingStatus;

/// [SerializeField]
/// @brief Field _updatedStatus, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____updatedStatus;

/// [SerializeField]
/// @brief Field _declinedStatus, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____declinedStatus;

/// [SerializeField]
/// @brief Field _pendingStatus, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____pendingStatus;

/// [SerializeField]
/// @brief Field _timeoutStatus, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____timeoutStatus;

/// [SerializeField]
/// @brief Field _setupRequiredStatus, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____setupRequiredStatus;

/// [SerializeField]
/// @brief Field _fullPlayerControlStatus, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____fullPlayerControlStatus;

/// @brief Field _emailAddress, offset: 0xf0, size: 0x8, def value: None
 ::StringW  ____emailAddress;

/// @brief Field _multiplayerEnabled, offset: 0xf8, size: 0x1, def value: None
 bool  ____multiplayerEnabled;

/// @brief Field _customNameEnabled, offset: 0xf9, size: 0x1, def value: None
 bool  ____customNameEnabled;

/// @brief Field _voiceChatEnabled, offset: 0xfa, size: 0x1, def value: None
 bool  ____voiceChatEnabled;

/// @brief Field _initialised, offset: 0xfb, size: 0x1, def value: None
 bool  ____initialised;

/// @brief Field _mainScreenOpenedReason, offset: 0xfc, size: 0x4, def value: None
 ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason  ____mainScreenOpenedReason;

/// @brief Field _screenStatus, offset: 0x100, size: 0x4, def value: None
 ::GlobalNamespace::EMainScreenStatus  ____screenStatus;

/// @brief Field _eventSystemObj, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____eventSystemObj;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____kidScreensGroup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____setupKidScreen) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____sendUpgradeEmailScreen) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____animatedEllipsis) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____getPermissionsButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____gettingPermissionsButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____requestPermissionsButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____defaultButtonsContainer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____permissionsRequestingButtonContainer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____permissionsRequestedButtonContainer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____hasAllPermissions) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____featurePrefab) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____featureRootTransform) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____displayOrder) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____featureSetups) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____voiceChatLabel) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____permissionsTip) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____titleFeaturePermissions) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____titleGameFeatures) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____missingStatus) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____updatedStatus) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____declinedStatus) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____pendingStatus) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____timeoutStatus) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____setupRequiredStatus) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____fullPlayerControlStatus) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____emailAddress) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____multiplayerEnabled) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____customNameEnabled) == 0xf9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____voiceChatEnabled) == 0xfa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____initialised) == 0xfb, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____mainScreenOpenedReason) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____screenStatus) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen, ____eventSystemObj) == 0x108, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_MainScreen) == 0x110, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_MainScreen/<>c__DisplayClass55_0
class CORDL_TYPE KIDUI_MainScreen___c__DisplayClass55_0 : public ::System::Object {
public:
// Declarations
/// @brief Field hasUpdated, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasUpdated, put=__cordl_internal_set_hasUpdated)) bool  hasUpdated;

/// @brief Field wasSuccess, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasSuccess, put=__cordl_internal_set_wasSuccess)) bool  wasSuccess;

static inline ::GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0* New_ctor() ;

/// @brief Method <UpdateAndCheckForMissingPermissions>b__0, addr 0x5a59dc8, size 0x10, virtual false, abstract: false, final false
inline void _UpdateAndCheckForMissingPermissions_b__0(bool  success) ;

constexpr bool const& __cordl_internal_get_hasUpdated() const;

constexpr bool& __cordl_internal_get_hasUpdated() ;

constexpr bool const& __cordl_internal_get_wasSuccess() const;

constexpr bool& __cordl_internal_get_wasSuccess() ;

constexpr void __cordl_internal_set_hasUpdated(bool  value) ;

constexpr void __cordl_internal_set_wasSuccess(bool  value) ;

/// @brief Method .ctor, addr 0x5a59dc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_MainScreen___c__DisplayClass55_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_MainScreen___c__DisplayClass55_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_MainScreen___c__DisplayClass55_0(KIDUI_MainScreen___c__DisplayClass55_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_MainScreen___c__DisplayClass55_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_MainScreen___c__DisplayClass55_0(KIDUI_MainScreen___c__DisplayClass55_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3031};

/// @brief Field hasUpdated, offset: 0x10, size: 0x1, def value: None
 bool  ___hasUpdated;

/// @brief Field wasSuccess, offset: 0x11, size: 0x1, def value: None
 bool  ___wasSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0, ___hasUpdated) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0, ___wasSuccess) == 0x11, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_MainScreen/<>c
class CORDL_TYPE KIDUI_MainScreen___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::KIDUI_MainScreen___c*  __9;

/// @brief Field <>9__53_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__53_0, put=setStaticF___9__53_0)) ::System::Action_3<bool,::KID::Model::Permission*,bool>*  __9__53_0;

/// @brief Field <>9__53_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__53_1, put=setStaticF___9__53_1)) ::System::Action_3<bool,::KID::Model::Permission*,bool>*  __9__53_1;

/// @brief Field <>9__59_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__59_0, put=setStaticF___9__59_0)) ::System::Func_2<::KID::Model::Permission*,bool>*  __9__59_0;

/// @brief Field <>9__59_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__59_1, put=setStaticF___9__59_1)) ::System::Func_2<::KID::Model::Permission*,::StringW>*  __9__59_1;

static inline ::GlobalNamespace::KIDUI_MainScreen___c* New_ctor() ;

/// @brief Method <CollectPermissionsToUpgrade>b__59_0, addr 0x5a59d7c, size 0x30, virtual false, abstract: false, final false
inline bool _CollectPermissionsToUpgrade_b__59_0(::KID::Model::Permission*  permission) ;

/// @brief Method <CollectPermissionsToUpgrade>b__59_1, addr 0x5a59dac, size 0x14, virtual false, abstract: false, final false
inline ::StringW _CollectPermissionsToUpgrade_b__59_1(::KID::Model::Permission*  permission) ;

/// @brief Method <OnSaveAndExit>b__53_0, addr 0x5a59c5c, size 0x90, virtual false, abstract: false, final false
inline void _OnSaveAndExit_b__53_0(bool  b, ::KID::Model::Permission*  p, bool  hasOptedInPreviously) ;

/// @brief Method <OnSaveAndExit>b__53_1, addr 0x5a59cec, size 0x90, virtual false, abstract: false, final false
inline void _OnSaveAndExit_b__53_1(bool  b, ::KID::Model::Permission*  p, bool  hasOptedInPreviously) ;

/// @brief Method .ctor, addr 0x5a59c54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::KIDUI_MainScreen___c* getStaticF___9() ;

static inline ::System::Action_3<bool,::KID::Model::Permission*,bool>* getStaticF___9__53_0() ;

static inline ::System::Action_3<bool,::KID::Model::Permission*,bool>* getStaticF___9__53_1() ;

static inline ::System::Func_2<::KID::Model::Permission*,bool>* getStaticF___9__59_0() ;

static inline ::System::Func_2<::KID::Model::Permission*,::StringW>* getStaticF___9__59_1() ;

static inline void setStaticF___9(::GlobalNamespace::KIDUI_MainScreen___c*  value) ;

static inline void setStaticF___9__53_0(::System::Action_3<bool,::KID::Model::Permission*,bool>*  value) ;

static inline void setStaticF___9__53_1(::System::Action_3<bool,::KID::Model::Permission*,bool>*  value) ;

static inline void setStaticF___9__59_0(::System::Func_2<::KID::Model::Permission*,bool>*  value) ;

static inline void setStaticF___9__59_1(::System::Func_2<::KID::Model::Permission*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_MainScreen___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_MainScreen___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_MainScreen___c(KIDUI_MainScreen___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_MainScreen___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_MainScreen___c(KIDUI_MainScreen___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3030};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::KIDUI_MainScreen___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
