#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPlayerScoreboardLine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaPlayerScoreboardLine)
namespace GlobalNamespace {
struct GorillaPlayerLineButton_ButtonType;
}
namespace GlobalNamespace {
class GorillaPlayerLineButton;
}
namespace GlobalNamespace {
class GorillaPlayerScoreboardLine___c;
}
namespace GlobalNamespace {
class GorillaScoreBoard;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace Photon::Voice::Unity {
class Recorder;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaPlayerScoreboardLine;
}
namespace GlobalNamespace {
class GorillaPlayerScoreboardLine___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaPlayerScoreboardLine*);
MARK_REF_T(::GlobalNamespace::GorillaPlayerScoreboardLine___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPlayerScoreboardLine*, "", "GorillaPlayerScoreboardLine");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPlayerScoreboardLine___c*, "", "GorillaPlayerScoreboardLine/<>c");
// Dependencies UnityEngine.MeshRenderer, UnityEngine.MonoBehaviour, UnityEngine.SpriteRenderer, UnityEngine.UI.Image, UnityEngine.UI.Text
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaPlayerScoreboardLine
class CORDL_TYPE GorillaPlayerScoreboardLine : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::GorillaPlayerScoreboardLine___c;

/// @brief Field _attemptingBan, offset 0x161, size 0x1 
 __declspec(property(get=__cordl_internal_get__attemptingBan, put=__cordl_internal_set__attemptingBan)) bool  _attemptingBan;

/// @brief Field _attemptingKick, offset 0x160, size 0x1 
 __declspec(property(get=__cordl_internal_get__attemptingKick, put=__cordl_internal_set__attemptingKick)) bool  _attemptingKick;

/// @brief Field _parentConfirmButton, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get__parentConfirmButton, put=__cordl_internal_set__parentConfirmButton)) ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  _parentConfirmButton;

/// @brief Field banButton, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_banButton, put=__cordl_internal_set_banButton)) ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  banButton;

/// @brief Field canPressNextReportButton, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get_canPressNextReportButton, put=__cordl_internal_set_canPressNextReportButton)) bool  canPressNextReportButton;

/// @brief Field cancelButton, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancelButton, put=__cordl_internal_set_cancelButton)) ::UnityW<::UnityEngine::GameObject>  cancelButton;

/// @brief Field cancelRoomControlButton, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancelRoomControlButton, put=__cordl_internal_set_cancelRoomControlButton)) ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  cancelRoomControlButton;

/// @brief Field cheatingButton, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_cheatingButton, put=__cordl_internal_set_cheatingButton)) ::UnityW<::UnityEngine::GameObject>  cheatingButton;

/// @brief Field confirmRoomControlButton, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_confirmRoomControlButton, put=__cordl_internal_set_confirmRoomControlButton)) ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  confirmRoomControlButton;

/// @brief Field confirmRoomControlButtons, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_confirmRoomControlButtons, put=__cordl_internal_set_confirmRoomControlButtons)) ::UnityW<::UnityEngine::GameObject>  confirmRoomControlButtons;

/// @brief Field currentNickname, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentNickname, put=__cordl_internal_set_currentNickname)) ::StringW  currentNickname;

/// @brief Field doneReporting, offset 0x150, size 0x1 
 __declspec(property(get=__cordl_internal_get_doneReporting, put=__cordl_internal_set_doneReporting)) bool  doneReporting;

/// @brief Field emptyRigCooldown, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get_emptyRigCooldown, put=__cordl_internal_set_emptyRigCooldown)) float_t  emptyRigCooldown;

/// @brief Field emptyRigCount, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_emptyRigCount, put=__cordl_internal_set_emptyRigCount)) int32_t  emptyRigCount;

/// @brief Field hateSpeechButton, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_hateSpeechButton, put=__cordl_internal_set_hateSpeechButton)) ::UnityW<::UnityEngine::GameObject>  hateSpeechButton;

/// @brief Field images, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_images, put=__cordl_internal_set_images)) ::ArrayW<::UnityW<::UnityEngine::UI::Image>>  images;

/// @brief Field infectedTexture, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_infectedTexture, put=__cordl_internal_set_infectedTexture)) ::UnityW<::UnityEngine::Texture>  infectedTexture;

/// @brief Field initTime, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get_initTime, put=__cordl_internal_set_initTime)) float_t  initTime;

