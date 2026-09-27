#pragma once
// IWYU pragma private; include "GlobalNamespace/KiteDynamics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(KiteDynamics)
namespace GlobalNamespace {
class ITetheredObjectBehavior;
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
class KiteDynamics;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KiteDynamics*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KiteDynamics*, "", "KiteDynamics");
// Dependencies UnityEngine.Bounds, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: KiteDynamics
class CORDL_TYPE KiteDynamics : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ColliderEnabled)) bool  ColliderEnabled;

/// @brief Field airResistance, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_airResistance, put=__cordl_internal_set_airResistance)) float_t  airResistance;

/// @brief Field balloonCollider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_balloonCollider, put=__cordl_internal_set_balloonCollider)) ::UnityW<::UnityEngine::Collider>  balloonCollider;

/// @brief Field balloonScale, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_balloonScale, put=__cordl_internal_set_balloonScale)) float_t  balloonScale;

/// @brief Field bounds, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get_bounds, put=__cordl_internal_set_bounds)) ::UnityEngine::Bounds  bounds;

/// @brief Field bouyancyActualHeight, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_bouyancyActualHeight, put=__cordl_internal_set_bouyancyActualHeight)) float_t  bouyancyActualHeight;

/// @brief Field bouyancyMaxHeight, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bouyancyMaxHeight, put=__cordl_internal_set_bouyancyMaxHeight)) float_t  bouyancyMaxHeight;

/// @brief Field bouyancyMinHeight, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_bouyancyMinHeight, put=__cordl_internal_set_bouyancyMinHeight)) float_t  bouyancyMinHeight;

/// @brief Field ctrlRotation, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_ctrlRotation, put=__cordl_internal_set_ctrlRotation)) ::UnityEngine::Quaternion  ctrlRotation;

/// @brief Field enableDynamics, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableDynamics, put=__cordl_internal_set_enableDynamics)) bool  enableDynamics;

/// @brief Field grabPt, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabPt, put=__cordl_internal_set_grabPt)) ::UnityW<::UnityEngine::Transform>  grabPt;

/// @brief Field grabPtInitParent, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabPtInitParent, put=__cordl_internal_set_grabPtInitParent)) ::UnityW<::UnityEngine::Transform>  grabPtInitParent;

/// @brief Field grabPtPosition, offset 0x84, size 0xc 
 __declspec(property(get=__cordl_internal_get_grabPtPosition, put=__cordl_internal_set_grabPtPosition)) ::UnityEngine::Vector3  grabPtPosition;

/// @brief Field knot, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_knot, put=__cordl_internal_set_knot)) ::UnityW<::UnityEngine::GameObject>  knot;

/// @brief Field knotRb, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_knotRb, put=__cordl_internal_set_knotRb)) ::UnityW<::UnityEngine::Rigidbody>  knotRb;

/// @brief Field maximumVelocity, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_maximumVelocity, put=__cordl_internal_set_maximumVelocity)) float_t  maximumVelocity;

/// @brief Field rb, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field returnSpeed, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_returnSpeed, put=__cordl_internal_set_returnSpeed)) float_t  returnSpeed;

/// @brief Convert operator to "::GlobalNamespace::ITetheredObjectBehavior"
constexpr operator  ::GlobalNamespace::ITetheredObjectBehavior*() noexcept;

/// @brief Method Awake, addr 0x5735fbc, size 0x10c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method EnableDistanceConstraints, addr 0x573633c, size 0x54, virtual true, abstract: false, final true
inline void EnableDistanceConstraints(bool  enable, float_t  scale) ;

/// @brief Method EnableDynamics, addr 0x57361c0, size 0x17c, virtual true, abstract: false, final true
inline void EnableDynamics(bool  enable, bool  collider, bool  kinematic) ;

/// @brief Method FixedUpdate, addr 0x5736414, size 0x288, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method ITetheredObjectBehavior.DbgClear, addr 0x573669c, size 0x38, virtual true, abstract: false, final true
inline void ITetheredObjectBehavior_DbgClear() ;

/// @brief Method ITetheredObjectBehavior.IsEnabled, addr 0x57366d4, size 0x8, virtual true, abstract: false, final true
inline bool ITetheredObjectBehavior_IsEnabled() ;

/// @brief Method ITetheredObjectBehavior.TriggerEnter, addr 0x57366dc, size 0x8, virtual true, abstract: false, final true
inline void ITetheredObjectBehavior_TriggerEnter(::UnityEngine::Collider*  other, ::by_ref<::UnityEngine::Vector3>  force, ::by_ref<::UnityEngine::Vector3>  collisionPt, ::by_ref<bool>  transferOwnership) ;

static inline ::GlobalNamespace::KiteDynamics* New_ctor() ;

/// @brief Method ReParent, addr 0x5736108, size 0xb8, virtual true, abstract: false, final true
inline void ReParent() ;

/// @brief Method ReturnStep, addr 0x57366e4, size 0x1fc, virtual true, abstract: false, final true
inline bool ReturnStep() ;

/// @brief Method Start, addr 0x57360c8, size 0x40, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_airResistance() const;

