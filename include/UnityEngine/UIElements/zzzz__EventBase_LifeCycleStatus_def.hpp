#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventBase_LifeCycleStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventBase_LifeCycleStatus)
// Forward declare root types
namespace GlobalNamespace {
struct EventBase_LifeCycleStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EventBase_LifeCycleStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EventBase_LifeCycleStatus, "UnityEngine.UIElements", "EventBase/LifeCycleStatus");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.EventBase/LifeCycleStatus
struct CORDL_TYPE EventBase_LifeCycleStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EventBase_LifeCycleStatus_Unwrapped
enum struct __EventBase_LifeCycleStatus_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_PropagationStopped = static_cast<int32_t>(0x1),
__E_ImmediatePropagationStopped = static_cast<int32_t>(0x2),
__E_Dispatching = static_cast<int32_t>(0x4),
__E_Pooled = static_cast<int32_t>(0x8),
__E_IMGUIEventIsValid = static_cast<int32_t>(0x10),
__E_PropagateToIMGUI = static_cast<int32_t>(0x20),
__E_Dispatched = static_cast<int32_t>(0x40),
__E_Processed = static_cast<int32_t>(0x80),
__E_ProcessedByFocusController = static_cast<int32_t>(0x100),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EventBase_LifeCycleStatus_Unwrapped () const noexcept {
return static_cast<__EventBase_LifeCycleStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EventBase_LifeCycleStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EventBase_LifeCycleStatus(int32_t  value__) noexcept;

/// @brief Field Dispatched value: I32(64)
static ::GlobalNamespace::EventBase_LifeCycleStatus const Dispatched;

/// @brief Field Dispatching value: I32(4)
static ::GlobalNamespace::EventBase_LifeCycleStatus const Dispatching;

/// @brief Field IMGUIEventIsValid value: I32(16)
static ::GlobalNamespace::EventBase_LifeCycleStatus const IMGUIEventIsValid;

/// @brief Field ImmediatePropagationStopped value: I32(2)
static ::GlobalNamespace::EventBase_LifeCycleStatus const ImmediatePropagationStopped;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::EventBase_LifeCycleStatus const None;

/// @brief Field Pooled value: I32(8)
static ::GlobalNamespace::EventBase_LifeCycleStatus const Pooled;

/// @brief Field Processed value: I32(128)
static ::GlobalNamespace::EventBase_LifeCycleStatus const Processed;

/// @brief Field ProcessedByFocusController value: I32(256)
static ::GlobalNamespace::EventBase_LifeCycleStatus const ProcessedByFocusController;

/// @brief Field PropagateToIMGUI value: I32(32)
static ::GlobalNamespace::EventBase_LifeCycleStatus const PropagateToIMGUI;

/// @brief Field PropagationStopped value: I32(1)
static ::GlobalNamespace::EventBase_LifeCycleStatus const PropagationStopped;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7595};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EventBase_LifeCycleStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EventBase_LifeCycleStatus) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
