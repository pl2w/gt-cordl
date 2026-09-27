#pragma once
// IWYU pragma private; include "GorillaTagScripts/GorillaFreezeTagManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTagManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaFreezeTagManager)
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaGameModes {
struct GameModeType;
}
namespace GorillaTagScripts {
class GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
namespace GorillaTagScripts {
class GorillaFreezeTagManager;
}
namespace GorillaTagScripts {
class GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GorillaFreezeTagManager*);
MARK_REF_T(::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GorillaFreezeTagManager*, "GorillaTagScripts", "GorillaFreezeTagManager");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28*, "GorillaTagScripts", "GorillaFreezeTagManager/<InfectionRoundEndingCoroutine>d__28");
// Dependencies GorillaTagManager
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.GorillaFreezeTagManager
class CORDL_TYPE GorillaFreezeTagManager : public ::GlobalNamespace::GorillaTagManager {
public:
// Declarations
using _InfectionRoundEndingCoroutine_d__28 = ::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28;

/// @brief Field currentFrozen, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentFrozen, put=__cordl_internal_set_currentFrozen)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,float_t>*  currentFrozen;

/// @brief Field currentRoundInfectedPlayers, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentRoundInfectedPlayers, put=__cordl_internal_set_currentRoundInfectedPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  currentRoundInfectedPlayers;

/// @brief Field fastJumpLimitCached, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_fastJumpLimitCached, put=__cordl_internal_set_fastJumpLimitCached)) float_t  fastJumpLimitCached;

/// @brief Field fastJumpMultiplierCached, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get_fastJumpMultiplierCached, put=__cordl_internal_set_fastJumpMultiplierCached)) float_t  fastJumpMultiplierCached;

/// @brief Field freezeDuration, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_freezeDuration, put=__cordl_internal_set_freezeDuration)) float_t  freezeDuration;

/// @brief Field frozenHandTapIndices, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_frozenHandTapIndices, put=__cordl_internal_set_frozenHandTapIndices)) ::ArrayW<int32_t>  frozenHandTapIndices;

/// @brief Field frozenPlayerFastJumpLimit, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_frozenPlayerFastJumpLimit, put=__cordl_internal_set_frozenPlayerFastJumpLimit)) float_t  frozenPlayerFastJumpLimit;

/// @brief Field frozenPlayerFastJumpMultiplier, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_frozenPlayerFastJumpMultiplier, put=__cordl_internal_set_frozenPlayerFastJumpMultiplier)) float_t  frozenPlayerFastJumpMultiplier;

/// @brief Field frozenPlayerSlowJumpLimit, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get_frozenPlayerSlowJumpLimit, put=__cordl_internal_set_frozenPlayerSlowJumpLimit)) float_t  frozenPlayerSlowJumpLimit;

/// @brief Field frozenPlayerSlowJumpMultiplier, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_frozenPlayerSlowJumpMultiplier, put=__cordl_internal_set_frozenPlayerSlowJumpMultiplier)) float_t  frozenPlayerSlowJumpMultiplier;

/// @brief Field hapticStrength, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticStrength, put=__cordl_internal_set_hapticStrength)) int32_t  hapticStrength;

/// @brief Field infectMorePlayerLowerThreshold, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get_infectMorePlayerLowerThreshold, put=__cordl_internal_set_infectMorePlayerLowerThreshold)) int32_t  infectMorePlayerLowerThreshold;

/// @brief Field infectMorePlayerUpperThreshold, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_infectMorePlayerUpperThreshold, put=__cordl_internal_set_infectMorePlayerUpperThreshold)) int32_t  infectMorePlayerUpperThreshold;

/// @brief Field lastRoundInfectedPlayers, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastRoundInfectedPlayers, put=__cordl_internal_set_lastRoundInfectedPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  lastRoundInfectedPlayers;

/// @brief Field localVRRig, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_localVRRig, put=__cordl_internal_set_localVRRig)) ::UnityW<::GlobalNamespace::VRRig>  localVRRig;

/// @brief Field slowJumpLimitCached, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_slowJumpLimitCached, put=__cordl_internal_set_slowJumpLimitCached)) float_t  slowJumpLimitCached;

/// @brief Field slowJumpMultiplierCached, offset 0x14c, size 0x4 
 __declspec(property(get=__cordl_internal_get_slowJumpMultiplierCached, put=__cordl_internal_set_slowJumpMultiplierCached)) float_t  slowJumpMultiplierCached;

/// @brief Method AddFrozenPlayer, addr 0x5bc75fc, size 0x150, virtual false, abstract: false, final false
inline void AddFrozenPlayer(::GlobalNamespace::NetPlayer*  taggedPlayer) ;

/// @brief Method AddInfectedPlayer, addr 0x5bc6c64, size 0x17c, virtual false, abstract: false, final false
inline void AddInfectedPlayer(::GlobalNamespace::NetPlayer*  infectedPlayer, bool  withTagStop) ;

/// @brief Method Awake, addr 0x5bc64a4, size 0x20, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GameModeName, addr 0x5bc638c, size 0x40, virtual true, abstract: false, final false
inline ::StringW GameModeName() ;

/// @brief Method GameModeNameRoomLabel, addr 0x5bc63cc, size 0xd8, virtual true, abstract: false, final false
inline ::StringW GameModeNameRoomLabel() ;

/// @brief Method GameType, addr 0x5bc6384, size 0x8, virtual true, abstract: false, final false
inline ::GorillaGameModes::GameModeType GameType() ;

/// @brief Method GetFrozenHandTapAudioIndex, addr 0x5bc8318, size 0x4c, virtual false, abstract: false, final false
inline int32_t GetFrozenHandTapAudioIndex() ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.GorillaFreezeTagManager::<InfectionRoundEndingCoroutine>d__28))]
/// @brief Method InfectionRoundEndingCoroutine, addr 0x5bc7bd0, size 0x6c, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* InfectionRoundEndingCoroutine() ;

