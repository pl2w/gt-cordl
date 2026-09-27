#pragma once
// IWYU pragma private; include "GlobalNamespace/BalloonDynamics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BalloonDynamics)
namespace GlobalNamespace {
class ITetheredObjectBehavior;
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
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BalloonDynamics;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BalloonDynamics*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BalloonDynamics*, "", "BalloonDynamics");
// Dependencies UnityEngine.Bounds, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BalloonDynamics
class CORDL_TYPE BalloonDynamics : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ColliderEnabled)) bool  ColliderEnabled;

/// @brief Field airResistance, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_airResistance, put=__cordl_internal_set_airResistance)) float_t  airResistance;

/// @brief Field antiSpinTorque, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_antiSpinTorque, put=__cordl_internal_set_antiSpinTorque)) float_t  antiSpinTorque;

/// @brief Field balloonBopSource, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_balloonBopSource, put=__cordl_internal_set_balloonBopSource)) ::UnityW<::UnityEngine::AudioSource>  balloonBopSource;

/// @brief Field balloonCollider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_balloonCollider, put=__cordl_internal_set_balloonCollider)) ::UnityW<::UnityEngine::Collider>  balloonCollider;

/// @brief Field balloonScale, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_balloonScale, put=__cordl_internal_set_balloonScale)) float_t  balloonScale;

/// @brief Field bopSpeed, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_bopSpeed, put=__cordl_internal_set_bopSpeed)) float_t  bopSpeed;

/// @brief Field bopSpeedCap, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_bopSpeedCap, put=__cordl_internal_set_bopSpeedCap)) float_t  bopSpeedCap;

/// @brief Field bounds, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get_bounds, put=__cordl_internal_set_bounds)) ::UnityEngine::Bounds  bounds;

/// @brief Field bouyancyActualHeight, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_bouyancyActualHeight, put=__cordl_internal_set_bouyancyActualHeight)) float_t  bouyancyActualHeight;

/// @brief Field bouyancyForce, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_bouyancyForce, put=__cordl_internal_set_bouyancyForce)) float_t  bouyancyForce;

/// @brief Field bouyancyMaxHeight, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_bouyancyMaxHeight, put=__cordl_internal_set_bouyancyMaxHeight)) float_t  bouyancyMaxHeight;

/// @brief Field bouyancyMinHeight, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bouyancyMinHeight, put=__cordl_internal_set_bouyancyMinHeight)) float_t  bouyancyMinHeight;

/// @brief Field enableDistanceConstraints, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableDistanceConstraints, put=__cordl_internal_set_enableDistanceConstraints)) bool  enableDistanceConstraints;

/// @brief Field enableDynamics, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableDynamics, put=__cordl_internal_set_enableDynamics)) bool  enableDynamics;

/// @brief Field grabPt, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabPt, put=__cordl_internal_set_grabPt)) ::UnityW<::UnityEngine::Transform>  grabPt;

/// @brief Field grabPtInitParent, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabPtInitParent, put=__cordl_internal_set_grabPtInitParent)) ::UnityW<::UnityEngine::Transform>  grabPtInitParent;

/// @brief Field knot, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_knot, put=__cordl_internal_set_knot)) ::UnityW<::UnityEngine::GameObject>  knot;

/// @brief Field knotRb, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_knotRb, put=__cordl_internal_set_knotRb)) ::UnityW<::UnityEngine::Rigidbody>  knotRb;

/// @brief Field maximumVelocity, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maximumVelocity, put=__cordl_internal_set_maximumVelocity)) float_t  maximumVelocity;

/// @brief Field rb, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field stringLength, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_stringLength, put=__cordl_internal_set_stringLength)) float_t  stringLength;

/// @brief Field stringStrength, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_stringStrength, put=__cordl_internal_set_stringStrength)) float_t  stringStrength;

/// @brief Field stringStretch, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_stringStretch, put=__cordl_internal_set_stringStretch)) float_t  stringStretch;

/// @brief Field upRightTorque, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_upRightTorque, put=__cordl_internal_set_upRightTorque)) float_t  upRightTorque;

/// @brief Field varianceMaxheight, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_varianceMaxheight, put=__cordl_internal_set_varianceMaxheight)) float_t  varianceMaxheight;

/// @brief Convert operator to "::GlobalNamespace::ITetheredObjectBehavior"
constexpr operator  ::GlobalNamespace::ITetheredObjectBehavior*() noexcept;

/// @brief Method ApplyAirResistance, addr 0x57173c4, size 0x50, virtual false, abstract: false, final false
inline void ApplyAirResistance() ;

/// @brief Method ApplyAntiSpinForce, addr 0x5717354, size 0x70, virtual false, abstract: false, final false
inline void ApplyAntiSpinForce() ;

/// @brief Method ApplyBouyancyForce, addr 0x57171c4, size 0xbc, virtual false, abstract: false, final false
inline void ApplyBouyancyForce() ;

/// @brief Method ApplyDistanceConstraint, addr 0x5717414, size 0x348, virtual false, abstract: false, final false
inline void ApplyDistanceConstraint() ;

