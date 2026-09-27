#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetStilt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIGadget_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
#include "GlobalNamespace/zzzz__SnapJointType_def.hpp"
#include "GorillaLocomotion/zzzz__StiltID_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetStilt)
namespace GlobalNamespace {
class GameButtonActivatable;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct SIUpgradeSet;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetStilt;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetStilt*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetStilt*, "", "SIGadgetStilt");
// Dependencies GorillaLocomotion.StiltID, SIGadget, SIUpgradeType, SnapJointType, UnityEngine.GameObject, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetStilt
class CORDL_TYPE SIGadgetStilt : public ::GlobalNamespace::SIGadget {
public:
// Declarations
 __declspec(property(get=get_CanStun, put=set_CanStun)) bool  CanStun;

 __declspec(property(get=get_CanTag, put=set_CanTag)) bool  CanTag;

/// @brief Field IsSpinning, offset 0x178, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsSpinning, put=__cordl_internal_set_IsSpinning)) bool  IsSpinning;

 __declspec(property(get=get_StickToAdjustLength, put=set_StickToAdjustLength)) bool  StickToAdjustLength;

 __declspec(property(get=get_TriggerToExtend, put=set_TriggerToExtend)) bool  TriggerToExtend;

/// @brief Field <CanStun>k__BackingField, offset 0x150, size 0x1 
 __declspec(property(get=__cordl_internal_get__CanStun_k__BackingField, put=__cordl_internal_set__CanStun_k__BackingField)) bool  _CanStun_k__BackingField;

/// @brief Field <CanTag>k__BackingField, offset 0x14f, size 0x1 
 __declspec(property(get=__cordl_internal_get__CanTag_k__BackingField, put=__cordl_internal_set__CanTag_k__BackingField)) bool  _CanTag_k__BackingField;

/// @brief Field <StickToAdjustLength>k__BackingField, offset 0x14e, size 0x1 
 __declspec(property(get=__cordl_internal_get__StickToAdjustLength_k__BackingField, put=__cordl_internal_set__StickToAdjustLength_k__BackingField)) bool  _StickToAdjustLength_k__BackingField;

/// @brief Field <TriggerToExtend>k__BackingField, offset 0x14c, size 0x1 
 __declspec(property(get=__cordl_internal_get__TriggerToExtend_k__BackingField, put=__cordl_internal_set__TriggerToExtend_k__BackingField)) bool  _TriggerToExtend_k__BackingField;

/// @brief Field <hasMotor>k__BackingField, offset 0x14d, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasMotor_k__BackingField, put=__cordl_internal_set__hasMotor_k__BackingField)) bool  _hasMotor_k__BackingField;

/// @brief Field adjustmentSendRate, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get_adjustmentSendRate, put=__cordl_internal_set_adjustmentSendRate)) float_t  adjustmentSendRate;

/// @brief Field attachedNetPlayer, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachedNetPlayer, put=__cordl_internal_set_attachedNetPlayer)) ::GlobalNamespace::NetPlayer*  attachedNetPlayer;

/// @brief Field attachedPlayerActorNr, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get_attachedPlayerActorNr, put=__cordl_internal_set_attachedPlayerActorNr)) int32_t  attachedPlayerActorNr;

/// @brief Field attachedVRRig, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachedVRRig, put=__cordl_internal_set_attachedVRRig)) ::UnityW<::GlobalNamespace::VRRig>  attachedVRRig;

/// @brief Field buttonActivatable, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonActivatable, put=__cordl_internal_set_buttonActivatable)) ::UnityW<::GlobalNamespace::GameButtonActivatable>  buttonActivatable;

/// @brief Field currentExtendedLength, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentExtendedLength, put=__cordl_internal_set_currentExtendedLength)) float_t  currentExtendedLength;

/// @brief Field currentLength, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentLength, put=__cordl_internal_set_currentLength)) float_t  currentLength;

/// @brief Field currentMotorAngle, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentMotorAngle, put=__cordl_internal_set_currentMotorAngle)) float_t  currentMotorAngle;

/// @brief Field currentStiltID, offset 0x17c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentStiltID, put=__cordl_internal_set_currentStiltID)) ::GorillaLocomotion::StiltID  currentStiltID;

/// @brief Field currentStiltIDB, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentStiltIDB, put=__cordl_internal_set_currentStiltIDB)) ::GorillaLocomotion::StiltID  currentStiltIDB;

/// @brief Field currentStiltIDC, offset 0x184, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentStiltIDC, put=__cordl_internal_set_currentStiltIDC)) ::GorillaLocomotion::StiltID  currentStiltIDC;

/// @brief Field defaultMat, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultMat, put=__cordl_internal_set_defaultMat)) ::UnityW<::UnityEngine::Material>  defaultMat;

/// @brief Field extendSoundBank, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_extendSoundBank, put=__cordl_internal_set_extendSoundBank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  extendSoundBank;

/// @brief Field extendSpeed, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get_extendSpeed, put=__cordl_internal_set_extendSpeed)) float_t  extendSpeed;

/// @brief Field extendSpeedNormal, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_extendSpeedNormal, put=__cordl_internal_set_extendSpeedNormal)) float_t  extendSpeedNormal;

/// @brief Field extendSpeedUpgraded, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_extendSpeedUpgraded, put=__cordl_internal_set_extendSpeedUpgraded)) float_t  extendSpeedUpgraded;

/// @brief Field hasEndB, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasEndB, put=__cordl_internal_set_hasEndB)) bool  hasEndB;

/// @brief Field hasEndC, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasEndC, put=__cordl_internal_set_hasEndC)) bool  hasEndC;

