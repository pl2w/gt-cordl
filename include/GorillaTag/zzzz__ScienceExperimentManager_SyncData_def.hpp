#pragma once
// IWYU pragma private; include "GorillaTag/ScienceExperimentManager_SyncData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/zzzz__ScienceExperimentManager_RisingLiquidState_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ScienceExperimentManager_SyncData)
// Forward declare root types
namespace GlobalNamespace {
struct ScienceExperimentManager_SyncData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScienceExperimentManager_SyncData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScienceExperimentManager_SyncData, "GorillaTag", "ScienceExperimentManager/SyncData");
// Dependencies GorillaTag.ScienceExperimentManager::RisingLiquidState
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.ScienceExperimentManager/SyncData
struct CORDL_TYPE ScienceExperimentManager_SyncData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ScienceExperimentManager_SyncData() ;

// Ctor Parameters [CppParam { name: "state", ty: "::GlobalNamespace::ScienceExperimentManager_RisingLiquidState", modifiers: "", def_value: None, comment: None }, CppParam { name: "stateStartTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "stateStartLiquidProgressLinear", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "activationProgress", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr ScienceExperimentManager_SyncData(::GlobalNamespace::ScienceExperimentManager_RisingLiquidState  state, double_t  stateStartTime, float_t  stateStartLiquidProgressLinear, double_t  activationProgress) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4638};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field state, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::ScienceExperimentManager_RisingLiquidState  state;

/// @brief Field stateStartTime, offset: 0x8, size: 0x8, def value: None
 double_t  stateStartTime;

/// @brief Field stateStartLiquidProgressLinear, offset: 0x10, size: 0x4, def value: None
 float_t  stateStartLiquidProgressLinear;

/// @brief Field activationProgress, offset: 0x18, size: 0x8, def value: None
 double_t  activationProgress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScienceExperimentManager_SyncData, state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentManager_SyncData, stateStartTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentManager_SyncData, stateStartLiquidProgressLinear) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentManager_SyncData, activationProgress) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScienceExperimentManager_SyncData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