/// @brief Field isMuteManual, offset 0x128, size 0x1 
 __declspec(property(get=__cordl_internal_get_isMuteManual, put=__cordl_internal_set_isMuteManual)) bool  isMuteManual;

/// @brief Field kickButton, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_kickButton, put=__cordl_internal_set_kickButton)) ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  kickButton;

/// @brief Field lastVisible, offset 0x151, size 0x1 
 __declspec(property(get=__cordl_internal_get_lastVisible, put=__cordl_internal_set_lastVisible)) bool  lastVisible;

/// @brief Field linePlayer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_linePlayer, put=__cordl_internal_set_linePlayer)) ::GlobalNamespace::NetPlayer*  linePlayer;

/// @brief Field meshes, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshes, put=__cordl_internal_set_meshes)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  meshes;

/// @brief Field mute, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get_mute, put=__cordl_internal_set_mute)) int32_t  mute;

/// @brief Field muteButton, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_muteButton, put=__cordl_internal_set_muteButton)) ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  muteButton;

/// @brief Field muteForRoomButton, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_muteForRoomButton, put=__cordl_internal_set_muteForRoomButton)) ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  muteForRoomButton;

/// @brief Field myRecorder, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRecorder, put=__cordl_internal_set_myRecorder)) ::UnityW<::Photon::Voice::Unity::Recorder>  myRecorder;

/// @brief Field myRig, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::UnityEngine::GameObject>  myRig;

/// @brief Field parentScoreboard, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentScoreboard, put=__cordl_internal_set_parentScoreboard)) ::UnityW<::GlobalNamespace::GorillaScoreBoard>  parentScoreboard;

/// @brief Field playerActorNumber, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerActorNumber, put=__cordl_internal_set_playerActorNumber)) int32_t  playerActorNumber;

/// @brief Field playerLevel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerLevel, put=__cordl_internal_set_playerLevel)) ::UnityW<::UnityEngine::UI::Text>  playerLevel;

/// @brief Field playerLevelValue, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerLevelValue, put=__cordl_internal_set_playerLevelValue)) ::StringW  playerLevelValue;

/// @brief Field playerMMR, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerMMR, put=__cordl_internal_set_playerMMR)) ::UnityW<::UnityEngine::UI::Text>  playerMMR;

/// @brief Field playerMMRValue, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerMMRValue, put=__cordl_internal_set_playerMMRValue)) ::StringW  playerMMRValue;

/// @brief Field playerName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerName, put=__cordl_internal_set_playerName)) ::UnityW<::UnityEngine::UI::Text>  playerName;

/// @brief Field playerNameValue, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerNameValue, put=__cordl_internal_set_playerNameValue)) ::StringW  playerNameValue;

/// @brief Field playerNameVisible, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerNameVisible, put=__cordl_internal_set_playerNameVisible)) ::StringW  playerNameVisible;

/// @brief Field playerSwatch, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerSwatch, put=__cordl_internal_set_playerSwatch)) ::UnityW<::UnityEngine::UI::Image>  playerSwatch;

/// @brief Field playerVRRig, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerVRRig, put=__cordl_internal_set_playerVRRig)) ::UnityW<::GlobalNamespace::VRRig>  playerVRRig;

/// @brief Field reportButton, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_reportButton, put=__cordl_internal_set_reportButton)) ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  reportButton;

/// @brief Field reportButtons, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_reportButtons, put=__cordl_internal_set_reportButtons)) ::UnityW<::UnityEngine::GameObject>  reportButtons;

/// @brief Field reportInProgress, offset 0x143, size 0x1 
 __declspec(property(get=__cordl_internal_get_reportInProgress, put=__cordl_internal_set_reportInProgress)) bool  reportInProgress;

/// @brief Field reportedCheating, offset 0x140, size 0x1 
 __declspec(property(get=__cordl_internal_get_reportedCheating, put=__cordl_internal_set_reportedCheating)) bool  reportedCheating;

/// @brief Field reportedHateSpeech, offset 0x142, size 0x1 
 __declspec(property(get=__cordl_internal_get_reportedHateSpeech, put=__cordl_internal_set_reportedHateSpeech)) bool  reportedHateSpeech;

/// @brief Field reportedToxicity, offset 0x141, size 0x1 
 __declspec(property(get=__cordl_internal_get_reportedToxicity, put=__cordl_internal_set_reportedToxicity)) bool  reportedToxicity;

