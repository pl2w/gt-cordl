#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementFocusRing_DefaultFocusOrder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualElementFocusRing_DefaultFocusOrder)
// Forward declare root types
namespace GlobalNamespace {
struct VisualElementFocusRing_DefaultFocusOrder;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualElementFocusRing_DefaultFocusOrder);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualElementFocusRing_DefaultFocusOrder, "UnityEngine.UIElements", "VisualElementFocusRing/DefaultFocusOrder");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualElementFocusRing/DefaultFocusOrder
struct CORDL_TYPE VisualElementFocusRing_DefaultFocusOrder {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VisualElementFocusRing_DefaultFocusOrder_Unwrapped
enum struct __VisualElementFocusRing_DefaultFocusOrder_Unwrapped : int32_t {
__E_ChildOrder = static_cast<int32_t>(0x0),
__E_PositionXY = static_cast<int32_t>(0x1),
__E_PositionYX = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VisualElementFocusRing_DefaultFocusOrder_Unwrapped () const noexcept {
return static_cast<__VisualElementFocusRing_DefaultFocusOrder_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VisualElementFocusRing_DefaultFocusOrder() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VisualElementFocusRing_DefaultFocusOrder(int32_t  value__) noexcept;

/// @brief Field ChildOrder value: I32(0)
static ::GlobalNamespace::VisualElementFocusRing_DefaultFocusOrder const ChildOrder;

/// @brief Field PositionXY value: I32(1)
static ::GlobalNamespace::VisualElementFocusRing_DefaultFocusOrder const PositionXY;

/// @brief Field PositionYX value: I32(2)
static ::GlobalNamespace::VisualElementFocusRing_DefaultFocusOrder const PositionYX;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8469};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualElementFocusRing_DefaultFocusOrder, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualElementFocusRing_DefaultFocusOrder) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
