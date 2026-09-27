#pragma once
// IWYU pragma private; include "UnityEngine/TouchScreenKeyboard_InputFieldAppearance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchScreenKeyboard_InputFieldAppearance)
// Forward declare root types
namespace GlobalNamespace {
struct TouchScreenKeyboard_InputFieldAppearance;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TouchScreenKeyboard_InputFieldAppearance);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TouchScreenKeyboard_InputFieldAppearance, "UnityEngine", "TouchScreenKeyboard/InputFieldAppearance");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.TouchScreenKeyboard/InputFieldAppearance
struct CORDL_TYPE TouchScreenKeyboard_InputFieldAppearance {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TouchScreenKeyboard_InputFieldAppearance_Unwrapped
enum struct __TouchScreenKeyboard_InputFieldAppearance_Unwrapped : int32_t {
__E_Customizable = static_cast<int32_t>(0x0),
__E_AlwaysVisible = static_cast<int32_t>(0x1),
__E_AlwaysHidden = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchScreenKeyboard_InputFieldAppearance_Unwrapped () const noexcept {
return static_cast<__TouchScreenKeyboard_InputFieldAppearance_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TouchScreenKeyboard_InputFieldAppearance() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TouchScreenKeyboard_InputFieldAppearance(int32_t  value__) noexcept;

/// @brief Field AlwaysHidden value: I32(2)
static ::GlobalNamespace::TouchScreenKeyboard_InputFieldAppearance const AlwaysHidden;

/// @brief Field AlwaysVisible value: I32(1)
static ::GlobalNamespace::TouchScreenKeyboard_InputFieldAppearance const AlwaysVisible;

/// @brief Field Customizable value: I32(0)
static ::GlobalNamespace::TouchScreenKeyboard_InputFieldAppearance const Customizable;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15146};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TouchScreenKeyboard_InputFieldAppearance, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TouchScreenKeyboard_InputFieldAppearance) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
