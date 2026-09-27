#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetTentacleArm.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTRendererMatSlot_def.hpp"
#include "GlobalNamespace/zzzz__SIGadget_def.hpp"
#include "GlobalNamespace/zzzz__ShaderHashId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetTentacleArm)
namespace GlobalNamespace {
class GameButtonActivatable;
}
namespace GlobalNamespace {
class ICallBack;
}
namespace GlobalNamespace {
class IEnergyGadget;
}
namespace GlobalNamespace {
class SIGadgetTentacleArm_HeldPlayerCallback;
}
namespace GlobalNamespace {
struct SIUpgradeSet;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class TakeMyHand_HandLink;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaLocomotion {
class GTPlayer;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetTentacleArm;
}
namespace GlobalNamespace {
class SIGadgetTentacleArm_HeldPlayerCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetTentacleArm*);
MARK_REF_T(::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetTentacleArm*, "", "SIGadgetTentacleArm");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback*, "", "SIGadgetTentacleArm/HeldPlayerCallback");
// Dependencies GTRendererMatSlot, SIGadget, ShaderHashId, UnityEngine.LayerMask, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetTentacleArm
class CORDL_TYPE SIGadgetTentacleArm : public ::GlobalNamespace::SIGadget {
public:
// Declarations
using HeldPlayerCallback = ::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback;

/// @brief Field ClawMaxBlendSpeed, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_ClawMaxBlendSpeed, put=__cordl_internal_set_ClawMaxBlendSpeed)) float_t  ClawMaxBlendSpeed;

/// @brief Field ClawMaxRotBlendSpeed, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ClawMaxRotBlendSpeed, put=__cordl_internal_set_ClawMaxRotBlendSpeed)) float_t  ClawMaxRotBlendSpeed;

/// @brief Field FuelCost_Grab, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_FuelCost_Grab, put=__cordl_internal_set_FuelCost_Grab)) float_t  FuelCost_Grab;

/// @brief Field FuelCost_JumpSpeed, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_FuelCost_JumpSpeed, put=__cordl_internal_set_FuelCost_JumpSpeed)) float_t  FuelCost_JumpSpeed;

/// @brief Field FuelCost_Slippery_Multiplier, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_FuelCost_Slippery_Multiplier, put=__cordl_internal_set_FuelCost_Slippery_Multiplier)) float_t  FuelCost_Slippery_Multiplier;

/// @brief Field FuelCost_Wall_Multiplier, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get_FuelCost_Wall_Multiplier, put=__cordl_internal_set_FuelCost_Wall_Multiplier)) float_t  FuelCost_Wall_Multiplier;

/// @brief Field FuelPerSecond_Holding, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_FuelPerSecond_Holding, put=__cordl_internal_set_FuelPerSecond_Holding)) float_t  FuelPerSecond_Holding;

/// @brief Field FuelPerSecond_Recharging, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_FuelPerSecond_Recharging, put=__cordl_internal_set_FuelPerSecond_Recharging)) float_t  FuelPerSecond_Recharging;

 __declspec(property(get=get_IsFull)) bool  IsFull;

/// @brief Field LengthFactor, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get_LengthFactor, put=__cordl_internal_set_LengthFactor)) float_t  LengthFactor;

/// @brief Field MaxGrabAngle, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxGrabAngle, put=__cordl_internal_set_MaxGrabAngle)) float_t  MaxGrabAngle;

/// @brief Field MaxTentacleJumpSpeed, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxTentacleJumpSpeed, put=__cordl_internal_set_MaxTentacleJumpSpeed)) float_t  MaxTentacleJumpSpeed;

