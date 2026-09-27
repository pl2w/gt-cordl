#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/SyntheticHand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__Hand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__JointFreedom_def.hpp"
#include "Oculus/Interaction/zzzz__ProgressCurve_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SyntheticHand)
namespace GlobalNamespace {
template<typename TData>
struct DataSource_1_UpdateModeFlags;
}
namespace GlobalNamespace {
struct SyntheticHand_WristLockMode;
}
namespace Oculus::Interaction::Input {
template<typename TData>
class DataModifier_1;
}
namespace Oculus::Interaction::Input {
class HandDataAsset;
}
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
class IDataSource;
}
namespace Oculus::Interaction::Input {
struct JointFreedom;
}
namespace Oculus::Interaction::Input {
class SyntheticHand___c;
}
namespace Oculus::Interaction {
class ProgressCurve;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class SyntheticHand;
}
namespace Oculus::Interaction::Input {
class SyntheticHand___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::SyntheticHand*);
MARK_REF_T(::Oculus::Interaction::Input::SyntheticHand___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::SyntheticHand*, "Oculus.Interaction.Input", "SyntheticHand");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::SyntheticHand___c*, "Oculus.Interaction.Input", "SyntheticHand/<>c");
// Dependencies Oculus.Interaction.Input.Hand, Oculus.Interaction.Input.JointFreedom, Oculus.Interaction.ProgressCurve, UnityEngine.Pose, UnityEngine.Quaternion
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.SyntheticHand
class CORDL_TYPE SyntheticHand : public ::Oculus::Interaction::Input::Hand {
public:
// Declarations
using WristLockMode = ::GlobalNamespace::SyntheticHand_WristLockMode;

using __c = ::Oculus::Interaction::Input::SyntheticHand___c;

/// @brief Field UpdateRequired, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_UpdateRequired, put=__cordl_internal_set_UpdateRequired)) ::System::Action*  UpdateRequired;

/// @brief Field _constrainedJointRotations, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__constrainedJointRotations, put=__cordl_internal_set__constrainedJointRotations)) ::ArrayW<::UnityEngine::Quaternion>  _constrainedJointRotations;

/// @brief Field _constrainedWristPose, offset 0x108, size 0x1c 
 __declspec(property(get=__cordl_internal_get__constrainedWristPose, put=__cordl_internal_set__constrainedWristPose)) ::UnityEngine::Pose  _constrainedWristPose;

/// @brief Field _desiredJointsRotation, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__desiredJointsRotation, put=__cordl_internal_set__desiredJointsRotation)) ::ArrayW<::UnityEngine::Quaternion>  _desiredJointsRotation;

/// @brief Field _desiredWristPose, offset 0xe8, size 0x1c 
 __declspec(property(get=__cordl_internal_get__desiredWristPose, put=__cordl_internal_set__desiredWristPose)) ::UnityEngine::Pose  _desiredWristPose;

/// @brief Field _hasConnectedData, offset 0x160, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasConnectedData, put=__cordl_internal_set__hasConnectedData)) bool  _hasConnectedData;

/// @brief Field _jointLockCurve, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointLockCurve, put=__cordl_internal_set__jointLockCurve)) ::Oculus::Interaction::ProgressCurve*  _jointLockCurve;

/// @brief Field _jointLockProgressCurves, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointLockProgressCurves, put=__cordl_internal_set__jointLockProgressCurves)) ::ArrayW<::Oculus::Interaction::ProgressCurve*>  _jointLockProgressCurves;

/// @brief Field _jointUnlockCurve, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointUnlockCurve, put=__cordl_internal_set__jointUnlockCurve)) ::Oculus::Interaction::ProgressCurve*  _jointUnlockCurve;

/// @brief Field _jointUnlockProgressCurves, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointUnlockProgressCurves, put=__cordl_internal_set__jointUnlockProgressCurves)) ::ArrayW<::Oculus::Interaction::ProgressCurve*>  _jointUnlockProgressCurves;

/// @brief Field _jointsFreedomLevels, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointsFreedomLevels, put=__cordl_internal_set__jointsFreedomLevels)) ::ArrayW<::Oculus::Interaction::Input::JointFreedom>  _jointsFreedomLevels;

/// @brief Field _jointsOverrideFactor, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointsOverrideFactor, put=__cordl_internal_set__jointsOverrideFactor)) ::ArrayW<float_t>  _jointsOverrideFactor;

/// @brief Field _lastStates, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastStates, put=__cordl_internal_set__lastStates)) ::Oculus::Interaction::Input::HandDataAsset*  _lastStates;

/// @brief Field _lastSyntheticRotation, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastSyntheticRotation, put=__cordl_internal_set__lastSyntheticRotation)) ::ArrayW<::UnityEngine::Quaternion>  _lastSyntheticRotation;

/// @brief Field _lastWristPose, offset 0x124, size 0x1c 
 __declspec(property(get=__cordl_internal_get__lastWristPose, put=__cordl_internal_set__lastWristPose)) ::UnityEngine::Pose  _lastWristPose;

/// @brief Field _spreadAllowance, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__spreadAllowance, put=__cordl_internal_set__spreadAllowance)) float_t  _spreadAllowance;

/// @brief Field _wristPositionLockCurve, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__wristPositionLockCurve, put=__cordl_internal_set__wristPositionLockCurve)) ::Oculus::Interaction::ProgressCurve*  _wristPositionLockCurve;

/// @brief Field _wristPositionLocked, offset 0x104, size 0x1 
 __declspec(property(get=__cordl_internal_get__wristPositionLocked, put=__cordl_internal_set__wristPositionLocked)) bool  _wristPositionLocked;

/// @brief Field _wristPositionOverrideFactor, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get__wristPositionOverrideFactor, put=__cordl_internal_set__wristPositionOverrideFactor)) float_t  _wristPositionOverrideFactor;

/// @brief Field _wristPositionUnlockCurve, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__wristPositionUnlockCurve, put=__cordl_internal_set__wristPositionUnlockCurve)) ::Oculus::Interaction::ProgressCurve*  _wristPositionUnlockCurve;

/// @brief Field _wristRotationLockCurve, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__wristRotationLockCurve, put=__cordl_internal_set__wristRotationLockCurve)) ::Oculus::Interaction::ProgressCurve*  _wristRotationLockCurve;

/// @brief Field _wristRotationLocked, offset 0x105, size 0x1 
 __declspec(property(get=__cordl_internal_get__wristRotationLocked, put=__cordl_internal_set__wristRotationLocked)) bool  _wristRotationLocked;

/// @brief Field _wristRotationOverrideFactor, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get__wristRotationOverrideFactor, put=__cordl_internal_set__wristRotationOverrideFactor)) float_t  _wristRotationOverrideFactor;

/// @brief Field _wristRotationUnlockCurve, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__wristRotationUnlockCurve, put=__cordl_internal_set__wristRotationUnlockCurve)) ::Oculus::Interaction::ProgressCurve*  _wristRotationUnlockCurve;

/// @brief Method AmendMetacarpalRotation, addr 0xa509510, size 0x1c0, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion AmendMetacarpalRotation(int32_t  jointIndex, /* [IsReadOnly] */ ::by_ref<::ArrayW<::UnityEngine::Quaternion>>  sourceRotations) ;

/// @brief Method Apply, addr 0xa508ac0, size 0xec, virtual true, abstract: false, final false
inline void Apply(::Oculus::Interaction::Input::HandDataAsset*  data) ;

/// @brief Method FreeAllJoints, addr 0xa50a0dc, size 0xa0, virtual false, abstract: false, final false
inline void FreeAllJoints() ;

/// @brief Method FreeWrist, addr 0xa50a4dc, size 0x88, virtual false, abstract: false, final false
inline void FreeWrist(::GlobalNamespace::SyntheticHand_WristLockMode  lockMode) ;

/// @brief Method GetJointFreedom, addr 0xa50a050, size 0x8c, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::JointFreedom GetJointFreedom(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::HandJointId>  jointId) ;

/// @brief Method InjectAllSyntheticHandModifier, addr 0xa50a564, size 0xb0, virtual false, abstract: false, final false
inline void InjectAllSyntheticHandModifier(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HandDataAsset*>*  modifyDataFromSource, bool  applyModifier, ::Oculus::Interaction::ProgressCurve*  wristPositionLockCurve, ::Oculus::Interaction::ProgressCurve*  wristPositionUnlockCurve, ::Oculus::Interaction::ProgressCurve*  wristRotationLockCurve, ::Oculus::Interaction::ProgressCurve*  wristRotationUnlockCurve, ::Oculus::Interaction::ProgressCurve*  jointLockCurve, ::Oculus::Interaction::ProgressCurve*  jointUnlockCurve, float_t  spreadAllowance) ;

/// @brief Method InjectJointLockCurve, addr 0xa50a634, size 0x8, virtual false, abstract: false, final false
inline void InjectJointLockCurve(::Oculus::Interaction::ProgressCurve*  jointLockCurve) ;

/// @brief Method InjectJointUnlockCurve, addr 0xa50a63c, size 0x8, virtual false, abstract: false, final false
inline void InjectJointUnlockCurve(::Oculus::Interaction::ProgressCurve*  jointUnlockCurve) ;

/// @brief Method InjectSpreadAllowance, addr 0xa50a644, size 0x8, virtual false, abstract: false, final false
inline void InjectSpreadAllowance(float_t  spreadAllowance) ;

/// @brief Method InjectWristPositionLockCurve, addr 0xa50a614, size 0x8, virtual false, abstract: false, final false
inline void InjectWristPositionLockCurve(::Oculus::Interaction::ProgressCurve*  wristPositionLockCurve) ;

/// @brief Method InjectWristPositionUnlockCurve, addr 0xa50a61c, size 0x8, virtual false, abstract: false, final false
inline void InjectWristPositionUnlockCurve(::Oculus::Interaction::ProgressCurve*  wristPositionUnlockCurve) ;

/// @brief Method InjectWristRotationLockCurve, addr 0xa50a624, size 0x8, virtual false, abstract: false, final false
inline void InjectWristRotationLockCurve(::Oculus::Interaction::ProgressCurve*  wristRotationLockCurve) ;

/// @brief Method InjectWristRotationUnlockCurve, addr 0xa50a62c, size 0x8, virtual false, abstract: false, final false
inline void InjectWristRotationUnlockCurve(::Oculus::Interaction::ProgressCurve*  wristRotationUnlockCurve) ;

/// @brief Method LockFingerAtCurrent, addr 0xa509b78, size 0x178, virtual false, abstract: false, final false
inline void LockFingerAtCurrent(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::HandFinger>  finger) ;

/// @brief Method LockJoint, addr 0xa509dd4, size 0xf4, virtual false, abstract: false, final false
inline void LockJoint(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::HandJointId>  jointId, ::UnityEngine::Quaternion  rotation, float_t  overrideFactor) ;

/// @brief Method LockWristPose, addr 0xa50a1b4, size 0x1a8, virtual false, abstract: false, final false
inline void LockWristPose(::UnityEngine::Pose  wristPose, float_t  overrideFactor, ::GlobalNamespace::SyntheticHand_WristLockMode  lockMode, bool  worldPose, bool  skipAnimation) ;

/// @brief Method LockWristPosition, addr 0xa50a3bc, size 0x5c, virtual false, abstract: false, final false
inline void LockWristPosition(::UnityEngine::Vector3  position, float_t  overrideFactor, bool  skipAnimation) ;

/// @brief Method LockWristRotation, addr 0xa50a418, size 0x54, virtual false, abstract: false, final false
inline void LockWristRotation(::UnityEngine::Quaternion  rotation, float_t  overrideFactor, bool  skipAnimation) ;

static inline ::Oculus::Interaction::Input::SyntheticHand* New_ctor() ;

/// @brief Method OverFlex, addr 0xa5096d0, size 0x13c, virtual false, abstract: false, final false
static inline float_t OverFlex(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  desiredLocalRot, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  maxLocalRot) ;

/// @brief Method OverrideAllJoints, addr 0xa50980c, size 0xec, virtual false, abstract: false, final false
inline void OverrideAllJoints(/* [IsReadOnly] */ ::by_ref<::ArrayW<::UnityEngine::Quaternion>>  jointRotations, float_t  overrideFactor) ;

/// @brief Method OverrideFingerRotations, addr 0xa5098f8, size 0x104, virtual false, abstract: false, final false
inline void OverrideFingerRotations(::Oculus::Interaction::Input::HandFinger  finger, ::ArrayW<::UnityEngine::Quaternion>  rotations, float_t  overrideFactor) ;

/// @brief Method OverrideJointRotation, addr 0xa509a50, size 0xac, virtual false, abstract: false, final false
inline void OverrideJointRotation(::Oculus::Interaction::Input::HandJointId  jointId, ::UnityEngine::Quaternion  rotation, float_t  overrideFactor) ;

/// @brief Method OverrideJointRotationAtIndex, addr 0xa5099fc, size 0x54, virtual false, abstract: false, final false
inline void OverrideJointRotationAtIndex(int32_t  jointIndex, ::UnityEngine::Quaternion  rotation, float_t  overrideFactor) ;

/// @brief Method SetFingerFreedom, addr 0xa509cf0, size 0xe4, virtual false, abstract: false, final false
inline void SetFingerFreedom(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::HandFinger>  finger, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::JointFreedom>  freedomLevel, bool  skipAnimation) ;

/// @brief Method SetJointFreedom, addr 0xa509fc8, size 0x88, virtual false, abstract: false, final false
inline void SetJointFreedom(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::HandJointId>  jointId, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::JointFreedom>  freedomLevel, bool  skipAnimation) ;

/// @brief Method SetJointFreedomAtIndex, addr 0xa509ec8, size 0x100, virtual false, abstract: false, final false
inline void SetJointFreedomAtIndex(int32_t  jointId, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::JointFreedom>  freedomLevel, bool  skipAnimation) ;

/// @brief Method Start, addr 0xa5088fc, size 0x1c4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method SyncDataPoses, addr 0xa509364, size 0x1ac, virtual false, abstract: false, final false
inline void SyncDataPoses(::Oculus::Interaction::Input::HandDataAsset*  data) ;

/// @brief Method SyntheticWristLockChangedState, addr 0xa50a46c, size 0x70, virtual false, abstract: false, final false
inline void SyntheticWristLockChangedState(::GlobalNamespace::SyntheticHand_WristLockMode  lockMode, bool  skipAnimation) ;

/// @brief Method UpdateJointsRotation, addr 0xa508bac, size 0x658, virtual false, abstract: false, final false
inline void UpdateJointsRotation(::Oculus::Interaction::Input::HandDataAsset*  data) ;

/// @brief Method UpdateProgressCurve, addr 0xa50a17c, size 0x38, virtual false, abstract: false, final false
static inline void UpdateProgressCurve(::by_ref<::Oculus::Interaction::ProgressCurve*>  lockProgress, ::by_ref<::Oculus::Interaction::ProgressCurve*>  unlockProgress, bool  locked, bool  skipAnimation) ;

/// @brief Method UpdateRootPose, addr 0xa509204, size 0x160, virtual false, abstract: false, final false
inline void UpdateRootPose(::by_ref<::UnityEngine::Pose>  root) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__25_0, addr 0xa50a94c, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__25_0() ;

constexpr ::System::Action* const& __cordl_internal_get_UpdateRequired() const;

constexpr ::System::Action*& __cordl_internal_get_UpdateRequired() ;

constexpr ::ArrayW<::UnityEngine::Quaternion> const& __cordl_internal_get__constrainedJointRotations() const;

constexpr ::ArrayW<::UnityEngine::Quaternion>& __cordl_internal_get__constrainedJointRotations() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__constrainedWristPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__constrainedWristPose() ;

constexpr ::ArrayW<::UnityEngine::Quaternion> const& __cordl_internal_get__desiredJointsRotation() const;

constexpr ::ArrayW<::UnityEngine::Quaternion>& __cordl_internal_get__desiredJointsRotation() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__desiredWristPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__desiredWristPose() ;

constexpr bool const& __cordl_internal_get__hasConnectedData() const;

constexpr bool& __cordl_internal_get__hasConnectedData() ;

constexpr ::Oculus::Interaction::ProgressCurve* const& __cordl_internal_get__jointLockCurve() const;

constexpr ::Oculus::Interaction::ProgressCurve*& __cordl_internal_get__jointLockCurve() ;

constexpr ::ArrayW<::Oculus::Interaction::ProgressCurve*> const& __cordl_internal_get__jointLockProgressCurves() const;

constexpr ::ArrayW<::Oculus::Interaction::ProgressCurve*>& __cordl_internal_get__jointLockProgressCurves() ;

constexpr ::Oculus::Interaction::ProgressCurve* const& __cordl_internal_get__jointUnlockCurve() const;

constexpr ::Oculus::Interaction::ProgressCurve*& __cordl_internal_get__jointUnlockCurve() ;

constexpr ::ArrayW<::Oculus::Interaction::ProgressCurve*> const& __cordl_internal_get__jointUnlockProgressCurves() const;

constexpr ::ArrayW<::Oculus::Interaction::ProgressCurve*>& __cordl_internal_get__jointUnlockProgressCurves() ;

constexpr ::ArrayW<::Oculus::Interaction::Input::JointFreedom> const& __cordl_internal_get__jointsFreedomLevels() const;

constexpr ::ArrayW<::Oculus::Interaction::Input::JointFreedom>& __cordl_internal_get__jointsFreedomLevels() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__jointsOverrideFactor() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__jointsOverrideFactor() ;

constexpr ::Oculus::Interaction::Input::HandDataAsset* const& __cordl_internal_get__lastStates() const;

constexpr ::Oculus::Interaction::Input::HandDataAsset*& __cordl_internal_get__lastStates() ;

constexpr ::ArrayW<::UnityEngine::Quaternion> const& __cordl_internal_get__lastSyntheticRotation() const;

constexpr ::ArrayW<::UnityEngine::Quaternion>& __cordl_internal_get__lastSyntheticRotation() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__lastWristPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__lastWristPose() ;

constexpr float_t const& __cordl_internal_get__spreadAllowance() const;

constexpr float_t& __cordl_internal_get__spreadAllowance() ;

constexpr ::Oculus::Interaction::ProgressCurve* const& __cordl_internal_get__wristPositionLockCurve() const;

constexpr ::Oculus::Interaction::ProgressCurve*& __cordl_internal_get__wristPositionLockCurve() ;

constexpr bool const& __cordl_internal_get__wristPositionLocked() const;

constexpr bool& __cordl_internal_get__wristPositionLocked() ;

constexpr float_t const& __cordl_internal_get__wristPositionOverrideFactor() const;

constexpr float_t& __cordl_internal_get__wristPositionOverrideFactor() ;

constexpr ::Oculus::Interaction::ProgressCurve* const& __cordl_internal_get__wristPositionUnlockCurve() const;

constexpr ::Oculus::Interaction::ProgressCurve*& __cordl_internal_get__wristPositionUnlockCurve() ;

constexpr ::Oculus::Interaction::ProgressCurve* const& __cordl_internal_get__wristRotationLockCurve() const;

constexpr ::Oculus::Interaction::ProgressCurve*& __cordl_internal_get__wristRotationLockCurve() ;

constexpr bool const& __cordl_internal_get__wristRotationLocked() const;

constexpr bool& __cordl_internal_get__wristRotationLocked() ;

constexpr float_t const& __cordl_internal_get__wristRotationOverrideFactor() const;

constexpr float_t& __cordl_internal_get__wristRotationOverrideFactor() ;

constexpr ::Oculus::Interaction::ProgressCurve* const& __cordl_internal_get__wristRotationUnlockCurve() const;

constexpr ::Oculus::Interaction::ProgressCurve*& __cordl_internal_get__wristRotationUnlockCurve() ;

constexpr void __cordl_internal_set_UpdateRequired(::System::Action*  value) ;

constexpr void __cordl_internal_set__constrainedJointRotations(::ArrayW<::UnityEngine::Quaternion>  value) ;

constexpr void __cordl_internal_set__constrainedWristPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__desiredJointsRotation(::ArrayW<::UnityEngine::Quaternion>  value) ;

constexpr void __cordl_internal_set__desiredWristPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__hasConnectedData(bool  value) ;

constexpr void __cordl_internal_set__jointLockCurve(::Oculus::Interaction::ProgressCurve*  value) ;

constexpr void __cordl_internal_set__jointLockProgressCurves(::ArrayW<::Oculus::Interaction::ProgressCurve*>  value) ;

constexpr void __cordl_internal_set__jointUnlockCurve(::Oculus::Interaction::ProgressCurve*  value) ;

constexpr void __cordl_internal_set__jointUnlockProgressCurves(::ArrayW<::Oculus::Interaction::ProgressCurve*>  value) ;

constexpr void __cordl_internal_set__jointsFreedomLevels(::ArrayW<::Oculus::Interaction::Input::JointFreedom>  value) ;

constexpr void __cordl_internal_set__jointsOverrideFactor(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__lastStates(::Oculus::Interaction::Input::HandDataAsset*  value) ;

constexpr void __cordl_internal_set__lastSyntheticRotation(::ArrayW<::UnityEngine::Quaternion>  value) ;

constexpr void __cordl_internal_set__lastWristPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__spreadAllowance(float_t  value) ;

constexpr void __cordl_internal_set__wristPositionLockCurve(::Oculus::Interaction::ProgressCurve*  value) ;

constexpr void __cordl_internal_set__wristPositionLocked(bool  value) ;

constexpr void __cordl_internal_set__wristPositionOverrideFactor(float_t  value) ;

constexpr void __cordl_internal_set__wristPositionUnlockCurve(::Oculus::Interaction::ProgressCurve*  value) ;

constexpr void __cordl_internal_set__wristRotationLockCurve(::Oculus::Interaction::ProgressCurve*  value) ;

constexpr void __cordl_internal_set__wristRotationLocked(bool  value) ;

constexpr void __cordl_internal_set__wristRotationOverrideFactor(float_t  value) ;

constexpr void __cordl_internal_set__wristRotationUnlockCurve(::Oculus::Interaction::ProgressCurve*  value) ;

/// @brief Method .ctor, addr 0xa50a64c, size 0x300, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyntheticHand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyntheticHand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SyntheticHand(SyntheticHand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyntheticHand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyntheticHand(SyntheticHand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16479};

/// [SerializeField]
/// @brief Field _wristPositionLockCurve, offset: 0x80, size: 0x8, def value: None
 ::Oculus::Interaction::ProgressCurve*  ____wristPositionLockCurve;

/// [SerializeField]
/// @brief Field _wristPositionUnlockCurve, offset: 0x88, size: 0x8, def value: None
 ::Oculus::Interaction::ProgressCurve*  ____wristPositionUnlockCurve;

/// [SerializeField]
/// @brief Field _wristRotationLockCurve, offset: 0x90, size: 0x8, def value: None
 ::Oculus::Interaction::ProgressCurve*  ____wristRotationLockCurve;

/// [SerializeField]
/// @brief Field _wristRotationUnlockCurve, offset: 0x98, size: 0x8, def value: None
 ::Oculus::Interaction::ProgressCurve*  ____wristRotationUnlockCurve;

/// [SerializeField]
/// @brief Field _jointLockCurve, offset: 0xa0, size: 0x8, def value: None
 ::Oculus::Interaction::ProgressCurve*  ____jointLockCurve;

/// [SerializeField]
/// @brief Field _jointUnlockCurve, offset: 0xa8, size: 0x8, def value: None
 ::Oculus::Interaction::ProgressCurve*  ____jointUnlockCurve;

/// [SerializeField]
/// [Tooltip("Use this factor to control how much the fingers can spread when nearby a constrained pose.")]
/// @brief Field _spreadAllowance, offset: 0xb0, size: 0x4, def value: None
 float_t  ____spreadAllowance;

/// @brief Field UpdateRequired, offset: 0xb8, size: 0x8, def value: None
 ::System::Action*  ___UpdateRequired;

/// @brief Field _lastStates, offset: 0xc0, size: 0x8, def value: None
 ::Oculus::Interaction::Input::HandDataAsset*  ____lastStates;

/// @brief Field _wristPositionOverrideFactor, offset: 0xc8, size: 0x4, def value: None
 float_t  ____wristPositionOverrideFactor;

/// @brief Field _wristRotationOverrideFactor, offset: 0xcc, size: 0x4, def value: None
 float_t  ____wristRotationOverrideFactor;

/// @brief Field _jointsOverrideFactor, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<float_t>  ____jointsOverrideFactor;

/// @brief Field _jointLockProgressCurves, offset: 0xd8, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::ProgressCurve*>  ____jointLockProgressCurves;

/// @brief Field _jointUnlockProgressCurves, offset: 0xe0, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::ProgressCurve*>  ____jointUnlockProgressCurves;

/// @brief Field _desiredWristPose, offset: 0xe8, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____desiredWristPose;

/// @brief Field _wristPositionLocked, offset: 0x104, size: 0x1, def value: None
 bool  ____wristPositionLocked;

/// @brief Field _wristRotationLocked, offset: 0x105, size: 0x1, def value: None
 bool  ____wristRotationLocked;

/// @brief Field _constrainedWristPose, offset: 0x108, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____constrainedWristPose;

/// @brief Field _lastWristPose, offset: 0x124, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____lastWristPose;

/// @brief Field _desiredJointsRotation, offset: 0x140, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Quaternion>  ____desiredJointsRotation;

/// @brief Field _constrainedJointRotations, offset: 0x148, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Quaternion>  ____constrainedJointRotations;

/// @brief Field _lastSyntheticRotation, offset: 0x150, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Quaternion>  ____lastSyntheticRotation;

/// @brief Field _jointsFreedomLevels, offset: 0x158, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::Input::JointFreedom>  ____jointsFreedomLevels;

/// @brief Field _hasConnectedData, offset: 0x160, size: 0x1, def value: None
 bool  ____hasConnectedData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____wristPositionLockCurve) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____wristPositionUnlockCurve) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____wristRotationLockCurve) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____wristRotationUnlockCurve) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____jointLockCurve) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____jointUnlockCurve) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____spreadAllowance) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ___UpdateRequired) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____lastStates) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____wristPositionOverrideFactor) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____wristRotationOverrideFactor) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____jointsOverrideFactor) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____jointLockProgressCurves) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____jointUnlockProgressCurves) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____desiredWristPose) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____wristPositionLocked) == 0x104, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____wristRotationLocked) == 0x105, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____constrainedWristPose) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____lastWristPose) == 0x124, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____desiredJointsRotation) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____constrainedJointRotations) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____lastSyntheticRotation) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____jointsFreedomLevels) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticHand, ____hasConnectedData) == 0x160, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::SyntheticHand) == 0x168, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.SyntheticHand/<>c
class CORDL_TYPE SyntheticHand___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Input::SyntheticHand___c*  __9;

/// @brief Field <>9__57_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__57_0, put=setStaticF___9__57_0)) ::System::Action*  __9__57_0;

static inline ::Oculus::Interaction::Input::SyntheticHand___c* New_ctor() ;

/// @brief Method <.ctor>b__57_0, addr 0xa50aa04, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__57_0() ;

/// @brief Method .ctor, addr 0xa50a9fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Input::SyntheticHand___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__57_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Input::SyntheticHand___c*  value) ;

static inline void setStaticF___9__57_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyntheticHand___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyntheticHand___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SyntheticHand___c(SyntheticHand___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyntheticHand___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyntheticHand___c(SyntheticHand___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16478};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Input::SyntheticHand___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
