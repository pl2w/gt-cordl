#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/BodyUI/HandMenu_MenuHandedness.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandMenu_MenuHandedness)
// Forward declare root types
namespace GlobalNamespace {
struct HandMenu_MenuHandedness;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandMenu_MenuHandedness);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandMenu_MenuHandedness, "UnityEngine.XR.Interaction.Toolkit.UI.BodyUI", "HandMenu/MenuHandedness");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.BodyUI.HandMenu/MenuHandedness
struct CORDL_TYPE HandMenu_MenuHandedness {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HandMenu_MenuHandedness_Unwrapped
enum struct __HandMenu_MenuHandedness_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Left = static_cast<int32_t>(0x1),
__E_Right = static_cast<int32_t>(0x2),
__E_Either = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HandMenu_MenuHandedness_Unwrapped () const noexcept {
return static_cast<__HandMenu_MenuHandedness_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HandMenu_MenuHandedness() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HandMenu_MenuHandedness(int32_t  value__) noexcept;

/// @brief Field Either value: I32(3)
static ::GlobalNamespace::HandMenu_MenuHandedness const Either;

/// @brief Field Left value: I32(1)
static ::GlobalNamespace::HandMenu_MenuHandedness const Left;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::HandMenu_MenuHandedness const None;

/// @brief Field Right value: I32(2)
static ::GlobalNamespace::HandMenu_MenuHandedness const Right;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11325};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandMenu_MenuHandedness, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandMenu_MenuHandedness) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