 __declspec(property(get=get_UsesEnergy)) bool  UsesEnergy;

/// @brief Field WallAngle, offset 0x14c, size 0x4 
 __declspec(property(get=__cordl_internal_get_WallAngle, put=__cordl_internal_set_WallAngle)) float_t  WallAngle;

/// @brief Field _current_grab_fps, offset 0x210, size 0x4 
 __declspec(property(get=__cordl_internal_get__current_grab_fps, put=__cordl_internal_set__current_grab_fps)) float_t  _current_grab_fps;

/// @brief Field _fps_holding_base, offset 0x1f0, size 0x4 
 __declspec(property(get=__cordl_internal_get__fps_holding_base, put=__cordl_internal_set__fps_holding_base)) float_t  _fps_holding_base;

/// @brief Field _fps_recharging_base, offset 0x1f4, size 0x4 
 __declspec(property(get=__cordl_internal_get__fps_recharging_base, put=__cordl_internal_set__fps_recharging_base)) float_t  _fps_recharging_base;

/// @brief Field _gaugeMatPropBlock, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__gaugeMatPropBlock, put=__cordl_internal_set__gaugeMatPropBlock)) ::UnityEngine::MaterialPropertyBlock*  _gaugeMatPropBlock;

/// @brief Field _grabAngle_base, offset 0x204, size 0x4 
 __declspec(property(get=__cordl_internal_get__grabAngle_base, put=__cordl_internal_set__grabAngle_base)) float_t  _grabAngle_base;

/// @brief Field _grabCost_base, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get__grabCost_base, put=__cordl_internal_set__grabCost_base)) float_t  _grabCost_base;

/// @brief Field <isAnchored>k__BackingField, offset 0x218, size 0x1 
 __declspec(property(get=__cordl_internal_get__isAnchored_k__BackingField, put=__cordl_internal_set__isAnchored_k__BackingField)) bool  _isAnchored_k__BackingField;

/// @brief Field <isHoldingHand>k__BackingField, offset 0x219, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHoldingHand_k__BackingField, put=__cordl_internal_set__isHoldingHand_k__BackingField)) bool  _isHoldingHand_k__BackingField;

/// @brief Field _jumpCost_base, offset 0x1fc, size 0x4 
 __declspec(property(get=__cordl_internal_get__jumpCost_base, put=__cordl_internal_set__jumpCost_base)) float_t  _jumpCost_base;

/// @brief Field _jumpSpeed_base, offset 0x200, size 0x4 
 __declspec(property(get=__cordl_internal_get__jumpSpeed_base, put=__cordl_internal_set__jumpSpeed_base)) float_t  _jumpSpeed_base;

/// @brief Field _lowFuelThreshold, offset 0x214, size 0x4 
 __declspec(property(get=__cordl_internal_get__lowFuelThreshold, put=__cordl_internal_set__lowFuelThreshold)) float_t  _lowFuelThreshold;

/// @brief Field _min_grab_dot, offset 0x208, size 0x4 
 __declspec(property(get=__cordl_internal_get__min_grab_dot, put=__cordl_internal_set__min_grab_dot)) float_t  _min_grab_dot;

/// @brief Field _wall_angle_dot, offset 0x20c, size 0x4 
 __declspec(property(get=__cordl_internal_get__wall_angle_dot, put=__cordl_internal_set__wall_angle_dot)) float_t  _wall_angle_dot;

/// @brief Field attachFailSound, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachFailSound, put=__cordl_internal_set_attachFailSound)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  attachFailSound;

/// @brief Field attachSound, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachSound, put=__cordl_internal_set_attachSound)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  attachSound;

/// @brief Field buttonActivatable, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonActivatable, put=__cordl_internal_set_buttonActivatable)) ::UnityW<::GlobalNamespace::GameButtonActivatable>  buttonActivatable;

/// @brief Field canHoldSlipperyWalls, offset 0x150, size 0x1 
 __declspec(property(get=__cordl_internal_get_canHoldSlipperyWalls, put=__cordl_internal_set_canHoldSlipperyWalls)) bool  canHoldSlipperyWalls;

/// @brief Field claw, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_claw, put=__cordl_internal_set_claw)) ::UnityW<::UnityEngine::GameObject>  claw;

/// @brief Field clawAnchorPosition, offset 0x1c4, size 0xc 
 __declspec(property(get=__cordl_internal_get_clawAnchorPosition, put=__cordl_internal_set_clawAnchorPosition)) ::UnityEngine::Vector3  clawAnchorPosition;

/// @brief Field clawAnchorRotation, offset 0x1dc, size 0x10 
 __declspec(property(get=__cordl_internal_get_clawAnchorRotation, put=__cordl_internal_set_clawAnchorRotation)) ::UnityEngine::Quaternion  clawAnchorRotation;

/// @brief Field clawHoldAdjustment, offset 0x1b8, size 0xc 
 __declspec(property(get=__cordl_internal_get_clawHoldAdjustment, put=__cordl_internal_set_clawHoldAdjustment)) ::UnityEngine::Vector3  clawHoldAdjustment;

/// @brief Field clawHoldingVisual, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_clawHoldingVisual, put=__cordl_internal_set_clawHoldingVisual)) ::UnityW<::UnityEngine::GameObject>  clawHoldingVisual;

/// @brief Field clawReleasedVisual, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_clawReleasedVisual, put=__cordl_internal_set_clawReleasedVisual)) ::UnityW<::UnityEngine::GameObject>  clawReleasedVisual;

/// @brief Field clawVisualPos, offset 0x238, size 0xc 
 __declspec(property(get=__cordl_internal_get_clawVisualPos, put=__cordl_internal_set_clawVisualPos)) ::UnityEngine::Vector3  clawVisualPos;

/// @brief Field clawVisualRot, offset 0x244, size 0x10 
 __declspec(property(get=__cordl_internal_get_clawVisualRot, put=__cordl_internal_set_clawVisualRot)) ::UnityEngine::Quaternion  clawVisualRot;

/// @brief Field currentFuel, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentFuel, put=__cordl_internal_set_currentFuel)) float_t  currentFuel;

/// @brief Field detachFailSound, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_detachFailSound, put=__cordl_internal_set_detachFailSound)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  detachFailSound;

/// @brief Field detachSound, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_detachSound, put=__cordl_internal_set_detachSound)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  detachSound;

/// @brief Field fuelSize, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_fuelSize, put=__cordl_internal_set_fuelSize)) float_t  fuelSize;

/// @brief Field hapticDurationOnGrab, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticDurationOnGrab, put=__cordl_internal_set_hapticDurationOnGrab)) float_t  hapticDurationOnGrab;

/// @brief Field hapticDurationOnRelease, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticDurationOnRelease, put=__cordl_internal_set_hapticDurationOnRelease)) float_t  hapticDurationOnRelease;

/// @brief Field hapticStrengthOnGrab, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticStrengthOnGrab, put=__cordl_internal_set_hapticStrengthOnGrab)) float_t  hapticStrengthOnGrab;

/// @brief Field hapticStrengthOnRelease, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticStrengthOnRelease, put=__cordl_internal_set_hapticStrengthOnRelease)) float_t  hapticStrengthOnRelease;

/// @brief Field hasFailedToGrab, offset 0x1ef, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasFailedToGrab, put=__cordl_internal_set_hasFailedToGrab)) bool  hasFailedToGrab;

/// @brief Field hasGravityOverride, offset 0x1ed, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasGravityOverride, put=__cordl_internal_set_hasGravityOverride)) bool  hasGravityOverride;

/// @brief Field hasRigCallback, offset 0x228, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasRigCallback, put=__cordl_internal_set_hasRigCallback)) bool  hasRigCallback;

/// @brief Field hasTentacle2, offset 0x151, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasTentacle2, put=__cordl_internal_set_hasTentacle2)) bool  hasTentacle2;

/// @brief Field heldPlayerCallback, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_heldPlayerCallback, put=__cordl_internal_set_heldPlayerCallback)) ::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback*  heldPlayerCallback;

 __declspec(property(get=get_isAnchored, put=set_isAnchored)) bool  isAnchored;

/// @brief Field isGripBroken, offset 0x1ec, size 0x1 
 __declspec(property(get=__cordl_internal_get_isGripBroken, put=__cordl_internal_set_isGripBroken)) bool  isGripBroken;

