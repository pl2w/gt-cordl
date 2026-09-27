#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/InteractableObjectLabel_LabelState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InteractableObjectLabel_LabelState)
// Forward declare root types
namespace GlobalNamespace {
struct InteractableObjectLabel_LabelState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InteractableObjectLabel_LabelState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InteractableObjectLabel_LabelState, "Oculus.Interaction.Samples", "InteractableObjectLabel/LabelState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Samples.InteractableObjectLabel/LabelState
struct CORDL_TYPE InteractableObjectLabel_LabelState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InteractableObjectLabel_LabelState_Unwrapped
enum struct __InteractableObjectLabel_LabelState_Unwrapped : int32_t {
__E_Hidden = static_cast<int32_t>(0x0),
__E_FocusCheck = static_cast<int32_t>(0x1),
__E_Focused = static_cast<int32_t>(0x2),
__E_HideCheck = static_cast<int32_t>(0x3),
__E_Used = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InteractableObjectLabel_LabelState_Unwrapped () const noexcept {
return static_cast<__InteractableObjectLabel_LabelState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InteractableObjectLabel_LabelState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InteractableObjectLabel_LabelState(int32_t  value__) noexcept;

/// @brief Field FocusCheck value: I32(1)
static ::GlobalNamespace::InteractableObjectLabel_LabelState const FocusCheck;

/// @brief Field Focused value: I32(2)
static ::GlobalNamespace::InteractableObjectLabel_LabelState const Focused;

/// @brief Field Hidden value: I32(0)
static ::GlobalNamespace::InteractableObjectLabel_LabelState const Hidden;

/// @brief Field HideCheck value: I32(3)
static ::GlobalNamespace::InteractableObjectLabel_LabelState const HideCheck;

/// @brief Field Used value: I32(4)
static ::GlobalNamespace::InteractableObjectLabel_LabelState const Used;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28303};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InteractableObjectLabel_LabelState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InteractableObjectLabel_LabelState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
