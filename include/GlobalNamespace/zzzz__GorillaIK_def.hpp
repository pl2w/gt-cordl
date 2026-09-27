#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaIK.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaIK)
namespace GlobalNamespace {
class GorillaIK__CalibrateLeanOffsetCoroutine_d__66;
}
namespace GlobalNamespace {
class GorillaIK__DoDelayedUpdateIK_d__45;
}
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace GlobalNamespace {
class VRRigAnchorOverrides;
}
namespace GlobalNamespace {
class VRRig;
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
namespace UnityEngine {
class Coroutine;
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
class GorillaIK;
}
namespace GlobalNamespace {
class GorillaIK__CalibrateLeanOffsetCoroutine_d__66;
}
namespace GlobalNamespace {
class GorillaIK__DoDelayedUpdateIK_d__45;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaIK*);
MARK_REF_T(::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66*);
MARK_REF_T(::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaIK*, "", "GorillaIK");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66*, "", "GorillaIK/<CalibrateLeanOffsetCoroutine>d__66");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45*, "", "GorillaIK/<DoDelayedUpdateIK>d__45");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Transform, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaIK
class CORDL_TYPE GorillaIK : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _CalibrateLeanOffsetCoroutine_d__66 = ::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66;

using _DoDelayedUpdateIK_d__45 = ::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x1bc, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field anchorOverrides, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchorOverrides, put=__cordl_internal_set_anchorOverrides)) ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  anchorOverrides;

/// @brief Field biasDistance, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_biasDistance, put=__cordl_internal_set_biasDistance)) float_t  biasDistance;

/// @brief Field body, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_body, put=__cordl_internal_set_body)) ::UnityW<::UnityEngine::Transform>  body;

/// @brief Field bodyBone, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyBone, put=__cordl_internal_set_bodyBone)) ::UnityW<::UnityEngine::Transform>  bodyBone;

/// @brief Field bodyInitialRot, offset 0x148, size 0x10 
 __declspec(property(get=__cordl_internal_get_bodyInitialRot, put=__cordl_internal_set_bodyInitialRot)) ::UnityEngine::Quaternion  bodyInitialRot;

/// @brief Field bodyOffsetRotation, offset 0x118, size 0x10 
 __declspec(property(get=__cordl_internal_get_bodyOffsetRotation, put=__cordl_internal_set_bodyOffsetRotation)) ::UnityEngine::Quaternion  bodyOffsetRotation;

/// @brief Field boneXforms, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_boneXforms, put=__cordl_internal_set_boneXforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  boneXforms;

/// @brief Field calibrateCoroutine, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_calibrateCoroutine, put=__cordl_internal_set_calibrateCoroutine)) ::UnityEngine::Coroutine*  calibrateCoroutine;

/// @brief Field calibrating, offset 0x190, size 0x1 
 __declspec(property(get=__cordl_internal_get_calibrating, put=__cordl_internal_set_calibrating)) bool  calibrating;

/// @brief Field canUseUpdatedIK, offset 0x109, size 0x1 
 __declspec(property(get=__cordl_internal_get_canUseUpdatedIK, put=__cordl_internal_set_canUseUpdatedIK)) bool  canUseUpdatedIK;

/// @brief Field hasLeftOverride, offset 0x191, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasLeftOverride, put=__cordl_internal_set_hasLeftOverride)) bool  hasLeftOverride;

/// @brief Field hasRightOverride, offset 0x1a0, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasRightOverride, put=__cordl_internal_set_hasRightOverride)) bool  hasRightOverride;

/// @brief Field headBone, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_headBone, put=__cordl_internal_set_headBone)) ::UnityW<::UnityEngine::Transform>  headBone;

/// @brief Field initialLowerLeft, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get_initialLowerLeft, put=__cordl_internal_set_initialLowerLeft)) ::UnityEngine::Quaternion  initialLowerLeft;

/// @brief Field initialLowerRight, offset 0xa8, size 0x10 
 __declspec(property(get=__cordl_internal_get_initialLowerRight, put=__cordl_internal_set_initialLowerRight)) ::UnityEngine::Quaternion  initialLowerRight;

