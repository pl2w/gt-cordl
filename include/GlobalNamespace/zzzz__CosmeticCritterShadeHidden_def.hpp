#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterShadeHidden.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticCritter_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CosmeticCritterShadeHidden)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticCritterShadeHidden;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticCritterShadeHidden*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticCritterShadeHidden*, "", "CosmeticCritterShadeHidden");
// Dependencies CosmeticCritter, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticCritterShadeHidden
class CORDL_TYPE CosmeticCritterShadeHidden : public ::GlobalNamespace::CosmeticCritter {
public:
// Declarations
/// @brief Field initialAngle, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialAngle, put=__cordl_internal_set_initialAngle)) float_t  initialAngle;

/// @brief Field orbitCenter, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_orbitCenter, put=__cordl_internal_set_orbitCenter)) ::UnityEngine::Vector3  orbitCenter;

/// @brief Field orbitDegreesPerSecond, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_orbitDegreesPerSecond, put=__cordl_internal_set_orbitDegreesPerSecond)) float_t  orbitDegreesPerSecond;

/// @brief Field orbitDirection, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_orbitDirection, put=__cordl_internal_set_orbitDirection)) float_t  orbitDirection;

/// @brief Field orbitRadius, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_orbitRadius, put=__cordl_internal_set_orbitRadius)) float_t  orbitRadius;

/// @brief Field verticalBobFrequency, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_verticalBobFrequency, put=__cordl_internal_set_verticalBobFrequency)) float_t  verticalBobFrequency;

/// @brief Field verticalBobMagnitude, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_verticalBobMagnitude, put=__cordl_internal_set_verticalBobMagnitude)) float_t  verticalBobMagnitude;

static inline ::GlobalNamespace::CosmeticCritterShadeHidden* New_ctor() ;

/// @brief Method SetCenterAndRadius, addr 0x57f3420, size 0x10, virtual false, abstract: false, final false
inline void SetCenterAndRadius(::UnityEngine::Vector3  center, float_t  radius) ;

/// @brief Method SetRandomVariables, addr 0x57f39e0, size 0x48, virtual true, abstract: false, final false
inline void SetRandomVariables() ;

/// @brief Method Tick, addr 0x57f3a28, size 0xd4, virtual true, abstract: false, final false
inline void Tick() ;

constexpr float_t const& __cordl_internal_get_initialAngle() const;

constexpr float_t& __cordl_internal_get_initialAngle() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_orbitCenter() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_orbitCenter() ;

constexpr float_t const& __cordl_internal_get_orbitDegreesPerSecond() const;

constexpr float_t& __cordl_internal_get_orbitDegreesPerSecond() ;

constexpr float_t const& __cordl_internal_get_orbitDirection() const;

constexpr float_t& __cordl_internal_get_orbitDirection() ;

constexpr float_t const& __cordl_internal_get_orbitRadius() const;

constexpr float_t& __cordl_internal_get_orbitRadius() ;

constexpr float_t const& __cordl_internal_get_verticalBobFrequency() const;

constexpr float_t& __cordl_internal_get_verticalBobFrequency() ;

constexpr float_t const& __cordl_internal_get_verticalBobMagnitude() const;

constexpr float_t& __cordl_internal_get_verticalBobMagnitude() ;

constexpr void __cordl_internal_set_initialAngle(float_t  value) ;

constexpr void __cordl_internal_set_orbitCenter(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_orbitDegreesPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_orbitDirection(float_t  value) ;

constexpr void __cordl_internal_set_orbitRadius(float_t  value) ;

constexpr void __cordl_internal_set_verticalBobFrequency(float_t  value) ;

constexpr void __cordl_internal_set_verticalBobMagnitude(float_t  value) ;

/// @brief Method .ctor, addr 0x57f3afc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCritterShadeHidden() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterShadeHidden", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticCritterShadeHidden(CosmeticCritterShadeHidden && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterShadeHidden", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticCritterShadeHidden(CosmeticCritterShadeHidden const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{202};

/// [Space]
/// [Tooltip("How quickly the Shade orbits around the point where it spawned (the spawner\'s position).")]
/// [SerializeField]
/// @brief Field orbitDegreesPerSecond, offset: 0x48, size: 0x4, def value: None
 float_t  ___orbitDegreesPerSecond;

/// [Tooltip("The strength of additional up-and-down motion while orbiting.")]
/// [SerializeField]
/// @brief Field verticalBobMagnitude, offset: 0x4c, size: 0x4, def value: None
 float_t  ___verticalBobMagnitude;

/// [Tooltip("The frequency of additional up-and-down motion while orbiting.")]
/// [SerializeField]
/// @brief Field verticalBobFrequency, offset: 0x50, size: 0x4, def value: None
 float_t  ___verticalBobFrequency;

/// @brief Field orbitCenter, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___orbitCenter;

/// @brief Field initialAngle, offset: 0x60, size: 0x4, def value: None
 float_t  ___initialAngle;

/// @brief Field orbitRadius, offset: 0x64, size: 0x4, def value: None
 float_t  ___orbitRadius;

/// @brief Field orbitDirection, offset: 0x68, size: 0x4, def value: None
 float_t  ___orbitDirection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeHidden, ___orbitDegreesPerSecond) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeHidden, ___verticalBobMagnitude) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeHidden, ___verticalBobFrequency) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeHidden, ___orbitCenter) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeHidden, ___initialAngle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeHidden, ___orbitRadius) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeHidden, ___orbitDirection) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticCritterShadeHidden) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