/// @brief Field rigContainer, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigContainer, put=__cordl_internal_set_rigContainer)) ::UnityW<::GlobalNamespace::RigContainer>  rigContainer;

/// @brief Field roomControlButtons, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomControlButtons, put=__cordl_internal_set_roomControlButtons)) ::UnityW<::UnityEngine::GameObject>  roomControlButtons;

/// @brief Field speakerIcon, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_speakerIcon, put=__cordl_internal_set_speakerIcon)) ::UnityW<::UnityEngine::SpriteRenderer>  speakerIcon;

/// @brief Field sprites, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_sprites, put=__cordl_internal_set_sprites)) ::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>>  sprites;

/// @brief Field targetActors, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_targetActors, put=setStaticF_targetActors)) ::ArrayW<int32_t>  targetActors;

/// @brief Field texts, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_texts, put=__cordl_internal_set_texts)) ::ArrayW<::UnityW<::UnityEngine::UI::Text>>  texts;

/// @brief Field toxicityButton, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_toxicityButton, put=__cordl_internal_set_toxicityButton)) ::UnityW<::UnityEngine::GameObject>  toxicityButton;

/// @brief Method AttemptRoomControlBan, addr 0x599c80c, size 0x194, virtual false, abstract: false, final false
inline bool AttemptRoomControlBan() ;

/// @brief Method AttemptRoomControlKick, addr 0x599c5f8, size 0x190, virtual false, abstract: false, final false
inline bool AttemptRoomControlKick() ;

/// @brief Method AttemptRoomControlMute, addr 0x599c1bc, size 0x320, virtual false, abstract: false, final false
inline bool AttemptRoomControlMute() ;

/// @brief Method HideConfirmButtons, addr 0x599c788, size 0x84, virtual false, abstract: false, final false
inline void HideConfirmButtons() ;

/// @brief Method InitializeLine, addr 0x599a8d8, size 0x374, virtual false, abstract: false, final false
inline void InitializeLine() ;

/// @brief Method IsConfirmButtonsActive, addr 0x599bd2c, size 0x18, virtual false, abstract: false, final false
inline bool IsConfirmButtonsActive() ;

/// @brief Method IsConfirmParentBan, addr 0x599bda8, size 0x64, virtual false, abstract: false, final false
inline bool IsConfirmParentBan() ;

/// @brief Method IsConfirmParentKick, addr 0x599bd44, size 0x64, virtual false, abstract: false, final false
inline bool IsConfirmParentKick() ;

/// @brief Method IsLineActive, addr 0x599bcd8, size 0x20, virtual false, abstract: false, final false
inline bool IsLineActive() ;

/// @brief Method IsPlayerInRoom, addr 0x599bcf8, size 0x1c, virtual false, abstract: false, final false
inline bool IsPlayerInRoom() ;

/// @brief Method IsReportButtonActive, addr 0x599bd14, size 0x18, virtual false, abstract: false, final false
inline bool IsReportButtonActive() ;

static inline ::GlobalNamespace::GorillaPlayerScoreboardLine* New_ctor() ;

/// @brief Method NormalizeName, addr 0x599ba38, size 0x2a0, virtual false, abstract: false, final false
inline ::StringW NormalizeName(bool  doIt, ::StringW  text) ;

/// @brief Method OnDisable, addr 0x599d09c, size 0x54, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x599cf24, size 0x54, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PressButton, addr 0x599a188, size 0x488, virtual false, abstract: false, final false
inline void PressButton(bool  isOn, ::GlobalNamespace::GorillaPlayerLineButton_ButtonType  buttonType) ;

/// @brief Method ReportPlayer, addr 0x599c9a0, size 0x398, virtual false, abstract: false, final false
static inline void ReportPlayer(::StringW  PlayerID, ::GlobalNamespace::GorillaPlayerLineButton_ButtonType  buttonType, ::StringW  OtherPlayerNickName) ;

/// @brief Method ResetData, addr 0x599cec0, size 0x64, virtual false, abstract: false, final false
inline void ResetData() ;

/// @brief Method SetLineData, addr 0x599b140, size 0x19c, virtual false, abstract: false, final false
inline void SetLineData(::GlobalNamespace::NetPlayer*  netPlayer) ;

