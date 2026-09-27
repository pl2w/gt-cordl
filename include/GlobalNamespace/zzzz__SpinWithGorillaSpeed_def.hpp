#pragma once
// IWYU pragma private; include "GlobalNamespace/SpinWithGorillaSpeed.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpinWithGorillaSpeed)
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class SpinWithGorillaSpeed;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpinWithGorillaSpeed*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpinWithGorillaSpeed*, "", "SpinWithGorillaSpeed");
// Dependencies UnityEngine.AudioClip, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpinWithGorillaSpeed
class CORDL_TYPE SpinWithGorillaSpeed : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field axisOfRotation, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_axisOfRotation, put=__cordl_internal_set_axisOfRotation)) ::UnityEngine::Quaternion  axisOfRotation;

/// @brief Field centerOfRotation, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_centerOfRotation, put=__cordl_internal_set_centerOfRotation)) ::UnityEngine::Vector3  centerOfRotation;

/// @brief Field clockwise, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_clockwise, put=__cordl_internal_set_clockwise)) bool  clockwise;

/// @brief Field currentAngle, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentAngle, put=__cordl_internal_set_currentAngle)) float_t  currentAngle;

/// @brief Field degreesPerSecondAtSpeed, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_degreesPerSecondAtSpeed, put=__cordl_internal_set_degreesPerSecondAtSpeed)) ::UnityEngine::AnimationCurve*  degreesPerSecondAtSpeed;

/// @brief Field initialRotation, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get_initialRotation, put=__cordl_internal_set_initialRotation)) ::UnityEngine::Quaternion  initialRotation;

/// @brief Field maxSpeed, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed, put=__cordl_internal_set_maxSpeed)) float_t  maxSpeed;

/// @brief Field optionalVelocityEstimator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_optionalVelocityEstimator, put=__cordl_internal_set_optionalVelocityEstimator)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  optionalVelocityEstimator;

/// @brief Field rig, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Field spinAxis, offset 0x98, size 0xc 
 __declspec(property(get=__cordl_internal_get_spinAxis, put=__cordl_internal_set_spinAxis)) ::UnityEngine::Vector3  spinAxis;

/// @brief Field tickAngle, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_tickAngle, put=__cordl_internal_set_tickAngle)) float_t  tickAngle;

/// @brief Field tickClips, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_tickClips, put=__cordl_internal_set_tickClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  tickClips;

/// @brief Field tickPitchAtSpeed, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_tickPitchAtSpeed, put=__cordl_internal_set_tickPitchAtSpeed)) ::UnityEngine::AnimationCurve*  tickPitchAtSpeed;

/// @brief Field tickSound, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_tickSound, put=__cordl_internal_set_tickSound)) ::UnityW<::UnityEngine::AudioSource>  tickSound;

/// @brief Field tickSoundDegrees, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_tickSoundDegrees, put=__cordl_internal_set_tickSoundDegrees)) float_t  tickSoundDegrees;

/// @brief Field tickVolumeAtSpeed, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_tickVolumeAtSpeed, put=__cordl_internal_set_tickVolumeAtSpeed)) ::UnityEngine::AnimationCurve*  tickVolumeAtSpeed;

/// @brief Field verticalSpeedInfluence, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_verticalSpeedInfluence, put=__cordl_internal_set_verticalSpeedInfluence)) float_t  verticalSpeedInfluence;

/// @brief Method Awake, addr 0x565b7b0, size 0x16c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SpinWithGorillaSpeed* New_ctor() ;

/// @brief Method OnDisable, addr 0x565bcac, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method Update, addr 0x565b91c, size 0x390, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_axisOfRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_axisOfRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_centerOfRotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_centerOfRotation() ;

constexpr bool const& __cordl_internal_get_clockwise() const;

constexpr bool& __cordl_internal_get_clockwise() ;

constexpr float_t const& __cordl_internal_get_currentAngle() const;

constexpr float_t& __cordl_internal_get_currentAngle() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_degreesPerSecondAtSpeed() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_degreesPerSecondAtSpeed() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_initialRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_initialRotation() ;

constexpr float_t const& __cordl_internal_get_maxSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpeed() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_optionalVelocityEstimator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_optionalVelocityEstimator() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_spinAxis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_spinAxis() ;

constexpr float_t const& __cordl_internal_get_tickAngle() const;

constexpr float_t& __cordl_internal_get_tickAngle() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_tickClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_tickClips() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_tickPitchAtSpeed() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_tickPitchAtSpeed() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_tickSound() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_tickSound() ;

constexpr float_t const& __cordl_internal_get_tickSoundDegrees() const;

