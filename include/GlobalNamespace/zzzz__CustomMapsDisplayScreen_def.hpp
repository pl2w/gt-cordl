#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsDisplayScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CustomMapsTerminalScreen_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapsDisplayScreen)
namespace GlobalNamespace {
struct CustomMapsDisplayScreen__UpdateStatus_d__53;
}
namespace GlobalNamespace {
struct ModInstallationManagement_OperationPhase;
}
namespace GlobalNamespace {
struct ModInstallationManagement_OperationType;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
struct MapLoadStatus;
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
class CustomMapsDisplayScreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsDisplayScreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsDisplayScreen*, "", "CustomMapsDisplayScreen");
// Dependencies CustomMapsTerminalScreen
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsDisplayScreen
class CORDL_TYPE CustomMapsDisplayScreen : public ::GlobalNamespace::CustomMapsTerminalScreen {
public:
// Declarations
using _UpdateStatus_d__53 = ::GlobalNamespace::CustomMapsDisplayScreen__UpdateStatus_d__53;

/// @brief Field <currentMapMod>k__BackingField, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentMapMod_k__BackingField, put=__cordl_internal_set__currentMapMod_k__BackingField)) ::Modio::Mods::Mod*  _currentMapMod_k__BackingField;

 __declspec(property(get=get_currentMapMod, put=set_currentMapMod)) ::Modio::Mods::Mod*  currentMapMod;

/// @brief Field errorText, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorText, put=__cordl_internal_set_errorText)) ::UnityW<::TMPro::TMP_Text>  errorText;

/// @brief Field hasModProfile, offset 0x128, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasModProfile, put=__cordl_internal_set_hasModProfile)) bool  hasModProfile;

/// @brief Field hiddenMapDesc, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_hiddenMapDesc, put=__cordl_internal_set_hiddenMapDesc)) ::StringW  hiddenMapDesc;

/// @brief Field hiddenMapLogo, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_hiddenMapLogo, put=__cordl_internal_set_hiddenMapLogo)) ::UnityW<::UnityEngine::Sprite>  hiddenMapLogo;

/// @brief Field hiddenMapTitle, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_hiddenMapTitle, put=__cordl_internal_set_hiddenMapTitle)) ::StringW  hiddenMapTitle;

/// @brief Field hiddenRoomMapText, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_hiddenRoomMapText, put=__cordl_internal_set_hiddenRoomMapText)) ::UnityW<::TMPro::TMP_Text>  hiddenRoomMapText;

/// @brief Field isFavorite, offset 0x12a, size 0x1 
 __declspec(property(get=__cordl_internal_get_isFavorite, put=__cordl_internal_set_isFavorite)) bool  isFavorite;

/// @brief Field loadRoomMapPromptText, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadRoomMapPromptText, put=__cordl_internal_set_loadRoomMapPromptText)) ::UnityW<::TMPro::TMP_Text>  loadRoomMapPromptText;

/// @brief Field loadingMapLabelText, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadingMapLabelText, put=__cordl_internal_set_loadingMapLabelText)) ::UnityW<::TMPro::TMP_Text>  loadingMapLabelText;

/// @brief Field loadingMapMessageText, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadingMapMessageText, put=__cordl_internal_set_loadingMapMessageText)) ::UnityW<::TMPro::TMP_Text>  loadingMapMessageText;

/// @brief Field loadingText, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadingText, put=__cordl_internal_set_loadingText)) ::UnityW<::TMPro::TMP_Text>  loadingText;

/// @brief Field mapAutoDownloadingString, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapAutoDownloadingString, put=__cordl_internal_set_mapAutoDownloadingString)) ::StringW  mapAutoDownloadingString;

/// @brief Field mapDownloadingProgressString, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapDownloadingProgressString, put=__cordl_internal_set_mapDownloadingProgressString)) ::StringW  mapDownloadingProgressString;

/// @brief Field mapInstallingProgressString, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapInstallingProgressString, put=__cordl_internal_set_mapInstallingProgressString)) ::StringW  mapInstallingProgressString;

/// @brief Field mapInstallingString, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapInstallingString, put=__cordl_internal_set_mapInstallingString)) ::StringW  mapInstallingString;

/// @brief Field mapLoadError, offset 0x129, size 0x1 
 __declspec(property(get=__cordl_internal_get_mapLoadError, put=__cordl_internal_set_mapLoadError)) bool  mapLoadError;

/// @brief Field mapLoadingErrorDriverString, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapLoadingErrorDriverString, put=__cordl_internal_set_mapLoadingErrorDriverString)) ::StringW  mapLoadingErrorDriverString;

/// @brief Field mapLoadingErrorInvalidModFile, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapLoadingErrorInvalidModFile, put=__cordl_internal_set_mapLoadingErrorInvalidModFile)) ::StringW  mapLoadingErrorInvalidModFile;

/// @brief Field mapLoadingErrorNonDriverString, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapLoadingErrorNonDriverString, put=__cordl_internal_set_mapLoadingErrorNonDriverString)) ::StringW  mapLoadingErrorNonDriverString;

/// @brief Field mapLoadingErrorString, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapLoadingErrorString, put=__cordl_internal_set_mapLoadingErrorString)) ::StringW  mapLoadingErrorString;

/// @brief Field mapLoadingString, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapLoadingString, put=__cordl_internal_set_mapLoadingString)) ::StringW  mapLoadingString;

/// @brief Field mapNeedsUpdateString, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapNeedsUpdateString, put=__cordl_internal_set_mapNeedsUpdateString)) ::StringW  mapNeedsUpdateString;

/// @brief Field mapNotDownloadedString, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapNotDownloadedString, put=__cordl_internal_set_mapNotDownloadedString)) ::StringW  mapNotDownloadedString;

/// @brief Field mapReadyText, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapReadyText, put=__cordl_internal_set_mapReadyText)) ::UnityW<::TMPro::TMP_Text>  mapReadyText;

/// @brief Field mapScreenshotImage, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapScreenshotImage, put=__cordl_internal_set_mapScreenshotImage)) ::UnityW<::UnityEngine::SpriteRenderer>  mapScreenshotImage;

/// @brief Field mapUnloadingString, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapUnloadingString, put=__cordl_internal_set_mapUnloadingString)) ::StringW  mapUnloadingString;

/// @brief Field modCreatorLabelText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_modCreatorLabelText, put=__cordl_internal_set_modCreatorLabelText)) ::UnityW<::TMPro::TMP_Text>  modCreatorLabelText;

/// @brief Field modCreatorText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_modCreatorText, put=__cordl_internal_set_modCreatorText)) ::UnityW<::TMPro::TMP_Text>  modCreatorText;

/// @brief Field modDescriptionText, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_modDescriptionText, put=__cordl_internal_set_modDescriptionText)) ::UnityW<::TMPro::TMP_Text>  modDescriptionText;

/// @brief Field modNameText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_modNameText, put=__cordl_internal_set_modNameText)) ::UnityW<::TMPro::TMP_Text>  modNameText;

/// @brief Field outdatedText, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_outdatedText, put=__cordl_internal_set_outdatedText)) ::UnityW<::TMPro::TMP_Text>  outdatedText;

/// @brief Field pendingModId, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_pendingModId, put=__cordl_internal_set_pendingModId)) int64_t  pendingModId;

/// @brief Field playerCountText, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCountText, put=__cordl_internal_set_playerCountText)) ::UnityW<::TMPro::TMP_Text>  playerCountText;

/// @brief Method GetModId, addr 0x59fc770, size 0x18, virtual false, abstract: false, final false
inline ::Modio::Mods::ModId GetModId() ;

/// @brief Method HandleModManagementEvent, addr 0x59fc64c, size 0x124, virtual false, abstract: false, final false
inline void HandleModManagementEvent(::Modio::Mods::Mod*  mod, ::Modio::Mods::Modfile*  modfile, ::GlobalNamespace::ModInstallationManagement_OperationType  jobType, ::GlobalNamespace::ModInstallationManagement_OperationPhase  jobPhase) ;

/// @brief Method Hide, addr 0x59fb894, size 0x3ec, virtual true, abstract: false, final false
inline void Hide() ;

/// @brief Method Initialize, addr 0x59fadd4, size 0x4, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method IsCurrentModHidden, addr 0x59fcb44, size 0xd0, virtual false, abstract: false, final false
inline bool IsCurrentModHidden() ;

static inline ::GlobalNamespace::CustomMapsDisplayScreen* New_ctor() ;

/// @brief Method OnGetModLogo, addr 0x59fcf00, size 0x190, virtual false, abstract: false, final false
inline void OnGetModLogo(::Modio::Error*  error, ::UnityEngine::Texture2D*  modLogo) ;

/// @brief Method OnMapLoadComplete, addr 0x59fd090, size 0xc, virtual false, abstract: false, final false
inline void OnMapLoadComplete(bool  success) ;

/// @brief Method OnMapLoadComplete_UIUpdate, addr 0x59fcc14, size 0xf0, virtual false, abstract: false, final false
inline void OnMapLoadComplete_UIUpdate() ;

/// @brief Method OnMapLoadProgress, addr 0x59fd168, size 0x500, virtual false, abstract: false, final false
inline void OnMapLoadProgress(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  loadStatus, int32_t  progress, ::StringW  message) ;

/// @brief Method OnMapUnloaded, addr 0x59fd09c, size 0x38, virtual false, abstract: false, final false
inline void OnMapUnloaded() ;

/// @brief Method OnModIOLoggedIn, addr 0x59fbc80, size 0xb4, virtual false, abstract: false, final false
inline void OnModIOLoggedIn() ;

/// @brief Method OnModIOLoggedOut, addr 0x59fc604, size 0x40, virtual false, abstract: false, final false
inline void OnModIOLoggedOut() ;

/// @brief Method OnModIOUserChanged, addr 0x59fc644, size 0x8, virtual false, abstract: false, final false
inline void OnModIOUserChanged(::Modio::Users::User*  user) ;

/// @brief Method OnProfileReceived, addr 0x59fc8f8, size 0x160, virtual false, abstract: false, final false
inline void OnProfileReceived(::Modio::Error*  error, ::Modio::Mods::Mod*  mod) ;

/// @brief Method OnRoomMapChanged, addr 0x59fca58, size 0xec, virtual false, abstract: false, final false
inline void OnRoomMapChanged(::Modio::Mods::ModId  roomMapID) ;

/// @brief Method OnRoomMapRetrieved, addr 0x59fd0d4, size 0x94, virtual false, abstract: false, final false
inline void OnRoomMapRetrieved(::Modio::Error*  error, ::Modio::Mods::Mod*  mod) ;

/// @brief Method RefreshCurrentMapMod, addr 0x59fbd34, size 0x138, virtual false, abstract: false, final false
inline void RefreshCurrentMapMod() ;

/// @brief Method ResetToDefaultView, addr 0x59fb410, size 0x484, virtual false, abstract: false, final false
inline void ResetToDefaultView() ;

/// @brief Method RetrieveModFromModIO, addr 0x59fc788, size 0x100, virtual false, abstract: false, final false
inline void RetrieveModFromModIO(int64_t  id, bool  forceUpdate, ::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*  callback) ;

/// @brief Method SetModProfile, addr 0x59fc888, size 0x70, virtual false, abstract: false, final false
inline void SetModProfile(::Modio::Mods::Mod*  mod) ;

/// @brief Method Show, addr 0x59fadd8, size 0x638, virtual true, abstract: false, final false
inline void Show() ;

/// @brief Method ShowLoadRoomMapPrompt, addr 0x59fcd04, size 0x1fc, virtual false, abstract: false, final false
inline void ShowLoadRoomMapPrompt() ;

/// @brief Method UpdateMapDetails, addr 0x59fbe6c, size 0x6a8, virtual false, abstract: false, final false
inline void UpdateMapDetails(bool  refreshScreenState) ;

/// [AsyncStateMachine(typeof(CustomMapsDisplayScreen::<UpdateStatus>d__53))]
/// @brief Method UpdateStatus, addr 0x59fc514, size 0xf0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* UpdateStatus(bool  errorEncountered) ;

/// [CompilerGenerated]
/// @brief Method <ResetToDefaultView>b__50_0, addr 0x59fd8b4, size 0x4, virtual false, abstract: false, final false
inline void _ResetToDefaultView_b__50_0(::Modio::Error*  error, ::Modio::Mods::Mod*  mod) ;

/// [CompilerGenerated]
/// @brief Method <UpdateMapDetails>b__51_0, addr 0x59fd8b8, size 0x4, virtual false, abstract: false, final false
inline void _UpdateMapDetails_b__51_0(::Modio::Error*  error, ::Modio::Mods::Mod*  mod) ;

/// [NullableContext(1)]
/// [CompilerGenerated]
/// @brief Method <UpdateStatus>b__53_0, addr 0x59fd8bc, size 0x20, virtual false, abstract: false, final false
inline void _UpdateStatus_b__53_0(::StringW  count) ;

constexpr ::Modio::Mods::Mod* const& __cordl_internal_get__currentMapMod_k__BackingField() const;

constexpr ::Modio::Mods::Mod*& __cordl_internal_get__currentMapMod_k__BackingField() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_errorText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_errorText() ;

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

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_loadRoomMapPromptText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_loadRoomMapPromptText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_loadingMapLabelText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_loadingMapLabelText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_loadingMapMessageText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_loadingMapMessageText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_loadingText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_loadingText() ;

constexpr ::StringW const& __cordl_internal_get_mapAutoDownloadingString() const;

constexpr ::StringW& __cordl_internal_get_mapAutoDownloadingString() ;

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

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_modCreatorLabelText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_modCreatorLabelText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_modCreatorText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_modCreatorText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_modDescriptionText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_modDescriptionText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_modNameText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_modNameText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_outdatedText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_outdatedText() ;

constexpr int64_t const& __cordl_internal_get_pendingModId() const;

constexpr int64_t& __cordl_internal_get_pendingModId() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_playerCountText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_playerCountText() ;

constexpr void __cordl_internal_set__currentMapMod_k__BackingField(::Modio::Mods::Mod*  value) ;

constexpr void __cordl_internal_set_errorText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_hasModProfile(bool  value) ;

constexpr void __cordl_internal_set_hiddenMapDesc(::StringW  value) ;

constexpr void __cordl_internal_set_hiddenMapLogo(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_hiddenMapTitle(::StringW  value) ;

constexpr void __cordl_internal_set_hiddenRoomMapText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_isFavorite(bool  value) ;

constexpr void __cordl_internal_set_loadRoomMapPromptText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_loadingMapLabelText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_loadingMapMessageText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_loadingText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_mapAutoDownloadingString(::StringW  value) ;

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

constexpr void __cordl_internal_set_modCreatorLabelText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_modCreatorText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_modDescriptionText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_modNameText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_outdatedText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_pendingModId(int64_t  value) ;

constexpr void __cordl_internal_set_playerCountText(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x59fd668, size 0x24c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_currentMapMod, addr 0x59fadcc, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::Mod* get_currentMapMod() ;

/// [CompilerGenerated]
/// @brief Method set_currentMapMod, addr 0x59fadbc, size 0x10, virtual false, abstract: false, final false
inline void set_currentMapMod(::Modio::Mods::Mod*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsDisplayScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsDisplayScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsDisplayScreen(CustomMapsDisplayScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsDisplayScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsDisplayScreen(CustomMapsDisplayScreen const& ) = delete;

/// @brief Field LOGO_HEIGHT offset 0xffffffff size 0x4
static constexpr float_t  LOGO_HEIGHT{static_cast<float_t>(180.0f)};

/// @brief Field LOGO_WIDTH offset 0xffffffff size 0x4
static constexpr float_t  LOGO_WIDTH{static_cast<float_t>(320.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2740};

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
/// @brief Field loadingMapLabelText, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___loadingMapLabelText;

/// [SerializeField]
/// @brief Field loadingMapMessageText, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___loadingMapMessageText;

/// [SerializeField]
/// @brief Field loadRoomMapPromptText, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___loadRoomMapPromptText;

/// [SerializeField]
/// @brief Field hiddenRoomMapText, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___hiddenRoomMapText;

/// [SerializeField]
/// @brief Field mapReadyText, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___mapReadyText;

/// [SerializeField]
/// @brief Field errorText, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___errorText;

/// [SerializeField]
/// @brief Field outdatedText, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___outdatedText;

/// [SerializeField]
/// @brief Field playerCountText, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___playerCountText;

/// [SerializeField]
/// @brief Field mapAutoDownloadingString, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___mapAutoDownloadingString;

/// [SerializeField]
/// @brief Field mapDownloadingProgressString, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___mapDownloadingProgressString;

/// [SerializeField]
/// @brief Field mapInstallingString, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ___mapInstallingString;

/// [SerializeField]
/// @brief Field mapInstallingProgressString, offset: 0xc0, size: 0x8, def value: None
 ::StringW  ___mapInstallingProgressString;

/// [SerializeField]
/// @brief Field mapLoadingString, offset: 0xc8, size: 0x8, def value: None
 ::StringW  ___mapLoadingString;

/// [SerializeField]
/// @brief Field mapUnloadingString, offset: 0xd0, size: 0x8, def value: None
 ::StringW  ___mapUnloadingString;

/// [SerializeField]
/// @brief Field mapLoadingErrorString, offset: 0xd8, size: 0x8, def value: None
 ::StringW  ___mapLoadingErrorString;

/// [SerializeField]
/// @brief Field mapLoadingErrorDriverString, offset: 0xe0, size: 0x8, def value: None
 ::StringW  ___mapLoadingErrorDriverString;

/// [SerializeField]
/// @brief Field mapLoadingErrorNonDriverString, offset: 0xe8, size: 0x8, def value: None
 ::StringW  ___mapLoadingErrorNonDriverString;

/// [SerializeField]
/// @brief Field mapLoadingErrorInvalidModFile, offset: 0xf0, size: 0x8, def value: None
 ::StringW  ___mapLoadingErrorInvalidModFile;

/// [SerializeField]
/// @brief Field mapNotDownloadedString, offset: 0xf8, size: 0x8, def value: None
 ::StringW  ___mapNotDownloadedString;

/// [SerializeField]
/// @brief Field mapNeedsUpdateString, offset: 0x100, size: 0x8, def value: None
 ::StringW  ___mapNeedsUpdateString;

/// [SerializeField]
/// @brief Field hiddenMapTitle, offset: 0x108, size: 0x8, def value: None
 ::StringW  ___hiddenMapTitle;

/// [SerializeField]
/// @brief Field hiddenMapDesc, offset: 0x110, size: 0x8, def value: None
 ::StringW  ___hiddenMapDesc;

/// @brief Field pendingModId, offset: 0x118, size: 0x8, def value: None
 int64_t  ___pendingModId;

/// [CompilerGenerated]
/// @brief Field <currentMapMod>k__BackingField, offset: 0x120, size: 0x8, def value: None
 ::Modio::Mods::Mod*  ____currentMapMod_k__BackingField;

/// @brief Field hasModProfile, offset: 0x128, size: 0x1, def value: None
 bool  ___hasModProfile;

/// @brief Field mapLoadError, offset: 0x129, size: 0x1, def value: None
 bool  ___mapLoadError;

/// @brief Field isFavorite, offset: 0x12a, size: 0x1, def value: None
 bool  ___isFavorite;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___mapScreenshotImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___hiddenMapLogo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___loadingText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___modNameText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___modCreatorLabelText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___modCreatorText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___modDescriptionText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___loadingMapLabelText) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___loadingMapMessageText) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___loadRoomMapPromptText) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___hiddenRoomMapText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___mapReadyText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___errorText) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___outdatedText) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___playerCountText) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___mapAutoDownloadingString) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___mapDownloadingProgressString) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___mapInstallingString) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___mapInstallingProgressString) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___mapLoadingString) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___mapUnloadingString) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___mapLoadingErrorString) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___mapLoadingErrorDriverString) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___mapLoadingErrorNonDriverString) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___mapLoadingErrorInvalidModFile) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___mapNotDownloadedString) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___mapNeedsUpdateString) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___hiddenMapTitle) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___hiddenMapDesc) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___pendingModId) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ____currentMapMod_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___hasModProfile) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___mapLoadError) == 0x129, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen, ___isFavorite) == 0x12a, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsDisplayScreen) == 0x130, "Size mismatch!");

} // namespace end def GlobalNamespace