/// @brief Method SetReportState, addr 0x599bfd4, size 0x1e8, virtual false, abstract: false, final false
inline void SetReportState(bool  reportState, ::GlobalNamespace::GorillaPlayerLineButton_ButtonType  buttonType) ;

/// @brief Method ShowConfirmButtons, addr 0x599c4dc, size 0x11c, virtual false, abstract: false, final false
inline void ShowConfirmButtons(::GlobalNamespace::GorillaPlayerLineButton*  parentButton) ;

/// @brief Method Start, addr 0x599a8c8, size 0x10, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method SwapToReportState, addr 0x599b0ec, size 0x54, virtual false, abstract: false, final false
inline void SwapToReportState(bool  reportInProgress) ;

/// @brief Method ToggleRoomControlButtons, addr 0x599ce64, size 0x5c, virtual false, abstract: false, final false
inline void ToggleRoomControlButtons(bool  toggle, bool  hideConfirm) ;

/// @brief Method UpdateLine, addr 0x599b2dc, size 0x75c, virtual false, abstract: false, final false
inline void UpdateLine() ;

/// @brief Method UpdatePlayerText, addr 0x599ac4c, size 0x4a0, virtual false, abstract: false, final false
inline void UpdatePlayerText() ;

constexpr bool const& __cordl_internal_get__attemptingBan() const;

constexpr bool& __cordl_internal_get__attemptingBan() ;

constexpr bool const& __cordl_internal_get__attemptingKick() const;

constexpr bool& __cordl_internal_get__attemptingKick() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton> const& __cordl_internal_get__parentConfirmButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>& __cordl_internal_get__parentConfirmButton() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton> const& __cordl_internal_get_banButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>& __cordl_internal_get_banButton() ;

constexpr bool const& __cordl_internal_get_canPressNextReportButton() const;

constexpr bool& __cordl_internal_get_canPressNextReportButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_cancelButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_cancelButton() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton> const& __cordl_internal_get_cancelRoomControlButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>& __cordl_internal_get_cancelRoomControlButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_cheatingButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_cheatingButton() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton> const& __cordl_internal_get_confirmRoomControlButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>& __cordl_internal_get_confirmRoomControlButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_confirmRoomControlButtons() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_confirmRoomControlButtons() ;

constexpr ::StringW const& __cordl_internal_get_currentNickname() const;

constexpr ::StringW& __cordl_internal_get_currentNickname() ;

constexpr bool const& __cordl_internal_get_doneReporting() const;

constexpr bool& __cordl_internal_get_doneReporting() ;

constexpr float_t const& __cordl_internal_get_emptyRigCooldown() const;

constexpr float_t& __cordl_internal_get_emptyRigCooldown() ;

constexpr int32_t const& __cordl_internal_get_emptyRigCount() const;

constexpr int32_t& __cordl_internal_get_emptyRigCount() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_hateSpeechButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_hateSpeechButton() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>> const& __cordl_internal_get_images() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>>& __cordl_internal_get_images() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_infectedTexture() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_infectedTexture() ;

constexpr float_t const& __cordl_internal_get_initTime() const;

constexpr float_t& __cordl_internal_get_initTime() ;

constexpr bool const& __cordl_internal_get_isMuteManual() const;

constexpr bool& __cordl_internal_get_isMuteManual() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton> const& __cordl_internal_get_kickButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>& __cordl_internal_get_kickButton() ;

constexpr bool const& __cordl_internal_get_lastVisible() const;

constexpr bool& __cordl_internal_get_lastVisible() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_linePlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_linePlayer() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& __cordl_internal_get_meshes() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& __cordl_internal_get_meshes() ;

constexpr int32_t const& __cordl_internal_get_mute() const;

constexpr int32_t& __cordl_internal_get_mute() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton> const& __cordl_internal_get_muteButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>& __cordl_internal_get_muteButton() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton> const& __cordl_internal_get_muteForRoomButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>& __cordl_internal_get_muteForRoomButton() ;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& __cordl_internal_get_myRecorder() const;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& __cordl_internal_get_myRecorder() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_myRig() ;

constexpr ::UnityW<::GlobalNamespace::GorillaScoreBoard> const& __cordl_internal_get_parentScoreboard() const;