 __declspec(property(get=get_hasMotor, put=set_hasMotor)) bool  hasMotor;

/// @brief Field isTagged, offset 0x1a0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isTagged, put=__cordl_internal_set_isTagged)) bool  isTagged;

/// @brief Field lastSentLength, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSentLength, put=__cordl_internal_set_lastSentLength)) float_t  lastSentLength;

/// @brief Field lengthChangeSpeed, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lengthChangeSpeed, put=__cordl_internal_set_lengthChangeSpeed)) float_t  lengthChangeSpeed;

/// @brief Field matDest, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_matDest, put=__cordl_internal_set_matDest)) ::UnityW<::UnityEngine::MeshRenderer>  matDest;

/// @brief Field maxArmLength, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxArmLength, put=__cordl_internal_set_maxArmLength)) float_t  maxArmLength;

/// @brief Field maxLength, offset 0x15c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxLength, put=__cordl_internal_set_maxLength)) float_t  maxLength;

/// @brief Field maxLengthNormal, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxLengthNormal, put=__cordl_internal_set_maxLengthNormal)) float_t  maxLengthNormal;

/// @brief Field maxLengthUpgraded, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxLengthUpgraded, put=__cordl_internal_set_maxLengthUpgraded)) float_t  maxLengthUpgraded;

/// @brief Field midpoint, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_midpoint, put=__cordl_internal_set_midpoint)) ::UnityW<::UnityEngine::GameObject>  midpoint;

/// @brief Field motorAudio, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_motorAudio, put=__cordl_internal_set_motorAudio)) ::UnityW<::UnityEngine::AudioSource>  motorAudio;

/// @brief Field motorTransform, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_motorTransform, put=__cordl_internal_set_motorTransform)) ::UnityW<::UnityEngine::Transform>  motorTransform;

/// @brief Field nextAdjustmentSendTime, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextAdjustmentSendTime, put=__cordl_internal_set_nextAdjustmentSendTime)) float_t  nextAdjustmentSendTime;

/// @brief Field offsetDir, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get_offsetDir, put=__cordl_internal_set_offsetDir)) ::UnityEngine::Vector3  offsetDir;

/// @brief Field restrictedUpgrades, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_restrictedUpgrades, put=__cordl_internal_set_restrictedUpgrades)) ::ArrayW<::GlobalNamespace::SIUpgradeType>  restrictedUpgrades;

/// @brief Field retractSoundBank, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_retractSoundBank, put=__cordl_internal_set_retractSoundBank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  retractSoundBank;

/// @brief Field retractSpeed, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get_retractSpeed, put=__cordl_internal_set_retractSpeed)) float_t  retractSpeed;

/// @brief Field retractSpeedNormal, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_retractSpeedNormal, put=__cordl_internal_set_retractSpeedNormal)) float_t  retractSpeedNormal;

/// @brief Field retractSpeedUpgraded, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_retractSpeedUpgraded, put=__cordl_internal_set_retractSpeedUpgraded)) float_t  retractSpeedUpgraded;

/// @brief Field retractedLength, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_retractedLength, put=__cordl_internal_set_retractedLength)) float_t  retractedLength;

/// @brief Field rotateSpeedFactor, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotateSpeedFactor, put=__cordl_internal_set_rotateSpeedFactor)) float_t  rotateSpeedFactor;

/// @brief Field skinnedMatDest, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_skinnedMatDest, put=__cordl_internal_set_skinnedMatDest)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  skinnedMatDest;

/// @brief Field stiltEnd, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_stiltEnd, put=__cordl_internal_set_stiltEnd)) ::UnityW<::UnityEngine::Transform>  stiltEnd;

/// @brief Field stiltEndB, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_stiltEndB, put=__cordl_internal_set_stiltEndB)) ::UnityW<::UnityEngine::Transform>  stiltEndB;

/// @brief Field stiltEndC, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_stiltEndC, put=__cordl_internal_set_stiltEndC)) ::UnityW<::UnityEngine::Transform>  stiltEndC;

/// @brief Field tagActivatedMat, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagActivatedMat, put=__cordl_internal_set_tagActivatedMat)) ::UnityW<::UnityEngine::Material>  tagActivatedMat;

/// @brief Field tagActivatedObjects, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagActivatedObjects, put=__cordl_internal_set_tagActivatedObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  tagActivatedObjects;

/// @brief Field targetLength, offset 0x154, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetLength, put=__cordl_internal_set_targetLength)) float_t  targetLength;

/// @brief Field tip, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_tip, put=__cordl_internal_set_tip)) ::UnityW<::UnityEngine::GameObject>  tip;

/// @brief Field tipDefaultOffset, offset 0x94, size 0xc 
 __declspec(property(get=__cordl_internal_get_tipDefaultOffset, put=__cordl_internal_set_tipDefaultOffset)) ::UnityEngine::Vector3  tipDefaultOffset;

/// @brief Field wasSnappedByLocalJoint, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get_wasSnappedByLocalJoint, put=__cordl_internal_set_wasSnappedByLocalJoint)) ::GlobalNamespace::SnapJointType  wasSnappedByLocalJoint;

/// @brief Method ApplyCurrentLength, addr 0x58e4de8, size 0xb4, virtual false, abstract: false, final false
inline void ApplyCurrentLength() ;

/// @brief Method ApplyUpgradeNodes, addr 0x58e4c4c, size 0x19c, virtual true, abstract: false, final false
inline void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades) ;

