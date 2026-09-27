#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/ModioUISelectableTransitions_ToggleFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUISelectableTransitions_ToggleFilter)
// Forward declare root types
namespace GlobalNamespace {
struct ModioUISelectableTransitions_ToggleFilter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModioUISelectableTransitions_ToggleFilter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioUISelectableTransitions_ToggleFilter, "Modio.Unity.UI.Components.Selectables", "ModioUISelectableTransitions/ToggleFilter");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Unity.UI.Components.Selectables.ModioUISelectableTransitions/ToggleFilter
struct CORDL_TYPE ModioUISelectableTransitions_ToggleFilter {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModioUISelectableTransitions_ToggleFilter_Unwrapped
enum struct __ModioUISelectableTransitions_ToggleFilter_Unwrapped : int32_t {
__E_Any = static_cast<int32_t>(0x3),
__E_OnlyOn = static_cast<int32_t>(0x1),
__E_OnlyOff = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModioUISelectableTransitions_ToggleFilter_Unwrapped () const noexcept {
return static_cast<__ModioUISelectableTransitions_ToggleFilter_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModioUISelectableTransitions_ToggleFilter() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ModioUISelectableTransitions_ToggleFilter(int32_t  value__) noexcept;

/// @brief Field Any value: I32(3)
static ::GlobalNamespace::ModioUISelectableTransitions_ToggleFilter const Any;

/// @brief Field OnlyOff value: I32(2)
static ::GlobalNamespace::ModioUISelectableTransitions_ToggleFilter const OnlyOff;

/// @brief Field OnlyOn value: I32(1)
static ::GlobalNamespace::ModioUISelectableTransitions_ToggleFilter const OnlyOn;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27185};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioUISelectableTransitions_ToggleFilter, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioUISelectableTransitions_ToggleFilter) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
