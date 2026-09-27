#pragma once
// IWYU pragma private; include "GlobalNamespace/GreyZoneManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ShaderHashId_def.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GreyZoneManager)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace GlobalNamespace {
class GreyZoneAreaEnable;
}
namespace GlobalNamespace {
class GreyZoneManager__FadeAudioIn_d__63;
}
namespace GlobalNamespace {
class GreyZoneManager__FadeAudioOut_d__64;
}
namespace GlobalNamespace {
class GreyZoneSummoner;
}
namespace GlobalNamespace {
class MoonController;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaLocomotion {
class GTPlayer;
}
namespace Photon::Pun {
class IPunObservable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Realtime {
class IInRoomCallbacks;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
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
class Action;
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
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class GreyZoneManager;
}
namespace GlobalNamespace {
class GreyZoneManager__FadeAudioIn_d__63;
}
namespace GlobalNamespace {
class GreyZoneManager__FadeAudioOut_d__64;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GreyZoneManager*);
MARK_REF_T(::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63*);
MARK_REF_T(::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GreyZoneManager*, "", "GreyZoneManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63*, "", "GreyZoneManager/<FadeAudioIn>d__63");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64*, "", "GreyZoneManager/<FadeAudioOut>d__64");
// Dependencies Photon.Pun.MonoBehaviourPun, Photon.Realtime.Player, ShaderHashId
namespace GlobalNamespace {
// Is value type: false
// CS Name: GreyZoneManager
class CORDL_TYPE GreyZoneManager : public ::Photon::Pun::MonoBehaviourPun {
public:
// Declarations
using _FadeAudioIn_d__63 = ::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63;

using _FadeAudioOut_d__64 = ::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64;

 __declspec(property(get=get_GravityFactorSelection)) int32_t  GravityFactorSelection;

 __declspec(property(get=get_GreyZoneActive)) bool  GreyZoneActive;

 __declspec(property(get=get_GreyZoneAvailable)) bool  GreyZoneAvailable;

 __declspec(property(get=get_HasAuthority)) bool  HasAuthority;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GlobalNamespace::GreyZoneManager>  Instance;

/// @brief Field OnGreyZoneActivated, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGreyZoneActivated, put=__cordl_internal_set_OnGreyZoneActivated)) ::System::Action*  OnGreyZoneActivated;

/// @brief Field OnGreyZoneDeactivated, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGreyZoneDeactivated, put=__cordl_internal_set_OnGreyZoneDeactivated)) ::System::Action*  OnGreyZoneDeactivated;

 __declspec(property(get=get_SummoningProgress)) float_t  SummoningProgress;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field _GreyZoneActive, offset 0xc8, size 0x10 
 __declspec(property(get=__cordl_internal_get__GreyZoneActive, put=__cordl_internal_set__GreyZoneActive)) ::GlobalNamespace::ShaderHashId  _GreyZoneActive;

/// @brief Field _tickRunning, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get__tickRunning, put=__cordl_internal_set__tickRunning)) bool  _tickRunning;

/// @brief Field activeSummoners, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeSummoners, put=__cordl_internal_set_activeSummoners)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GreyZoneSummoner>>*  activeSummoners;

/// @brief Field ambienceFadeTime, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_ambienceFadeTime, put=__cordl_internal_set_ambienceFadeTime)) float_t  ambienceFadeTime;

/// @brief Field audioFadeCoroutine, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioFadeCoroutine, put=__cordl_internal_set_audioFadeCoroutine)) ::UnityEngine::Coroutine*  audioFadeCoroutine;

/// @brief Field forceTimeOfDayToNight, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_forceTimeOfDayToNight, put=__cordl_internal_set_forceTimeOfDayToNight)) bool  forceTimeOfDayToNight;

/// @brief Field gravityFactorOptionSelection, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityFactorOptionSelection, put=__cordl_internal_set_gravityFactorOptionSelection)) int32_t  gravityFactorOptionSelection;

/// @brief Field gravityFactorOptions, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_gravityFactorOptions, put=__cordl_internal_set_gravityFactorOptions)) ::ArrayW<float_t>  gravityFactorOptions;

/// @brief Field gravityOverrideSet, offset 0xe4, size 0x1 
 __declspec(property(get=__cordl_internal_get_gravityOverrideSet, put=__cordl_internal_set_gravityOverrideSet)) bool  gravityOverrideSet;

/// @brief Field gravityReductionAmount, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityReductionAmount, put=__cordl_internal_set_gravityReductionAmount)) float_t  gravityReductionAmount;

/// @brief Field greyZoneActivationTime, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_greyZoneActivationTime, put=__cordl_internal_set_greyZoneActivationTime)) double_t  greyZoneActivationTime;

/// @brief Field greyZoneActive, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_greyZoneActive, put=__cordl_internal_set_greyZoneActive)) bool  greyZoneActive;

/// @brief Field greyZoneActiveDuration, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_greyZoneActiveDuration, put=__cordl_internal_set_greyZoneActiveDuration)) float_t  greyZoneActiveDuration;

/// @brief Field greyZoneAmbience, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_greyZoneAmbience, put=__cordl_internal_set_greyZoneAmbience)) ::UnityW<::UnityEngine::AudioSource>  greyZoneAmbience;

/// @brief Field greyZoneAmbienceVolume, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_greyZoneAmbienceVolume, put=__cordl_internal_set_greyZoneAmbienceVolume)) float_t  greyZoneAmbienceVolume;

/// @brief Field greyZoneAvailableDayOfYear, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_greyZoneAvailableDayOfYear, put=__cordl_internal_set_greyZoneAvailableDayOfYear)) int32_t  greyZoneAvailableDayOfYear;

/// @brief Field greyZoneParticles, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_greyZoneParticles, put=__cordl_internal_set_greyZoneParticles)) ::UnityW<::UnityEngine::ParticleSystem>  greyZoneParticles;

/// @brief Field invalidSummoners, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_invalidSummoners, put=__cordl_internal_set_invalidSummoners)) ::System::Collections::Generic::HashSet_1<int32_t>*  invalidSummoners;

/// @brief Field m_areas, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_areas, put=__cordl_internal_set_m_areas)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GreyZoneAreaEnable>>*  m_areas;

/// @brief Field moonController, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_moonController, put=__cordl_internal_set_moonController)) ::UnityW<::GlobalNamespace::MoonController>  moonController;

/// @brief Field particlePredictiveSpawnMaxDist, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_particlePredictiveSpawnMaxDist, put=__cordl_internal_set_particlePredictiveSpawnMaxDist)) float_t  particlePredictiveSpawnMaxDist;

/// @brief Field particlePredictiveSpawnVelocityFactor, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_particlePredictiveSpawnVelocityFactor, put=__cordl_internal_set_particlePredictiveSpawnVelocityFactor)) float_t  particlePredictiveSpawnVelocityFactor;

/// @brief Field photonConnectedDuringActivation, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_photonConnectedDuringActivation, put=__cordl_internal_set_photonConnectedDuringActivation)) bool  photonConnectedDuringActivation;

/// @brief Field roomPlayerList, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomPlayerList, put=__cordl_internal_set_roomPlayerList)) ::ArrayW<::Photon::Realtime::Player*>  roomPlayerList;

/// @brief Field simpleGravityFactor, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_simpleGravityFactor, put=__cordl_internal_set_simpleGravityFactor)) float_t  simpleGravityFactor;

/// @brief Field skyMonsterDistGravityRampBuffer, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_skyMonsterDistGravityRampBuffer, put=__cordl_internal_set_skyMonsterDistGravityRampBuffer)) float_t  skyMonsterDistGravityRampBuffer;

/// @brief Field skyMonsterMovementEnterTime, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_skyMonsterMovementEnterTime, put=__cordl_internal_set_skyMonsterMovementEnterTime)) float_t  skyMonsterMovementEnterTime;

/// @brief Field skyMonsterMovementExitTime, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_skyMonsterMovementExitTime, put=__cordl_internal_set_skyMonsterMovementExitTime)) float_t  skyMonsterMovementExitTime;

/// @brief Field skyMonsterMovementVelocity, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_skyMonsterMovementVelocity, put=__cordl_internal_set_skyMonsterMovementVelocity)) float_t  skyMonsterMovementVelocity;

/// @brief Field summoningActivationTime, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_summoningActivationTime, put=__cordl_internal_set_summoningActivationTime)) float_t  summoningActivationTime;

/// @brief Field summoningPlayerProgress, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_summoningPlayerProgress, put=__cordl_internal_set_summoningPlayerProgress)) ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  summoningPlayerProgress;

/// @brief Field summoningPlayers, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_summoningPlayers, put=__cordl_internal_set_summoningPlayers)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::UnityW<::GlobalNamespace::GreyZoneSummoner>>>*  summoningPlayers;

/// @brief Field summoningProgress, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_summoningProgress, put=__cordl_internal_set_summoningProgress)) float_t  summoningProgress;

/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr operator  ::Photon::Pun::IPunObservable*() noexcept;

/// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
constexpr operator  ::Photon::Realtime::IInRoomCallbacks*() noexcept;

/// @brief Method ActivateGreyZoneAuthority, addr 0x561a27c, size 0x9c, virtual false, abstract: false, final false
inline void ActivateGreyZoneAuthority() ;

/// @brief Method ActivateGreyZoneLocal, addr 0x561a318, size 0x2e0, virtual false, abstract: false, final false
inline void ActivateGreyZoneLocal() ;

/// @brief Method AuthorityUpdate, addr 0x561bdcc, size 0x5bc, virtual false, abstract: false, final false
inline void AuthorityUpdate() ;

/// @brief Method Awake, addr 0x561baf0, size 0xf0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DayNightOverrideFunction, addr 0x561bacc, size 0x24, virtual false, abstract: false, final false
inline int32_t DayNightOverrideFunction(int32_t  inputIndex) ;

/// @brief Method DeactivateGreyZoneAuthority, addr 0x561a964, size 0x170, virtual false, abstract: false, final false
inline void DeactivateGreyZoneAuthority() ;

/// @brief Method DeactivateGreyZoneLocal, addr 0x561aad4, size 0x15c, virtual false, abstract: false, final false
inline void DeactivateGreyZoneLocal() ;

/// @brief Method DeregisterSummoner, addr 0x561a0a8, size 0x90, virtual false, abstract: false, final false
inline void DeregisterSummoner(::GlobalNamespace::GreyZoneSummoner*  summoner) ;

/// [IteratorStateMachine(typeof(GreyZoneManager::<FadeAudioIn>d__63))]
/// @brief Method FadeAudioIn, addr 0x561a5f8, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* FadeAudioIn(::UnityEngine::AudioSource*  source, float_t  maxVolume, float_t  duration) ;

/// [IteratorStateMachine(typeof(GreyZoneManager::<FadeAudioOut>d__64))]
/// @brief Method FadeAudioOut, addr 0x561ac30, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* FadeAudioOut(::UnityEngine::AudioSource*  source, float_t  duration) ;

/// @brief Method ForceStopGreyZone, addr 0x561acac, size 0x250, virtual false, abstract: false, final false
inline void ForceStopGreyZone() ;

/// @brief Method GravityOverrideFunction, addr 0x561aefc, size 0x18c, virtual false, abstract: false, final false
inline void GravityOverrideFunction(::GorillaLocomotion::GTPlayer*  player) ;

/// @brief Method LocalSimpleActivation, addr 0x561a748, size 0x21c, virtual false, abstract: false, final false
inline void LocalSimpleActivation(bool  onOff, float_t  gravityFactor) ;

static inline ::GlobalNamespace::GreyZoneManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x561bce4, size 0xc4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x561bbe0, size 0x104, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnMasterClientSwitched, addr 0x561c9f4, size 0x4, virtual true, abstract: false, final true
inline void OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient) ;

/// @brief Method OnPhotonSerializeView, addr 0x561c68c, size 0x358, virtual true, abstract: false, final true
inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnPlayerEnteredRoom, addr 0x561c9e4, size 0x4, virtual true, abstract: false, final true
inline void OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer) ;

/// @brief Method OnPlayerLeftRoom, addr 0x561c9e8, size 0x4, virtual true, abstract: false, final true
inline void OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer) ;

/// @brief Method OnPlayerPropertiesUpdate, addr 0x561c9f0, size 0x4, virtual true, abstract: false, final true
inline void OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps) ;

/// @brief Method OnRoomPropertiesUpdate, addr 0x561c9ec, size 0x4, virtual true, abstract: false, final true
inline void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged) ;

