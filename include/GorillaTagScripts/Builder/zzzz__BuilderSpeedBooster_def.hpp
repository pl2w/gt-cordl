#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderSpeedBooster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BuilderSpeedBooster)
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
class MeshRenderer;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderSpeedBooster;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderSpeedBooster*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderSpeedBooster*, "GorillaTagScripts.Builder", "BuilderSpeedBooster");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderSpeedBooster
class CORDL_TYPE BuilderSpeedBooster : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field accel, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_accel, put=__cordl_internal_set_accel)) float_t  accel;

/// @brief Field addedWorldUpVelocity, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_addedWorldUpVelocity, put=__cordl_internal_set_addedWorldUpVelocity)) float_t  addedWorldUpVelocity;

/// @brief Field applyPullToCenterAcceleration, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyPullToCenterAcceleration, put=__cordl_internal_set_applyPullToCenterAcceleration)) bool  applyPullToCenterAcceleration;

/// @brief Field audioSource, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field boosting, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_boosting, put=__cordl_internal_set_boosting)) bool  boosting;

/// @brief Field dampenLateralVelocity, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_dampenLateralVelocity, put=__cordl_internal_set_dampenLateralVelocity)) bool  dampenLateralVelocity;

/// @brief Field dampenXVelPerc, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_dampenXVelPerc, put=__cordl_internal_set_dampenXVelPerc)) float_t  dampenXVelPerc;

/// @brief Field dampenZVelPerc, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_dampenZVelPerc, put=__cordl_internal_set_dampenZVelPerc)) float_t  dampenZVelPerc;

/// @brief Field disableGrip, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableGrip, put=__cordl_internal_set_disableGrip)) bool  disableGrip;

/// @brief Field enterPos, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get_enterPos, put=__cordl_internal_set_enterPos)) ::UnityEngine::Vector3  enterPos;

/// @brief Field enterTime, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_enterTime, put=__cordl_internal_set_enterTime)) double_t  enterTime;

/// @brief Field exitClip, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_exitClip, put=__cordl_internal_set_exitClip)) ::UnityW<::UnityEngine::AudioClip>  exitClip;

/// @brief Field hasCheckedZone, offset 0x8e, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCheckedZone, put=__cordl_internal_set_hasCheckedZone)) bool  hasCheckedZone;

/// @brief Field ignoreMonkeScale, offset 0x8d, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreMonkeScale, put=__cordl_internal_set_ignoreMonkeScale)) bool  ignoreMonkeScale;

/// @brief Field maxBoostDuration, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxBoostDuration, put=__cordl_internal_set_maxBoostDuration)) float_t  maxBoostDuration;

/// @brief Field maxDepth, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDepth, put=__cordl_internal_set_maxDepth)) float_t  maxDepth;

/// @brief Field maxSpeed, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed, put=__cordl_internal_set_maxSpeed)) float_t  maxSpeed;

/// @brief Field positiveForce, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_positiveForce, put=__cordl_internal_set_positiveForce)) bool  positiveForce;

/// @brief Field pullTOCenterMinDistance, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_pullTOCenterMinDistance, put=__cordl_internal_set_pullTOCenterMinDistance)) float_t  pullTOCenterMinDistance;

/// @brief Field pullToCenterAccel, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_pullToCenterAccel, put=__cordl_internal_set_pullToCenterAccel)) float_t  pullToCenterAccel;

/// @brief Field pullToCenterMaxSpeed, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_pullToCenterMaxSpeed, put=__cordl_internal_set_pullToCenterMaxSpeed)) float_t  pullToCenterMaxSpeed;

/// @brief Field scaleWithSize, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_scaleWithSize, put=__cordl_internal_set_scaleWithSize)) bool  scaleWithSize;

/// @brief Field volume, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_volume, put=__cordl_internal_set_volume)) ::UnityW<::UnityEngine::Collider>  volume;

/// @brief Field windRenderer, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_windRenderer, put=__cordl_internal_set_windRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  windRenderer;

/// @brief Method Awake, addr 0x5c33298, size 0x7c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckTableZone, addr 0x5c33664, size 0x11c, virtual false, abstract: false, final false
inline void CheckTableZone() ;

/// @brief Method LateUpdate, addr 0x5c33314, size 0xd4, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GorillaTagScripts::Builder::BuilderSpeedBooster* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5c344b8, size 0x154, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnTriggerEnter, addr 0x5c33780, size 0x204, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5c33984, size 0x180, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerStay, addr 0x5c33b04, size 0x9b4, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

