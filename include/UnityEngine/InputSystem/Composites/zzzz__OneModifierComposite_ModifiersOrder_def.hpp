#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Composites/OneModifierComposite_ModifiersOrder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OneModifierComposite_ModifiersOrder)
// Forward declare root types
namespace GlobalNamespace {
struct OneModifierComposite_ModifiersOrder;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OneModifierComposite_ModifiersOrder);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OneModifierComposite_ModifiersOrder, "UnityEngine.InputSystem.Composites", "OneModifierComposite/ModifiersOrder");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Composites.OneModifierComposite/ModifiersOrder
struct CORDL_TYPE OneModifierComposite_ModifiersOrder {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OneModifierComposite_ModifiersOrder_Unwrapped
enum struct __OneModifierComposite_ModifiersOrder_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Ordered = static_cast<int32_t>(0x1),
__E_Unordered = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OneModifierComposite_ModifiersOrder_Unwrapped () const noexcept {
return static_cast<__OneModifierComposite_ModifiersOrder_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OneModifierComposite_ModifiersOrder() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OneModifierComposite_ModifiersOrder(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::OneModifierComposite_ModifiersOrder const Default;

/// @brief Field Ordered value: I32(1)
static ::GlobalNamespace::OneModifierComposite_ModifiersOrder const Ordered;

/// @brief Field Unordered value: I32(2)
static ::GlobalNamespace::OneModifierComposite_ModifiersOrder const Unordered;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13944};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OneModifierComposite_ModifiersOrder, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OneModifierComposite_ModifiersOrder) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