/// @brief Method RegisterArea, addr 0x561a140, size 0xe4, virtual false, abstract: false, final false
inline void RegisterArea(::GlobalNamespace::GreyZoneAreaEnable*  area) ;

/// @brief Method RegisterMoon, addr 0x561a138, size 0x8, virtual false, abstract: false, final false
inline void RegisterMoon(::GlobalNamespace::MoonController*  moon) ;

/// @brief Method RegisterSummoner, addr 0x5619fc4, size 0xe4, virtual false, abstract: false, final false
inline void RegisterSummoner(::GlobalNamespace::GreyZoneSummoner*  summoner) ;

/// @brief Method SharedUpdate, addr 0x561c388, size 0x304, virtual false, abstract: false, final false
inline void SharedUpdate() ;

/// @brief Method SimpleGravityOverrideFunction, addr 0x561b088, size 0xb4, virtual false, abstract: false, final false
inline void SimpleGravityOverrideFunction(::GorillaLocomotion::GTPlayer*  player) ;

/// @brief Method UnRegisterArea, addr 0x561a224, size 0x58, virtual false, abstract: false, final false
inline void UnRegisterArea(::GlobalNamespace::GreyZoneAreaEnable*  area) ;

/// @brief Method UnregisterMoon, addr 0x5619088, size 0x90, virtual false, abstract: false, final false
inline void UnregisterMoon(::GlobalNamespace::MoonController*  moon) ;