/// @brief Method TriggerFilter, addr 0x5c333e8, size 0x27c, virtual false, abstract: false, final false
inline bool TriggerFilter(::UnityEngine::Collider*  other, ::by_ref<::UnityEngine::Rigidbody*>  rb, ::by_ref<::UnityEngine::Transform*>  xf) ;

constexpr float_t const& __cordl_internal_get_accel() const;

constexpr float_t& __cordl_internal_get_accel() ;

constexpr float_t const& __cordl_internal_get_addedWorldUpVelocity() const;

constexpr float_t& __cordl_internal_get_addedWorldUpVelocity() ;

constexpr bool const& __cordl_internal_get_applyPullToCenterAcceleration() const;

constexpr bool& __cordl_internal_get_applyPullToCenterAcceleration() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr bool const& __cordl_internal_get_boosting() const;

constexpr bool& __cordl_internal_get_boosting() ;

constexpr bool const& __cordl_internal_get_dampenLateralVelocity() const;

constexpr bool& __cordl_internal_get_dampenLateralVelocity() ;

constexpr float_t const& __cordl_internal_get_dampenXVelPerc() const;

constexpr float_t& __cordl_internal_get_dampenXVelPerc() ;

constexpr float_t const& __cordl_internal_get_dampenZVelPerc() const;

constexpr float_t& __cordl_internal_get_dampenZVelPerc() ;

constexpr bool const& __cordl_internal_get_disableGrip() const;

constexpr bool& __cordl_internal_get_disableGrip() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_enterPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_enterPos() ;

constexpr double_t const& __cordl_internal_get_enterTime() const;

constexpr double_t& __cordl_internal_get_enterTime() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_exitClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_exitClip() ;

constexpr bool const& __cordl_internal_get_hasCheckedZone() const;

constexpr bool& __cordl_internal_get_hasCheckedZone() ;

constexpr bool const& __cordl_internal_get_ignoreMonkeScale() const;

constexpr bool& __cordl_internal_get_ignoreMonkeScale() ;

constexpr float_t const& __cordl_internal_get_maxBoostDuration() const;

constexpr float_t& __cordl_internal_get_maxBoostDuration() ;

constexpr float_t const& __cordl_internal_get_maxDepth() const;

constexpr float_t& __cordl_internal_get_maxDepth() ;

constexpr float_t const& __cordl_internal_get_maxSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpeed() ;

constexpr bool const& __cordl_internal_get_positiveForce() const;

constexpr bool& __cordl_internal_get_positiveForce() ;

constexpr float_t const& __cordl_internal_get_pullTOCenterMinDistance() const;

constexpr float_t& __cordl_internal_get_pullTOCenterMinDistance() ;

constexpr float_t const& __cordl_internal_get_pullToCenterAccel() const;

constexpr float_t& __cordl_internal_get_pullToCenterAccel() ;

constexpr float_t const& __cordl_internal_get_pullToCenterMaxSpeed() const;

constexpr float_t& __cordl_internal_get_pullToCenterMaxSpeed() ;

constexpr bool const& __cordl_internal_get_scaleWithSize() const;

constexpr bool& __cordl_internal_get_scaleWithSize() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_volume() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_volume() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_windRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_windRenderer() ;

constexpr void __cordl_internal_set_accel(float_t  value) ;

constexpr void __cordl_internal_set_addedWorldUpVelocity(float_t  value) ;

