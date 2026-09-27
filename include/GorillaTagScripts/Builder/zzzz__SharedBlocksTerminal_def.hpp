#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksTerminal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksTerminal_ScreenType_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksTerminal_TerminalState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SharedBlocksTerminal)
namespace GlobalNamespace {
class GorillaFriendCollider;
}
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace GlobalNamespace {
class LocalizedText;
}
namespace GlobalNamespace {
struct SharedBlocksTerminal_ScreenType;
}
namespace GlobalNamespace {
struct SharedBlocksTerminal_TerminalState;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTagScripts::Builder {
struct SharedBlocksKeyboardBindings;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_SharedBlocksMap;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksScreenSearch;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksScreen;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksTerminal_SharedBlocksTerminalState;
}
namespace GorillaTagScripts {
class BuilderTable;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
class Action_1;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class SharedBlocksTerminal;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksTerminal_SharedBlocksTerminalState;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksTerminal*);
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksTerminal*, "GorillaTagScripts.Builder", "SharedBlocksTerminal");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState*, "GorillaTagScripts.Builder", "SharedBlocksTerminal/SharedBlocksTerminalState");
// Dependencies GTZone, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksTerminal
class CORDL_TYPE SharedBlocksTerminal : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ScreenType = ::GlobalNamespace::SharedBlocksTerminal_ScreenType;

using TerminalState = ::GlobalNamespace::SharedBlocksTerminal_TerminalState;

using SharedBlocksTerminalState = ::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState;

 __declspec(property(get=get_GetDriverID)) int32_t  GetDriverID;

 __declspec(property(get=get_IsDriver)) bool  IsDriver;

 __declspec(property(get=get_IsTerminalLocked)) bool  IsTerminalLocked;

/// @brief Field OnMapLoadComplete, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMapLoadComplete, put=__cordl_internal_set_OnMapLoadComplete)) ::System::Action_1<bool>*  OnMapLoadComplete;

 __declspec(property(get=get_SelectedMap)) ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  SelectedMap;

/// @brief Field _currentDriverLoc, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentDriverLoc, put=__cordl_internal_set__currentDriverLoc)) ::UnityW<::GlobalNamespace::LocalizedText>  _currentDriverLoc;

/// @brief Field awaitingWebRequest, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_awaitingWebRequest, put=__cordl_internal_set_awaitingWebRequest)) bool  awaitingWebRequest;

/// @brief Field cachedLocalPlayerID, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_cachedLocalPlayerID, put=__cordl_internal_set_cachedLocalPlayerID)) int32_t  cachedLocalPlayerID;

/// @brief Field currentDriverLabel, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentDriverLabel, put=__cordl_internal_set_currentDriverLabel)) ::UnityW<::TMPro::TMP_Text>  currentDriverLabel;

/// @brief Field currentDriverText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentDriverText, put=__cordl_internal_set_currentDriverText)) ::UnityW<::TMPro::TMP_Text>  currentDriverText;

/// @brief Field currentMapSelectionText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentMapSelectionText, put=__cordl_internal_set_currentMapSelectionText)) ::UnityW<::TMPro::TMP_Text>  currentMapSelectionText;

/// @brief Field currentScreen, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentScreen, put=__cordl_internal_set_currentScreen)) ::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreen>  currentScreen;

/// @brief Field driverRig, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_driverRig, put=__cordl_internal_set_driverRig)) ::UnityW<::GlobalNamespace::VRRig>  driverRig;

/// @brief Field hasInitialized, offset 0xc9, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasInitialized, put=__cordl_internal_set_hasInitialized)) bool  hasInitialized;

/// @brief Field isLoadingMap, offset 0xbc, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLoadingMap, put=__cordl_internal_set_isLoadingMap)) bool  isLoadingMap;

/// @brief Field isTerminalLocked, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_isTerminalLocked, put=__cordl_internal_set_isTerminalLocked)) bool  isTerminalLocked;

/// @brief Field lastLoadTime, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastLoadTime, put=__cordl_internal_set_lastLoadTime)) float_t  lastLoadTime;

/// @brief Field lastRandomLoadTime, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastRandomLoadTime, put=__cordl_internal_set_lastRandomLoadTime)) float_t  lastRandomLoadTime;

/// @brief Field linkedTable, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_linkedTable, put=__cordl_internal_set_linkedTable)) ::UnityW<::GorillaTagScripts::BuilderTable>  linkedTable;

/// @brief Field loadMapCooldown, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_loadMapCooldown, put=__cordl_internal_set_loadMapCooldown)) float_t  loadMapCooldown;

