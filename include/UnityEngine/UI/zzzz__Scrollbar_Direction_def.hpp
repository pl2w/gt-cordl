#pragma once
// IWYU pragma private; include "UnityEngine/UI/Scrollbar_Direction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Scrollbar_Direction)
// Forward declare root types
namespace GlobalNamespace {
struct Scrollbar_Direction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Scrollbar_Direction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Scrollbar_Direction, "UnityEngine.UI", "Scrollbar/Direction");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UI.Scrollbar/Direction
struct CORDL_TYPE Scrollbar_Direction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Scrollbar_Direction_Unwrapped
enum struct __Scrollbar_Direction_Unwrapped : int32_t {
__E_LeftToRight = static_cast<int32_t>(0x0),
__E_RightToLeft = static_cast<int32_t>(0x1),
__E_BottomToTop = static_cast<int32_t>(0x2),
__E_TopToBottom = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Scrollbar_Direction_Unwrapped () const noexcept {
return static_cast<__Scrollbar_Direction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Scrollbar_Direction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Scrollbar_Direction(int32_t  value__) noexcept;

/// @brief Field BottomToTop value: I32(2)
static ::GlobalNamespace::Scrollbar_Direction const BottomToTop;

/// @brief Field LeftToRight value: I32(0)
static ::GlobalNamespace::Scrollbar_Direction const LeftToRight;

/// @brief Field RightToLeft value: I32(1)
static ::GlobalNamespace::Scrollbar_Direction const RightToLeft;

/// @brief Field TopToBottom value: I32(3)
static ::GlobalNamespace::Scrollbar_Direction const TopToBottom;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26086};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Scrollbar_Direction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Scrollbar_Direction) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
