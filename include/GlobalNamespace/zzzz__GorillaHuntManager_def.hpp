#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHuntManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaGameManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaHuntManager)
namespace Fusion {
class NetworkObject;
}
namespace GlobalNamespace {
class GorillaHuntManager__HuntEnd_d__32;
}
namespace GlobalNamespace {
class GorillaHuntManager__StartHuntCountdown_d__29;
}
namespace GlobalNamespace {
class NetPlayer;
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
class GorillaHuntManager;
}
namespace GlobalNamespace {
class GorillaHuntManager__HuntEnd_d__32;
}
namespace GlobalNamespace {
class GorillaHuntManager__StartHuntCountdown_d__29;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaHuntManager*);
MARK_REF_T(::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32*);
MARK_REF_T(::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaHuntManager*, "", "GorillaHuntManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32*, "", "GorillaHuntManager/<HuntEnd>d__32");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29*, "", "GorillaHuntManager/<StartHuntCountdown>d__29");
// Dependencies GorillaGameManager
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaHuntManager
class CORDL_TYPE GorillaHuntManager : public ::GlobalNamespace::GorillaGameManager {
public:
// Declarations
using _HuntEnd_d__32 = ::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32;

using _StartHuntCountdown_d__29 = ::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29;

/// @brief Field copyArrayToListIndex, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_copyArrayToListIndex, put=__cordl_internal_set_copyArrayToListIndex)) int32_t  copyArrayToListIndex;

/// @brief Field copyListToArrayIndex, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_copyListToArrayIndex, put=__cordl_internal_set_copyListToArrayIndex)) int32_t  copyListToArrayIndex;

/// @brief Field countDownTime, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_countDownTime, put=__cordl_internal_set_countDownTime)) int32_t  countDownTime;

/// @brief Field currentHunted, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentHunted, put=__cordl_internal_set_currentHunted)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  currentHunted;

/// @brief Field currentHuntedArray, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentHuntedArray, put=__cordl_internal_set_currentHuntedArray)) ::ArrayW<int32_t>  currentHuntedArray;

/// @brief Field currentTarget, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentTarget, put=__cordl_internal_set_currentTarget)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  currentTarget;

/// @brief Field currentTargetArray, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentTargetArray, put=__cordl_internal_set_currentTargetArray)) ::ArrayW<int32_t>  currentTargetArray;

/// @brief Field huntStarted, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_huntStarted, put=__cordl_internal_set_huntStarted)) bool  huntStarted;

/// @brief Field inStartCountdown, offset 0xba, size 0x1 
 __declspec(property(get=__cordl_internal_get_inStartCountdown, put=__cordl_internal_set_inStartCountdown)) bool  inStartCountdown;

/// @brief Field iterator1, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_iterator1, put=__cordl_internal_set_iterator1)) int32_t  iterator1;

/// @brief Field notHuntedCount, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_notHuntedCount, put=__cordl_internal_set_notHuntedCount)) int32_t  notHuntedCount;

/// @brief Field objRef, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_objRef, put=__cordl_internal_set_objRef)) ::System::Object*  objRef;

/// @brief Field tagCoolDown, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_tagCoolDown, put=__cordl_internal_set_tagCoolDown)) float_t  tagCoolDown;

/// @brief Field tempPlayer, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempPlayer, put=__cordl_internal_set_tempPlayer)) ::GlobalNamespace::NetPlayer*  tempPlayer;

/// @brief Field tempRandIndex, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_tempRandIndex, put=__cordl_internal_set_tempRandIndex)) int32_t  tempRandIndex;

/// @brief Field tempRandPlayer, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempRandPlayer, put=__cordl_internal_set_tempRandPlayer)) ::GlobalNamespace::NetPlayer*  tempRandPlayer;

/// @brief Field tempTargetIndex, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_tempTargetIndex, put=__cordl_internal_set_tempTargetIndex)) int32_t  tempTargetIndex;

/// @brief Field timeHuntGameEnded, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeHuntGameEnded, put=__cordl_internal_set_timeHuntGameEnded)) double_t  timeHuntGameEnded;

/// @brief Field timeLastSlowTagged, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeLastSlowTagged, put=__cordl_internal_set_timeLastSlowTagged)) float_t  timeLastSlowTagged;

/// @brief Field waitingToStartNextHuntGame, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get_waitingToStartNextHuntGame, put=__cordl_internal_set_waitingToStartNextHuntGame)) bool  waitingToStartNextHuntGame;

/// @brief Method AddFusionDataBehaviour, addr 0x591026c, size 0x74, virtual true, abstract: false, final false
inline void AddFusionDataBehaviour(::Fusion::NetworkObject*  behaviour) ;

/// @brief Method CanAffectPlayer, addr 0x5911a6c, size 0x88, virtual true, abstract: false, final false
inline bool CanAffectPlayer(::GlobalNamespace::NetPlayer*  player, bool  thisFrame) ;

/// @brief Method CleanUpHunt, addr 0x59109b8, size 0xe0, virtual false, abstract: false, final false
inline void CleanUpHunt() ;

/// @brief Method CopyHuntDataArrayToList, addr 0x5911fe0, size 0x2d4, virtual false, abstract: false, final false
inline void CopyHuntDataArrayToList() ;

/// @brief Method CopyHuntDataListToArray, addr 0x5911db0, size 0x230, virtual false, abstract: false, final false
inline void CopyHuntDataListToArray() ;

/// @brief Method CopyRoomDataToLocalData, addr 0x5912344, size 0x8, virtual false, abstract: false, final false
inline void CopyRoomDataToLocalData() ;

/// @brief Method EndHuntGame, addr 0x59111b0, size 0x23c, virtual false, abstract: false, final false
inline void EndHuntGame() ;

/// @brief Method GameModeName, addr 0x5910154, size 0x40, virtual true, abstract: false, final false
inline ::StringW GameModeName() ;

/// @brief Method GameModeNameRoomLabel, addr 0x5910194, size 0xd8, virtual true, abstract: false, final false
inline ::StringW GameModeNameRoomLabel() ;

/// @brief Method GameType, addr 0x591014c, size 0x8, virtual true, abstract: false, final false
inline ::GorillaGameModes::GameModeType GameType() ;

/// @brief Method GetTargetOf, addr 0x590f920, size 0x1a0, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* GetTargetOf(::GlobalNamespace::NetPlayer*  netPlayer) ;

/// @brief Method HitPlayer, addr 0x59118c8, size 0x1a4, virtual true, abstract: false, final false
inline void HitPlayer(::GlobalNamespace::NetPlayer*  taggedPlayer) ;

/// [IteratorStateMachine(typeof(GorillaHuntManager::<HuntEnd>d__32))]
/// @brief Method HuntEnd, addr 0x591111c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* HuntEnd() ;

/// @brief Method InfrequentUpdate, addr 0x5913474, size 0x4, virtual true, abstract: false, final false
inline void InfrequentUpdate() ;

/// @brief Method IsTargetOf, addr 0x5911544, size 0xd0, virtual false, abstract: false, final false
inline bool IsTargetOf(::GlobalNamespace::NetPlayer*  huntingPlayer, ::GlobalNamespace::NetPlayer*  huntedPlayer) ;

/// @brief Method LocalCanTag, addr 0x59113ec, size 0x158, virtual true, abstract: false, final false
inline bool LocalCanTag(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method LocalIsTagged, addr 0x5911614, size 0x7c, virtual true, abstract: false, final false
inline bool LocalIsTagged(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method LocalPlayerSpeed, addr 0x5913278, size 0x1fc, virtual true, abstract: false, final false
inline ::ArrayW<float_t> LocalPlayerSpeed() ;

/// @brief Method MyMatIndex, addr 0x59131ec, size 0x8c, virtual true, abstract: false, final false
inline int32_t MyMatIndex(::GlobalNamespace::NetPlayer*  forPlayer) ;

/// @brief Method NewVRRig, addr 0x5911b68, size 0x120, virtual true, abstract: false, final false
inline void NewVRRig(::GlobalNamespace::NetPlayer*  player, int32_t  vrrigPhotonViewID, bool  didTutorial) ;

static inline ::GlobalNamespace::GorillaHuntManager* New_ctor() ;

/// @brief Method OnMasterClientSwitched, addr 0x59122b4, size 0x90, virtual true, abstract: false, final false
inline void OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient) ;

/// @brief Method OnPlayerEnteredRoom, addr 0x5911af4, size 0x74, virtual true, abstract: false, final false
inline void OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  newPlayer) ;

/// @brief Method OnPlayerLeftRoom, addr 0x5911c88, size 0x128, virtual true, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method OnSerializeRead, addr 0x591234c, size 0x1a4, virtual true, abstract: false, final false
inline void OnSerializeRead(::System::Object*  newData) ;

/// @brief Method OnSerializeRead, addr 0x5912b78, size 0x674, virtual true, abstract: false, final false
inline void OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnSerializeWrite, addr 0x59124f0, size 0x188, virtual true, abstract: false, final false
inline ::System::Object* OnSerializeWrite() ;

/// @brief Method OnSerializeWrite, addr 0x5912678, size 0x500, virtual true, abstract: false, final false
inline void OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RandomizePlayerList, addr 0x5911000, size 0x11c, virtual false, abstract: false, final false
inline void RandomizePlayerList(::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>  listToRandomize) ;

/// @brief Method ReportTag, addr 0x5911690, size 0x238, virtual true, abstract: false, final false
inline void ReportTag(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer) ;

/// @brief Method ResetGame, addr 0x59108b4, size 0x104, virtual true, abstract: false, final false
inline void ResetGame() ;

/// @brief Method StartHunt, addr 0x5910d8c, size 0x274, virtual false, abstract: false, final false
inline void StartHunt() ;

/// [IteratorStateMachine(typeof(GorillaHuntManager::<StartHuntCountdown>d__29))]
/// @brief Method StartHuntCountdown, addr 0x5910a98, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* StartHuntCountdown() ;

/// @brief Method StartPlaying, addr 0x59102e0, size 0x270, virtual true, abstract: false, final false
inline void StartPlaying() ;

/// @brief Method StopPlaying, addr 0x59107f4, size 0xc0, virtual true, abstract: false, final false
inline void StopPlaying() ;

/// @brief Method UpdateHuntState, addr 0x5910b04, size 0x260, virtual false, abstract: false, final false
inline void UpdateHuntState() ;

/// @brief Method UpdateState, addr 0x5910550, size 0x2a4, virtual false, abstract: false, final false
inline void UpdateState() ;

constexpr int32_t const& __cordl_internal_get_copyArrayToListIndex() const;

constexpr int32_t& __cordl_internal_get_copyArrayToListIndex() ;

constexpr int32_t const& __cordl_internal_get_copyListToArrayIndex() const;

constexpr int32_t& __cordl_internal_get_copyListToArrayIndex() ;

constexpr int32_t const& __cordl_internal_get_countDownTime() const;

constexpr int32_t& __cordl_internal_get_countDownTime() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* const& __cordl_internal_get_currentHunted() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*& __cordl_internal_get_currentHunted() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_currentHuntedArray() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_currentHuntedArray() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* const& __cordl_internal_get_currentTarget() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*& __cordl_internal_get_currentTarget() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_currentTargetArray() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_currentTargetArray() ;

constexpr bool const& __cordl_internal_get_huntStarted() const;

constexpr bool& __cordl_internal_get_huntStarted() ;

constexpr bool const& __cordl_internal_get_inStartCountdown() const;

constexpr bool& __cordl_internal_get_inStartCountdown() ;

constexpr int32_t const& __cordl_internal_get_iterator1() const;

constexpr int32_t& __cordl_internal_get_iterator1() ;

constexpr int32_t const& __cordl_internal_get_notHuntedCount() const;

constexpr int32_t& __cordl_internal_get_notHuntedCount() ;

constexpr ::System::Object* const& __cordl_internal_get_objRef() const;

constexpr ::System::Object*& __cordl_internal_get_objRef() ;

constexpr float_t const& __cordl_internal_get_tagCoolDown() const;

constexpr float_t& __cordl_internal_get_tagCoolDown() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_tempPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_tempPlayer() ;

constexpr int32_t const& __cordl_internal_get_tempRandIndex() const;

constexpr int32_t& __cordl_internal_get_tempRandIndex() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_tempRandPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_tempRandPlayer() ;

constexpr int32_t const& __cordl_internal_get_tempTargetIndex() const;

constexpr int32_t& __cordl_internal_get_tempTargetIndex() ;

constexpr double_t const& __cordl_internal_get_timeHuntGameEnded() const;

constexpr double_t& __cordl_internal_get_timeHuntGameEnded() ;

constexpr float_t const& __cordl_internal_get_timeLastSlowTagged() const;

constexpr float_t& __cordl_internal_get_timeLastSlowTagged() ;

constexpr bool const& __cordl_internal_get_waitingToStartNextHuntGame() const;

constexpr bool& __cordl_internal_get_waitingToStartNextHuntGame() ;

constexpr void __cordl_internal_set_copyArrayToListIndex(int32_t  value) ;

constexpr void __cordl_internal_set_copyListToArrayIndex(int32_t  value) ;

constexpr void __cordl_internal_set_countDownTime(int32_t  value) ;

constexpr void __cordl_internal_set_currentHunted(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value) ;

constexpr void __cordl_internal_set_currentHuntedArray(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_currentTarget(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value) ;

constexpr void __cordl_internal_set_currentTargetArray(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_huntStarted(bool  value) ;

constexpr void __cordl_internal_set_inStartCountdown(bool  value) ;

constexpr void __cordl_internal_set_iterator1(int32_t  value) ;

constexpr void __cordl_internal_set_notHuntedCount(int32_t  value) ;

constexpr void __cordl_internal_set_objRef(::System::Object*  value) ;

constexpr void __cordl_internal_set_tagCoolDown(float_t  value) ;

constexpr void __cordl_internal_set_tempPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_tempRandIndex(int32_t  value) ;

constexpr void __cordl_internal_set_tempRandPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_tempTargetIndex(int32_t  value) ;

constexpr void __cordl_internal_set_timeHuntGameEnded(double_t  value) ;

constexpr void __cordl_internal_set_timeLastSlowTagged(float_t  value) ;

constexpr void __cordl_internal_set_waitingToStartNextHuntGame(bool  value) ;

/// @brief Method .ctor, addr 0x5913478, size 0x140, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaHuntManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaHuntManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaHuntManager(GorillaHuntManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaHuntManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaHuntManager(GorillaHuntManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2182};

/// @brief Field tagCoolDown, offset: 0x90, size: 0x4, def value: None
 float_t  ___tagCoolDown;

/// @brief Field currentHuntedArray, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___currentHuntedArray;

/// @brief Field currentHunted, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  ___currentHunted;

/// @brief Field currentTargetArray, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___currentTargetArray;

/// @brief Field currentTarget, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  ___currentTarget;

/// @brief Field huntStarted, offset: 0xb8, size: 0x1, def value: None
 bool  ___huntStarted;

/// @brief Field waitingToStartNextHuntGame, offset: 0xb9, size: 0x1, def value: None
 bool  ___waitingToStartNextHuntGame;

/// @brief Field inStartCountdown, offset: 0xba, size: 0x1, def value: None
 bool  ___inStartCountdown;

/// @brief Field countDownTime, offset: 0xbc, size: 0x4, def value: None
 int32_t  ___countDownTime;

/// @brief Field timeHuntGameEnded, offset: 0xc0, size: 0x8, def value: None
 double_t  ___timeHuntGameEnded;

/// @brief Field timeLastSlowTagged, offset: 0xc8, size: 0x4, def value: None
 float_t  ___timeLastSlowTagged;

/// @brief Field objRef, offset: 0xd0, size: 0x8, def value: None
 ::System::Object*  ___objRef;

/// @brief Field iterator1, offset: 0xd8, size: 0x4, def value: None
 int32_t  ___iterator1;

/// @brief Field tempRandPlayer, offset: 0xe0, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___tempRandPlayer;

/// @brief Field tempRandIndex, offset: 0xe8, size: 0x4, def value: None
 int32_t  ___tempRandIndex;

/// @brief Field notHuntedCount, offset: 0xec, size: 0x4, def value: None
 int32_t  ___notHuntedCount;

/// @brief Field tempTargetIndex, offset: 0xf0, size: 0x4, def value: None
 int32_t  ___tempTargetIndex;

/// @brief Field tempPlayer, offset: 0xf8, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___tempPlayer;

/// @brief Field copyListToArrayIndex, offset: 0x100, size: 0x4, def value: None
 int32_t  ___copyListToArrayIndex;

/// @brief Field copyArrayToListIndex, offset: 0x104, size: 0x4, def value: None
 int32_t  ___copyArrayToListIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaHuntManager, ___tagCoolDown) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager, ___currentHuntedArray) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager, ___currentHunted) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager, ___currentTargetArray) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager, ___currentTarget) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager, ___huntStarted) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager, ___waitingToStartNextHuntGame) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager, ___inStartCountdown) == 0xba, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager, ___countDownTime) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager, ___timeHuntGameEnded) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager, ___timeLastSlowTagged) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager, ___objRef) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager, ___iterator1) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager, ___tempRandPlayer) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager, ___tempRandIndex) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager, ___notHuntedCount) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager, ___tempTargetIndex) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager, ___tempPlayer) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager, ___copyListToArrayIndex) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager, ___copyArrayToListIndex) == 0x104, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaHuntManager) == 0x108, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaHuntManager/<StartHuntCountdown>d__29