/// @brief Field loadRandomMapCooldown, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_loadRandomMapCooldown, put=__cordl_internal_set_loadRandomMapCooldown)) float_t  loadRandomMapCooldown;

/// @brief Field lobbyTrigger, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_lobbyTrigger, put=__cordl_internal_set_lobbyTrigger)) ::UnityW<::GlobalNamespace::GorillaFriendCollider>  lobbyTrigger;

/// @brief Field localState, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_localState, put=__cordl_internal_set_localState)) ::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState*  localState;

/// @brief Field noDriverScreen, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_noDriverScreen, put=__cordl_internal_set_noDriverScreen)) ::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreen>  noDriverScreen;

/// @brief Field pendingRandomAfterMapsLoaded, offset 0xbd, size 0x1 
 __declspec(property(get=__cordl_internal_get_pendingRandomAfterMapsLoaded, put=__cordl_internal_set_pendingRandomAfterMapsLoaded)) bool  pendingRandomAfterMapsLoaded;

 __declspec(property(get=get_playersInLobby)) int32_t  playersInLobby;

/// @brief Field playersInRoom, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_playersInRoom, put=__cordl_internal_set_playersInRoom)) int32_t  playersInRoom;

/// @brief Field randomMapsRequestInProgress, offset 0xbe, size 0x1 
 __declspec(property(get=__cordl_internal_get_randomMapsRequestInProgress, put=__cordl_internal_set_randomMapsRequestInProgress)) bool  randomMapsRequestInProgress;

/// @brief Field requestedMapID, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestedMapID, put=__cordl_internal_set_requestedMapID)) ::StringW  requestedMapID;

/// @brief Field sb, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sb, put=setStaticF_sb)) ::System::Text::StringBuilder*  sb;

/// @brief Field searchScreen, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_searchScreen, put=__cordl_internal_set_searchScreen)) ::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreenSearch>  searchScreen;

/// @brief Field selectedMap, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectedMap, put=__cordl_internal_set_selectedMap)) ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  selectedMap;

/// @brief Field statusMessageText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_statusMessageText, put=__cordl_internal_set_statusMessageText)) ::UnityW<::TMPro::TMP_Text>  statusMessageText;

/// @brief Field tableZone, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_tableZone, put=__cordl_internal_set_tableZone)) ::GlobalNamespace::GTZone  tableZone;

/// @brief Field tempRigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempRigs, put=setStaticF_tempRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  tempRigs;

/// @brief Field terminalControlButton, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_terminalControlButton, put=__cordl_internal_set_terminalControlButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  terminalControlButton;

/// @brief Field useNametags, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_useNametags, put=__cordl_internal_set_useNametags)) bool  useNametags;

/// @brief Method AreAllPlayersInLobby, addr 0x5c4250c, size 0x38, virtual false, abstract: false, final false
inline bool AreAllPlayersInLobby() ;

/// @brief Method CanChangeMapState, addr 0x5c44004, size 0x330, virtual false, abstract: false, final false
inline bool CanChangeMapState(bool  load, ::by_ref<::StringW>  disallowedReason) ;

/// @brief Method GetLobbyText, addr 0x5c423cc, size 0x140, virtual false, abstract: false, final false
inline ::StringW GetLobbyText() ;

/// @brief Method GetTable, addr 0x5c428bc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GorillaTagScripts::BuilderTable> GetTable() ;

/// @brief Method Init, addr 0x5c428dc, size 0x404, virtual false, abstract: false, final false
inline void Init(::GorillaTagScripts::BuilderTable*  table) ;

/// @brief Method IsLocalPlayerInLobby, addr 0x5c44334, size 0xf8, virtual false, abstract: false, final false
inline bool IsLocalPlayerInLobby() ;

/// @brief Method IsPlayerDriver, addr 0x5c45528, size 0x2c, virtual false, abstract: false, final false
inline bool IsPlayerDriver(::Photon::Realtime::Player*  player) ;

/// @brief Method LateUpdate, addr 0x5c4340c, size 0x12c, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LoadPopularMapsThenRandomize, addr 0x5c44b10, size 0x1a0, virtual false, abstract: false, final false
inline void LoadPopularMapsThenRandomize() ;

/// @brief Method LoadRandomMap, addr 0x5c44cb0, size 0x168, virtual false, abstract: false, final false
inline void LoadRandomMap(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  randomMap) ;

/// @brief Method MapIDToDisplayedString, addr 0x5c40b84, size 0x268, virtual false, abstract: false, final false
static inline ::StringW MapIDToDisplayedString(::StringW  mapID) ;

static inline ::GorillaTagScripts::Builder::SharedBlocksTerminal* New_ctor() ;

