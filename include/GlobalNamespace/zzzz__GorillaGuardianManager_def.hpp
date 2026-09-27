#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaGuardianManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaGameManager_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaGuardianManager)
namespace Fusion {
class NetworkObject;
}
namespace GlobalNamespace {
class GameModeSerializer;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class Tappable;
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
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaGuardianManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaGuardianManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaGuardianManager*, "", "GorillaGuardianManager");
// Dependencies GorillaGameManager
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaGuardianManager
class CORDL_TYPE GorillaGuardianManager : public ::GlobalNamespace::GorillaGameManager {
public:
// Declarations
/// @brief Field <isPlaying>k__BackingField, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get__isPlaying_k__BackingField, put=__cordl_internal_set__isPlaying_k__BackingField)) bool  _isPlaying_k__BackingField;

/// @brief Field hapticDuration, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticDuration, put=__cordl_internal_set_hapticDuration)) float_t  hapticDuration;

/// @brief Field hapticStrength, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticStrength, put=__cordl_internal_set_hapticStrength)) float_t  hapticStrength;

 __declspec(property(get=get_isPlaying, put=set_isPlaying)) bool  isPlaying;

/// @brief Field launchGroundHandCheckDist, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_launchGroundHandCheckDist, put=__cordl_internal_set_launchGroundHandCheckDist)) float_t  launchGroundHandCheckDist;

/// @brief Field launchGroundHeadCheckDist, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_launchGroundHeadCheckDist, put=__cordl_internal_set_launchGroundHeadCheckDist)) float_t  launchGroundHeadCheckDist;

/// @brief Field launchGroundKickup, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_launchGroundKickup, put=__cordl_internal_set_launchGroundKickup)) float_t  launchGroundKickup;

/// @brief Field launchMinimumStrength, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_launchMinimumStrength, put=__cordl_internal_set_launchMinimumStrength)) float_t  launchMinimumStrength;

/// @brief Field launchStrengthMultiplier, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_launchStrengthMultiplier, put=__cordl_internal_set_launchStrengthMultiplier)) float_t  launchStrengthMultiplier;

/// @brief Field maxLaunchVelocity, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxLaunchVelocity, put=__cordl_internal_set_maxLaunchVelocity)) float_t  maxLaunchVelocity;

/// @brief Field requiredGuardianDistance, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_requiredGuardianDistance, put=__cordl_internal_set_requiredGuardianDistance)) float_t  requiredGuardianDistance;

/// @brief Field slamImpactPrefab, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_slamImpactPrefab, put=__cordl_internal_set_slamImpactPrefab)) ::UnityW<::UnityEngine::GameObject>  slamImpactPrefab;

/// @brief Field slamMaxStrengthMultiplier, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_slamMaxStrengthMultiplier, put=__cordl_internal_set_slamMaxStrengthMultiplier)) float_t  slamMaxStrengthMultiplier;

/// @brief Field slamMaxTapSpeed, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_slamMaxTapSpeed, put=__cordl_internal_set_slamMaxTapSpeed)) float_t  slamMaxTapSpeed;

/// @brief Field slamMinStrengthMultiplier, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_slamMinStrengthMultiplier, put=__cordl_internal_set_slamMinStrengthMultiplier)) float_t  slamMinStrengthMultiplier;

/// @brief Field slamRadius, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_slamRadius, put=__cordl_internal_set_slamRadius)) float_t  slamRadius;

/// @brief Field slamTriggerAngle, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_slamTriggerAngle, put=__cordl_internal_set_slamTriggerAngle)) float_t  slamTriggerAngle;

/// @brief Field slamTriggerTapSpeed, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_slamTriggerTapSpeed, put=__cordl_internal_set_slamTriggerTapSpeed)) float_t  slamTriggerTapSpeed;

/// @brief Field slapBackAlignmentThreshold, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_slapBackAlignmentThreshold, put=__cordl_internal_set_slapBackAlignmentThreshold)) float_t  slapBackAlignmentThreshold;

/// @brief Field slapFrontAlignmentThreshold, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_slapFrontAlignmentThreshold, put=__cordl_internal_set_slapFrontAlignmentThreshold)) float_t  slapFrontAlignmentThreshold;

/// @brief Field slapImpactPrefab, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_slapImpactPrefab, put=__cordl_internal_set_slapImpactPrefab)) ::UnityW<::UnityEngine::GameObject>  slapImpactPrefab;

/// @brief Method AddFusionDataBehaviour, addr 0x59088f8, size 0x4, virtual true, abstract: false, final false
inline void AddFusionDataBehaviour(::Fusion::NetworkObject*  behaviour) ;

/// @brief Method CanJoinFrienship, addr 0x5908ad8, size 0x24, virtual true, abstract: false, final false
inline bool CanJoinFrienship(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method CheckLaunchRetriggerDelay, addr 0x590a2dc, size 0x58, virtual false, abstract: false, final false
inline bool CheckLaunchRetriggerDelay(::GlobalNamespace::VRRig*  launchedRig) ;

/// @brief Method CheckSlap, addr 0x5909990, size 0x5cc, virtual false, abstract: false, final false
inline bool CheckSlap(::GlobalNamespace::NetPlayer*  slapper, ::GlobalNamespace::NetPlayer*  target, bool  leftHand, ::by_ref<::UnityEngine::Vector3>  velocity) ;

/// @brief Method EjectGuardian, addr 0x5908b0c, size 0x170, virtual false, abstract: false, final false
inline void EjectGuardian(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method GameModeName, addr 0x590af64, size 0x40, virtual true, abstract: false, final false
inline ::StringW GameModeName() ;

/// @brief Method GameModeNameRoomLabel, addr 0x590afa4, size 0xd8, virtual true, abstract: false, final false
inline ::StringW GameModeNameRoomLabel() ;

/// @brief Method GameType, addr 0x590af5c, size 0x8, virtual true, abstract: false, final false
inline ::GorillaGameModes::GameModeType GameType() ;

/// @brief Method HandleHandTap, addr 0x590a334, size 0xb38, virtual true, abstract: false, final false
inline void HandleHandTap(::GlobalNamespace::NetPlayer*  tappingPlayer, ::GlobalNamespace::Tappable*  hitTappable, bool  leftHand, ::UnityEngine::Vector3  handVelocity, ::UnityEngine::Vector3  tapSurfaceNormal) ;

/// @brief Method IsHoldingPlayer, addr 0x5908aa8, size 0x28, virtual false, abstract: false, final false
inline bool IsHoldingPlayer() ;

/// @brief Method IsHoldingPlayer, addr 0x590a044, size 0xf8, virtual false, abstract: false, final false
inline bool IsHoldingPlayer(bool  leftHand) ;

/// @brief Method IsPlayerGuardian, addr 0x5908938, size 0x170, virtual false, abstract: false, final false
inline bool IsPlayerGuardian(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method IsRigBeingHeld, addr 0x590a13c, size 0x1a0, virtual false, abstract: false, final false
inline bool IsRigBeingHeld(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method LaunchPlayer, addr 0x59091a8, size 0x2d8, virtual false, abstract: false, final false
inline void LaunchPlayer(::GlobalNamespace::NetPlayer*  launcher, ::UnityEngine::Vector3  velocity) ;

/// @brief Method LocalCanTag, addr 0x5908908, size 0x30, virtual true, abstract: false, final false
inline bool LocalCanTag(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method LocalIsTagged, addr 0x5908ad0, size 0x8, virtual true, abstract: false, final false
inline bool LocalIsTagged(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method LocalPlaySlamEffect, addr 0x590ae6c, size 0xe8, virtual false, abstract: false, final false
inline void LocalPlaySlamEffect(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  direction) ;

/// @brief Method LocalPlaySlapEffect, addr 0x5909f5c, size 0xe8, virtual false, abstract: false, final false
inline void LocalPlaySlapEffect(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  direction) ;

/// @brief Method LocalTag, addr 0x5909480, size 0x510, virtual true, abstract: false, final false
inline void LocalTag(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer, bool  bodyHit, bool  leftHand) ;

/// @brief Method NetworkLinkSetup, addr 0x5908878, size 0x80, virtual true, abstract: false, final false
inline void NetworkLinkSetup(::GlobalNamespace::GameModeSerializer*  netSerializer) ;

static inline ::GlobalNamespace::GorillaGuardianManager* New_ctor() ;

/// @brief Method OnSerializeRead, addr 0x59088fc, size 0x4, virtual true, abstract: false, final false
inline void OnSerializeRead(::System::Object*  newData) ;

/// @brief Method OnSerializeRead, addr 0x590af58, size 0x4, virtual true, abstract: false, final false
inline void OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnSerializeWrite, addr 0x5908900, size 0x8, virtual true, abstract: false, final false
inline ::System::Object* OnSerializeWrite() ;

/// @brief Method OnSerializeWrite, addr 0x590af54, size 0x4, virtual true, abstract: false, final false
inline void OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method PlaySlamEffect, addr 0x590b080, size 0x4, virtual false, abstract: false, final false
inline void PlaySlamEffect(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  direction) ;

/// @brief Method PlaySlapEffect, addr 0x590b07c, size 0x4, virtual false, abstract: false, final false
inline void PlaySlapEffect(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  direction) ;

/// @brief Method RequestEjectGuardian, addr 0x5908280, size 0x164, virtual false, abstract: false, final false
inline void RequestEjectGuardian(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method ResetGame, addr 0x5908874, size 0x4, virtual true, abstract: false, final false
inline void ResetGame() ;

/// @brief Method StartPlaying, addr 0x59083fc, size 0x1a0, virtual true, abstract: false, final false
inline void StartPlaying() ;

/// @brief Method StopPlaying, addr 0x5908674, size 0x19c, virtual true, abstract: false, final false
inline void StopPlaying() ;

constexpr bool const& __cordl_internal_get__isPlaying_k__BackingField() const;

constexpr bool& __cordl_internal_get__isPlaying_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_hapticDuration() const;

constexpr float_t& __cordl_internal_get_hapticDuration() ;

constexpr float_t const& __cordl_internal_get_hapticStrength() const;

constexpr float_t& __cordl_internal_get_hapticStrength() ;

constexpr float_t const& __cordl_internal_get_launchGroundHandCheckDist() const;

constexpr float_t& __cordl_internal_get_launchGroundHandCheckDist() ;

constexpr float_t const& __cordl_internal_get_launchGroundHeadCheckDist() const;

constexpr float_t& __cordl_internal_get_launchGroundHeadCheckDist() ;

constexpr float_t const& __cordl_internal_get_launchGroundKickup() const;

constexpr float_t& __cordl_internal_get_launchGroundKickup() ;

constexpr float_t const& __cordl_internal_get_launchMinimumStrength() const;

constexpr float_t& __cordl_internal_get_launchMinimumStrength() ;

constexpr float_t const& __cordl_internal_get_launchStrengthMultiplier() const;

constexpr float_t& __cordl_internal_get_launchStrengthMultiplier() ;

constexpr float_t const& __cordl_internal_get_maxLaunchVelocity() const;

constexpr float_t& __cordl_internal_get_maxLaunchVelocity() ;

constexpr float_t const& __cordl_internal_get_requiredGuardianDistance() const;

constexpr float_t& __cordl_internal_get_requiredGuardianDistance() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_slamImpactPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_slamImpactPrefab() ;

constexpr float_t const& __cordl_internal_get_slamMaxStrengthMultiplier() const;

constexpr float_t& __cordl_internal_get_slamMaxStrengthMultiplier() ;

constexpr float_t const& __cordl_internal_get_slamMaxTapSpeed() const;

constexpr float_t& __cordl_internal_get_slamMaxTapSpeed() ;

constexpr float_t const& __cordl_internal_get_slamMinStrengthMultiplier() const;

constexpr float_t& __cordl_internal_get_slamMinStrengthMultiplier() ;

constexpr float_t const& __cordl_internal_get_slamRadius() const;

constexpr float_t& __cordl_internal_get_slamRadius() ;

constexpr float_t const& __cordl_internal_get_slamTriggerAngle() const;

constexpr float_t& __cordl_internal_get_slamTriggerAngle() ;

constexpr float_t const& __cordl_internal_get_slamTriggerTapSpeed() const;

constexpr float_t& __cordl_internal_get_slamTriggerTapSpeed() ;

constexpr float_t const& __cordl_internal_get_slapBackAlignmentThreshold() const;

constexpr float_t& __cordl_internal_get_slapBackAlignmentThreshold() ;

constexpr float_t const& __cordl_internal_get_slapFrontAlignmentThreshold() const;

constexpr float_t& __cordl_internal_get_slapFrontAlignmentThreshold() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_slapImpactPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_slapImpactPrefab() ;

constexpr void __cordl_internal_set__isPlaying_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_hapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_hapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_launchGroundHandCheckDist(float_t  value) ;

constexpr void __cordl_internal_set_launchGroundHeadCheckDist(float_t  value) ;

constexpr void __cordl_internal_set_launchGroundKickup(float_t  value) ;

constexpr void __cordl_internal_set_launchMinimumStrength(float_t  value) ;

constexpr void __cordl_internal_set_launchStrengthMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_maxLaunchVelocity(float_t  value) ;

constexpr void __cordl_internal_set_requiredGuardianDistance(float_t  value) ;

constexpr void __cordl_internal_set_slamImpactPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_slamMaxStrengthMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_slamMaxTapSpeed(float_t  value) ;

constexpr void __cordl_internal_set_slamMinStrengthMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_slamRadius(float_t  value) ;

constexpr void __cordl_internal_set_slamTriggerAngle(float_t  value) ;

constexpr void __cordl_internal_set_slamTriggerTapSpeed(float_t  value) ;

constexpr void __cordl_internal_set_slapBackAlignmentThreshold(float_t  value) ;

constexpr void __cordl_internal_set_slapFrontAlignmentThreshold(float_t  value) ;

constexpr void __cordl_internal_set_slapImpactPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x590b084, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_isPlaying, addr 0x59083ec, size 0x8, virtual false, abstract: false, final false
inline bool get_isPlaying() ;

/// [CompilerGenerated]
/// @brief Method set_isPlaying, addr 0x59083f4, size 0x8, virtual false, abstract: false, final false
inline void set_isPlaying(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaGuardianManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaGuardianManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaGuardianManager(GorillaGuardianManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaGuardianManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaGuardianManager(GorillaGuardianManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2166};

/// [Space]
/// [SerializeField]
/// @brief Field slapFrontAlignmentThreshold, offset: 0x90, size: 0x4, def value: None
 float_t  ___slapFrontAlignmentThreshold;

/// [SerializeField]
/// @brief Field slapBackAlignmentThreshold, offset: 0x94, size: 0x4, def value: None
 float_t  ___slapBackAlignmentThreshold;

/// [SerializeField]
/// @brief Field launchMinimumStrength, offset: 0x98, size: 0x4, def value: None
 float_t  ___launchMinimumStrength;

/// [SerializeField]
/// @brief Field launchStrengthMultiplier, offset: 0x9c, size: 0x4, def value: None
 float_t  ___launchStrengthMultiplier;

/// [SerializeField]
/// @brief Field launchGroundHeadCheckDist, offset: 0xa0, size: 0x4, def value: None
 float_t  ___launchGroundHeadCheckDist;

/// [SerializeField]
/// @brief Field launchGroundHandCheckDist, offset: 0xa4, size: 0x4, def value: None
 float_t  ___launchGroundHandCheckDist;

/// [SerializeField]
/// @brief Field launchGroundKickup, offset: 0xa8, size: 0x4, def value: None
 float_t  ___launchGroundKickup;

/// [Space]
/// [SerializeField]
/// @brief Field slamTriggerTapSpeed, offset: 0xac, size: 0x4, def value: None
 float_t  ___slamTriggerTapSpeed;

/// [SerializeField]
/// @brief Field slamMaxTapSpeed, offset: 0xb0, size: 0x4, def value: None
 float_t  ___slamMaxTapSpeed;

/// [SerializeField]
/// @brief Field slamTriggerAngle, offset: 0xb4, size: 0x4, def value: None
 float_t  ___slamTriggerAngle;

/// [SerializeField]
/// @brief Field slamRadius, offset: 0xb8, size: 0x4, def value: None
 float_t  ___slamRadius;

/// [SerializeField]
/// @brief Field slamMinStrengthMultiplier, offset: 0xbc, size: 0x4, def value: None
 float_t  ___slamMinStrengthMultiplier;

/// [SerializeField]
/// @brief Field slamMaxStrengthMultiplier, offset: 0xc0, size: 0x4, def value: None
 float_t  ___slamMaxStrengthMultiplier;

/// [Space]
/// [SerializeField]
/// @brief Field slapImpactPrefab, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___slapImpactPrefab;

/// [SerializeField]
/// @brief Field slamImpactPrefab, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___slamImpactPrefab;

/// [Space]
/// [SerializeField]
/// @brief Field hapticStrength, offset: 0xd8, size: 0x4, def value: None
 float_t  ___hapticStrength;

/// [SerializeField]
/// @brief Field hapticDuration, offset: 0xdc, size: 0x4, def value: None
 float_t  ___hapticDuration;

/// [CompilerGenerated]
/// @brief Field <isPlaying>k__BackingField, offset: 0xe0, size: 0x1, def value: None
 bool  ____isPlaying_k__BackingField;

/// @brief Field requiredGuardianDistance, offset: 0xe4, size: 0x4, def value: None
 float_t  ___requiredGuardianDistance;

/// @brief Field maxLaunchVelocity, offset: 0xe8, size: 0x4, def value: None
 float_t  ___maxLaunchVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaGuardianManager, ___slapFrontAlignmentThreshold) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianManager, ___slapBackAlignmentThreshold) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianManager, ___launchMinimumStrength) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianManager, ___launchStrengthMultiplier) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianManager, ___launchGroundHeadCheckDist) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianManager, ___launchGroundHandCheckDist) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianManager, ___launchGroundKickup) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianManager, ___slamTriggerTapSpeed) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianManager, ___slamMaxTapSpeed) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianManager, ___slamTriggerAngle) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianManager, ___slamRadius) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianManager, ___slamMinStrengthMultiplier) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianManager, ___slamMaxStrengthMultiplier) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianManager, ___slapImpactPrefab) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianManager, ___slamImpactPrefab) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianManager, ___hapticStrength) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianManager, ___hapticDuration) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianManager, ____isPlaying_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianManager, ___requiredGuardianDistance) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianManager, ___maxLaunchVelocity) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaGuardianManager) == 0xf0, "Size mismatch!");

} // namespace end def GlobalNamespace