/// @brief Field initialUpperLeft, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_initialUpperLeft, put=__cordl_internal_set_initialUpperLeft)) ::UnityEngine::Quaternion  initialUpperLeft;

/// @brief Field initialUpperRight, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get_initialUpperRight, put=__cordl_internal_set_initialUpperRight)) ::UnityEngine::Quaternion  initialUpperRight;

/// @brief Field leanOffsetRotation, offset 0x128, size 0x10 
 __declspec(property(get=__cordl_internal_get_leanOffsetRotation, put=__cordl_internal_set_leanOffsetRotation)) ::UnityEngine::Quaternion  leanOffsetRotation;

/// @brief Field leftArmLower, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftArmLower, put=__cordl_internal_set_leftArmLower)) ::UnityW<::UnityEngine::Transform>  leftArmLower;

/// @brief Field leftArmUpper, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftArmUpper, put=__cordl_internal_set_leftArmUpper)) ::UnityW<::UnityEngine::Transform>  leftArmUpper;

/// @brief Field leftElbowDirection, offset 0xd8, size 0xc 
 __declspec(property(get=__cordl_internal_get_leftElbowDirection, put=__cordl_internal_set_leftElbowDirection)) ::UnityEngine::Vector3  leftElbowDirection;

/// @brief Field leftHand, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHand, put=__cordl_internal_set_leftHand)) ::UnityW<::UnityEngine::Transform>  leftHand;

/// @brief Field leftLowerArm, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftLowerArm, put=__cordl_internal_set_leftLowerArm)) ::UnityW<::UnityEngine::Transform>  leftLowerArm;

/// @brief Field leftOverrideWorldPos, offset 0x194, size 0xc 
 __declspec(property(get=__cordl_internal_get_leftOverrideWorldPos, put=__cordl_internal_set_leftOverrideWorldPos)) ::UnityEngine::Vector3  leftOverrideWorldPos;

/// @brief Field leftUpperArm, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftUpperArm, put=__cordl_internal_set_leftUpperArm)) ::UnityW<::UnityEngine::Transform>  leftUpperArm;

/// @brief Field lerpBodyRot, offset 0xc8, size 0x10 
 __declspec(property(get=__cordl_internal_get_lerpBodyRot, put=__cordl_internal_set_lerpBodyRot)) ::UnityEngine::Quaternion  lerpBodyRot;

/// @brief Field lerpLeftElbowDirection, offset 0xe4, size 0xc 
 __declspec(property(get=__cordl_internal_get_lerpLeftElbowDirection, put=__cordl_internal_set_lerpLeftElbowDirection)) ::UnityEngine::Vector3  lerpLeftElbowDirection;

/// @brief Field lerpRightElbowDirection, offset 0xfc, size 0xc 
 __declspec(property(get=__cordl_internal_get_lerpRightElbowDirection, put=__cordl_internal_set_lerpRightElbowDirection)) ::UnityEngine::Vector3  lerpRightElbowDirection;

/// @brief Field myRig, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field playerIK, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_playerIK, put=setStaticF_playerIK)) ::UnityW<::GlobalNamespace::GorillaIK>  playerIK;

/// @brief Field projectedBodyRotation, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectedBodyRotation, put=__cordl_internal_set_projectedBodyRotation)) ::UnityW<::UnityEngine::Transform>  projectedBodyRotation;

/// @brief Field projectedLeftShoulderPosition, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectedLeftShoulderPosition, put=__cordl_internal_set_projectedLeftShoulderPosition)) ::UnityW<::UnityEngine::Transform>  projectedLeftShoulderPosition;

/// @brief Field projectedRightShoulderPosition, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectedRightShoulderPosition, put=__cordl_internal_set_projectedRightShoulderPosition)) ::UnityW<::UnityEngine::Transform>  projectedRightShoulderPosition;

/// @brief Field renderDisplacement, offset 0x1b0, size 0xc 
 __declspec(property(get=__cordl_internal_get_renderDisplacement, put=__cordl_internal_set_renderDisplacement)) ::UnityEngine::Vector3  renderDisplacement;

