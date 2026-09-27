#pragma once
// IWYU pragma private; include "UnityEngine/UI/GridLayoutGroup_Corner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GridLayoutGroup_Corner)
// Forward declare root types
namespace GlobalNamespace {
struct GridLayoutGroup_Corner;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GridLayoutGroup_Corner);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GridLayoutGroup_Corner, "UnityEngine.UI", "GridLayoutGroup/Corner");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UI.GridLayoutGroup/Corner
struct CORDL_TYPE GridLayoutGroup_Corner {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GridLayoutGroup_Corner_Unwrapped
enum struct __GridLayoutGroup_Corner_Unwrapped : int32_t {
__E_UpperLeft = static_cast<int32_t>(0x0),
__E_UpperRight = static_cast<int32_t>(0x1),
__E_LowerLeft = static_cast<int32_t>(0x2),
__E_LowerRight = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GridLayoutGroup_Corner_Unwrapped () const noexcept {
return static_cast<__GridLayoutGroup_Corner_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GridLayoutGroup_Corner() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GridLayoutGroup_Corner(int32_t  value__) noexcept;

/// @brief Field LowerLeft value: I32(2)
static ::GlobalNamespace::GridLayoutGroup_Corner const LowerLeft;

/// @brief Field LowerRight value: I32(3)
static ::GlobalNamespace::GridLayoutGroup_Corner const LowerRight;

/// @brief Field UpperLeft value: I32(0)
static ::GlobalNamespace::GridLayoutGroup_Corner const UpperLeft;

/// @brief Field UpperRight value: I32(1)
static ::GlobalNamespace::GridLayoutGroup_Corner const UpperRight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26056};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GridLayoutGroup_Corner, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GridLayoutGroup_Corner) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
