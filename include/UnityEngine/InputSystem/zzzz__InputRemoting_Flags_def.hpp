#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputRemoting_Flags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputRemoting_Flags)
// Forward declare root types
namespace GlobalNamespace {
struct InputRemoting_Flags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputRemoting_Flags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputRemoting_Flags, "UnityEngine.InputSystem", "InputRemoting/Flags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputRemoting/Flags
struct CORDL_TYPE InputRemoting_Flags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputRemoting_Flags_Unwrapped
enum struct __InputRemoting_Flags_Unwrapped : int32_t {
__E_Sending = static_cast<int32_t>(0x1),
__E_StartSendingOnConnect = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputRemoting_Flags_Unwrapped () const noexcept {
return static_cast<__InputRemoting_Flags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputRemoting_Flags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputRemoting_Flags(int32_t  value__) noexcept;

/// @brief Field Sending value: I32(1)
static ::GlobalNamespace::InputRemoting_Flags const Sending;

/// @brief Field StartSendingOnConnect value: I32(2)
static ::GlobalNamespace::InputRemoting_Flags const StartSendingOnConnect;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13466};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputRemoting_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputRemoting_Flags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
