#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Cinemachine3OrbitRig_Orbit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Cinemachine3OrbitRig_Orbit)
// Forward declare root types
namespace GlobalNamespace {
struct Cinemachine3OrbitRig_Orbit;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Cinemachine3OrbitRig_Orbit);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Cinemachine3OrbitRig_Orbit, "Unity.Cinemachine", "Cinemachine3OrbitRig/Orbit");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.Cinemachine3OrbitRig/Orbit
struct CORDL_TYPE Cinemachine3OrbitRig_Orbit {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Cinemachine3OrbitRig_Orbit() ;

// Ctor Parameters [CppParam { name: "Radius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Height", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr Cinemachine3OrbitRig_Orbit(float_t  Radius, float_t  Height) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22231};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [Tooltip("Horizontal radius of the orbit")]
/// @brief Field Radius, offset: 0x0, size: 0x4, def value: None
 float_t  Radius;

/// [Tooltip("Height of the horizontal orbit circle, relative to the target position")]
/// @brief Field Height, offset: 0x4, size: 0x4, def value: None
 float_t  Height;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Cinemachine3OrbitRig_Orbit, Radius) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Cinemachine3OrbitRig_Orbit, Height) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Cinemachine3OrbitRig_Orbit) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
