#pragma once
// IWYU pragma private; include "GlobalNamespace/InfectionLavaController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__InfectionLavaController_LavaSyncData_def.hpp"
#include "GlobalNamespace/zzzz__VolcanoEffects_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InfectionLavaController)
namespace GlobalNamespace {
struct GTZone;
}
namespace GlobalNamespace {
class ITickSystemPost;
}
namespace GlobalNamespace {
struct InfectionLavaController_LavaSyncData;
}
namespace GlobalNamespace {
struct InfectionLavaController_RisingLavaState;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct RoomSystem_LavaSyncEventData;
}
namespace GlobalNamespace {
class SlingshotProjectileHitNotifier;
}
namespace GlobalNamespace {
class SlingshotProjectile;
}
namespace GorillaLocomotion::Swimming {
class WaterVolume;
}
namespace GorillaTag::Rendering {
class ZoneShaderSettings;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class InfectionLavaController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::InfectionLavaController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InfectionLavaController*, "", "InfectionLavaController");
// Dependencies GTZone, InfectionLavaController::LavaSyncData, UnityEngine.MonoBehaviour, VolcanoEffects
namespace GlobalNamespace {
// Is value type: false
// CS Name: InfectionLavaController
class CORDL_TYPE InfectionLavaController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LavaSyncData = ::GlobalNamespace::InfectionLavaController_LavaSyncData;

using RisingLavaState = ::GlobalNamespace::InfectionLavaController_RisingLavaState;

 __declspec(property(get=ITickSystemPost_get_PostTickRunning, put=ITickSystemPost_set_PostTickRunning)) bool  ITickSystemPost_PostTickRunning;

 __declspec(property(get=get_InCompetitiveQueue)) bool  InCompetitiveQueue;

 __declspec(property(get=get_IsAuthority)) bool  IsAuthority;

 __declspec(property(get=get_LavaCurrentlyActivated)) bool  LavaCurrentlyActivated;

 __declspec(property(get=get_LavaPlane)) ::UnityEngine::Plane  LavaPlane;

 __declspec(property(get=get_PlayerCount)) int32_t  PlayerCount;

 __declspec(property(get=get_SurfaceCenter)) ::UnityEngine::Vector3  SurfaceCenter;

