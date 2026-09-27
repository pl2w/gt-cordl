#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/IModioUISelectable_SelectionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IModioUISelectable_SelectionState)
// Forward declare root types
namespace GlobalNamespace {
struct IModioUISelectable_SelectionState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::IModioUISelectable_SelectionState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IModioUISelectable_SelectionState, "Modio.Unity.UI.Components.Selectables", "IModioUISelectable/SelectionState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Unity.UI.Components.Selectables.IModioUISelectable/SelectionState
struct CORDL_TYPE IModioUISelectable_SelectionState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __IModioUISelectable_SelectionState_Unwrapped
enum struct __IModioUISelectable_SelectionState_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_Highlighted = static_cast<int32_t>(0x1),
__E_Pressed = static_cast<int32_t>(0x2),
__E_Selected = static_cast<int32_t>(0x3),
__E_Disabled = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __IModioUISelectable_SelectionState_Unwrapped () const noexcept {
return static_cast<__IModioUISelectable_SelectionState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr IModioUISelectable_SelectionState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr IModioUISelectable_SelectionState(int32_t  value__) noexcept;

/// @brief Field Disabled value: I32(4)
static ::GlobalNamespace::IModioUISelectable_SelectionState const Disabled;

/// @brief Field Highlighted value: I32(1)
static ::GlobalNamespace::IModioUISelectable_SelectionState const Highlighted;

/// @brief Field Normal value: I32(0)
static ::GlobalNamespace::IModioUISelectable_SelectionState const Normal;

/// @brief Field Pressed value: I32(2)
static ::GlobalNamespace::IModioUISelectable_SelectionState const Pressed;

/// @brief Field Selected value: I32(3)
static ::GlobalNamespace::IModioUISelectable_SelectionState const Selected;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27180};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IModioUISelectable_SelectionState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::IModioUISelectable_SelectionState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