constexpr float_t& __cordl_internal_get_tickSoundDegrees() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_tickVolumeAtSpeed() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_tickVolumeAtSpeed() ;

constexpr float_t const& __cordl_internal_get_verticalSpeedInfluence() const;

constexpr float_t& __cordl_internal_get_verticalSpeedInfluence() ;

constexpr void __cordl_internal_set_axisOfRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_centerOfRotation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_clockwise(bool  value) ;

constexpr void __cordl_internal_set_currentAngle(float_t  value) ;

constexpr void __cordl_internal_set_degreesPerSecondAtSpeed(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_initialRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_maxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_optionalVelocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_spinAxis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_tickAngle(float_t  value) ;

constexpr void __cordl_internal_set_tickClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_tickPitchAtSpeed(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_tickSound(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_tickSoundDegrees(float_t  value) ;

constexpr void __cordl_internal_set_tickVolumeAtSpeed(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_verticalSpeedInfluence(float_t  value) ;

/// @brief Method .ctor, addr 0x565bcb4, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpinWithGorillaSpeed() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpinWithGorillaSpeed", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpinWithGorillaSpeed(SpinWithGorillaSpeed && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpinWithGorillaSpeed", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpinWithGorillaSpeed(SpinWithGorillaSpeed const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{766};

/// [Tooltip("Get the velocity from this component when determining the spin speed. If this is unset, it will use the unsmoothed velocity of the parent VRRig component.")]
/// [SerializeField]
/// @brief Field optionalVelocityEstimator, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___optionalVelocityEstimator;

/// [SerializeField]
/// @brief Field axisOfRotation, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___axisOfRotation;

/// [SerializeField]
/// @brief Field centerOfRotation, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___centerOfRotation;

/// [Tooltip("The reported speed will be divided by this value before being used to sample AnimationCurves, to allow them to be in the range 0-1.")]
/// [SerializeField]
/// @brief Field maxSpeed, offset: 0x44, size: 0x4, def value: None
 float_t  ___maxSpeed;

/// [SerializeField]
/// @brief Field degreesPerSecondAtSpeed, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___degreesPerSecondAtSpeed;

/// [SerializeField]
/// @brief Field clockwise, offset: 0x50, size: 0x1, def value: None
 bool  ___clockwise;

/// [Tooltip("The Y component of the reported speed will be multiplied by this value. At 0, falling will have no effect on the rotation speed.")]
/// [SerializeField]
/// @brief Field verticalSpeedInfluence, offset: 0x54, size: 0x4, def value: None
 float_t  ___verticalSpeedInfluence;

/// [Header("Ticking sound")]
/// [Tooltip("After this many degrees of rotation, a \"tick\" sound will play.")]
/// [SerializeField]
/// @brief Field tickSoundDegrees, offset: 0x58, size: 0x4, def value: None
 float_t  ___tickSoundDegrees;

/// [SerializeField]
/// @brief Field tickVolumeAtSpeed, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___tickVolumeAtSpeed;

/// [SerializeField]
/// @brief Field tickPitchAtSpeed, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___tickPitchAtSpeed;

/// [SerializeField]
/// @brief Field tickSound, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___tickSound;

/// [SerializeField]
/// @brief Field tickClips, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___tickClips;

/// @brief Field rig, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

/// @brief Field initialRotation, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___initialRotation;

/// @brief Field spinAxis, offset: 0x98, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___spinAxis;

/// @brief Field currentAngle, offset: 0xa4, size: 0x4, def value: None
 float_t  ___currentAngle;

/// @brief Field tickAngle, offset: 0xa8, size: 0x4, def value: None
 float_t  ___tickAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpinWithGorillaSpeed, ___optionalVelocityEstimator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinWithGorillaSpeed, ___axisOfRotation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinWithGorillaSpeed, ___centerOfRotation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinWithGorillaSpeed, ___maxSpeed) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinWithGorillaSpeed, ___degreesPerSecondAtSpeed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinWithGorillaSpeed, ___clockwise) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinWithGorillaSpeed, ___verticalSpeedInfluence) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinWithGorillaSpeed, ___tickSoundDegrees) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinWithGorillaSpeed, ___tickVolumeAtSpeed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinWithGorillaSpeed, ___tickPitchAtSpeed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinWithGorillaSpeed, ___tickSound) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinWithGorillaSpeed, ___tickClips) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinWithGorillaSpeed, ___rig) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinWithGorillaSpeed, ___initialRotation) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinWithGorillaSpeed, ___spinAxis) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinWithGorillaSpeed, ___currentAngle) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinWithGorillaSpeed, ___tickAngle) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpinWithGorillaSpeed) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
