#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Mock/MockRuntime_ScriptEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MockRuntime_ScriptEvent)
// Forward declare root types
namespace GlobalNamespace {
struct MockRuntime_ScriptEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MockRuntime_ScriptEvent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MockRuntime_ScriptEvent, "UnityEngine.XR.OpenXR.Features.Mock", "MockRuntime/ScriptEvent");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent
struct CORDL_TYPE MockRuntime_ScriptEvent {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MockRuntime_ScriptEvent_Unwrapped
enum struct __MockRuntime_ScriptEvent_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_EndFrame = static_cast<int32_t>(0x1),
__E_HapticImpulse = static_cast<int32_t>(0x2),
__E_HapticStop = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MockRuntime_ScriptEvent_Unwrapped () const noexcept {
return static_cast<__MockRuntime_ScriptEvent_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MockRuntime_ScriptEvent() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MockRuntime_ScriptEvent(int32_t  value__) noexcept;

/// @brief Field EndFrame value: I32(1)
static ::GlobalNamespace::MockRuntime_ScriptEvent const EndFrame;

/// @brief Field HapticImpulse value: I32(2)
static ::GlobalNamespace::MockRuntime_ScriptEvent const HapticImpulse;

/// @brief Field HapticStop value: I32(3)
static ::GlobalNamespace::MockRuntime_ScriptEvent const HapticStop;

/// @brief Field Unknown value: I32(0)
static ::GlobalNamespace::MockRuntime_ScriptEvent const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32977};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockRuntime_ScriptEvent, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MockRuntime_ScriptEvent) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
