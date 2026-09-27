#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputAction_ActionFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputAction_ActionFlags)
// Forward declare root types
namespace GlobalNamespace {
struct InputAction_ActionFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputAction_ActionFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputAction_ActionFlags, "UnityEngine.InputSystem", "InputAction/ActionFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputAction/ActionFlags
struct CORDL_TYPE InputAction_ActionFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputAction_ActionFlags_Unwrapped
enum struct __InputAction_ActionFlags_Unwrapped : int32_t {
__E_WantsInitialStateCheck = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputAction_ActionFlags_Unwrapped () const noexcept {
return static_cast<__InputAction_ActionFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputAction_ActionFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputAction_ActionFlags(int32_t  value__) noexcept;

/// @brief Field WantsInitialStateCheck value: I32(1)
static ::GlobalNamespace::InputAction_ActionFlags const WantsInitialStateCheck;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13339};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputAction_ActionFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputAction_ActionFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
