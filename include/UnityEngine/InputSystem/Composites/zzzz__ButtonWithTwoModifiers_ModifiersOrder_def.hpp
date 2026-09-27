#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Composites/ButtonWithTwoModifiers_ModifiersOrder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ButtonWithTwoModifiers_ModifiersOrder)
// Forward declare root types
namespace GlobalNamespace {
struct ButtonWithTwoModifiers_ModifiersOrder;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ButtonWithTwoModifiers_ModifiersOrder);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ButtonWithTwoModifiers_ModifiersOrder, "UnityEngine.InputSystem.Composites", "ButtonWithTwoModifiers/ModifiersOrder");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers/ModifiersOrder
struct CORDL_TYPE ButtonWithTwoModifiers_ModifiersOrder {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ButtonWithTwoModifiers_ModifiersOrder_Unwrapped
enum struct __ButtonWithTwoModifiers_ModifiersOrder_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Ordered = static_cast<int32_t>(0x1),
__E_Unordered = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ButtonWithTwoModifiers_ModifiersOrder_Unwrapped () const noexcept {
return static_cast<__ButtonWithTwoModifiers_ModifiersOrder_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ButtonWithTwoModifiers_ModifiersOrder() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ButtonWithTwoModifiers_ModifiersOrder(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::ButtonWithTwoModifiers_ModifiersOrder const Default;

/// @brief Field Ordered value: I32(1)
static ::GlobalNamespace::ButtonWithTwoModifiers_ModifiersOrder const Ordered;

/// @brief Field Unordered value: I32(2)
static ::GlobalNamespace::ButtonWithTwoModifiers_ModifiersOrder const Unordered;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13942};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ButtonWithTwoModifiers_ModifiersOrder, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ButtonWithTwoModifiers_ModifiersOrder) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
