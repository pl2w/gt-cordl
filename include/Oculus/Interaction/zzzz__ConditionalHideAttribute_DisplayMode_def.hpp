#pragma once
// IWYU pragma private; include "Oculus/Interaction/ConditionalHideAttribute_DisplayMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConditionalHideAttribute_DisplayMode)
// Forward declare root types
namespace GlobalNamespace {
struct ConditionalHideAttribute_DisplayMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ConditionalHideAttribute_DisplayMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConditionalHideAttribute_DisplayMode, "Oculus.Interaction", "ConditionalHideAttribute/DisplayMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.ConditionalHideAttribute/DisplayMode
struct CORDL_TYPE ConditionalHideAttribute_DisplayMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConditionalHideAttribute_DisplayMode_Unwrapped
enum struct __ConditionalHideAttribute_DisplayMode_Unwrapped : int32_t {
__E_Always = static_cast<int32_t>(0x0),
__E_Never = static_cast<int32_t>(0x1),
__E_ShowIfTrue = static_cast<int32_t>(0x2),
__E_HideIfTrue = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConditionalHideAttribute_DisplayMode_Unwrapped () const noexcept {
return static_cast<__ConditionalHideAttribute_DisplayMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConditionalHideAttribute_DisplayMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ConditionalHideAttribute_DisplayMode(int32_t  value__) noexcept;

/// @brief Field Always value: I32(0)
static ::GlobalNamespace::ConditionalHideAttribute_DisplayMode const Always;

/// @brief Field HideIfTrue value: I32(3)
static ::GlobalNamespace::ConditionalHideAttribute_DisplayMode const HideIfTrue;

/// @brief Field Never value: I32(1)
static ::GlobalNamespace::ConditionalHideAttribute_DisplayMode const Never;

/// @brief Field ShowIfTrue value: I32(2)
static ::GlobalNamespace::ConditionalHideAttribute_DisplayMode const ShowIfTrue;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15683};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConditionalHideAttribute_DisplayMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConditionalHideAttribute_DisplayMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