/// @brief Method OnBackButtonPressed, addr 0x5c44e18, size 0x4, virtual false, abstract: false, final false
inline void OnBackButtonPressed() ;

/// @brief Method OnDeleteButtonPressed, addr 0x5c4476c, size 0xb0, virtual false, abstract: false, final false
inline void OnDeleteButtonPressed() ;

/// @brief Method OnDestroy, addr 0x5c43a88, size 0x504, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDownButtonPressed, addr 0x5c446e4, size 0x88, virtual false, abstract: false, final false
inline void OnDownButtonPressed() ;

/// @brief Method OnDriverNameChanged, addr 0x5c45594, size 0x4, virtual false, abstract: false, final false
inline void OnDriverNameChanged() ;

/// @brief Method OnJoinedRoom, addr 0x5c4565c, size 0x88, virtual false, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnLetterPressed, addr 0x5c44a74, size 0x9c, virtual false, abstract: false, final false
inline void OnLetterPressed(::StringW  letter) ;

/// @brief Method OnLoadMapPressed, addr 0x5c40430, size 0x668, virtual false, abstract: false, final false
inline void OnLoadMapPressed(bool  isRandom) ;

/// @brief Method OnNumberPressed, addr 0x5c449d8, size 0x9c, virtual false, abstract: false, final false
inline void OnNumberPressed(int32_t  number) ;

/// @brief Method OnPlayerMapRequestComplete, addr 0x5c43f8c, size 0x78, virtual false, abstract: false, final false
inline void OnPlayerMapRequestComplete(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  response) ;

/// @brief Method OnRandomMapsLoadedForRandomButton, addr 0x5c45368, size 0x1c0, virtual false, abstract: false, final false
inline void OnRandomMapsLoadedForRandomButton(bool  success) ;

/// @brief Method OnRandomizeButtonPressed, addr 0x5c448cc, size 0x10c, virtual false, abstract: false, final false
inline void OnRandomizeButtonPressed() ;

/// @brief Method OnReturnedToSinglePlayer, addr 0x5c45844, size 0xac, virtual false, abstract: false, final false
inline void OnReturnedToSinglePlayer() ;

/// @brief Method OnSelectButtonPressed, addr 0x5c4481c, size 0xb0, virtual false, abstract: false, final false
inline void OnSelectButtonPressed() ;

/// @brief Method OnSharedBlocksMapLoadFailed, addr 0x5c459a0, size 0x34, virtual false, abstract: false, final false
inline void OnSharedBlocksMapLoadFailed(::StringW  message) ;

/// @brief Method OnSharedBlocksMapLoadStart, addr 0x5c459d4, size 0xb0, virtual false, abstract: false, final false
inline void OnSharedBlocksMapLoadStart() ;

/// @brief Method OnSharedBlocksMapLoaded, addr 0x5c458f0, size 0xb0, virtual false, abstract: false, final false
inline void OnSharedBlocksMapLoaded(::StringW  mapID) ;

/// @brief Method OnTerminalControlPressed, addr 0x5c44e1c, size 0x15c, virtual false, abstract: false, final false
inline void OnTerminalControlPressed() ;

/// @brief Method OnUpButtonPressed, addr 0x5c4465c, size 0x88, virtual false, abstract: false, final false
inline void OnUpButtonPressed() ;

/// @brief Method PressButton, addr 0x5c4442c, size 0x230, virtual false, abstract: false, final false
inline void PressButton(::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings  buttonPressed) ;

/// @brief Method RefreshActiveScreen, addr 0x5c43140, size 0x1a8, virtual false, abstract: false, final false
inline void RefreshActiveScreen() ;

/// @brief Method RefreshDriverNickname, addr 0x5c43538, size 0x550, virtual false, abstract: false, final false
inline void RefreshDriverNickname() ;

/// @brief Method RefreshLobbyCount, addr 0x5c422c0, size 0x10c, virtual false, abstract: false, final false
inline void RefreshLobbyCount() ;

/// @brief Method ResetTerminalControl, addr 0x5c456e4, size 0x160, virtual false, abstract: false, final false
inline void ResetTerminalControl() ;

/// @brief Method SelectMapIDAndOpenInfo, addr 0x5c40fe8, size 0x108, virtual false, abstract: false, final false
inline void SelectMapIDAndOpenInfo(::StringW  mapID) ;

/// @brief Method SetStatusText, addr 0x5c410f0, size 0x48, virtual false, abstract: false, final false
inline void SetStatusText(::StringW  text) ;

/// @brief Method SetTerminalDriver, addr 0x5c44f78, size 0x3f0, virtual false, abstract: false, final false
inline void SetTerminalDriver(int32_t  playerNum) ;

