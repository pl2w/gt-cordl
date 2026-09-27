#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/PointerEventData_FramePressState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerEventData_FramePressState)
// Forward declare root types
namespace GlobalNamespace {
struct PointerEventData_FramePressState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PointerEventData_FramePressState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PointerEventData_FramePressState, "UnityEngine.EventSystems", "PointerEventData/FramePressState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.EventSystems.PointerEventData/FramePressState
struct CORDL_TYPE PointerEventData_FramePressState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PointerEventData_FramePressState_Unwrapped
enum struct __PointerEventData_FramePressState_Unwrapped : int32_t {
__E_Pressed = static_cast<int32_t>(0x0),
__E_Released = static_cast<int32_t>(0x1),
__E_PressedAndReleased = static_cast<int32_t>(0x2),
__E_NotChanged = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PointerEventData_FramePressState_Unwrapped () const noexcept {
return static_cast<__PointerEventData_FramePressState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PointerEventData_FramePressState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PointerEventData_FramePressState(int32_t  value__) noexcept;

/// @brief Field NotChanged value: I32(3)
static ::GlobalNamespace::PointerEventData_FramePressState const NotChanged;

/// @brief Field Pressed value: I32(0)
static ::GlobalNamespace::PointerEventData_FramePressState const Pressed;

/// @brief Field PressedAndReleased value: I32(2)
static ::GlobalNamespace::PointerEventData_FramePressState const PressedAndReleased;

/// @brief Field Released value: I32(1)
static ::GlobalNamespace::PointerEventData_FramePressState const Released;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26148};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PointerEventData_FramePressState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PointerEventData_FramePressState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
