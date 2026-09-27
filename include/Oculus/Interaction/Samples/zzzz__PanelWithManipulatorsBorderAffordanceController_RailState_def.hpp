#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/PanelWithManipulatorsBorderAffordanceController_RailState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PanelWithManipulatorsBorderAffordanceController_RailState)
// Forward declare root types
namespace GlobalNamespace {
struct PanelWithManipulatorsBorderAffordanceController_RailState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_RailState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_RailState, "Oculus.Interaction.Samples", "PanelWithManipulatorsBorderAffordanceController/RailState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Samples.PanelWithManipulatorsBorderAffordanceController/RailState
struct CORDL_TYPE PanelWithManipulatorsBorderAffordanceController_RailState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PanelWithManipulatorsBorderAffordanceController_RailState_Unwrapped
enum struct __PanelWithManipulatorsBorderAffordanceController_RailState_Unwrapped : int32_t {
__E_Hidden = static_cast<int32_t>(0x0),
__E_Hover = static_cast<int32_t>(0x1),
__E_Selected = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PanelWithManipulatorsBorderAffordanceController_RailState_Unwrapped () const noexcept {
return static_cast<__PanelWithManipulatorsBorderAffordanceController_RailState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PanelWithManipulatorsBorderAffordanceController_RailState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PanelWithManipulatorsBorderAffordanceController_RailState(int32_t  value__) noexcept;

/// @brief Field Hidden value: I32(0)
static ::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_RailState const Hidden;

/// @brief Field Hover value: I32(1)
static ::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_RailState const Hover;

/// @brief Field Selected value: I32(2)
static ::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_RailState const Selected;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28317};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_RailState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_RailState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
