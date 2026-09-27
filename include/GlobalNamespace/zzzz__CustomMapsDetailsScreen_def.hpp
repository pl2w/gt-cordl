#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsDetailsScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CustomMapsTerminalScreen_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapsDetailsScreen)
namespace GlobalNamespace {
struct CustomMapsDetailsScreen__UpdateStatus_d__76;
}
namespace GlobalNamespace {
class CustomMapsScreenButton;
}
namespace GlobalNamespace {
struct ModInstallationManagement_OperationPhase;
}
namespace GlobalNamespace {
struct ModInstallationManagement_OperationType;
}
namespace GlobalNamespace {
class VirtualStumpSerializer;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
struct CustomMapKeyboardBinding;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
struct MapLoadStatus;
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
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsDetailsScreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsDetailsScreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsDetailsScreen*, "", "CustomMapsDetailsScreen");
// Dependencies CustomMapsTerminalScreen
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsDetailsScreen
class CORDL_TYPE CustomMapsDetailsScreen : public ::GlobalNamespace::CustomMapsTerminalScreen {
public:
// Declarations
using _UpdateStatus_d__76 = ::GlobalNamespace::CustomMapsDetailsScreen__UpdateStatus_d__76;

/// @brief Field <currentMapMod>k__BackingField, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentMapMod_k__BackingField, put=__cordl_internal_set__currentMapMod_k__BackingField)) ::Modio::Mods::Mod*  _currentMapMod_k__BackingField;