constexpr ::UnityW<::GlobalNamespace::GorillaScoreBoard>& __cordl_internal_get_parentScoreboard() ;

constexpr int32_t const& __cordl_internal_get_playerActorNumber() const;

constexpr int32_t& __cordl_internal_get_playerActorNumber() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_playerLevel() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_playerLevel() ;

constexpr ::StringW const& __cordl_internal_get_playerLevelValue() const;

constexpr ::StringW& __cordl_internal_get_playerLevelValue() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_playerMMR() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_playerMMR() ;

constexpr ::StringW const& __cordl_internal_get_playerMMRValue() const;

constexpr ::StringW& __cordl_internal_get_playerMMRValue() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_playerName() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_playerName() ;

constexpr ::StringW const& __cordl_internal_get_playerNameValue() const;

constexpr ::StringW& __cordl_internal_get_playerNameValue() ;

constexpr ::StringW const& __cordl_internal_get_playerNameVisible() const;

constexpr ::StringW& __cordl_internal_get_playerNameVisible() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_playerSwatch() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_playerSwatch() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_playerVRRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_playerVRRig() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton> const& __cordl_internal_get_reportButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>& __cordl_internal_get_reportButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_reportButtons() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_reportButtons() ;

constexpr bool const& __cordl_internal_get_reportInProgress() const;

constexpr bool& __cordl_internal_get_reportInProgress() ;

constexpr bool const& __cordl_internal_get_reportedCheating() const;

constexpr bool& __cordl_internal_get_reportedCheating() ;

constexpr bool const& __cordl_internal_get_reportedHateSpeech() const;

constexpr bool& __cordl_internal_get_reportedHateSpeech() ;

constexpr bool const& __cordl_internal_get_reportedToxicity() const;

constexpr bool& __cordl_internal_get_reportedToxicity() ;

constexpr ::UnityW<::GlobalNamespace::RigContainer> const& __cordl_internal_get_rigContainer() const;

constexpr ::UnityW<::GlobalNamespace::RigContainer>& __cordl_internal_get_rigContainer() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_roomControlButtons() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_roomControlButtons() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_speakerIcon() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_speakerIcon() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>> const& __cordl_internal_get_sprites() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>>& __cordl_internal_get_sprites() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>> const& __cordl_internal_get_texts() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>>& __cordl_internal_get_texts() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_toxicityButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_toxicityButton() ;

constexpr void __cordl_internal_set__attemptingBan(bool  value) ;

constexpr void __cordl_internal_set__attemptingKick(bool  value) ;

constexpr void __cordl_internal_set__parentConfirmButton(::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  value) ;

constexpr void __cordl_internal_set_banButton(::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  value) ;

constexpr void __cordl_internal_set_canPressNextReportButton(bool  value) ;

constexpr void __cordl_internal_set_cancelButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_cancelRoomControlButton(::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  value) ;

constexpr void __cordl_internal_set_cheatingButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_confirmRoomControlButton(::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  value) ;

