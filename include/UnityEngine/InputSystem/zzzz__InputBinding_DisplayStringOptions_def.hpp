#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputBinding_DisplayStringOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputBinding_DisplayStringOptions)
// Forward declare root types
namespace GlobalNamespace {
struct InputBinding_DisplayStringOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputBinding_DisplayStringOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputBinding_DisplayStringOptions, "UnityEngine.InputSystem", "InputBinding/DisplayStringOptions");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputBinding/DisplayStringOptions
struct CORDL_TYPE InputBinding_DisplayStringOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputBinding_DisplayStringOptions_Unwrapped
enum struct __InputBinding_DisplayStringOptions_Unwrapped : int32_t {
__E_DontUseShortDisplayNames = static_cast<int32_t>(0x1),
__E_DontOmitDevice = static_cast<int32_t>(0x2),
__E_DontIncludeInteractions = static_cast<int32_t>(0x4),
__E_IgnoreBindingOverrides = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputBinding_DisplayStringOptions_Unwrapped () const noexcept {
return static_cast<__InputBinding_DisplayStringOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputBinding_DisplayStringOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputBinding_DisplayStringOptions(int32_t  value__) noexcept;

/// @brief Field DontIncludeInteractions value: I32(4)
static ::GlobalNamespace::InputBinding_DisplayStringOptions const DontIncludeInteractions;

/// @brief Field DontOmitDevice value: I32(2)
static ::GlobalNamespace::InputBinding_DisplayStringOptions const DontOmitDevice;

/// @brief Field DontUseShortDisplayNames value: I32(1)
static ::GlobalNamespace::InputBinding_DisplayStringOptions const DontUseShortDisplayNames;

/// @brief Field IgnoreBindingOverrides value: I32(8)
static ::GlobalNamespace::InputBinding_DisplayStringOptions const IgnoreBindingOverrides;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13393};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputBinding_DisplayStringOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputBinding_DisplayStringOptions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
