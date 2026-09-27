#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/ConsensusGravityZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Gravity/zzzz__BasicGravityZone_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ConsensusGravityZone)
namespace GT_CustomMapSupportRuntime {
class ConsensusGravityZoneSettings;
}
namespace GorillaTag::Gravity {
class MonkeGravityController;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Gravity {
class ConsensusGravityZone;
}
// Write type traits
MARK_REF_T(::GorillaTag::Gravity::ConsensusGravityZone*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Gravity::ConsensusGravityZone*, "GorillaTag.Gravity", "ConsensusGravityZone");
// Dependencies GorillaTag.Gravity.BasicGravityZone
namespace GorillaTag::Gravity {
// Is value type: false
// CS Name: GorillaTag.Gravity.ConsensusGravityZone
class CORDL_TYPE ConsensusGravityZone : public ::GorillaTag::Gravity::BasicGravityZone {
public:
// Declarations
/// @brief Field centeringForce, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_centeringForce, put=__cordl_internal_set_centeringForce)) float_t  centeringForce;

/// @brief Field currentRot, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentRot, put=__cordl_internal_set_currentRot)) float_t  currentRot;

/// @brief Field drag, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_drag, put=__cordl_internal_set_drag)) float_t  drag;

/// @brief Field idealRot, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_idealRot, put=__cordl_internal_set_idealRot)) float_t  idealRot;

/// @brief Field rotMax, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotMax, put=__cordl_internal_set_rotMax)) float_t  rotMax;

/// @brief Field rotMin, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotMin, put=__cordl_internal_set_rotMin)) float_t  rotMin;

/// @brief Field rotSpeed, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotSpeed, put=__cordl_internal_set_rotSpeed)) float_t  rotSpeed;

/// @brief Field weightForce, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_weightForce, put=__cordl_internal_set_weightForce)) float_t  weightForce;

/// @brief Field zoneCollider, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneCollider, put=__cordl_internal_set_zoneCollider)) ::UnityW<::UnityEngine::Collider>  zoneCollider;

/// @brief Method Awake, addr 0x5d386bc, size 0x60, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CopyProperties, addr 0x5d38c38, size 0x38, virtual false, abstract: false, final false
inline void CopyProperties(::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings*  settings) ;

/// @brief Method FixedUpdate, addr 0x5d38774, size 0x4bc, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetGravityVectorAtPoint, addr 0x5d3871c, size 0x58, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetGravityVectorAtPoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  worldPosition, /* [IsReadOnly] */ ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>  controller) ;

/// @brief Method GetRotationIntent, addr 0x5d38c30, size 0x8, virtual true, abstract: false, final false
inline bool GetRotationIntent(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  offsetFromGravity) ;

static inline ::GorillaTag::Gravity::ConsensusGravityZone* New_ctor() ;

constexpr float_t const& __cordl_internal_get_centeringForce() const;

constexpr float_t& __cordl_internal_get_centeringForce() ;

constexpr float_t const& __cordl_internal_get_currentRot() const;

constexpr float_t& __cordl_internal_get_currentRot() ;

constexpr float_t const& __cordl_internal_get_drag() const;

constexpr float_t& __cordl_internal_get_drag() ;

constexpr float_t const& __cordl_internal_get_idealRot() const;

constexpr float_t& __cordl_internal_get_idealRot() ;

constexpr float_t const& __cordl_internal_get_rotMax() const;

constexpr float_t& __cordl_internal_get_rotMax() ;

constexpr float_t const& __cordl_internal_get_rotMin() const;

constexpr float_t& __cordl_internal_get_rotMin() ;

constexpr float_t const& __cordl_internal_get_rotSpeed() const;

constexpr float_t& __cordl_internal_get_rotSpeed() ;

constexpr float_t const& __cordl_internal_get_weightForce() const;

constexpr float_t& __cordl_internal_get_weightForce() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_zoneCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_zoneCollider() ;

constexpr void __cordl_internal_set_centeringForce(float_t  value) ;

constexpr void __cordl_internal_set_currentRot(float_t  value) ;

constexpr void __cordl_internal_set_drag(float_t  value) ;

constexpr void __cordl_internal_set_idealRot(float_t  value) ;

constexpr void __cordl_internal_set_rotMax(float_t  value) ;

constexpr void __cordl_internal_set_rotMin(float_t  value) ;

constexpr void __cordl_internal_set_rotSpeed(float_t  value) ;

constexpr void __cordl_internal_set_weightForce(float_t  value) ;

constexpr void __cordl_internal_set_zoneCollider(::UnityW<::UnityEngine::Collider>  value) ;

/// @brief Method .ctor, addr 0x5d38c70, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConsensusGravityZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConsensusGravityZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConsensusGravityZone(ConsensusGravityZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConsensusGravityZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConsensusGravityZone(ConsensusGravityZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4678};

/// @brief Field zoneCollider, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___zoneCollider;

/// @brief Field currentRot, offset: 0x88, size: 0x4, def value: None
 float_t  ___currentRot;

/// @brief Field idealRot, offset: 0x8c, size: 0x4, def value: None
 float_t  ___idealRot;

/// @brief Field rotSpeed, offset: 0x90, size: 0x4, def value: None
 float_t  ___rotSpeed;

/// [SerializeField]
/// @brief Field weightForce, offset: 0x94, size: 0x4, def value: None
 float_t  ___weightForce;

/// [SerializeField]
/// @brief Field centeringForce, offset: 0x98, size: 0x4, def value: None
 float_t  ___centeringForce;

/// [SerializeField]
/// @brief Field drag, offset: 0x9c, size: 0x4, def value: None
 float_t  ___drag;

/// [SerializeField]
/// @brief Field rotMin, offset: 0xa0, size: 0x4, def value: None
 float_t  ___rotMin;

/// [SerializeField]
/// @brief Field rotMax, offset: 0xa4, size: 0x4, def value: None
 float_t  ___rotMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Gravity::ConsensusGravityZone, ___zoneCollider) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::ConsensusGravityZone, ___currentRot) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::ConsensusGravityZone, ___idealRot) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::ConsensusGravityZone, ___rotSpeed) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::ConsensusGravityZone, ___weightForce) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::ConsensusGravityZone, ___centeringForce) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::ConsensusGravityZone, ___drag) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::ConsensusGravityZone, ___rotMin) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::ConsensusGravityZone, ___rotMax) == 0xa4, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Gravity::ConsensusGravityZone) == 0xa8, "Size mismatch!");

} // namespace end def GorillaTag::Gravity
