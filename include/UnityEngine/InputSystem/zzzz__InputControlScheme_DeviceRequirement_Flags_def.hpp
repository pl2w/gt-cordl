#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlScheme_DeviceRequirement_Flags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlScheme_DeviceRequirement_Flags)
// Forward declare root types
namespace GlobalNamespace {
struct DeviceRequirement_InputControlScheme_Flags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DeviceRequirement_InputControlScheme_Flags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeviceRequirement_InputControlScheme_Flags, "UnityEngine.InputSystem", "InputControlScheme/DeviceRequirement/Flags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlScheme/DeviceRequirement/Flags
struct CORDL_TYPE DeviceRequirement_InputControlScheme_Flags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DeviceRequirement_InputControlScheme_Flags_Unwrapped
enum struct __DeviceRequirement_InputControlScheme_Flags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Optional = static_cast<int32_t>(0x1),
__E_Or = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DeviceRequirement_InputControlScheme_Flags_Unwrapped () const noexcept {
return static_cast<__DeviceRequirement_InputControlScheme_Flags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DeviceRequirement_InputControlScheme_Flags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DeviceRequirement_InputControlScheme_Flags(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::DeviceRequirement_InputControlScheme_Flags const None;

/// @brief Field Optional value: I32(1)
static ::GlobalNamespace::DeviceRequirement_InputControlScheme_Flags const Optional;

/// @brief Field Or value: I32(2)
static ::GlobalNamespace::DeviceRequirement_InputControlScheme_Flags const Or;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13410};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeviceRequirement_InputControlScheme_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DeviceRequirement_InputControlScheme_Flags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