/// @brief Method SetTerminalState, addr 0x5c42ce8, size 0x458, virtual false, abstract: false, final false
inline void SetTerminalState(::GlobalNamespace::SharedBlocksTerminal_TerminalState  state) ;

/// @brief Method Start, addr 0x5c432e8, size 0x124, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateTerminalButton, addr 0x5c45598, size 0x28, virtual false, abstract: false, final false
inline void UpdateTerminalButton() ;

/// @brief Method ValidateLoadMapRequest, addr 0x5c455c0, size 0x9c, virtual false, abstract: false, final false
inline bool ValidateLoadMapRequest(::StringW  mapID, int32_t  playerNum) ;

/// @brief Method ValidateTerminalControlRequest, addr 0x5c45554, size 0x40, virtual false, abstract: false, final false
inline bool ValidateTerminalControlRequest(bool  locked, int32_t  playerNumber) ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnMapLoadComplete() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnMapLoadComplete() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get__currentDriverLoc() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get__currentDriverLoc() ;

constexpr bool const& __cordl_internal_get_awaitingWebRequest() const;

constexpr bool& __cordl_internal_get_awaitingWebRequest() ;

constexpr int32_t const& __cordl_internal_get_cachedLocalPlayerID() const;

constexpr int32_t& __cordl_internal_get_cachedLocalPlayerID() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_currentDriverLabel() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_currentDriverLabel() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_currentDriverText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_currentDriverText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_currentMapSelectionText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_currentMapSelectionText() ;

constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreen> const& __cordl_internal_get_currentScreen() const;

constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreen>& __cordl_internal_get_currentScreen() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_driverRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_driverRig() ;

constexpr bool const& __cordl_internal_get_hasInitialized() const;

constexpr bool& __cordl_internal_get_hasInitialized() ;

constexpr bool const& __cordl_internal_get_isLoadingMap() const;

constexpr bool& __cordl_internal_get_isLoadingMap() ;

constexpr bool const& __cordl_internal_get_isTerminalLocked() const;

constexpr bool& __cordl_internal_get_isTerminalLocked() ;

constexpr float_t const& __cordl_internal_get_lastLoadTime() const;

constexpr float_t& __cordl_internal_get_lastLoadTime() ;

constexpr float_t const& __cordl_internal_get_lastRandomLoadTime() const;

constexpr float_t& __cordl_internal_get_lastRandomLoadTime() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& __cordl_internal_get_linkedTable() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& __cordl_internal_get_linkedTable() ;

constexpr float_t const& __cordl_internal_get_loadMapCooldown() const;

constexpr float_t& __cordl_internal_get_loadMapCooldown() ;

constexpr float_t const& __cordl_internal_get_loadRandomMapCooldown() const;

constexpr float_t& __cordl_internal_get_loadRandomMapCooldown() ;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& __cordl_internal_get_lobbyTrigger() const;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& __cordl_internal_get_lobbyTrigger() ;

constexpr ::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState* const& __cordl_internal_get_localState() const;

constexpr ::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState*& __cordl_internal_get_localState() ;

constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreen> const& __cordl_internal_get_noDriverScreen() const;

constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreen>& __cordl_internal_get_noDriverScreen() ;

constexpr bool const& __cordl_internal_get_pendingRandomAfterMapsLoaded() const;

constexpr bool& __cordl_internal_get_pendingRandomAfterMapsLoaded() ;

constexpr int32_t const& __cordl_internal_get_playersInRoom() const;

constexpr int32_t& __cordl_internal_get_playersInRoom() ;

constexpr bool const& __cordl_internal_get_randomMapsRequestInProgress() const;

constexpr bool& __cordl_internal_get_randomMapsRequestInProgress() ;

constexpr ::StringW const& __cordl_internal_get_requestedMapID() const;

constexpr ::StringW& __cordl_internal_get_requestedMapID() ;

constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreenSearch> const& __cordl_internal_get_searchScreen() const;

constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreenSearch>& __cordl_internal_get_searchScreen() ;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap* const& __cordl_internal_get_selectedMap() const;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*& __cordl_internal_get_selectedMap() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_statusMessageText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_statusMessageText() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_tableZone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_tableZone() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_terminalControlButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_terminalControlButton() ;

constexpr bool const& __cordl_internal_get_useNametags() const;

constexpr bool& __cordl_internal_get_useNametags() ;