/// @brief Method IsFrozen, addr 0x5bc6de0, size 0x58, virtual false, abstract: false, final false
inline bool IsFrozen(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method LocalCanTag, addr 0x5bc7874, size 0x140, virtual true, abstract: false, final false
inline bool LocalCanTag(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method LocalIsTagged, addr 0x5bc79b4, size 0xac, virtual true, abstract: false, final false
inline bool LocalIsTagged(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method LocalPlayerSpeed, addr 0x5bc806c, size 0x2ac, virtual true, abstract: false, final false
inline ::ArrayW<float_t> LocalPlayerSpeed() ;

/// @brief Method MyMatIndex, addr 0x5bc7f20, size 0x84, virtual true, abstract: false, final false
inline int32_t MyMatIndex(::GlobalNamespace::NetPlayer*  forPlayer) ;

/// @brief Method NewVRRig, addr 0x5bc7a60, size 0x170, virtual true, abstract: false, final false
inline void NewVRRig(::GlobalNamespace::NetPlayer*  player, int32_t  vrrigPhotonViewID, bool  didTutorial) ;

static inline ::GorillaTagScripts::GorillaFreezeTagManager* New_ctor() ;

/// @brief Method OnPlayerLeftRoom, addr 0x5bc8364, size 0x2f0, virtual true, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method OnSerializeRead, addr 0x5bc8960, size 0x1cc, virtual true, abstract: false, final false
inline void OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnSerializeWrite, addr 0x5bc8b2c, size 0x228, virtual true, abstract: false, final false
inline void OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ReportTag, addr 0x5bc7100, size 0x4fc, virtual true, abstract: false, final false
inline void ReportTag(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer) ;

/// @brief Method ResetGame, addr 0x5bc7c64, size 0xcc, virtual true, abstract: false, final false
inline void ResetGame() ;

/// @brief Method StartPlaying, addr 0x5bc6f04, size 0x1fc, virtual true, abstract: false, final false
inline void StartPlaying() ;

/// @brief Method StopPlaying, addr 0x5bc8654, size 0x30c, virtual true, abstract: false, final false
inline void StopPlaying() ;

/// @brief Method Tick, addr 0x5bc6e38, size 0xcc, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method TryAddNewInfectedPlayer, addr 0x5bc7d30, size 0x1f0, virtual false, abstract: false, final false
inline void TryAddNewInfectedPlayer() ;

/// @brief Method UnfreezePlayer, addr 0x5bc774c, size 0x128, virtual false, abstract: false, final false
inline void UnfreezePlayer(::GlobalNamespace::NetPlayer*  taggedPlayer) ;

/// @brief Method UpdatePlayerAppearance, addr 0x5bc7fa4, size 0xc8, virtual true, abstract: false, final false
inline void UpdatePlayerAppearance(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method UpdateState, addr 0x5bc64c4, size 0x7a0, virtual true, abstract: false, final false
inline void UpdateState() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,float_t>* const& __cordl_internal_get_currentFrozen() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,float_t>*& __cordl_internal_get_currentFrozen() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* const& __cordl_internal_get_currentRoundInfectedPlayers() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*& __cordl_internal_get_currentRoundInfectedPlayers() ;

constexpr float_t const& __cordl_internal_get_fastJumpLimitCached() const;

constexpr float_t& __cordl_internal_get_fastJumpLimitCached() ;

constexpr float_t const& __cordl_internal_get_fastJumpMultiplierCached() const;

constexpr float_t& __cordl_internal_get_fastJumpMultiplierCached() ;

constexpr float_t const& __cordl_internal_get_freezeDuration() const;

constexpr float_t& __cordl_internal_get_freezeDuration() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_frozenHandTapIndices() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_frozenHandTapIndices() ;

constexpr float_t const& __cordl_internal_get_frozenPlayerFastJumpLimit() const;

constexpr float_t& __cordl_internal_get_frozenPlayerFastJumpLimit() ;

constexpr float_t const& __cordl_internal_get_frozenPlayerFastJumpMultiplier() const;

constexpr float_t& __cordl_internal_get_frozenPlayerFastJumpMultiplier() ;

constexpr float_t const& __cordl_internal_get_frozenPlayerSlowJumpLimit() const;

constexpr float_t& __cordl_internal_get_frozenPlayerSlowJumpLimit() ;

constexpr float_t const& __cordl_internal_get_frozenPlayerSlowJumpMultiplier() const;

constexpr float_t& __cordl_internal_get_frozenPlayerSlowJumpMultiplier() ;

constexpr int32_t const& __cordl_internal_get_hapticStrength() const;

constexpr int32_t& __cordl_internal_get_hapticStrength() ;

constexpr int32_t const& __cordl_internal_get_infectMorePlayerLowerThreshold() const;

constexpr int32_t& __cordl_internal_get_infectMorePlayerLowerThreshold() ;

constexpr int32_t const& __cordl_internal_get_infectMorePlayerUpperThreshold() const;

constexpr int32_t& __cordl_internal_get_infectMorePlayerUpperThreshold() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* const& __cordl_internal_get_lastRoundInfectedPlayers() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*& __cordl_internal_get_lastRoundInfectedPlayers() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_localVRRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_localVRRig() ;

constexpr float_t const& __cordl_internal_get_slowJumpLimitCached() const;

constexpr float_t& __cordl_internal_get_slowJumpLimitCached() ;

constexpr float_t const& __cordl_internal_get_slowJumpMultiplierCached() const;

constexpr float_t& __cordl_internal_get_slowJumpMultiplierCached() ;

constexpr void __cordl_internal_set_currentFrozen(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,float_t>*  value) ;

constexpr void __cordl_internal_set_currentRoundInfectedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value) ;

constexpr void __cordl_internal_set_fastJumpLimitCached(float_t  value) ;

constexpr void __cordl_internal_set_fastJumpMultiplierCached(float_t  value) ;

constexpr void __cordl_internal_set_freezeDuration(float_t  value) ;

constexpr void __cordl_internal_set_frozenHandTapIndices(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_frozenPlayerFastJumpLimit(float_t  value) ;

constexpr void __cordl_internal_set_frozenPlayerFastJumpMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_frozenPlayerSlowJumpLimit(float_t  value) ;

constexpr void __cordl_internal_set_frozenPlayerSlowJumpMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_hapticStrength(int32_t  value) ;

constexpr void __cordl_internal_set_infectMorePlayerLowerThreshold(int32_t  value) ;

constexpr void __cordl_internal_set_infectMorePlayerUpperThreshold(int32_t  value) ;

constexpr void __cordl_internal_set_lastRoundInfectedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value) ;

constexpr void __cordl_internal_set_localVRRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_slowJumpLimitCached(float_t  value) ;

constexpr void __cordl_internal_set_slowJumpMultiplierCached(float_t  value) ;

/// @brief Method .ctor, addr 0x5bc8d54, size 0x11c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaFreezeTagManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaFreezeTagManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaFreezeTagManager(GorillaFreezeTagManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaFreezeTagManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaFreezeTagManager(GorillaFreezeTagManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3987};

/// @brief Field currentFrozen, offset: 0x110, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,float_t>*  ___currentFrozen;

/// @brief Field freezeDuration, offset: 0x118, size: 0x4, def value: None
 float_t  ___freezeDuration;

/// @brief Field infectMorePlayerLowerThreshold, offset: 0x11c, size: 0x4, def value: None
 int32_t  ___infectMorePlayerLowerThreshold;

/// @brief Field infectMorePlayerUpperThreshold, offset: 0x120, size: 0x4, def value: None
 int32_t  ___infectMorePlayerUpperThreshold;

/// [Space]
/// [Header("Frozen player jump settings")]
/// @brief Field frozenPlayerFastJumpLimit, offset: 0x124, size: 0x4, def value: None
 float_t  ___frozenPlayerFastJumpLimit;

/// @brief Field frozenPlayerFastJumpMultiplier, offset: 0x128, size: 0x4, def value: None
 float_t  ___frozenPlayerFastJumpMultiplier;

/// @brief Field frozenPlayerSlowJumpLimit, offset: 0x12c, size: 0x4, def value: None
 float_t  ___frozenPlayerSlowJumpLimit;

/// @brief Field frozenPlayerSlowJumpMultiplier, offset: 0x130, size: 0x4, def value: None
 float_t  ___frozenPlayerSlowJumpMultiplier;

/// [GorillaSoundLookup]
/// @brief Field frozenHandTapIndices, offset: 0x138, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___frozenHandTapIndices;

/// @brief Field fastJumpLimitCached, offset: 0x140, size: 0x4, def value: None
 float_t  ___fastJumpLimitCached;

/// @brief Field fastJumpMultiplierCached, offset: 0x144, size: 0x4, def value: None
 float_t  ___fastJumpMultiplierCached;

/// @brief Field slowJumpLimitCached, offset: 0x148, size: 0x4, def value: None
 float_t  ___slowJumpLimitCached;

/// @brief Field slowJumpMultiplierCached, offset: 0x14c, size: 0x4, def value: None
 float_t  ___slowJumpMultiplierCached;

/// @brief Field localVRRig, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___localVRRig;

/// @brief Field hapticStrength, offset: 0x158, size: 0x4, def value: None
 int32_t  ___hapticStrength;

/// @brief Field currentRoundInfectedPlayers, offset: 0x160, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  ___currentRoundInfectedPlayers;

/// @brief Field lastRoundInfectedPlayers, offset: 0x168, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  ___lastRoundInfectedPlayers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GorillaFreezeTagManager, ___currentFrozen) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaFreezeTagManager, ___freezeDuration) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaFreezeTagManager, ___infectMorePlayerLowerThreshold) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaFreezeTagManager, ___infectMorePlayerUpperThreshold) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaFreezeTagManager, ___frozenPlayerFastJumpLimit) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaFreezeTagManager, ___frozenPlayerFastJumpMultiplier) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaFreezeTagManager, ___frozenPlayerSlowJumpLimit) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaFreezeTagManager, ___frozenPlayerSlowJumpMultiplier) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaFreezeTagManager, ___frozenHandTapIndices) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaFreezeTagManager, ___fastJumpLimitCached) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaFreezeTagManager, ___fastJumpMultiplierCached) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaFreezeTagManager, ___slowJumpLimitCached) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaFreezeTagManager, ___slowJumpMultiplierCached) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaFreezeTagManager, ___localVRRig) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaFreezeTagManager, ___hapticStrength) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaFreezeTagManager, ___currentRoundInfectedPlayers) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaFreezeTagManager, ___lastRoundInfectedPlayers) == 0x168, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GorillaFreezeTagManager) == 0x170, "Size mismatch!");

} // namespace end def GorillaTagScripts
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.GorillaFreezeTagManager/<InfectionRoundEndingCoroutine>d__28
class CORDL_TYPE GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::GorillaFreezeTagManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5bc8e74, size 0x298, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5bc910c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5bc9114, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5bc914c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5bc8e70, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::GorillaFreezeTagManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::GorillaFreezeTagManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::GorillaFreezeTagManager>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5bc7c3c, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28(GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28(GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3986};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::GorillaFreezeTagManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts
