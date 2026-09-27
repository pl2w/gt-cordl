#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControl_ControlFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControl_ControlFlags)
// Forward declare root types
namespace GlobalNamespace {
struct InputControl_ControlFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputControl_ControlFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputControl_ControlFlags, "UnityEngine.InputSystem", "InputControl/ControlFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControl/ControlFlags
struct CORDL_TYPE InputControl_ControlFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputControl_ControlFlags_Unwrapped
enum struct __InputControl_ControlFlags_Unwrapped : int32_t {
__E_ConfigUpToDate = static_cast<int32_t>(0x1),
__E_IsNoisy = static_cast<int32_t>(0x2),
__E_IsSynthetic = static_cast<int32_t>(0x4),
__E_IsButton = static_cast<int32_t>(0x8),
__E_DontReset = static_cast<int32_t>(0x10),
__E_SetupFinished = static_cast<int32_t>(0x20),
__E_UsesStateFromOtherControl = static_cast<int32_t>(0x40),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputControl_ControlFlags_Unwrapped () const noexcept {
return static_cast<__InputControl_ControlFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputControl_ControlFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputControl_ControlFlags(int32_t  value__) noexcept;

/// @brief Field ConfigUpToDate value: I32(1)
static ::GlobalNamespace::InputControl_ControlFlags const ConfigUpToDate;

/// @brief Field DontReset value: I32(16)
static ::GlobalNamespace::InputControl_ControlFlags const DontReset;

/// @brief Field IsButton value: I32(8)
static ::GlobalNamespace::InputControl_ControlFlags const IsButton;

/// @brief Field IsNoisy value: I32(2)
static ::GlobalNamespace::InputControl_ControlFlags const IsNoisy;

/// @brief Field IsSynthetic value: I32(4)
static ::GlobalNamespace::InputControl_ControlFlags const IsSynthetic;

/// @brief Field SetupFinished value: I32(32)
static ::GlobalNamespace::InputControl_ControlFlags const SetupFinished;

/// @brief Field UsesStateFromOtherControl value: I32(64)
static ::GlobalNamespace::InputControl_ControlFlags const UsesStateFromOtherControl;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13424};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputControl_ControlFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputControl_ControlFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
