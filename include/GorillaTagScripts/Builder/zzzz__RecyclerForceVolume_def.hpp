#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/RecyclerForceVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RecyclerForceVolume)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
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
class RecyclerForceVolume;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::RecyclerForceVolume*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::RecyclerForceVolume*, "GorillaTagScripts.Builder", "RecyclerForceVolume");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.RecyclerForceVolume
class CORDL_TYPE RecyclerForceVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field accel, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_accel, put=__cordl_internal_set_accel)) float_t  accel;

/// @brief Field applyPullToCenterAcceleration, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyPullToCenterAcceleration, put=__cordl_internal_set_applyPullToCenterAcceleration)) bool  applyPullToCenterAcceleration;

/// @brief Field dampenLateralVelocity, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_dampenLateralVelocity, put=__cordl_internal_set_dampenLateralVelocity)) bool  dampenLateralVelocity;

/// @brief Field dampenXVelPerc, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_dampenXVelPerc, put=__cordl_internal_set_dampenXVelPerc)) float_t  dampenXVelPerc;

/// @brief Field dampenYVelPerc, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_dampenYVelPerc, put=__cordl_internal_set_dampenYVelPerc)) float_t  dampenYVelPerc;

/// @brief Field disableGrip, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableGrip, put=__cordl_internal_set_disableGrip)) bool  disableGrip;

/// @brief Field enterPos, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get_enterPos, put=__cordl_internal_set_enterPos)) ::UnityEngine::Vector3  enterPos;

/// @brief Field hasWindFX, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasWindFX, put=__cordl_internal_set_hasWindFX)) bool  hasWindFX;

/// @brief Field maxDepth, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDepth, put=__cordl_internal_set_maxDepth)) float_t  maxDepth;

/// @brief Field maxSpeed, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed, put=__cordl_internal_set_maxSpeed)) float_t  maxSpeed;

/// @brief Field pullTOCenterMinDistance, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_pullTOCenterMinDistance, put=__cordl_internal_set_pullTOCenterMinDistance)) float_t  pullTOCenterMinDistance;

/// @brief Field pullToCenterAccel, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_pullToCenterAccel, put=__cordl_internal_set_pullToCenterAccel)) float_t  pullToCenterAccel;

/// @brief Field pullToCenterMaxSpeed, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_pullToCenterMaxSpeed, put=__cordl_internal_set_pullToCenterMaxSpeed)) float_t  pullToCenterMaxSpeed;

/// @brief Field scaleWithSize, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_scaleWithSize, put=__cordl_internal_set_scaleWithSize)) bool  scaleWithSize;

/// @brief Field volume, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_volume, put=__cordl_internal_set_volume)) ::UnityW<::UnityEngine::Collider>  volume;

/// @brief Field windEffectRenderer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_windEffectRenderer, put=__cordl_internal_set_windEffectRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  windEffectRenderer;

/// @brief Field windSFX, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_windSFX, put=__cordl_internal_set_windSFX)) ::UnityW<::UnityEngine::GameObject>  windSFX;

/// @brief Method Awake, addr 0x5c355c0, size 0xd0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTagScripts::Builder::RecyclerForceVolume* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5c3590c, size 0x1f0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5c35afc, size 0x4c, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerStay, addr 0x5c35b48, size 0x6b0, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

/// @brief Method TriggerFilter, addr 0x5c35690, size 0x27c, virtual false, abstract: false, final false
inline bool TriggerFilter(::UnityEngine::Collider*  other, ::by_ref<::UnityEngine::Rigidbody*>  rb, ::by_ref<::UnityEngine::Transform*>  xf) ;

constexpr float_t const& __cordl_internal_get_accel() const;

constexpr float_t& __cordl_internal_get_accel() ;

constexpr bool const& __cordl_internal_get_applyPullToCenterAcceleration() const;

constexpr bool& __cordl_internal_get_applyPullToCenterAcceleration() ;