/// @brief Field rightArmLower, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightArmLower, put=__cordl_internal_set_rightArmLower)) ::UnityW<::UnityEngine::Transform>  rightArmLower;

/// @brief Field rightArmUpper, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightArmUpper, put=__cordl_internal_set_rightArmUpper)) ::UnityW<::UnityEngine::Transform>  rightArmUpper;

/// @brief Field rightElbowDirection, offset 0xf0, size 0xc 
 __declspec(property(get=__cordl_internal_get_rightElbowDirection, put=__cordl_internal_set_rightElbowDirection)) ::UnityEngine::Vector3  rightElbowDirection;

/// @brief Field rightHand, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHand, put=__cordl_internal_set_rightHand)) ::UnityW<::UnityEngine::Transform>  rightHand;

/// @brief Field rightLowerArm, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightLowerArm, put=__cordl_internal_set_rightLowerArm)) ::UnityW<::UnityEngine::Transform>  rightLowerArm;

/// @brief Field rightOverrideWorldPos, offset 0x1a4, size 0xc 
 __declspec(property(get=__cordl_internal_get_rightOverrideWorldPos, put=__cordl_internal_set_rightOverrideWorldPos)) ::UnityEngine::Vector3  rightOverrideWorldPos;

/// @brief Field rightUpperArm, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightUpperArm, put=__cordl_internal_set_rightUpperArm)) ::UnityW<::UnityEngine::Transform>  rightUpperArm;

/// @brief Field skeleton, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_skeleton, put=__cordl_internal_set_skeleton)) ::UnityW<::GlobalNamespace::OVRSkeleton>  skeleton;

/// @brief Field targetBodyRot, offset 0xb8, size 0x10 
 __declspec(property(get=__cordl_internal_get_targetBodyRot, put=__cordl_internal_set_targetBodyRot)) ::UnityEngine::Quaternion  targetBodyRot;

/// @brief Field targetHead, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetHead, put=__cordl_internal_set_targetHead)) ::UnityW<::UnityEngine::Transform>  targetHead;

/// @brief Field targetLeft, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetLeft, put=__cordl_internal_set_targetLeft)) ::UnityW<::UnityEngine::Transform>  targetLeft;

/// @brief Field targetRight, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRight, put=__cordl_internal_set_targetRight)) ::UnityW<::UnityEngine::Transform>  targetRight;

/// @brief Field useUpdatedIKCoroutine, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_useUpdatedIKCoroutine, put=__cordl_internal_set_useUpdatedIKCoroutine)) ::UnityEngine::Coroutine*  useUpdatedIKCoroutine;

/// @brief Field usingUpdatedIK, offset 0x108, size 0x1 
 __declspec(property(get=__cordl_internal_get_usingUpdatedIK, put=__cordl_internal_set_usingUpdatedIK)) bool  usingUpdatedIK;

/// @brief Method Awake, addr 0x5913940, size 0xb8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateAverage, addr 0x5914f38, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion CalculateAverage(::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*  quats, int32_t  index) ;

/// @brief Method CalculateAverage, addr 0x5914e10, size 0x128, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalculateAverage(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vecs) ;

/// [ContextMenu("Calibrate Lean Offset")]
/// @brief Method CalibrateLeanOffset, addr 0x5914b1c, size 0x3c, virtual false, abstract: false, final false
inline void CalibrateLeanOffset() ;

/// [IteratorStateMachine(typeof(GorillaIK::<CalibrateLeanOffsetCoroutine>d__66))]
/// @brief Method CalibrateLeanOffsetCoroutine, addr 0x5914b58, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CalibrateLeanOffsetCoroutine() ;

/// @brief Method CanUpdateIK, addr 0x5913f0c, size 0x10, virtual false, abstract: false, final false
inline bool CanUpdateIK() ;

/// @brief Method CheckPermissions, addr 0x5915038, size 0x108, virtual false, abstract: false, final false
inline void CheckPermissions() ;

/// @brief Method ClearOverrides, addr 0x5914240, size 0xc, virtual false, abstract: false, final false
inline void ClearOverrides() ;