 __declspec(property(get=get_isHoldingHand, put=set_isHoldingHand)) bool  isHoldingHand;

/// @brief Field isLeftHanded, offset 0x1a8, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeftHanded, put=__cordl_internal_set_isLeftHanded)) bool  isLeftHanded;

/// @brief Field isLowFuel, offset 0x1ee, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLowFuel, put=__cordl_internal_set_isLowFuel)) bool  isLowFuel;

/// @brief Field knownSafePosition, offset 0x1ac, size 0xc 
 __declspec(property(get=__cordl_internal_get_knownSafePosition, put=__cordl_internal_set_knownSafePosition)) ::UnityEngine::Vector3  knownSafePosition;

/// @brief Field lastCallbackFrame, offset 0x258, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastCallbackFrame, put=__cordl_internal_set_lastCallbackFrame)) int32_t  lastCallbackFrame;

/// @brief Field lastHeldCallbackFrame, offset 0x25c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastHeldCallbackFrame, put=__cordl_internal_set_lastHeldCallbackFrame)) int32_t  lastHeldCallbackFrame;

/// @brief Field lastRequestedPlayerPosition, offset 0x1d0, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastRequestedPlayerPosition, put=__cordl_internal_set_lastRequestedPlayerPosition)) ::UnityEngine::Vector3  lastRequestedPlayerPosition;

/// @brief Field lowFuelSound, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lowFuelSound, put=__cordl_internal_set_lowFuelSound)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  lowFuelSound;

/// @brief Field m_gaugeMatSlots, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_gaugeMatSlots, put=__cordl_internal_set_m_gaugeMatSlots)) ::ArrayW<::GlobalNamespace::GTRendererMatSlot>  m_gaugeMatSlots;

/// @brief Field marker, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_marker, put=__cordl_internal_set_marker)) ::UnityW<::UnityEngine::Transform>  marker;

/// @brief Field maxTentacleLength, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTentacleLength, put=__cordl_internal_set_maxTentacleLength)) float_t  maxTentacleLength;

/// @brief Field rigForCallback, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigForCallback, put=__cordl_internal_set_rigForCallback)) ::UnityW<::GlobalNamespace::VRRig>  rigForCallback;

/// @brief Field tentacleAnchor, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_tentacleAnchor, put=__cordl_internal_set_tentacleAnchor)) ::UnityW<::UnityEngine::Transform>  tentacleAnchor;

/// @brief Field tentacleAnchor2, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_tentacleAnchor2, put=__cordl_internal_set_tentacleAnchor2)) ::UnityW<::UnityEngine::Transform>  tentacleAnchor2;

/// @brief Field tentacleEndDir_HASH, offset 0x188, size 0x10 
 __declspec(property(get=__cordl_internal_get_tentacleEndDir_HASH, put=__cordl_internal_set_tentacleEndDir_HASH)) ::GlobalNamespace::ShaderHashId  tentacleEndDir_HASH;

/// @brief Field tentacleEnd_HASH, offset 0x178, size 0x10 
 __declspec(property(get=__cordl_internal_get_tentacleEnd_HASH, put=__cordl_internal_set_tentacleEnd_HASH)) ::GlobalNamespace::ShaderHashId  tentacleEnd_HASH;

/// @brief Field tentacleForwardAdjustment, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_tentacleForwardAdjustment, put=__cordl_internal_set_tentacleForwardAdjustment)) float_t  tentacleForwardAdjustment;

/// @brief Field tentacleMat, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_tentacleMat, put=__cordl_internal_set_tentacleMat)) ::UnityW<::UnityEngine::Material>  tentacleMat;

/// @brief Field tentacleMat2, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_tentacleMat2, put=__cordl_internal_set_tentacleMat2)) ::UnityW<::UnityEngine::Material>  tentacleMat2;

/// @brief Field tentacleRenderer, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_tentacleRenderer, put=__cordl_internal_set_tentacleRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  tentacleRenderer;

/// @brief Field tentacleRenderer2, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_tentacleRenderer2, put=__cordl_internal_set_tentacleRenderer2)) ::UnityW<::UnityEngine::MeshRenderer>  tentacleRenderer2;

/// @brief Field tentacleRingOrigin_HASH, offset 0x198, size 0x10 
 __declspec(property(get=__cordl_internal_get_tentacleRingOrigin_HASH, put=__cordl_internal_set_tentacleRingOrigin_HASH)) ::GlobalNamespace::ShaderHashId  tentacleRingOrigin_HASH;

/// @brief Field tentacleStartDir_HASH, offset 0x168, size 0x10 
 __declspec(property(get=__cordl_internal_get_tentacleStartDir_HASH, put=__cordl_internal_set_tentacleStartDir_HASH)) ::GlobalNamespace::ShaderHashId  tentacleStartDir_HASH;

/// @brief Field wasGrabPressed, offset 0x254, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasGrabPressed, put=__cordl_internal_set_wasGrabPressed)) bool  wasGrabPressed;

/// @brief Field worldCollisionLayers, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_worldCollisionLayers, put=__cordl_internal_set_worldCollisionLayers)) ::UnityEngine::LayerMask  worldCollisionLayers;

/// @brief Convert operator to "::GlobalNamespace::ICallBack"
constexpr operator  ::GlobalNamespace::ICallBack*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IEnergyGadget"
constexpr operator  ::GlobalNamespace::IEnergyGadget*() noexcept;

/// @brief Method ApplyUpgradeNodes, addr 0x58eb3fc, size 0x11c, virtual true, abstract: false, final false
inline void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades) ;

/// @brief Method Awake, addr 0x58e79c4, size 0x5d4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CallBack, addr 0x58e8018, size 0x3f8, virtual true, abstract: false, final true
inline void CallBack() ;

/// @brief Method CheckInput, addr 0x58e8b84, size 0x1c, virtual false, abstract: false, final false
inline bool CheckInput() ;

/// @brief Method ClearClawAnchor, addr 0x58e863c, size 0x51c, virtual false, abstract: false, final false
inline void ClearClawAnchor() ;

/// @brief Method GetIdealClawPosition, addr 0x58e8ba0, size 0xe0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetIdealClawPosition(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method GetPlaneIntersection, addr 0x58eb884, size 0x300, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetPlaneIntersection(::UnityEngine::Vector3  p1Pos, ::UnityEngine::Vector3  p1Norm, ::UnityEngine::Vector3  p2Pos, ::UnityEngine::Vector3  p2Norm, ::UnityEngine::Vector3  refPoint) ;

/// @brief Method GetStateLong, addr 0x58eaae8, size 0x1d4, virtual false, abstract: false, final false
inline int64_t GetStateLong() ;

/// @brief Method GravityOverrideFunction, addr 0x58eb62c, size 0x4, virtual false, abstract: false, final false
inline void GravityOverrideFunction(::GorillaLocomotion::GTPlayer*  player) ;

static inline ::GlobalNamespace::SIGadgetTentacleArm* New_ctor() ;

/// @brief Method OnDestroy, addr 0x58e8410, size 0x50, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEntityInit, addr 0x58eb878, size 0xc, virtual true, abstract: false, final false
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChanged, addr 0x58eb630, size 0x248, virtual false, abstract: false, final false
inline void OnEntityStateChanged(int64_t  oldState, int64_t  newState) ;

/// @brief Method OnGrabbed, addr 0x58e8504, size 0x80, virtual false, abstract: false, final false
inline void OnGrabbed() ;

/// @brief Method OnKnockback, addr 0x58eb614, size 0x18, virtual false, abstract: false, final false
inline void OnKnockback(::UnityEngine::Vector3  knockbackVector) ;

/// @brief Method OnReleased, addr 0x58e8600, size 0x3c, virtual false, abstract: false, final false
inline void OnReleased() ;

/// @brief Method OnSnapped, addr 0x58e8584, size 0x7c, virtual false, abstract: false, final false
inline void OnSnapped() ;

