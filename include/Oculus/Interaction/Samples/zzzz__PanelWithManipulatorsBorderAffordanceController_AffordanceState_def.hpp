#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/PanelWithManipulatorsBorderAffordanceController_AffordanceState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PanelWithManipulatorsBorderAffordanceController_AffordanceState)
// Forward declare root types
namespace GlobalNamespace {
struct PanelWithManipulatorsBorderAffordanceController_AffordanceState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState, "Oculus.Interaction.Samples", "PanelWithManipulatorsBorderAffordanceController/AffordanceState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Samples.PanelWithManipulatorsBorderAffordanceController/AffordanceState
struct CORDL_TYPE PanelWithManipulatorsBorderAffordanceController_AffordanceState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PanelWithManipulatorsBorderAffordanceController_AffordanceState_Unwrapped
enum struct __PanelWithManipulatorsBorderAffordanceController_AffordanceState_Unwrapped : int32_t {
__E_Hidden = static_cast<int32_t>(0x0),
__E_Visible = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PanelWithManipulatorsBorderAffordanceController_AffordanceState_Unwrapped () const noexcept {
return static_cast<__PanelWithManipulatorsBorderAffordanceController_AffordanceState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PanelWithManipulatorsBorderAffordanceController_AffordanceState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PanelWithManipulatorsBorderAffordanceController_AffordanceState(int32_t  value__) noexcept;

/// @brief Field Hidden value: I32(0)
static ::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState const Hidden;

/// @brief Field Visible value: I32(1)
static ::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState const Visible;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28318};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
