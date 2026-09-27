#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/RCBlimp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__RCVehicle_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RCBlimp)
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
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class RCBlimp;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::RCBlimp*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::RCBlimp*, "GorillaTag.Cosmetics", "RCBlimp");
// Dependencies GorillaTag.Cosmetics.RCVehicle, UnityEngine.Vector2
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.RCBlimp
class CORDL_TYPE RCBlimp : public ::GorillaTag::Cosmetics::RCVehicle {
public:
// Declarations
/// @brief Field ascendAccel, offset 0x1d4, size 0x4 
 __declspec(property(get=__cordl_internal_get_ascendAccel, put=__cordl_internal_set_ascendAccel)) float_t  ascendAccel;

/// @brief Field ascendAccelTime, offset 0x15c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ascendAccelTime, put=__cordl_internal_set_ascendAccelTime)) float_t  ascendAccelTime;

/// @brief Field audioSource, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field blimpDeflateBlendWeight, offset 0x1f4, size 0x4 
 __declspec(property(get=__cordl_internal_get_blimpDeflateBlendWeight, put=__cordl_internal_set_blimpDeflateBlendWeight)) float_t  blimpDeflateBlendWeight;

/// @brief Field blimpMesh, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_blimpMesh, put=__cordl_internal_set_blimpMesh)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  blimpMesh;

/// @brief Field crashCollider, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_crashCollider, put=__cordl_internal_set_crashCollider)) ::UnityW<::UnityEngine::Collider>  crashCollider;

/// @brief Field crashedGravityCompensation, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get_crashedGravityCompensation, put=__cordl_internal_set_crashedGravityCompensation)) float_t  crashedGravityCompensation;

/// @brief Field deflateRate, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_deflateRate, put=__cordl_internal_set_deflateRate)) float_t  deflateRate;

/// @brief Field deflateSound, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_deflateSound, put=__cordl_internal_set_deflateSound)) ::UnityW<::UnityEngine::AudioClip>  deflateSound;

/// @brief Field deflateSoundVolume, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get_deflateSoundVolume, put=__cordl_internal_set_deflateSoundVolume)) float_t  deflateSoundVolume;

/// @brief Field gravityCompensation, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityCompensation, put=__cordl_internal_set_gravityCompensation)) float_t  gravityCompensation;

/// @brief Field horizontalAccel, offset 0x1e0, size 0x4 
 __declspec(property(get=__cordl_internal_get_horizontalAccel, put=__cordl_internal_set_horizontalAccel)) float_t  horizontalAccel;

/// @brief Field horizontalAccelTime, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get_horizontalAccelTime, put=__cordl_internal_set_horizontalAccelTime)) float_t  horizontalAccelTime;

/// @brief Field horizontalTiltTime, offset 0x17c, size 0x4 
 __declspec(property(get=__cordl_internal_get_horizontalTiltTime, put=__cordl_internal_set_horizontalTiltTime)) float_t  horizontalTiltTime;

/// @brief Field leftPropeller, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftPropeller, put=__cordl_internal_set_leftPropeller)) ::UnityW<::UnityEngine::Transform>  leftPropeller;

/// @brief Field leftPropellerAngle, offset 0x1e4, size 0x4 
 __declspec(property(get=__cordl_internal_get_leftPropellerAngle, put=__cordl_internal_set_leftPropellerAngle)) float_t  leftPropellerAngle;

/// @brief Field leftPropellerSpinRate, offset 0x1ec, size 0x4 
 __declspec(property(get=__cordl_internal_get_leftPropellerSpinRate, put=__cordl_internal_set_leftPropellerSpinRate)) float_t  leftPropellerSpinRate;

/// @brief Field maxAscendSpeed, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxAscendSpeed, put=__cordl_internal_set_maxAscendSpeed)) float_t  maxAscendSpeed;

/// @brief Field maxHorizontalSpeed, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHorizontalSpeed, put=__cordl_internal_set_maxHorizontalSpeed)) float_t  maxHorizontalSpeed;

/// @brief Field maxHorizontalTiltAngle, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHorizontalTiltAngle, put=__cordl_internal_set_maxHorizontalTiltAngle)) float_t  maxHorizontalTiltAngle;

/// @brief Field maxTurnRate, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTurnRate, put=__cordl_internal_set_maxTurnRate)) float_t  maxTurnRate;

/// @brief Field motorLevel, offset 0x200, size 0x4 
 __declspec(property(get=__cordl_internal_get_motorLevel, put=__cordl_internal_set_motorLevel)) float_t  motorLevel;

/// @brief Field motorSound, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_motorSound, put=__cordl_internal_set_motorSound)) ::UnityW<::UnityEngine::AudioClip>  motorSound;

/// @brief Field motorSoundVolumeMinMax, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_motorSoundVolumeMinMax, put=__cordl_internal_set_motorSoundVolumeMinMax)) ::UnityEngine::Vector2  motorSoundVolumeMinMax;

/// @brief Field motorVolumeRampTime, offset 0x1fc, size 0x4 
 __declspec(property(get=__cordl_internal_get_motorVolumeRampTime, put=__cordl_internal_set_motorVolumeRampTime)) float_t  motorVolumeRampTime;

/// @brief Field rightPropeller, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightPropeller, put=__cordl_internal_set_rightPropeller)) ::UnityW<::UnityEngine::Transform>  rightPropeller;

/// @brief Field rightPropellerAngle, offset 0x1e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_rightPropellerAngle, put=__cordl_internal_set_rightPropellerAngle)) float_t  rightPropellerAngle;

/// @brief Field rightPropellerSpinRate, offset 0x1f0, size 0x4 
 __declspec(property(get=__cordl_internal_get_rightPropellerSpinRate, put=__cordl_internal_set_rightPropellerSpinRate)) float_t  rightPropellerSpinRate;

/// @brief Field tiltAccel, offset 0x1dc, size 0x4 
 __declspec(property(get=__cordl_internal_get_tiltAccel, put=__cordl_internal_set_tiltAccel)) float_t  tiltAccel;

/// @brief Field tiltAngle, offset 0x1d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_tiltAngle, put=__cordl_internal_set_tiltAngle)) float_t  tiltAngle;

/// @brief Field turnAccel, offset 0x1d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnAccel, put=__cordl_internal_set_turnAccel)) float_t  turnAccel;

/// @brief Field turnAccelTime, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnAccelTime, put=__cordl_internal_set_turnAccelTime)) float_t  turnAccelTime;

/// @brief Field turnAngle, offset 0x1cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnAngle, put=__cordl_internal_set_turnAngle)) float_t  turnAngle;

/// @brief Field turnRate, offset 0x1c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnRate, put=__cordl_internal_set_turnRate)) float_t  turnRate;

/// @brief Method AuthorityBeginDocked, addr 0x5d65118, size 0x258, virtual true, abstract: false, final false
inline void AuthorityBeginDocked() ;

/// @brief Method AuthorityUpdate, addr 0x5d65544, size 0x12c, virtual true, abstract: false, final false
inline void AuthorityUpdate(float_t  dt) ;

/// @brief Method Awake, addr 0x5d65470, size 0x54, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x5d661c0, size 0x580, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GorillaTag::Cosmetics::RCBlimp* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d6551c, size 0x20, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnTriggerEnter, addr 0x5d668ec, size 0x43c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method RemoteUpdate, addr 0x5d658e8, size 0xbc, virtual true, abstract: false, final false
inline void RemoteUpdate(float_t  dt) ;

/// @brief Method SharedUpdate, addr 0x5d65cbc, size 0x500, virtual true, abstract: false, final false
inline void SharedUpdate(float_t  dt) ;

constexpr float_t const& __cordl_internal_get_ascendAccel() const;

constexpr float_t& __cordl_internal_get_ascendAccel() ;

constexpr float_t const& __cordl_internal_get_ascendAccelTime() const;

constexpr float_t& __cordl_internal_get_ascendAccelTime() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_blimpDeflateBlendWeight() const;

constexpr float_t& __cordl_internal_get_blimpDeflateBlendWeight() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_blimpMesh() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_blimpMesh() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_crashCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_crashCollider() ;

constexpr float_t const& __cordl_internal_get_crashedGravityCompensation() const;

constexpr float_t& __cordl_internal_get_crashedGravityCompensation() ;

constexpr float_t const& __cordl_internal_get_deflateRate() const;

constexpr float_t& __cordl_internal_get_deflateRate() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_deflateSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_deflateSound() ;

constexpr float_t const& __cordl_internal_get_deflateSoundVolume() const;

constexpr float_t& __cordl_internal_get_deflateSoundVolume() ;

constexpr float_t const& __cordl_internal_get_gravityCompensation() const;

constexpr float_t& __cordl_internal_get_gravityCompensation() ;

constexpr float_t const& __cordl_internal_get_horizontalAccel() const;

constexpr float_t& __cordl_internal_get_horizontalAccel() ;

constexpr float_t const& __cordl_internal_get_horizontalAccelTime() const;

constexpr float_t& __cordl_internal_get_horizontalAccelTime() ;

constexpr float_t const& __cordl_internal_get_horizontalTiltTime() const;

constexpr float_t& __cordl_internal_get_horizontalTiltTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftPropeller() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftPropeller() ;

constexpr float_t const& __cordl_internal_get_leftPropellerAngle() const;

constexpr float_t& __cordl_internal_get_leftPropellerAngle() ;

constexpr float_t const& __cordl_internal_get_leftPropellerSpinRate() const;

constexpr float_t& __cordl_internal_get_leftPropellerSpinRate() ;

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

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_motorSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_motorSound() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_motorSoundVolumeMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_motorSoundVolumeMinMax() ;

constexpr float_t const& __cordl_internal_get_motorVolumeRampTime() const;

constexpr float_t& __cordl_internal_get_motorVolumeRampTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightPropeller() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightPropeller() ;

constexpr float_t const& __cordl_internal_get_rightPropellerAngle() const;

constexpr float_t& __cordl_internal_get_rightPropellerAngle() ;

constexpr float_t const& __cordl_internal_get_rightPropellerSpinRate() const;

constexpr float_t& __cordl_internal_get_rightPropellerSpinRate() ;

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

constexpr void __cordl_internal_set_ascendAccel(float_t  value) ;

constexpr void __cordl_internal_set_ascendAccelTime(float_t  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_blimpDeflateBlendWeight(float_t  value) ;

constexpr void __cordl_internal_set_blimpMesh(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_crashCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_crashedGravityCompensation(float_t  value) ;

constexpr void __cordl_internal_set_deflateRate(float_t  value) ;

constexpr void __cordl_internal_set_deflateSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_deflateSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_gravityCompensation(float_t  value) ;

constexpr void __cordl_internal_set_horizontalAccel(float_t  value) ;

constexpr void __cordl_internal_set_horizontalAccelTime(float_t  value) ;

constexpr void __cordl_internal_set_horizontalTiltTime(float_t  value) ;

constexpr void __cordl_internal_set_leftPropeller(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_leftPropellerAngle(float_t  value) ;

constexpr void __cordl_internal_set_leftPropellerSpinRate(float_t  value) ;

constexpr void __cordl_internal_set_maxAscendSpeed(float_t  value) ;

constexpr void __cordl_internal_set_maxHorizontalSpeed(float_t  value) ;

constexpr void __cordl_internal_set_maxHorizontalTiltAngle(float_t  value) ;

constexpr void __cordl_internal_set_maxTurnRate(float_t  value) ;

constexpr void __cordl_internal_set_motorLevel(float_t  value) ;

constexpr void __cordl_internal_set_motorSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_motorSoundVolumeMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_motorVolumeRampTime(float_t  value) ;

constexpr void __cordl_internal_set_rightPropeller(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightPropellerAngle(float_t  value) ;

constexpr void __cordl_internal_set_rightPropellerSpinRate(float_t  value) ;

constexpr void __cordl_internal_set_tiltAccel(float_t  value) ;

constexpr void __cordl_internal_set_tiltAngle(float_t  value) ;

constexpr void __cordl_internal_set_turnAccel(float_t  value) ;

constexpr void __cordl_internal_set_turnAccelTime(float_t  value) ;

constexpr void __cordl_internal_set_turnAngle(float_t  value) ;

constexpr void __cordl_internal_set_turnRate(float_t  value) ;

/// @brief Method .ctor, addr 0x5d66d28, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RCBlimp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RCBlimp", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RCBlimp(RCBlimp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RCBlimp", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RCBlimp(RCBlimp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4832};

/// @brief Field propellerIdleAcc offset 0xffffffff size 0x4
static constexpr float_t  propellerIdleAcc{static_cast<float_t>(1.0f)};

/// @brief Field propellerIdleSpinRate offset 0xffffffff size 0x4
static constexpr float_t  propellerIdleSpinRate{static_cast<float_t>(0.6f)};

/// @brief Field propellerMaxAcc offset 0xffffffff size 0x4
static constexpr float_t  propellerMaxAcc{static_cast<float_t>(6.6666665f)};

/// @brief Field propellerMaxSpinRate offset 0xffffffff size 0x4
static constexpr float_t  propellerMaxSpinRate{static_cast<float_t>(5.0f)};

/// [SerializeField]
/// @brief Field maxAscendSpeed, offset: 0x158, size: 0x4, def value: None
 float_t  ___maxAscendSpeed;

/// [SerializeField]
/// @brief Field ascendAccelTime, offset: 0x15c, size: 0x4, def value: None
 float_t  ___ascendAccelTime;

/// [SerializeField]
/// @brief Field gravityCompensation, offset: 0x160, size: 0x4, def value: None
 float_t  ___gravityCompensation;

/// [SerializeField]
/// @brief Field crashedGravityCompensation, offset: 0x164, size: 0x4, def value: None
 float_t  ___crashedGravityCompensation;

/// [SerializeField]
/// @brief Field maxTurnRate, offset: 0x168, size: 0x4, def value: None
 float_t  ___maxTurnRate;

/// [SerializeField]
/// @brief Field turnAccelTime, offset: 0x16c, size: 0x4, def value: None
 float_t  ___turnAccelTime;

/// [SerializeField]
/// @brief Field maxHorizontalSpeed, offset: 0x170, size: 0x4, def value: None
 float_t  ___maxHorizontalSpeed;

/// [SerializeField]
/// @brief Field horizontalAccelTime, offset: 0x174, size: 0x4, def value: None
 float_t  ___horizontalAccelTime;

/// [SerializeField]
/// @brief Field maxHorizontalTiltAngle, offset: 0x178, size: 0x4, def value: None
 float_t  ___maxHorizontalTiltAngle;

/// [SerializeField]
/// @brief Field horizontalTiltTime, offset: 0x17c, size: 0x4, def value: None
 float_t  ___horizontalTiltTime;

/// [SerializeField]
/// @brief Field motorSoundVolumeMinMax, offset: 0x180, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___motorSoundVolumeMinMax;

/// [SerializeField]
/// @brief Field deflateSoundVolume, offset: 0x188, size: 0x4, def value: None
 float_t  ___deflateSoundVolume;

/// [SerializeField]
/// @brief Field crashCollider, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___crashCollider;

/// [SerializeField]
/// @brief Field leftPropeller, offset: 0x198, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftPropeller;

/// [SerializeField]
/// @brief Field rightPropeller, offset: 0x1a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightPropeller;

/// [SerializeField]
/// @brief Field blimpMesh, offset: 0x1a8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___blimpMesh;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x1b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field motorSound, offset: 0x1b8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___motorSound;

/// [SerializeField]
/// @brief Field deflateSound, offset: 0x1c0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___deflateSound;

/// @brief Field turnRate, offset: 0x1c8, size: 0x4, def value: None
 float_t  ___turnRate;

/// @brief Field turnAngle, offset: 0x1cc, size: 0x4, def value: None
 float_t  ___turnAngle;

/// @brief Field tiltAngle, offset: 0x1d0, size: 0x4, def value: None
 float_t  ___tiltAngle;

/// @brief Field ascendAccel, offset: 0x1d4, size: 0x4, def value: None
 float_t  ___ascendAccel;

/// @brief Field turnAccel, offset: 0x1d8, size: 0x4, def value: None
 float_t  ___turnAccel;

/// @brief Field tiltAccel, offset: 0x1dc, size: 0x4, def value: None
 float_t  ___tiltAccel;

/// @brief Field horizontalAccel, offset: 0x1e0, size: 0x4, def value: None
 float_t  ___horizontalAccel;

/// @brief Field leftPropellerAngle, offset: 0x1e4, size: 0x4, def value: None
 float_t  ___leftPropellerAngle;

/// @brief Field rightPropellerAngle, offset: 0x1e8, size: 0x4, def value: None
 float_t  ___rightPropellerAngle;

/// @brief Field leftPropellerSpinRate, offset: 0x1ec, size: 0x4, def value: None
 float_t  ___leftPropellerSpinRate;

/// @brief Field rightPropellerSpinRate, offset: 0x1f0, size: 0x4, def value: None
 float_t  ___rightPropellerSpinRate;

/// @brief Field blimpDeflateBlendWeight, offset: 0x1f4, size: 0x4, def value: None
 float_t  ___blimpDeflateBlendWeight;

/// @brief Field deflateRate, offset: 0x1f8, size: 0x4, def value: None
 float_t  ___deflateRate;

/// @brief Field motorVolumeRampTime, offset: 0x1fc, size: 0x4, def value: None
 float_t  ___motorVolumeRampTime;

/// @brief Field motorLevel, offset: 0x200, size: 0x4, def value: None
 float_t  ___motorLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___maxAscendSpeed) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___ascendAccelTime) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___gravityCompensation) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___crashedGravityCompensation) == 0x164, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___maxTurnRate) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___turnAccelTime) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___maxHorizontalSpeed) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___horizontalAccelTime) == 0x174, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___maxHorizontalTiltAngle) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___horizontalTiltTime) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___motorSoundVolumeMinMax) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___deflateSoundVolume) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___crashCollider) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___leftPropeller) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___rightPropeller) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___blimpMesh) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___audioSource) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___motorSound) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___deflateSound) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___turnRate) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___turnAngle) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___tiltAngle) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___ascendAccel) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___turnAccel) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___tiltAccel) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___horizontalAccel) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___leftPropellerAngle) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___rightPropellerAngle) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___leftPropellerSpinRate) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___rightPropellerSpinRate) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___blimpDeflateBlendWeight) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___deflateRate) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___motorVolumeRampTime) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCBlimp, ___motorLevel) == 0x200, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::RCBlimp) == 0x208, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