constexpr void __cordl_internal_set_confirmRoomControlButtons(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_currentNickname(::StringW  value) ;

constexpr void __cordl_internal_set_doneReporting(bool  value) ;

constexpr void __cordl_internal_set_emptyRigCooldown(float_t  value) ;

constexpr void __cordl_internal_set_emptyRigCount(int32_t  value) ;

constexpr void __cordl_internal_set_hateSpeechButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_images(::ArrayW<::UnityW<::UnityEngine::UI::Image>>  value) ;

constexpr void __cordl_internal_set_infectedTexture(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set_initTime(float_t  value) ;

constexpr void __cordl_internal_set_isMuteManual(bool  value) ;

constexpr void __cordl_internal_set_kickButton(::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  value) ;

constexpr void __cordl_internal_set_lastVisible(bool  value) ;

constexpr void __cordl_internal_set_linePlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_meshes(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

constexpr void __cordl_internal_set_mute(int32_t  value) ;

constexpr void __cordl_internal_set_muteButton(::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  value) ;

constexpr void __cordl_internal_set_muteForRoomButton(::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  value) ;

constexpr void __cordl_internal_set_myRecorder(::UnityW<::Photon::Voice::Unity::Recorder>  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_parentScoreboard(::UnityW<::GlobalNamespace::GorillaScoreBoard>  value) ;

constexpr void __cordl_internal_set_playerActorNumber(int32_t  value) ;

constexpr void __cordl_internal_set_playerLevel(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_playerLevelValue(::StringW  value) ;

constexpr void __cordl_internal_set_playerMMR(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_playerMMRValue(::StringW  value) ;

constexpr void __cordl_internal_set_playerName(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_playerNameValue(::StringW  value) ;

constexpr void __cordl_internal_set_playerNameVisible(::StringW  value) ;

constexpr void __cordl_internal_set_playerSwatch(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_playerVRRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_reportButton(::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  value) ;

constexpr void __cordl_internal_set_reportButtons(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_reportInProgress(bool  value) ;

constexpr void __cordl_internal_set_reportedCheating(bool  value) ;

constexpr void __cordl_internal_set_reportedHateSpeech(bool  value) ;

constexpr void __cordl_internal_set_reportedToxicity(bool  value) ;

constexpr void __cordl_internal_set_rigContainer(::UnityW<::GlobalNamespace::RigContainer>  value) ;

constexpr void __cordl_internal_set_roomControlButtons(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_speakerIcon(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set_sprites(::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>>  value) ;

constexpr void __cordl_internal_set_texts(::ArrayW<::UnityW<::UnityEngine::UI::Text>>  value) ;

constexpr void __cordl_internal_set_toxicityButton(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x599d1c0, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<int32_t> getStaticF_targetActors() ;

static inline void setStaticF_targetActors(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaPlayerScoreboardLine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaPlayerScoreboardLine", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaPlayerScoreboardLine(GorillaPlayerScoreboardLine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaPlayerScoreboardLine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaPlayerScoreboardLine(GorillaPlayerScoreboardLine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2612};

/// @brief Field playerName, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___playerName;

/// @brief Field playerLevel, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___playerLevel;

/// @brief Field playerMMR, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___playerMMR;

/// @brief Field playerSwatch, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___playerSwatch;

/// @brief Field infectedTexture, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___infectedTexture;

/// @brief Field linePlayer, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___linePlayer;

/// @brief Field playerVRRig, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___playerVRRig;

/// @brief Field playerLevelValue, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___playerLevelValue;

/// @brief Field playerMMRValue, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___playerMMRValue;

/// @brief Field playerNameValue, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___playerNameValue;

/// @brief Field playerNameVisible, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___playerNameVisible;

/// @brief Field playerActorNumber, offset: 0x78, size: 0x4, def value: None
 int32_t  ___playerActorNumber;

/// @brief Field muteButton, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  ___muteButton;

/// @brief Field reportButton, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  ___reportButton;

/// [Space]
/// @brief Field reportButtons, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___reportButtons;

/// @brief Field hateSpeechButton, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___hateSpeechButton;

/// @brief Field toxicityButton, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___toxicityButton;

/// @brief Field cheatingButton, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___cheatingButton;

/// @brief Field cancelButton, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___cancelButton;

/// [Space]
/// @brief Field roomControlButtons, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___roomControlButtons;

/// @brief Field muteForRoomButton, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  ___muteForRoomButton;

/// @brief Field kickButton, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  ___kickButton;

/// @brief Field banButton, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  ___banButton;

/// [Space]
/// @brief Field confirmRoomControlButtons, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___confirmRoomControlButtons;

/// @brief Field confirmRoomControlButton, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  ___confirmRoomControlButton;

/// @brief Field cancelRoomControlButton, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  ___cancelRoomControlButton;

/// [Space]
/// @brief Field speakerIcon, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___speakerIcon;

/// @brief Field canPressNextReportButton, offset: 0xf8, size: 0x1, def value: None
 bool  ___canPressNextReportButton;

/// @brief Field texts, offset: 0x100, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::UI::Text>>  ___texts;

/// @brief Field sprites, offset: 0x108, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>>  ___sprites;

/// @brief Field meshes, offset: 0x110, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  ___meshes;

/// @brief Field images, offset: 0x118, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::UI::Image>>  ___images;

/// @brief Field myRecorder, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::Recorder>  ___myRecorder;

/// @brief Field isMuteManual, offset: 0x128, size: 0x1, def value: None
 bool  ___isMuteManual;

/// @brief Field mute, offset: 0x12c, size: 0x4, def value: None
 int32_t  ___mute;

/// @brief Field emptyRigCount, offset: 0x130, size: 0x4, def value: None
 int32_t  ___emptyRigCount;

/// @brief Field myRig, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___myRig;

/// @brief Field reportedCheating, offset: 0x140, size: 0x1, def value: None
 bool  ___reportedCheating;

/// @brief Field reportedToxicity, offset: 0x141, size: 0x1, def value: None
 bool  ___reportedToxicity;

/// @brief Field reportedHateSpeech, offset: 0x142, size: 0x1, def value: None
 bool  ___reportedHateSpeech;

/// @brief Field reportInProgress, offset: 0x143, size: 0x1, def value: None
 bool  ___reportInProgress;

/// @brief Field currentNickname, offset: 0x148, size: 0x8, def value: None
 ::StringW  ___currentNickname;

/// @brief Field doneReporting, offset: 0x150, size: 0x1, def value: None
 bool  ___doneReporting;

/// @brief Field lastVisible, offset: 0x151, size: 0x1, def value: None
 bool  ___lastVisible;

/// @brief Field _parentConfirmButton, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  ____parentConfirmButton;

/// @brief Field _attemptingKick, offset: 0x160, size: 0x1, def value: None
 bool  ____attemptingKick;

/// @brief Field _attemptingBan, offset: 0x161, size: 0x1, def value: None
 bool  ____attemptingBan;

/// @brief Field parentScoreboard, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaScoreBoard>  ___parentScoreboard;

/// @brief Field initTime, offset: 0x170, size: 0x4, def value: None
 float_t  ___initTime;

/// @brief Field emptyRigCooldown, offset: 0x174, size: 0x4, def value: None
 float_t  ___emptyRigCooldown;

/// @brief Field rigContainer, offset: 0x178, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RigContainer>  ___rigContainer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___playerName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___playerLevel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___playerMMR) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___playerSwatch) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___infectedTexture) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___linePlayer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___playerVRRig) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___playerLevelValue) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___playerMMRValue) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___playerNameValue) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___playerNameVisible) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___playerActorNumber) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___muteButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___reportButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___reportButtons) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___hateSpeechButton) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___toxicityButton) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___cheatingButton) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___cancelButton) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___roomControlButtons) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___muteForRoomButton) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___kickButton) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___banButton) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___confirmRoomControlButtons) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___confirmRoomControlButton) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___cancelRoomControlButton) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___speakerIcon) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___canPressNextReportButton) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___texts) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___sprites) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___meshes) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___images) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___myRecorder) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___isMuteManual) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___mute) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___emptyRigCount) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___myRig) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___reportedCheating) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___reportedToxicity) == 0x141, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___reportedHateSpeech) == 0x142, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___reportInProgress) == 0x143, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___currentNickname) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___doneReporting) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___lastVisible) == 0x151, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ____parentConfirmButton) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ____attemptingKick) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ____attemptingBan) == 0x161, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___parentScoreboard) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___initTime) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___emptyRigCooldown) == 0x174, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerScoreboardLine, ___rigContainer) == 0x178, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaPlayerScoreboardLine) == 0x180, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaPlayerScoreboardLine/<>c
class CORDL_TYPE GorillaPlayerScoreboardLine___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::GorillaPlayerScoreboardLine___c*  __9;

/// @brief Field <>9__69_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__69_0, put=setStaticF___9__69_0)) ::System::Predicate_1<char16_t>*  __9__69_0;

static inline ::GlobalNamespace::GorillaPlayerScoreboardLine___c* New_ctor() ;

/// @brief Method <NormalizeName>b__69_0, addr 0x599d2dc, size 0x58, virtual false, abstract: false, final false
inline bool _NormalizeName_b__69_0(char16_t  c) ;

/// @brief Method .ctor, addr 0x599d2d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::GorillaPlayerScoreboardLine___c* getStaticF___9() ;

static inline ::System::Predicate_1<char16_t>* getStaticF___9__69_0() ;

static inline void setStaticF___9(::GlobalNamespace::GorillaPlayerScoreboardLine___c*  value) ;

static inline void setStaticF___9__69_0(::System::Predicate_1<char16_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaPlayerScoreboardLine___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaPlayerScoreboardLine___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaPlayerScoreboardLine___c(GorillaPlayerScoreboardLine___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaPlayerScoreboardLine___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaPlayerScoreboardLine___c(GorillaPlayerScoreboardLine___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2611};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaPlayerScoreboardLine___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