/// @brief Method Update, addr 0x561bda8, size 0x24, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateSummonerVisuals, addr 0x561a678, size 0xa4, virtual false, abstract: false, final false
inline void UpdateSummonerVisuals() ;

/// @brief Method VRRigEnteredSummonerProximity, addr 0x561b18c, size 0x148, virtual false, abstract: false, final false
inline void VRRigEnteredSummonerProximity(::GlobalNamespace::VRRig*  rig, ::GlobalNamespace::GreyZoneSummoner*  summoner) ;

/// @brief Method VRRigExitedSummonerProximity, addr 0x561b2d4, size 0x104, virtual false, abstract: false, final false
inline void VRRigExitedSummonerProximity(::GlobalNamespace::VRRig*  rig, ::GlobalNamespace::GreyZoneSummoner*  summoner) ;

/// @brief Method ValidateSummoningPlayers, addr 0x561b684, size 0x408, virtual false, abstract: false, final false
inline void ValidateSummoningPlayers() ;

constexpr ::System::Action* const& __cordl_internal_get_OnGreyZoneActivated() const;

constexpr ::System::Action*& __cordl_internal_get_OnGreyZoneActivated() ;

constexpr ::System::Action* const& __cordl_internal_get_OnGreyZoneDeactivated() const;

constexpr ::System::Action*& __cordl_internal_get_OnGreyZoneDeactivated() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get__GreyZoneActive() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get__GreyZoneActive() ;

