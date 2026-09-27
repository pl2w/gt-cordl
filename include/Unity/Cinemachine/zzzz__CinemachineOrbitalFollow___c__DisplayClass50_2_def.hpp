#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineOrbitalFollow___c__DisplayClass50_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineOrbitalFollow___c__DisplayClass50_2)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineOrbitalFollow___c__DisplayClass50_2;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_2);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_2, "Unity.Cinemachine", "CinemachineOrbitalFollow/<>c__DisplayClass50_2");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineOrbitalFollow/<>c__DisplayClass50_2
struct CORDL_TYPE CinemachineOrbitalFollow___c__DisplayClass50_2 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineOrbitalFollow___c__DisplayClass50_2() ;

// Ctor Parameters [CppParam { name: "bestAngle", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "best", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineOrbitalFollow___c__DisplayClass50_2(float_t  bestAngle, float_t  best) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22229};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field bestAngle, offset: 0x0, size: 0x4, def value: None
 float_t  bestAngle;

/// @brief Field best, offset: 0x4, size: 0x4, def value: None
 float_t  best;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_2, bestAngle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_2, best) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_2) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
