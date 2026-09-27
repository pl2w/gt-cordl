#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/TorusZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Gravity/zzzz__BasicGravityZone_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TorusZone)
namespace GT_CustomMapSupportRuntime {
class TorusZoneSettings;
}
namespace GorillaTag::Gravity {
class MonkeGravityController;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Gravity {
class TorusZone;
}
// Write type traits
MARK_REF_T(::GorillaTag::Gravity::TorusZone*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Gravity::TorusZone*, "GorillaTag.Gravity", "TorusZone");
// Dependencies GorillaTag.Gravity.BasicGravityZone
namespace GorillaTag::Gravity {
// Is value type: false
// CS Name: GorillaTag.Gravity.TorusZone
class CORDL_TYPE TorusZone : public ::GorillaTag::Gravity::BasicGravityZone {
public:
// Declarations
/// @brief Field alwaysRotate, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_alwaysRotate, put=__cordl_internal_set_alwaysRotate)) bool  alwaysRotate;

/// @brief Field majorRadius, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_majorRadius, put=__cordl_internal_set_majorRadius)) float_t  majorRadius;

/// @brief Field rotationDistance, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationDistance, put=__cordl_internal_set_rotationDistance)) float_t  rotationDistance;

/// @brief Field sqrDistance, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_sqrDistance, put=__cordl_internal_set_sqrDistance)) float_t  sqrDistance;

/// @brief Method Awake, addr 0x5d3b8ec, size 0x20, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateDependentVars, addr 0x5d3b90c, size 0x10, virtual false, abstract: false, final false
inline void CalculateDependentVars() ;

/// @brief Method CopyProperties, addr 0x5d3bc48, size 0x40, virtual false, abstract: false, final false
inline void CopyProperties(::GT_CustomMapSupportRuntime::TorusZoneSettings*  settings) ;

/// @brief Method GetGravityVectorAtPoint, addr 0x5d3b91c, size 0x2e0, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetGravityVectorAtPoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  worldPosition, /* [IsReadOnly] */ ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>  controller) ;

/// @brief Method GetRotationIntent, addr 0x5d3bbfc, size 0x4c, virtual true, abstract: false, final false
inline bool GetRotationIntent(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  offsetFromGravity) ;

static inline ::GorillaTag::Gravity::TorusZone* New_ctor() ;

constexpr bool const& __cordl_internal_get_alwaysRotate() const;

constexpr bool& __cordl_internal_get_alwaysRotate() ;

constexpr float_t const& __cordl_internal_get_majorRadius() const;

constexpr float_t& __cordl_internal_get_majorRadius() ;

constexpr float_t const& __cordl_internal_get_rotationDistance() const;

constexpr float_t& __cordl_internal_get_rotationDistance() ;

constexpr float_t const& __cordl_internal_get_sqrDistance() const;

constexpr float_t& __cordl_internal_get_sqrDistance() ;

constexpr void __cordl_internal_set_alwaysRotate(bool  value) ;

constexpr void __cordl_internal_set_majorRadius(float_t  value) ;

constexpr void __cordl_internal_set_rotationDistance(float_t  value) ;

constexpr void __cordl_internal_set_sqrDistance(float_t  value) ;

/// @brief Method .ctor, addr 0x5d3bc88, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TorusZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TorusZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TorusZone(TorusZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TorusZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TorusZone(TorusZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4690};

/// [Tooltip("Major radius of the torus (distance from torus center to the centerline of the tube). Torus axis is transform.up.")]
/// [SerializeField]
/// @brief Field majorRadius, offset: 0x7c, size: 0x4, def value: None
 float_t  ___majorRadius;

/// [Tooltip("how close to the central ring of the torus to enable rotating the player")]
/// [SerializeField]
/// @brief Field rotationDistance, offset: 0x80, size: 0x4, def value: None
 float_t  ___rotationDistance;

/// [Tooltip("if enabled, always rotates the player")]
/// [SerializeField]
/// @brief Field alwaysRotate, offset: 0x84, size: 0x1, def value: None
 bool  ___alwaysRotate;

/// @brief Field sqrDistance, offset: 0x88, size: 0x4, def value: None
 float_t  ___sqrDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Gravity::TorusZone, ___majorRadius) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::TorusZone, ___rotationDistance) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::TorusZone, ___alwaysRotate) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::TorusZone, ___sqrDistance) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Gravity::TorusZone) == 0x90, "Size mismatch!");

} // namespace end def GorillaTag::Gravity