constexpr void __cordl_internal_set_OnMapLoadComplete(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set__currentDriverLoc(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set_awaitingWebRequest(bool  value) ;

constexpr void __cordl_internal_set_cachedLocalPlayerID(int32_t  value) ;

constexpr void __cordl_internal_set_currentDriverLabel(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_currentDriverText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_currentMapSelectionText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_currentScreen(::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreen>  value) ;

constexpr void __cordl_internal_set_driverRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_hasInitialized(bool  value) ;

constexpr void __cordl_internal_set_isLoadingMap(bool  value) ;

constexpr void __cordl_internal_set_isTerminalLocked(bool  value) ;

constexpr void __cordl_internal_set_lastLoadTime(float_t  value) ;

constexpr void __cordl_internal_set_lastRandomLoadTime(float_t  value) ;

constexpr void __cordl_internal_set_linkedTable(::UnityW<::GorillaTagScripts::BuilderTable>  value) ;

constexpr void __cordl_internal_set_loadMapCooldown(float_t  value) ;

constexpr void __cordl_internal_set_loadRandomMapCooldown(float_t  value) ;

constexpr void __cordl_internal_set_lobbyTrigger(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value) ;

constexpr void __cordl_internal_set_localState(::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState*  value) ;

constexpr void __cordl_internal_set_noDriverScreen(::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreen>  value) ;

constexpr void __cordl_internal_set_pendingRandomAfterMapsLoaded(bool  value) ;

constexpr void __cordl_internal_set_playersInRoom(int32_t  value) ;

constexpr void __cordl_internal_set_randomMapsRequestInProgress(bool  value) ;

constexpr void __cordl_internal_set_requestedMapID(::StringW  value) ;

constexpr void __cordl_internal_set_searchScreen(::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreenSearch>  value) ;

constexpr void __cordl_internal_set_selectedMap(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  value) ;

constexpr void __cordl_internal_set_statusMessageText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_tableZone(::GlobalNamespace::GTZone  value) ;

constexpr void __cordl_internal_set_terminalControlButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_useNametags(bool  value) ;

/// @brief Method .ctor, addr 0x5c45a84, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Text::StringBuilder* getStaticF_sb() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* getStaticF_tempRigs() ;

/// @brief Method get_GetDriverID, addr 0x5c428c4, size 0x18, virtual false, abstract: false, final false
inline int32_t get_GetDriverID() ;

/// @brief Method get_IsDriver, addr 0x5c4282c, size 0x90, virtual false, abstract: false, final false
inline bool get_IsDriver() ;

/// @brief Method get_IsTerminalLocked, addr 0x5c427d4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsTerminalLocked() ;

/// @brief Method get_SelectedMap, addr 0x5c427cc, size 0x8, virtual false, abstract: false, final false
inline ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap* get_SelectedMap() ;

/// @brief Method get_playersInLobby, addr 0x5c427dc, size 0x50, virtual false, abstract: false, final false
inline int32_t get_playersInLobby() ;

static inline void setStaticF_sb(::System::Text::StringBuilder*  value) ;

static inline void setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksTerminal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksTerminal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksTerminal(SharedBlocksTerminal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksTerminal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksTerminal(SharedBlocksTerminal const& ) = delete;

/// @brief Field NO_DRIVER_ID offset 0xffffffff size 0x4
static constexpr int32_t  NO_DRIVER_ID{static_cast<int32_t>(0xfffffffe)};

/// @brief Field POINTER offset 0xffffffff size 0x8
static constexpr ::ConstString  POINTER{u"> "};

/// @brief Field SHARE_BLOCKS_TERMINAL_CONTROLLER_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_CONTROLLER_LABEL_KEY{u"SHARE_BLOCKS_TERMINAL_CONTROLLER_LABEL"};

/// @brief Field SHARE_BLOCKS_TERMINAL_CONTROL_BUTTON_AVAILABLE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_CONTROL_BUTTON_AVAILABLE_KEY{u"SHARE_BLOCKS_TERMINAL_CONTROL_BUTTON_AVAILABLE"};

/// @brief Field SHARE_BLOCKS_TERMINAL_CONTROL_BUTTON_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_CONTROL_BUTTON_KEY{u"SHARE_BLOCKS_TERMINAL_CONTROL_BUTTON"};

/// @brief Field SHARE_BLOCKS_TERMINAL_CONTROL_BUTTON_LOCKED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_CONTROL_BUTTON_LOCKED_KEY{u"SHARE_BLOCKS_TERMINAL_CONTROL_BUTTON_LOCKED"};

/// @brief Field SHARE_BLOCKS_TERMINAL_ERROR_BACK_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_ERROR_BACK_KEY{u"SHARE_BLOCKS_TERMINAL_ERROR_BACK"};

/// @brief Field SHARE_BLOCKS_TERMINAL_ERROR_INSTRUCTIONS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_ERROR_INSTRUCTIONS_KEY{u"SHARE_BLOCKS_TERMINAL_ERROR_INSTRUCTIONS"};

/// @brief Field SHARE_BLOCKS_TERMINAL_ERROR_TITLE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_ERROR_TITLE_KEY{u"SHARE_BLOCKS_TERMINAL_ERROR_TITLE"};

/// @brief Field SHARE_BLOCKS_TERMINAL_INFO_DATA_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_INFO_DATA_KEY{u"SHARE_BLOCKS_TERMINAL_INFO_DATA"};

/// @brief Field SHARE_BLOCKS_TERMINAL_INFO_ENTER_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_INFO_ENTER_KEY{u"SHARE_BLOCKS_TERMINAL_INFO_ENTER"};

/// @brief Field SHARE_BLOCKS_TERMINAL_INFO_TITLE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_INFO_TITLE_KEY{u"SHARE_BLOCKS_TERMINAL_INFO_TITLE"};

/// @brief Field SHARE_BLOCKS_TERMINAL_OTHER_DRIVER_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_OTHER_DRIVER_KEY{u"SHARE_BLOCKS_TERMINAL_OTHER_DRIVER"};

/// @brief Field SHARE_BLOCKS_TERMINAL_PROMPT_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_PROMPT_KEY{u"SHARE_BLOCKS_TERMINAL_PROMPT"};

/// @brief Field SHARE_BLOCKS_TERMINAL_SEARCH_ERROR_INVALID_ID_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_SEARCH_ERROR_INVALID_ID_KEY{u"SHARE_BLOCKS_TERMINAL_SEARCH_ERROR_INVALID_ID"};

/// @brief Field SHARE_BLOCKS_TERMINAL_SEARCH_ERROR_INVALID_LENGTH_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_SEARCH_ERROR_INVALID_LENGTH_KEY{u"SHARE_BLOCKS_TERMINAL_SEARCH_ERROR_INVALID_LENGTH"};

/// @brief Field SHARE_BLOCKS_TERMINAL_SEARCH_LOADED_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_SEARCH_LOADED_LABEL_KEY{u"SHARE_BLOCKS_TERMINAL_SEARCH_LOADED_LABEL"};

/// @brief Field SHARE_BLOCKS_TERMINAL_SEARCH_LOADED_NONE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_SEARCH_LOADED_NONE_KEY{u"SHARE_BLOCKS_TERMINAL_SEARCH_LOADED_NONE"};

/// @brief Field SHARE_BLOCKS_TERMINAL_SEARCH_LOBBY_TEXT_FORMAT_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_SEARCH_LOBBY_TEXT_FORMAT_KEY{u"SHARE_BLOCKS_TERMINAL_SEARCH_LOBBY_TEXT_FORMAT"};

/// @brief Field SHARE_BLOCKS_TERMINAL_SEARCH_LOBBY_TEXT_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_SEARCH_LOBBY_TEXT_KEY{u"SHARE_BLOCKS_TERMINAL_SEARCH_LOBBY_TEXT"};

/// @brief Field SHARE_BLOCKS_TERMINAL_SEARCH_MAPS_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_SEARCH_MAPS_LABEL_KEY{u"SHARE_BLOCKS_TERMINAL_SEARCH_MAPS_LABEL"};

/// @brief Field SHARE_BLOCKS_TERMINAL_SEARCH_MAP_SEARCH_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_SEARCH_MAP_SEARCH_KEY{u"SHARE_BLOCKS_TERMINAL_SEARCH_MAP_SEARCH"};

/// @brief Field SHARE_BLOCKS_TERMINAL_SEARCH_VOTES_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_SEARCH_VOTES_KEY{u"SHARE_BLOCKS_TERMINAL_SEARCH_VOTES"};

/// @brief Field SHARE_BLOCKS_TERMINAL_STATUS_DISALLOWED_LOBBY_LOAD_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_STATUS_DISALLOWED_LOBBY_LOAD_KEY{u"SHARE_BLOCKS_TERMINAL_STATUS_DISALLOWED_LOBBY_LOAD"};

/// @brief Field SHARE_BLOCKS_TERMINAL_STATUS_DISALLOWED_LOBBY_UNLOAD_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_STATUS_DISALLOWED_LOBBY_UNLOAD_KEY{u"SHARE_BLOCKS_TERMINAL_STATUS_DISALLOWED_LOBBY_UNLOAD"};

/// @brief Field SHARE_BLOCKS_TERMINAL_STATUS_DISALLOWED_ROOM_LOAD_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_STATUS_DISALLOWED_ROOM_LOAD_KEY{u"SHARE_BLOCKS_TERMINAL_STATUS_DISALLOWED_ROOM_LOAD"};

/// @brief Field SHARE_BLOCKS_TERMINAL_STATUS_DISALLOWED_ROOM_UNLOAD_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_STATUS_DISALLOWED_ROOM_UNLOAD_KEY{u"SHARE_BLOCKS_TERMINAL_STATUS_DISALLOWED_ROOM_UNLOAD"};

/// @brief Field SHARE_BLOCKS_TERMINAL_STATUS_IN_PROGRESS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_STATUS_IN_PROGRESS_KEY{u"SHARE_BLOCKS_TERMINAL_STATUS_IN_PROGRESS"};

/// @brief Field SHARE_BLOCKS_TERMINAL_STATUS_LOADING_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_STATUS_LOADING_KEY{u"SHARE_BLOCKS_TERMINAL_STATUS_LOADING"};

/// @brief Field SHARE_BLOCKS_TERMINAL_STATUS_LOAD_FAILED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_STATUS_LOAD_FAILED_KEY{u"SHARE_BLOCKS_TERMINAL_STATUS_LOAD_FAILED"};

/// @brief Field SHARE_BLOCKS_TERMINAL_STATUS_LOAD_SUCCESS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_STATUS_LOAD_SUCCESS_KEY{u"SHARE_BLOCKS_TERMINAL_STATUS_LOAD_SUCCESS"};

/// @brief Field SHARE_BLOCKS_TERMINAL_STATUS_MAP_FOUND_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_STATUS_MAP_FOUND_KEY{u"SHARE_BLOCKS_TERMINAL_STATUS_MAP_FOUND"};

/// @brief Field SHARE_BLOCKS_TERMINAL_STATUS_MAP_NOT_FOUND_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_STATUS_MAP_NOT_FOUND_KEY{u"SHARE_BLOCKS_TERMINAL_STATUS_MAP_NOT_FOUND"};

/// @brief Field SHARE_BLOCKS_TERMINAL_STATUS_NOT_CONTROLLER_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_STATUS_NOT_CONTROLLER_KEY{u"SHARE_BLOCKS_TERMINAL_STATUS_NOT_CONTROLLER"};

/// @brief Field SHARE_BLOCKS_TERMINAL_STATUS_NO_SELECTION_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_STATUS_NO_SELECTION_KEY{u"SHARE_BLOCKS_TERMINAL_STATUS_NO_SELECTION"};

/// @brief Field SHARE_BLOCKS_TERMINAL_STATUS_SEARCH_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_STATUS_SEARCH_KEY{u"SHARE_BLOCKS_TERMINAL_STATUS_SEARCH"};

/// @brief Field SHARE_BLOCKS_TERMINAL_STATUS_WAIT_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SHARE_BLOCKS_TERMINAL_STATUS_WAIT_KEY{u"SHARE_BLOCKS_TERMINAL_STATUS_WAIT"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4219};

/// [SerializeField]
/// @brief Field tableZone, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___tableZone;

/// [SerializeField]
/// @brief Field currentMapSelectionText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___currentMapSelectionText;

/// [SerializeField]
/// @brief Field statusMessageText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___statusMessageText;

/// [SerializeField]
/// @brief Field currentDriverText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___currentDriverText;

/// [SerializeField]
/// @brief Field currentDriverLabel, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___currentDriverLabel;

/// [SerializeField]
/// @brief Field _currentDriverLoc, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ____currentDriverLoc;

/// [SerializeField]
/// @brief Field noDriverScreen, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreen>  ___noDriverScreen;

/// [SerializeField]
/// @brief Field searchScreen, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreenSearch>  ___searchScreen;

/// [SerializeField]
/// @brief Field terminalControlButton, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___terminalControlButton;

/// [SerializeField]
/// @brief Field loadMapCooldown, offset: 0x68, size: 0x4, def value: None
 float_t  ___loadMapCooldown;

/// [SerializeField]
/// @brief Field loadRandomMapCooldown, offset: 0x6c, size: 0x4, def value: None
 float_t  ___loadRandomMapCooldown;

/// [SerializeField]
/// @brief Field lobbyTrigger, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaFriendCollider>  ___lobbyTrigger;

/// @brief Field selectedMap, offset: 0x78, size: 0x8, def value: None
 ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  ___selectedMap;

/// @brief Field currentScreen, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreen>  ___currentScreen;

/// @brief Field linkedTable, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderTable>  ___linkedTable;

/// @brief Field awaitingWebRequest, offset: 0x90, size: 0x1, def value: None
 bool  ___awaitingWebRequest;

/// @brief Field requestedMapID, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___requestedMapID;

/// @brief Field OnMapLoadComplete, offset: 0xa0, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnMapLoadComplete;

/// @brief Field isTerminalLocked, offset: 0xa8, size: 0x1, def value: None
 bool  ___isTerminalLocked;

/// @brief Field localState, offset: 0xb0, size: 0x8, def value: None
 ::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState*  ___localState;

/// @brief Field cachedLocalPlayerID, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___cachedLocalPlayerID;

/// @brief Field isLoadingMap, offset: 0xbc, size: 0x1, def value: None
 bool  ___isLoadingMap;

/// @brief Field pendingRandomAfterMapsLoaded, offset: 0xbd, size: 0x1, def value: None
 bool  ___pendingRandomAfterMapsLoaded;

/// @brief Field randomMapsRequestInProgress, offset: 0xbe, size: 0x1, def value: None
 bool  ___randomMapsRequestInProgress;

/// @brief Field lastLoadTime, offset: 0xc0, size: 0x4, def value: None
 float_t  ___lastLoadTime;

/// @brief Field lastRandomLoadTime, offset: 0xc4, size: 0x4, def value: None
 float_t  ___lastRandomLoadTime;

/// @brief Field useNametags, offset: 0xc8, size: 0x1, def value: None
 bool  ___useNametags;

/// @brief Field hasInitialized, offset: 0xc9, size: 0x1, def value: None
 bool  ___hasInitialized;

/// @brief Field driverRig, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___driverRig;

/// @brief Field playersInRoom, offset: 0xd8, size: 0x4, def value: None
 int32_t  ___playersInRoom;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___tableZone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___currentMapSelectionText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___statusMessageText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___currentDriverText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___currentDriverLabel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ____currentDriverLoc) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___noDriverScreen) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___searchScreen) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___terminalControlButton) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___loadMapCooldown) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___loadRandomMapCooldown) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___lobbyTrigger) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___selectedMap) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___currentScreen) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___linkedTable) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___awaitingWebRequest) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___requestedMapID) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___OnMapLoadComplete) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___isTerminalLocked) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___localState) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___cachedLocalPlayerID) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___isLoadingMap) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___pendingRandomAfterMapsLoaded) == 0xbd, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___randomMapsRequestInProgress) == 0xbe, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___lastLoadTime) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___lastRandomLoadTime) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___useNametags) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___hasInitialized) == 0xc9, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___driverRig) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal, ___playersInRoom) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksTerminal) == 0xe0, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// Dependencies GorillaTagScripts.Builder.SharedBlocksTerminal::ScreenType, GorillaTagScripts.Builder.SharedBlocksTerminal::TerminalState, System.Object
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksTerminal/SharedBlocksTerminalState
class CORDL_TYPE SharedBlocksTerminal_SharedBlocksTerminalState : public ::System::Object {
public:
// Declarations
/// @brief Field currentScreen, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentScreen, put=__cordl_internal_set_currentScreen)) ::GlobalNamespace::SharedBlocksTerminal_ScreenType  currentScreen;

/// @brief Field driverID, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_driverID, put=__cordl_internal_set_driverID)) int32_t  driverID;

/// @brief Field state, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::SharedBlocksTerminal_TerminalState  state;

static inline ::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState* New_ctor() ;

constexpr ::GlobalNamespace::SharedBlocksTerminal_ScreenType const& __cordl_internal_get_currentScreen() const;

constexpr ::GlobalNamespace::SharedBlocksTerminal_ScreenType& __cordl_internal_get_currentScreen() ;

constexpr int32_t const& __cordl_internal_get_driverID() const;

constexpr int32_t& __cordl_internal_get_driverID() ;

constexpr ::GlobalNamespace::SharedBlocksTerminal_TerminalState const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::SharedBlocksTerminal_TerminalState& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_currentScreen(::GlobalNamespace::SharedBlocksTerminal_ScreenType  value) ;

constexpr void __cordl_internal_set_driverID(int32_t  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::SharedBlocksTerminal_TerminalState  value) ;

/// @brief Method .ctor, addr 0x5c42ce0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksTerminal_SharedBlocksTerminalState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksTerminal_SharedBlocksTerminalState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksTerminal_SharedBlocksTerminalState(SharedBlocksTerminal_SharedBlocksTerminalState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksTerminal_SharedBlocksTerminalState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksTerminal_SharedBlocksTerminalState(SharedBlocksTerminal_SharedBlocksTerminalState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4218};

/// @brief Field currentScreen, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::SharedBlocksTerminal_ScreenType  ___currentScreen;

/// @brief Field state, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::SharedBlocksTerminal_TerminalState  ___state;

/// @brief Field driverID, offset: 0x18, size: 0x4, def value: None
 int32_t  ___driverID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState, ___currentScreen) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState, ___state) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState, ___driverID) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState) == 0x20, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
