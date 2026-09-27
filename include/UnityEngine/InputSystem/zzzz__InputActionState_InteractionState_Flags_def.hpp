#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionState_InteractionState_Flags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionState_InteractionState_Flags)
// Forward declare root types
namespace GlobalNamespace {
struct InteractionState_InputActionState_Flags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InteractionState_InputActionState_Flags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InteractionState_InputActionState_Flags, "UnityEngine.InputSystem", "InputActionState/InteractionState/Flags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionState/InteractionState/Flags
struct CORDL_TYPE InteractionState_InputActionState_Flags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InteractionState_InputActionState_Flags_Unwrapped
enum struct __InteractionState_InputActionState_Flags_Unwrapped : int32_t {
__E_TimerRunning = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InteractionState_InputActionState_Flags_Unwrapped () const noexcept {
return static_cast<__InteractionState_InputActionState_Flags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InteractionState_InputActionState_Flags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InteractionState_InputActionState_Flags(int32_t  value__) noexcept;

/// @brief Field TimerRunning value: I32(1)
static ::GlobalNamespace::InteractionState_InputActionState_Flags const TimerRunning;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13381};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InteractionState_InputActionState_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InteractionState_InputActionState_Flags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