 __declspec(property(get=get_currentMapMod, put=set_currentMapMod)) ::Modio::Mods::Mod*  currentMapMod;

/// @brief Field deleteButton, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_deleteButton, put=__cordl_internal_set_deleteButton)) ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  deleteButton;

/// @brief Field downloadMapString, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_downloadMapString, put=__cordl_internal_set_downloadMapString)) ::StringW  downloadMapString;

/// @brief Field errorText, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorText, put=__cordl_internal_set_errorText)) ::UnityW<::TMPro::TMP_Text>  errorText;

/// @brief Field favoriteToggleButton, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_favoriteToggleButton, put=__cordl_internal_set_favoriteToggleButton)) ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  favoriteToggleButton;

/// @brief Field hasModProfile, offset 0x1c0, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasModProfile, put=__cordl_internal_set_hasModProfile)) bool  hasModProfile;

/// @brief Field hiddenMapDesc, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_hiddenMapDesc, put=__cordl_internal_set_hiddenMapDesc)) ::StringW  hiddenMapDesc;

/// @brief Field hiddenMapLogo, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_hiddenMapLogo, put=__cordl_internal_set_hiddenMapLogo)) ::UnityW<::UnityEngine::Sprite>  hiddenMapLogo;

/// @brief Field hiddenMapTitle, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_hiddenMapTitle, put=__cordl_internal_set_hiddenMapTitle)) ::StringW  hiddenMapTitle;

/// @brief Field hiddenRoomMapText, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_hiddenRoomMapText, put=__cordl_internal_set_hiddenRoomMapText)) ::UnityW<::TMPro::TMP_Text>  hiddenRoomMapText;

/// @brief Field isFavorite, offset 0x1c2, size 0x1 
 __declspec(property(get=__cordl_internal_get_isFavorite, put=__cordl_internal_set_isFavorite)) bool  isFavorite;

/// @brief Field loadButton, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadButton, put=__cordl_internal_set_loadButton)) ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  loadButton;

/// @brief Field loadMapString, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadMapString, put=__cordl_internal_set_loadMapString)) ::StringW  loadMapString;

/// @brief Field loadingMapLabelText, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadingMapLabelText, put=__cordl_internal_set_loadingMapLabelText)) ::UnityW<::TMPro::TMP_Text>  loadingMapLabelText;

/// @brief Field loadingMapMessageText, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadingMapMessageText, put=__cordl_internal_set_loadingMapMessageText)) ::UnityW<::TMPro::TMP_Text>  loadingMapMessageText;

/// @brief Field loadingText, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadingText, put=__cordl_internal_set_loadingText)) ::UnityW<::TMPro::TMP_Text>  loadingText;

/// @brief Field mapAutoDownloadingString, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapAutoDownloadingString, put=__cordl_internal_set_mapAutoDownloadingString)) ::StringW  mapAutoDownloadingString;

/// @brief Field mapDownloadQueuedString, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapDownloadQueuedString, put=__cordl_internal_set_mapDownloadQueuedString)) ::StringW  mapDownloadQueuedString;

/// @brief Field mapDownloadingProgressString, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapDownloadingProgressString, put=__cordl_internal_set_mapDownloadingProgressString)) ::StringW  mapDownloadingProgressString;

/// @brief Field mapInstallingProgressString, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapInstallingProgressString, put=__cordl_internal_set_mapInstallingProgressString)) ::StringW  mapInstallingProgressString;

/// @brief Field mapInstallingString, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapInstallingString, put=__cordl_internal_set_mapInstallingString)) ::StringW  mapInstallingString;

/// @brief Field mapLoadError, offset 0x1c1, size 0x1 
 __declspec(property(get=__cordl_internal_get_mapLoadError, put=__cordl_internal_set_mapLoadError)) bool  mapLoadError;

/// @brief Field mapLoadingErrorDriverString, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapLoadingErrorDriverString, put=__cordl_internal_set_mapLoadingErrorDriverString)) ::StringW  mapLoadingErrorDriverString;

/// @brief Field mapLoadingErrorInvalidModFile, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapLoadingErrorInvalidModFile, put=__cordl_internal_set_mapLoadingErrorInvalidModFile)) ::StringW  mapLoadingErrorInvalidModFile;

/// @brief Field mapLoadingErrorNonDriverString, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapLoadingErrorNonDriverString, put=__cordl_internal_set_mapLoadingErrorNonDriverString)) ::StringW  mapLoadingErrorNonDriverString;

/// @brief Field mapLoadingErrorString, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapLoadingErrorString, put=__cordl_internal_set_mapLoadingErrorString)) ::StringW  mapLoadingErrorString;

/// @brief Field mapLoadingString, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapLoadingString, put=__cordl_internal_set_mapLoadingString)) ::StringW  mapLoadingString;

/// @brief Field mapNeedsUpdateString, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapNeedsUpdateString, put=__cordl_internal_set_mapNeedsUpdateString)) ::StringW  mapNeedsUpdateString;

/// @brief Field mapNotDownloadedString, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapNotDownloadedString, put=__cordl_internal_set_mapNotDownloadedString)) ::StringW  mapNotDownloadedString;

/// @brief Field mapReadyText, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapReadyText, put=__cordl_internal_set_mapReadyText)) ::UnityW<::TMPro::TMP_Text>  mapReadyText;

/// @brief Field mapScreenshotImage, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapScreenshotImage, put=__cordl_internal_set_mapScreenshotImage)) ::UnityW<::UnityEngine::SpriteRenderer>  mapScreenshotImage;

/// @brief Field mapUnloadingString, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapUnloadingString, put=__cordl_internal_set_mapUnloadingString)) ::StringW  mapUnloadingString;

/// @brief Field modAvailableString, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_modAvailableString, put=__cordl_internal_set_modAvailableString)) ::StringW  modAvailableString;

/// @brief Field modCreatorLabelText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_modCreatorLabelText, put=__cordl_internal_set_modCreatorLabelText)) ::UnityW<::TMPro::TMP_Text>  modCreatorLabelText;

/// @brief Field modCreatorText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_modCreatorText, put=__cordl_internal_set_modCreatorText)) ::UnityW<::TMPro::TMP_Text>  modCreatorText;

/// @brief Field modDescriptionText, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_modDescriptionText, put=__cordl_internal_set_modDescriptionText)) ::UnityW<::TMPro::TMP_Text>  modDescriptionText;

/// @brief Field modNameText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_modNameText, put=__cordl_internal_set_modNameText)) ::UnityW<::TMPro::TMP_Text>  modNameText;

/// @brief Field modStatusLabelText, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_modStatusLabelText, put=__cordl_internal_set_modStatusLabelText)) ::UnityW<::TMPro::TMP_Text>  modStatusLabelText;

/// @brief Field modStatusStrings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_modStatusStrings, put=setStaticF_modStatusStrings)) ::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModFileState,::StringW>*  modStatusStrings;

/// @brief Field modStatusText, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_modStatusText, put=__cordl_internal_set_modStatusText)) ::UnityW<::TMPro::TMP_Text>  modStatusText;

/// @brief Field modSubscriptionStatusText, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_modSubscriptionStatusText, put=__cordl_internal_set_modSubscriptionStatusText)) ::UnityW<::TMPro::TMP_Text>  modSubscriptionStatusText;

/// @brief Field networkObject, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkObject, put=__cordl_internal_set_networkObject)) ::UnityW<::GlobalNamespace::VirtualStumpSerializer>  networkObject;

/// @brief Field outdatedText, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_outdatedText, put=__cordl_internal_set_outdatedText)) ::UnityW<::TMPro::TMP_Text>  outdatedText;

/// @brief Field pendingModId, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pendingModId, put=__cordl_internal_set_pendingModId)) int64_t  pendingModId;

/// @brief Field playerCountText, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCountText, put=__cordl_internal_set_playerCountText)) ::UnityW<::TMPro::TMP_Text>  playerCountText;

/// @brief Field rateDownButton, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rateDownButton, put=__cordl_internal_set_rateDownButton)) ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  rateDownButton;

/// @brief Field rateUpButton, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rateUpButton, put=__cordl_internal_set_rateUpButton)) ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  rateUpButton;

/// @brief Field subscribeString, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_subscribeString, put=__cordl_internal_set_subscribeString)) ::StringW  subscribeString;

/// @brief Field subscribedStatusString, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_subscribedStatusString, put=__cordl_internal_set_subscribedStatusString)) ::StringW  subscribedStatusString;

/// @brief Field subscriptionToggleButton, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_subscriptionToggleButton, put=__cordl_internal_set_subscriptionToggleButton)) ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  subscriptionToggleButton;

/// @brief Field unloadPromptText, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_unloadPromptText, put=__cordl_internal_set_unloadPromptText)) ::UnityW<::TMPro::TMP_Text>  unloadPromptText;

/// @brief Field unsubscribeString, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_unsubscribeString, put=__cordl_internal_set_unsubscribeString)) ::StringW  unsubscribeString;

/// @brief Field unsubscribedStatusString, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_unsubscribedStatusString, put=__cordl_internal_set_unsubscribedStatusString)) ::StringW  unsubscribedStatusString;

/// @brief Field updateMapString, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_updateMapString, put=__cordl_internal_set_updateMapString)) ::StringW  updateMapString;

/// @brief Method CanChangeMapState, addr 0x59f85c8, size 0x1c8, virtual false, abstract: false, final false
inline bool CanChangeMapState(bool  load, ::by_ref<::StringW>  disallowedReason) ;

/// @brief Method GetModId, addr 0x59f7550, size 0x18, virtual false, abstract: false, final false
inline ::Modio::Mods::ModId GetModId() ;

/// @brief Method HandleModManagementEvent, addr 0x59f742c, size 0x124, virtual false, abstract: false, final false
inline void HandleModManagementEvent(::Modio::Mods::Mod*  mod, ::Modio::Mods::Modfile*  modfile, ::GlobalNamespace::ModInstallationManagement_OperationType  jobType, ::GlobalNamespace::ModInstallationManagement_OperationPhase  jobPhase) ;

/// @brief Method Hide, addr 0x59f6594, size 0x3ec, virtual true, abstract: false, final false
inline void Hide() ;

/// @brief Method Initialize, addr 0x59f5a48, size 0x4, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method IsCurrentModHidden, addr 0x59f87a8, size 0xd0, virtual false, abstract: false, final false
inline bool IsCurrentModHidden() ;

/// @brief Method LoadMap, addr 0x59f8878, size 0x254, virtual false, abstract: false, final false
inline void LoadMap() ;

static inline ::GlobalNamespace::CustomMapsDetailsScreen* New_ctor() ;

/// @brief Method OnGetModLogo, addr 0x59f8ff8, size 0x190, virtual false, abstract: false, final false
inline void OnGetModLogo(::Modio::Error*  error, ::UnityEngine::Texture2D*  modLogo) ;

/// @brief Method OnMapLoadComplete, addr 0x59f9188, size 0xc, virtual false, abstract: false, final false
inline void OnMapLoadComplete(bool  success) ;

/// @brief Method OnMapLoadComplete_UIUpdate, addr 0x59f8d18, size 0xf0, virtual false, abstract: false, final false
inline void OnMapLoadComplete_UIUpdate() ;

/// @brief Method OnMapLoadProgress, addr 0x59f9260, size 0x500, virtual false, abstract: false, final false
inline void OnMapLoadProgress(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  loadStatus, int32_t  progress, ::StringW  message) ;

/// @brief Method OnMapUnloaded, addr 0x59f9194, size 0x38, virtual false, abstract: false, final false
inline void OnMapUnloaded() ;

/// @brief Method OnModIOLoggedIn, addr 0x59f69d4, size 0xb4, virtual false, abstract: false, final false
inline void OnModIOLoggedIn() ;

/// @brief Method OnModIOLoggedOut, addr 0x59f73e4, size 0x40, virtual false, abstract: false, final false
inline void OnModIOLoggedOut() ;

/// @brief Method OnModIOUserChanged, addr 0x59f7424, size 0x8, virtual false, abstract: false, final false
inline void OnModIOUserChanged(::Modio::Users::User*  user) ;

/// @brief Method OnModUpdated, addr 0x59f6980, size 0x54, virtual false, abstract: false, final false
inline void OnModUpdated() ;

/// @brief Method OnProfileReceived, addr 0x59f8acc, size 0x160, virtual false, abstract: false, final false
inline void OnProfileReceived(::Modio::Error*  error, ::Modio::Mods::Mod*  mod) ;

/// @brief Method OnRoomMapChanged, addr 0x59f8c2c, size 0xec, virtual false, abstract: false, final false
inline void OnRoomMapChanged(::Modio::Mods::ModId  roomMapID) ;

/// @brief Method OnRoomMapRetrieved, addr 0x59f91cc, size 0x94, virtual false, abstract: false, final false
inline void OnRoomMapRetrieved(::Modio::Error*  error, ::Modio::Mods::Mod*  mod) ;

/// @brief Method PressButton, addr 0x59f7a4c, size 0xb7c, virtual true, abstract: false, final false
inline void PressButton(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding  buttonPressed) ;

/// @brief Method RefreshCurrentMapMod, addr 0x59f6a88, size 0x1a4, virtual false, abstract: false, final false
inline void RefreshCurrentMapMod() ;

/// @brief Method ResetToDefaultView, addr 0x59f60d0, size 0x4c4, virtual false, abstract: false, final false
inline void ResetToDefaultView() ;

/// @brief Method RetrieveModFromModIO, addr 0x59f77b4, size 0x100, virtual false, abstract: false, final false
inline void RetrieveModFromModIO(int64_t  id, bool  forceUpdate, ::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*  callback) ;

/// @brief Method SetModProfile, addr 0x59f78b4, size 0x198, virtual false, abstract: false, final false
inline void SetModProfile(::Modio::Mods::Mod*  mod) ;

/// @brief Method Show, addr 0x59f5a4c, size 0x684, virtual true, abstract: false, final false
inline void Show() ;

/// @brief Method ShowLoadRoomMapPrompt, addr 0x59f8e08, size 0x1f0, virtual false, abstract: false, final false
inline void ShowLoadRoomMapPrompt() ;

/// @brief Method UnloadMap, addr 0x59f8790, size 0x18, virtual false, abstract: false, final false
inline void UnloadMap() ;

/// @brief Method Update, addr 0x59f7568, size 0x24c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateMapDetails, addr 0x59f6c2c, size 0x6c8, virtual false, abstract: false, final false
inline void UpdateMapDetails(bool  refreshScreenState) ;

/// [AsyncStateMachine(typeof(CustomMapsDetailsScreen::<UpdateStatus>d__76))]
/// @brief Method UpdateStatus, addr 0x59f72f4, size 0xf0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* UpdateStatus(bool  errorEncountered) ;

/// [CompilerGenerated]
/// @brief Method <PressButton>b__70_0, addr 0x59f9d44, size 0x118, virtual false, abstract: false, final false
inline void _PressButton_b__70_0(bool  result) ;

/// [CompilerGenerated]
/// @brief Method <PressButton>b__70_1, addr 0x59f9f64, size 0x70, virtual false, abstract: false, final false
inline void _PressButton_b__70_1(bool  modDownloadStarted) ;

/// [CompilerGenerated]
/// @brief Method <PressButton>b__70_2, addr 0x59f9fd4, size 0x84, virtual false, abstract: false, final false
inline void _PressButton_b__70_2(::Modio::Error*  error) ;

/// [CompilerGenerated]
/// @brief Method <PressButton>b__70_3, addr 0x59f9e5c, size 0x84, virtual false, abstract: false, final false
inline void _PressButton_b__70_3(::Modio::Error*  error) ;

/// [CompilerGenerated]
/// @brief Method <PressButton>b__70_4, addr 0x59f9ee0, size 0x84, virtual false, abstract: false, final false
inline void _PressButton_b__70_4(::Modio::Error*  error) ;

/// [CompilerGenerated]
/// @brief Method <ResetToDefaultView>b__73_0, addr 0x59fa058, size 0x4, virtual false, abstract: false, final false
inline void _ResetToDefaultView_b__73_0(::Modio::Error*  error, ::Modio::Mods::Mod*  mod) ;

/// [NullableContext(1)]
/// [CompilerGenerated]
/// @brief Method <SetModProfile>b__69_0, addr 0x59f9d24, size 0x20, virtual false, abstract: false, final false
inline void _SetModProfile_b__69_0(::StringW  count) ;

/// [CompilerGenerated]
/// @brief Method <UpdateMapDetails>b__74_0, addr 0x59fa05c, size 0x4, virtual false, abstract: false, final false
inline void _UpdateMapDetails_b__74_0(::Modio::Error*  error, ::Modio::Mods::Mod*  mod) ;

/// [NullableContext(1)]
/// [CompilerGenerated]
/// @brief Method <UpdateStatus>b__76_0, addr 0x59fa060, size 0x20, virtual false, abstract: false, final false
inline void _UpdateStatus_b__76_0(::StringW  count) ;

constexpr ::Modio::Mods::Mod* const& __cordl_internal_get__currentMapMod_k__BackingField() const;

constexpr ::Modio::Mods::Mod*& __cordl_internal_get__currentMapMod_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& __cordl_internal_get_deleteButton() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& __cordl_internal_get_deleteButton() ;

constexpr ::StringW const& __cordl_internal_get_downloadMapString() const;

constexpr ::StringW& __cordl_internal_get_downloadMapString() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_errorText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_errorText() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& __cordl_internal_get_favoriteToggleButton() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& __cordl_internal_get_favoriteToggleButton() ;

constexpr bool const& __cordl_internal_get_hasModProfile() const;

constexpr bool& __cordl_internal_get_hasModProfile() ;

constexpr ::StringW const& __cordl_internal_get_hiddenMapDesc() const;

constexpr ::StringW& __cordl_internal_get_hiddenMapDesc() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_hiddenMapLogo() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_hiddenMapLogo() ;

constexpr ::StringW const& __cordl_internal_get_hiddenMapTitle() const;

constexpr ::StringW& __cordl_internal_get_hiddenMapTitle() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_hiddenRoomMapText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_hiddenRoomMapText() ;

constexpr bool const& __cordl_internal_get_isFavorite() const;

constexpr bool& __cordl_internal_get_isFavorite() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& __cordl_internal_get_loadButton() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& __cordl_internal_get_loadButton() ;

constexpr ::StringW const& __cordl_internal_get_loadMapString() const;

constexpr ::StringW& __cordl_internal_get_loadMapString() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_loadingMapLabelText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_loadingMapLabelText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_loadingMapMessageText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_loadingMapMessageText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_loadingText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_loadingText() ;

constexpr ::StringW const& __cordl_internal_get_mapAutoDownloadingString() const;

constexpr ::StringW& __cordl_internal_get_mapAutoDownloadingString() ;

constexpr ::StringW const& __cordl_internal_get_mapDownloadQueuedString() const;

constexpr ::StringW& __cordl_internal_get_mapDownloadQueuedString() ;

constexpr ::StringW const& __cordl_internal_get_mapDownloadingProgressString() const;

constexpr ::StringW& __cordl_internal_get_mapDownloadingProgressString() ;

constexpr ::StringW const& __cordl_internal_get_mapInstallingProgressString() const;

constexpr ::StringW& __cordl_internal_get_mapInstallingProgressString() ;

constexpr ::StringW const& __cordl_internal_get_mapInstallingString() const;

constexpr ::StringW& __cordl_internal_get_mapInstallingString() ;

constexpr bool const& __cordl_internal_get_mapLoadError() const;

constexpr bool& __cordl_internal_get_mapLoadError() ;

constexpr ::StringW const& __cordl_internal_get_mapLoadingErrorDriverString() const;

constexpr ::StringW& __cordl_internal_get_mapLoadingErrorDriverString() ;

constexpr ::StringW const& __cordl_internal_get_mapLoadingErrorInvalidModFile() const;

constexpr ::StringW& __cordl_internal_get_mapLoadingErrorInvalidModFile() ;

constexpr ::StringW const& __cordl_internal_get_mapLoadingErrorNonDriverString() const;

constexpr ::StringW& __cordl_internal_get_mapLoadingErrorNonDriverString() ;

constexpr ::StringW const& __cordl_internal_get_mapLoadingErrorString() const;

constexpr ::StringW& __cordl_internal_get_mapLoadingErrorString() ;

constexpr ::StringW const& __cordl_internal_get_mapLoadingString() const;

constexpr ::StringW& __cordl_internal_get_mapLoadingString() ;

constexpr ::StringW const& __cordl_internal_get_mapNeedsUpdateString() const;

constexpr ::StringW& __cordl_internal_get_mapNeedsUpdateString() ;

constexpr ::StringW const& __cordl_internal_get_mapNotDownloadedString() const;

constexpr ::StringW& __cordl_internal_get_mapNotDownloadedString() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_mapReadyText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_mapReadyText() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_mapScreenshotImage() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_mapScreenshotImage() ;

constexpr ::StringW const& __cordl_internal_get_mapUnloadingString() const;

constexpr ::StringW& __cordl_internal_get_mapUnloadingString() ;

constexpr ::StringW const& __cordl_internal_get_modAvailableString() const;

constexpr ::StringW& __cordl_internal_get_modAvailableString() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_modCreatorLabelText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_modCreatorLabelText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_modCreatorText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_modCreatorText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_modDescriptionText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_modDescriptionText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_modNameText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_modNameText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_modStatusLabelText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_modStatusLabelText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_modStatusText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_modStatusText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_modSubscriptionStatusText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_modSubscriptionStatusText() ;

constexpr ::UnityW<::GlobalNamespace::VirtualStumpSerializer> const& __cordl_internal_get_networkObject() const;

constexpr ::UnityW<::GlobalNamespace::VirtualStumpSerializer>& __cordl_internal_get_networkObject() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_outdatedText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_outdatedText() ;

constexpr int64_t const& __cordl_internal_get_pendingModId() const;

constexpr int64_t& __cordl_internal_get_pendingModId() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_playerCountText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_playerCountText() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& __cordl_internal_get_rateDownButton() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& __cordl_internal_get_rateDownButton() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& __cordl_internal_get_rateUpButton() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& __cordl_internal_get_rateUpButton() ;

constexpr ::StringW const& __cordl_internal_get_subscribeString() const;

constexpr ::StringW& __cordl_internal_get_subscribeString() ;

constexpr ::StringW const& __cordl_internal_get_subscribedStatusString() const;

constexpr ::StringW& __cordl_internal_get_subscribedStatusString() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& __cordl_internal_get_subscriptionToggleButton() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& __cordl_internal_get_subscriptionToggleButton() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_unloadPromptText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_unloadPromptText() ;

constexpr ::StringW const& __cordl_internal_get_unsubscribeString() const;

constexpr ::StringW& __cordl_internal_get_unsubscribeString() ;

constexpr ::StringW const& __cordl_internal_get_unsubscribedStatusString() const;

constexpr ::StringW& __cordl_internal_get_unsubscribedStatusString() ;

constexpr ::StringW const& __cordl_internal_get_updateMapString() const;

constexpr ::StringW& __cordl_internal_get_updateMapString() ;

constexpr void __cordl_internal_set__currentMapMod_k__BackingField(::Modio::Mods::Mod*  value) ;

constexpr void __cordl_internal_set_deleteButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value) ;