/// @brief Method DelayedUpdateIK, addr 0x5913f1c, size 0x40, virtual false, abstract: false, final false
inline void DelayedUpdateIK(bool  usingIK) ;

/// [IteratorStateMachine(typeof(GorillaIK::<DoDelayedUpdateIK>d__45))]
/// @brief Method DoDelayedUpdateIK, addr 0x5913f5c, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoDelayedUpdateIK(bool  usingIK) ;

/// @brief Method GetShoulderLocalTargetPos_Left, addr 0x5914048, size 0xfc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetShoulderLocalTargetPos_Left(bool  updatedIK) ;

/// @brief Method GetShoulderLocalTargetPos_Right, addr 0x5914144, size 0xfc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetShoulderLocalTargetPos_Right(bool  updatedIK) ;

/// @brief Method LoadLeanOffset, addr 0x5914d20, size 0xf0, virtual false, abstract: false, final false
inline void LoadLeanOffset() ;

static inline ::GlobalNamespace::GorillaIK* New_ctor() ;

/// @brief Method OnDisable, addr 0x5913d18, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5913b4c, size 0xe4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OverrideTargetPos, addr 0x5914014, size 0x34, virtual false, abstract: false, final false
inline void OverrideTargetPos(bool  isLeftHand, ::UnityEngine::Vector3  targetWorldPos) ;

/// @brief Method PermissionGranted, addr 0x5915140, size 0x100, virtual false, abstract: false, final false
inline void PermissionGranted(::StringW  permissionName) ;

/// @brief Method ResetIKData, addr 0x59139f8, size 0x154, virtual false, abstract: false, final false
inline void ResetIKData() ;

/// [ContextMenu("Reset Lean Offset")]
/// @brief Method ResetLeanOffset, addr 0x5914bec, size 0x64, virtual false, abstract: false, final false
inline void ResetLeanOffset() ;

/// @brief Method SaveLeanOffset, addr 0x5914c50, size 0xd0, virtual false, abstract: false, final false
inline void SaveLeanOffset() ;

/// @brief Method SkeletonUpdate, addr 0x591424c, size 0x8d0, virtual false, abstract: false, final false
inline void SkeletonUpdate() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides> const& __cordl_internal_get_anchorOverrides() const;

constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>& __cordl_internal_get_anchorOverrides() ;

constexpr float_t const& __cordl_internal_get_biasDistance() const;

constexpr float_t& __cordl_internal_get_biasDistance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_body() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_body() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bodyBone() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bodyBone() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_bodyInitialRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_bodyInitialRot() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_bodyOffsetRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_bodyOffsetRotation() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_boneXforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_boneXforms() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_calibrateCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_calibrateCoroutine() ;

constexpr bool const& __cordl_internal_get_calibrating() const;

constexpr bool& __cordl_internal_get_calibrating() ;

constexpr bool const& __cordl_internal_get_canUseUpdatedIK() const;

constexpr bool& __cordl_internal_get_canUseUpdatedIK() ;

constexpr bool const& __cordl_internal_get_hasLeftOverride() const;

constexpr bool& __cordl_internal_get_hasLeftOverride() ;

constexpr bool const& __cordl_internal_get_hasRightOverride() const;

constexpr bool& __cordl_internal_get_hasRightOverride() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_headBone() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_headBone() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_initialLowerLeft() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_initialLowerLeft() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_initialLowerRight() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_initialLowerRight() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_initialUpperLeft() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_initialUpperLeft() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_initialUpperRight() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_initialUpperRight() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_leanOffsetRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_leanOffsetRotation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftArmLower() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftArmLower() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftArmUpper() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftArmUpper() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftElbowDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftElbowDirection() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHand() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftLowerArm() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftLowerArm() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftOverrideWorldPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftOverrideWorldPos() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftUpperArm() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftUpperArm() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_lerpBodyRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_lerpBodyRot() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lerpLeftElbowDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lerpLeftElbowDirection() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lerpRightElbowDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lerpRightElbowDirection() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_projectedBodyRotation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_projectedBodyRotation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_projectedLeftShoulderPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_projectedLeftShoulderPosition() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_projectedRightShoulderPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_projectedRightShoulderPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_renderDisplacement() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_renderDisplacement() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightArmLower() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightArmLower() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightArmUpper() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightArmUpper() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightElbowDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightElbowDirection() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHand() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightLowerArm() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightLowerArm() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightOverrideWorldPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightOverrideWorldPos() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightUpperArm() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightUpperArm() ;

