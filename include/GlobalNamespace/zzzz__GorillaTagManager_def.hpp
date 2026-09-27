#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaGameManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaTagManager)
namespace Fusion {
class NetworkObject;
}
namespace GlobalNamespace {
class GorillaTagManager__InfectionRoundEndingCoroutine_d__30;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaGameModes {
struct GameModeType;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Realtime {
class Player;
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
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaTagManager;
}
namespace GlobalNamespace {
class GorillaTagManager__InfectionRoundEndingCoroutine_d__30;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTagManager*);
MARK_REF_T(::GlobalNamespace::GorillaTagManager__InfectionRoundEndingCoroutine_d__30*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagManager*, "", "GorillaTagManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagManager__InfectionRoundEndingCoroutine_d__30*, "", "GorillaTagManager/<InfectionRoundEndingCoroutine>d__30");
// Dependencies GorillaGameManager
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagManager
class CORDL_TYPE GorillaTagManager : public ::GlobalNamespace::GorillaGameManager {
public:
// Declarations
using _InfectionRoundEndingCoroutine_d__30 = ::GlobalNamespace::GorillaTagManager__InfectionRoundEndingCoroutine_d__30;

/// @brief Field allInfected, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get_allInfected, put=__cordl_internal_set_allInfected)) bool  allInfected;

/// @brief Field currentInfected, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentInfected, put=__cordl_internal_set_currentInfected)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  currentInfected;

/// @brief Field currentInfectedArray, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentInfectedArray, put=__cordl_internal_set_currentInfectedArray)) ::ArrayW<int32_t>  currentInfectedArray;

/// @brief Field currentIt, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentIt, put=__cordl_internal_set_currentIt)) ::GlobalNamespace::NetPlayer*  currentIt;

/// @brief Field infectedModeThreshold, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_infectedModeThreshold, put=__cordl_internal_set_infectedModeThreshold)) int32_t  infectedModeThreshold;

/// @brief Field inspectorLocalPlayerSpeed, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_inspectorLocalPlayerSpeed, put=__cordl_internal_set_inspectorLocalPlayerSpeed)) ::ArrayW<float_t>  inspectorLocalPlayerSpeed;

/// @brief Field isCurrentlyTag, offset 0xc9, size 0x1 
 __declspec(property(get=__cordl_internal_get_isCurrentlyTag, put=__cordl_internal_set_isCurrentlyTag)) bool  isCurrentlyTag;

/// @brief Field iterator1, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_iterator1, put=__cordl_internal_set_iterator1)) int32_t  iterator1;

/// @brief Field lastInfectedPlayer, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastInfectedPlayer, put=__cordl_internal_set_lastInfectedPlayer)) ::GlobalNamespace::NetPlayer*  lastInfectedPlayer;

/// @brief Field lastQuestTagTime, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastQuestTagTime, put=__cordl_internal_set_lastQuestTagTime)) double_t  lastQuestTagTime;

/// @brief Field lastTag, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastTag, put=__cordl_internal_set_lastTag)) double_t  lastTag;

/// @brief Field lastTaggedPlayer, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastTaggedPlayer, put=__cordl_internal_set_lastTaggedPlayer)) ::GlobalNamespace::NetPlayer*  lastTaggedPlayer;

/// @brief Field tagCoolDown, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_tagCoolDown, put=__cordl_internal_set_tagCoolDown)) float_t  tagCoolDown;

/// @brief Field taggedRig, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_taggedRig, put=__cordl_internal_set_taggedRig)) ::UnityW<::GlobalNamespace::VRRig>  taggedRig;

/// @brief Field taggingRig, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_taggingRig, put=__cordl_internal_set_taggingRig)) ::UnityW<::GlobalNamespace::VRRig>  taggingRig;

/// @brief Field tempItInt, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_tempItInt, put=__cordl_internal_set_tempItInt)) int32_t  tempItInt;

/// @brief Field tempPlayer, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempPlayer, put=__cordl_internal_set_tempPlayer)) ::GlobalNamespace::NetPlayer*  tempPlayer;

/// @brief Field timeInfectedGameEnded, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeInfectedGameEnded, put=__cordl_internal_set_timeInfectedGameEnded)) double_t  timeInfectedGameEnded;

/// @brief Field waitingToStartNextInfectionGame, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_waitingToStartNextInfectionGame, put=__cordl_internal_set_waitingToStartNextInfectionGame)) bool  waitingToStartNextInfectionGame;

/// @brief Method AddFusionDataBehaviour, addr 0x593c8c8, size 0x74, virtual true, abstract: false, final false
inline void AddFusionDataBehaviour(::Fusion::NetworkObject*  netObject) ;

/// @brief Method AddInfectedPlayer, addr 0x593b4f4, size 0x17c, virtual true, abstract: false, final false
inline void AddInfectedPlayer(::GlobalNamespace::NetPlayer*  infectedPlayer, bool  withTagStop) ;

/// @brief Method Awake, addr 0x5938af4, size 0xa8, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CanAffectPlayer, addr 0x593ac24, size 0xc4, virtual true, abstract: false, final false
inline bool CanAffectPlayer(::GlobalNamespace::NetPlayer*  player, bool  thisFrame) ;

/// @brief Method ChangeCurrentIt, addr 0x593b4ac, size 0x48, virtual true, abstract: false, final false
inline void ChangeCurrentIt(::GlobalNamespace::NetPlayer*  newCurrentIt, bool  withTagFreeze) ;

/// @brief Method ClearInfectionState, addr 0x59393c0, size 0x6c, virtual false, abstract: false, final false
inline void ClearInfectionState() ;

/// @brief Method CopyInfectedArrayToList, addr 0x593b310, size 0x19c, virtual false, abstract: false, final false
inline void CopyInfectedArrayToList() ;

/// @brief Method CopyInfectedListToArray, addr 0x593b19c, size 0x174, virtual false, abstract: false, final false
inline void CopyInfectedListToArray() ;

/// @brief Method CopyRoomDataToLocalData, addr 0x593b728, size 0x28, virtual false, abstract: false, final false
inline void CopyRoomDataToLocalData() ;

/// @brief Method GameModeName, addr 0x593c7b0, size 0x40, virtual true, abstract: false, final false
inline ::StringW GameModeName() ;

/// @brief Method GameModeNameRoomLabel, addr 0x593c7f0, size 0xd8, virtual true, abstract: false, final false
inline ::StringW GameModeNameRoomLabel() ;

/// @brief Method GameType, addr 0x593c7a8, size 0x8, virtual true, abstract: false, final false
inline ::GorillaGameModes::GameModeType GameType() ;

/// @brief Method HitPlayer, addr 0x593aa58, size 0x1cc, virtual true, abstract: false, final false
inline void HitPlayer(::GlobalNamespace::NetPlayer*  taggedPlayer) ;

/// @brief Method InfectionRoundEnd, addr 0x5939bf4, size 0x288, virtual true, abstract: false, final false
inline void InfectionRoundEnd() ;

/// [IteratorStateMachine(typeof(GorillaTagManager::<InfectionRoundEndingCoroutine>d__30))]
/// @brief Method InfectionRoundEndingCoroutine, addr 0x5939554, size 0x6c, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* InfectionRoundEndingCoroutine() ;

/// @brief Method InfectionRoundStart, addr 0x59395e8, size 0x180, virtual true, abstract: false, final false
inline void InfectionRoundStart() ;

/// @brief Method InfrequentUpdate, addr 0x59394a0, size 0xb4, virtual true, abstract: false, final false
inline void InfrequentUpdate() ;

/// @brief Method InterpolatedInfectedJumpMultiplier, addr 0x593a0ac, size 0x178, virtual false, abstract: false, final false
inline float_t InterpolatedInfectedJumpMultiplier(int32_t  infectedCount) ;

/// @brief Method InterpolatedInfectedJumpSpeed, addr 0x593a224, size 0x178, virtual false, abstract: false, final false
inline float_t InterpolatedInfectedJumpSpeed(int32_t  infectedCount) ;

/// @brief Method InterpolatedNoobJumpMultiplier, addr 0x593a39c, size 0x14c, virtual false, abstract: false, final false
inline float_t InterpolatedNoobJumpMultiplier(int32_t  infectedCount) ;

/// @brief Method InterpolatedNoobJumpSpeed, addr 0x593a4e8, size 0x148, virtual false, abstract: false, final false
inline float_t InterpolatedNoobJumpSpeed(int32_t  infectedCount) ;

/// @brief Method IsInfected, addr 0x593ace8, size 0x78, virtual false, abstract: false, final false
inline bool IsInfected(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method LocalCanTag, addr 0x5939e7c, size 0xac, virtual true, abstract: false, final false
inline bool LocalCanTag(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method LocalIsTagged, addr 0x5939f28, size 0x78, virtual true, abstract: false, final false
inline bool LocalIsTagged(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method LocalPlayerSpeed, addr 0x593c9c0, size 0x1d8, virtual true, abstract: false, final false
inline ::ArrayW<float_t> LocalPlayerSpeed() ;

/// @brief Method LocalTag, addr 0x5939fa0, size 0x10c, virtual true, abstract: false, final false
inline void LocalTag(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer, bool  bodyHit, bool  leftHand) ;

/// @brief Method MyMatIndex, addr 0x593c93c, size 0x84, virtual true, abstract: false, final false
inline int32_t MyMatIndex(::GlobalNamespace::NetPlayer*  forPlayer) ;

/// @brief Method NewVRRig, addr 0x593ad60, size 0x110, virtual true, abstract: false, final false
inline void NewVRRig(::GlobalNamespace::NetPlayer*  player, int32_t  vrrigPhotonViewID, bool  didTutorial) ;

static inline ::GlobalNamespace::GorillaTagManager* New_ctor() ;

/// @brief Method OnMasterClientSwitched, addr 0x593b670, size 0xb8, virtual true, abstract: false, final false
inline void OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient) ;

/// @brief Method OnPlayerLeftRoom, addr 0x593ae70, size 0x32c, virtual true, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method OnSerializeRead, addr 0x593b750, size 0x1c4, virtual true, abstract: false, final false
inline void OnSerializeRead(::System::Object*  newData) ;

/// @brief Method OnSerializeRead, addr 0x593bf80, size 0x828, virtual true, abstract: false, final false
inline void OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnSerializeWrite, addr 0x593b914, size 0x160, virtual true, abstract: false, final false
inline ::System::Object* OnSerializeWrite() ;

/// @brief Method OnSerializeWrite, addr 0x593ba74, size 0x50c, virtual true, abstract: false, final false
inline void OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ReportTag, addr 0x593a630, size 0x428, virtual true, abstract: false, final false
inline void ReportTag(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer) ;

/// @brief Method ResetGame, addr 0x5938df8, size 0xd8, virtual true, abstract: false, final false
inline void ResetGame() ;

/// @brief Method SetisCurrentlyTag, addr 0x593942c, size 0x74, virtual false, abstract: false, final false
inline void SetisCurrentlyTag(bool  newTagSetting) ;

/// @brief Method StartPlaying, addr 0x5938b9c, size 0x1f4, virtual true, abstract: false, final false
inline void StartPlaying() ;

/// @brief Method StopPlaying, addr 0x5938d90, size 0x68, virtual true, abstract: false, final false
inline void StopPlaying() ;

/// @brief Method UpdateInfectionState, addr 0x5939768, size 0x230, virtual true, abstract: false, final false
inline void UpdateInfectionState() ;

/// @brief Method UpdateState, addr 0x5938ed0, size 0x4f0, virtual true, abstract: false, final false
inline void UpdateState() ;

/// @brief Method UpdateTagState, addr 0x5939998, size 0x25c, virtual false, abstract: false, final false
inline void UpdateTagState(bool  withTagFreeze) ;

constexpr bool const& __cordl_internal_get_allInfected() const;

constexpr bool& __cordl_internal_get_allInfected() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* const& __cordl_internal_get_currentInfected() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*& __cordl_internal_get_currentInfected() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_currentInfectedArray() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_currentInfectedArray() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_currentIt() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_currentIt() ;

constexpr int32_t const& __cordl_internal_get_infectedModeThreshold() const;

constexpr int32_t& __cordl_internal_get_infectedModeThreshold() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_inspectorLocalPlayerSpeed() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_inspectorLocalPlayerSpeed() ;

constexpr bool const& __cordl_internal_get_isCurrentlyTag() const;

constexpr bool& __cordl_internal_get_isCurrentlyTag() ;

constexpr int32_t const& __cordl_internal_get_iterator1() const;

constexpr int32_t& __cordl_internal_get_iterator1() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_lastInfectedPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_lastInfectedPlayer() ;

constexpr double_t const& __cordl_internal_get_lastQuestTagTime() const;

constexpr double_t& __cordl_internal_get_lastQuestTagTime() ;

constexpr double_t const& __cordl_internal_get_lastTag() const;

constexpr double_t& __cordl_internal_get_lastTag() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_lastTaggedPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_lastTaggedPlayer() ;

constexpr float_t const& __cordl_internal_get_tagCoolDown() const;

constexpr float_t& __cordl_internal_get_tagCoolDown() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_taggedRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_taggedRig() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_taggingRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_taggingRig() ;

constexpr int32_t const& __cordl_internal_get_tempItInt() const;

constexpr int32_t& __cordl_internal_get_tempItInt() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_tempPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_tempPlayer() ;

constexpr double_t const& __cordl_internal_get_timeInfectedGameEnded() const;

constexpr double_t& __cordl_internal_get_timeInfectedGameEnded() ;

constexpr bool const& __cordl_internal_get_waitingToStartNextInfectionGame() const;

constexpr bool& __cordl_internal_get_waitingToStartNextInfectionGame() ;

constexpr void __cordl_internal_set_allInfected(bool  value) ;

constexpr void __cordl_internal_set_currentInfected(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value) ;

constexpr void __cordl_internal_set_currentInfectedArray(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_currentIt(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_infectedModeThreshold(int32_t  value) ;

constexpr void __cordl_internal_set_inspectorLocalPlayerSpeed(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_isCurrentlyTag(bool  value) ;

constexpr void __cordl_internal_set_iterator1(int32_t  value) ;

constexpr void __cordl_internal_set_lastInfectedPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_lastQuestTagTime(double_t  value) ;

constexpr void __cordl_internal_set_lastTag(double_t  value) ;

constexpr void __cordl_internal_set_lastTaggedPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_tagCoolDown(float_t  value) ;

constexpr void __cordl_internal_set_taggedRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_taggingRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_tempItInt(int32_t  value) ;

constexpr void __cordl_internal_set_tempPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_timeInfectedGameEnded(double_t  value) ;

constexpr void __cordl_internal_set_waitingToStartNextInfectionGame(bool  value) ;

/// @brief Method .ctor, addr 0x593cb98, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagManager(GorillaTagManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagManager(GorillaTagManager const& ) = delete;

/// @brief Field ReportInfectionTagEvent offset 0xffffffff size 0x1
static constexpr uint8_t  ReportInfectionTagEvent{static_cast<uint8_t>(0x2u)};

/// @brief Field ReportTagEvent offset 0xffffffff size 0x1
static constexpr uint8_t  ReportTagEvent{static_cast<uint8_t>(0x1u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2262};

/// @brief Field k_defaultMatIndex offset 0xffffffff size 0x4
static constexpr int32_t  k_defaultMatIndex{static_cast<int32_t>(0x0)};

/// @brief Field k_infectedMatIndex offset 0xffffffff size 0x4
static constexpr int32_t  k_infectedMatIndex{static_cast<int32_t>(0x2)};

/// @brief Field k_itMatIndex offset 0xffffffff size 0x4
static constexpr int32_t  k_itMatIndex{static_cast<int32_t>(0x1)};

/// @brief Field tagCoolDown, offset: 0x90, size: 0x4, def value: None
 float_t  ___tagCoolDown;

/// @brief Field infectedModeThreshold, offset: 0x94, size: 0x4, def value: None
 int32_t  ___infectedModeThreshold;

/// @brief Field currentInfected, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  ___currentInfected;

/// @brief Field currentInfectedArray, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___currentInfectedArray;

/// @brief Field currentIt, offset: 0xa8, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___currentIt;

/// @brief Field lastInfectedPlayer, offset: 0xb0, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___lastInfectedPlayer;

/// @brief Field lastTag, offset: 0xb8, size: 0x8, def value: None
 double_t  ___lastTag;

/// @brief Field timeInfectedGameEnded, offset: 0xc0, size: 0x8, def value: None
 double_t  ___timeInfectedGameEnded;

/// @brief Field waitingToStartNextInfectionGame, offset: 0xc8, size: 0x1, def value: None
 bool  ___waitingToStartNextInfectionGame;

/// @brief Field isCurrentlyTag, offset: 0xc9, size: 0x1, def value: None
 bool  ___isCurrentlyTag;

/// @brief Field tempItInt, offset: 0xcc, size: 0x4, def value: None
 int32_t  ___tempItInt;

/// @brief Field iterator1, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___iterator1;

/// @brief Field tempPlayer, offset: 0xd8, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___tempPlayer;

/// @brief Field allInfected, offset: 0xe0, size: 0x1, def value: None
 bool  ___allInfected;

/// @brief Field inspectorLocalPlayerSpeed, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<float_t>  ___inspectorLocalPlayerSpeed;

/// @brief Field taggingRig, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___taggingRig;

/// @brief Field taggedRig, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___taggedRig;

/// @brief Field lastTaggedPlayer, offset: 0x100, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___lastTaggedPlayer;

/// @brief Field lastQuestTagTime, offset: 0x108, size: 0x8, def value: None
 double_t  ___lastQuestTagTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagManager, ___tagCoolDown) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagManager, ___infectedModeThreshold) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagManager, ___currentInfected) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagManager, ___currentInfectedArray) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagManager, ___currentIt) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagManager, ___lastInfectedPlayer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagManager, ___lastTag) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagManager, ___timeInfectedGameEnded) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagManager, ___waitingToStartNextInfectionGame) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagManager, ___isCurrentlyTag) == 0xc9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagManager, ___tempItInt) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagManager, ___iterator1) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagManager, ___tempPlayer) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagManager, ___allInfected) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagManager, ___inspectorLocalPlayerSpeed) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagManager, ___taggingRig) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagManager, ___taggedRig) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagManager, ___lastTaggedPlayer) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagManager, ___lastQuestTagTime) == 0x108, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagManager) == 0x110, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagManager/<InfectionRoundEndingCoroutine>d__30
class CORDL_TYPE GorillaTagManager__InfectionRoundEndingCoroutine_d__30 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaTagManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x593cc34, size 0x108, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaTagManager__InfectionRoundEndingCoroutine_d__30* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x593cd3c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x593cd44, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x593cd7c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x593cc30, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTagManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTagManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaTagManager>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59395c0, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaTagManager__InfectionRoundEndingCoroutine_d__30() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagManager__InfectionRoundEndingCoroutine_d__30", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagManager__InfectionRoundEndingCoroutine_d__30(GorillaTagManager__InfectionRoundEndingCoroutine_d__30 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagManager__InfectionRoundEndingCoroutine_d__30", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagManager__InfectionRoundEndingCoroutine_d__30(GorillaTagManager__InfectionRoundEndingCoroutine_d__30 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2261};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTagManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagManager__InfectionRoundEndingCoroutine_d__30, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagManager__InfectionRoundEndingCoroutine_d__30, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagManager__InfectionRoundEndingCoroutine_d__30, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagManager__InfectionRoundEndingCoroutine_d__30) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
