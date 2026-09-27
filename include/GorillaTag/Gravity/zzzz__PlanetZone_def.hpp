#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/PlanetZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Gravity/zzzz__BasicGravityZone_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlanetZone)
namespace GT_CustomMapSupportRuntime {
class PlanetZoneSettings;
}
namespace GorillaTag::Gravity {
class MonkeGravityController;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Gravity {
class PlanetZone;
}
// Write type traits
MARK_REF_T(::GorillaTag::Gravity::PlanetZone*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Gravity::PlanetZone*, "GorillaTag.Gravity", "PlanetZone");
// Dependencies GorillaTag.Gravity.BasicGravityZone
namespace GorillaTag::Gravity {
// Is value type: false
// CS Name: GorillaTag.Gravity.PlanetZone
class CORDL_TYPE PlanetZone : public ::GorillaTag::Gravity::BasicGravityZone {
public:
// Declarations
/// @brief Field alwaysRotate, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_alwaysRotate, put=__cordl_internal_set_alwaysRotate)) bool  alwaysRotate;

/// @brief Field gravityCurve, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_gravityCurve, put=__cordl_internal_set_gravityCurve)) ::UnityEngine::AnimationCurve*  gravityCurve;

/// @brief Field rotationDistance, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationDistance, put=__cordl_internal_set_rotationDistance)) float_t  rotationDistance;

/// @brief Field sqrDistance, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_sqrDistance, put=__cordl_internal_set_sqrDistance)) float_t  sqrDistance;

/// @brief Field useGravityCurve, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get_useGravityCurve, put=__cordl_internal_set_useGravityCurve)) bool  useGravityCurve;

/// @brief Method Awake, addr 0x5d38d1c, size 0x20, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateDependentVars, addr 0x5d3b730, size 0x10, virtual false, abstract: false, final false
inline void CalculateDependentVars() ;

/// @brief Method CopyProperties, addr 0x5d39138, size 0x54, virtual false, abstract: false, final false
inline void CopyProperties(::GT_CustomMapSupportRuntime::PlanetZoneSettings*  settings) ;

/// @brief Method GetGravityStrength, addr 0x5d3b788, size 0xa4, virtual true, abstract: false, final false
inline float_t GetGravityStrength(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  offsetFromGravity) ;

/// @brief Method GetGravityVectorAtPoint, addr 0x5d3b740, size 0x48, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetGravityVectorAtPoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  worldPosition, /* [IsReadOnly] */ ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>  controller) ;

/// @brief Method GetRotationIntent, addr 0x5d3b82c, size 0x4c, virtual true, abstract: false, final false
inline bool GetRotationIntent(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  offsetFromGravity) ;

static inline ::GorillaTag::Gravity::PlanetZone* New_ctor() ;

constexpr bool const& __cordl_internal_get_alwaysRotate() const;

constexpr bool& __cordl_internal_get_alwaysRotate() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_gravityCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_gravityCurve() ;

constexpr float_t const& __cordl_internal_get_rotationDistance() const;

constexpr float_t& __cordl_internal_get_rotationDistance() ;

constexpr float_t const& __cordl_internal_get_sqrDistance() const;

constexpr float_t& __cordl_internal_get_sqrDistance() ;

constexpr bool const& __cordl_internal_get_useGravityCurve() const;

constexpr bool& __cordl_internal_get_useGravityCurve() ;

constexpr void __cordl_internal_set_alwaysRotate(bool  value) ;

constexpr void __cordl_internal_set_gravityCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_rotationDistance(float_t  value) ;

constexpr void __cordl_internal_set_sqrDistance(float_t  value) ;

constexpr void __cordl_internal_set_useGravityCurve(bool  value) ;

/// @brief Method .ctor, addr 0x5d39190, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlanetZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlanetZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlanetZone(PlanetZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlanetZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlanetZone(PlanetZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4688};

/// [Tooltip("how close to the center of the zone to enable rotating the player")]
/// [SerializeField]
/// @brief Field rotationDistance, offset: 0x7c, size: 0x4, def value: None
 float_t  ___rotationDistance;

/// [Tooltip("if enabled, always rotates the player")]
/// [SerializeField]
/// @brief Field alwaysRotate, offset: 0x80, size: 0x1, def value: None
 bool  ___alwaysRotate;

/// [Tooltip("if enabled, gravity strength is read from the curve below using distance from the zone\'s center, instead of the constant gravityStrength")]
/// [SerializeField]
/// @brief Field useGravityCurve, offset: 0x81, size: 0x1, def value: None
 bool  ___useGravityCurve;

/// [Tooltip("Maps distance from the zone\'s center (x) to gravity strength (y). Negative y pulls toward center, positive y expels.")]
/// [SerializeField]
/// @brief Field gravityCurve, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___gravityCurve;

/// @brief Field sqrDistance, offset: 0x90, size: 0x4, def value: None
 float_t  ___sqrDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Gravity::PlanetZone, ___rotationDistance) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::PlanetZone, ___alwaysRotate) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::PlanetZone, ___useGravityCurve) == 0x81, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::PlanetZone, ___gravityCurve) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::PlanetZone, ___sqrDistance) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Gravity::PlanetZone) == 0x98, "Size mismatch!");

} // namespace end def GorillaTag::Gravity
