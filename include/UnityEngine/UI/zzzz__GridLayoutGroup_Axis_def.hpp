#pragma once
// IWYU pragma private; include "UnityEngine/UI/GridLayoutGroup_Axis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GridLayoutGroup_Axis)
// Forward declare root types
namespace GlobalNamespace {
struct GridLayoutGroup_Axis;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GridLayoutGroup_Axis);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GridLayoutGroup_Axis, "UnityEngine.UI", "GridLayoutGroup/Axis");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UI.GridLayoutGroup/Axis
struct CORDL_TYPE GridLayoutGroup_Axis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GridLayoutGroup_Axis_Unwrapped
enum struct __GridLayoutGroup_Axis_Unwrapped : int32_t {
__E_Horizontal = static_cast<int32_t>(0x0),
__E_Vertical = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GridLayoutGroup_Axis_Unwrapped () const noexcept {
return static_cast<__GridLayoutGroup_Axis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GridLayoutGroup_Axis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GridLayoutGroup_Axis(int32_t  value__) noexcept;

/// @brief Field Horizontal value: I32(0)
static ::GlobalNamespace::GridLayoutGroup_Axis const Horizontal;

/// @brief Field Vertical value: I32(1)
static ::GlobalNamespace::GridLayoutGroup_Axis const Vertical;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26057};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GridLayoutGroup_Axis, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GridLayoutGroup_Axis) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
