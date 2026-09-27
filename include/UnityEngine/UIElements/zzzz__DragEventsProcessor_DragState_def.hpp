#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DragEventsProcessor_DragState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DragEventsProcessor_DragState)
// Forward declare root types
namespace GlobalNamespace {
struct DragEventsProcessor_DragState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DragEventsProcessor_DragState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DragEventsProcessor_DragState, "UnityEngine.UIElements", "DragEventsProcessor/DragState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.DragEventsProcessor/DragState
struct CORDL_TYPE DragEventsProcessor_DragState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DragEventsProcessor_DragState_Unwrapped
enum struct __DragEventsProcessor_DragState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_CanStartDrag = static_cast<int32_t>(0x1),
__E_Dragging = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DragEventsProcessor_DragState_Unwrapped () const noexcept {
return static_cast<__DragEventsProcessor_DragState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DragEventsProcessor_DragState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DragEventsProcessor_DragState(int32_t  value__) noexcept;

/// @brief Field CanStartDrag value: I32(1)
static ::GlobalNamespace::DragEventsProcessor_DragState const CanStartDrag;

/// @brief Field Dragging value: I32(2)
static ::GlobalNamespace::DragEventsProcessor_DragState const Dragging;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::DragEventsProcessor_DragState const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7540};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DragEventsProcessor_DragState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DragEventsProcessor_DragState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