/// @brief Method Awake, addr 0x58e2be8, size 0x364, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckInput, addr 0x58e4528, size 0x1c, virtual false, abstract: false, final false
inline bool CheckInput() ;

/// @brief Method CheckPlaySounds, addr 0x58e4678, size 0x104, virtual false, abstract: false, final false
inline void CheckPlaySounds(float_t  oldLength, float_t  newLength) ;

/// @brief Method DisableCurrentStilt, addr 0x58e2f4c, size 0x18c, virtual false, abstract: false, final false
inline void DisableCurrentStilt() ;

/// @brief Method FilterUpgradeNodes, addr 0x58e4bb0, size 0x9c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SIUpgradeSet FilterUpgradeNodes(::GlobalNamespace::SIUpgradeSet  upgrades) ;

/// @brief Method HandleStartInteraction, addr 0x58e34fc, size 0x2bc, virtual false, abstract: false, final false
inline void HandleStartInteraction() ;

/// @brief Method HandleStopInteraction, addr 0x58e38b4, size 0x170, virtual false, abstract: false, final false
inline void HandleStopInteraction() ;

/// @brief Method HandleVRRigMaterialIndexChanged, addr 0x58e4f00, size 0x1f4, virtual false, abstract: false, final false
inline void HandleVRRigMaterialIndexChanged(int32_t  oldMatIndex, int32_t  newMatIndex) ;

static inline ::GlobalNamespace::SIGadgetStilt* New_ctor() ;

/// @brief Method OnDestroy, addr 0x58e407c, size 0x174, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEntityStateChanged, addr 0x58e4e9c, size 0x64, virtual false, abstract: false, final false
inline void OnEntityStateChanged(int64_t  oldState, int64_t  newState) ;

