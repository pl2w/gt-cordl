#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIOManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ModIOManager)
namespace GlobalNamespace {
class AssociateMotherhsipAndModIOAccountsRequest;
}
namespace GlobalNamespace {
class AssociateMotherhsipAndModIOAccountsResponse;
}
namespace GlobalNamespace {
struct ModIOManager_ModIOAuthMethod;
}
namespace GlobalNamespace {
struct ModIOManager__AddFavorite_d__69;
}
namespace GlobalNamespace {
class ModIOManager__AssociateMothershipAndModIOAccounts_d__114;
}
namespace GlobalNamespace {
struct ModIOManager__ContinuePlatformLogin_d__95;
}
namespace GlobalNamespace {
struct ModIOManager__DownloadMod_d__109;
}
namespace GlobalNamespace {
struct ModIOManager__GetFavoriteMods_d__68;
}
namespace GlobalNamespace {
struct ModIOManager__GetFeaturedMaps_d__52;
}
namespace GlobalNamespace {
struct ModIOManager__GetInstalledMods_d__72;
}
namespace GlobalNamespace {
struct ModIOManager__GetModLogo_d__78;
}
namespace GlobalNamespace {
struct ModIOManager__GetModStatus_d__108;
}
namespace GlobalNamespace {
struct ModIOManager__GetMod_d__77;
}
namespace GlobalNamespace {
struct ModIOManager__GetMods_d__76;
}
namespace GlobalNamespace {
struct ModIOManager__GetMods_d__79;
}
namespace GlobalNamespace {
struct ModIOManager__GetOculusAccessToken_d__98;
}
namespace GlobalNamespace {
struct ModIOManager__GetOculusUserId_d__97;
}
namespace GlobalNamespace {
struct ModIOManager__GetOculusUserProof_d__99;
}
namespace GlobalNamespace {
struct ModIOManager__GetSubscribedModProfile_d__107;
}
namespace GlobalNamespace {
struct ModIOManager__GetSubscribedModStatus_d__106;
}
namespace GlobalNamespace {
struct ModIOManager__GetSubscribedMods_d__103;
}
namespace GlobalNamespace {
struct ModIOManager__HasAcceptedLatestTerms_d__55;
}
namespace GlobalNamespace {
struct ModIOManager__InitInternal_d__54;
}
namespace GlobalNamespace {
struct ModIOManager__Initialize_d__53;
}
namespace GlobalNamespace {
struct ModIOManager__InitiatePlatformLogin_d__94;
}
namespace GlobalNamespace {
struct ModIOManager__IsModOutdated_d__65;
}
namespace GlobalNamespace {
struct ModIOManager__PrefetchFeaturedMaps_d__49;
}
namespace GlobalNamespace {
struct ModIOManager__RefreshModCache_d__63;
}
namespace GlobalNamespace {
struct ModIOManager__RefreshUserProfile_d__75;
}
namespace GlobalNamespace {
struct ModIOManager__RequestAccountLinkCode_d__91;
}
namespace GlobalNamespace {
struct ModIOManager__RequestPlatformLogin_d__93;
}
namespace GlobalNamespace {
struct ModIOManager__SaveAcceptedTermsIds_d__57;
}
namespace GlobalNamespace {
struct ModIOManager__ShowModIOTermsOfUse_d__58;
}
namespace GlobalNamespace {
struct ModIOManager__ShowTermsOfUseAtGameLoad_d__56;
}
namespace GlobalNamespace {
struct ModIOManager__SubscribeToMod_d__104;
}
namespace GlobalNamespace {
struct ModIOManager__UnsubscribeFromMod_d__105;
}
namespace GlobalNamespace {
template<typename T>
struct ModIORequestResultAnd_1;
}
namespace GlobalNamespace {
struct ModInstallationManagement_OperationPhase;
}
namespace GlobalNamespace {
struct ModInstallationManagement_OperationType;
}
namespace Modio::API {
class Mods_ModioAPI_GetModsFilter;
}
namespace Modio::Customizations {
class IOculusCredentialProvider;
}
namespace Modio::Customizations {
class ISteamCredentialProvider;
}
namespace Modio::Customizations {
class IWssAuthPrompter;
}
namespace Modio::Customizations {
class ModioWssAuthService;
}
namespace Modio::Mods {
struct ModFileState;
}
namespace Modio::Mods {
struct ModId;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio::Mods {
class Modfile;
}
namespace Modio::Mods {
template<typename T>
class ModioPage_1;
}
namespace Modio::Users {
class User;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
template<typename T0,typename T1,typename T2,typename T3>
class UnityEvent_4;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class ModIOManager;
}
namespace GlobalNamespace {
class ModIOManager__AssociateMothershipAndModIOAccounts_d__114;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ModIOManager*);
MARK_REF_T(::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModIOManager*, "", "ModIOManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114*, "", "ModIOManager/<AssociateMothershipAndModIOAccounts>d__114");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ModIOManager
class CORDL_TYPE ModIOManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ModIOAuthMethod = ::GlobalNamespace::ModIOManager_ModIOAuthMethod;

using _AddFavorite_d__69 = ::GlobalNamespace::ModIOManager__AddFavorite_d__69;

using _AssociateMothershipAndModIOAccounts_d__114 = ::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114;

using _ContinuePlatformLogin_d__95 = ::GlobalNamespace::ModIOManager__ContinuePlatformLogin_d__95;

using _DownloadMod_d__109 = ::GlobalNamespace::ModIOManager__DownloadMod_d__109;

using _GetFavoriteMods_d__68 = ::GlobalNamespace::ModIOManager__GetFavoriteMods_d__68;

using _GetFeaturedMaps_d__52 = ::GlobalNamespace::ModIOManager__GetFeaturedMaps_d__52;

using _GetInstalledMods_d__72 = ::GlobalNamespace::ModIOManager__GetInstalledMods_d__72;

using _GetModLogo_d__78 = ::GlobalNamespace::ModIOManager__GetModLogo_d__78;

using _GetModStatus_d__108 = ::GlobalNamespace::ModIOManager__GetModStatus_d__108;

using _GetMod_d__77 = ::GlobalNamespace::ModIOManager__GetMod_d__77;

using _GetMods_d__76 = ::GlobalNamespace::ModIOManager__GetMods_d__76;

using _GetMods_d__79 = ::GlobalNamespace::ModIOManager__GetMods_d__79;

using _GetOculusAccessToken_d__98 = ::GlobalNamespace::ModIOManager__GetOculusAccessToken_d__98;

using _GetOculusUserId_d__97 = ::GlobalNamespace::ModIOManager__GetOculusUserId_d__97;

using _GetOculusUserProof_d__99 = ::GlobalNamespace::ModIOManager__GetOculusUserProof_d__99;

using _GetSubscribedModProfile_d__107 = ::GlobalNamespace::ModIOManager__GetSubscribedModProfile_d__107;

using _GetSubscribedModStatus_d__106 = ::GlobalNamespace::ModIOManager__GetSubscribedModStatus_d__106;

using _GetSubscribedMods_d__103 = ::GlobalNamespace::ModIOManager__GetSubscribedMods_d__103;

using _HasAcceptedLatestTerms_d__55 = ::GlobalNamespace::ModIOManager__HasAcceptedLatestTerms_d__55;

using _InitInternal_d__54 = ::GlobalNamespace::ModIOManager__InitInternal_d__54;

using _Initialize_d__53 = ::GlobalNamespace::ModIOManager__Initialize_d__53;

using _InitiatePlatformLogin_d__94 = ::GlobalNamespace::ModIOManager__InitiatePlatformLogin_d__94;

using _IsModOutdated_d__65 = ::GlobalNamespace::ModIOManager__IsModOutdated_d__65;

using _PrefetchFeaturedMaps_d__49 = ::GlobalNamespace::ModIOManager__PrefetchFeaturedMaps_d__49;

using _RefreshModCache_d__63 = ::GlobalNamespace::ModIOManager__RefreshModCache_d__63;

using _RefreshUserProfile_d__75 = ::GlobalNamespace::ModIOManager__RefreshUserProfile_d__75;

using _RequestAccountLinkCode_d__91 = ::GlobalNamespace::ModIOManager__RequestAccountLinkCode_d__91;

using _RequestPlatformLogin_d__93 = ::GlobalNamespace::ModIOManager__RequestPlatformLogin_d__93;

using _SaveAcceptedTermsIds_d__57 = ::GlobalNamespace::ModIOManager__SaveAcceptedTermsIds_d__57;

using _ShowModIOTermsOfUse_d__58 = ::GlobalNamespace::ModIOManager__ShowModIOTermsOfUse_d__58;

using _ShowTermsOfUseAtGameLoad_d__56 = ::GlobalNamespace::ModIOManager__ShowTermsOfUseAtGameLoad_d__56;

using _SubscribeToMod_d__104 = ::GlobalNamespace::ModIOManager__SubscribeToMod_d__104;

using _UnsubscribeFromMod_d__105 = ::GlobalNamespace::ModIOManager__UnsubscribeFromMod_d__105;

/// @brief Field ModIODirectory, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ModIODirectory, put=setStaticF_ModIODirectory)) ::StringW  ModIODirectory;

/// @brief Field OnModIOCacheRefreshed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnModIOCacheRefreshed, put=setStaticF_OnModIOCacheRefreshed)) ::UnityEngine::Events::UnityEvent*  OnModIOCacheRefreshed;

/// @brief Field OnModIOCacheRefreshing, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnModIOCacheRefreshing, put=setStaticF_OnModIOCacheRefreshing)) ::UnityEngine::Events::UnityEvent*  OnModIOCacheRefreshing;

/// @brief Field OnModIOLoggedIn, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnModIOLoggedIn, put=setStaticF_OnModIOLoggedIn)) ::UnityEngine::Events::UnityEvent*  OnModIOLoggedIn;

/// @brief Field OnModIOLoggedOut, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnModIOLoggedOut, put=setStaticF_OnModIOLoggedOut)) ::UnityEngine::Events::UnityEvent*  OnModIOLoggedOut;

/// @brief Field OnModIOLoginFailed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnModIOLoginFailed, put=setStaticF_OnModIOLoginFailed)) ::UnityEngine::Events::UnityEvent_1<::StringW>*  OnModIOLoginFailed;

/// @brief Field OnModIOLoginStarted, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnModIOLoginStarted, put=setStaticF_OnModIOLoginStarted)) ::UnityEngine::Events::UnityEvent*  OnModIOLoginStarted;

/// @brief Field OnModIOUserChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnModIOUserChanged, put=setStaticF_OnModIOUserChanged)) ::UnityEngine::Events::UnityEvent_1<::Modio::Users::User*>*  OnModIOUserChanged;

/// @brief Field OnModManagementEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnModManagementEvent, put=setStaticF_OnModManagementEvent)) ::UnityEngine::Events::UnityEvent_4<::Modio::Mods::Mod*,::Modio::Mods::Modfile*,::GlobalNamespace::ModInstallationManagement_OperationType,::GlobalNamespace::ModInstallationManagement_OperationPhase>*  OnModManagementEvent;

/// @brief Field accountLinkingAuthService, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_accountLinkingAuthService, put=setStaticF_accountLinkingAuthService)) ::Modio::Customizations::ModioWssAuthService*  accountLinkingAuthService;

/// @brief Field associationMaxRetries, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_associationMaxRetries, put=setStaticF_associationMaxRetries)) int32_t  associationMaxRetries;

/// @brief Field currentAssociationRetries, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_currentAssociationRetries, put=setStaticF_currentAssociationRetries)) int32_t  currentAssociationRetries;

/// @brief Field currentRefreshCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_currentRefreshCallbacks, put=setStaticF_currentRefreshCallbacks)) ::System::Collections::Generic::List_1<::System::Action_1<bool>*>*  currentRefreshCallbacks;

/// @brief Field favoriteMods, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_favoriteMods, put=setStaticF_favoriteMods)) ::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,::Modio::Mods::Mod*>*  favoriteMods;

/// @brief Field favoriteModsLoaded, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_favoriteModsLoaded, put=setStaticF_favoriteModsLoaded)) bool  favoriteModsLoaded;

/// @brief Field featuredMapsPrefetchStarted, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_featuredMapsPrefetchStarted, put=setStaticF_featuredMapsPrefetchStarted)) bool  featuredMapsPrefetchStarted;

/// @brief Field featuredMapsRetrieved, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_featuredMapsRetrieved, put=setStaticF_featuredMapsRetrieved)) bool  featuredMapsRetrieved;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field initialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_initialized, put=setStaticF_initialized)) bool  initialized;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::ModIOManager>  instance;

/// @brief Field lastRefreshTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_lastRefreshTime, put=setStaticF_lastRefreshTime)) float_t  lastRefreshTime;

/// @brief Field loggingIn, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_loggingIn, put=setStaticF_loggingIn)) bool  loggingIn;

/// @brief Field loggingOut, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_loggingOut, put=setStaticF_loggingOut)) bool  loggingOut;

/// @brief Field modIOTermsAcknowledgedCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_modIOTermsAcknowledgedCallback, put=setStaticF_modIOTermsAcknowledgedCallback)) ::System::Action_1<::GlobalNamespace::ModIORequestResultAnd_1<bool>>*  modIOTermsAcknowledgedCallback;

/// @brief Field modIOTermsOfUsePrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_modIOTermsOfUsePrefab, put=__cordl_internal_set_modIOTermsOfUsePrefab)) ::UnityW<::UnityEngine::GameObject>  modIOTermsOfUsePrefab;

/// @brief Field modManagementEnabled, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_modManagementEnabled, put=setStaticF_modManagementEnabled)) bool  modManagementEnabled;

/// @brief Field newMapsModId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_newMapsModId, put=__cordl_internal_set_newMapsModId)) int64_t  newMapsModId;

/// @brief Field outdatedModCMSVersions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_outdatedModCMSVersions, put=setStaticF_outdatedModCMSVersions)) ::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,int32_t>*  outdatedModCMSVersions;

/// @brief Field refreshDisabledCoroutine, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_refreshDisabledCoroutine, put=setStaticF_refreshDisabledCoroutine)) ::UnityEngine::Coroutine*  refreshDisabledCoroutine;

/// @brief Field refreshing, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_refreshing, put=setStaticF_refreshing)) bool  refreshing;

/// @brief Field refreshingModCache, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_refreshingModCache, put=setStaticF_refreshingModCache)) bool  refreshingModCache;

/// @brief Field restartRefreshModCache, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_restartRefreshModCache, put=setStaticF_restartRefreshModCache)) bool  restartRefreshModCache;

/// @brief Field retrievedFeaturedMaps, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_retrievedFeaturedMaps, put=setStaticF_retrievedFeaturedMaps)) ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  retrievedFeaturedMaps;

/// @brief Convert operator to "::Modio::Customizations::IOculusCredentialProvider"
constexpr operator  ::Modio::Customizations::IOculusCredentialProvider*() noexcept;

/// @brief Convert operator to "::Modio::Customizations::ISteamCredentialProvider"
constexpr operator  ::Modio::Customizations::ISteamCredentialProvider*() noexcept;

/// [AsyncStateMachine(typeof(ModIOManager::<AddFavorite>d__69))]
/// @brief Method AddFavorite, addr 0x59ca310, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* AddFavorite(::Modio::Mods::ModId  modId, ::System::Action_1<::Modio::Error*>*  callback) ;

/// [IteratorStateMachine(typeof(ModIOManager::<AssociateMothershipAndModIOAccounts>d__114))]
/// @brief Method AssociateMothershipAndModIOAccounts, addr 0x59cce70, size 0x88, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* AssociateMothershipAndModIOAccounts(::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest*  data, ::System::Action_1<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>*  callback) ;

/// @brief Method Awake, addr 0x59c7720, size 0x488, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CancelExternalAuthentication, addr 0x59cba68, size 0x154, virtual false, abstract: false, final false
static inline void CancelExternalAuthentication() ;

/// [AsyncStateMachine(typeof(ModIOManager::<ContinuePlatformLogin>d__95))]
/// @brief Method ContinuePlatformLogin, addr 0x59cbf34, size 0xe8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* ContinuePlatformLogin() ;

/// @brief Method DisableModManagement, addr 0x59c8a98, size 0x184, virtual false, abstract: false, final false
static inline void DisableModManagement() ;

/// [AsyncStateMachine(typeof(ModIOManager::<DownloadMod>d__109))]
/// @brief Method DownloadMod, addr 0x59ccb14, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* DownloadMod(::Modio::Mods::ModId  modId, ::System::Action_1<bool>*  callback) ;

/// @brief Method EnableModManagement, addr 0x59c8910, size 0x188, virtual false, abstract: false, final false
static inline void EnableModManagement() ;

/// @brief Method GetCurrentAuthToken, addr 0x59cb350, size 0xb8, virtual false, abstract: false, final false
static inline ::StringW GetCurrentAuthToken() ;

/// @brief Method GetCurrentUserId, addr 0x59cb190, size 0x1c0, virtual false, abstract: false, final false
static inline ::StringW GetCurrentUserId() ;

/// @brief Method GetCurrentUsername, addr 0x59cb00c, size 0x184, virtual false, abstract: false, final false
static inline ::StringW GetCurrentUsername() ;

/// [AsyncStateMachine(typeof(ModIOManager::<GetFavoriteMods>d__68))]
/// @brief Method GetFavoriteMods, addr 0x59ca210, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>>* GetFavoriteMods(bool  forceRefresh) ;

/// [AsyncStateMachine(typeof(ModIOManager::<GetFeaturedMaps>d__52))]
/// @brief Method GetFeaturedMaps, addr 0x59c8124, size 0x104, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>>* GetFeaturedMaps(bool  forceRefresh) ;

/// [AsyncStateMachine(typeof(ModIOManager::<GetInstalledMods>d__72))]
/// @brief Method GetInstalledMods, addr 0x59ca5dc, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Mods::Mod*>>>* GetInstalledMods(bool  forceRefresh) ;

/// @brief Method GetLastAuthMethod, addr 0x59cc4a8, size 0x54, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ModIOManager_ModIOAuthMethod GetLastAuthMethod() ;

/// [AsyncStateMachine(typeof(ModIOManager::<GetMod>d__77))]
/// @brief Method GetMod, addr 0x59ca998, size 0x128, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>* GetMod(::Modio::Mods::ModId  modId, bool  forceUpdate, ::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*  callback) ;

/// [AsyncStateMachine(typeof(ModIOManager::<GetModLogo>d__78))]
/// @brief Method GetModLogo, addr 0x59caac0, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::UnityW<::UnityEngine::Texture2D>>>* GetModLogo(::Modio::Mods::Mod*  mod, ::System::Action_2<::Modio::Error*,::UnityW<::UnityEngine::Texture2D>>*  callback) ;

/// [AsyncStateMachine(typeof(ModIOManager::<GetModStatus>d__108))]
/// @brief Method GetModStatus, addr 0x59cca18, size 0xfc, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Modio::Mods::ModFileState>* GetModStatus(::Modio::Mods::ModId  modId) ;

/// [AsyncStateMachine(typeof(ModIOManager::<GetMods>d__79))]
/// @brief Method GetMods, addr 0x59cabe0, size 0x108, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>* GetMods(::Modio::API::Mods_ModioAPI_GetModsFilter*  searchFilter) ;

/// [AsyncStateMachine(typeof(ModIOManager::<GetMods>d__76))]
/// @brief Method GetMods, addr 0x59ca868, size 0x130, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>* GetMods(::System::Collections::Generic::ICollection_1<int64_t>*  modIds, bool  forceRefresh, ::System::Action_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>*  callback) ;

/// [AsyncStateMachine(typeof(ModIOManager::<GetOculusAccessToken>d__98))]
/// @brief Method GetOculusAccessToken, addr 0x59cc168, size 0xe8, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::StringW>* GetOculusAccessToken() ;

/// @brief Method GetOculusDevice, addr 0x59cc338, size 0x40, virtual true, abstract: false, final true
inline ::StringW GetOculusDevice() ;

/// [AsyncStateMachine(typeof(ModIOManager::<GetOculusUserId>d__97))]
/// @brief Method GetOculusUserId, addr 0x59cc080, size 0xe8, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* GetOculusUserId() ;

/// [AsyncStateMachine(typeof(ModIOManager::<GetOculusUserProof>d__99))]
/// @brief Method GetOculusUserProof, addr 0x59cc250, size 0xe8, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::StringW>* GetOculusUserProof() ;

/// [AsyncStateMachine(typeof(ModIOManager::<GetSubscribedModProfile>d__107))]
/// @brief Method GetSubscribedModProfile, addr 0x59cc908, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::Modio::Mods::Mod*>>* GetSubscribedModProfile(::Modio::Mods::ModId  modId, ::System::Action_2<bool,::Modio::Mods::Mod*>*  callback) ;

/// [AsyncStateMachine(typeof(ModIOManager::<GetSubscribedModStatus>d__106))]
/// @brief Method GetSubscribedModStatus, addr 0x59cc808, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::Modio::Mods::ModFileState>>* GetSubscribedModStatus(::Modio::Mods::ModId  modId) ;

/// [AsyncStateMachine(typeof(ModIOManager::<GetSubscribedMods>d__103))]
/// @brief Method GetSubscribedMods, addr 0x59cc4fc, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Mods::Mod*>>>* GetSubscribedMods() ;

/// @brief Method HandleModManagementEvent, addr 0x59c8c1c, size 0x43c, virtual false, abstract: false, final false
static inline void HandleModManagementEvent(::Modio::Mods::Mod*  mod, ::Modio::Mods::Modfile*  modfile, ::GlobalNamespace::ModInstallationManagement_OperationType  jobType, ::GlobalNamespace::ModInstallationManagement_OperationPhase  jobPhase) ;

/// [AsyncStateMachine(typeof(ModIOManager::<HasAcceptedLatestTerms>d__55))]
/// @brief Method HasAcceptedLatestTerms, addr 0x59c8400, size 0xec, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,bool,bool>>* HasAcceptedLatestTerms() ;

/// [AsyncStateMachine(typeof(ModIOManager::<InitInternal>d__54))]
/// @brief Method InitInternal, addr 0x59c8314, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* InitInternal() ;

/// [AsyncStateMachine(typeof(ModIOManager::<Initialize>d__53))]
/// @brief Method Initialize, addr 0x59c8228, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Initialize() ;

/// [AsyncStateMachine(typeof(ModIOManager::<InitiatePlatformLogin>d__94))]
/// @brief Method InitiatePlatformLogin, addr 0x59cbe2c, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* InitiatePlatformLogin() ;

/// @brief Method IsAuthenticated, addr 0x59cb408, size 0x398, virtual false, abstract: false, final false
static inline bool IsAuthenticated(bool  sendEvents) ;

/// @brief Method IsFeaturedMap, addr 0x59c8070, size 0xb4, virtual false, abstract: false, final false
static inline bool IsFeaturedMap(::Modio::Mods::Mod*  mod) ;

/// @brief Method IsInitialized, addr 0x59c8018, size 0x58, virtual false, abstract: false, final false
static inline bool IsInitialized() ;

/// @brief Method IsInstalledModOutdated, addr 0x59c9544, size 0x798, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<bool,int32_t> IsInstalledModOutdated(::Modio::Mods::Mod*  mod) ;

/// @brief Method IsLoggedIn, addr 0x59caf04, size 0x58, virtual false, abstract: false, final false
static inline bool IsLoggedIn() ;

/// @brief Method IsLoggingIn, addr 0x59caf5c, size 0x58, virtual false, abstract: false, final false
static inline bool IsLoggingIn() ;

/// @brief Method IsLoggingOut, addr 0x59cafb4, size 0x58, virtual false, abstract: false, final false
static inline bool IsLoggingOut() ;

/// @brief Method IsModFavorited, addr 0x59ca55c, size 0x80, virtual false, abstract: false, final false
static inline bool IsModFavorited(::Modio::Mods::ModId  modId) ;

/// [AsyncStateMachine(typeof(ModIOManager::<IsModOutdated>d__65))]
/// @brief Method IsModOutdated, addr 0x59c9448, size 0xfc, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,int32_t>>* IsModOutdated(::Modio::Mods::ModId  modId) ;

/// @brief Method IsModOutdated, addr 0x59c9058, size 0x2d4, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<bool,int32_t> IsModOutdated(::Modio::Mods::Mod*  mod) ;

/// @brief Method IsRefreshing, addr 0x59c93f0, size 0x58, virtual false, abstract: false, final false
static inline bool IsRefreshing() ;

/// @brief Method LogoutFromModIO, addr 0x59cb7a0, size 0x2c8, virtual false, abstract: false, final false
static inline void LogoutFromModIO() ;

/// @brief Method ModIOUserChanged, addr 0x59cace8, size 0x14c, virtual false, abstract: false, final false
static inline void ModIOUserChanged(::Modio::Users::User*  currentUser) ;

/// @brief Method ModIOUserSyncComplete, addr 0x59cae34, size 0xd0, virtual false, abstract: false, final false
static inline void ModIOUserSyncComplete() ;

static inline ::GlobalNamespace::ModIOManager* New_ctor() ;

/// @brief Method OnAuthenticationComplete, addr 0x59cc378, size 0x130, virtual false, abstract: false, final false
static inline void OnAuthenticationComplete(::Modio::Error*  error) ;

/// @brief Method OnDestroy, addr 0x59c7c8c, size 0x248, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnJoinedRoom, addr 0x59ccc24, size 0x1ac, virtual false, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnMapAccessEnabled, addr 0x59c7f30, size 0x4c, virtual false, abstract: false, final false
static inline void OnMapAccessEnabled() ;

/// @brief Method OnModIOTermsOfUseAcknowledged, addr 0x59c87ac, size 0x164, virtual false, abstract: false, final false
inline void OnModIOTermsOfUseAcknowledged(bool  accepted) ;

/// @brief Method OnUGCDisabled, addr 0x59c7f2c, size 0x4, virtual false, abstract: false, final false
static inline void OnUGCDisabled() ;

/// @brief Method OnUGCEnabled, addr 0x59c7f28, size 0x4, virtual false, abstract: false, final false
static inline void OnUGCEnabled() ;

/// [AsyncStateMachine(typeof(ModIOManager::<PrefetchFeaturedMaps>d__49))]
/// @brief Method PrefetchFeaturedMaps, addr 0x59c7f7c, size 0x9c, virtual false, abstract: false, final false
static inline void PrefetchFeaturedMaps() ;

/// [AsyncStateMachine(typeof(ModIOManager::<RefreshModCache>d__63))]
/// @brief Method RefreshModCache, addr 0x59c932c, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* RefreshModCache() ;

/// [AsyncStateMachine(typeof(ModIOManager::<RefreshUserProfile>d__75))]
/// @brief Method RefreshUserProfile, addr 0x59ca778, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* RefreshUserProfile(::System::Action_1<bool>*  callback, bool  force) ;

/// @brief Method RemoveFavorite, addr 0x59ca420, size 0x13c, virtual false, abstract: false, final false
static inline ::Modio::Error* RemoveFavorite(::Modio::Mods::ModId  modId) ;

/// [AsyncStateMachine(typeof(ModIOManager::<RequestAccountLinkCode>d__91))]
/// @brief Method RequestAccountLinkCode, addr 0x59cbc54, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* RequestAccountLinkCode() ;

/// @brief Method RequestEncryptedAppTicket, addr 0x59cc01c, size 0x64, virtual true, abstract: false, final true
inline void RequestEncryptedAppTicket(::System::Action_2<bool,::StringW>*  callback) ;

/// [AsyncStateMachine(typeof(ModIOManager::<RequestPlatformLogin>d__93))]
/// @brief Method RequestPlatformLogin, addr 0x59cbd40, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* RequestPlatformLogin() ;

/// [AsyncStateMachine(typeof(ModIOManager::<SaveAcceptedTermsIds>d__57))]
/// @brief Method SaveAcceptedTermsIds, addr 0x59c85dc, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* SaveAcceptedTermsIds() ;

/// @brief Method SaveFavoriteMods, addr 0x59c9cdc, size 0x534, virtual false, abstract: false, final false
static inline void SaveFavoriteMods() ;

/// @brief Method SetAccountLinkPrompter, addr 0x59cbbbc, size 0x98, virtual false, abstract: false, final false
static inline void SetAccountLinkPrompter(::Modio::Customizations::IWssAuthPrompter*  prompter) ;

/// [AsyncStateMachine(typeof(ModIOManager::<ShowModIOTermsOfUse>d__58))]
/// @brief Method ShowModIOTermsOfUse, addr 0x59c86a0, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* ShowModIOTermsOfUse() ;

/// [AsyncStateMachine(typeof(ModIOManager::<ShowTermsOfUseAtGameLoad>d__56))]
/// @brief Method ShowTermsOfUseAtGameLoad, addr 0x59c84ec, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* ShowTermsOfUseAtGameLoad() ;

/// @brief Method Start, addr 0x59c7ba8, size 0xe4, virtual false, abstract: false, final false
inline void Start() ;

/// [AsyncStateMachine(typeof(ModIOManager::<SubscribeToMod>d__104))]
/// @brief Method SubscribeToMod, addr 0x59cc5e8, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* SubscribeToMod(::Modio::Mods::ModId  modId, ::System::Action_1<::Modio::Error*>*  callback) ;

/// @brief Method TryGetNewMapsModId, addr 0x59ccdd0, size 0xa0, virtual false, abstract: false, final false
static inline bool TryGetNewMapsModId(::by_ref<::Modio::Mods::ModId>  newMapsModId) ;

/// [AsyncStateMachine(typeof(ModIOManager::<UnsubscribeFromMod>d__105))]
/// @brief Method UnsubscribeFromMod, addr 0x59cc6f8, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* UnsubscribeFromMod(::Modio::Mods::ModId  modId, ::System::Action_1<::Modio::Error*>*  callback) ;

/// @brief Method Update, addr 0x59c7ed4, size 0x54, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method ValidateInstalledMod, addr 0x59ca6dc, size 0x9c, virtual false, abstract: false, final false
static inline bool ValidateInstalledMod(::Modio::Mods::Mod*  mod) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_modIOTermsOfUsePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_modIOTermsOfUsePrefab() ;

constexpr int64_t const& __cordl_internal_get_newMapsModId() const;

constexpr int64_t& __cordl_internal_get_newMapsModId() ;

constexpr void __cordl_internal_set_modIOTermsOfUsePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_newMapsModId(int64_t  value) ;

/// @brief Method .ctor, addr 0x59ccf20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_ModIODirectory() ;

static inline ::UnityEngine::Events::UnityEvent* getStaticF_OnModIOCacheRefreshed() ;

static inline ::UnityEngine::Events::UnityEvent* getStaticF_OnModIOCacheRefreshing() ;

static inline ::UnityEngine::Events::UnityEvent* getStaticF_OnModIOLoggedIn() ;

static inline ::UnityEngine::Events::UnityEvent* getStaticF_OnModIOLoggedOut() ;

static inline ::UnityEngine::Events::UnityEvent_1<::StringW>* getStaticF_OnModIOLoginFailed() ;

static inline ::UnityEngine::Events::UnityEvent* getStaticF_OnModIOLoginStarted() ;

static inline ::UnityEngine::Events::UnityEvent_1<::Modio::Users::User*>* getStaticF_OnModIOUserChanged() ;

static inline ::UnityEngine::Events::UnityEvent_4<::Modio::Mods::Mod*,::Modio::Mods::Modfile*,::GlobalNamespace::ModInstallationManagement_OperationType,::GlobalNamespace::ModInstallationManagement_OperationPhase>* getStaticF_OnModManagementEvent() ;

static inline ::Modio::Customizations::ModioWssAuthService* getStaticF_accountLinkingAuthService() ;

static inline int32_t getStaticF_associationMaxRetries() ;

static inline int32_t getStaticF_currentAssociationRetries() ;

static inline ::System::Collections::Generic::List_1<::System::Action_1<bool>*>* getStaticF_currentRefreshCallbacks() ;

static inline ::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,::Modio::Mods::Mod*>* getStaticF_favoriteMods() ;

static inline bool getStaticF_favoriteModsLoaded() ;

static inline bool getStaticF_featuredMapsPrefetchStarted() ;

static inline bool getStaticF_featuredMapsRetrieved() ;

static inline bool getStaticF_hasInstance() ;

static inline bool getStaticF_initialized() ;

static inline ::UnityW<::GlobalNamespace::ModIOManager> getStaticF_instance() ;

static inline float_t getStaticF_lastRefreshTime() ;

static inline bool getStaticF_loggingIn() ;

static inline bool getStaticF_loggingOut() ;

static inline ::System::Action_1<::GlobalNamespace::ModIORequestResultAnd_1<bool>>* getStaticF_modIOTermsAcknowledgedCallback() ;

static inline bool getStaticF_modManagementEnabled() ;

static inline ::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,int32_t>* getStaticF_outdatedModCMSVersions() ;

static inline ::UnityEngine::Coroutine* getStaticF_refreshDisabledCoroutine() ;

static inline bool getStaticF_refreshing() ;

static inline bool getStaticF_refreshingModCache() ;

static inline bool getStaticF_restartRefreshModCache() ;

static inline ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* getStaticF_retrievedFeaturedMaps() ;

/// @brief Convert to "::Modio::Customizations::IOculusCredentialProvider"
constexpr ::Modio::Customizations::IOculusCredentialProvider* i___Modio__Customizations__IOculusCredentialProvider() noexcept;

/// @brief Convert to "::Modio::Customizations::ISteamCredentialProvider"
constexpr ::Modio::Customizations::ISteamCredentialProvider* i___Modio__Customizations__ISteamCredentialProvider() noexcept;

static inline void setStaticF_ModIODirectory(::StringW  value) ;

static inline void setStaticF_OnModIOCacheRefreshed(::UnityEngine::Events::UnityEvent*  value) ;

static inline void setStaticF_OnModIOCacheRefreshing(::UnityEngine::Events::UnityEvent*  value) ;

static inline void setStaticF_OnModIOLoggedIn(::UnityEngine::Events::UnityEvent*  value) ;

static inline void setStaticF_OnModIOLoggedOut(::UnityEngine::Events::UnityEvent*  value) ;

static inline void setStaticF_OnModIOLoginFailed(::UnityEngine::Events::UnityEvent_1<::StringW>*  value) ;

static inline void setStaticF_OnModIOLoginStarted(::UnityEngine::Events::UnityEvent*  value) ;

static inline void setStaticF_OnModIOUserChanged(::UnityEngine::Events::UnityEvent_1<::Modio::Users::User*>*  value) ;

static inline void setStaticF_OnModManagementEvent(::UnityEngine::Events::UnityEvent_4<::Modio::Mods::Mod*,::Modio::Mods::Modfile*,::GlobalNamespace::ModInstallationManagement_OperationType,::GlobalNamespace::ModInstallationManagement_OperationPhase>*  value) ;

static inline void setStaticF_accountLinkingAuthService(::Modio::Customizations::ModioWssAuthService*  value) ;

static inline void setStaticF_associationMaxRetries(int32_t  value) ;

static inline void setStaticF_currentAssociationRetries(int32_t  value) ;

static inline void setStaticF_currentRefreshCallbacks(::System::Collections::Generic::List_1<::System::Action_1<bool>*>*  value) ;

static inline void setStaticF_favoriteMods(::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,::Modio::Mods::Mod*>*  value) ;

static inline void setStaticF_favoriteModsLoaded(bool  value) ;

static inline void setStaticF_featuredMapsPrefetchStarted(bool  value) ;

static inline void setStaticF_featuredMapsRetrieved(bool  value) ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_initialized(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::ModIOManager>  value) ;

static inline void setStaticF_lastRefreshTime(float_t  value) ;

static inline void setStaticF_loggingIn(bool  value) ;

static inline void setStaticF_loggingOut(bool  value) ;

static inline void setStaticF_modIOTermsAcknowledgedCallback(::System::Action_1<::GlobalNamespace::ModIORequestResultAnd_1<bool>>*  value) ;

static inline void setStaticF_modManagementEnabled(bool  value) ;

static inline void setStaticF_outdatedModCMSVersions(::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,int32_t>*  value) ;

static inline void setStaticF_refreshDisabledCoroutine(::UnityEngine::Coroutine*  value) ;

static inline void setStaticF_refreshing(bool  value) ;

static inline void setStaticF_refreshingModCache(bool  value) ;

static inline void setStaticF_restartRefreshModCache(bool  value) ;

static inline void setStaticF_retrievedFeaturedMaps(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModIOManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModIOManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModIOManager(ModIOManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModIOManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModIOManager(ModIOManager const& ) = delete;

/// @brief Field FAVORITES_FILE_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  FAVORITES_FILE_NAME{u"favoriteMods.json"};

/// @brief Field FEATURED_MAP_TAG offset 0xffffffff size 0x8
static constexpr ::ConstString  FEATURED_MAP_TAG{u"Featured"};

/// @brief Field MAX_FEATURED_MAPS_TO_PREFETCH offset 0xffffffff size 0x4
static constexpr int32_t  MAX_FEATURED_MAPS_TO_PREFETCH{static_cast<int32_t>(0x32)};

/// @brief Field MAX_PREFETCH_WAIT_PER_MAP_SECONDS offset 0xffffffff size 0x4
static constexpr float_t  MAX_PREFETCH_WAIT_PER_MAP_SECONDS{static_cast<float_t>(600.0f)};

/// @brief Field MODIO_ACCEPTED_PRIVACY_POLICY_ID_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MODIO_ACCEPTED_PRIVACY_POLICY_ID_KEY{u"modIOAcceptedPrivacyPolicyId"};

/// @brief Field MODIO_ACCEPTED_TERMS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MODIO_ACCEPTED_TERMS_KEY{u"modIOAcceptedTermsHash"};

/// @brief Field MODIO_ACCEPTED_TERMS_OF_USE_ID_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MODIO_ACCEPTED_TERMS_OF_USE_ID_KEY{u"modIOAcceptedTermsOfUseId"};

/// @brief Field MODIO_LAST_AUTH_METHOD_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MODIO_LAST_AUTH_METHOD_KEY{u"modIOLassSuccessfulAuthMethod"};

/// @brief Field PREFETCH_POLL_INTERVAL_MS offset 0xffffffff size 0x4
static constexpr int32_t  PREFETCH_POLL_INTERVAL_MS{static_cast<int32_t>(0x7d0)};

/// @brief Field REFRESH_RATE_LIMIT offset 0xffffffff size 0x4
static constexpr float_t  REFRESH_RATE_LIMIT{static_cast<float_t>(5.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2721};

/// [SerializeField]
/// @brief Field modIOTermsOfUsePrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___modIOTermsOfUsePrefab;

/// [SerializeField]
/// @brief Field newMapsModId, offset: 0x28, size: 0x8, def value: None
 int64_t  ___newMapsModId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModIOManager, ___modIOTermsOfUsePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager, ___newMapsModId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModIOManager) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ModIOManager/<AssociateMothershipAndModIOAccounts>d__114
class CORDL_TYPE ModIOManager__AssociateMothershipAndModIOAccounts_d__114 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <request>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <retry>5__3, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__retry_5__3, put=__cordl_internal_set__retry_5__3)) bool  _retry_5__3;

/// @brief Field callback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>*  callback;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59cd734, size 0x720, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59cde54, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59cde5c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59cde94, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59cd730, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr bool const& __cordl_internal_get__retry_5__3() const;

constexpr bool& __cordl_internal_get__retry_5__3() ;

constexpr ::System::Action_1<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>*& __cordl_internal_get_callback() ;

constexpr ::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__retry_5__3(bool  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59ccef8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModIOManager__AssociateMothershipAndModIOAccounts_d__114() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModIOManager__AssociateMothershipAndModIOAccounts_d__114", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModIOManager__AssociateMothershipAndModIOAccounts_d__114(ModIOManager__AssociateMothershipAndModIOAccounts_d__114 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModIOManager__AssociateMothershipAndModIOAccounts_d__114", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModIOManager__AssociateMothershipAndModIOAccounts_d__114(ModIOManager__AssociateMothershipAndModIOAccounts_d__114 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2689};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest*  ___data;

/// @brief Field callback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>*  ___callback;

/// @brief Field <request>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

/// @brief Field <retry>5__3, offset: 0x38, size: 0x1, def value: None
 bool  ____retry_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114, ___data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114, ___callback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114, ____request_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114, ____retry_5__3) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