/// @brief Method OnUnsnapped, addr 0x58e8b58, size 0x2c, virtual false, abstract: false, final false
inline void OnUnsnapped() ;

/// @brief Method OnUpdateAuthority, addr 0x58e8c80, size 0x1adc, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x58eacbc, size 0x740, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method RemoveGravityOverride, addr 0x58e8460, size 0xa4, virtual false, abstract: false, final false
inline void RemoveGravityOverride() ;

/// @brief Method SetClawAnchor, addr 0x58ea858, size 0x290, virtual false, abstract: false, final false
inline void SetClawAnchor(::UnityEngine::Vector3  clawPosition, ::UnityEngine::Quaternion  clawRotation, ::UnityEngine::Vector3  adjustment) ;

/// @brief Method SetGravityOverride, addr 0x58eb518, size 0xfc, virtual false, abstract: false, final false
inline void SetGravityOverride() ;

/// @brief Method SplineSample, addr 0x58ebb84, size 0x98, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 SplineSample(float_t  theta, ::UnityEngine::Vector3  startDir, ::UnityEngine::Vector3  endPos, ::UnityEngine::Vector3  endDir) ;

/// @brief Method Start, addr 0x58e7f98, size 0x80, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateFuelGauge, addr 0x58ea75c, size 0xfc, virtual false, abstract: false, final false
inline void UpdateFuelGauge() ;

/// @brief Method UpdateRecharge, addr 0x58ec36c, size 0x3c, virtual true, abstract: false, final true
inline void UpdateRecharge(float_t  dt) ;

/// @brief Method UpdateTentacle, addr 0x58ebc1c, size 0x58c, virtual false, abstract: false, final false
inline void UpdateTentacle(::UnityEngine::Material*  material, ::UnityEngine::Transform*  tentacle, ::UnityEngine::Transform*  anchor) ;

/// @brief Method UpdateTentacleHoldingHandPos, addr 0x58ec1a8, size 0x1a8, virtual false, abstract: false, final false
inline void UpdateTentacleHoldingHandPos(::GlobalNamespace::TakeMyHand_HandLink*  heldHandLink) ;

constexpr float_t const& __cordl_internal_get_ClawMaxBlendSpeed() const;

constexpr float_t& __cordl_internal_get_ClawMaxBlendSpeed() ;

constexpr float_t const& __cordl_internal_get_ClawMaxRotBlendSpeed() const;

constexpr float_t& __cordl_internal_get_ClawMaxRotBlendSpeed() ;

constexpr float_t const& __cordl_internal_get_FuelCost_Grab() const;

constexpr float_t& __cordl_internal_get_FuelCost_Grab() ;

constexpr float_t const& __cordl_internal_get_FuelCost_JumpSpeed() const;

constexpr float_t& __cordl_internal_get_FuelCost_JumpSpeed() ;

constexpr float_t const& __cordl_internal_get_FuelCost_Slippery_Multiplier() const;

constexpr float_t& __cordl_internal_get_FuelCost_Slippery_Multiplier() ;

constexpr float_t const& __cordl_internal_get_FuelCost_Wall_Multiplier() const;

constexpr float_t& __cordl_internal_get_FuelCost_Wall_Multiplier() ;

constexpr float_t const& __cordl_internal_get_FuelPerSecond_Holding() const;

constexpr float_t& __cordl_internal_get_FuelPerSecond_Holding() ;

constexpr float_t const& __cordl_internal_get_FuelPerSecond_Recharging() const;

constexpr float_t& __cordl_internal_get_FuelPerSecond_Recharging() ;

constexpr float_t const& __cordl_internal_get_LengthFactor() const;

constexpr float_t& __cordl_internal_get_LengthFactor() ;

constexpr float_t const& __cordl_internal_get_MaxGrabAngle() const;

constexpr float_t& __cordl_internal_get_MaxGrabAngle() ;

constexpr float_t const& __cordl_internal_get_MaxTentacleJumpSpeed() const;

constexpr float_t& __cordl_internal_get_MaxTentacleJumpSpeed() ;

constexpr float_t const& __cordl_internal_get_WallAngle() const;

constexpr float_t& __cordl_internal_get_WallAngle() ;

constexpr float_t const& __cordl_internal_get__current_grab_fps() const;

constexpr float_t& __cordl_internal_get__current_grab_fps() ;

constexpr float_t const& __cordl_internal_get__fps_holding_base() const;

constexpr float_t& __cordl_internal_get__fps_holding_base() ;

constexpr float_t const& __cordl_internal_get__fps_recharging_base() const;

constexpr float_t& __cordl_internal_get__fps_recharging_base() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__gaugeMatPropBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__gaugeMatPropBlock() ;

constexpr float_t const& __cordl_internal_get__grabAngle_base() const;

constexpr float_t& __cordl_internal_get__grabAngle_base() ;

constexpr float_t const& __cordl_internal_get__grabCost_base() const;

constexpr float_t& __cordl_internal_get__grabCost_base() ;

constexpr bool const& __cordl_internal_get__isAnchored_k__BackingField() const;

constexpr bool& __cordl_internal_get__isAnchored_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isHoldingHand_k__BackingField() const;

constexpr bool& __cordl_internal_get__isHoldingHand_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__jumpCost_base() const;

constexpr float_t& __cordl_internal_get__jumpCost_base() ;

constexpr float_t const& __cordl_internal_get__jumpSpeed_base() const;

constexpr float_t& __cordl_internal_get__jumpSpeed_base() ;

constexpr float_t const& __cordl_internal_get__lowFuelThreshold() const;

constexpr float_t& __cordl_internal_get__lowFuelThreshold() ;

constexpr float_t const& __cordl_internal_get__min_grab_dot() const;

constexpr float_t& __cordl_internal_get__min_grab_dot() ;

constexpr float_t const& __cordl_internal_get__wall_angle_dot() const;

constexpr float_t& __cordl_internal_get__wall_angle_dot() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_attachFailSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_attachFailSound() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_attachSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_attachSound() ;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable> const& __cordl_internal_get_buttonActivatable() const;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable>& __cordl_internal_get_buttonActivatable() ;

constexpr bool const& __cordl_internal_get_canHoldSlipperyWalls() const;

constexpr bool& __cordl_internal_get_canHoldSlipperyWalls() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_claw() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_claw() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_clawAnchorPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_clawAnchorPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_clawAnchorRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_clawAnchorRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_clawHoldAdjustment() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_clawHoldAdjustment() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_clawHoldingVisual() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_clawHoldingVisual() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_clawReleasedVisual() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_clawReleasedVisual() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_clawVisualPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_clawVisualPos() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_clawVisualRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_clawVisualRot() ;

constexpr float_t const& __cordl_internal_get_currentFuel() const;