/// @brief Method OnGrabbed, addr 0x58e30d8, size 0x424, virtual false, abstract: false, final false
inline void OnGrabbed() ;

/// @brief Method OnReleased, addr 0x58e37b8, size 0xfc, virtual false, abstract: false, final false
inline void OnReleased() ;

/// @brief Method OnSnapped, addr 0x58e3c04, size 0x444, virtual false, abstract: false, final false
inline void OnSnapped() ;

/// @brief Method OnUnsnapped, addr 0x58e4048, size 0x34, virtual false, abstract: false, final false
inline void OnUnsnapped() ;

/// @brief Method OnUpdateAuthority, addr 0x58e41f0, size 0x338, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x58e4b28, size 0x88, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method PackStateForNetwork, addr 0x58e3a24, size 0x1e0, virtual false, abstract: false, final false
inline int64_t PackStateForNetwork() ;

/// @brief Method SpinMotor, addr 0x58e4544, size 0x134, virtual false, abstract: false, final false
inline void SpinMotor(float_t  dt) ;

/// @brief Method UnpackStateFromNetwork, addr 0x58e4a50, size 0xd8, virtual false, abstract: false, final false
inline void UnpackStateFromNetwork(int64_t  state) ;

/// @brief Method UpdateEndPoints, addr 0x58e477c, size 0x2d4, virtual false, abstract: false, final false
inline void UpdateEndPoints(bool  force) ;

constexpr bool const& __cordl_internal_get_IsSpinning() const;

constexpr bool& __cordl_internal_get_IsSpinning() ;

constexpr bool const& __cordl_internal_get__CanStun_k__BackingField() const;

constexpr bool& __cordl_internal_get__CanStun_k__BackingField() ;

constexpr bool const& __cordl_internal_get__CanTag_k__BackingField() const;

constexpr bool& __cordl_internal_get__CanTag_k__BackingField() ;

constexpr bool const& __cordl_internal_get__StickToAdjustLength_k__BackingField() const;

constexpr bool& __cordl_internal_get__StickToAdjustLength_k__BackingField() ;

constexpr bool const& __cordl_internal_get__TriggerToExtend_k__BackingField() const;

constexpr bool& __cordl_internal_get__TriggerToExtend_k__BackingField() ;

constexpr bool const& __cordl_internal_get__hasMotor_k__BackingField() const;

constexpr bool& __cordl_internal_get__hasMotor_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_adjustmentSendRate() const;

constexpr float_t& __cordl_internal_get_adjustmentSendRate() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_attachedNetPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_attachedNetPlayer() ;

constexpr int32_t const& __cordl_internal_get_attachedPlayerActorNr() const;

constexpr int32_t& __cordl_internal_get_attachedPlayerActorNr() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_attachedVRRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_attachedVRRig() ;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable> const& __cordl_internal_get_buttonActivatable() const;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable>& __cordl_internal_get_buttonActivatable() ;

constexpr float_t const& __cordl_internal_get_currentExtendedLength() const;

constexpr float_t& __cordl_internal_get_currentExtendedLength() ;

constexpr float_t const& __cordl_internal_get_currentLength() const;

constexpr float_t& __cordl_internal_get_currentLength() ;

constexpr float_t const& __cordl_internal_get_currentMotorAngle() const;

constexpr float_t& __cordl_internal_get_currentMotorAngle() ;

constexpr ::GorillaLocomotion::StiltID const& __cordl_internal_get_currentStiltID() const;

constexpr ::GorillaLocomotion::StiltID& __cordl_internal_get_currentStiltID() ;

constexpr ::GorillaLocomotion::StiltID const& __cordl_internal_get_currentStiltIDB() const;

constexpr ::GorillaLocomotion::StiltID& __cordl_internal_get_currentStiltIDB() ;

constexpr ::GorillaLocomotion::StiltID const& __cordl_internal_get_currentStiltIDC() const;

constexpr ::GorillaLocomotion::StiltID& __cordl_internal_get_currentStiltIDC() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_defaultMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_defaultMat() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_extendSoundBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_extendSoundBank() ;

constexpr float_t const& __cordl_internal_get_extendSpeed() const;

constexpr float_t& __cordl_internal_get_extendSpeed() ;

constexpr float_t const& __cordl_internal_get_extendSpeedNormal() const;

constexpr float_t& __cordl_internal_get_extendSpeedNormal() ;