constexpr bool const& __cordl_internal_get__tickRunning() const;

constexpr bool& __cordl_internal_get__tickRunning() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GreyZoneSummoner>>* const& __cordl_internal_get_activeSummoners() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GreyZoneSummoner>>*& __cordl_internal_get_activeSummoners() ;

constexpr float_t const& __cordl_internal_get_ambienceFadeTime() const;

constexpr float_t& __cordl_internal_get_ambienceFadeTime() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_audioFadeCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_audioFadeCoroutine() ;

constexpr bool const& __cordl_internal_get_forceTimeOfDayToNight() const;

constexpr bool& __cordl_internal_get_forceTimeOfDayToNight() ;

constexpr int32_t const& __cordl_internal_get_gravityFactorOptionSelection() const;

constexpr int32_t& __cordl_internal_get_gravityFactorOptionSelection() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_gravityFactorOptions() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_gravityFactorOptions() ;

constexpr bool const& __cordl_internal_get_gravityOverrideSet() const;

constexpr bool& __cordl_internal_get_gravityOverrideSet() ;

constexpr float_t const& __cordl_internal_get_gravityReductionAmount() const;

constexpr float_t& __cordl_internal_get_gravityReductionAmount() ;

constexpr double_t const& __cordl_internal_get_greyZoneActivationTime() const;

constexpr double_t& __cordl_internal_get_greyZoneActivationTime() ;

constexpr bool const& __cordl_internal_get_greyZoneActive() const;

constexpr bool& __cordl_internal_get_greyZoneActive() ;

constexpr float_t const& __cordl_internal_get_greyZoneActiveDuration() const;

constexpr float_t& __cordl_internal_get_greyZoneActiveDuration() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_greyZoneAmbience() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_greyZoneAmbience() ;

constexpr float_t const& __cordl_internal_get_greyZoneAmbienceVolume() const;

constexpr float_t& __cordl_internal_get_greyZoneAmbienceVolume() ;

constexpr int32_t const& __cordl_internal_get_greyZoneAvailableDayOfYear() const;

constexpr int32_t& __cordl_internal_get_greyZoneAvailableDayOfYear() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_greyZoneParticles() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_greyZoneParticles() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_invalidSummoners() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_invalidSummoners() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GreyZoneAreaEnable>>* const& __cordl_internal_get_m_areas() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GreyZoneAreaEnable>>*& __cordl_internal_get_m_areas() ;

