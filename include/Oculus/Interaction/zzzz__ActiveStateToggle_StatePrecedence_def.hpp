#pragma once
// IWYU pragma private; include "Oculus/Interaction/ActiveStateToggle_StatePrecedence.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ActiveStateToggle_StatePrecedence)
// Forward declare root types
namespace GlobalNamespace {
struct ActiveStateToggle_StatePrecedence;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ActiveStateToggle_StatePrecedence);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ActiveStateToggle_StatePrecedence, "Oculus.Interaction", "ActiveStateToggle/StatePrecedence");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.ActiveStateToggle/StatePrecedence
struct CORDL_TYPE ActiveStateToggle_StatePrecedence {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ActiveStateToggle_StatePrecedence_Unwrapped
enum struct __ActiveStateToggle_StatePrecedence_Unwrapped : int32_t {
__E_On = static_cast<int32_t>(0x0),
__E_Off = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ActiveStateToggle_StatePrecedence_Unwrapped () const noexcept {
return static_cast<__ActiveStateToggle_StatePrecedence_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateToggle_StatePrecedence() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ActiveStateToggle_StatePrecedence(int32_t  value__) noexcept;

/// @brief Field Off value: I32(1)
static ::GlobalNamespace::ActiveStateToggle_StatePrecedence const Off;

/// @brief Field On value: I32(0)
static ::GlobalNamespace::ActiveStateToggle_StatePrecedence const On;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15733};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ActiveStateToggle_StatePrecedence, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ActiveStateToggle_StatePrecedence) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