 __declspec(property(get=get_Zone)) ::GlobalNamespace::GTZone  Zone;

/// @brief Field <ITickSystemPost.PostTickRunning>k__BackingField, offset 0x140, size 0x1 
 __declspec(property(get=__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField, put=__cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField)) bool  _ITickSystemPost_PostTickRunning_k__BackingField;

/// @brief Field _shaderProp_GlobalLavaResidueParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__shaderProp_GlobalLavaResidueParams, put=setStaticF__shaderProp_GlobalLavaResidueParams)) int32_t  _shaderProp_GlobalLavaResidueParams;

/// @brief Field _shaderProp_GlobalMainWaterSurfacePlane, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__shaderProp_GlobalMainWaterSurfacePlane, put=setStaticF__shaderProp_GlobalMainWaterSurfacePlane)) int32_t  _shaderProp_GlobalMainWaterSurfacePlane;

/// @brief Field activationProgessSmooth, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_activationProgessSmooth, put=__cordl_internal_set_activationProgessSmooth)) float_t  activationProgessSmooth;

/// @brief Field activationVotePercentageCompetitiveQueue, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_activationVotePercentageCompetitiveQueue, put=__cordl_internal_set_activationVotePercentageCompetitiveQueue)) float_t  activationVotePercentageCompetitiveQueue;

/// @brief Field activationVotePercentageDefaultQueue, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_activationVotePercentageDefaultQueue, put=__cordl_internal_set_activationVotePercentageDefaultQueue)) float_t  activationVotePercentageDefaultQueue;

/// @brief Field activeControllers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_activeControllers, put=setStaticF_activeControllers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InfectionLavaController>>*  activeControllers;

/// @brief Field baseZoneShaderSettings, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseZoneShaderSettings, put=__cordl_internal_set_baseZoneShaderSettings)) ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  baseZoneShaderSettings;

/// @brief Field currentTime, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentTime, put=__cordl_internal_set_currentTime)) double_t  currentTime;

/// @brief Field debugLavaActivationVotes, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugLavaActivationVotes, put=__cordl_internal_set_debugLavaActivationVotes)) bool  debugLavaActivationVotes;

/// @brief Field drainTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_drainTime, put=__cordl_internal_set_drainTime)) float_t  drainTime;

/// @brief Field eruptTime, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_eruptTime, put=__cordl_internal_set_eruptTime)) float_t  eruptTime;

/// @brief Field fullTime, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_fullTime, put=__cordl_internal_set_fullTime)) float_t  fullTime;

/// @brief Field lagResolutionLavaProgressPerSecond, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_lagResolutionLavaProgressPerSecond, put=__cordl_internal_set_lagResolutionLavaProgressPerSecond)) float_t  lagResolutionLavaProgressPerSecond;

/// @brief Field lastSyncSendTime, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastSyncSendTime, put=__cordl_internal_set_lastSyncSendTime)) double_t  lastSyncSendTime;

/// @brief Field lastTagSelfRPCTime, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastTagSelfRPCTime, put=__cordl_internal_set_lastTagSelfRPCTime)) double_t  lastTagSelfRPCTime;

/// @brief Field latencyBuffer, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_latencyBuffer, put=__cordl_internal_set_latencyBuffer)) float_t  latencyBuffer;

/// @brief Field lavaActivationDrainRateVsPlayerCount, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaActivationDrainRateVsPlayerCount, put=__cordl_internal_set_lavaActivationDrainRateVsPlayerCount)) ::UnityEngine::AnimationCurve*  lavaActivationDrainRateVsPlayerCount;

/// @brief Field lavaActivationEndPos, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaActivationEndPos, put=__cordl_internal_set_lavaActivationEndPos)) ::UnityW<::UnityEngine::Transform>  lavaActivationEndPos;

/// @brief Field lavaActivationGradient, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaActivationGradient, put=__cordl_internal_set_lavaActivationGradient)) ::UnityEngine::Gradient*  lavaActivationGradient;

/// @brief Field lavaActivationMPB, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaActivationMPB, put=__cordl_internal_set_lavaActivationMPB)) ::UnityEngine::MaterialPropertyBlock*  lavaActivationMPB;

/// @brief Field lavaActivationProjectileHitNotifier, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaActivationProjectileHitNotifier, put=__cordl_internal_set_lavaActivationProjectileHitNotifier)) ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  lavaActivationProjectileHitNotifier;

/// @brief Field lavaActivationRenderer, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaActivationRenderer, put=__cordl_internal_set_lavaActivationRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  lavaActivationRenderer;

/// @brief Field lavaActivationRockProgressVsPlayerCount, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaActivationRockProgressVsPlayerCount, put=__cordl_internal_set_lavaActivationRockProgressVsPlayerCount)) ::UnityEngine::AnimationCurve*  lavaActivationRockProgressVsPlayerCount;

/// @brief Field lavaActivationStartPos, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaActivationStartPos, put=__cordl_internal_set_lavaActivationStartPos)) ::UnityW<::UnityEngine::Transform>  lavaActivationStartPos;

/// @brief Field lavaActivationVisualMovementProgressPerSecond, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_lavaActivationVisualMovementProgressPerSecond, put=__cordl_internal_set_lavaActivationVisualMovementProgressPerSecond)) float_t  lavaActivationVisualMovementProgressPerSecond;

/// @brief Field lavaActivationVoteCount, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lavaActivationVoteCount, put=__cordl_internal_set_lavaActivationVoteCount)) int32_t  lavaActivationVoteCount;

/// @brief Field lavaActivationVotePlayerIds, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaActivationVotePlayerIds, put=__cordl_internal_set_lavaActivationVotePlayerIds)) ::ArrayW<int32_t>  lavaActivationVotePlayerIds;

/// @brief Field lavaMeshMaxScale, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_lavaMeshMaxScale, put=__cordl_internal_set_lavaMeshMaxScale)) float_t  lavaMeshMaxScale;

/// @brief Field lavaMeshMinScale, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_lavaMeshMinScale, put=__cordl_internal_set_lavaMeshMinScale)) float_t  lavaMeshMinScale;

/// @brief Field lavaMeshTransform, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaMeshTransform, put=__cordl_internal_set_lavaMeshTransform)) ::UnityW<::UnityEngine::Transform>  lavaMeshTransform;

/// @brief Field lavaProgressAnimationCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaProgressAnimationCurve, put=__cordl_internal_set_lavaProgressAnimationCurve)) ::UnityEngine::AnimationCurve*  lavaProgressAnimationCurve;

/// @brief Field lavaProgressLinear, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lavaProgressLinear, put=__cordl_internal_set_lavaProgressLinear)) float_t  lavaProgressLinear;

/// @brief Field lavaProgressSmooth, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lavaProgressSmooth, put=__cordl_internal_set_lavaProgressSmooth)) float_t  lavaProgressSmooth;

/// @brief Field lavaScale, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_lavaScale, put=__cordl_internal_set_lavaScale)) float_t  lavaScale;

/// @brief Field lavaSurfacePlaneTransform, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaSurfacePlaneTransform, put=__cordl_internal_set_lavaSurfacePlaneTransform)) ::UnityW<::UnityEngine::Transform>  lavaSurfacePlaneTransform;

/// @brief Field lavaVolume, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaVolume, put=__cordl_internal_set_lavaVolume)) ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  lavaVolume;

/// @brief Field lavaZoneShaderSettings, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaZoneShaderSettings, put=__cordl_internal_set_lavaZoneShaderSettings)) ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  lavaZoneShaderSettings;

/// @brief Field localLagLavaProgressOffset, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_localLagLavaProgressOffset, put=__cordl_internal_set_localLagLavaProgressOffset)) float_t  localLagLavaProgressOffset;

/// @brief Field localPlayerInZone, offset 0x128, size 0x1 
 __declspec(property(get=__cordl_internal_get_localPlayerInZone, put=__cordl_internal_set_localPlayerInZone)) bool  localPlayerInZone;

/// @brief Field prevTime, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevTime, put=__cordl_internal_set_prevTime)) double_t  prevTime;

/// @brief Field reliableState, offset 0xc8, size 0x18 
 __declspec(property(get=__cordl_internal_get_reliableState, put=__cordl_internal_set_reliableState)) ::GlobalNamespace::InfectionLavaController_LavaSyncData  reliableState;

/// @brief Field residueDrainSpeed, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_residueDrainSpeed, put=__cordl_internal_set_residueDrainSpeed)) float_t  residueDrainSpeed;

/// @brief Field residueIntensity, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get_residueIntensity, put=__cordl_internal_set_residueIntensity)) float_t  residueIntensity;

/// @brief Field residueOffset, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_residueOffset, put=__cordl_internal_set_residueOffset)) float_t  residueOffset;

/// @brief Field residuePlaneY, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_residuePlaneY, put=__cordl_internal_set_residuePlaneY)) float_t  residuePlaneY;

/// @brief Field residueUVScale, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_residueUVScale, put=__cordl_internal_set_residueUVScale)) float_t  residueUVScale;

/// @brief Field riseTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_riseTime, put=__cordl_internal_set_riseTime)) float_t  riseTime;

/// @brief Field volcanoEffects, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_volcanoEffects, put=__cordl_internal_set_volcanoEffects)) ::ArrayW<::UnityW<::GlobalNamespace::VolcanoEffects>>  volcanoEffects;

/// @brief Field zone, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::GlobalNamespace::GTZone  zone;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr operator  ::GlobalNamespace::ITickSystemPost*() noexcept;

/// @brief Method AddLavaRock, addr 0x59829f4, size 0x9c, virtual false, abstract: false, final false
inline void AddLavaRock(int32_t  playerId) ;

/// @brief Method AddVoteForVolcanoActivation, addr 0x5982b10, size 0xa8, virtual false, abstract: false, final false
inline void AddVoteForVolcanoActivation(int32_t  playerId) ;

/// @brief Method AdvanceLavaPhaseByTime, addr 0x5981534, size 0xd0, virtual false, abstract: false, final false
inline void AdvanceLavaPhaseByTime(double_t  time, ::by_ref<::GlobalNamespace::InfectionLavaController_LavaSyncData>  syncData) ;

/// @brief Method Awake, addr 0x597f794, size 0x2f0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckLocalPlayerAgainstLava, addr 0x5981f14, size 0x158, virtual false, abstract: false, final false
inline void CheckLocalPlayerAgainstLava(double_t  currentTime) ;

/// @brief Method CheckLocalPlayerInZone, addr 0x5980db8, size 0x2c4, virtual false, abstract: false, final false
inline bool CheckLocalPlayerInZone() ;

/// @brief Method CountRigsInZone, addr 0x5983118, size 0x260, virtual false, abstract: false, final false
inline int32_t CountRigsInZone() ;

/// @brief Method DrainActivationProgressLocally, addr 0x5981604, size 0x10c, virtual false, abstract: false, final false
inline void DrainActivationProgressLocally() ;

/// @brief Method GetControllerForZone, addr 0x597f044, size 0x11c, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::InfectionLavaController> GetControllerForZone(::GlobalNamespace::GTZone  zone) ;

/// @brief Method GetMinLavaY, addr 0x5980844, size 0x118, virtual false, abstract: false, final false
inline float_t GetMinLavaY() ;

/// @brief Method GetZoneAuthorityActorNumber, addr 0x597f274, size 0x274, virtual false, abstract: false, final false
inline int32_t GetZoneAuthorityActorNumber() ;

/// @brief Method ITickSystemPost.PostTick, addr 0x5980a84, size 0x334, virtual true, abstract: false, final true
inline void ITickSystemPost_PostTick() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemPost.get_PostTickRunning, addr 0x5980a74, size 0x8, virtual true, abstract: false, final true
inline bool ITickSystemPost_get_PostTickRunning() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemPost.set_PostTickRunning, addr 0x5980a7c, size 0x8, virtual true, abstract: false, final true
inline void ITickSystemPost_set_PostTickRunning(bool  value) ;

/// @brief Method IfNullThenLogAndDisableSelf, addr 0x5980434, size 0x158, virtual false, abstract: false, final false
inline void IfNullThenLogAndDisableSelf(::UnityEngine::Object*  obj, ::StringW  fieldName, int32_t  index) ;

/// @brief Method JumpToState, addr 0x598206c, size 0x30c, virtual false, abstract: false, final false
inline void JumpToState(::GlobalNamespace::InfectionLavaController_RisingLavaState  state) ;

/// @brief Method LocalPlayerInLava, addr 0x5982610, size 0x148, virtual false, abstract: false, final false
inline void LocalPlayerInLava(double_t  currentTime, bool  enteredLavaThisFrame) ;

static inline ::GlobalNamespace::InfectionLavaController* New_ctor() ;

/// @brief Method OnActivationLavaProjectileHit, addr 0x59828d4, size 0x120, virtual false, abstract: false, final false
inline void OnActivationLavaProjectileHit(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collision*  collision) ;

/// @brief Method OnColliderEnteredLava, addr 0x5982758, size 0x17c, virtual false, abstract: false, final false
inline void OnColliderEnteredLava(::GorillaLocomotion::Swimming::WaterVolume*  volume, ::UnityEngine::Collider*  collider) ;

/// @brief Method OnDestroy, addr 0x598058c, size 0x2b8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x598005c, size 0x1f0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x597fa84, size 0x310, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLavaSyncReceived, addr 0x5982d44, size 0x19c, virtual false, abstract: false, final false
inline void OnLavaSyncReceived(::GlobalNamespace::RoomSystem_LavaSyncEventData  data) ;

/// @brief Method OnLeftRoom, addr 0x5982fe8, size 0x130, virtual false, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnPlayerJoinedRoom, addr 0x5982ee0, size 0x38, virtual false, abstract: false, final false
inline void OnPlayerJoinedRoom(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnPlayerLeftRoom, addr 0x5982f18, size 0xd0, virtual false, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherNetPlayer) ;

/// @brief Method RemoveVoteForVolcanoActivation, addr 0x5982bb8, size 0x90, virtual false, abstract: false, final false
inline void RemoveVoteForVolcanoActivation(int32_t  playerId) ;

/// @brief Method ResetLavaState, addr 0x598024c, size 0x1e8, virtual false, abstract: false, final false
inline void ResetLavaState() ;

/// @brief Method SendSyncEvent, addr 0x5981438, size 0xfc, virtual false, abstract: false, final false
inline void SendSyncEvent() ;

/// @brief Method SendSyncEventToPlayer, addr 0x5982c48, size 0xfc, virtual false, abstract: false, final false
inline void SendSyncEventToPlayer(::GlobalNamespace::NetPlayer*  target) ;

/// @brief Method UpdateLava, addr 0x5980988, size 0xec, virtual false, abstract: false, final false
inline void UpdateLava(float_t  fillProgress) ;

/// @brief Method UpdateLocalState, addr 0x5981710, size 0x460, virtual false, abstract: false, final false
inline void UpdateLocalState(double_t  currentTime, ::GlobalNamespace::InfectionLavaController_LavaSyncData  syncData) ;

/// @brief Method UpdateReliableState, addr 0x598107c, size 0x3bc, virtual false, abstract: false, final false
inline void UpdateReliableState(double_t  currentTime, ::by_ref<::GlobalNamespace::InfectionLavaController_LavaSyncData>  syncData) ;

/// @brief Method UpdateResidueState, addr 0x5981b70, size 0x1d4, virtual false, abstract: false, final false
inline void UpdateResidueState() ;

/// @brief Method UpdateVolcanoActivationLava, addr 0x5981d44, size 0x1d0, virtual false, abstract: false, final false
inline void UpdateVolcanoActivationLava(float_t  activationProgress) ;

/// @brief Method VerifyReferences, addr 0x597fd94, size 0x1bc, virtual false, abstract: false, final false
inline void VerifyReferences() ;

constexpr bool const& __cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_activationProgessSmooth() const;

constexpr float_t& __cordl_internal_get_activationProgessSmooth() ;

constexpr float_t const& __cordl_internal_get_activationVotePercentageCompetitiveQueue() const;

constexpr float_t& __cordl_internal_get_activationVotePercentageCompetitiveQueue() ;

constexpr float_t const& __cordl_internal_get_activationVotePercentageDefaultQueue() const;

constexpr float_t& __cordl_internal_get_activationVotePercentageDefaultQueue() ;

constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> const& __cordl_internal_get_baseZoneShaderSettings() const;

constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>& __cordl_internal_get_baseZoneShaderSettings() ;

constexpr double_t const& __cordl_internal_get_currentTime() const;

constexpr double_t& __cordl_internal_get_currentTime() ;

constexpr bool const& __cordl_internal_get_debugLavaActivationVotes() const;

constexpr bool& __cordl_internal_get_debugLavaActivationVotes() ;

constexpr float_t const& __cordl_internal_get_drainTime() const;

constexpr float_t& __cordl_internal_get_drainTime() ;

constexpr float_t const& __cordl_internal_get_eruptTime() const;

constexpr float_t& __cordl_internal_get_eruptTime() ;

constexpr float_t const& __cordl_internal_get_fullTime() const;

constexpr float_t& __cordl_internal_get_fullTime() ;

constexpr float_t const& __cordl_internal_get_lagResolutionLavaProgressPerSecond() const;

constexpr float_t& __cordl_internal_get_lagResolutionLavaProgressPerSecond() ;

constexpr double_t const& __cordl_internal_get_lastSyncSendTime() const;

constexpr double_t& __cordl_internal_get_lastSyncSendTime() ;

constexpr double_t const& __cordl_internal_get_lastTagSelfRPCTime() const;

constexpr double_t& __cordl_internal_get_lastTagSelfRPCTime() ;

constexpr float_t const& __cordl_internal_get_latencyBuffer() const;

constexpr float_t& __cordl_internal_get_latencyBuffer() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_lavaActivationDrainRateVsPlayerCount() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_lavaActivationDrainRateVsPlayerCount() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lavaActivationEndPos() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lavaActivationEndPos() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_lavaActivationGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_lavaActivationGradient() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_lavaActivationMPB() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_lavaActivationMPB() ;

constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier> const& __cordl_internal_get_lavaActivationProjectileHitNotifier() const;

constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>& __cordl_internal_get_lavaActivationProjectileHitNotifier() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_lavaActivationRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_lavaActivationRenderer() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_lavaActivationRockProgressVsPlayerCount() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_lavaActivationRockProgressVsPlayerCount() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lavaActivationStartPos() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lavaActivationStartPos() ;

constexpr float_t const& __cordl_internal_get_lavaActivationVisualMovementProgressPerSecond() const;

constexpr float_t& __cordl_internal_get_lavaActivationVisualMovementProgressPerSecond() ;

constexpr int32_t const& __cordl_internal_get_lavaActivationVoteCount() const;

constexpr int32_t& __cordl_internal_get_lavaActivationVoteCount() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_lavaActivationVotePlayerIds() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_lavaActivationVotePlayerIds() ;

constexpr float_t const& __cordl_internal_get_lavaMeshMaxScale() const;

constexpr float_t& __cordl_internal_get_lavaMeshMaxScale() ;

constexpr float_t const& __cordl_internal_get_lavaMeshMinScale() const;

constexpr float_t& __cordl_internal_get_lavaMeshMinScale() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lavaMeshTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lavaMeshTransform() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_lavaProgressAnimationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_lavaProgressAnimationCurve() ;

constexpr float_t const& __cordl_internal_get_lavaProgressLinear() const;

constexpr float_t& __cordl_internal_get_lavaProgressLinear() ;

constexpr float_t const& __cordl_internal_get_lavaProgressSmooth() const;

constexpr float_t& __cordl_internal_get_lavaProgressSmooth() ;

constexpr float_t const& __cordl_internal_get_lavaScale() const;

constexpr float_t& __cordl_internal_get_lavaScale() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lavaSurfacePlaneTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lavaSurfacePlaneTransform() ;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> const& __cordl_internal_get_lavaVolume() const;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>& __cordl_internal_get_lavaVolume() ;

constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> const& __cordl_internal_get_lavaZoneShaderSettings() const;

constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>& __cordl_internal_get_lavaZoneShaderSettings() ;

constexpr float_t const& __cordl_internal_get_localLagLavaProgressOffset() const;

constexpr float_t& __cordl_internal_get_localLagLavaProgressOffset() ;

constexpr bool const& __cordl_internal_get_localPlayerInZone() const;

constexpr bool& __cordl_internal_get_localPlayerInZone() ;

constexpr double_t const& __cordl_internal_get_prevTime() const;

constexpr double_t& __cordl_internal_get_prevTime() ;

constexpr ::GlobalNamespace::InfectionLavaController_LavaSyncData const& __cordl_internal_get_reliableState() const;

constexpr ::GlobalNamespace::InfectionLavaController_LavaSyncData& __cordl_internal_get_reliableState() ;

constexpr float_t const& __cordl_internal_get_residueDrainSpeed() const;

constexpr float_t& __cordl_internal_get_residueDrainSpeed() ;

constexpr float_t const& __cordl_internal_get_residueIntensity() const;

constexpr float_t& __cordl_internal_get_residueIntensity() ;

constexpr float_t const& __cordl_internal_get_residueOffset() const;

constexpr float_t& __cordl_internal_get_residueOffset() ;

constexpr float_t const& __cordl_internal_get_residuePlaneY() const;

constexpr float_t& __cordl_internal_get_residuePlaneY() ;

constexpr float_t const& __cordl_internal_get_residueUVScale() const;

constexpr float_t& __cordl_internal_get_residueUVScale() ;

constexpr float_t const& __cordl_internal_get_riseTime() const;

constexpr float_t& __cordl_internal_get_riseTime() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::VolcanoEffects>> const& __cordl_internal_get_volcanoEffects() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::VolcanoEffects>>& __cordl_internal_get_volcanoEffects() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_zone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_zone() ;

constexpr void __cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_activationProgessSmooth(float_t  value) ;

constexpr void __cordl_internal_set_activationVotePercentageCompetitiveQueue(float_t  value) ;

constexpr void __cordl_internal_set_activationVotePercentageDefaultQueue(float_t  value) ;

constexpr void __cordl_internal_set_baseZoneShaderSettings(::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  value) ;

constexpr void __cordl_internal_set_currentTime(double_t  value) ;

constexpr void __cordl_internal_set_debugLavaActivationVotes(bool  value) ;

constexpr void __cordl_internal_set_drainTime(float_t  value) ;

constexpr void __cordl_internal_set_eruptTime(float_t  value) ;

constexpr void __cordl_internal_set_fullTime(float_t  value) ;

constexpr void __cordl_internal_set_lagResolutionLavaProgressPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_lastSyncSendTime(double_t  value) ;

constexpr void __cordl_internal_set_lastTagSelfRPCTime(double_t  value) ;

constexpr void __cordl_internal_set_latencyBuffer(float_t  value) ;

constexpr void __cordl_internal_set_lavaActivationDrainRateVsPlayerCount(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_lavaActivationEndPos(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lavaActivationGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_lavaActivationMPB(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_lavaActivationProjectileHitNotifier(::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  value) ;

constexpr void __cordl_internal_set_lavaActivationRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_lavaActivationRockProgressVsPlayerCount(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_lavaActivationStartPos(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lavaActivationVisualMovementProgressPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_lavaActivationVoteCount(int32_t  value) ;

constexpr void __cordl_internal_set_lavaActivationVotePlayerIds(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_lavaMeshMaxScale(float_t  value) ;

constexpr void __cordl_internal_set_lavaMeshMinScale(float_t  value) ;

constexpr void __cordl_internal_set_lavaMeshTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lavaProgressAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_lavaProgressLinear(float_t  value) ;

constexpr void __cordl_internal_set_lavaProgressSmooth(float_t  value) ;

constexpr void __cordl_internal_set_lavaScale(float_t  value) ;

constexpr void __cordl_internal_set_lavaSurfacePlaneTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lavaVolume(::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  value) ;

constexpr void __cordl_internal_set_lavaZoneShaderSettings(::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  value) ;

constexpr void __cordl_internal_set_localLagLavaProgressOffset(float_t  value) ;

constexpr void __cordl_internal_set_localPlayerInZone(bool  value) ;

constexpr void __cordl_internal_set_prevTime(double_t  value) ;

constexpr void __cordl_internal_set_reliableState(::GlobalNamespace::InfectionLavaController_LavaSyncData  value) ;

constexpr void __cordl_internal_set_residueDrainSpeed(float_t  value) ;

constexpr void __cordl_internal_set_residueIntensity(float_t  value) ;

constexpr void __cordl_internal_set_residueOffset(float_t  value) ;

constexpr void __cordl_internal_set_residuePlaneY(float_t  value) ;

constexpr void __cordl_internal_set_residueUVScale(float_t  value) ;

constexpr void __cordl_internal_set_riseTime(float_t  value) ;

constexpr void __cordl_internal_set_volcanoEffects(::ArrayW<::UnityW<::GlobalNamespace::VolcanoEffects>>  value) ;

constexpr void __cordl_internal_set_zone(::GlobalNamespace::GTZone  value) ;

/// @brief Method .ctor, addr 0x5983378, size 0x118, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__shaderProp_GlobalLavaResidueParams() ;

static inline int32_t getStaticF__shaderProp_GlobalMainWaterSurfacePlane() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InfectionLavaController>>* getStaticF_activeControllers() ;

/// @brief Method get_ActiveControllers, addr 0x597efec, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::InfectionLavaController>>* get_ActiveControllers() ;

/// @brief Method get_InCompetitiveQueue, addr 0x597f6c0, size 0xd4, virtual false, abstract: false, final false
inline bool get_InCompetitiveQueue() ;

/// @brief Method get_IsAuthority, addr 0x597f168, size 0x10c, virtual false, abstract: false, final false
inline bool get_IsAuthority() ;

/// @brief Method get_LavaCurrentlyActivated, addr 0x597f4e8, size 0x10, virtual false, abstract: false, final false
inline bool get_LavaCurrentlyActivated() ;

/// @brief Method get_LavaPlane, addr 0x597f4f8, size 0x124, virtual false, abstract: false, final false
inline ::UnityEngine::Plane get_LavaPlane() ;

/// @brief Method get_PlayerCount, addr 0x597f634, size 0x8c, virtual false, abstract: false, final false
inline int32_t get_PlayerCount() ;

/// @brief Method get_SurfaceCenter, addr 0x597f61c, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_SurfaceCenter() ;

/// @brief Method get_Zone, addr 0x597f160, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GTZone get_Zone() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* i___GlobalNamespace__ITickSystemPost() noexcept;

static inline void setStaticF__shaderProp_GlobalLavaResidueParams(int32_t  value) ;

static inline void setStaticF__shaderProp_GlobalMainWaterSurfacePlane(int32_t  value) ;

static inline void setStaticF_activeControllers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InfectionLavaController>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InfectionLavaController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InfectionLavaController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InfectionLavaController(InfectionLavaController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InfectionLavaController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InfectionLavaController(InfectionLavaController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2531};

/// @brief Field lavaRockProjectileTag offset 0xffffffff size 0x8
static constexpr ::ConstString  lavaRockProjectileTag{u"LavaRockProjectile"};

/// @brief Field syncInterval offset 0xffffffff size 0x8
static constexpr double_t  syncInterval{static_cast<double_t>(2.0)};

/// [SerializeField]
/// @brief Field zone, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___zone;

/// [SerializeField]
/// @brief Field lavaMeshMinScale, offset: 0x24, size: 0x4, def value: None
 float_t  ___lavaMeshMinScale;

/// [Tooltip("If you throw rocks into the volcano quickly enough, then it will raise to this height.")]
/// [SerializeField]
/// @brief Field lavaMeshMaxScale, offset: 0x28, size: 0x4, def value: None
 float_t  ___lavaMeshMaxScale;

/// [SerializeField]
/// @brief Field eruptTime, offset: 0x2c, size: 0x4, def value: None
 float_t  ___eruptTime;

/// [SerializeField]
/// @brief Field riseTime, offset: 0x30, size: 0x4, def value: None
 float_t  ___riseTime;

/// [SerializeField]
/// @brief Field fullTime, offset: 0x34, size: 0x4, def value: None
 float_t  ___fullTime;

/// [SerializeField]
/// @brief Field drainTime, offset: 0x38, size: 0x4, def value: None
 float_t  ___drainTime;

/// [Tooltip("Delay added when starting the eruption cycle so the sync event has time to reach other clients before visuals begin.")]
/// [SerializeField]
/// @brief Field latencyBuffer, offset: 0x3c, size: 0x4, def value: None
 float_t  ___latencyBuffer;

/// [SerializeField]
/// @brief Field lagResolutionLavaProgressPerSecond, offset: 0x40, size: 0x4, def value: None
 float_t  ___lagResolutionLavaProgressPerSecond;

/// [SerializeField]
/// @brief Field lavaProgressAnimationCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___lavaProgressAnimationCurve;

/// [Header("Volcano Activation")]
/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field activationVotePercentageDefaultQueue, offset: 0x50, size: 0x4, def value: None
 float_t  ___activationVotePercentageDefaultQueue;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field activationVotePercentageCompetitiveQueue, offset: 0x54, size: 0x4, def value: None
 float_t  ___activationVotePercentageCompetitiveQueue;

/// [SerializeField]
/// @brief Field lavaActivationGradient, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___lavaActivationGradient;

/// [SerializeField]
/// @brief Field lavaActivationRockProgressVsPlayerCount, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___lavaActivationRockProgressVsPlayerCount;

/// [SerializeField]
/// @brief Field lavaActivationDrainRateVsPlayerCount, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___lavaActivationDrainRateVsPlayerCount;

/// [SerializeField]
/// @brief Field lavaActivationVisualMovementProgressPerSecond, offset: 0x70, size: 0x4, def value: None
 float_t  ___lavaActivationVisualMovementProgressPerSecond;

/// [SerializeField]
/// @brief Field debugLavaActivationVotes, offset: 0x74, size: 0x1, def value: None
 bool  ___debugLavaActivationVotes;

/// [Header("Scene References")]
/// [SerializeField]
/// @brief Field lavaMeshTransform, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lavaMeshTransform;

/// [SerializeField]
/// @brief Field lavaSurfacePlaneTransform, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lavaSurfacePlaneTransform;

/// [SerializeField]
/// @brief Field lavaVolume, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  ___lavaVolume;

/// [SerializeField]
/// @brief Field lavaActivationRenderer, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___lavaActivationRenderer;

/// [SerializeField]
/// @brief Field lavaActivationStartPos, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lavaActivationStartPos;

/// [SerializeField]
/// @brief Field lavaActivationEndPos, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lavaActivationEndPos;

/// [SerializeField]
/// @brief Field lavaActivationProjectileHitNotifier, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  ___lavaActivationProjectileHitNotifier;

/// [SerializeField]
/// @brief Field volcanoEffects, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::VolcanoEffects>>  ___volcanoEffects;

/// [SerializeField]
/// @brief Field lavaZoneShaderSettings, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  ___lavaZoneShaderSettings;

/// [SerializeField]
/// @brief Field baseZoneShaderSettings, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  ___baseZoneShaderSettings;

/// [DebugReadout]
/// @brief Field reliableState, offset: 0xc8, size: 0x18, def value: None
 ::GlobalNamespace::InfectionLavaController_LavaSyncData  ___reliableState;

/// @brief Field lavaActivationVotePlayerIds, offset: 0xe0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___lavaActivationVotePlayerIds;

/// @brief Field lavaActivationVoteCount, offset: 0xe8, size: 0x4, def value: None
 int32_t  ___lavaActivationVoteCount;

/// @brief Field localLagLavaProgressOffset, offset: 0xec, size: 0x4, def value: None
 float_t  ___localLagLavaProgressOffset;

/// [DebugReadout]
/// @brief Field lavaProgressLinear, offset: 0xf0, size: 0x4, def value: None
 float_t  ___lavaProgressLinear;

/// [DebugReadout]
/// @brief Field lavaProgressSmooth, offset: 0xf4, size: 0x4, def value: None
 float_t  ___lavaProgressSmooth;

/// @brief Field lastTagSelfRPCTime, offset: 0xf8, size: 0x8, def value: None
 double_t  ___lastTagSelfRPCTime;

/// @brief Field currentTime, offset: 0x100, size: 0x8, def value: None
 double_t  ___currentTime;

/// @brief Field prevTime, offset: 0x108, size: 0x8, def value: None
 double_t  ___prevTime;

/// @brief Field activationProgessSmooth, offset: 0x110, size: 0x4, def value: None
 float_t  ___activationProgessSmooth;

/// @brief Field lavaScale, offset: 0x114, size: 0x4, def value: None
 float_t  ___lavaScale;

/// @brief Field lavaActivationMPB, offset: 0x118, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___lavaActivationMPB;

/// @brief Field lastSyncSendTime, offset: 0x120, size: 0x8, def value: None
 double_t  ___lastSyncSendTime;

/// @brief Field localPlayerInZone, offset: 0x128, size: 0x1, def value: None
 bool  ___localPlayerInZone;

/// [Header("Lava Residue")]
/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field residueIntensity, offset: 0x12c, size: 0x4, def value: None
 float_t  ___residueIntensity;

/// [Tooltip("How fast the residue plane trails behind the lava when draining (world units/sec).")]
/// [SerializeField]
/// @brief Field residueDrainSpeed, offset: 0x130, size: 0x4, def value: None
 float_t  ___residueDrainSpeed;

/// [Tooltip("UV scale for the residue texture in world space.")]
/// [SerializeField]
/// @brief Field residueUVScale, offset: 0x134, size: 0x4, def value: None
 float_t  ___residueUVScale;

/// [SerializeField]
/// @brief Field residueOffset, offset: 0x138, size: 0x4, def value: None
 float_t  ___residueOffset;

/// @brief Field residuePlaneY, offset: 0x13c, size: 0x4, def value: None
 float_t  ___residuePlaneY;

/// [CompilerGenerated]
/// @brief Field <ITickSystemPost.PostTickRunning>k__BackingField, offset: 0x140, size: 0x1, def value: None
 bool  ____ITickSystemPost_PostTickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___zone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lavaMeshMinScale) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lavaMeshMaxScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___eruptTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___riseTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___fullTime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___drainTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___latencyBuffer) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lagResolutionLavaProgressPerSecond) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lavaProgressAnimationCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___activationVotePercentageDefaultQueue) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___activationVotePercentageCompetitiveQueue) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lavaActivationGradient) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lavaActivationRockProgressVsPlayerCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lavaActivationDrainRateVsPlayerCount) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lavaActivationVisualMovementProgressPerSecond) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___debugLavaActivationVotes) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lavaMeshTransform) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lavaSurfacePlaneTransform) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lavaVolume) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lavaActivationRenderer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lavaActivationStartPos) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lavaActivationEndPos) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lavaActivationProjectileHitNotifier) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___volcanoEffects) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lavaZoneShaderSettings) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___baseZoneShaderSettings) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___reliableState) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lavaActivationVotePlayerIds) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lavaActivationVoteCount) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___localLagLavaProgressOffset) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lavaProgressLinear) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lavaProgressSmooth) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lastTagSelfRPCTime) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___currentTime) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___prevTime) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___activationProgessSmooth) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lavaScale) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lavaActivationMPB) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___lastSyncSendTime) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___localPlayerInZone) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___residueIntensity) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___residueDrainSpeed) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___residueUVScale) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___residueOffset) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ___residuePlaneY) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController, ____ITickSystemPost_PostTickRunning_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InfectionLavaController) == 0x148, "Size mismatch!");

} // namespace end def GlobalNamespace