constexpr float_t& __cordl_internal_get_currentFuel() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_detachFailSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_detachFailSound() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_detachSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_detachSound() ;

constexpr float_t const& __cordl_internal_get_fuelSize() const;

constexpr float_t& __cordl_internal_get_fuelSize() ;

constexpr float_t const& __cordl_internal_get_hapticDurationOnGrab() const;

constexpr float_t& __cordl_internal_get_hapticDurationOnGrab() ;

constexpr float_t const& __cordl_internal_get_hapticDurationOnRelease() const;

constexpr float_t& __cordl_internal_get_hapticDurationOnRelease() ;

constexpr float_t const& __cordl_internal_get_hapticStrengthOnGrab() const;

constexpr float_t& __cordl_internal_get_hapticStrengthOnGrab() ;

constexpr float_t const& __cordl_internal_get_hapticStrengthOnRelease() const;

constexpr float_t& __cordl_internal_get_hapticStrengthOnRelease() ;

constexpr bool const& __cordl_internal_get_hasFailedToGrab() const;

constexpr bool& __cordl_internal_get_hasFailedToGrab() ;

constexpr bool const& __cordl_internal_get_hasGravityOverride() const;

constexpr bool& __cordl_internal_get_hasGravityOverride() ;

constexpr bool const& __cordl_internal_get_hasRigCallback() const;

constexpr bool& __cordl_internal_get_hasRigCallback() ;

constexpr bool const& __cordl_internal_get_hasTentacle2() const;

constexpr bool& __cordl_internal_get_hasTentacle2() ;

constexpr ::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback* const& __cordl_internal_get_heldPlayerCallback() const;

constexpr ::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback*& __cordl_internal_get_heldPlayerCallback() ;

constexpr bool const& __cordl_internal_get_isGripBroken() const;

constexpr bool& __cordl_internal_get_isGripBroken() ;

constexpr bool const& __cordl_internal_get_isLeftHanded() const;

constexpr bool& __cordl_internal_get_isLeftHanded() ;

constexpr bool const& __cordl_internal_get_isLowFuel() const;

constexpr bool& __cordl_internal_get_isLowFuel() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_knownSafePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_knownSafePosition() ;

constexpr int32_t const& __cordl_internal_get_lastCallbackFrame() const;

constexpr int32_t& __cordl_internal_get_lastCallbackFrame() ;

constexpr int32_t const& __cordl_internal_get_lastHeldCallbackFrame() const;

constexpr int32_t& __cordl_internal_get_lastHeldCallbackFrame() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastRequestedPlayerPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastRequestedPlayerPosition() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_lowFuelSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_lowFuelSound() ;

constexpr ::ArrayW<::GlobalNamespace::GTRendererMatSlot> const& __cordl_internal_get_m_gaugeMatSlots() const;

constexpr ::ArrayW<::GlobalNamespace::GTRendererMatSlot>& __cordl_internal_get_m_gaugeMatSlots() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_marker() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_marker() ;

constexpr float_t const& __cordl_internal_get_maxTentacleLength() const;

constexpr float_t& __cordl_internal_get_maxTentacleLength() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rigForCallback() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rigForCallback() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tentacleAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tentacleAnchor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tentacleAnchor2() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tentacleAnchor2() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get_tentacleEndDir_HASH() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get_tentacleEndDir_HASH() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get_tentacleEnd_HASH() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get_tentacleEnd_HASH() ;

constexpr float_t const& __cordl_internal_get_tentacleForwardAdjustment() const;

constexpr float_t& __cordl_internal_get_tentacleForwardAdjustment() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_tentacleMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_tentacleMat() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_tentacleMat2() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_tentacleMat2() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_tentacleRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_tentacleRenderer() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_tentacleRenderer2() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_tentacleRenderer2() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get_tentacleRingOrigin_HASH() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get_tentacleRingOrigin_HASH() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get_tentacleStartDir_HASH() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get_tentacleStartDir_HASH() ;

constexpr bool const& __cordl_internal_get_wasGrabPressed() const;

constexpr bool& __cordl_internal_get_wasGrabPressed() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_worldCollisionLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_worldCollisionLayers() ;

constexpr void __cordl_internal_set_ClawMaxBlendSpeed(float_t  value) ;

constexpr void __cordl_internal_set_ClawMaxRotBlendSpeed(float_t  value) ;

constexpr void __cordl_internal_set_FuelCost_Grab(float_t  value) ;

constexpr void __cordl_internal_set_FuelCost_JumpSpeed(float_t  value) ;

constexpr void __cordl_internal_set_FuelCost_Slippery_Multiplier(float_t  value) ;

constexpr void __cordl_internal_set_FuelCost_Wall_Multiplier(float_t  value) ;

constexpr void __cordl_internal_set_FuelPerSecond_Holding(float_t  value) ;

constexpr void __cordl_internal_set_FuelPerSecond_Recharging(float_t  value) ;

constexpr void __cordl_internal_set_LengthFactor(float_t  value) ;

constexpr void __cordl_internal_set_MaxGrabAngle(float_t  value) ;

constexpr void __cordl_internal_set_MaxTentacleJumpSpeed(float_t  value) ;

constexpr void __cordl_internal_set_WallAngle(float_t  value) ;

constexpr void __cordl_internal_set__current_grab_fps(float_t  value) ;

constexpr void __cordl_internal_set__fps_holding_base(float_t  value) ;

constexpr void __cordl_internal_set__fps_recharging_base(float_t  value) ;

constexpr void __cordl_internal_set__gaugeMatPropBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__grabAngle_base(float_t  value) ;

constexpr void __cordl_internal_set__grabCost_base(float_t  value) ;

constexpr void __cordl_internal_set__isAnchored_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__isHoldingHand_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__jumpCost_base(float_t  value) ;

constexpr void __cordl_internal_set__jumpSpeed_base(float_t  value) ;

constexpr void __cordl_internal_set__lowFuelThreshold(float_t  value) ;

constexpr void __cordl_internal_set__min_grab_dot(float_t  value) ;

constexpr void __cordl_internal_set__wall_angle_dot(float_t  value) ;

constexpr void __cordl_internal_set_attachFailSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_attachSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_buttonActivatable(::UnityW<::GlobalNamespace::GameButtonActivatable>  value) ;

constexpr void __cordl_internal_set_canHoldSlipperyWalls(bool  value) ;

