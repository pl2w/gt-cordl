#pragma once
// IWYU pragma private; include "GlobalNamespace/InfectionLavaController_LavaSyncData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__InfectionLavaController_RisingLavaState_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(InfectionLavaController_LavaSyncData)
// Forward declare root types
namespace GlobalNamespace {
struct InfectionLavaController_LavaSyncData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InfectionLavaController_LavaSyncData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InfectionLavaController_LavaSyncData, "", "InfectionLavaController/LavaSyncData");
// Dependencies InfectionLavaController::RisingLavaState
namespace GlobalNamespace {
// Is value type: true
// CS Name: InfectionLavaController/LavaSyncData
struct CORDL_TYPE InfectionLavaController_LavaSyncData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InfectionLavaController_LavaSyncData() ;

// Ctor Parameters [CppParam { name: "state", ty: "::GlobalNamespace::InfectionLavaController_RisingLavaState", modifiers: "", def_value: None, comment: None }, CppParam { name: "stateStartTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "activationProgress", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr InfectionLavaController_LavaSyncData(::GlobalNamespace::InfectionLavaController_RisingLavaState  state, double_t  stateStartTime, float_t  activationProgress) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2530};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field state, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::InfectionLavaController_RisingLavaState  state;

/// @brief Field stateStartTime, offset: 0x8, size: 0x8, def value: None
 double_t  stateStartTime;

/// @brief Field activationProgress, offset: 0x10, size: 0x4, def value: None
 float_t  activationProgress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InfectionLavaController_LavaSyncData, state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController_LavaSyncData, stateStartTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InfectionLavaController_LavaSyncData, activationProgress) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InfectionLavaController_LavaSyncData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
