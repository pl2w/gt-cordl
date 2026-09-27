#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_HapticsState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_HapticsState)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_HapticsState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_HapticsState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_HapticsState, "", "OVRPlugin/HapticsState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/HapticsState
struct CORDL_TYPE OVRPlugin_HapticsState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_HapticsState() ;

// Ctor Parameters [CppParam { name: "SamplesAvailable", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SamplesQueued", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_HapticsState(int32_t  SamplesAvailable, int32_t  SamplesQueued) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12098};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field SamplesAvailable, offset: 0x0, size: 0x4, def value: None
 int32_t  SamplesAvailable;

/// @brief Field SamplesQueued, offset: 0x4, size: 0x4, def value: None
 int32_t  SamplesQueued;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_HapticsState, SamplesAvailable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HapticsState, SamplesQueued) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_HapticsState) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