constexpr void __cordl_internal_set_downloadMapString(::StringW  value) ;

constexpr void __cordl_internal_set_errorText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_favoriteToggleButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value) ;

constexpr void __cordl_internal_set_hasModProfile(bool  value) ;

constexpr void __cordl_internal_set_hiddenMapDesc(::StringW  value) ;

constexpr void __cordl_internal_set_hiddenMapLogo(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_hiddenMapTitle(::StringW  value) ;

constexpr void __cordl_internal_set_hiddenRoomMapText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_isFavorite(bool  value) ;

constexpr void __cordl_internal_set_loadButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value) ;

constexpr void __cordl_internal_set_loadMapString(::StringW  value) ;

constexpr void __cordl_internal_set_loadingMapLabelText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_loadingMapMessageText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_loadingText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_mapAutoDownloadingString(::StringW  value) ;

constexpr void __cordl_internal_set_mapDownloadQueuedString(::StringW  value) ;

constexpr void __cordl_internal_set_mapDownloadingProgressString(::StringW  value) ;

constexpr void __cordl_internal_set_mapInstallingProgressString(::StringW  value) ;

constexpr void __cordl_internal_set_mapInstallingString(::StringW  value) ;

constexpr void __cordl_internal_set_mapLoadError(bool  value) ;

