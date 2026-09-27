#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout_ControlItem_Flags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlLayout_ControlItem_Flags)
// Forward declare root types
namespace GlobalNamespace {
struct ControlItem_InputControlLayout_Flags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ControlItem_InputControlLayout_Flags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ControlItem_InputControlLayout_Flags, "UnityEngine.InputSystem.Layouts", "InputControlLayout/ControlItem/Flags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem/Flags
struct CORDL_TYPE ControlItem_InputControlLayout_Flags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ControlItem_InputControlLayout_Flags_Unwrapped
enum struct __ControlItem_InputControlLayout_Flags_Unwrapped : int32_t {
__E_isModifyingExistingControl = static_cast<int32_t>(0x1),
__E_IsNoisy = static_cast<int32_t>(0x2),
__E_IsSynthetic = static_cast<int32_t>(0x4),
__E_IsFirstDefinedInThisLayout = static_cast<int32_t>(0x8),
__E_DontReset = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ControlItem_InputControlLayout_Flags_Unwrapped () const noexcept {
return static_cast<__ControlItem_InputControlLayout_Flags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ControlItem_InputControlLayout_Flags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ControlItem_InputControlLayout_Flags(int32_t  value__) noexcept;

/// @brief Field DontReset value: I32(16)
static ::GlobalNamespace::ControlItem_InputControlLayout_Flags const DontReset;

/// @brief Field IsFirstDefinedInThisLayout value: I32(8)
static ::GlobalNamespace::ControlItem_InputControlLayout_Flags const IsFirstDefinedInThisLayout;

/// @brief Field IsNoisy value: I32(2)
static ::GlobalNamespace::ControlItem_InputControlLayout_Flags const IsNoisy;

/// @brief Field IsSynthetic value: I32(4)
static ::GlobalNamespace::ControlItem_InputControlLayout_Flags const IsSynthetic;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13820};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field isModifyingExistingControl value: I32(1)
static ::GlobalNamespace::ControlItem_InputControlLayout_Flags const isModifyingExistingControl;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ControlItem_InputControlLayout_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ControlItem_InputControlLayout_Flags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
