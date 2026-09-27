#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/ControllerButtonsMapper_ButtonClickAction_ButtonClickMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerButtonsMapper_ButtonClickAction_ButtonClickMode)
// Forward declare root types
namespace GlobalNamespace {
struct ButtonClickAction_ControllerButtonsMapper_ButtonClickMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode, "Meta.XR.BuildingBlocks", "ControllerButtonsMapper/ButtonClickAction/ButtonClickMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.ControllerButtonsMapper/ButtonClickAction/ButtonClickMode
struct CORDL_TYPE ButtonClickAction_ControllerButtonsMapper_ButtonClickMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ButtonClickAction_ControllerButtonsMapper_ButtonClickMode_Unwrapped
enum struct __ButtonClickAction_ControllerButtonsMapper_ButtonClickMode_Unwrapped : int32_t {
__E_OnButtonUp = static_cast<int32_t>(0x0),
__E_OnButtonDown = static_cast<int32_t>(0x1),
__E_OnButton = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ButtonClickAction_ControllerButtonsMapper_ButtonClickMode_Unwrapped () const noexcept {
return static_cast<__ButtonClickAction_ControllerButtonsMapper_ButtonClickMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ButtonClickAction_ControllerButtonsMapper_ButtonClickMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ButtonClickAction_ControllerButtonsMapper_ButtonClickMode(int32_t  value__) noexcept;

/// @brief Field OnButton value: I32(2)
static ::GlobalNamespace::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode const OnButton;

/// @brief Field OnButtonDown value: I32(1)
static ::GlobalNamespace::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode const OnButtonDown;

/// @brief Field OnButtonUp value: I32(0)
static ::GlobalNamespace::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode const OnButtonUp;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31438};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