/// @brief Method ApplyUpRightForce, addr 0x5717280, size 0xd4, virtual false, abstract: false, final false
inline void ApplyUpRightForce() ;

/// @brief Method Awake, addr 0x5716fd8, size 0xf4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method EnableDistanceConstraints, addr 0x57178f0, size 0xc, virtual true, abstract: false, final true
inline void EnableDistanceConstraints(bool  enable, float_t  scale) ;

/// @brief Method EnableDynamics, addr 0x571775c, size 0x194, virtual true, abstract: false, final true
inline void EnableDynamics(bool  enable, bool  collider, bool  kinematic) ;

/// @brief Method FixedUpdate, addr 0x5717980, size 0x1c8, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method ITetheredObjectBehavior.DbgClear, addr 0x5717b48, size 0x38, virtual true, abstract: false, final true
inline void ITetheredObjectBehavior_DbgClear() ;

/// @brief Method ITetheredObjectBehavior.IsEnabled, addr 0x5717b80, size 0x8, virtual true, abstract: false, final true
inline bool ITetheredObjectBehavior_IsEnabled() ;

/// @brief Method ITetheredObjectBehavior.TriggerEnter, addr 0x5717b88, size 0x59c, virtual true, abstract: false, final true
inline void ITetheredObjectBehavior_TriggerEnter(::UnityEngine::Collider*  other, ::by_ref<::UnityEngine::Vector3>  force, ::by_ref<::UnityEngine::Vector3>  collisionPt, ::by_ref<bool>  transferOwnership) ;

static inline ::GlobalNamespace::BalloonDynamics* New_ctor() ;

/// @brief Method ReParent, addr 0x571710c, size 0xb8, virtual true, abstract: false, final true
inline void ReParent() ;

/// @brief Method ReturnStep, addr 0x5718124, size 0x8, virtual true, abstract: false, final true
inline bool ReturnStep() ;

/// @brief Method Start, addr 0x57170cc, size 0x40, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_airResistance() const;

constexpr float_t& __cordl_internal_get_airResistance() ;

constexpr float_t const& __cordl_internal_get_antiSpinTorque() const;

constexpr float_t& __cordl_internal_get_antiSpinTorque() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_balloonBopSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_balloonBopSource() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_balloonCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_balloonCollider() ;

constexpr float_t const& __cordl_internal_get_balloonScale() const;

constexpr float_t& __cordl_internal_get_balloonScale() ;

constexpr float_t const& __cordl_internal_get_bopSpeed() const;

constexpr float_t& __cordl_internal_get_bopSpeed() ;

constexpr float_t const& __cordl_internal_get_bopSpeedCap() const;

constexpr float_t& __cordl_internal_get_bopSpeedCap() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_bounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_bounds() ;

constexpr float_t const& __cordl_internal_get_bouyancyActualHeight() const;

constexpr float_t& __cordl_internal_get_bouyancyActualHeight() ;

constexpr float_t const& __cordl_internal_get_bouyancyForce() const;

constexpr float_t& __cordl_internal_get_bouyancyForce() ;

constexpr float_t const& __cordl_internal_get_bouyancyMaxHeight() const;

constexpr float_t& __cordl_internal_get_bouyancyMaxHeight() ;

constexpr float_t const& __cordl_internal_get_bouyancyMinHeight() const;

constexpr float_t& __cordl_internal_get_bouyancyMinHeight() ;

constexpr bool const& __cordl_internal_get_enableDistanceConstraints() const;

constexpr bool& __cordl_internal_get_enableDistanceConstraints() ;

constexpr bool const& __cordl_internal_get_enableDynamics() const;

constexpr bool& __cordl_internal_get_enableDynamics() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_grabPt() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_grabPt() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_grabPtInitParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_grabPtInitParent() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_knot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_knot() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_knotRb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_knotRb() ;

constexpr float_t const& __cordl_internal_get_maximumVelocity() const;

constexpr float_t& __cordl_internal_get_maximumVelocity() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr float_t const& __cordl_internal_get_stringLength() const;

constexpr float_t& __cordl_internal_get_stringLength() ;

constexpr float_t const& __cordl_internal_get_stringStrength() const;

constexpr float_t& __cordl_internal_get_stringStrength() ;

constexpr float_t const& __cordl_internal_get_stringStretch() const;

constexpr float_t& __cordl_internal_get_stringStretch() ;

constexpr float_t const& __cordl_internal_get_upRightTorque() const;

constexpr float_t& __cordl_internal_get_upRightTorque() ;

constexpr float_t const& __cordl_internal_get_varianceMaxheight() const;

constexpr float_t& __cordl_internal_get_varianceMaxheight() ;

constexpr void __cordl_internal_set_airResistance(float_t  value) ;

constexpr void __cordl_internal_set_antiSpinTorque(float_t  value) ;

constexpr void __cordl_internal_set_balloonBopSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_balloonCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_balloonScale(float_t  value) ;