constexpr float_t const& __cordl_internal_get_extendSpeedUpgraded() const;

constexpr float_t& __cordl_internal_get_extendSpeedUpgraded() ;

constexpr bool const& __cordl_internal_get_hasEndB() const;

constexpr bool& __cordl_internal_get_hasEndB() ;

constexpr bool const& __cordl_internal_get_hasEndC() const;

constexpr bool& __cordl_internal_get_hasEndC() ;

constexpr bool const& __cordl_internal_get_isTagged() const;

constexpr bool& __cordl_internal_get_isTagged() ;

constexpr float_t const& __cordl_internal_get_lastSentLength() const;

constexpr float_t& __cordl_internal_get_lastSentLength() ;

constexpr float_t const& __cordl_internal_get_lengthChangeSpeed() const;

constexpr float_t& __cordl_internal_get_lengthChangeSpeed() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_matDest() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_matDest() ;

constexpr float_t const& __cordl_internal_get_maxArmLength() const;

constexpr float_t& __cordl_internal_get_maxArmLength() ;

constexpr float_t const& __cordl_internal_get_maxLength() const;

constexpr float_t& __cordl_internal_get_maxLength() ;

constexpr float_t const& __cordl_internal_get_maxLengthNormal() const;

constexpr float_t& __cordl_internal_get_maxLengthNormal() ;

constexpr float_t const& __cordl_internal_get_maxLengthUpgraded() const;

constexpr float_t& __cordl_internal_get_maxLengthUpgraded() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_midpoint() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_midpoint() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_motorAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_motorAudio() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_motorTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_motorTransform() ;

constexpr float_t const& __cordl_internal_get_nextAdjustmentSendTime() const;

constexpr float_t& __cordl_internal_get_nextAdjustmentSendTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offsetDir() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offsetDir() ;

constexpr ::ArrayW<::GlobalNamespace::SIUpgradeType> const& __cordl_internal_get_restrictedUpgrades() const;

constexpr ::ArrayW<::GlobalNamespace::SIUpgradeType>& __cordl_internal_get_restrictedUpgrades() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_retractSoundBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_retractSoundBank() ;

constexpr float_t const& __cordl_internal_get_retractSpeed() const;

constexpr float_t& __cordl_internal_get_retractSpeed() ;

constexpr float_t const& __cordl_internal_get_retractSpeedNormal() const;

constexpr float_t& __cordl_internal_get_retractSpeedNormal() ;

constexpr float_t const& __cordl_internal_get_retractSpeedUpgraded() const;

constexpr float_t& __cordl_internal_get_retractSpeedUpgraded() ;

constexpr float_t const& __cordl_internal_get_retractedLength() const;

constexpr float_t& __cordl_internal_get_retractedLength() ;

constexpr float_t const& __cordl_internal_get_rotateSpeedFactor() const;

constexpr float_t& __cordl_internal_get_rotateSpeedFactor() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_skinnedMatDest() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_skinnedMatDest() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_stiltEnd() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_stiltEnd() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_stiltEndB() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_stiltEndB() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_stiltEndC() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_stiltEndC() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_tagActivatedMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_tagActivatedMat() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_tagActivatedObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_tagActivatedObjects() ;

constexpr float_t const& __cordl_internal_get_targetLength() const;

constexpr float_t& __cordl_internal_get_targetLength() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_tip() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_tip() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_tipDefaultOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_tipDefaultOffset() ;

constexpr ::GlobalNamespace::SnapJointType const& __cordl_internal_get_wasSnappedByLocalJoint() const;

constexpr ::GlobalNamespace::SnapJointType& __cordl_internal_get_wasSnappedByLocalJoint() ;

constexpr void __cordl_internal_set_IsSpinning(bool  value) ;

constexpr void __cordl_internal_set__CanStun_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__CanTag_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__StickToAdjustLength_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__TriggerToExtend_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__hasMotor_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_adjustmentSendRate(float_t  value) ;

constexpr void __cordl_internal_set_attachedNetPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_attachedPlayerActorNr(int32_t  value) ;

constexpr void __cordl_internal_set_attachedVRRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_buttonActivatable(::UnityW<::GlobalNamespace::GameButtonActivatable>  value) ;

constexpr void __cordl_internal_set_currentExtendedLength(float_t  value) ;