constexpr ::UnityW<::GlobalNamespace::OVRSkeleton> const& __cordl_internal_get_skeleton() const;

constexpr ::UnityW<::GlobalNamespace::OVRSkeleton>& __cordl_internal_get_skeleton() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_targetBodyRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_targetBodyRot() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_targetHead() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_targetHead() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_targetLeft() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_targetLeft() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_targetRight() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_targetRight() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_useUpdatedIKCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_useUpdatedIKCoroutine() ;

constexpr bool const& __cordl_internal_get_usingUpdatedIK() const;

constexpr bool& __cordl_internal_get_usingUpdatedIK() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_anchorOverrides(::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  value) ;

constexpr void __cordl_internal_set_biasDistance(float_t  value) ;

constexpr void __cordl_internal_set_body(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_bodyBone(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_bodyInitialRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_bodyOffsetRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_boneXforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_calibrateCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_calibrating(bool  value) ;

constexpr void __cordl_internal_set_canUseUpdatedIK(bool  value) ;

constexpr void __cordl_internal_set_hasLeftOverride(bool  value) ;

constexpr void __cordl_internal_set_hasRightOverride(bool  value) ;

constexpr void __cordl_internal_set_headBone(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_initialLowerLeft(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_initialLowerRight(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_initialUpperLeft(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_initialUpperRight(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_leanOffsetRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_leftArmLower(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_leftArmUpper(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_leftElbowDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_leftHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_leftLowerArm(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_leftOverrideWorldPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_leftUpperArm(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lerpBodyRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_lerpLeftElbowDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lerpRightElbowDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_projectedBodyRotation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_projectedLeftShoulderPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_projectedRightShoulderPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_renderDisplacement(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rightArmLower(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightArmUpper(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightElbowDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rightHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightLowerArm(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightOverrideWorldPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rightUpperArm(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_skeleton(::UnityW<::GlobalNamespace::OVRSkeleton>  value) ;

constexpr void __cordl_internal_set_targetBodyRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_targetHead(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_targetLeft(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_targetRight(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_useUpdatedIKCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_usingUpdatedIK(bool  value) ;

/// @brief Method .ctor, addr 0x5915240, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::GorillaIK> getStaticF_playerIK() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5914004, size 0x8, virtual false, abstract: false, final false
inline bool get_TickRunning() ;

static inline void setStaticF_playerIK(::UnityW<::GlobalNamespace::GorillaIK>  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x591400c, size 0x8, virtual false, abstract: false, final false
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaIK() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaIK", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaIK(GorillaIK && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaIK", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaIK(GorillaIK const& ) = delete;

/// @brief Field LeanOffsetSavePrefsKey offset 0xffffffff size 0x8
static constexpr ::ConstString  LeanOffsetSavePrefsKey{u"_GorillaIKLeanOffset"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2185};

/// @brief Field headBone, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___headBone;

/// @brief Field bodyBone, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___bodyBone;

/// @brief Field leftUpperArm, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftUpperArm;

/// @brief Field leftLowerArm, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftLowerArm;

/// @brief Field leftHand, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftHand;

/// @brief Field rightUpperArm, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightUpperArm;

/// @brief Field rightLowerArm, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightLowerArm;

/// @brief Field rightHand, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightHand;

/// @brief Field targetLeft, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___targetLeft;

/// @brief Field targetRight, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___targetRight;

/// @brief Field targetHead, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___targetHead;

/// @brief Field initialUpperLeft, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___initialUpperLeft;

/// @brief Field initialLowerLeft, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___initialLowerLeft;

/// @brief Field initialUpperRight, offset: 0x98, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___initialUpperRight;

/// @brief Field initialLowerRight, offset: 0xa8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___initialLowerRight;

/// @brief Field targetBodyRot, offset: 0xb8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___targetBodyRot;

/// @brief Field lerpBodyRot, offset: 0xc8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___lerpBodyRot;

/// @brief Field leftElbowDirection, offset: 0xd8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___leftElbowDirection;

/// @brief Field lerpLeftElbowDirection, offset: 0xe4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lerpLeftElbowDirection;

/// @brief Field rightElbowDirection, offset: 0xf0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rightElbowDirection;

/// @brief Field lerpRightElbowDirection, offset: 0xfc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lerpRightElbowDirection;

/// @brief Field usingUpdatedIK, offset: 0x108, size: 0x1, def value: None
 bool  ___usingUpdatedIK;

/// @brief Field canUseUpdatedIK, offset: 0x109, size: 0x1, def value: None
 bool  ___canUseUpdatedIK;

/// @brief Field useUpdatedIKCoroutine, offset: 0x110, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___useUpdatedIKCoroutine;

/// @brief Field bodyOffsetRotation, offset: 0x118, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___bodyOffsetRotation;

/// @brief Field leanOffsetRotation, offset: 0x128, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___leanOffsetRotation;

/// @brief Field skeleton, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSkeleton>  ___skeleton;

/// @brief Field boneXforms, offset: 0x140, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___boneXforms;

/// @brief Field bodyInitialRot, offset: 0x148, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___bodyInitialRot;

/// @brief Field projectedBodyRotation, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___projectedBodyRotation;

/// @brief Field projectedLeftShoulderPosition, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___projectedLeftShoulderPosition;

/// @brief Field projectedRightShoulderPosition, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___projectedRightShoulderPosition;

/// @brief Field myRig, offset: 0x170, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field biasDistance, offset: 0x178, size: 0x4, def value: None
 float_t  ___biasDistance;

/// @brief Field anchorOverrides, offset: 0x180, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  ___anchorOverrides;

/// @brief Field calibrateCoroutine, offset: 0x188, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___calibrateCoroutine;

/// @brief Field calibrating, offset: 0x190, size: 0x1, def value: None
 bool  ___calibrating;

/// @brief Field hasLeftOverride, offset: 0x191, size: 0x1, def value: None
 bool  ___hasLeftOverride;

/// @brief Field leftOverrideWorldPos, offset: 0x194, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___leftOverrideWorldPos;

/// @brief Field hasRightOverride, offset: 0x1a0, size: 0x1, def value: None
 bool  ___hasRightOverride;

/// @brief Field rightOverrideWorldPos, offset: 0x1a4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rightOverrideWorldPos;

/// @brief Field renderDisplacement, offset: 0x1b0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___renderDisplacement;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x1bc, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// @brief Field body, offset: 0x1c0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___body;

/// @brief Field leftArmUpper, offset: 0x1c8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftArmUpper;

/// @brief Field leftArmLower, offset: 0x1d0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftArmLower;

/// @brief Field rightArmUpper, offset: 0x1d8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightArmUpper;

/// @brief Field rightArmLower, offset: 0x1e0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightArmLower;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaIK, ___headBone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___bodyBone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___leftUpperArm) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___leftLowerArm) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___leftHand) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___rightUpperArm) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___rightLowerArm) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___rightHand) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___targetLeft) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___targetRight) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___targetHead) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___initialUpperLeft) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___initialLowerLeft) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___initialUpperRight) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___initialLowerRight) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___targetBodyRot) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___lerpBodyRot) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___leftElbowDirection) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___lerpLeftElbowDirection) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___rightElbowDirection) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___lerpRightElbowDirection) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___usingUpdatedIK) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___canUseUpdatedIK) == 0x109, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___useUpdatedIKCoroutine) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___bodyOffsetRotation) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___leanOffsetRotation) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___skeleton) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___boneXforms) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___bodyInitialRot) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___projectedBodyRotation) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___projectedLeftShoulderPosition) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___projectedRightShoulderPosition) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___myRig) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___biasDistance) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___anchorOverrides) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___calibrateCoroutine) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___calibrating) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___hasLeftOverride) == 0x191, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___leftOverrideWorldPos) == 0x194, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___hasRightOverride) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___rightOverrideWorldPos) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___renderDisplacement) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ____TickRunning_k__BackingField) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___body) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___leftArmUpper) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___leftArmLower) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___rightArmUpper) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK, ___rightArmLower) == 0x1e0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaIK) == 0x1e8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaIK/<DoDelayedUpdateIK>d__45
class CORDL_TYPE GorillaIK__DoDelayedUpdateIK_d__45 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaIK>  __4__this;

/// @brief Field usingIK, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_usingIK, put=__cordl_internal_set_usingIK)) bool  usingIK;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x591567c, size 0x118, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5915794, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x591579c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59157d4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5915678, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaIK> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaIK>& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get_usingIK() const;

constexpr bool& __cordl_internal_get_usingIK() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaIK>  value) ;

constexpr void __cordl_internal_set_usingIK(bool  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5913fdc, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaIK__DoDelayedUpdateIK_d__45() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaIK__DoDelayedUpdateIK_d__45", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaIK__DoDelayedUpdateIK_d__45(GorillaIK__DoDelayedUpdateIK_d__45 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaIK__DoDelayedUpdateIK_d__45", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaIK__DoDelayedUpdateIK_d__45(GorillaIK__DoDelayedUpdateIK_d__45 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2184};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaIK>  _____4__this;

/// @brief Field usingIK, offset: 0x28, size: 0x1, def value: None
 bool  ___usingIK;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45, ___usingIK) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaIK__DoDelayedUpdateIK_d__45) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaIK/<CalibrateLeanOffsetCoroutine>d__66
class CORDL_TYPE GorillaIK__CalibrateLeanOffsetCoroutine_d__66 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaIK>  __4__this;

/// @brief Field <maxTries>5__3, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxTries_5__3, put=__cordl_internal_set__maxTries_5__3)) int32_t  _maxTries_5__3;

/// @brief Field <tries>5__4, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__tries_5__4, put=__cordl_internal_set__tries_5__4)) int32_t  _tries_5__4;

/// @brief Field <vecs>5__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__vecs_5__2, put=__cordl_internal_set__vecs_5__2)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  _vecs_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59152ac, size 0x384, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5915630, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5915638, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5915670, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59152a8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaIK> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaIK>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__maxTries_5__3() const;

constexpr int32_t& __cordl_internal_get__maxTries_5__3() ;

constexpr int32_t const& __cordl_internal_get__tries_5__4() const;

constexpr int32_t& __cordl_internal_get__tries_5__4() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get__vecs_5__2() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get__vecs_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaIK>  value) ;

constexpr void __cordl_internal_set__maxTries_5__3(int32_t  value) ;

constexpr void __cordl_internal_set__tries_5__4(int32_t  value) ;

constexpr void __cordl_internal_set__vecs_5__2(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5914bc4, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaIK__CalibrateLeanOffsetCoroutine_d__66() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaIK__CalibrateLeanOffsetCoroutine_d__66", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaIK__CalibrateLeanOffsetCoroutine_d__66(GorillaIK__CalibrateLeanOffsetCoroutine_d__66 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaIK__CalibrateLeanOffsetCoroutine_d__66", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaIK__CalibrateLeanOffsetCoroutine_d__66(GorillaIK__CalibrateLeanOffsetCoroutine_d__66 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2183};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaIK>  _____4__this;

/// @brief Field <vecs>5__2, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ____vecs_5__2;

/// @brief Field <maxTries>5__3, offset: 0x30, size: 0x4, def value: None
 int32_t  ____maxTries_5__3;

/// @brief Field <tries>5__4, offset: 0x34, size: 0x4, def value: None
 int32_t  ____tries_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66, ____vecs_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66, ____maxTries_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66, ____tries_5__4) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaIK__CalibrateLeanOffsetCoroutine_d__66) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