constexpr void __cordl_internal_set_bopSpeed(float_t  value) ;

constexpr void __cordl_internal_set_bopSpeedCap(float_t  value) ;

constexpr void __cordl_internal_set_bounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_bouyancyActualHeight(float_t  value) ;

constexpr void __cordl_internal_set_bouyancyForce(float_t  value) ;

constexpr void __cordl_internal_set_bouyancyMaxHeight(float_t  value) ;

constexpr void __cordl_internal_set_bouyancyMinHeight(float_t  value) ;

constexpr void __cordl_internal_set_enableDistanceConstraints(bool  value) ;

constexpr void __cordl_internal_set_enableDynamics(bool  value) ;

constexpr void __cordl_internal_set_grabPt(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_grabPtInitParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_knot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_knotRb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_maximumVelocity(float_t  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_stringLength(float_t  value) ;

constexpr void __cordl_internal_set_stringStrength(float_t  value) ;

constexpr void __cordl_internal_set_stringStretch(float_t  value) ;

constexpr void __cordl_internal_set_upRightTorque(float_t  value) ;

constexpr void __cordl_internal_set_varianceMaxheight(float_t  value) ;

/// @brief Method .ctor, addr 0x571812c, size 0x3c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ColliderEnabled, addr 0x57178fc, size 0x84, virtual false, abstract: false, final false
inline bool get_ColliderEnabled() ;

/// @brief Convert to "::GlobalNamespace::ITetheredObjectBehavior"
constexpr ::GlobalNamespace::ITetheredObjectBehavior* i___GlobalNamespace__ITetheredObjectBehavior() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BalloonDynamics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BalloonDynamics", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BalloonDynamics(BalloonDynamics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BalloonDynamics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BalloonDynamics(BalloonDynamics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1192};

/// @brief Field rb, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// @brief Field balloonCollider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___balloonCollider;

/// @brief Field bounds, offset: 0x30, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___bounds;

/// @brief Field bouyancyForce, offset: 0x48, size: 0x4, def value: None
 float_t  ___bouyancyForce;

/// @brief Field bouyancyMinHeight, offset: 0x4c, size: 0x4, def value: None
 float_t  ___bouyancyMinHeight;

/// @brief Field bouyancyMaxHeight, offset: 0x50, size: 0x4, def value: None
 float_t  ___bouyancyMaxHeight;

/// @brief Field bouyancyActualHeight, offset: 0x54, size: 0x4, def value: None
 float_t  ___bouyancyActualHeight;

/// @brief Field varianceMaxheight, offset: 0x58, size: 0x4, def value: None
 float_t  ___varianceMaxheight;

/// @brief Field airResistance, offset: 0x5c, size: 0x4, def value: None
 float_t  ___airResistance;

/// @brief Field knot, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___knot;

/// @brief Field knotRb, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___knotRb;

/// @brief Field grabPt, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___grabPt;

/// @brief Field grabPtInitParent, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___grabPtInitParent;

/// @brief Field stringLength, offset: 0x80, size: 0x4, def value: None
 float_t  ___stringLength;

/// @brief Field stringStrength, offset: 0x84, size: 0x4, def value: None
 float_t  ___stringStrength;

/// @brief Field stringStretch, offset: 0x88, size: 0x4, def value: None
 float_t  ___stringStretch;

/// @brief Field maximumVelocity, offset: 0x8c, size: 0x4, def value: None
 float_t  ___maximumVelocity;

/// @brief Field upRightTorque, offset: 0x90, size: 0x4, def value: None
 float_t  ___upRightTorque;

/// @brief Field antiSpinTorque, offset: 0x94, size: 0x4, def value: None
 float_t  ___antiSpinTorque;

/// @brief Field enableDynamics, offset: 0x98, size: 0x1, def value: None
 bool  ___enableDynamics;

/// @brief Field enableDistanceConstraints, offset: 0x99, size: 0x1, def value: None
 bool  ___enableDistanceConstraints;

/// @brief Field balloonScale, offset: 0x9c, size: 0x4, def value: None
 float_t  ___balloonScale;

/// @brief Field bopSpeed, offset: 0xa0, size: 0x4, def value: None
 float_t  ___bopSpeed;

/// @brief Field bopSpeedCap, offset: 0xa4, size: 0x4, def value: None
 float_t  ___bopSpeedCap;

/// [SerializeField]
/// @brief Field balloonBopSource, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___balloonBopSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___rb) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___balloonCollider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___bounds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___bouyancyForce) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___bouyancyMinHeight) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___bouyancyMaxHeight) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___bouyancyActualHeight) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___varianceMaxheight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___airResistance) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___knot) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___knotRb) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___grabPt) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___grabPtInitParent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___stringLength) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___stringStrength) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___stringStretch) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___maximumVelocity) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___upRightTorque) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___antiSpinTorque) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___enableDynamics) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___enableDistanceConstraints) == 0x99, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___balloonScale) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___bopSpeed) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___bopSpeedCap) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonDynamics, ___balloonBopSource) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BalloonDynamics) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
