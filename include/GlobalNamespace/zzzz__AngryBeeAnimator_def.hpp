#pragma once
// IWYU pragma private; include "GlobalNamespace/AngryBeeAnimator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AngryBeeAnimator)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class AngryBeeAnimator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AngryBeeAnimator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AngryBeeAnimator*, "", "AngryBeeAnimator");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: AngryBeeAnimator
class CORDL_TYPE AngryBeeAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field beeOrbitalAxes, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_beeOrbitalAxes, put=__cordl_internal_set_beeOrbitalAxes)) ::ArrayW<::UnityEngine::Vector3>  beeOrbitalAxes;

/// @brief Field beeOrbitalRadii, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_beeOrbitalRadii, put=__cordl_internal_set_beeOrbitalRadii)) ::ArrayW<float_t>  beeOrbitalRadii;

/// @brief Field beeOrbits, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_beeOrbits, put=__cordl_internal_set_beeOrbits)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  beeOrbits;

/// @brief Field beePrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_beePrefab, put=__cordl_internal_set_beePrefab)) ::UnityW<::UnityEngine::GameObject>  beePrefab;

/// @brief Field beeScale, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_beeScale, put=__cordl_internal_set_beeScale)) float_t  beeScale;

/// @brief Field bees, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_bees, put=__cordl_internal_set_bees)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  bees;

/// @brief Field numBees, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_numBees, put=__cordl_internal_set_numBees)) int32_t  numBees;

/// @brief Field orbitMaxCenterDisplacement, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_orbitMaxCenterDisplacement, put=__cordl_internal_set_orbitMaxCenterDisplacement)) float_t  orbitMaxCenterDisplacement;

/// @brief Field orbitMaxHeightDisplacement, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_orbitMaxHeightDisplacement, put=__cordl_internal_set_orbitMaxHeightDisplacement)) float_t  orbitMaxHeightDisplacement;

/// @brief Field orbitMaxRadius, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_orbitMaxRadius, put=__cordl_internal_set_orbitMaxRadius)) float_t  orbitMaxRadius;

/// @brief Field orbitMaxTilt, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_orbitMaxTilt, put=__cordl_internal_set_orbitMaxTilt)) float_t  orbitMaxTilt;

/// @brief Field orbitMinRadius, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_orbitMinRadius, put=__cordl_internal_set_orbitMinRadius)) float_t  orbitMinRadius;

/// @brief Field orbitSpeed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_orbitSpeed, put=__cordl_internal_set_orbitSpeed)) float_t  orbitSpeed;

/// @brief Method Awake, addr 0x5e08f50, size 0x478, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::AngryBeeAnimator* New_ctor() ;

/// @brief Method SetEmergeFraction, addr 0x5e09480, size 0x100, virtual false, abstract: false, final false
inline void SetEmergeFraction(float_t  fraction) ;

/// @brief Method Update, addr 0x5e093c8, size 0xb8, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_beeOrbitalAxes() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_beeOrbitalAxes() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_beeOrbitalRadii() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_beeOrbitalRadii() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_beeOrbits() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_beeOrbits() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_beePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_beePrefab() ;

constexpr float_t const& __cordl_internal_get_beeScale() const;

constexpr float_t& __cordl_internal_get_beeScale() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_bees() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_bees() ;

constexpr int32_t const& __cordl_internal_get_numBees() const;

constexpr int32_t& __cordl_internal_get_numBees() ;

constexpr float_t const& __cordl_internal_get_orbitMaxCenterDisplacement() const;

constexpr float_t& __cordl_internal_get_orbitMaxCenterDisplacement() ;

constexpr float_t const& __cordl_internal_get_orbitMaxHeightDisplacement() const;

constexpr float_t& __cordl_internal_get_orbitMaxHeightDisplacement() ;

constexpr float_t const& __cordl_internal_get_orbitMaxRadius() const;

constexpr float_t& __cordl_internal_get_orbitMaxRadius() ;

constexpr float_t const& __cordl_internal_get_orbitMaxTilt() const;

constexpr float_t& __cordl_internal_get_orbitMaxTilt() ;

constexpr float_t const& __cordl_internal_get_orbitMinRadius() const;

constexpr float_t& __cordl_internal_get_orbitMinRadius() ;

constexpr float_t const& __cordl_internal_get_orbitSpeed() const;

constexpr float_t& __cordl_internal_get_orbitSpeed() ;

constexpr void __cordl_internal_set_beeOrbitalAxes(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_beeOrbitalRadii(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_beeOrbits(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_beePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_beeScale(float_t  value) ;

constexpr void __cordl_internal_set_bees(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_numBees(int32_t  value) ;

constexpr void __cordl_internal_set_orbitMaxCenterDisplacement(float_t  value) ;

constexpr void __cordl_internal_set_orbitMaxHeightDisplacement(float_t  value) ;

constexpr void __cordl_internal_set_orbitMaxRadius(float_t  value) ;

constexpr void __cordl_internal_set_orbitMaxTilt(float_t  value) ;

constexpr void __cordl_internal_set_orbitMinRadius(float_t  value) ;

constexpr void __cordl_internal_set_orbitSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x5e09580, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AngryBeeAnimator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AngryBeeAnimator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AngryBeeAnimator(AngryBeeAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AngryBeeAnimator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AngryBeeAnimator(AngryBeeAnimator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{540};

/// [SerializeField]
/// @brief Field beePrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___beePrefab;

/// [SerializeField]
/// @brief Field numBees, offset: 0x28, size: 0x4, def value: None
 int32_t  ___numBees;

/// [SerializeField]
/// @brief Field orbitMinRadius, offset: 0x2c, size: 0x4, def value: None
 float_t  ___orbitMinRadius;

/// [SerializeField]
/// @brief Field orbitMaxRadius, offset: 0x30, size: 0x4, def value: None
 float_t  ___orbitMaxRadius;

/// [SerializeField]
/// @brief Field orbitMaxHeightDisplacement, offset: 0x34, size: 0x4, def value: None
 float_t  ___orbitMaxHeightDisplacement;

/// [SerializeField]
/// @brief Field orbitMaxCenterDisplacement, offset: 0x38, size: 0x4, def value: None
 float_t  ___orbitMaxCenterDisplacement;

/// [SerializeField]
/// @brief Field orbitMaxTilt, offset: 0x3c, size: 0x4, def value: None
 float_t  ___orbitMaxTilt;

/// [SerializeField]
/// @brief Field orbitSpeed, offset: 0x40, size: 0x4, def value: None
 float_t  ___orbitSpeed;

/// [SerializeField]
/// @brief Field beeScale, offset: 0x44, size: 0x4, def value: None
 float_t  ___beeScale;

/// @brief Field beeOrbits, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___beeOrbits;

/// @brief Field bees, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___bees;

/// @brief Field beeOrbitalAxes, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___beeOrbitalAxes;

/// @brief Field beeOrbitalRadii, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<float_t>  ___beeOrbitalRadii;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AngryBeeAnimator, ___beePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeAnimator, ___numBees) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeAnimator, ___orbitMinRadius) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeAnimator, ___orbitMaxRadius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeAnimator, ___orbitMaxHeightDisplacement) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeAnimator, ___orbitMaxCenterDisplacement) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeAnimator, ___orbitMaxTilt) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeAnimator, ___orbitSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeAnimator, ___beeScale) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeAnimator, ___beeOrbits) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeAnimator, ___bees) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeAnimator, ___beeOrbitalAxes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeAnimator, ___beeOrbitalRadii) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AngryBeeAnimator) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
