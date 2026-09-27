#pragma once
// IWYU pragma private; include "Unity/Cinemachine/NoiseSettings_NoiseParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(NoiseSettings_NoiseParams)
// Forward declare root types
namespace GlobalNamespace {
struct NoiseSettings_NoiseParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NoiseSettings_NoiseParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NoiseSettings_NoiseParams, "Unity.Cinemachine", "NoiseSettings/NoiseParams");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.NoiseSettings/NoiseParams
struct CORDL_TYPE NoiseSettings_NoiseParams {
public:
// Declarations
/// @brief Method GetValueAt, addr 0xaeb917c, size 0x64, virtual false, abstract: false, final false
inline float_t GetValueAt(float_t  time, float_t  timeOffset) ;

// Ctor Parameters []
// @brief default ctor
constexpr NoiseSettings_NoiseParams() ;

// Ctor Parameters [CppParam { name: "Frequency", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Amplitude", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Constant", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr NoiseSettings_NoiseParams(float_t  Frequency, float_t  Amplitude, bool  Constant) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22346};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// [Tooltip("The frequency of noise for this channel.  Higher magnitudes vibrate faster.")]
/// @brief Field Frequency, offset: 0x0, size: 0x4, def value: None
 float_t  Frequency;

/// [Tooltip("The amplitude of the noise for this channel.  Larger numbers vibrate higher.")]
/// @brief Field Amplitude, offset: 0x4, size: 0x4, def value: None
 float_t  Amplitude;

/// [Tooltip("If checked, then the amplitude and frequency will not be randomized.")]
/// @brief Field Constant, offset: 0x8, size: 0x1, def value: None
 bool  Constant;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoiseSettings_NoiseParams, Frequency) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoiseSettings_NoiseParams, Amplitude) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoiseSettings_NoiseParams, Constant) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NoiseSettings_NoiseParams) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
