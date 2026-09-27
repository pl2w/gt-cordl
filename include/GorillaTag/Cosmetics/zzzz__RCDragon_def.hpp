#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/RCDragon.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__RCVehicle_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RCDragon)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Animation;
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
class GameObject;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class RCDragon;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::RCDragon*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::RCDragon*, "GorillaTag.Cosmetics", "RCDragon");
// Dependencies GorillaTag.Cosmetics.RCVehicle, UnityEngine.Vector2
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.RCDragon
class CORDL_TYPE RCDragon : public ::GorillaTag::Cosmetics::RCVehicle {
public:
// Declarations
/// @brief Field animation, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_animation, put=__cordl_internal_set_animation)) ::UnityW<::UnityEngine::Animation>  animation;

/// @brief Field ascendAccel, offset 0x234, size 0x4 
 __declspec(property(get=__cordl_internal_get_ascendAccel, put=__cordl_internal_set_ascendAccel)) float_t  ascendAccel;

/// @brief Field ascendAccelTime, offset 0x15c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ascendAccelTime, put=__cordl_internal_set_ascendAccelTime)) float_t  ascendAccelTime;

/// @brief Field ascendWhileFlyingAccelBoost, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get_ascendWhileFlyingAccelBoost, put=__cordl_internal_set_ascendWhileFlyingAccelBoost)) float_t  ascendWhileFlyingAccelBoost;

/// @brief Field audioSource, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field breathFireSound, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get_breathFireSound, put=__cordl_internal_set_breathFireSound)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  breathFireSound;

/// @brief Field breathFireVolume, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get_breathFireVolume, put=__cordl_internal_set_breathFireVolume)) float_t  breathFireVolume;

/// @brief Field crashAnimName, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_crashAnimName, put=__cordl_internal_set_crashAnimName)) ::StringW  crashAnimName;

/// @brief Field crashAnimSpeed, offset 0x1c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_crashAnimSpeed, put=__cordl_internal_set_crashAnimSpeed)) float_t  crashAnimSpeed;

/// @brief Field crashCollider, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_crashCollider, put=__cordl_internal_set_crashCollider)) ::UnityW<::UnityEngine::Collider>  crashCollider;

/// @brief Field crashSound, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_crashSound, put=__cordl_internal_set_crashSound)) ::UnityW<::UnityEngine::AudioClip>  crashSound;

/// @brief Field crashSoundVolume, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get_crashSoundVolume, put=__cordl_internal_set_crashSoundVolume)) float_t  crashSoundVolume;

/// @brief Field crashedGravityCompensation, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_crashedGravityCompensation, put=__cordl_internal_set_crashedGravityCompensation)) float_t  crashedGravityCompensation;

/// @brief Field dockedAnimName, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_dockedAnimName, put=__cordl_internal_set_dockedAnimName)) ::StringW  dockedAnimName;

/// @brief Field fireBreath, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_fireBreath, put=__cordl_internal_set_fireBreath)) ::UnityW<::UnityEngine::GameObject>  fireBreath;

/// @brief Field fireBreathDuration, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_fireBreathDuration, put=__cordl_internal_set_fireBreathDuration)) float_t  fireBreathDuration;

/// @brief Field fireBreathTimeRemaining, offset 0x1fc, size 0x4 
 __declspec(property(get=__cordl_internal_get_fireBreathTimeRemaining, put=__cordl_internal_set_fireBreathTimeRemaining)) float_t  fireBreathTimeRemaining;

/// @brief Field flapAnimEventTime, offset 0x1e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_flapAnimEventTime, put=__cordl_internal_set_flapAnimEventTime)) float_t  flapAnimEventTime;

/// @brief Field gravityCompensation, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityCompensation, put=__cordl_internal_set_gravityCompensation)) float_t  gravityCompensation;

/// @brief Field horizontalAccel, offset 0x240, size 0x4 
 __declspec(property(get=__cordl_internal_get_horizontalAccel, put=__cordl_internal_set_horizontalAccel)) float_t  horizontalAccel;

/// @brief Field horizontalAccelTime, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_horizontalAccelTime, put=__cordl_internal_set_horizontalAccelTime)) float_t  horizontalAccelTime;

/// @brief Field horizontalTiltTime, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get_horizontalTiltTime, put=__cordl_internal_set_horizontalTiltTime)) float_t  horizontalTiltTime;

/// @brief Field idleAnimName, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_idleAnimName, put=__cordl_internal_set_idleAnimName)) ::StringW  idleAnimName;

/// @brief Field isFlapping, offset 0x1e1, size 0x1 
 __declspec(property(get=__cordl_internal_get_isFlapping, put=__cordl_internal_set_isFlapping)) bool  isFlapping;

/// @brief Field maxAscendSpeed, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxAscendSpeed, put=__cordl_internal_set_maxAscendSpeed)) float_t  maxAscendSpeed;

/// @brief Field maxHorizontalSpeed, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHorizontalSpeed, put=__cordl_internal_set_maxHorizontalSpeed)) float_t  maxHorizontalSpeed;

/// @brief Field maxHorizontalTiltAngle, offset 0x17c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHorizontalTiltAngle, put=__cordl_internal_set_maxHorizontalTiltAngle)) float_t  maxHorizontalTiltAngle;

/// @brief Field maxTurnRate, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTurnRate, put=__cordl_internal_set_maxTurnRate)) float_t  maxTurnRate;

/// @brief Field motorLevel, offset 0x248, size 0x4 
 __declspec(property(get=__cordl_internal_get_motorLevel, put=__cordl_internal_set_motorLevel)) float_t  motorLevel;

/// @brief Field motorSoundVolumeMinMax, offset 0x184, size 0x8 
 __declspec(property(get=__cordl_internal_get_motorSoundVolumeMinMax, put=__cordl_internal_set_motorSoundVolumeMinMax)) ::UnityEngine::Vector2  motorSoundVolumeMinMax;

/// @brief Field motorVolumeRampTime, offset 0x244, size 0x4 
 __declspec(property(get=__cordl_internal_get_motorVolumeRampTime, put=__cordl_internal_set_motorVolumeRampTime)) float_t  motorVolumeRampTime;

/// @brief Field mouthBreathFireAnimName, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mouthBreathFireAnimName, put=__cordl_internal_set_mouthBreathFireAnimName)) ::StringW  mouthBreathFireAnimName;

/// @brief Field mouthClosedAnimName, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_mouthClosedAnimName, put=__cordl_internal_set_mouthClosedAnimName)) ::StringW  mouthClosedAnimName;

/// @brief Field nextFlapEventAnimTime, offset 0x1e4, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextFlapEventAnimTime, put=__cordl_internal_set_nextFlapEventAnimTime)) float_t  nextFlapEventAnimTime;

/// @brief Field shouldFlap, offset 0x1e0, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldFlap, put=__cordl_internal_set_shouldFlap)) bool  shouldFlap;

/// @brief Field tiltAccel, offset 0x23c, size 0x4 
 __declspec(property(get=__cordl_internal_get_tiltAccel, put=__cordl_internal_set_tiltAccel)) float_t  tiltAccel;

/// @brief Field tiltAngle, offset 0x230, size 0x4 
 __declspec(property(get=__cordl_internal_get_tiltAngle, put=__cordl_internal_set_tiltAngle)) float_t  tiltAngle;

/// @brief Field turnAccel, offset 0x238, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnAccel, put=__cordl_internal_set_turnAccel)) float_t  turnAccel;

/// @brief Field turnAccelTime, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnAccelTime, put=__cordl_internal_set_turnAccelTime)) float_t  turnAccelTime;

/// @brief Field turnAngle, offset 0x22c, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnAngle, put=__cordl_internal_set_turnAngle)) float_t  turnAngle;

/// @brief Field turnRate, offset 0x228, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnRate, put=__cordl_internal_set_turnRate)) float_t  turnRate;

/// @brief Field wingFlapAnimName, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_wingFlapAnimName, put=__cordl_internal_set_wingFlapAnimName)) ::StringW  wingFlapAnimName;

/// @brief Field wingFlapAnimSpeed, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_wingFlapAnimSpeed, put=__cordl_internal_set_wingFlapAnimSpeed)) float_t  wingFlapAnimSpeed;

/// @brief Field wingFlapSound, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_wingFlapSound, put=__cordl_internal_set_wingFlapSound)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  wingFlapSound;

/// @brief Field wingFlapVolume, offset 0x194, size 0x4 
 __declspec(property(get=__cordl_internal_get_wingFlapVolume, put=__cordl_internal_set_wingFlapVolume)) float_t  wingFlapVolume;

/// @brief Method AuthorityBeginDocked, addr 0x5d67bb0, size 0x258, virtual true, abstract: false, final false
inline void AuthorityBeginDocked() ;

/// @brief Method AuthorityUpdate, addr 0x5d682c4, size 0x160, virtual true, abstract: false, final false
inline void AuthorityUpdate(float_t  dt) ;

/// @brief Method Awake, addr 0x5d67e08, size 0x158, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x5d68938, size 0x664, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method IsBreathingFire, addr 0x5d68198, size 0x10, virtual false, abstract: false, final false
inline bool IsBreathingFire() ;

static inline ::GorillaTag::Cosmetics::RCDragon* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d68014, size 0x20, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnTriggerEnter, addr 0x5d68f9c, size 0x43c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method PlayRandomSound, addr 0x5d680f8, size 0xa0, virtual false, abstract: false, final false
inline void PlayRandomSound(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  clips, float_t  volume) ;

/// @brief Method PlaySound, addr 0x5d681a8, size 0x11c, virtual false, abstract: false, final false
inline void PlaySound(::UnityEngine::AudioClip*  clip, float_t  volume) ;

/// @brief Method RemoteUpdate, addr 0x5d68424, size 0xf0, virtual true, abstract: false, final false
inline void RemoteUpdate(float_t  dt) ;

/// @brief Method SharedUpdate, addr 0x5d68514, size 0x424, virtual true, abstract: false, final false
inline void SharedUpdate(float_t  dt) ;

/// @brief Method StartBreathFire, addr 0x5d68034, size 0xc4, virtual false, abstract: false, final false
inline void StartBreathFire() ;

/// @brief Method StopBreathFire, addr 0x5d67f60, size 0xb4, virtual false, abstract: false, final false
inline void StopBreathFire() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_animation() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_animation() ;

constexpr float_t const& __cordl_internal_get_ascendAccel() const;

constexpr float_t& __cordl_internal_get_ascendAccel() ;

constexpr float_t const& __cordl_internal_get_ascendAccelTime() const;

constexpr float_t& __cordl_internal_get_ascendAccelTime() ;

constexpr float_t const& __cordl_internal_get_ascendWhileFlyingAccelBoost() const;

constexpr float_t& __cordl_internal_get_ascendWhileFlyingAccelBoost() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get_breathFireSound() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get_breathFireSound() ;

constexpr float_t const& __cordl_internal_get_breathFireVolume() const;

constexpr float_t& __cordl_internal_get_breathFireVolume() ;

constexpr ::StringW const& __cordl_internal_get_crashAnimName() const;

constexpr ::StringW& __cordl_internal_get_crashAnimName() ;

constexpr float_t const& __cordl_internal_get_crashAnimSpeed() const;

constexpr float_t& __cordl_internal_get_crashAnimSpeed() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_crashCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_crashCollider() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_crashSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_crashSound() ;

constexpr float_t const& __cordl_internal_get_crashSoundVolume() const;

constexpr float_t& __cordl_internal_get_crashSoundVolume() ;

constexpr float_t const& __cordl_internal_get_crashedGravityCompensation() const;

constexpr float_t& __cordl_internal_get_crashedGravityCompensation() ;

constexpr ::StringW const& __cordl_internal_get_dockedAnimName() const;

constexpr ::StringW& __cordl_internal_get_dockedAnimName() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_fireBreath() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_fireBreath() ;

constexpr float_t const& __cordl_internal_get_fireBreathDuration() const;

constexpr float_t& __cordl_internal_get_fireBreathDuration() ;

constexpr float_t const& __cordl_internal_get_fireBreathTimeRemaining() const;

constexpr float_t& __cordl_internal_get_fireBreathTimeRemaining() ;

constexpr float_t const& __cordl_internal_get_flapAnimEventTime() const;

constexpr float_t& __cordl_internal_get_flapAnimEventTime() ;

constexpr float_t const& __cordl_internal_get_gravityCompensation() const;

constexpr float_t& __cordl_internal_get_gravityCompensation() ;

constexpr float_t const& __cordl_internal_get_horizontalAccel() const;

constexpr float_t& __cordl_internal_get_horizontalAccel() ;

constexpr float_t const& __cordl_internal_get_horizontalAccelTime() const;

constexpr float_t& __cordl_internal_get_horizontalAccelTime() ;

constexpr float_t const& __cordl_internal_get_horizontalTiltTime() const;

constexpr float_t& __cordl_internal_get_horizontalTiltTime() ;

constexpr ::StringW const& __cordl_internal_get_idleAnimName() const;

constexpr ::StringW& __cordl_internal_get_idleAnimName() ;

constexpr bool const& __cordl_internal_get_isFlapping() const;

constexpr bool& __cordl_internal_get_isFlapping() ;

constexpr float_t const& __cordl_internal_get_maxAscendSpeed() const;

constexpr float_t& __cordl_internal_get_maxAscendSpeed() ;

constexpr float_t const& __cordl_internal_get_maxHorizontalSpeed() const;

constexpr float_t& __cordl_internal_get_maxHorizontalSpeed() ;

constexpr float_t const& __cordl_internal_get_maxHorizontalTiltAngle() const;

constexpr float_t& __cordl_internal_get_maxHorizontalTiltAngle() ;

constexpr float_t const& __cordl_internal_get_maxTurnRate() const;

constexpr float_t& __cordl_internal_get_maxTurnRate() ;

constexpr float_t const& __cordl_internal_get_motorLevel() const;

constexpr float_t& __cordl_internal_get_motorLevel() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_motorSoundVolumeMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_motorSoundVolumeMinMax() ;

constexpr float_t const& __cordl_internal_get_motorVolumeRampTime() const;

constexpr float_t& __cordl_internal_get_motorVolumeRampTime() ;

constexpr ::StringW const& __cordl_internal_get_mouthBreathFireAnimName() const;

constexpr ::StringW& __cordl_internal_get_mouthBreathFireAnimName() ;

constexpr ::StringW const& __cordl_internal_get_mouthClosedAnimName() const;

constexpr ::StringW& __cordl_internal_get_mouthClosedAnimName() ;

constexpr float_t const& __cordl_internal_get_nextFlapEventAnimTime() const;

constexpr float_t& __cordl_internal_get_nextFlapEventAnimTime() ;

constexpr bool const& __cordl_internal_get_shouldFlap() const;

constexpr bool& __cordl_internal_get_shouldFlap() ;

constexpr float_t const& __cordl_internal_get_tiltAccel() const;

constexpr float_t& __cordl_internal_get_tiltAccel() ;

constexpr float_t const& __cordl_internal_get_tiltAngle() const;

constexpr float_t& __cordl_internal_get_tiltAngle() ;

constexpr float_t const& __cordl_internal_get_turnAccel() const;

constexpr float_t& __cordl_internal_get_turnAccel() ;

constexpr float_t const& __cordl_internal_get_turnAccelTime() const;

constexpr float_t& __cordl_internal_get_turnAccelTime() ;

constexpr float_t const& __cordl_internal_get_turnAngle() const;

constexpr float_t& __cordl_internal_get_turnAngle() ;

constexpr float_t const& __cordl_internal_get_turnRate() const;

constexpr float_t& __cordl_internal_get_turnRate() ;

constexpr ::StringW const& __cordl_internal_get_wingFlapAnimName() const;

constexpr ::StringW& __cordl_internal_get_wingFlapAnimName() ;

constexpr float_t const& __cordl_internal_get_wingFlapAnimSpeed() const;

constexpr float_t& __cordl_internal_get_wingFlapAnimSpeed() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get_wingFlapSound() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get_wingFlapSound() ;

constexpr float_t const& __cordl_internal_get_wingFlapVolume() const;

constexpr float_t& __cordl_internal_get_wingFlapVolume() ;

constexpr void __cordl_internal_set_animation(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_ascendAccel(float_t  value) ;

constexpr void __cordl_internal_set_ascendAccelTime(float_t  value) ;

constexpr void __cordl_internal_set_ascendWhileFlyingAccelBoost(float_t  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_breathFireSound(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value) ;

constexpr void __cordl_internal_set_breathFireVolume(float_t  value) ;

constexpr void __cordl_internal_set_crashAnimName(::StringW  value) ;

constexpr void __cordl_internal_set_crashAnimSpeed(float_t  value) ;

constexpr void __cordl_internal_set_crashCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_crashSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_crashSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_crashedGravityCompensation(float_t  value) ;

constexpr void __cordl_internal_set_dockedAnimName(::StringW  value) ;

constexpr void __cordl_internal_set_fireBreath(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_fireBreathDuration(float_t  value) ;

constexpr void __cordl_internal_set_fireBreathTimeRemaining(float_t  value) ;

constexpr void __cordl_internal_set_flapAnimEventTime(float_t  value) ;

constexpr void __cordl_internal_set_gravityCompensation(float_t  value) ;

constexpr void __cordl_internal_set_horizontalAccel(float_t  value) ;

constexpr void __cordl_internal_set_horizontalAccelTime(float_t  value) ;

constexpr void __cordl_internal_set_horizontalTiltTime(float_t  value) ;

constexpr void __cordl_internal_set_idleAnimName(::StringW  value) ;

constexpr void __cordl_internal_set_isFlapping(bool  value) ;

constexpr void __cordl_internal_set_maxAscendSpeed(float_t  value) ;

constexpr void __cordl_internal_set_maxHorizontalSpeed(float_t  value) ;

constexpr void __cordl_internal_set_maxHorizontalTiltAngle(float_t  value) ;

constexpr void __cordl_internal_set_maxTurnRate(float_t  value) ;

constexpr void __cordl_internal_set_motorLevel(float_t  value) ;

constexpr void __cordl_internal_set_motorSoundVolumeMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_motorVolumeRampTime(float_t  value) ;

constexpr void __cordl_internal_set_mouthBreathFireAnimName(::StringW  value) ;

constexpr void __cordl_internal_set_mouthClosedAnimName(::StringW  value) ;

constexpr void __cordl_internal_set_nextFlapEventAnimTime(float_t  value) ;

constexpr void __cordl_internal_set_shouldFlap(bool  value) ;

constexpr void __cordl_internal_set_tiltAccel(float_t  value) ;

constexpr void __cordl_internal_set_tiltAngle(float_t  value) ;

constexpr void __cordl_internal_set_turnAccel(float_t  value) ;

constexpr void __cordl_internal_set_turnAccelTime(float_t  value) ;

constexpr void __cordl_internal_set_turnAngle(float_t  value) ;

constexpr void __cordl_internal_set_turnRate(float_t  value) ;

constexpr void __cordl_internal_set_wingFlapAnimName(::StringW  value) ;

constexpr void __cordl_internal_set_wingFlapAnimSpeed(float_t  value) ;

constexpr void __cordl_internal_set_wingFlapSound(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value) ;

constexpr void __cordl_internal_set_wingFlapVolume(float_t  value) ;

/// @brief Method .ctor, addr 0x5d693d8, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RCDragon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RCDragon", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RCDragon(RCDragon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RCDragon", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RCDragon(RCDragon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4835};

/// [SerializeField]
/// @brief Field maxAscendSpeed, offset: 0x158, size: 0x4, def value: None
 float_t  ___maxAscendSpeed;

/// [SerializeField]
/// @brief Field ascendAccelTime, offset: 0x15c, size: 0x4, def value: None
 float_t  ___ascendAccelTime;

/// [SerializeField]
/// @brief Field ascendWhileFlyingAccelBoost, offset: 0x160, size: 0x4, def value: None
 float_t  ___ascendWhileFlyingAccelBoost;

/// [SerializeField]
/// @brief Field gravityCompensation, offset: 0x164, size: 0x4, def value: None
 float_t  ___gravityCompensation;

/// [SerializeField]
/// @brief Field crashedGravityCompensation, offset: 0x168, size: 0x4, def value: None
 float_t  ___crashedGravityCompensation;

/// [SerializeField]
/// @brief Field maxTurnRate, offset: 0x16c, size: 0x4, def value: None
 float_t  ___maxTurnRate;

/// [SerializeField]
/// @brief Field turnAccelTime, offset: 0x170, size: 0x4, def value: None
 float_t  ___turnAccelTime;

/// [SerializeField]
/// @brief Field maxHorizontalSpeed, offset: 0x174, size: 0x4, def value: None
 float_t  ___maxHorizontalSpeed;

/// [SerializeField]
/// @brief Field horizontalAccelTime, offset: 0x178, size: 0x4, def value: None
 float_t  ___horizontalAccelTime;

/// [SerializeField]
/// @brief Field maxHorizontalTiltAngle, offset: 0x17c, size: 0x4, def value: None
 float_t  ___maxHorizontalTiltAngle;

/// [SerializeField]
/// @brief Field horizontalTiltTime, offset: 0x180, size: 0x4, def value: None
 float_t  ___horizontalTiltTime;

/// [SerializeField]
/// @brief Field motorSoundVolumeMinMax, offset: 0x184, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___motorSoundVolumeMinMax;

/// [SerializeField]
/// @brief Field crashSoundVolume, offset: 0x18c, size: 0x4, def value: None
 float_t  ___crashSoundVolume;

/// [SerializeField]
/// @brief Field breathFireVolume, offset: 0x190, size: 0x4, def value: None
 float_t  ___breathFireVolume;

/// [SerializeField]
/// @brief Field wingFlapVolume, offset: 0x194, size: 0x4, def value: None
 float_t  ___wingFlapVolume;

/// [SerializeField]
/// @brief Field animation, offset: 0x198, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___animation;

/// [SerializeField]
/// @brief Field wingFlapAnimName, offset: 0x1a0, size: 0x8, def value: None
 ::StringW  ___wingFlapAnimName;

/// [SerializeField]
/// @brief Field wingFlapAnimSpeed, offset: 0x1a8, size: 0x4, def value: None
 float_t  ___wingFlapAnimSpeed;

/// [SerializeField]
/// @brief Field dockedAnimName, offset: 0x1b0, size: 0x8, def value: None
 ::StringW  ___dockedAnimName;

/// [SerializeField]
/// @brief Field idleAnimName, offset: 0x1b8, size: 0x8, def value: None
 ::StringW  ___idleAnimName;

/// [SerializeField]
/// @brief Field crashAnimName, offset: 0x1c0, size: 0x8, def value: None
 ::StringW  ___crashAnimName;

/// [SerializeField]
/// @brief Field crashAnimSpeed, offset: 0x1c8, size: 0x4, def value: None
 float_t  ___crashAnimSpeed;

/// [SerializeField]
/// @brief Field mouthClosedAnimName, offset: 0x1d0, size: 0x8, def value: None
 ::StringW  ___mouthClosedAnimName;

/// [SerializeField]
/// @brief Field mouthBreathFireAnimName, offset: 0x1d8, size: 0x8, def value: None
 ::StringW  ___mouthBreathFireAnimName;

/// @brief Field shouldFlap, offset: 0x1e0, size: 0x1, def value: None
 bool  ___shouldFlap;

/// @brief Field isFlapping, offset: 0x1e1, size: 0x1, def value: None
 bool  ___isFlapping;

/// @brief Field nextFlapEventAnimTime, offset: 0x1e4, size: 0x4, def value: None
 float_t  ___nextFlapEventAnimTime;

/// [SerializeField]
/// @brief Field flapAnimEventTime, offset: 0x1e8, size: 0x4, def value: None
 float_t  ___flapAnimEventTime;

/// [SerializeField]
/// @brief Field fireBreath, offset: 0x1f0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___fireBreath;

/// [SerializeField]
/// @brief Field fireBreathDuration, offset: 0x1f8, size: 0x4, def value: None
 float_t  ___fireBreathDuration;

/// @brief Field fireBreathTimeRemaining, offset: 0x1fc, size: 0x4, def value: None
 float_t  ___fireBreathTimeRemaining;

/// [SerializeField]
/// @brief Field crashCollider, offset: 0x200, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___crashCollider;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x208, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field breathFireSound, offset: 0x210, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  ___breathFireSound;

/// [SerializeField]
/// @brief Field wingFlapSound, offset: 0x218, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  ___wingFlapSound;

/// [SerializeField]
/// @brief Field crashSound, offset: 0x220, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___crashSound;

/// @brief Field turnRate, offset: 0x228, size: 0x4, def value: None
 float_t  ___turnRate;

/// @brief Field turnAngle, offset: 0x22c, size: 0x4, def value: None
 float_t  ___turnAngle;

/// @brief Field tiltAngle, offset: 0x230, size: 0x4, def value: None
 float_t  ___tiltAngle;

/// @brief Field ascendAccel, offset: 0x234, size: 0x4, def value: None
 float_t  ___ascendAccel;

/// @brief Field turnAccel, offset: 0x238, size: 0x4, def value: None
 float_t  ___turnAccel;

/// @brief Field tiltAccel, offset: 0x23c, size: 0x4, def value: None
 float_t  ___tiltAccel;

/// @brief Field horizontalAccel, offset: 0x240, size: 0x4, def value: None
 float_t  ___horizontalAccel;

/// @brief Field motorVolumeRampTime, offset: 0x244, size: 0x4, def value: None
 float_t  ___motorVolumeRampTime;

/// @brief Field motorLevel, offset: 0x248, size: 0x4, def value: None
 float_t  ___motorLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___maxAscendSpeed) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___ascendAccelTime) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___ascendWhileFlyingAccelBoost) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___gravityCompensation) == 0x164, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___crashedGravityCompensation) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___maxTurnRate) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___turnAccelTime) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___maxHorizontalSpeed) == 0x174, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___horizontalAccelTime) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___maxHorizontalTiltAngle) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___horizontalTiltTime) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___motorSoundVolumeMinMax) == 0x184, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___crashSoundVolume) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___breathFireVolume) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___wingFlapVolume) == 0x194, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___animation) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___wingFlapAnimName) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___wingFlapAnimSpeed) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___dockedAnimName) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___idleAnimName) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___crashAnimName) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___crashAnimSpeed) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___mouthClosedAnimName) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___mouthBreathFireAnimName) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___shouldFlap) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___isFlapping) == 0x1e1, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___nextFlapEventAnimTime) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___flapAnimEventTime) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___fireBreath) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___fireBreathDuration) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___fireBreathTimeRemaining) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___crashCollider) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___audioSource) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___breathFireSound) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___wingFlapSound) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___crashSound) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___turnRate) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___turnAngle) == 0x22c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___tiltAngle) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___ascendAccel) == 0x234, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___turnAccel) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___tiltAccel) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___horizontalAccel) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___motorVolumeRampTime) == 0x244, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCDragon, ___motorLevel) == 0x248, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::RCDragon) == 0x250, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