constexpr ::UnityW<::GlobalNamespace::MoonController> const& __cordl_internal_get_moonController() const;

constexpr ::UnityW<::GlobalNamespace::MoonController>& __cordl_internal_get_moonController() ;

constexpr float_t const& __cordl_internal_get_particlePredictiveSpawnMaxDist() const;

constexpr float_t& __cordl_internal_get_particlePredictiveSpawnMaxDist() ;

constexpr float_t const& __cordl_internal_get_particlePredictiveSpawnVelocityFactor() const;

constexpr float_t& __cordl_internal_get_particlePredictiveSpawnVelocityFactor() ;

constexpr bool const& __cordl_internal_get_photonConnectedDuringActivation() const;

constexpr bool& __cordl_internal_get_photonConnectedDuringActivation() ;

constexpr ::ArrayW<::Photon::Realtime::Player*> const& __cordl_internal_get_roomPlayerList() const;

constexpr ::ArrayW<::Photon::Realtime::Player*>& __cordl_internal_get_roomPlayerList() ;

constexpr float_t const& __cordl_internal_get_simpleGravityFactor() const;

constexpr float_t& __cordl_internal_get_simpleGravityFactor() ;

constexpr float_t const& __cordl_internal_get_skyMonsterDistGravityRampBuffer() const;

constexpr float_t& __cordl_internal_get_skyMonsterDistGravityRampBuffer() ;

constexpr float_t const& __cordl_internal_get_skyMonsterMovementEnterTime() const;

constexpr float_t& __cordl_internal_get_skyMonsterMovementEnterTime() ;

constexpr float_t const& __cordl_internal_get_skyMonsterMovementExitTime() const;

constexpr float_t& __cordl_internal_get_skyMonsterMovementExitTime() ;

constexpr float_t const& __cordl_internal_get_skyMonsterMovementVelocity() const;

constexpr float_t& __cordl_internal_get_skyMonsterMovementVelocity() ;

constexpr float_t const& __cordl_internal_get_summoningActivationTime() const;

constexpr float_t& __cordl_internal_get_summoningActivationTime() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* const& __cordl_internal_get_summoningPlayerProgress() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*& __cordl_internal_get_summoningPlayerProgress() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::UnityW<::GlobalNamespace::GreyZoneSummoner>>>* const& __cordl_internal_get_summoningPlayers() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::UnityW<::GlobalNamespace::GreyZoneSummoner>>>*& __cordl_internal_get_summoningPlayers() ;

constexpr float_t const& __cordl_internal_get_summoningProgress() const;

constexpr float_t& __cordl_internal_get_summoningProgress() ;

