#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/RCPlane.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__RCVehicle_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RCPlane)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class RCPlane;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::RCPlane*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::RCPlane*, "GorillaTag.Cosmetics", "RCPlane");
// Dependencies GorillaTag.Cosmetics.RCVehicle, UnityEngine.Vector2
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.RCPlane
class CORDL_TYPE RCPlane : public ::GorillaTag::Cosmetics::RCVehicle {
public:
// Declarations
/// @brief Field aileronAngularAcc, offset 0x248, size 0x4 
 __declspec(property(get=__cordl_internal_get_aileronAngularAcc, put=__cordl_internal_set_aileronAngularAcc)) float_t  aileronAngularAcc;

/// @brief Field aileronAngularRange, offset 0x240, size 0x8 
 __declspec(property(get=__cordl_internal_get_aileronAngularRange, put=__cordl_internal_set_aileronAngularRange)) ::UnityEngine::Vector2  aileronAngularRange;

/// @brief Field audioSource, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field crashSound, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_crashSound, put=__cordl_internal_set_crashSound)) ::UnityW<::UnityEngine::AudioClip>  crashSound;

/// @brief Field crashSoundVolume, offset 0x200, size 0x4 
 __declspec(property(get=__cordl_internal_get_crashSoundVolume, put=__cordl_internal_set_crashSoundVolume)) float_t  crashSoundVolume;

/// @brief Field dragVsAttackCurve, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_dragVsAttackCurve, put=__cordl_internal_set_dragVsAttackCurve)) ::UnityEngine::AnimationCurve*  dragVsAttackCurve;

/// @brief Field gravityCompensationRange, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_gravityCompensationRange, put=__cordl_internal_set_gravityCompensationRange)) ::UnityEngine::Vector2  gravityCompensationRange;

/// @brief Field initialSpeed, offset 0x210, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialSpeed, put=__cordl_internal_set_initialSpeed)) float_t  initialSpeed;

/// @brief Field leftAileronAngle, offset 0x24c, size 0x4 
 __declspec(property(get=__cordl_internal_get_leftAileronAngle, put=__cordl_internal_set_leftAileronAngle)) float_t  leftAileronAngle;

/// @brief Field leftAileronLevel, offset 0x238, size 0x4 
 __declspec(property(get=__cordl_internal_get_leftAileronLevel, put=__cordl_internal_set_leftAileronLevel)) float_t  leftAileronLevel;

/// @brief Field leftAileronLower, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftAileronLower, put=__cordl_internal_set_leftAileronLower)) ::UnityW<::UnityEngine::Transform>  leftAileronLower;

/// @brief Field leftAileronUpper, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftAileronUpper, put=__cordl_internal_set_leftAileronUpper)) ::UnityW<::UnityEngine::Transform>  leftAileronUpper;

/// @brief Field liftVsAttackCurve, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_liftVsAttackCurve, put=__cordl_internal_set_liftVsAttackCurve)) ::UnityEngine::AnimationCurve*  liftVsAttackCurve;

/// @brief Field liftVsSpeedInput, offset 0x184, size 0x8 
 __declspec(property(get=__cordl_internal_get_liftVsSpeedInput, put=__cordl_internal_set_liftVsSpeedInput)) ::UnityEngine::Vector2  liftVsSpeedInput;

/// @brief Field liftVsSpeedOutput, offset 0x18c, size 0x8 
 __declspec(property(get=__cordl_internal_get_liftVsSpeedOutput, put=__cordl_internal_set_liftVsSpeedOutput)) ::UnityEngine::Vector2  liftVsSpeedOutput;

/// @brief Field maxDrag, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDrag, put=__cordl_internal_set_maxDrag)) float_t  maxDrag;

/// @brief Field motorLevel, offset 0x234, size 0x4 
 __declspec(property(get=__cordl_internal_get_motorLevel, put=__cordl_internal_set_motorLevel)) float_t  motorLevel;

/// @brief Field motorSound, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_motorSound, put=__cordl_internal_set_motorSound)) ::UnityW<::UnityEngine::AudioClip>  motorSound;

/// @brief Field motorSoundVolumeMinMax, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_motorSoundVolumeMinMax, put=__cordl_internal_set_motorSoundVolumeMinMax)) ::UnityEngine::Vector2  motorSoundVolumeMinMax;

/// @brief Field motorVolumeRampTime, offset 0x204, size 0x4 
 __declspec(property(get=__cordl_internal_get_motorVolumeRampTime, put=__cordl_internal_set_motorVolumeRampTime)) float_t  motorVolumeRampTime;

/// @brief Field nonCrashColliders, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_nonCrashColliders, put=__cordl_internal_set_nonCrashColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  nonCrashColliders;

/// @brief Field pitch, offset 0x214, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitch, put=__cordl_internal_set_pitch)) float_t  pitch;

/// @brief Field pitchAccelMinMax, offset 0x21c, size 0x8 
 __declspec(property(get=__cordl_internal_get_pitchAccelMinMax, put=__cordl_internal_set_pitchAccelMinMax)) ::UnityEngine::Vector2  pitchAccelMinMax;

/// @brief Field pitchVel, offset 0x218, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitchVel, put=__cordl_internal_set_pitchVel)) float_t  pitchVel;

/// @brief Field pitchVelocityFollowRateAngle, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitchVelocityFollowRateAngle, put=__cordl_internal_set_pitchVelocityFollowRateAngle)) float_t  pitchVelocityFollowRateAngle;

/// @brief Field pitchVelocityFollowRateMagnitude, offset 0x17c, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitchVelocityFollowRateMagnitude, put=__cordl_internal_set_pitchVelocityFollowRateMagnitude)) float_t  pitchVelocityFollowRateMagnitude;

/// @brief Field pitchVelocityRampTimeMinMax, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_pitchVelocityRampTimeMinMax, put=__cordl_internal_set_pitchVelocityRampTimeMinMax)) ::UnityEngine::Vector2  pitchVelocityRampTimeMinMax;

/// @brief Field pitchVelocityTargetMinMax, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_pitchVelocityTargetMinMax, put=__cordl_internal_set_pitchVelocityTargetMinMax)) ::UnityEngine::Vector2  pitchVelocityTargetMinMax;

/// @brief Field propeller, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_propeller, put=__cordl_internal_set_propeller)) ::UnityW<::UnityEngine::Transform>  propeller;

/// @brief Field propellerAngle, offset 0x208, size 0x4 
 __declspec(property(get=__cordl_internal_get_propellerAngle, put=__cordl_internal_set_propellerAngle)) float_t  propellerAngle;

/// @brief Field propellerSpinRate, offset 0x20c, size 0x4 
 __declspec(property(get=__cordl_internal_get_propellerSpinRate, put=__cordl_internal_set_propellerSpinRate)) float_t  propellerSpinRate;

/// @brief Field rightAileronAngle, offset 0x250, size 0x4 
 __declspec(property(get=__cordl_internal_get_rightAileronAngle, put=__cordl_internal_set_rightAileronAngle)) float_t  rightAileronAngle;

/// @brief Field rightAileronLevel, offset 0x23c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rightAileronLevel, put=__cordl_internal_set_rightAileronLevel)) float_t  rightAileronLevel;

/// @brief Field rightAileronLower, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightAileronLower, put=__cordl_internal_set_rightAileronLower)) ::UnityW<::UnityEngine::Transform>  rightAileronLower;

/// @brief Field rightAileronUpper, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightAileronUpper, put=__cordl_internal_set_rightAileronUpper)) ::UnityW<::UnityEngine::Transform>  rightAileronUpper;

/// @brief Field roll, offset 0x224, size 0x4 
 __declspec(property(get=__cordl_internal_get_roll, put=__cordl_internal_set_roll)) float_t  roll;

/// @brief Field rollAccel, offset 0x22c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rollAccel, put=__cordl_internal_set_rollAccel)) float_t  rollAccel;

/// @brief Field rollVel, offset 0x228, size 0x4 
 __declspec(property(get=__cordl_internal_get_rollVel, put=__cordl_internal_set_rollVel)) float_t  rollVel;

/// @brief Field rollVelocityRampTime, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rollVelocityRampTime, put=__cordl_internal_set_rollVelocityRampTime)) float_t  rollVelocityRampTime;

/// @brief Field rollVelocityTarget, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_rollVelocityTarget, put=__cordl_internal_set_rollVelocityTarget)) float_t  rollVelocityTarget;

/// @brief Field thrustAccel, offset 0x230, size 0x4 
 __declspec(property(get=__cordl_internal_get_thrustAccel, put=__cordl_internal_set_thrustAccel)) float_t  thrustAccel;

/// @brief Field thrustAccelTime, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get_thrustAccelTime, put=__cordl_internal_set_thrustAccelTime)) float_t  thrustAccelTime;

/// @brief Field thrustVelocityTarget, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get_thrustVelocityTarget, put=__cordl_internal_set_thrustVelocityTarget)) float_t  thrustVelocityTarget;

/// @brief Method AuthorityBeginMobilization, addr 0x5d69c48, size 0x88, virtual true, abstract: false, final false
inline void AuthorityBeginMobilization() ;

/// @brief Method AuthorityUpdate, addr 0x5d69d8c, size 0x2a4, virtual true, abstract: false, final false
inline void AuthorityUpdate(float_t  dt) ;

/// @brief Method Awake, addr 0x5d69c04, size 0x44, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x5d6a5b8, size 0x760, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GorillaTag::Cosmetics::RCPlane* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x5d6ad60, size 0x4d8, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method RemoteUpdate, addr 0x5d6a030, size 0xe4, virtual true, abstract: false, final false
inline void RemoteUpdate(float_t  dt) ;

/// @brief Method SharedUpdate, addr 0x5d6a114, size 0x4a4, virtual true, abstract: false, final false
inline void SharedUpdate(float_t  dt) ;

constexpr float_t const& __cordl_internal_get_aileronAngularAcc() const;

constexpr float_t& __cordl_internal_get_aileronAngularAcc() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_aileronAngularRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_aileronAngularRange() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_crashSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_crashSound() ;

constexpr float_t const& __cordl_internal_get_crashSoundVolume() const;

constexpr float_t& __cordl_internal_get_crashSoundVolume() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_dragVsAttackCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_dragVsAttackCurve() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_gravityCompensationRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_gravityCompensationRange() ;

constexpr float_t const& __cordl_internal_get_initialSpeed() const;

constexpr float_t& __cordl_internal_get_initialSpeed() ;

constexpr float_t const& __cordl_internal_get_leftAileronAngle() const;

constexpr float_t& __cordl_internal_get_leftAileronAngle() ;

constexpr float_t const& __cordl_internal_get_leftAileronLevel() const;

constexpr float_t& __cordl_internal_get_leftAileronLevel() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftAileronLower() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftAileronLower() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftAileronUpper() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftAileronUpper() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_liftVsAttackCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_liftVsAttackCurve() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_liftVsSpeedInput() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_liftVsSpeedInput() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_liftVsSpeedOutput() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_liftVsSpeedOutput() ;

constexpr float_t const& __cordl_internal_get_maxDrag() const;

constexpr float_t& __cordl_internal_get_maxDrag() ;

constexpr float_t const& __cordl_internal_get_motorLevel() const;

constexpr float_t& __cordl_internal_get_motorLevel() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_motorSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_motorSound() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_motorSoundVolumeMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_motorSoundVolumeMinMax() ;

constexpr float_t const& __cordl_internal_get_motorVolumeRampTime() const;

constexpr float_t& __cordl_internal_get_motorVolumeRampTime() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_nonCrashColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_nonCrashColliders() ;

constexpr float_t const& __cordl_internal_get_pitch() const;

constexpr float_t& __cordl_internal_get_pitch() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_pitchAccelMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_pitchAccelMinMax() ;

constexpr float_t const& __cordl_internal_get_pitchVel() const;

constexpr float_t& __cordl_internal_get_pitchVel() ;

constexpr float_t const& __cordl_internal_get_pitchVelocityFollowRateAngle() const;

constexpr float_t& __cordl_internal_get_pitchVelocityFollowRateAngle() ;

constexpr float_t const& __cordl_internal_get_pitchVelocityFollowRateMagnitude() const;

constexpr float_t& __cordl_internal_get_pitchVelocityFollowRateMagnitude() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_pitchVelocityRampTimeMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_pitchVelocityRampTimeMinMax() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_pitchVelocityTargetMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_pitchVelocityTargetMinMax() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_propeller() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_propeller() ;

constexpr float_t const& __cordl_internal_get_propellerAngle() const;

constexpr float_t& __cordl_internal_get_propellerAngle() ;

constexpr float_t const& __cordl_internal_get_propellerSpinRate() const;

constexpr float_t& __cordl_internal_get_propellerSpinRate() ;

constexpr float_t const& __cordl_internal_get_rightAileronAngle() const;

constexpr float_t& __cordl_internal_get_rightAileronAngle() ;

constexpr float_t const& __cordl_internal_get_rightAileronLevel() const;

constexpr float_t& __cordl_internal_get_rightAileronLevel() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightAileronLower() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightAileronLower() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightAileronUpper() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightAileronUpper() ;

constexpr float_t const& __cordl_internal_get_roll() const;

constexpr float_t& __cordl_internal_get_roll() ;

constexpr float_t const& __cordl_internal_get_rollAccel() const;

constexpr float_t& __cordl_internal_get_rollAccel() ;

constexpr float_t const& __cordl_internal_get_rollVel() const;

constexpr float_t& __cordl_internal_get_rollVel() ;

constexpr float_t const& __cordl_internal_get_rollVelocityRampTime() const;

constexpr float_t& __cordl_internal_get_rollVelocityRampTime() ;

constexpr float_t const& __cordl_internal_get_rollVelocityTarget() const;

constexpr float_t& __cordl_internal_get_rollVelocityTarget() ;

constexpr float_t const& __cordl_internal_get_thrustAccel() const;

constexpr float_t& __cordl_internal_get_thrustAccel() ;

constexpr float_t const& __cordl_internal_get_thrustAccelTime() const;

constexpr float_t& __cordl_internal_get_thrustAccelTime() ;

constexpr float_t const& __cordl_internal_get_thrustVelocityTarget() const;

constexpr float_t& __cordl_internal_get_thrustVelocityTarget() ;

constexpr void __cordl_internal_set_aileronAngularAcc(float_t  value) ;

constexpr void __cordl_internal_set_aileronAngularRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_crashSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_crashSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_dragVsAttackCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_gravityCompensationRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_initialSpeed(float_t  value) ;

constexpr void __cordl_internal_set_leftAileronAngle(float_t  value) ;

constexpr void __cordl_internal_set_leftAileronLevel(float_t  value) ;

constexpr void __cordl_internal_set_leftAileronLower(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_leftAileronUpper(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_liftVsAttackCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_liftVsSpeedInput(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_liftVsSpeedOutput(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_maxDrag(float_t  value) ;

constexpr void __cordl_internal_set_motorLevel(float_t  value) ;

constexpr void __cordl_internal_set_motorSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_motorSoundVolumeMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_motorVolumeRampTime(float_t  value) ;

constexpr void __cordl_internal_set_nonCrashColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_pitch(float_t  value) ;

constexpr void __cordl_internal_set_pitchAccelMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_pitchVel(float_t  value) ;

constexpr void __cordl_internal_set_pitchVelocityFollowRateAngle(float_t  value) ;

constexpr void __cordl_internal_set_pitchVelocityFollowRateMagnitude(float_t  value) ;

constexpr void __cordl_internal_set_pitchVelocityRampTimeMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_pitchVelocityTargetMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_propeller(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_propellerAngle(float_t  value) ;

constexpr void __cordl_internal_set_propellerSpinRate(float_t  value) ;

constexpr void __cordl_internal_set_rightAileronAngle(float_t  value) ;

constexpr void __cordl_internal_set_rightAileronLevel(float_t  value) ;

constexpr void __cordl_internal_set_rightAileronLower(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightAileronUpper(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_roll(float_t  value) ;

constexpr void __cordl_internal_set_rollAccel(float_t  value) ;

constexpr void __cordl_internal_set_rollVel(float_t  value) ;

constexpr void __cordl_internal_set_rollVelocityRampTime(float_t  value) ;

constexpr void __cordl_internal_set_rollVelocityTarget(float_t  value) ;

constexpr void __cordl_internal_set_thrustAccel(float_t  value) ;

constexpr void __cordl_internal_set_thrustAccelTime(float_t  value) ;

constexpr void __cordl_internal_set_thrustVelocityTarget(float_t  value) ;

/// @brief Method .ctor, addr 0x5d6b238, size 0x14c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RCPlane() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RCPlane", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RCPlane(RCPlane && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RCPlane", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RCPlane(RCPlane const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4837};

/// @brief Field propellerIdleAcc offset 0xffffffff size 0x4
static constexpr float_t  propellerIdleAcc{static_cast<float_t>(1.0f)};

/// @brief Field propellerIdleSpinRate offset 0xffffffff size 0x4
static constexpr float_t  propellerIdleSpinRate{static_cast<float_t>(0.6f)};

/// @brief Field propellerMaxAcc offset 0xffffffff size 0x4
static constexpr float_t  propellerMaxAcc{static_cast<float_t>(6.6666665f)};

/// @brief Field propellerMaxSpinRate offset 0xffffffff size 0x4
static constexpr float_t  propellerMaxSpinRate{static_cast<float_t>(5.0f)};

/// @brief Field pitchVelocityTargetMinMax, offset: 0x158, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___pitchVelocityTargetMinMax;

/// @brief Field pitchVelocityRampTimeMinMax, offset: 0x160, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___pitchVelocityRampTimeMinMax;

/// @brief Field rollVelocityTarget, offset: 0x168, size: 0x4, def value: None
 float_t  ___rollVelocityTarget;

/// @brief Field rollVelocityRampTime, offset: 0x16c, size: 0x4, def value: None
 float_t  ___rollVelocityRampTime;

/// @brief Field thrustVelocityTarget, offset: 0x170, size: 0x4, def value: None
 float_t  ___thrustVelocityTarget;

/// @brief Field thrustAccelTime, offset: 0x174, size: 0x4, def value: None
 float_t  ___thrustAccelTime;

/// [SerializeField]
/// @brief Field pitchVelocityFollowRateAngle, offset: 0x178, size: 0x4, def value: None
 float_t  ___pitchVelocityFollowRateAngle;

/// [SerializeField]
/// @brief Field pitchVelocityFollowRateMagnitude, offset: 0x17c, size: 0x4, def value: None
 float_t  ___pitchVelocityFollowRateMagnitude;

/// [SerializeField]
/// @brief Field maxDrag, offset: 0x180, size: 0x4, def value: None
 float_t  ___maxDrag;

/// [SerializeField]
/// @brief Field liftVsSpeedInput, offset: 0x184, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___liftVsSpeedInput;

/// [SerializeField]
/// @brief Field liftVsSpeedOutput, offset: 0x18c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___liftVsSpeedOutput;

/// [SerializeField]
/// @brief Field liftVsAttackCurve, offset: 0x198, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___liftVsAttackCurve;

/// [SerializeField]
/// @brief Field dragVsAttackCurve, offset: 0x1a0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___dragVsAttackCurve;

/// [SerializeField]
/// @brief Field gravityCompensationRange, offset: 0x1a8, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___gravityCompensationRange;

/// [SerializeField]
/// @brief Field nonCrashColliders, offset: 0x1b0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___nonCrashColliders;

/// [SerializeField]
/// @brief Field propeller, offset: 0x1b8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___propeller;

/// [SerializeField]
/// @brief Field leftAileronUpper, offset: 0x1c0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftAileronUpper;

/// [SerializeField]
/// @brief Field leftAileronLower, offset: 0x1c8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftAileronLower;

/// [SerializeField]
/// @brief Field rightAileronUpper, offset: 0x1d0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightAileronUpper;

/// [SerializeField]
/// @brief Field rightAileronLower, offset: 0x1d8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightAileronLower;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x1e0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field motorSound, offset: 0x1e8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___motorSound;

/// [SerializeField]
/// @brief Field crashSound, offset: 0x1f0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___crashSound;

/// [SerializeField]
/// @brief Field motorSoundVolumeMinMax, offset: 0x1f8, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___motorSoundVolumeMinMax;

/// [SerializeField]
/// @brief Field crashSoundVolume, offset: 0x200, size: 0x4, def value: None
 float_t  ___crashSoundVolume;

/// @brief Field motorVolumeRampTime, offset: 0x204, size: 0x4, def value: None
 float_t  ___motorVolumeRampTime;

/// @brief Field propellerAngle, offset: 0x208, size: 0x4, def value: None
 float_t  ___propellerAngle;

/// @brief Field propellerSpinRate, offset: 0x20c, size: 0x4, def value: None
 float_t  ___propellerSpinRate;

/// @brief Field initialSpeed, offset: 0x210, size: 0x4, def value: None
 float_t  ___initialSpeed;

/// @brief Field pitch, offset: 0x214, size: 0x4, def value: None
 float_t  ___pitch;

/// @brief Field pitchVel, offset: 0x218, size: 0x4, def value: None
 float_t  ___pitchVel;

/// @brief Field pitchAccelMinMax, offset: 0x21c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___pitchAccelMinMax;

/// @brief Field roll, offset: 0x224, size: 0x4, def value: None
 float_t  ___roll;

/// @brief Field rollVel, offset: 0x228, size: 0x4, def value: None
 float_t  ___rollVel;

/// @brief Field rollAccel, offset: 0x22c, size: 0x4, def value: None
 float_t  ___rollAccel;

/// @brief Field thrustAccel, offset: 0x230, size: 0x4, def value: None
 float_t  ___thrustAccel;

/// @brief Field motorLevel, offset: 0x234, size: 0x4, def value: None
 float_t  ___motorLevel;

/// @brief Field leftAileronLevel, offset: 0x238, size: 0x4, def value: None
 float_t  ___leftAileronLevel;

/// @brief Field rightAileronLevel, offset: 0x23c, size: 0x4, def value: None
 float_t  ___rightAileronLevel;

/// @brief Field aileronAngularRange, offset: 0x240, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___aileronAngularRange;

/// @brief Field aileronAngularAcc, offset: 0x248, size: 0x4, def value: None
 float_t  ___aileronAngularAcc;

/// @brief Field leftAileronAngle, offset: 0x24c, size: 0x4, def value: None
 float_t  ___leftAileronAngle;

/// @brief Field rightAileronAngle, offset: 0x250, size: 0x4, def value: None
 float_t  ___rightAileronAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___pitchVelocityTargetMinMax) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___pitchVelocityRampTimeMinMax) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___rollVelocityTarget) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___rollVelocityRampTime) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___thrustVelocityTarget) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___thrustAccelTime) == 0x174, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___pitchVelocityFollowRateAngle) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___pitchVelocityFollowRateMagnitude) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___maxDrag) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___liftVsSpeedInput) == 0x184, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___liftVsSpeedOutput) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___liftVsAttackCurve) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___dragVsAttackCurve) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___gravityCompensationRange) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___nonCrashColliders) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___propeller) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___leftAileronUpper) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___leftAileronLower) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___rightAileronUpper) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___rightAileronLower) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___audioSource) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___motorSound) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___crashSound) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___motorSoundVolumeMinMax) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___crashSoundVolume) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___motorVolumeRampTime) == 0x204, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___propellerAngle) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___propellerSpinRate) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___initialSpeed) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___pitch) == 0x214, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___pitchVel) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___pitchAccelMinMax) == 0x21c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___roll) == 0x224, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___rollVel) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___rollAccel) == 0x22c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___thrustAccel) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___motorLevel) == 0x234, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___leftAileronLevel) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___rightAileronLevel) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___aileronAngularRange) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___aileronAngularAcc) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___leftAileronAngle) == 0x24c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCPlane, ___rightAileronAngle) == 0x250, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::RCPlane) == 0x258, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
