#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Columns_StretchMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Columns_StretchMode)
// Forward declare root types
namespace GlobalNamespace {
struct Columns_StretchMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Columns_StretchMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Columns_StretchMode, "UnityEngine.UIElements", "Columns/StretchMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.Columns/StretchMode
struct CORDL_TYPE Columns_StretchMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Columns_StretchMode_Unwrapped
enum struct __Columns_StretchMode_Unwrapped : int32_t {
__E_Grow = static_cast<int32_t>(0x0),
__E_GrowAndFill = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Columns_StretchMode_Unwrapped () const noexcept {
return static_cast<__Columns_StretchMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Columns_StretchMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Columns_StretchMode(int32_t  value__) noexcept;

/// @brief Field Grow value: I32(0)
static ::GlobalNamespace::Columns_StretchMode const Grow;

/// @brief Field GrowAndFill value: I32(1)
static ::GlobalNamespace::Columns_StretchMode const GrowAndFill;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7421};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Columns_StretchMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Columns_StretchMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