constexpr void __cordl_internal_set_OnGreyZoneActivated(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnGreyZoneDeactivated(::System::Action*  value) ;

constexpr void __cordl_internal_set__GreyZoneActive(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set__tickRunning(bool  value) ;

constexpr void __cordl_internal_set_activeSummoners(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GreyZoneSummoner>>*  value) ;

constexpr void __cordl_internal_set_ambienceFadeTime(float_t  value) ;

constexpr void __cordl_internal_set_audioFadeCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_forceTimeOfDayToNight(bool  value) ;

constexpr void __cordl_internal_set_gravityFactorOptionSelection(int32_t  value) ;

constexpr void __cordl_internal_set_gravityFactorOptions(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_gravityOverrideSet(bool  value) ;

constexpr void __cordl_internal_set_gravityReductionAmount(float_t  value) ;

constexpr void __cordl_internal_set_greyZoneActivationTime(double_t  value) ;

constexpr void __cordl_internal_set_greyZoneActive(bool  value) ;

constexpr void __cordl_internal_set_greyZoneActiveDuration(float_t  value) ;

constexpr void __cordl_internal_set_greyZoneAmbience(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_greyZoneAmbienceVolume(float_t  value) ;

constexpr void __cordl_internal_set_greyZoneAvailableDayOfYear(int32_t  value) ;

constexpr void __cordl_internal_set_greyZoneParticles(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_invalidSummoners(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_areas(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GreyZoneAreaEnable>>*  value) ;

constexpr void __cordl_internal_set_moonController(::UnityW<::GlobalNamespace::MoonController>  value) ;

constexpr void __cordl_internal_set_particlePredictiveSpawnMaxDist(float_t  value) ;

constexpr void __cordl_internal_set_particlePredictiveSpawnVelocityFactor(float_t  value) ;

constexpr void __cordl_internal_set_photonConnectedDuringActivation(bool  value) ;

constexpr void __cordl_internal_set_roomPlayerList(::ArrayW<::Photon::Realtime::Player*>  value) ;

constexpr void __cordl_internal_set_simpleGravityFactor(float_t  value) ;

constexpr void __cordl_internal_set_skyMonsterDistGravityRampBuffer(float_t  value) ;

constexpr void __cordl_internal_set_skyMonsterMovementEnterTime(float_t  value) ;

constexpr void __cordl_internal_set_skyMonsterMovementExitTime(float_t  value) ;

constexpr void __cordl_internal_set_skyMonsterMovementVelocity(float_t  value) ;

constexpr void __cordl_internal_set_summoningActivationTime(float_t  value) ;

constexpr void __cordl_internal_set_summoningPlayerProgress(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value) ;

constexpr void __cordl_internal_set_summoningPlayers(::System::Collections::Generic::Dictionary_2<int32_t,::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::UnityW<::GlobalNamespace::GreyZoneSummoner>>>*  value) ;

constexpr void __cordl_internal_set_summoningProgress(float_t  value) ;

/// @brief Method .ctor, addr 0x561c9f8, size 0x314, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::GreyZoneManager> getStaticF_Instance() ;

/// @brief Method get_GravityFactorSelection, addr 0x5619f20, size 0x8, virtual false, abstract: false, final false
inline int32_t get_GravityFactorSelection() ;

/// @brief Method get_GreyZoneActive, addr 0x5619f18, size 0x8, virtual false, abstract: false, final false
inline bool get_GreyZoneActive() ;

/// @brief Method get_GreyZoneAvailable, addr 0x5619d04, size 0x124, virtual false, abstract: false, final false
inline bool get_GreyZoneAvailable() ;

/// @brief Method get_HasAuthority, addr 0x5619f38, size 0x84, virtual false, abstract: false, final false
inline bool get_HasAuthority() ;

/// @brief Method get_SummoningProgress, addr 0x5619fbc, size 0x8, virtual false, abstract: false, final false
inline float_t get_SummoningProgress() ;

/// @brief Method get_TickRunning, addr 0x5619f28, size 0x8, virtual false, abstract: false, final false
inline bool get_TickRunning() ;

/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

/// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
constexpr ::Photon::Realtime::IInRoomCallbacks* i___Photon__Realtime__IInRoomCallbacks() noexcept;

static inline void setStaticF_Instance(::UnityW<::GlobalNamespace::GreyZoneManager>  value) ;

/// @brief Method set_TickRunning, addr 0x5619f30, size 0x8, virtual false, abstract: false, final false
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GreyZoneManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GreyZoneManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GreyZoneManager(GreyZoneManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GreyZoneManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GreyZoneManager(GreyZoneManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{567};

/// [SerializeField]
/// @brief Field greyZoneActiveDuration, offset: 0x28, size: 0x4, def value: None
 float_t  ___greyZoneActiveDuration;

/// [SerializeField]
/// @brief Field gravityFactorOptions, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<float_t>  ___gravityFactorOptions;

/// [SerializeField]
/// @brief Field gravityFactorOptionSelection, offset: 0x38, size: 0x4, def value: None
 int32_t  ___gravityFactorOptionSelection;

/// [SerializeField]
/// @brief Field summoningActivationTime, offset: 0x3c, size: 0x4, def value: None
 float_t  ___summoningActivationTime;

/// [SerializeField]
/// @brief Field greyZoneAmbience, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___greyZoneAmbience;

/// [SerializeField]
/// @brief Field ambienceFadeTime, offset: 0x48, size: 0x4, def value: None
 float_t  ___ambienceFadeTime;

/// [SerializeField]
/// @brief Field forceTimeOfDayToNight, offset: 0x4c, size: 0x1, def value: None
 bool  ___forceTimeOfDayToNight;

/// [SerializeField]
/// @brief Field skyMonsterMovementEnterTime, offset: 0x50, size: 0x4, def value: None
 float_t  ___skyMonsterMovementEnterTime;

/// [SerializeField]
/// @brief Field skyMonsterMovementExitTime, offset: 0x54, size: 0x4, def value: None
 float_t  ___skyMonsterMovementExitTime;

/// [SerializeField]
/// @brief Field skyMonsterDistGravityRampBuffer, offset: 0x58, size: 0x4, def value: None
 float_t  ___skyMonsterDistGravityRampBuffer;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field gravityReductionAmount, offset: 0x5c, size: 0x4, def value: None
 float_t  ___gravityReductionAmount;

/// @brief Field simpleGravityFactor, offset: 0x60, size: 0x4, def value: None
 float_t  ___simpleGravityFactor;

/// [SerializeField]
/// @brief Field greyZoneParticles, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___greyZoneParticles;

/// [SerializeField]
/// @brief Field particlePredictiveSpawnMaxDist, offset: 0x70, size: 0x4, def value: None
 float_t  ___particlePredictiveSpawnMaxDist;

/// [SerializeField]
/// @brief Field particlePredictiveSpawnVelocityFactor, offset: 0x74, size: 0x4, def value: None
 float_t  ___particlePredictiveSpawnVelocityFactor;

/// @brief Field photonConnectedDuringActivation, offset: 0x78, size: 0x1, def value: None
 bool  ___photonConnectedDuringActivation;

/// @brief Field greyZoneActivationTime, offset: 0x80, size: 0x8, def value: None
 double_t  ___greyZoneActivationTime;

/// @brief Field greyZoneActive, offset: 0x88, size: 0x1, def value: None
 bool  ___greyZoneActive;

/// @brief Field _tickRunning, offset: 0x89, size: 0x1, def value: None
 bool  ____tickRunning;

/// @brief Field summoningProgress, offset: 0x8c, size: 0x4, def value: None
 float_t  ___summoningProgress;

/// @brief Field activeSummoners, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GreyZoneSummoner>>*  ___activeSummoners;

/// @brief Field summoningPlayers, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::UnityW<::GlobalNamespace::GreyZoneSummoner>>>*  ___summoningPlayers;

/// @brief Field summoningPlayerProgress, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  ___summoningPlayerProgress;

/// @brief Field invalidSummoners, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___invalidSummoners;

/// @brief Field m_areas, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GreyZoneAreaEnable>>*  ___m_areas;

/// @brief Field audioFadeCoroutine, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___audioFadeCoroutine;

/// @brief Field roomPlayerList, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<::Photon::Realtime::Player*>  ___roomPlayerList;

/// @brief Field _GreyZoneActive, offset: 0xc8, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ____GreyZoneActive;

/// @brief Field moonController, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MoonController>  ___moonController;

/// @brief Field skyMonsterMovementVelocity, offset: 0xe0, size: 0x4, def value: None
 float_t  ___skyMonsterMovementVelocity;

/// @brief Field gravityOverrideSet, offset: 0xe4, size: 0x1, def value: None
 bool  ___gravityOverrideSet;

/// @brief Field greyZoneAmbienceVolume, offset: 0xe8, size: 0x4, def value: None
 float_t  ___greyZoneAmbienceVolume;

/// @brief Field greyZoneAvailableDayOfYear, offset: 0xec, size: 0x4, def value: None
 int32_t  ___greyZoneAvailableDayOfYear;

/// @brief Field OnGreyZoneActivated, offset: 0xf0, size: 0x8, def value: None
 ::System::Action*  ___OnGreyZoneActivated;

/// @brief Field OnGreyZoneDeactivated, offset: 0xf8, size: 0x8, def value: None
 ::System::Action*  ___OnGreyZoneDeactivated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___greyZoneActiveDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___gravityFactorOptions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___gravityFactorOptionSelection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___summoningActivationTime) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___greyZoneAmbience) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___ambienceFadeTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___forceTimeOfDayToNight) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___skyMonsterMovementEnterTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___skyMonsterMovementExitTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___skyMonsterDistGravityRampBuffer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___gravityReductionAmount) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___simpleGravityFactor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___greyZoneParticles) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___particlePredictiveSpawnMaxDist) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___particlePredictiveSpawnVelocityFactor) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___photonConnectedDuringActivation) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___greyZoneActivationTime) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___greyZoneActive) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ____tickRunning) == 0x89, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___summoningProgress) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___activeSummoners) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___summoningPlayers) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___summoningPlayerProgress) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___invalidSummoners) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___m_areas) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___audioFadeCoroutine) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___roomPlayerList) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ____GreyZoneActive) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___moonController) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___skyMonsterMovementVelocity) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___gravityOverrideSet) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___greyZoneAmbienceVolume) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___greyZoneAvailableDayOfYear) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___OnGreyZoneActivated) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager, ___OnGreyZoneDeactivated) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GreyZoneManager) == 0x100, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GreyZoneManager/<FadeAudioOut>d__64
