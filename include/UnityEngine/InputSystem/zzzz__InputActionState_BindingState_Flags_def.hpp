#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionState_BindingState_Flags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionState_BindingState_Flags)
// Forward declare root types
namespace GlobalNamespace {
struct BindingState_InputActionState_Flags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BindingState_InputActionState_Flags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BindingState_InputActionState_Flags, "UnityEngine.InputSystem", "InputActionState/BindingState/Flags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionState/BindingState/Flags
struct CORDL_TYPE BindingState_InputActionState_Flags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BindingState_InputActionState_Flags_Unwrapped
enum struct __BindingState_InputActionState_Flags_Unwrapped : int32_t {
__E_ChainsWithNext = static_cast<int32_t>(0x1),
__E_EndOfChain = static_cast<int32_t>(0x2),
__E_Composite = static_cast<int32_t>(0x4),
__E_PartOfComposite = static_cast<int32_t>(0x8),
__E_InitialStateCheckPending = static_cast<int32_t>(0x10),
__E_WantsInitialStateCheck = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BindingState_InputActionState_Flags_Unwrapped () const noexcept {
return static_cast<__BindingState_InputActionState_Flags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BindingState_InputActionState_Flags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BindingState_InputActionState_Flags(int32_t  value__) noexcept;

/// @brief Field ChainsWithNext value: I32(1)
static ::GlobalNamespace::BindingState_InputActionState_Flags const ChainsWithNext;

/// @brief Field Composite value: I32(4)
static ::GlobalNamespace::BindingState_InputActionState_Flags const Composite;

/// @brief Field EndOfChain value: I32(2)
static ::GlobalNamespace::BindingState_InputActionState_Flags const EndOfChain;

/// @brief Field InitialStateCheckPending value: I32(16)
static ::GlobalNamespace::BindingState_InputActionState_Flags const InitialStateCheckPending;

/// @brief Field PartOfComposite value: I32(8)
static ::GlobalNamespace::BindingState_InputActionState_Flags const PartOfComposite;

/// @brief Field WantsInitialStateCheck value: I32(32)
static ::GlobalNamespace::BindingState_InputActionState_Flags const WantsInitialStateCheck;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13383};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BindingState_InputActionState_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BindingState_InputActionState_Flags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
