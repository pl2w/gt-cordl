#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputDevice_DeviceFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDevice_DeviceFlags)
// Forward declare root types
namespace GlobalNamespace {
struct InputDevice_DeviceFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputDevice_DeviceFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputDevice_DeviceFlags, "UnityEngine.InputSystem", "InputDevice/DeviceFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputDevice/DeviceFlags
struct CORDL_TYPE InputDevice_DeviceFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputDevice_DeviceFlags_Unwrapped
enum struct __InputDevice_DeviceFlags_Unwrapped : int32_t {
__E_UpdateBeforeRender = static_cast<int32_t>(0x1),
__E_HasStateCallbacks = static_cast<int32_t>(0x2),
__E_HasControlsWithDefaultState = static_cast<int32_t>(0x4),
__E_HasDontResetControls = static_cast<int32_t>(0x400),
__E_HasEventMerger = static_cast<int32_t>(0x2000),
__E_HasEventPreProcessor = static_cast<int32_t>(0x4000),
__E_Remote = static_cast<int32_t>(0x8),
__E_Native = static_cast<int32_t>(0x10),
__E_DisabledInFrontend = static_cast<int32_t>(0x20),
__E_DisabledInRuntime = static_cast<int32_t>(0x80),
__E_DisabledWhileInBackground = static_cast<int32_t>(0x100),
__E_DisabledStateHasBeenQueriedFromRuntime = static_cast<int32_t>(0x40),
__E_CanRunInBackground = static_cast<int32_t>(0x800),
__E_CanRunInBackgroundHasBeenQueried = static_cast<int32_t>(0x1000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputDevice_DeviceFlags_Unwrapped () const noexcept {
return static_cast<__InputDevice_DeviceFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputDevice_DeviceFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputDevice_DeviceFlags(int32_t  value__) noexcept;

/// @brief Field CanRunInBackground value: I32(2048)
static ::GlobalNamespace::InputDevice_DeviceFlags const CanRunInBackground;

/// @brief Field CanRunInBackgroundHasBeenQueried value: I32(4096)
static ::GlobalNamespace::InputDevice_DeviceFlags const CanRunInBackgroundHasBeenQueried;

/// @brief Field DisabledInFrontend value: I32(32)
static ::GlobalNamespace::InputDevice_DeviceFlags const DisabledInFrontend;

/// @brief Field DisabledInRuntime value: I32(128)
static ::GlobalNamespace::InputDevice_DeviceFlags const DisabledInRuntime;

/// @brief Field DisabledStateHasBeenQueriedFromRuntime value: I32(64)
static ::GlobalNamespace::InputDevice_DeviceFlags const DisabledStateHasBeenQueriedFromRuntime;

/// @brief Field DisabledWhileInBackground value: I32(256)
static ::GlobalNamespace::InputDevice_DeviceFlags const DisabledWhileInBackground;

/// @brief Field HasControlsWithDefaultState value: I32(4)
static ::GlobalNamespace::InputDevice_DeviceFlags const HasControlsWithDefaultState;

/// @brief Field HasDontResetControls value: I32(1024)
static ::GlobalNamespace::InputDevice_DeviceFlags const HasDontResetControls;

/// @brief Field HasEventMerger value: I32(8192)
static ::GlobalNamespace::InputDevice_DeviceFlags const HasEventMerger;

/// @brief Field HasEventPreProcessor value: I32(16384)
static ::GlobalNamespace::InputDevice_DeviceFlags const HasEventPreProcessor;

/// @brief Field HasStateCallbacks value: I32(2)
static ::GlobalNamespace::InputDevice_DeviceFlags const HasStateCallbacks;

/// @brief Field Native value: I32(16)
static ::GlobalNamespace::InputDevice_DeviceFlags const Native;

/// @brief Field Remote value: I32(8)
static ::GlobalNamespace::InputDevice_DeviceFlags const Remote;

/// @brief Field UpdateBeforeRender value: I32(1)
static ::GlobalNamespace::InputDevice_DeviceFlags const UpdateBeforeRender;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13449};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputDevice_DeviceFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputDevice_DeviceFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
