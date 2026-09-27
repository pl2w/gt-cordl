#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_HapticsPcmVibration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_HapticsPcmVibration)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_HapticsPcmVibration;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_HapticsPcmVibration);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_HapticsPcmVibration, "", "OVRPlugin/HapticsPcmVibration");
// Dependencies OVRPlugin::Bool, System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/HapticsPcmVibration
struct CORDL_TYPE OVRPlugin_HapticsPcmVibration {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_HapticsPcmVibration() ;

// Ctor Parameters [CppParam { name: "BufferSize", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Buffer", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "SampleRateHz", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Append", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "SamplesConsumed", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_HapticsPcmVibration(uint32_t  BufferSize, ::System::IntPtr  Buffer, float_t  SampleRateHz, ::GlobalNamespace::OVRPlugin_Bool  Append, ::System::IntPtr  SamplesConsumed) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12101};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field BufferSize, offset: 0x0, size: 0x4, def value: None
 uint32_t  BufferSize;

/// @brief Field Buffer, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  Buffer;

/// @brief Field SampleRateHz, offset: 0x10, size: 0x4, def value: None
 float_t  SampleRateHz;

/// @brief Field Append, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_Bool  Append;

/// @brief Field SamplesConsumed, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  SamplesConsumed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_HapticsPcmVibration, BufferSize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HapticsPcmVibration, Buffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HapticsPcmVibration, SampleRateHz) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HapticsPcmVibration, Append) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HapticsPcmVibration, SamplesConsumed) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_HapticsPcmVibration) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
