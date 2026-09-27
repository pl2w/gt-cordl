#pragma once
// IWYU pragma private; include "GlobalNamespace/FakeWheelDriver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FakeWheelDriver)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FakeWheelDriver;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FakeWheelDriver*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FakeWheelDriver*, "", "FakeWheelDriver");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: FakeWheelDriver
class CORDL_TYPE FakeWheelDriver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field <hasCollision>k__BackingField, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasCollision_k__BackingField, put=__cordl_internal_set__hasCollision_k__BackingField)) bool  _hasCollision_k__BackingField;

/// @brief Field collisionNormal, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_collisionNormal, put=__cordl_internal_set_collisionNormal)) ::UnityEngine::Vector3  collisionNormal;

/// @brief Field collisionPoint, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get_collisionPoint, put=__cordl_internal_set_collisionPoint)) ::UnityEngine::Vector3  collisionPoint;

 __declspec(property(get=get_hasCollision, put=set_hasCollision)) bool  hasCollision;

/// @brief Field lateralFrictionForce, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_lateralFrictionForce, put=__cordl_internal_set_lateralFrictionForce)) float_t  lateralFrictionForce;

/// @brief Field maxSpeed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed, put=__cordl_internal_set_maxSpeed)) float_t  maxSpeed;

/// @brief Field myRigidBody, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRigidBody, put=__cordl_internal_set_myRigidBody)) ::UnityW<::UnityEngine::Rigidbody>  myRigidBody;

/// @brief Field thrust, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_thrust, put=__cordl_internal_set_thrust)) ::UnityEngine::Vector3  thrust;

/// @brief Field wheelCollider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_wheelCollider, put=__cordl_internal_set_wheelCollider)) ::UnityW<::UnityEngine::Collider>  wheelCollider;

/// @brief Method FixedUpdate, addr 0x564dcc0, size 0x438, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::FakeWheelDriver* New_ctor() ;

/// @brief Method OnCollisionStay, addr 0x564daf8, size 0x1c8, virtual false, abstract: false, final false
inline void OnCollisionStay(::UnityEngine::Collision*  collision) ;

/// @brief Method SetThrust, addr 0x564daec, size 0xc, virtual false, abstract: false, final false
inline void SetThrust(::UnityEngine::Vector3  thrust) ;

constexpr bool const& __cordl_internal_get__hasCollision_k__BackingField() const;

constexpr bool& __cordl_internal_get__hasCollision_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_collisionNormal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_collisionNormal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_collisionPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_collisionPoint() ;

constexpr float_t const& __cordl_internal_get_lateralFrictionForce() const;

constexpr float_t& __cordl_internal_get_lateralFrictionForce() ;

constexpr float_t const& __cordl_internal_get_maxSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpeed() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_myRigidBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_myRigidBody() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_thrust() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_thrust() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_wheelCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_wheelCollider() ;

constexpr void __cordl_internal_set__hasCollision_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_collisionNormal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_collisionPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lateralFrictionForce(float_t  value) ;

constexpr void __cordl_internal_set_maxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_myRigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_thrust(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_wheelCollider(::UnityW<::UnityEngine::Collider>  value) ;

/// @brief Method .ctor, addr 0x564e0f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_hasCollision, addr 0x564dadc, size 0x8, virtual false, abstract: false, final false
inline bool get_hasCollision() ;

/// [CompilerGenerated]
/// @brief Method set_hasCollision, addr 0x564dae4, size 0x8, virtual false, abstract: false, final false
inline void set_hasCollision(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FakeWheelDriver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FakeWheelDriver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FakeWheelDriver(FakeWheelDriver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FakeWheelDriver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FakeWheelDriver(FakeWheelDriver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{713};

/// [SerializeField]
/// @brief Field myRigidBody, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___myRigidBody;

/// [SerializeField]
/// @brief Field thrust, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___thrust;

/// [SerializeField]
/// @brief Field wheelCollider, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___wheelCollider;

/// [SerializeField]
/// @brief Field maxSpeed, offset: 0x40, size: 0x4, def value: None
 float_t  ___maxSpeed;

/// [SerializeField]
/// @brief Field lateralFrictionForce, offset: 0x44, size: 0x4, def value: None
 float_t  ___lateralFrictionForce;

/// [CompilerGenerated]
/// @brief Field <hasCollision>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  ____hasCollision_k__BackingField;

/// @brief Field collisionPoint, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___collisionPoint;

/// @brief Field collisionNormal, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___collisionNormal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FakeWheelDriver, ___myRigidBody) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeWheelDriver, ___thrust) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeWheelDriver, ___wheelCollider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeWheelDriver, ___maxSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeWheelDriver, ___lateralFrictionForce) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeWheelDriver, ____hasCollision_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeWheelDriver, ___collisionPoint) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeWheelDriver, ___collisionNormal) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FakeWheelDriver) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
