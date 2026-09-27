#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlPath_HumanReadableStringOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlPath_HumanReadableStringOptions)
// Forward declare root types
namespace GlobalNamespace {
struct InputControlPath_HumanReadableStringOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputControlPath_HumanReadableStringOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputControlPath_HumanReadableStringOptions, "UnityEngine.InputSystem", "InputControlPath/HumanReadableStringOptions");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlPath/HumanReadableStringOptions
struct CORDL_TYPE InputControlPath_HumanReadableStringOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputControlPath_HumanReadableStringOptions_Unwrapped
enum struct __InputControlPath_HumanReadableStringOptions_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_OmitDevice = static_cast<int32_t>(0x2),
__E_UseShortNames = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputControlPath_HumanReadableStringOptions_Unwrapped () const noexcept {
return static_cast<__InputControlPath_HumanReadableStringOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputControlPath_HumanReadableStringOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputControlPath_HumanReadableStringOptions(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::InputControlPath_HumanReadableStringOptions const None;

/// @brief Field OmitDevice value: I32(2)
static ::GlobalNamespace::InputControlPath_HumanReadableStringOptions const OmitDevice;

/// @brief Field UseShortNames value: I32(4)
static ::GlobalNamespace::InputControlPath_HumanReadableStringOptions const UseShortNames;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13437};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputControlPath_HumanReadableStringOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputControlPath_HumanReadableStringOptions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