constexpr void __cordl_internal_set_mapLoadingErrorDriverString(::StringW  value) ;

constexpr void __cordl_internal_set_mapLoadingErrorInvalidModFile(::StringW  value) ;

constexpr void __cordl_internal_set_mapLoadingErrorNonDriverString(::StringW  value) ;

constexpr void __cordl_internal_set_mapLoadingErrorString(::StringW  value) ;

constexpr void __cordl_internal_set_mapLoadingString(::StringW  value) ;

constexpr void __cordl_internal_set_mapNeedsUpdateString(::StringW  value) ;

constexpr void __cordl_internal_set_mapNotDownloadedString(::StringW  value) ;

constexpr void __cordl_internal_set_mapReadyText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_mapScreenshotImage(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set_mapUnloadingString(::StringW  value) ;

constexpr void __cordl_internal_set_modAvailableString(::StringW  value) ;

constexpr void __cordl_internal_set_modCreatorLabelText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_modCreatorText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_modDescriptionText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_modNameText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_modStatusLabelText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_modStatusText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_modSubscriptionStatusText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_networkObject(::UnityW<::GlobalNamespace::VirtualStumpSerializer>  value) ;

constexpr void __cordl_internal_set_outdatedText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_pendingModId(int64_t  value) ;

constexpr void __cordl_internal_set_playerCountText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_rateDownButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value) ;

