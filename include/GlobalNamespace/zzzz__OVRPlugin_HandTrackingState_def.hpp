#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_HandTrackingState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_MicrogestureType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_HandTrackingState)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_HandTrackingState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_HandTrackingState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_HandTrackingState, "", "OVRPlugin/HandTrackingState");
// Dependencies OVRPlugin::MicrogestureType
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/HandTrackingState
struct CORDL_TYPE OVRPlugin_HandTrackingState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_HandTrackingState() ;

// Ctor Parameters [CppParam { name: "Microgesture", ty: "::GlobalNamespace::OVRPlugin_MicrogestureType", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_HandTrackingState(::GlobalNamespace::OVRPlugin_MicrogestureType  Microgesture) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12137};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Microgesture, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_MicrogestureType  Microgesture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandTrackingState, Microgesture) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_HandTrackingState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
