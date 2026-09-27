#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/CubicPlanetZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Gravity/zzzz__PlanetZone_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(CubicPlanetZone)
namespace GT_CustomMapSupportRuntime {
class CubicPlanetZoneSettings;
}
namespace GorillaTag::Gravity {
class MonkeGravityController;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Gravity {
class CubicPlanetZone;
}
// Write type traits
MARK_REF_T(::GorillaTag::Gravity::CubicPlanetZone*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Gravity::CubicPlanetZone*, "GorillaTag.Gravity", "CubicPlanetZone");
// Dependencies GorillaTag.Gravity.PlanetZone, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GorillaTag::Gravity {
// Is value type: false
// CS Name: GorillaTag.Gravity.CubicPlanetZone
class CORDL_TYPE CubicPlanetZone : public ::GorillaTag::Gravity::PlanetZone {
public:
// Declarations
/// @brief Field constraints, offset 0x94, size 0xc 
 __declspec(property(get=__cordl_internal_get_constraints, put=__cordl_internal_set_constraints)) ::UnityEngine::Vector3  constraints;

/// @brief Field inverseRotation, offset 0xb8, size 0x10 
 __declspec(property(get=__cordl_internal_get_inverseRotation, put=__cordl_internal_set_inverseRotation)) ::UnityEngine::Quaternion  inverseRotation;

/// @brief Field maxConstraints, offset 0xac, size 0xc 
 __declspec(property(get=__cordl_internal_get_maxConstraints, put=__cordl_internal_set_maxConstraints)) ::UnityEngine::Vector3  maxConstraints;

/// @brief Field minConstraints, offset 0xa0, size 0xc 
 __declspec(property(get=__cordl_internal_get_minConstraints, put=__cordl_internal_set_minConstraints)) ::UnityEngine::Vector3  minConstraints;

/// @brief Method Awake, addr 0x5d38cbc, size 0x60, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateDependentVars, addr 0x5d38d3c, size 0x38, virtual false, abstract: false, final false
inline void CalculateDependentVars() ;

/// @brief Method CopyProperties, addr 0x5d390c0, size 0x78, virtual false, abstract: false, final false
inline void CopyProperties(::GT_CustomMapSupportRuntime::CubicPlanetZoneSettings*  settings) ;

/// @brief Method GetGravityVectorAtPoint, addr 0x5d38d74, size 0x38, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetGravityVectorAtPoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  worldPosition, /* [IsReadOnly] */ ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>  controller) ;

/// @brief Method GetPointOnBounds, addr 0x5d38dac, size 0x314, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPointOnBounds(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point) ;

static inline ::GorillaTag::Gravity::CubicPlanetZone* New_ctor() ;

/// @brief Method UpdateConstraint, addr 0x5d38c80, size 0x3c, virtual false, abstract: false, final false
inline void UpdateConstraint() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_constraints() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_constraints() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_inverseRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_inverseRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_maxConstraints() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_maxConstraints() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_minConstraints() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_minConstraints() ;

constexpr void __cordl_internal_set_constraints(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_inverseRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_maxConstraints(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_minConstraints(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5d3918c, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CubicPlanetZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CubicPlanetZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CubicPlanetZone(CubicPlanetZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CubicPlanetZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CubicPlanetZone(CubicPlanetZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4679};

/// [Header("box constraint for where gravity center can be")]
/// [SerializeField]
/// @brief Field constraints, offset: 0x94, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___constraints;

/// [SerializeField]
/// @brief Field minConstraints, offset: 0xa0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___minConstraints;

/// [SerializeField]
/// @brief Field maxConstraints, offset: 0xac, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___maxConstraints;

/// @brief Field inverseRotation, offset: 0xb8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___inverseRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Gravity::CubicPlanetZone, ___constraints) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::CubicPlanetZone, ___minConstraints) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::CubicPlanetZone, ___maxConstraints) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::CubicPlanetZone, ___inverseRotation) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Gravity::CubicPlanetZone) == 0xc8, "Size mismatch!");

} // namespace end def GorillaTag::Gravity
