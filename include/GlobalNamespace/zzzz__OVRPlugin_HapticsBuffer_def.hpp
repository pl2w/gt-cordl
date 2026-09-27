#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_HapticsBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_HapticsBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_HapticsBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_HapticsBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_HapticsBuffer, "", "OVRPlugin/HapticsBuffer");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/HapticsBuffer
struct CORDL_TYPE OVRPlugin_HapticsBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_HapticsBuffer() ;

// Ctor Parameters [CppParam { name: "Samples", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "SamplesCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_HapticsBuffer(::System::IntPtr  Samples, int32_t  SamplesCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12097};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Samples, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  Samples;

/// @brief Field SamplesCount, offset: 0x8, size: 0x4, def value: None
 int32_t  SamplesCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_HapticsBuffer, Samples) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HapticsBuffer, SamplesCount) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_HapticsBuffer) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
