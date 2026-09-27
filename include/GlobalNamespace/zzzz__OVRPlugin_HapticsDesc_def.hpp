#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_HapticsDesc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_HapticsDesc)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_HapticsDesc;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_HapticsDesc);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_HapticsDesc, "", "OVRPlugin/HapticsDesc");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/HapticsDesc
struct CORDL_TYPE OVRPlugin_HapticsDesc {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_HapticsDesc() ;

// Ctor Parameters [CppParam { name: "SampleRateHz", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SampleSizeInBytes", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MinimumSafeSamplesQueued", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MinimumBufferSamplesCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "OptimalBufferSamplesCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaximumBufferSamplesCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_HapticsDesc(int32_t  SampleRateHz, int32_t  SampleSizeInBytes, int32_t  MinimumSafeSamplesQueued, int32_t  MinimumBufferSamplesCount, int32_t  OptimalBufferSamplesCount, int32_t  MaximumBufferSamplesCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12099};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field SampleRateHz, offset: 0x0, size: 0x4, def value: None
 int32_t  SampleRateHz;

/// @brief Field SampleSizeInBytes, offset: 0x4, size: 0x4, def value: None
 int32_t  SampleSizeInBytes;

/// @brief Field MinimumSafeSamplesQueued, offset: 0x8, size: 0x4, def value: None
 int32_t  MinimumSafeSamplesQueued;

/// @brief Field MinimumBufferSamplesCount, offset: 0xc, size: 0x4, def value: None
 int32_t  MinimumBufferSamplesCount;

/// @brief Field OptimalBufferSamplesCount, offset: 0x10, size: 0x4, def value: None
 int32_t  OptimalBufferSamplesCount;

/// @brief Field MaximumBufferSamplesCount, offset: 0x14, size: 0x4, def value: None
 int32_t  MaximumBufferSamplesCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_HapticsDesc, SampleRateHz) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HapticsDesc, SampleSizeInBytes) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HapticsDesc, MinimumSafeSamplesQueued) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HapticsDesc, MinimumBufferSamplesCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HapticsDesc, OptimalBufferSamplesCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HapticsDesc, MaximumBufferSamplesCount) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_HapticsDesc) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