constexpr void __cordl_internal_set_applyPullToCenterAcceleration(bool  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_boosting(bool  value) ;

constexpr void __cordl_internal_set_dampenLateralVelocity(bool  value) ;

constexpr void __cordl_internal_set_dampenXVelPerc(float_t  value) ;

constexpr void __cordl_internal_set_dampenZVelPerc(float_t  value) ;

constexpr void __cordl_internal_set_disableGrip(bool  value) ;

constexpr void __cordl_internal_set_enterPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_enterTime(double_t  value) ;

constexpr void __cordl_internal_set_exitClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_hasCheckedZone(bool  value) ;

constexpr void __cordl_internal_set_ignoreMonkeScale(bool  value) ;

constexpr void __cordl_internal_set_maxBoostDuration(float_t  value) ;

constexpr void __cordl_internal_set_maxDepth(float_t  value) ;

constexpr void __cordl_internal_set_maxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_positiveForce(bool  value) ;

constexpr void __cordl_internal_set_pullTOCenterMinDistance(float_t  value) ;

constexpr void __cordl_internal_set_pullToCenterAccel(float_t  value) ;

constexpr void __cordl_internal_set_pullToCenterMaxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_scaleWithSize(bool  value) ;

constexpr void __cordl_internal_set_volume(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_windRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x5c3460c, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderSpeedBooster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderSpeedBooster", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderSpeedBooster(BuilderSpeedBooster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderSpeedBooster", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderSpeedBooster(BuilderSpeedBooster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4178};

/// [SerializeField]
/// @brief Field scaleWithSize, offset: 0x20, size: 0x1, def value: None
 bool  ___scaleWithSize;

/// [SerializeField]
/// @brief Field accel, offset: 0x24, size: 0x4, def value: None
 float_t  ___accel;

/// [SerializeField]
/// @brief Field maxDepth, offset: 0x28, size: 0x4, def value: None
 float_t  ___maxDepth;

/// [SerializeField]
/// @brief Field maxSpeed, offset: 0x2c, size: 0x4, def value: None
 float_t  ___maxSpeed;

/// [SerializeField]
/// @brief Field disableGrip, offset: 0x30, size: 0x1, def value: None
 bool  ___disableGrip;

/// [SerializeField]
/// @brief Field dampenLateralVelocity, offset: 0x31, size: 0x1, def value: None
 bool  ___dampenLateralVelocity;

/// [SerializeField]
/// @brief Field dampenXVelPerc, offset: 0x34, size: 0x4, def value: None
 float_t  ___dampenXVelPerc;

/// [SerializeField]
/// @brief Field dampenZVelPerc, offset: 0x38, size: 0x4, def value: None
 float_t  ___dampenZVelPerc;

/// [SerializeField]
/// @brief Field applyPullToCenterAcceleration, offset: 0x3c, size: 0x1, def value: None
 bool  ___applyPullToCenterAcceleration;

/// [SerializeField]
/// @brief Field pullToCenterAccel, offset: 0x40, size: 0x4, def value: None
 float_t  ___pullToCenterAccel;

/// [SerializeField]
/// @brief Field pullToCenterMaxSpeed, offset: 0x44, size: 0x4, def value: None
 float_t  ___pullToCenterMaxSpeed;

/// [SerializeField]
/// @brief Field pullTOCenterMinDistance, offset: 0x48, size: 0x4, def value: None
 float_t  ___pullTOCenterMinDistance;

/// [SerializeField]
/// @brief Field addedWorldUpVelocity, offset: 0x4c, size: 0x4, def value: None
 float_t  ___addedWorldUpVelocity;

/// [SerializeField]
/// @brief Field maxBoostDuration, offset: 0x50, size: 0x4, def value: None
 float_t  ___maxBoostDuration;

/// @brief Field boosting, offset: 0x54, size: 0x1, def value: None
 bool  ___boosting;

/// @brief Field enterTime, offset: 0x58, size: 0x8, def value: None
 double_t  ___enterTime;

/// @brief Field volume, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___volume;

/// @brief Field exitClip, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___exitClip;

/// @brief Field audioSource, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field windRenderer, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___windRenderer;

/// @brief Field enterPos, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___enterPos;

/// @brief Field positiveForce, offset: 0x8c, size: 0x1, def value: None
 bool  ___positiveForce;

/// @brief Field ignoreMonkeScale, offset: 0x8d, size: 0x1, def value: None
 bool  ___ignoreMonkeScale;

/// @brief Field hasCheckedZone, offset: 0x8e, size: 0x1, def value: None
 bool  ___hasCheckedZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___scaleWithSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___accel) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___maxDepth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___maxSpeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___disableGrip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___dampenLateralVelocity) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___dampenXVelPerc) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___dampenZVelPerc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___applyPullToCenterAcceleration) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___pullToCenterAccel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___pullToCenterMaxSpeed) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___pullTOCenterMinDistance) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___addedWorldUpVelocity) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___maxBoostDuration) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___boosting) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___enterTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___volume) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___exitClip) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___audioSource) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___windRenderer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___enterPos) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___positiveForce) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___ignoreMonkeScale) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSpeedBooster, ___hasCheckedZone) == 0x8e, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderSpeedBooster) == 0x90, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
