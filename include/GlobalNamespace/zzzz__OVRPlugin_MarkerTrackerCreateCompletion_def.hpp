#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_MarkerTrackerCreateCompletion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Result_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_MarkerTrackerCreateCompletion)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_MarkerTrackerCreateCompletion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_MarkerTrackerCreateCompletion);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_MarkerTrackerCreateCompletion, "", "OVRPlugin/MarkerTrackerCreateCompletion");
// Dependencies OVRPlugin::Result
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/MarkerTrackerCreateCompletion
struct CORDL_TYPE OVRPlugin_MarkerTrackerCreateCompletion {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_MarkerTrackerCreateCompletion() ;

// Ctor Parameters [CppParam { name: "FutureResult", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: None, comment: None }, CppParam { name: "MarkerTracker", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_MarkerTrackerCreateCompletion(::GlobalNamespace::OVRPlugin_Result  FutureResult, uint64_t  MarkerTracker) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12261};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field FutureResult, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_Result  FutureResult;

/// @brief Field MarkerTracker, offset: 0x8, size: 0x8, def value: None
 uint64_t  MarkerTracker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_MarkerTrackerCreateCompletion, FutureResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_MarkerTrackerCreateCompletion, MarkerTracker) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_MarkerTrackerCreateCompletion) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
