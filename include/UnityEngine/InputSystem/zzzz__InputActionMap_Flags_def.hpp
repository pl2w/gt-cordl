#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap_Flags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionMap_Flags)
// Forward declare root types
namespace GlobalNamespace {
struct InputActionMap_Flags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionMap_Flags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionMap_Flags, "UnityEngine.InputSystem", "InputActionMap/Flags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/Flags
struct CORDL_TYPE InputActionMap_Flags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputActionMap_Flags_Unwrapped
enum struct __InputActionMap_Flags_Unwrapped : int32_t {
__E_NeedToResolveBindings = static_cast<int32_t>(0x1),
__E_BindingResolutionNeedsFullReResolve = static_cast<int32_t>(0x2),
__E_ControlsForEachActionInitialized = static_cast<int32_t>(0x4),
__E_BindingsForEachActionInitialized = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputActionMap_Flags_Unwrapped () const noexcept {
return static_cast<__InputActionMap_Flags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputActionMap_Flags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputActionMap_Flags(int32_t  value__) noexcept;

/// @brief Field BindingResolutionNeedsFullReResolve value: I32(2)
static ::GlobalNamespace::InputActionMap_Flags const BindingResolutionNeedsFullReResolve;

/// @brief Field BindingsForEachActionInitialized value: I32(8)
static ::GlobalNamespace::InputActionMap_Flags const BindingsForEachActionInitialized;

/// @brief Field ControlsForEachActionInitialized value: I32(4)
static ::GlobalNamespace::InputActionMap_Flags const ControlsForEachActionInitialized;

/// @brief Field NeedToResolveBindings value: I32(1)
static ::GlobalNamespace::InputActionMap_Flags const NeedToResolveBindings;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13351};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionMap_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionMap_Flags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
