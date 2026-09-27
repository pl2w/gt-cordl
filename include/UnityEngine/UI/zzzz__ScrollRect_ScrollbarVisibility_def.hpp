#pragma once
// IWYU pragma private; include "UnityEngine/UI/ScrollRect_ScrollbarVisibility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScrollRect_ScrollbarVisibility)
// Forward declare root types
namespace GlobalNamespace {
struct ScrollRect_ScrollbarVisibility;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScrollRect_ScrollbarVisibility);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScrollRect_ScrollbarVisibility, "UnityEngine.UI", "ScrollRect/ScrollbarVisibility");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UI.ScrollRect/ScrollbarVisibility
struct CORDL_TYPE ScrollRect_ScrollbarVisibility {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScrollRect_ScrollbarVisibility_Unwrapped
enum struct __ScrollRect_ScrollbarVisibility_Unwrapped : int32_t {
__E_Permanent = static_cast<int32_t>(0x0),
__E_AutoHide = static_cast<int32_t>(0x1),
__E_AutoHideAndExpandViewport = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScrollRect_ScrollbarVisibility_Unwrapped () const noexcept {
return static_cast<__ScrollRect_ScrollbarVisibility_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScrollRect_ScrollbarVisibility() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScrollRect_ScrollbarVisibility(int32_t  value__) noexcept;

/// @brief Field AutoHide value: I32(1)
static ::GlobalNamespace::ScrollRect_ScrollbarVisibility const AutoHide;

/// @brief Field AutoHideAndExpandViewport value: I32(2)
static ::GlobalNamespace::ScrollRect_ScrollbarVisibility const AutoHideAndExpandViewport;

/// @brief Field Permanent value: I32(0)
static ::GlobalNamespace::ScrollRect_ScrollbarVisibility const Permanent;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26092};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScrollRect_ScrollbarVisibility, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScrollRect_ScrollbarVisibility) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