constexpr void __cordl_internal_set_currentLength(float_t  value) ;

constexpr void __cordl_internal_set_currentMotorAngle(float_t  value) ;

constexpr void __cordl_internal_set_currentStiltID(::GorillaLocomotion::StiltID  value) ;

constexpr void __cordl_internal_set_currentStiltIDB(::GorillaLocomotion::StiltID  value) ;

constexpr void __cordl_internal_set_currentStiltIDC(::GorillaLocomotion::StiltID  value) ;

constexpr void __cordl_internal_set_defaultMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_extendSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_extendSpeed(float_t  value) ;

constexpr void __cordl_internal_set_extendSpeedNormal(float_t  value) ;

constexpr void __cordl_internal_set_extendSpeedUpgraded(float_t  value) ;

constexpr void __cordl_internal_set_hasEndB(bool  value) ;

constexpr void __cordl_internal_set_hasEndC(bool  value) ;

constexpr void __cordl_internal_set_isTagged(bool  value) ;

constexpr void __cordl_internal_set_lastSentLength(float_t  value) ;

constexpr void __cordl_internal_set_lengthChangeSpeed(float_t  value) ;

constexpr void __cordl_internal_set_matDest(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_maxArmLength(float_t  value) ;

constexpr void __cordl_internal_set_maxLength(float_t  value) ;

constexpr void __cordl_internal_set_maxLengthNormal(float_t  value) ;

constexpr void __cordl_internal_set_maxLengthUpgraded(float_t  value) ;

constexpr void __cordl_internal_set_midpoint(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_motorAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_motorTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_nextAdjustmentSendTime(float_t  value) ;

constexpr void __cordl_internal_set_offsetDir(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_restrictedUpgrades(::ArrayW<::GlobalNamespace::SIUpgradeType>  value) ;

constexpr void __cordl_internal_set_retractSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_retractSpeed(float_t  value) ;

constexpr void __cordl_internal_set_retractSpeedNormal(float_t  value) ;

constexpr void __cordl_internal_set_retractSpeedUpgraded(float_t  value) ;

constexpr void __cordl_internal_set_retractedLength(float_t  value) ;

constexpr void __cordl_internal_set_rotateSpeedFactor(float_t  value) ;

constexpr void __cordl_internal_set_skinnedMatDest(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_stiltEnd(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_stiltEndB(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_stiltEndC(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_tagActivatedMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_tagActivatedObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_targetLength(float_t  value) ;

constexpr void __cordl_internal_set_tip(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_tipDefaultOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_wasSnappedByLocalJoint(::GlobalNamespace::SnapJointType  value) ;

/// @brief Method .ctor, addr 0x58e50f4, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CanStun, addr 0x58e2bd8, size 0x8, virtual false, abstract: false, final false
inline bool get_CanStun() ;

/// [CompilerGenerated]
/// @brief Method get_CanTag, addr 0x58e2bc8, size 0x8, virtual false, abstract: false, final false
inline bool get_CanTag() ;

/// [CompilerGenerated]
/// @brief Method get_StickToAdjustLength, addr 0x58e2bb8, size 0x8, virtual false, abstract: false, final false
inline bool get_StickToAdjustLength() ;

/// [CompilerGenerated]
/// @brief Method get_TriggerToExtend, addr 0x58e2b98, size 0x8, virtual false, abstract: false, final false
inline bool get_TriggerToExtend() ;

/// [CompilerGenerated]
/// @brief Method get_hasMotor, addr 0x58e2ba8, size 0x8, virtual false, abstract: false, final false
inline bool get_hasMotor() ;

/// [CompilerGenerated]
/// @brief Method set_CanStun, addr 0x58e2be0, size 0x8, virtual false, abstract: false, final false
inline void set_CanStun(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_CanTag, addr 0x58e2bd0, size 0x8, virtual false, abstract: false, final false
inline void set_CanTag(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_StickToAdjustLength, addr 0x58e2bc0, size 0x8, virtual false, abstract: false, final false
inline void set_StickToAdjustLength(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_TriggerToExtend, addr 0x58e2ba0, size 0x8, virtual false, abstract: false, final false
inline void set_TriggerToExtend(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_hasMotor, addr 0x58e2bb0, size 0x8, virtual false, abstract: false, final false
inline void set_hasMotor(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetStilt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetStilt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetStilt(SIGadgetStilt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetStilt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetStilt(SIGadgetStilt const& ) = delete;

/// @brief Field IsSpinningBit offset 0xffffffff size 0x8
static constexpr int64_t  IsSpinningBit{static_cast<int64_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{276};

/// [SerializeField]
/// @brief Field buttonActivatable, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameButtonActivatable>  ___buttonActivatable;

/// @brief Field tip, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___tip;

/// [SerializeField]
/// @brief Field offsetDir, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offsetDir;

/// @brief Field tipDefaultOffset, offset: 0x94, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___tipDefaultOffset;

/// @brief Field midpoint, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___midpoint;

/// @brief Field stiltEnd, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___stiltEnd;

/// @brief Field hasEndB, offset: 0xb0, size: 0x1, def value: None
 bool  ___hasEndB;

/// @brief Field stiltEndB, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___stiltEndB;

/// @brief Field hasEndC, offset: 0xc0, size: 0x1, def value: None
 bool  ___hasEndC;

/// @brief Field stiltEndC, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___stiltEndC;

/// @brief Field motorTransform, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___motorTransform;

/// [SerializeField]
/// @brief Field motorAudio, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___motorAudio;

/// [SerializeField]
/// @brief Field restrictedUpgrades, offset: 0xe0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SIUpgradeType>  ___restrictedUpgrades;

/// [SerializeField]
/// @brief Field maxLengthNormal, offset: 0xe8, size: 0x4, def value: None
 float_t  ___maxLengthNormal;

/// [SerializeField]
/// @brief Field maxLengthUpgraded, offset: 0xec, size: 0x4, def value: None
 float_t  ___maxLengthUpgraded;

/// [SerializeField]
/// @brief Field retractedLength, offset: 0xf0, size: 0x4, def value: None
 float_t  ___retractedLength;

/// [SerializeField]
/// @brief Field lengthChangeSpeed, offset: 0xf4, size: 0x4, def value: None
 float_t  ___lengthChangeSpeed;

/// [SerializeField]
/// @brief Field maxArmLength, offset: 0xf8, size: 0x4, def value: None
 float_t  ___maxArmLength;

/// [SerializeField]
/// @brief Field extendSpeedNormal, offset: 0xfc, size: 0x4, def value: None
 float_t  ___extendSpeedNormal;

/// [SerializeField]
/// @brief Field extendSpeedUpgraded, offset: 0x100, size: 0x4, def value: None
 float_t  ___extendSpeedUpgraded;

/// [SerializeField]
/// @brief Field retractSpeedNormal, offset: 0x104, size: 0x4, def value: None
 float_t  ___retractSpeedNormal;

/// [SerializeField]
/// @brief Field retractSpeedUpgraded, offset: 0x108, size: 0x4, def value: None
 float_t  ___retractSpeedUpgraded;

/// [SerializeField]
/// @brief Field rotateSpeedFactor, offset: 0x10c, size: 0x4, def value: None
 float_t  ___rotateSpeedFactor;

/// [SerializeField]
/// @brief Field retractSoundBank, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___retractSoundBank;

/// [SerializeField]
/// @brief Field extendSoundBank, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___extendSoundBank;

/// [SerializeField]
/// @brief Field defaultMat, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___defaultMat;

/// [SerializeField]
/// @brief Field tagActivatedMat, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___tagActivatedMat;

/// [SerializeField]
/// @brief Field tagActivatedObjects, offset: 0x130, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___tagActivatedObjects;

/// [SerializeField]
/// @brief Field matDest, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___matDest;

/// [SerializeField]
/// @brief Field skinnedMatDest, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___skinnedMatDest;

/// @brief Field currentExtendedLength, offset: 0x148, size: 0x4, def value: None
 float_t  ___currentExtendedLength;

/// [CompilerGenerated]
/// @brief Field <TriggerToExtend>k__BackingField, offset: 0x14c, size: 0x1, def value: None
 bool  ____TriggerToExtend_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <hasMotor>k__BackingField, offset: 0x14d, size: 0x1, def value: None
 bool  ____hasMotor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <StickToAdjustLength>k__BackingField, offset: 0x14e, size: 0x1, def value: None
 bool  ____StickToAdjustLength_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CanTag>k__BackingField, offset: 0x14f, size: 0x1, def value: None
 bool  ____CanTag_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CanStun>k__BackingField, offset: 0x150, size: 0x1, def value: None
 bool  ____CanStun_k__BackingField;

/// @brief Field targetLength, offset: 0x154, size: 0x4, def value: None
 float_t  ___targetLength;

/// @brief Field currentLength, offset: 0x158, size: 0x4, def value: None
 float_t  ___currentLength;

/// @brief Field maxLength, offset: 0x15c, size: 0x4, def value: None
 float_t  ___maxLength;

/// @brief Field extendSpeed, offset: 0x160, size: 0x4, def value: None
 float_t  ___extendSpeed;

/// @brief Field retractSpeed, offset: 0x164, size: 0x4, def value: None
 float_t  ___retractSpeed;

/// @brief Field currentMotorAngle, offset: 0x168, size: 0x4, def value: None
 float_t  ___currentMotorAngle;

/// @brief Field adjustmentSendRate, offset: 0x16c, size: 0x4, def value: None
 float_t  ___adjustmentSendRate;

/// @brief Field lastSentLength, offset: 0x170, size: 0x4, def value: None
 float_t  ___lastSentLength;

/// @brief Field nextAdjustmentSendTime, offset: 0x174, size: 0x4, def value: None
 float_t  ___nextAdjustmentSendTime;

/// @brief Field IsSpinning, offset: 0x178, size: 0x1, def value: None
 bool  ___IsSpinning;

/// @brief Field currentStiltID, offset: 0x17c, size: 0x4, def value: None
 ::GorillaLocomotion::StiltID  ___currentStiltID;

/// @brief Field currentStiltIDB, offset: 0x180, size: 0x4, def value: None
 ::GorillaLocomotion::StiltID  ___currentStiltIDB;

/// @brief Field currentStiltIDC, offset: 0x184, size: 0x4, def value: None
 ::GorillaLocomotion::StiltID  ___currentStiltIDC;

/// @brief Field wasSnappedByLocalJoint, offset: 0x188, size: 0x4, def value: None
 ::GlobalNamespace::SnapJointType  ___wasSnappedByLocalJoint;

/// @brief Field attachedPlayerActorNr, offset: 0x18c, size: 0x4, def value: None
 int32_t  ___attachedPlayerActorNr;

/// @brief Field attachedNetPlayer, offset: 0x190, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___attachedNetPlayer;

/// @brief Field attachedVRRig, offset: 0x198, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___attachedVRRig;

/// @brief Field isTagged, offset: 0x1a0, size: 0x1, def value: None
 bool  ___isTagged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___buttonActivatable) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___tip) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___offsetDir) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___tipDefaultOffset) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___midpoint) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___stiltEnd) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___hasEndB) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___stiltEndB) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___hasEndC) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___stiltEndC) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___motorTransform) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___motorAudio) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___restrictedUpgrades) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___maxLengthNormal) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___maxLengthUpgraded) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___retractedLength) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___lengthChangeSpeed) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___maxArmLength) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___extendSpeedNormal) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___extendSpeedUpgraded) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___retractSpeedNormal) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___retractSpeedUpgraded) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___rotateSpeedFactor) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___retractSoundBank) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___extendSoundBank) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___defaultMat) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___tagActivatedMat) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___tagActivatedObjects) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___matDest) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___skinnedMatDest) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___currentExtendedLength) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ____TriggerToExtend_k__BackingField) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ____hasMotor_k__BackingField) == 0x14d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ____StickToAdjustLength_k__BackingField) == 0x14e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ____CanTag_k__BackingField) == 0x14f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ____CanStun_k__BackingField) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___targetLength) == 0x154, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___currentLength) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___maxLength) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___extendSpeed) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___retractSpeed) == 0x164, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___currentMotorAngle) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___adjustmentSendRate) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___lastSentLength) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___nextAdjustmentSendTime) == 0x174, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___IsSpinning) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___currentStiltID) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___currentStiltIDB) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___currentStiltIDC) == 0x184, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___wasSnappedByLocalJoint) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___attachedPlayerActorNr) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___attachedNetPlayer) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___attachedVRRig) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetStilt, ___isTagged) == 0x1a0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetStilt) == 0x1a8, "Size mismatch!");

} // namespace end def GlobalNamespace