constexpr void __cordl_internal_set_rateUpButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value) ;

constexpr void __cordl_internal_set_subscribeString(::StringW  value) ;

constexpr void __cordl_internal_set_subscribedStatusString(::StringW  value) ;

constexpr void __cordl_internal_set_subscriptionToggleButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value) ;

constexpr void __cordl_internal_set_unloadPromptText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_unsubscribeString(::StringW  value) ;

constexpr void __cordl_internal_set_unsubscribedStatusString(::StringW  value) ;

constexpr void __cordl_internal_set_updateMapString(::StringW  value) ;

/// @brief Method .ctor, addr 0x59f9760, size 0x390, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModFileState,::StringW>* getStaticF_modStatusStrings() ;

/// [CompilerGenerated]
/// @brief Method get_currentMapMod, addr 0x59f5a40, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::Mod* get_currentMapMod() ;

static inline void setStaticF_modStatusStrings(::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModFileState,::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_currentMapMod, addr 0x59f5a30, size 0x10, virtual false, abstract: false, final false
inline void set_currentMapMod(::Modio::Mods::Mod*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsDetailsScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsDetailsScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsDetailsScreen(CustomMapsDetailsScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsDetailsScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsDetailsScreen(CustomMapsDetailsScreen const& ) = delete;

/// @brief Field LOGO_HEIGHT offset 0xffffffff size 0x4
static constexpr float_t  LOGO_HEIGHT{static_cast<float_t>(180.0f)};

/// @brief Field LOGO_WIDTH offset 0xffffffff size 0x4
static constexpr float_t  LOGO_WIDTH{static_cast<float_t>(320.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2738};

/// [SerializeField]
/// @brief Field mapScreenshotImage, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___mapScreenshotImage;

/// [SerializeField]
/// @brief Field hiddenMapLogo, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___hiddenMapLogo;

/// [SerializeField]
/// @brief Field loadingText, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___loadingText;

/// [SerializeField]
/// @brief Field modNameText, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___modNameText;

/// [SerializeField]
/// @brief Field modCreatorLabelText, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___modCreatorLabelText;

/// [SerializeField]
/// @brief Field modCreatorText, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___modCreatorText;

/// [SerializeField]
/// @brief Field modDescriptionText, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___modDescriptionText;

/// [SerializeField]
/// @brief Field modStatusText, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___modStatusText;

/// [SerializeField]
/// @brief Field modStatusLabelText, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___modStatusLabelText;

/// [SerializeField]
/// @brief Field modSubscriptionStatusText, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___modSubscriptionStatusText;

/// [SerializeField]
/// @brief Field loadingMapLabelText, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___loadingMapLabelText;

/// [SerializeField]
/// @brief Field loadingMapMessageText, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___loadingMapMessageText;

/// [SerializeField]
/// @brief Field hiddenRoomMapText, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___hiddenRoomMapText;

/// [SerializeField]
/// @brief Field mapReadyText, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___mapReadyText;

/// [SerializeField]
/// @brief Field unloadPromptText, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___unloadPromptText;

/// [SerializeField]
/// @brief Field errorText, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___errorText;

/// [SerializeField]
/// @brief Field outdatedText, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___outdatedText;

/// [SerializeField]
/// @brief Field playerCountText, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___playerCountText;

/// [SerializeField]
/// @brief Field subscriptionToggleButton, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  ___subscriptionToggleButton;

/// [SerializeField]
/// @brief Field favoriteToggleButton, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  ___favoriteToggleButton;

/// [SerializeField]
/// @brief Field rateUpButton, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  ___rateUpButton;

/// [SerializeField]
/// @brief Field rateDownButton, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  ___rateDownButton;

/// [SerializeField]
/// @brief Field loadButton, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  ___loadButton;

/// [SerializeField]
/// @brief Field deleteButton, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  ___deleteButton;

/// [SerializeField]
/// @brief Field modAvailableString, offset: 0xf0, size: 0x8, def value: None
 ::StringW  ___modAvailableString;

/// [SerializeField]
/// @brief Field mapAutoDownloadingString, offset: 0xf8, size: 0x8, def value: None
 ::StringW  ___mapAutoDownloadingString;

/// [SerializeField]
/// @brief Field mapDownloadingProgressString, offset: 0x100, size: 0x8, def value: None
 ::StringW  ___mapDownloadingProgressString;

/// [SerializeField]
/// @brief Field mapInstallingString, offset: 0x108, size: 0x8, def value: None
 ::StringW  ___mapInstallingString;

/// [SerializeField]
/// @brief Field mapInstallingProgressString, offset: 0x110, size: 0x8, def value: None
 ::StringW  ___mapInstallingProgressString;

/// [SerializeField]
/// @brief Field mapDownloadQueuedString, offset: 0x118, size: 0x8, def value: None
 ::StringW  ___mapDownloadQueuedString;

/// [SerializeField]
/// @brief Field mapLoadingString, offset: 0x120, size: 0x8, def value: None
 ::StringW  ___mapLoadingString;

/// [SerializeField]
/// @brief Field mapUnloadingString, offset: 0x128, size: 0x8, def value: None
 ::StringW  ___mapUnloadingString;

/// [SerializeField]
/// @brief Field mapLoadingErrorString, offset: 0x130, size: 0x8, def value: None
 ::StringW  ___mapLoadingErrorString;

/// [SerializeField]
/// @brief Field mapLoadingErrorDriverString, offset: 0x138, size: 0x8, def value: None
 ::StringW  ___mapLoadingErrorDriverString;

/// [SerializeField]
/// @brief Field mapLoadingErrorNonDriverString, offset: 0x140, size: 0x8, def value: None
 ::StringW  ___mapLoadingErrorNonDriverString;

/// [SerializeField]
/// @brief Field mapLoadingErrorInvalidModFile, offset: 0x148, size: 0x8, def value: None
 ::StringW  ___mapLoadingErrorInvalidModFile;

/// [SerializeField]
/// @brief Field networkObject, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VirtualStumpSerializer>  ___networkObject;

/// [SerializeField]
/// @brief Field mapNotDownloadedString, offset: 0x158, size: 0x8, def value: None
 ::StringW  ___mapNotDownloadedString;

/// [SerializeField]
/// @brief Field mapNeedsUpdateString, offset: 0x160, size: 0x8, def value: None
 ::StringW  ___mapNeedsUpdateString;

/// [SerializeField]
/// @brief Field subscribeString, offset: 0x168, size: 0x8, def value: None
 ::StringW  ___subscribeString;

/// [SerializeField]
/// @brief Field unsubscribeString, offset: 0x170, size: 0x8, def value: None
 ::StringW  ___unsubscribeString;

/// [SerializeField]
/// @brief Field subscribedStatusString, offset: 0x178, size: 0x8, def value: None
 ::StringW  ___subscribedStatusString;

/// [SerializeField]
/// @brief Field unsubscribedStatusString, offset: 0x180, size: 0x8, def value: None
 ::StringW  ___unsubscribedStatusString;

/// [SerializeField]
/// @brief Field loadMapString, offset: 0x188, size: 0x8, def value: None
 ::StringW  ___loadMapString;

/// [SerializeField]
/// @brief Field downloadMapString, offset: 0x190, size: 0x8, def value: None
 ::StringW  ___downloadMapString;

/// [SerializeField]
/// @brief Field updateMapString, offset: 0x198, size: 0x8, def value: None
 ::StringW  ___updateMapString;

/// [SerializeField]
/// @brief Field hiddenMapTitle, offset: 0x1a0, size: 0x8, def value: None
 ::StringW  ___hiddenMapTitle;

/// [SerializeField]
/// @brief Field hiddenMapDesc, offset: 0x1a8, size: 0x8, def value: None
 ::StringW  ___hiddenMapDesc;

/// @brief Field pendingModId, offset: 0x1b0, size: 0x8, def value: None
 int64_t  ___pendingModId;

/// [CompilerGenerated]
/// @brief Field <currentMapMod>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
 ::Modio::Mods::Mod*  ____currentMapMod_k__BackingField;

/// @brief Field hasModProfile, offset: 0x1c0, size: 0x1, def value: None
 bool  ___hasModProfile;

/// @brief Field mapLoadError, offset: 0x1c1, size: 0x1, def value: None
 bool  ___mapLoadError;

/// @brief Field isFavorite, offset: 0x1c2, size: 0x1, def value: None
 bool  ___isFavorite;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___mapScreenshotImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___hiddenMapLogo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___loadingText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___modNameText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___modCreatorLabelText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___modCreatorText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___modDescriptionText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___modStatusText) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___modStatusLabelText) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___modSubscriptionStatusText) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___loadingMapLabelText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___loadingMapMessageText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___hiddenRoomMapText) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___mapReadyText) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___unloadPromptText) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___errorText) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___outdatedText) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___playerCountText) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___subscriptionToggleButton) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___favoriteToggleButton) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___rateUpButton) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___rateDownButton) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___loadButton) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___deleteButton) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___modAvailableString) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___mapAutoDownloadingString) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___mapDownloadingProgressString) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___mapInstallingString) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___mapInstallingProgressString) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___mapDownloadQueuedString) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___mapLoadingString) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___mapUnloadingString) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___mapLoadingErrorString) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___mapLoadingErrorDriverString) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___mapLoadingErrorNonDriverString) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___mapLoadingErrorInvalidModFile) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___networkObject) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___mapNotDownloadedString) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___mapNeedsUpdateString) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___subscribeString) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___unsubscribeString) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___subscribedStatusString) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___unsubscribedStatusString) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___loadMapString) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___downloadMapString) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___updateMapString) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___hiddenMapTitle) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___hiddenMapDesc) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___pendingModId) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ____currentMapMod_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___hasModProfile) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___mapLoadError) == 0x1c1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDetailsScreen, ___isFavorite) == 0x1c2, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsDetailsScreen) == 0x1c8, "Size mismatch!");

} // namespace end def GlobalNamespace