constexpr void __cordl_internal_set_claw(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_clawAnchorPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_clawAnchorRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_clawHoldAdjustment(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_clawHoldingVisual(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_clawReleasedVisual(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_clawVisualPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_clawVisualRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_currentFuel(float_t  value) ;

constexpr void __cordl_internal_set_detachFailSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_detachSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_fuelSize(float_t  value) ;

constexpr void __cordl_internal_set_hapticDurationOnGrab(float_t  value) ;

constexpr void __cordl_internal_set_hapticDurationOnRelease(float_t  value) ;

constexpr void __cordl_internal_set_hapticStrengthOnGrab(float_t  value) ;

constexpr void __cordl_internal_set_hapticStrengthOnRelease(float_t  value) ;

constexpr void __cordl_internal_set_hasFailedToGrab(bool  value) ;

constexpr void __cordl_internal_set_hasGravityOverride(bool  value) ;

constexpr void __cordl_internal_set_hasRigCallback(bool  value) ;

constexpr void __cordl_internal_set_hasTentacle2(bool  value) ;

constexpr void __cordl_internal_set_heldPlayerCallback(::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback*  value) ;

constexpr void __cordl_internal_set_isGripBroken(bool  value) ;

constexpr void __cordl_internal_set_isLeftHanded(bool  value) ;

constexpr void __cordl_internal_set_isLowFuel(bool  value) ;

constexpr void __cordl_internal_set_knownSafePosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastCallbackFrame(int32_t  value) ;

constexpr void __cordl_internal_set_lastHeldCallbackFrame(int32_t  value) ;

constexpr void __cordl_internal_set_lastRequestedPlayerPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lowFuelSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_m_gaugeMatSlots(::ArrayW<::GlobalNamespace::GTRendererMatSlot>  value) ;

constexpr void __cordl_internal_set_marker(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_maxTentacleLength(float_t  value) ;

constexpr void __cordl_internal_set_rigForCallback(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_tentacleAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_tentacleAnchor2(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_tentacleEndDir_HASH(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set_tentacleEnd_HASH(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set_tentacleForwardAdjustment(float_t  value) ;

constexpr void __cordl_internal_set_tentacleMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_tentacleMat2(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_tentacleRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_tentacleRenderer2(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_tentacleRingOrigin_HASH(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set_tentacleStartDir_HASH(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set_wasGrabPressed(bool  value) ;

constexpr void __cordl_internal_set_worldCollisionLayers(::UnityEngine::LayerMask  value) ;

/// @brief Method .ctor, addr 0x58ec3a8, size 0x2d8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsFull, addr 0x58ec358, size 0x14, virtual true, abstract: false, final true
inline bool get_IsFull() ;

/// @brief Method get_UsesEnergy, addr 0x58ec350, size 0x8, virtual true, abstract: false, final true
inline bool get_UsesEnergy() ;

/// [CompilerGenerated]
/// @brief Method get_isAnchored, addr 0x58e79a4, size 0x8, virtual false, abstract: false, final false
inline bool get_isAnchored() ;

/// [CompilerGenerated]
/// @brief Method get_isHoldingHand, addr 0x58e79b4, size 0x8, virtual false, abstract: false, final false
inline bool get_isHoldingHand() ;

/// @brief Convert to "::GlobalNamespace::ICallBack"
constexpr ::GlobalNamespace::ICallBack* i___GlobalNamespace__ICallBack() noexcept;

/// @brief Convert to "::GlobalNamespace::IEnergyGadget"
constexpr ::GlobalNamespace::IEnergyGadget* i___GlobalNamespace__IEnergyGadget() noexcept;

/// [CompilerGenerated]
/// @brief Method set_isAnchored, addr 0x58e79ac, size 0x8, virtual false, abstract: false, final false
inline void set_isAnchored(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_isHoldingHand, addr 0x58e79bc, size 0x8, virtual false, abstract: false, final false
inline void set_isHoldingHand(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetTentacleArm() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetTentacleArm", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetTentacleArm(SIGadgetTentacleArm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetTentacleArm", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetTentacleArm(SIGadgetTentacleArm const& ) = delete;

/// @brief Field Anchored_Bit offset 0xffffffff size 0x8
static constexpr int64_t  Anchored_Bit{static_cast<int64_t>(0x4000000000000000)};

/// @brief Field HoldingHand_Bit offset 0xffffffff size 0x8
static constexpr int64_t  HoldingHand_Bit{static_cast<int64_t>(0x8000000000000000)};

/// @brief Field HoldingLeftHand_Bit offset 0xffffffff size 0x8
static constexpr int64_t  HoldingLeftHand_Bit{static_cast<int64_t>(0x2000000000000000)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{280};

/// @brief Field kFUEL_CAPACITY offset 0xffffffff size 0x4
static constexpr float_t  kFUEL_CAPACITY{static_cast<float_t>(10.0f)};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[SIGadgetWristJet]  ERROR!!!  "};

/// @brief Field preErrBeta offset 0xffffffff size 0x8
static constexpr ::ConstString  preErrBeta{u"[SIGadgetWristJet]  ERROR!!!  (beta only log)  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[SIGadgetWristJet]  "};

/// [SerializeField]
/// @brief Field claw, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___claw;

/// [SerializeField]
/// @brief Field clawHoldingVisual, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___clawHoldingVisual;

/// [SerializeField]
/// @brief Field clawReleasedVisual, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___clawReleasedVisual;

/// [SerializeField]
/// @brief Field worldCollisionLayers, offset: 0x90, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___worldCollisionLayers;

/// [SerializeField]
/// @brief Field marker, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___marker;

/// [SerializeField]
/// @brief Field maxTentacleLength, offset: 0xa0, size: 0x4, def value: None
 float_t  ___maxTentacleLength;

/// [SerializeField]
/// @brief Field tentacleForwardAdjustment, offset: 0xa4, size: 0x4, def value: None
 float_t  ___tentacleForwardAdjustment;

/// [SerializeField]
/// @brief Field tentacleRenderer, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___tentacleRenderer;

/// [SerializeField]
/// @brief Field tentacleAnchor, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tentacleAnchor;

/// [SerializeField]
/// @brief Field tentacleRenderer2, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___tentacleRenderer2;

/// [SerializeField]
/// @brief Field tentacleAnchor2, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tentacleAnchor2;

/// [SerializeField]
/// @brief Field attachSound, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___attachSound;

/// [SerializeField]
/// @brief Field detachSound, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___detachSound;

/// [SerializeField]
/// @brief Field attachFailSound, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___attachFailSound;

/// [SerializeField]
/// @brief Field detachFailSound, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___detachFailSound;

/// [SerializeField]
/// @brief Field lowFuelSound, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___lowFuelSound;

/// [SerializeField]
/// @brief Field hapticStrengthOnGrab, offset: 0xf0, size: 0x4, def value: None
 float_t  ___hapticStrengthOnGrab;

/// [SerializeField]
/// @brief Field hapticDurationOnGrab, offset: 0xf4, size: 0x4, def value: None
 float_t  ___hapticDurationOnGrab;

/// [SerializeField]
/// @brief Field hapticStrengthOnRelease, offset: 0xf8, size: 0x4, def value: None
 float_t  ___hapticStrengthOnRelease;

/// [SerializeField]
/// @brief Field hapticDurationOnRelease, offset: 0xfc, size: 0x4, def value: None
 float_t  ___hapticDurationOnRelease;

/// [SerializeField]
/// @brief Field buttonActivatable, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameButtonActivatable>  ___buttonActivatable;

/// [SerializeField]
/// @brief Field ClawMaxBlendSpeed, offset: 0x108, size: 0x4, def value: None
 float_t  ___ClawMaxBlendSpeed;

/// [SerializeField]
/// @brief Field ClawMaxRotBlendSpeed, offset: 0x10c, size: 0x4, def value: None
 float_t  ___ClawMaxRotBlendSpeed;

/// @brief Field _gaugeMatPropBlock, offset: 0x110, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____gaugeMatPropBlock;

/// [SerializeField]
/// @brief Field m_gaugeMatSlots, offset: 0x118, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GTRendererMatSlot>  ___m_gaugeMatSlots;

/// @brief Field fuelSize, offset: 0x120, size: 0x4, def value: None
 float_t  ___fuelSize;

/// @brief Field currentFuel, offset: 0x124, size: 0x4, def value: None
 float_t  ___currentFuel;

/// @brief Field FuelPerSecond_Holding, offset: 0x128, size: 0x4, def value: None
 float_t  ___FuelPerSecond_Holding;

/// @brief Field FuelCost_Wall_Multiplier, offset: 0x12c, size: 0x4, def value: None
 float_t  ___FuelCost_Wall_Multiplier;

/// @brief Field FuelCost_Slippery_Multiplier, offset: 0x130, size: 0x4, def value: None
 float_t  ___FuelCost_Slippery_Multiplier;

/// @brief Field FuelPerSecond_Recharging, offset: 0x134, size: 0x4, def value: None
 float_t  ___FuelPerSecond_Recharging;

/// @brief Field FuelCost_Grab, offset: 0x138, size: 0x4, def value: None
 float_t  ___FuelCost_Grab;

/// @brief Field FuelCost_JumpSpeed, offset: 0x13c, size: 0x4, def value: None
 float_t  ___FuelCost_JumpSpeed;

/// @brief Field MaxTentacleJumpSpeed, offset: 0x140, size: 0x4, def value: None
 float_t  ___MaxTentacleJumpSpeed;

/// @brief Field LengthFactor, offset: 0x144, size: 0x4, def value: None
 float_t  ___LengthFactor;

/// @brief Field MaxGrabAngle, offset: 0x148, size: 0x4, def value: None
 float_t  ___MaxGrabAngle;

/// @brief Field WallAngle, offset: 0x14c, size: 0x4, def value: None
 float_t  ___WallAngle;

/// @brief Field canHoldSlipperyWalls, offset: 0x150, size: 0x1, def value: None
 bool  ___canHoldSlipperyWalls;

/// @brief Field hasTentacle2, offset: 0x151, size: 0x1, def value: None
 bool  ___hasTentacle2;

/// @brief Field tentacleMat, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___tentacleMat;

/// @brief Field tentacleMat2, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___tentacleMat2;

/// @brief Field tentacleStartDir_HASH, offset: 0x168, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ___tentacleStartDir_HASH;

/// @brief Field tentacleEnd_HASH, offset: 0x178, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ___tentacleEnd_HASH;

/// @brief Field tentacleEndDir_HASH, offset: 0x188, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ___tentacleEndDir_HASH;

/// @brief Field tentacleRingOrigin_HASH, offset: 0x198, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ___tentacleRingOrigin_HASH;

/// @brief Field isLeftHanded, offset: 0x1a8, size: 0x1, def value: None
 bool  ___isLeftHanded;

/// @brief Field knownSafePosition, offset: 0x1ac, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___knownSafePosition;

/// @brief Field clawHoldAdjustment, offset: 0x1b8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___clawHoldAdjustment;

/// @brief Field clawAnchorPosition, offset: 0x1c4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___clawAnchorPosition;

/// @brief Field lastRequestedPlayerPosition, offset: 0x1d0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastRequestedPlayerPosition;

/// @brief Field clawAnchorRotation, offset: 0x1dc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___clawAnchorRotation;

/// @brief Field isGripBroken, offset: 0x1ec, size: 0x1, def value: None
 bool  ___isGripBroken;

/// @brief Field hasGravityOverride, offset: 0x1ed, size: 0x1, def value: None
 bool  ___hasGravityOverride;

/// @brief Field isLowFuel, offset: 0x1ee, size: 0x1, def value: None
 bool  ___isLowFuel;

/// @brief Field hasFailedToGrab, offset: 0x1ef, size: 0x1, def value: None
 bool  ___hasFailedToGrab;

/// @brief Field _fps_holding_base, offset: 0x1f0, size: 0x4, def value: None
 float_t  ____fps_holding_base;

/// @brief Field _fps_recharging_base, offset: 0x1f4, size: 0x4, def value: None
 float_t  ____fps_recharging_base;

/// @brief Field _grabCost_base, offset: 0x1f8, size: 0x4, def value: None
 float_t  ____grabCost_base;

/// @brief Field _jumpCost_base, offset: 0x1fc, size: 0x4, def value: None
 float_t  ____jumpCost_base;

/// @brief Field _jumpSpeed_base, offset: 0x200, size: 0x4, def value: None
 float_t  ____jumpSpeed_base;

/// @brief Field _grabAngle_base, offset: 0x204, size: 0x4, def value: None
 float_t  ____grabAngle_base;

/// @brief Field _min_grab_dot, offset: 0x208, size: 0x4, def value: None
 float_t  ____min_grab_dot;

/// @brief Field _wall_angle_dot, offset: 0x20c, size: 0x4, def value: None
 float_t  ____wall_angle_dot;

/// @brief Field _current_grab_fps, offset: 0x210, size: 0x4, def value: None
 float_t  ____current_grab_fps;

/// @brief Field _lowFuelThreshold, offset: 0x214, size: 0x4, def value: None
 float_t  ____lowFuelThreshold;

/// [CompilerGenerated]
/// @brief Field <isAnchored>k__BackingField, offset: 0x218, size: 0x1, def value: None
 bool  ____isAnchored_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <isHoldingHand>k__BackingField, offset: 0x219, size: 0x1, def value: None
 bool  ____isHoldingHand_k__BackingField;

/// @brief Field heldPlayerCallback, offset: 0x220, size: 0x8, def value: None
 ::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback*  ___heldPlayerCallback;

/// @brief Field hasRigCallback, offset: 0x228, size: 0x1, def value: None
 bool  ___hasRigCallback;

/// @brief Field rigForCallback, offset: 0x230, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rigForCallback;

/// @brief Field clawVisualPos, offset: 0x238, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___clawVisualPos;

/// @brief Field clawVisualRot, offset: 0x244, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___clawVisualRot;

/// @brief Field wasGrabPressed, offset: 0x254, size: 0x1, def value: None
 bool  ___wasGrabPressed;

/// @brief Field lastCallbackFrame, offset: 0x258, size: 0x4, def value: None
 int32_t  ___lastCallbackFrame;

/// @brief Field lastHeldCallbackFrame, offset: 0x25c, size: 0x4, def value: None
 int32_t  ___lastHeldCallbackFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___claw) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___clawHoldingVisual) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___clawReleasedVisual) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___worldCollisionLayers) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___marker) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___maxTentacleLength) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___tentacleForwardAdjustment) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___tentacleRenderer) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___tentacleAnchor) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___tentacleRenderer2) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___tentacleAnchor2) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___attachSound) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___detachSound) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___attachFailSound) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___detachFailSound) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___lowFuelSound) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___hapticStrengthOnGrab) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___hapticDurationOnGrab) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___hapticStrengthOnRelease) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___hapticDurationOnRelease) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___buttonActivatable) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___ClawMaxBlendSpeed) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___ClawMaxRotBlendSpeed) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ____gaugeMatPropBlock) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___m_gaugeMatSlots) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___fuelSize) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___currentFuel) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___FuelPerSecond_Holding) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___FuelCost_Wall_Multiplier) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___FuelCost_Slippery_Multiplier) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___FuelPerSecond_Recharging) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___FuelCost_Grab) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___FuelCost_JumpSpeed) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___MaxTentacleJumpSpeed) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___LengthFactor) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___MaxGrabAngle) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___WallAngle) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___canHoldSlipperyWalls) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___hasTentacle2) == 0x151, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___tentacleMat) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___tentacleMat2) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___tentacleStartDir_HASH) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___tentacleEnd_HASH) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___tentacleEndDir_HASH) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___tentacleRingOrigin_HASH) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___isLeftHanded) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___knownSafePosition) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___clawHoldAdjustment) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___clawAnchorPosition) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___lastRequestedPlayerPosition) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___clawAnchorRotation) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___isGripBroken) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___hasGravityOverride) == 0x1ed, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___isLowFuel) == 0x1ee, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___hasFailedToGrab) == 0x1ef, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ____fps_holding_base) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ____fps_recharging_base) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ____grabCost_base) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ____jumpCost_base) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ____jumpSpeed_base) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ____grabAngle_base) == 0x204, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ____min_grab_dot) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ____wall_angle_dot) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ____current_grab_fps) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ____lowFuelThreshold) == 0x214, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ____isAnchored_k__BackingField) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ____isHoldingHand_k__BackingField) == 0x219, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___heldPlayerCallback) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___hasRigCallback) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___rigForCallback) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___clawVisualPos) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___clawVisualRot) == 0x244, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___wasGrabPressed) == 0x254, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___lastCallbackFrame) == 0x258, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm, ___lastHeldCallbackFrame) == 0x25c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetTentacleArm) == 0x260, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetTentacleArm/HeldPlayerCallback
