#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout_Flags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlLayout_Flags)
// Forward declare root types
namespace GlobalNamespace {
struct InputControlLayout_Flags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputControlLayout_Flags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputControlLayout_Flags, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Flags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/Flags
struct CORDL_TYPE InputControlLayout_Flags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputControlLayout_Flags_Unwrapped
enum struct __InputControlLayout_Flags_Unwrapped : int32_t {
__E_IsGenericTypeOfDevice = static_cast<int32_t>(0x1),
__E_HideInUI = static_cast<int32_t>(0x2),
__E_IsOverride = static_cast<int32_t>(0x4),
__E_CanRunInBackground = static_cast<int32_t>(0x8),
__E_CanRunInBackgroundIsSet = static_cast<int32_t>(0x10),
__E_IsNoisy = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputControlLayout_Flags_Unwrapped () const noexcept {
return static_cast<__InputControlLayout_Flags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputControlLayout_Flags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputControlLayout_Flags(int32_t  value__) noexcept;

/// @brief Field CanRunInBackground value: I32(8)
static ::GlobalNamespace::InputControlLayout_Flags const CanRunInBackground;

/// @brief Field CanRunInBackgroundIsSet value: I32(16)
static ::GlobalNamespace::InputControlLayout_Flags const CanRunInBackgroundIsSet;

/// @brief Field HideInUI value: I32(2)
static ::GlobalNamespace::InputControlLayout_Flags const HideInUI;

/// @brief Field IsGenericTypeOfDevice value: I32(1)
static ::GlobalNamespace::InputControlLayout_Flags const IsGenericTypeOfDevice;

/// @brief Field IsNoisy value: I32(32)
static ::GlobalNamespace::InputControlLayout_Flags const IsNoisy;

/// @brief Field IsOverride value: I32(4)
static ::GlobalNamespace::InputControlLayout_Flags const IsOverride;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13825};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputControlLayout_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputControlLayout_Flags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