constexpr float_t& __cordl_internal_get_airResistance() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_balloonCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_balloonCollider() ;

constexpr float_t const& __cordl_internal_get_balloonScale() const;

constexpr float_t& __cordl_internal_get_balloonScale() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_bounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_bounds() ;

constexpr float_t const& __cordl_internal_get_bouyancyActualHeight() const;

constexpr float_t& __cordl_internal_get_bouyancyActualHeight() ;

constexpr float_t const& __cordl_internal_get_bouyancyMaxHeight() const;

constexpr float_t& __cordl_internal_get_bouyancyMaxHeight() ;

constexpr float_t const& __cordl_internal_get_bouyancyMinHeight() const;

constexpr float_t& __cordl_internal_get_bouyancyMinHeight() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_ctrlRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_ctrlRotation() ;

constexpr bool const& __cordl_internal_get_enableDynamics() const;

constexpr bool& __cordl_internal_get_enableDynamics() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_grabPt() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_grabPt() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_grabPtInitParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_grabPtInitParent() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_grabPtPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_grabPtPosition() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_knot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_knot() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_knotRb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_knotRb() ;

constexpr float_t const& __cordl_internal_get_maximumVelocity() const;

constexpr float_t& __cordl_internal_get_maximumVelocity() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr float_t const& __cordl_internal_get_returnSpeed() const;

constexpr float_t& __cordl_internal_get_returnSpeed() ;

constexpr void __cordl_internal_set_airResistance(float_t  value) ;

constexpr void __cordl_internal_set_balloonCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_balloonScale(float_t  value) ;

constexpr void __cordl_internal_set_bounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_bouyancyActualHeight(float_t  value) ;

constexpr void __cordl_internal_set_bouyancyMaxHeight(float_t  value) ;

constexpr void __cordl_internal_set_bouyancyMinHeight(float_t  value) ;

constexpr void __cordl_internal_set_ctrlRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_enableDynamics(bool  value) ;

constexpr void __cordl_internal_set_grabPt(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_grabPtInitParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_grabPtPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_knot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_knotRb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_maximumVelocity(float_t  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_returnSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x57368e0, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ColliderEnabled, addr 0x5736390, size 0x84, virtual false, abstract: false, final false
inline bool get_ColliderEnabled() ;

/// @brief Convert to "::GlobalNamespace::ITetheredObjectBehavior"
constexpr ::GlobalNamespace::ITetheredObjectBehavior* i___GlobalNamespace__ITetheredObjectBehavior() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KiteDynamics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KiteDynamics", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KiteDynamics(KiteDynamics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KiteDynamics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KiteDynamics(KiteDynamics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1207};

/// @brief Field rb, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// @brief Field balloonCollider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___balloonCollider;

/// @brief Field bounds, offset: 0x30, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___bounds;

/// [SerializeField]
/// @brief Field bouyancyMinHeight, offset: 0x48, size: 0x4, def value: None
 float_t  ___bouyancyMinHeight;

/// [SerializeField]
/// @brief Field bouyancyMaxHeight, offset: 0x4c, size: 0x4, def value: None
 float_t  ___bouyancyMaxHeight;

/// @brief Field bouyancyActualHeight, offset: 0x50, size: 0x4, def value: None
 float_t  ___bouyancyActualHeight;

/// [SerializeField]
/// @brief Field airResistance, offset: 0x54, size: 0x4, def value: None
 float_t  ___airResistance;

/// @brief Field knot, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___knot;

/// @brief Field knotRb, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___knotRb;

/// @brief Field grabPt, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___grabPt;

/// @brief Field grabPtInitParent, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___grabPtInitParent;

/// [SerializeField]
/// @brief Field maximumVelocity, offset: 0x78, size: 0x4, def value: None
 float_t  ___maximumVelocity;

/// @brief Field enableDynamics, offset: 0x7c, size: 0x1, def value: None
 bool  ___enableDynamics;

/// [SerializeField]
/// @brief Field balloonScale, offset: 0x80, size: 0x4, def value: None
 float_t  ___balloonScale;

/// @brief Field grabPtPosition, offset: 0x84, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___grabPtPosition;

/// [SerializeField]
/// @brief Field ctrlRotation, offset: 0x90, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___ctrlRotation;

/// [SerializeField]
/// @brief Field returnSpeed, offset: 0xa0, size: 0x4, def value: None
 float_t  ___returnSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KiteDynamics, ___rb) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KiteDynamics, ___balloonCollider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KiteDynamics, ___bounds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KiteDynamics, ___bouyancyMinHeight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KiteDynamics, ___bouyancyMaxHeight) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KiteDynamics, ___bouyancyActualHeight) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KiteDynamics, ___airResistance) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KiteDynamics, ___knot) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KiteDynamics, ___knotRb) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KiteDynamics, ___grabPt) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KiteDynamics, ___grabPtInitParent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KiteDynamics, ___maximumVelocity) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KiteDynamics, ___enableDynamics) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KiteDynamics, ___balloonScale) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KiteDynamics, ___grabPtPosition) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KiteDynamics, ___ctrlRotation) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KiteDynamics, ___returnSpeed) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KiteDynamics) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