class CORDL_TYPE GreyZoneManager__FadeAudioOut_d__64 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <startTime>5__3, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime_5__3, put=__cordl_internal_set__startTime_5__3)) float_t  _startTime_5__3;

/// @brief Field <startingVolume>5__2, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__startingVolume_5__2, put=__cordl_internal_set__startingVolume_5__2)) float_t  _startingVolume_5__2;

/// @brief Field duration, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field source, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::UnityW<::UnityEngine::AudioSource>  source;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x561ceb4, size 0x154, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x561d008, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x561d010, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x561d048, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x561ceb0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr float_t const& __cordl_internal_get__startTime_5__3() const;

constexpr float_t& __cordl_internal_get__startTime_5__3() ;

constexpr float_t const& __cordl_internal_get__startingVolume_5__2() const;

constexpr float_t& __cordl_internal_get__startingVolume_5__2() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_source() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__startTime_5__3(float_t  value) ;

constexpr void __cordl_internal_set__startingVolume_5__2(float_t  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_source(::UnityW<::UnityEngine::AudioSource>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x561b164, size 0x28, virtual false, abstract: false, final false
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
constexpr GreyZoneManager__FadeAudioOut_d__64() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GreyZoneManager__FadeAudioOut_d__64", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GreyZoneManager__FadeAudioOut_d__64(GreyZoneManager__FadeAudioOut_d__64 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GreyZoneManager__FadeAudioOut_d__64", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GreyZoneManager__FadeAudioOut_d__64(GreyZoneManager__FadeAudioOut_d__64 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{566};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field source, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___source;

/// @brief Field duration, offset: 0x28, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field <startingVolume>5__2, offset: 0x2c, size: 0x4, def value: None
 float_t  ____startingVolume_5__2;

/// @brief Field <startTime>5__3, offset: 0x30, size: 0x4, def value: None
 float_t  ____startTime_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64, ___source) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64, ____startingVolume_5__2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64, ____startTime_5__3) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GreyZoneManager__FadeAudioOut_d__64) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GreyZoneManager/<FadeAudioIn>d__63
