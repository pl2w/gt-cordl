#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_Controller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__KIDUI_Controller_Metrics_ShowReason_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(KIDUI_Controller)
namespace GlobalNamespace {
struct EKIDFeatures;
}
namespace GlobalNamespace {
struct EMainScreenStatus;
}
namespace GlobalNamespace {
class KIDUI_ConfirmScreen;
}
namespace GlobalNamespace {
struct KIDUI_Controller_Metrics_ShowReason;
}
namespace GlobalNamespace {
struct KIDUI_Controller__ShouldShowKIDScreen_d__25;
}
namespace GlobalNamespace {
struct KIDUI_Controller__StartKIDScreens_d__20;
}
namespace GlobalNamespace {
class KIDUI_MainScreen;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDUI_Controller;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUI_Controller*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_Controller*, "", "KIDUI_Controller");
// Dependencies KIDUI_Controller::Metrics_ShowReason, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_Controller
class CORDL_TYPE KIDUI_Controller : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Metrics_ShowReason = ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason;

using _ShouldShowKIDScreen_d__25 = ::GlobalNamespace::KIDUI_Controller__ShouldShowKIDScreen_d__25;

using _StartKIDScreens_d__20 = ::GlobalNamespace::KIDUI_Controller__StartKIDScreens_d__20;

/// @brief Field _PermissionsWithToggles, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__PermissionsWithToggles, put=__cordl_internal_set__PermissionsWithToggles)) ::System::Collections::Generic::List_1<::StringW>*  _PermissionsWithToggles;

/// @brief Field _confirmScreen, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__confirmScreen, put=__cordl_internal_set__confirmScreen)) ::UnityW<::GlobalNamespace::KIDUI_ConfirmScreen>  _confirmScreen;

/// @brief Field _inaccessibleSettings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__inaccessibleSettings, put=__cordl_internal_set__inaccessibleSettings)) ::System::Collections::Generic::List_1<::GlobalNamespace::EKIDFeatures>*  _inaccessibleSettings;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::KIDUI_Controller>  _instance;

/// @brief Field _isKidUIActive, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__isKidUIActive, put=__cordl_internal_set__isKidUIActive)) bool  _isKidUIActive;

/// @brief Field _lastEtagOnClose, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastEtagOnClose, put=__cordl_internal_set__lastEtagOnClose)) ::StringW  _lastEtagOnClose;

/// @brief Field _mainKIDScreen, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__mainKIDScreen, put=__cordl_internal_set__mainKIDScreen)) ::UnityW<::GlobalNamespace::KIDUI_MainScreen>  _mainKIDScreen;

/// @brief Field _showReason, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__showReason, put=__cordl_internal_set__showReason)) ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason  _showReason;

/// @brief Field etagOnCloseBlackScreenPlayerPrefStr, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_etagOnCloseBlackScreenPlayerPrefStr, put=setStaticF_etagOnCloseBlackScreenPlayerPrefStr)) ::StringW  etagOnCloseBlackScreenPlayerPrefStr;

/// @brief Method Awake, addr 0x5a536c0, size 0x118, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CloseKIDScreens, addr 0x5a539cc, size 0x19c, virtual false, abstract: false, final false
inline void CloseKIDScreens() ;

/// @brief Method GetLastBlackScreenEtag, addr 0x5a54920, size 0x48, virtual false, abstract: false, final false
inline ::StringW GetLastBlackScreenEtag() ;

/// @brief Method GetScreenStatusFromSession, addr 0x5a53d04, size 0x1fc, virtual false, abstract: false, final false
inline ::GlobalNamespace::EMainScreenStatus GetScreenStatusFromSession() ;

static inline ::GlobalNamespace::KIDUI_Controller* New_ctor() ;

/// @brief Method NotifyOfEmailResult, addr 0x5a545e0, size 0x154, virtual false, abstract: false, final false
inline void NotifyOfEmailResult(bool  success) ;

/// @brief Method OnDestroy, addr 0x5a537d8, size 0x100, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5a54968, size 0x28, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method SaveEtagOnCloseScreen, addr 0x5a53b68, size 0x148, virtual false, abstract: false, final false
inline void SaveEtagOnCloseScreen() ;

/// [AsyncStateMachine(typeof(KIDUI_Controller::<ShouldShowKIDScreen>d__25))]
/// @brief Method ShouldShowKIDScreen, addr 0x5a54800, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* ShouldShowKIDScreen(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ShouldShowScreenOnPermissionChange, addr 0x5a54734, size 0xcc, virtual false, abstract: false, final false
inline bool ShouldShowScreenOnPermissionChange() ;

/// [AsyncStateMachine(typeof(KIDUI_Controller::<StartKIDScreens>d__20))]
/// @brief Method StartKIDScreens, addr 0x5a538d8, size 0xf4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* StartKIDScreens(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method UpdateScreenStatus, addr 0x5a53cd4, size 0x30, virtual false, abstract: false, final false
inline void UpdateScreenStatus() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__PermissionsWithToggles() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__PermissionsWithToggles() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_ConfirmScreen> const& __cordl_internal_get__confirmScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_ConfirmScreen>& __cordl_internal_get__confirmScreen() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::EKIDFeatures>* const& __cordl_internal_get__inaccessibleSettings() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::EKIDFeatures>*& __cordl_internal_get__inaccessibleSettings() ;

constexpr bool const& __cordl_internal_get__isKidUIActive() const;

constexpr bool& __cordl_internal_get__isKidUIActive() ;

constexpr ::StringW const& __cordl_internal_get__lastEtagOnClose() const;

constexpr ::StringW& __cordl_internal_get__lastEtagOnClose() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen> const& __cordl_internal_get__mainKIDScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen>& __cordl_internal_get__mainKIDScreen() ;

constexpr ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason const& __cordl_internal_get__showReason() const;

constexpr ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason& __cordl_internal_get__showReason() ;

constexpr void __cordl_internal_set__PermissionsWithToggles(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__confirmScreen(::UnityW<::GlobalNamespace::KIDUI_ConfirmScreen>  value) ;

constexpr void __cordl_internal_set__inaccessibleSettings(::System::Collections::Generic::List_1<::GlobalNamespace::EKIDFeatures>*  value) ;

constexpr void __cordl_internal_set__isKidUIActive(bool  value) ;

constexpr void __cordl_internal_set__lastEtagOnClose(::StringW  value) ;

constexpr void __cordl_internal_set__mainKIDScreen(::UnityW<::GlobalNamespace::KIDUI_MainScreen>  value) ;

constexpr void __cordl_internal_set__showReason(::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason  value) ;

/// @brief Method .ctor, addr 0x5a54990, size 0x1b0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::KIDUI_Controller> getStaticF__instance() ;

static inline ::StringW getStaticF_etagOnCloseBlackScreenPlayerPrefStr() ;

/// @brief Method get_EtagOnCloseBlackScreenPlayerPrefRef, addr 0x5a535f8, size 0xc8, virtual false, abstract: false, final false
static inline ::StringW get_EtagOnCloseBlackScreenPlayerPrefRef() ;

/// @brief Method get_Instance, addr 0x5a534d8, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::KIDUI_Controller> get_Instance() ;

/// @brief Method get_IsKIDUIActive, addr 0x5a53520, size 0xd8, virtual false, abstract: false, final false
static inline bool get_IsKIDUIActive() ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::KIDUI_Controller>  value) ;

static inline void setStaticF_etagOnCloseBlackScreenPlayerPrefStr(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_Controller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_Controller", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_Controller(KIDUI_Controller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_Controller", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_Controller(KIDUI_Controller const& ) = delete;

/// @brief Field CLOSE_BLACK_SCREEN_ETAG_PLAYER_PREF_PREFIX offset 0xffffffff size 0x8
static constexpr ::ConstString  CLOSE_BLACK_SCREEN_ETAG_PLAYER_PREF_PREFIX{u"closeBlackScreen-"};

/// @brief Field FIRST_TIME_POST_CHANGE_PLAYER_PREF offset 0xffffffff size 0x8
static constexpr ::ConstString  FIRST_TIME_POST_CHANGE_PLAYER_PREF{u"hasShownFirstTimePostChange-"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3024};

/// [SerializeField]
/// @brief Field _mainKIDScreen, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_MainScreen>  ____mainKIDScreen;

/// [SerializeField]
/// @brief Field _confirmScreen, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_ConfirmScreen>  ____confirmScreen;

/// [SerializeField]
/// @brief Field _PermissionsWithToggles, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____PermissionsWithToggles;

/// [SerializeField]
/// @brief Field _inaccessibleSettings, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::EKIDFeatures>*  ____inaccessibleSettings;

/// @brief Field _showReason, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason  ____showReason;

/// @brief Field _isKidUIActive, offset: 0x44, size: 0x1, def value: None
 bool  ____isKidUIActive;

/// @brief Field _lastEtagOnClose, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____lastEtagOnClose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_Controller, ____mainKIDScreen) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_Controller, ____confirmScreen) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_Controller, ____PermissionsWithToggles) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_Controller, ____inaccessibleSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_Controller, ____showReason) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_Controller, ____isKidUIActive) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_Controller, ____lastEtagOnClose) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_Controller) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
