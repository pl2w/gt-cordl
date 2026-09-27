#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_HapticsAmplitudeEnvelopeVibration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_HapticsAmplitudeEnvelopeVibration)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_HapticsAmplitudeEnvelopeVibration;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_HapticsAmplitudeEnvelopeVibration);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_HapticsAmplitudeEnvelopeVibration, "", "OVRPlugin/HapticsAmplitudeEnvelopeVibration");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/HapticsAmplitudeEnvelopeVibration
struct CORDL_TYPE OVRPlugin_HapticsAmplitudeEnvelopeVibration {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_HapticsAmplitudeEnvelopeVibration() ;

// Ctor Parameters [CppParam { name: "Duration", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AmplitudeCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Amplitudes", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_HapticsAmplitudeEnvelopeVibration(float_t  Duration, uint32_t  AmplitudeCount, ::System::IntPtr  Amplitudes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12100};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Duration, offset: 0x0, size: 0x4, def value: None
 float_t  Duration;

/// @brief Field AmplitudeCount, offset: 0x4, size: 0x4, def value: None
 uint32_t  AmplitudeCount;

/// @brief Field Amplitudes, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  Amplitudes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_HapticsAmplitudeEnvelopeVibration, Duration) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HapticsAmplitudeEnvelopeVibration, AmplitudeCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HapticsAmplitudeEnvelopeVibration, Amplitudes) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_HapticsAmplitudeEnvelopeVibration) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