class CORDL_TYPE SIGadgetTentacleArm_HeldPlayerCallback : public ::System::Object {
public:
// Declarations
/// @brief Field heldHandLink, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_heldHandLink, put=__cordl_internal_set_heldHandLink)) ::UnityW<::GlobalNamespace::TakeMyHand_HandLink>  heldHandLink;

/// @brief Field heldRig, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_heldRig, put=__cordl_internal_set_heldRig)) ::UnityW<::GlobalNamespace::VRRig>  heldRig;

/// @brief Field parent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::UnityW<::GlobalNamespace::SIGadgetTentacleArm>  parent;

/// @brief Convert operator to "::GlobalNamespace::ICallBack"
constexpr operator  ::GlobalNamespace::ICallBack*() noexcept;

/// @brief Method CallBack, addr 0x59d4ae8, size 0x20, virtual true, abstract: false, final true
inline void CallBack() ;

static inline ::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback* New_ctor(::GlobalNamespace::SIGadgetTentacleArm*  parent) ;

/// @brief Method Register, addr 0x59d4a00, size 0x58, virtual false, abstract: false, final false
inline void Register(::GlobalNamespace::VRRig*  heldPlayer, ::GlobalNamespace::TakeMyHand_HandLink*  heldHandLink) ;

/// @brief Method Unregister, addr 0x59d4a58, size 0x90, virtual false, abstract: false, final false
inline void Unregister() ;

constexpr ::UnityW<::GlobalNamespace::TakeMyHand_HandLink> const& __cordl_internal_get_heldHandLink() const;

constexpr ::UnityW<::GlobalNamespace::TakeMyHand_HandLink>& __cordl_internal_get_heldHandLink() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_heldRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_heldRig() ;

constexpr ::UnityW<::GlobalNamespace::SIGadgetTentacleArm> const& __cordl_internal_get_parent() const;

constexpr ::UnityW<::GlobalNamespace::SIGadgetTentacleArm>& __cordl_internal_get_parent() ;

constexpr void __cordl_internal_set_heldHandLink(::UnityW<::GlobalNamespace::TakeMyHand_HandLink>  value) ;

constexpr void __cordl_internal_set_heldRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_parent(::UnityW<::GlobalNamespace::SIGadgetTentacleArm>  value) ;

/// @brief Method .ctor, addr 0x59d49d0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::SIGadgetTentacleArm*  parent) ;

/// @brief Convert to "::GlobalNamespace::ICallBack"
constexpr ::GlobalNamespace::ICallBack* i___GlobalNamespace__ICallBack() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetTentacleArm_HeldPlayerCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetTentacleArm_HeldPlayerCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetTentacleArm_HeldPlayerCallback(SIGadgetTentacleArm_HeldPlayerCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetTentacleArm_HeldPlayerCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetTentacleArm_HeldPlayerCallback(SIGadgetTentacleArm_HeldPlayerCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{279};

/// @brief Field parent, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadgetTentacleArm>  ___parent;

/// @brief Field heldRig, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___heldRig;

/// @brief Field heldHandLink, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TakeMyHand_HandLink>  ___heldHandLink;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback, ___parent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback, ___heldRig) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback, ___heldHandLink) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
