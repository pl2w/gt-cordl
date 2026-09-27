#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_HapticsPcmVibration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInput_HapticsPcmVibration)
// Forward declare root types
namespace GlobalNamespace {
struct OVRInput_HapticsPcmVibration;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRInput_HapticsPcmVibration);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_HapticsPcmVibration, "", "OVRInput/HapticsPcmVibration");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/HapticsPcmVibration
struct CORDL_TYPE OVRInput_HapticsPcmVibration {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_HapticsPcmVibration() ;

// Ctor Parameters [CppParam { name: "SamplesCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Samples", ty: "::ArrayW<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "SampleRateHz", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Append", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr OVRInput_HapticsPcmVibration(int32_t  SamplesCount, ::ArrayW<float_t>  Samples, float_t  SampleRateHz, bool  Append) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11949};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field SamplesCount, offset: 0x0, size: 0x4, def value: None
 int32_t  SamplesCount;

/// @brief Field Samples, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<float_t>  Samples;

/// @brief Field SampleRateHz, offset: 0x10, size: 0x4, def value: None
 float_t  SampleRateHz;

/// @brief Field Append, offset: 0x14, size: 0x1, def value: None
 bool  Append;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_HapticsPcmVibration, SamplesCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_HapticsPcmVibration, Samples) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_HapticsPcmVibration, SampleRateHz) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_HapticsPcmVibration, Append) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRInput_HapticsPcmVibration) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
