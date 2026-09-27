#pragma once
// IWYU pragma private; include "GorillaTag/ScienceExperimentManager_RisingLiquidState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScienceExperimentManager_RisingLiquidState)
// Forward declare root types
namespace GlobalNamespace {
struct ScienceExperimentManager_RisingLiquidState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScienceExperimentManager_RisingLiquidState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScienceExperimentManager_RisingLiquidState, "GorillaTag", "ScienceExperimentManager/RisingLiquidState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.ScienceExperimentManager/RisingLiquidState
struct CORDL_TYPE ScienceExperimentManager_RisingLiquidState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScienceExperimentManager_RisingLiquidState_Unwrapped
enum struct __ScienceExperimentManager_RisingLiquidState_Unwrapped : int32_t {
__E_Drained = static_cast<int32_t>(0x0),
__E_Erupting = static_cast<int32_t>(0x1),
__E_Rising = static_cast<int32_t>(0x2),
__E_Full = static_cast<int32_t>(0x3),
__E_PreDrainDelay = static_cast<int32_t>(0x4),
__E_Draining = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScienceExperimentManager_RisingLiquidState_Unwrapped () const noexcept {
return static_cast<__ScienceExperimentManager_RisingLiquidState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScienceExperimentManager_RisingLiquidState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScienceExperimentManager_RisingLiquidState(int32_t  value__) noexcept;

/// @brief Field Drained value: I32(0)
static ::GlobalNamespace::ScienceExperimentManager_RisingLiquidState const Drained;

/// @brief Field Draining value: I32(5)
static ::GlobalNamespace::ScienceExperimentManager_RisingLiquidState const Draining;

/// @brief Field Erupting value: I32(1)
static ::GlobalNamespace::ScienceExperimentManager_RisingLiquidState const Erupting;

/// @brief Field Full value: I32(3)
static ::GlobalNamespace::ScienceExperimentManager_RisingLiquidState const Full;

/// @brief Field PreDrainDelay value: I32(4)
static ::GlobalNamespace::ScienceExperimentManager_RisingLiquidState const PreDrainDelay;

/// @brief Field Rising value: I32(2)
static ::GlobalNamespace::ScienceExperimentManager_RisingLiquidState const Rising;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4634};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScienceExperimentManager_RisingLiquidState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScienceExperimentManager_RisingLiquidState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
