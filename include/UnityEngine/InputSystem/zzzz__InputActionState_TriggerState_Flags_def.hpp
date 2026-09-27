#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionState_TriggerState_Flags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionState_TriggerState_Flags)
// Forward declare root types
namespace GlobalNamespace {
struct TriggerState_InputActionState_Flags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TriggerState_InputActionState_Flags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TriggerState_InputActionState_Flags, "UnityEngine.InputSystem", "InputActionState/TriggerState/Flags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionState/TriggerState/Flags
struct CORDL_TYPE TriggerState_InputActionState_Flags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TriggerState_InputActionState_Flags_Unwrapped
enum struct __TriggerState_InputActionState_Flags_Unwrapped : int32_t {
__E_HaveMagnitude = static_cast<int32_t>(0x1),
__E_PassThrough = static_cast<int32_t>(0x2),
__E_MayNeedConflictResolution = static_cast<int32_t>(0x4),
__E_HasMultipleConcurrentActuations = static_cast<int32_t>(0x8),
__E_InProcessing = static_cast<int32_t>(0x10),
__E_Button = static_cast<int32_t>(0x20),
__E_Pressed = static_cast<int32_t>(0x40),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TriggerState_InputActionState_Flags_Unwrapped () const noexcept {
return static_cast<__TriggerState_InputActionState_Flags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TriggerState_InputActionState_Flags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TriggerState_InputActionState_Flags(int32_t  value__) noexcept;

/// @brief Field Button value: I32(32)
static ::GlobalNamespace::TriggerState_InputActionState_Flags const Button;

/// @brief Field HasMultipleConcurrentActuations value: I32(8)
static ::GlobalNamespace::TriggerState_InputActionState_Flags const HasMultipleConcurrentActuations;

/// @brief Field HaveMagnitude value: I32(1)
static ::GlobalNamespace::TriggerState_InputActionState_Flags const HaveMagnitude;

/// @brief Field InProcessing value: I32(16)
static ::GlobalNamespace::TriggerState_InputActionState_Flags const InProcessing;

/// @brief Field MayNeedConflictResolution value: I32(4)
static ::GlobalNamespace::TriggerState_InputActionState_Flags const MayNeedConflictResolution;

/// @brief Field PassThrough value: I32(2)
static ::GlobalNamespace::TriggerState_InputActionState_Flags const PassThrough;

/// @brief Field Pressed value: I32(64)
static ::GlobalNamespace::TriggerState_InputActionState_Flags const Pressed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13385};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TriggerState_InputActionState_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TriggerState_InputActionState_Flags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