class CORDL_TYPE GorillaHuntManager__StartHuntCountdown_d__29 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaHuntManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x591379c, size 0x15c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59138f8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5913900, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5913938, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5913798, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaHuntManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaHuntManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaHuntManager>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5910d64, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaHuntManager__StartHuntCountdown_d__29() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaHuntManager__StartHuntCountdown_d__29", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaHuntManager__StartHuntCountdown_d__29(GorillaHuntManager__StartHuntCountdown_d__29 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaHuntManager__StartHuntCountdown_d__29", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaHuntManager__StartHuntCountdown_d__29(GorillaHuntManager__StartHuntCountdown_d__29 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2181};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaHuntManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaHuntManager/<HuntEnd>d__32
class CORDL_TYPE GorillaHuntManager__HuntEnd_d__32 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaHuntManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59135bc, size 0x194, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5913750, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5913758, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5913790, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59135b8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaHuntManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaHuntManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaHuntManager>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5911188, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaHuntManager__HuntEnd_d__32() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaHuntManager__HuntEnd_d__32", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaHuntManager__HuntEnd_d__32(GorillaHuntManager__HuntEnd_d__32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaHuntManager__HuntEnd_d__32", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaHuntManager__HuntEnd_d__32(GorillaHuntManager__HuntEnd_d__32 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2180};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaHuntManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