class CORDL_TYPE GreyZoneManager__FadeAudioIn_d__63 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <startTime>5__3, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime_5__3, put=__cordl_internal_set__startTime_5__3)) float_t  _startTime_5__3;

/// @brief Field <startingVolume>5__2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__startingVolume_5__2, put=__cordl_internal_set__startingVolume_5__2)) float_t  _startingVolume_5__2;

/// @brief Field duration, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field maxVolume, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxVolume, put=__cordl_internal_set_maxVolume)) float_t  maxVolume;

/// @brief Field source, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::UnityW<::UnityEngine::AudioSource>  source;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x561cd10, size 0x158, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x561ce68, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x561ce70, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x561cea8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x561cd0c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr float_t const& __cordl_internal_get__startTime_5__3() const;

constexpr float_t& __cordl_internal_get__startTime_5__3() ;

constexpr float_t const& __cordl_internal_get__startingVolume_5__2() const;

constexpr float_t& __cordl_internal_get__startingVolume_5__2() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr float_t const& __cordl_internal_get_maxVolume() const;

constexpr float_t& __cordl_internal_get_maxVolume() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_source() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__startTime_5__3(float_t  value) ;

constexpr void __cordl_internal_set__startingVolume_5__2(float_t  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_maxVolume(float_t  value) ;

constexpr void __cordl_internal_set_source(::UnityW<::UnityEngine::AudioSource>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x561b13c, size 0x28, virtual false, abstract: false, final false
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
constexpr GreyZoneManager__FadeAudioIn_d__63() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GreyZoneManager__FadeAudioIn_d__63", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GreyZoneManager__FadeAudioIn_d__63(GreyZoneManager__FadeAudioIn_d__63 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GreyZoneManager__FadeAudioIn_d__63", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GreyZoneManager__FadeAudioIn_d__63(GreyZoneManager__FadeAudioIn_d__63 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{565};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field source, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___source;

/// @brief Field maxVolume, offset: 0x28, size: 0x4, def value: None
 float_t  ___maxVolume;

/// @brief Field duration, offset: 0x2c, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field <startingVolume>5__2, offset: 0x30, size: 0x4, def value: None
 float_t  ____startingVolume_5__2;

/// @brief Field <startTime>5__3, offset: 0x34, size: 0x4, def value: None
 float_t  ____startTime_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63, ___source) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63, ___maxVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63, ___duration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63, ____startingVolume_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63, ____startTime_5__3) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GreyZoneManager__FadeAudioIn_d__63) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
