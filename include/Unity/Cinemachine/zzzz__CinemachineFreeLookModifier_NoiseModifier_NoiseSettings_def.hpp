#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineFreeLookModifier_NoiseModifier_NoiseSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineFreeLookModifier_NoiseModifier_NoiseSettings)
// Forward declare root types
namespace GlobalNamespace {
struct NoiseModifier_CinemachineFreeLookModifier_NoiseSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NoiseModifier_CinemachineFreeLookModifier_NoiseSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NoiseModifier_CinemachineFreeLookModifier_NoiseSettings, "Unity.Cinemachine", "CinemachineFreeLookModifier/NoiseModifier/NoiseSettings");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineFreeLookModifier/NoiseModifier/NoiseSettings
struct CORDL_TYPE NoiseModifier_CinemachineFreeLookModifier_NoiseSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NoiseModifier_CinemachineFreeLookModifier_NoiseSettings() ;

// Ctor Parameters [CppParam { name: "Amplitude", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Frequency", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr NoiseModifier_CinemachineFreeLookModifier_NoiseSettings(float_t  Amplitude, float_t  Frequency) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22183};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [Tooltip("Multiplier for the noise amplitude")]
/// @brief Field Amplitude, offset: 0x0, size: 0x4, def value: None
 float_t  Amplitude;

/// [Tooltip("Multiplier for the noise frequency")]
/// @brief Field Frequency, offset: 0x4, size: 0x4, def value: None
 float_t  Frequency;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoiseModifier_CinemachineFreeLookModifier_NoiseSettings, Amplitude) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoiseModifier_CinemachineFreeLookModifier_NoiseSettings, Frequency) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NoiseModifier_CinemachineFreeLookModifier_NoiseSettings) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