constexpr bool const& __cordl_internal_get_dampenLateralVelocity() const;

constexpr bool& __cordl_internal_get_dampenLateralVelocity() ;

constexpr float_t const& __cordl_internal_get_dampenXVelPerc() const;

constexpr float_t& __cordl_internal_get_dampenXVelPerc() ;

constexpr float_t const& __cordl_internal_get_dampenYVelPerc() const;

constexpr float_t& __cordl_internal_get_dampenYVelPerc() ;

constexpr bool const& __cordl_internal_get_disableGrip() const;

constexpr bool& __cordl_internal_get_disableGrip() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_enterPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_enterPos() ;

constexpr bool const& __cordl_internal_get_hasWindFX() const;

constexpr bool& __cordl_internal_get_hasWindFX() ;

constexpr float_t const& __cordl_internal_get_maxDepth() const;

constexpr float_t& __cordl_internal_get_maxDepth() ;

constexpr float_t const& __cordl_internal_get_maxSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpeed() ;

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

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_windEffectRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_windEffectRenderer() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_windSFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_windSFX() ;

constexpr void __cordl_internal_set_accel(float_t  value) ;

constexpr void __cordl_internal_set_applyPullToCenterAcceleration(bool  value) ;

constexpr void __cordl_internal_set_dampenLateralVelocity(bool  value) ;

constexpr void __cordl_internal_set_dampenXVelPerc(float_t  value) ;

constexpr void __cordl_internal_set_dampenYVelPerc(float_t  value) ;

constexpr void __cordl_internal_set_disableGrip(bool  value) ;

constexpr void __cordl_internal_set_enterPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_hasWindFX(bool  value) ;

constexpr void __cordl_internal_set_maxDepth(float_t  value) ;

constexpr void __cordl_internal_set_maxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_pullTOCenterMinDistance(float_t  value) ;

constexpr void __cordl_internal_set_pullToCenterAccel(float_t  value) ;

constexpr void __cordl_internal_set_pullToCenterMaxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_scaleWithSize(bool  value) ;

constexpr void __cordl_internal_set_volume(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_windEffectRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_windSFX(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5c361f8, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RecyclerForceVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RecyclerForceVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RecyclerForceVolume(RecyclerForceVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecyclerForceVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecyclerForceVolume(RecyclerForceVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4182};

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

/// [FormerlySerializedAs("dampenZVelPerc")]
/// [SerializeField]
/// @brief Field dampenYVelPerc, offset: 0x38, size: 0x4, def value: None
 float_t  ___dampenYVelPerc;

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

/// @brief Field volume, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___volume;

/// @brief Field windSFX, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___windSFX;

/// [SerializeField]
/// @brief Field windEffectRenderer, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___windEffectRenderer;

/// @brief Field hasWindFX, offset: 0x68, size: 0x1, def value: None
 bool  ___hasWindFX;

/// @brief Field enterPos, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___enterPos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::RecyclerForceVolume, ___scaleWithSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::RecyclerForceVolume, ___accel) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::RecyclerForceVolume, ___maxDepth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::RecyclerForceVolume, ___maxSpeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::RecyclerForceVolume, ___disableGrip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::RecyclerForceVolume, ___dampenLateralVelocity) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::RecyclerForceVolume, ___dampenXVelPerc) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::RecyclerForceVolume, ___dampenYVelPerc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::RecyclerForceVolume, ___applyPullToCenterAcceleration) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::RecyclerForceVolume, ___pullToCenterAccel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::RecyclerForceVolume, ___pullToCenterMaxSpeed) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::RecyclerForceVolume, ___pullTOCenterMinDistance) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::RecyclerForceVolume, ___volume) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::RecyclerForceVolume, ___windSFX) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::RecyclerForceVolume, ___windEffectRenderer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::RecyclerForceVolume, ___hasWindFX) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::RecyclerForceVolume, ___enterPos) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::RecyclerForceVolume) == 0x78, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
