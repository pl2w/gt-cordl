#pragma once
// IWYU pragma private; include "XNode/Node_TypeConstraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Node_TypeConstraint)
// Forward declare root types
namespace GlobalNamespace {
struct Node_TypeConstraint;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Node_TypeConstraint);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Node_TypeConstraint, "XNode", "Node/TypeConstraint");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: XNode.Node/TypeConstraint
struct CORDL_TYPE Node_TypeConstraint {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Node_TypeConstraint_Unwrapped
enum struct __Node_TypeConstraint_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Inherited = static_cast<int32_t>(0x1),
__E_Strict = static_cast<int32_t>(0x2),
__E_InheritedInverse = static_cast<int32_t>(0x3),
__E_InheritedAny = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Node_TypeConstraint_Unwrapped () const noexcept {
return static_cast<__Node_TypeConstraint_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Node_TypeConstraint() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Node_TypeConstraint(int32_t  value__) noexcept;

/// @brief Field Inherited value: I32(1)
static ::GlobalNamespace::Node_TypeConstraint const Inherited;

/// @brief Field InheritedAny value: I32(4)
static ::GlobalNamespace::Node_TypeConstraint const InheritedAny;

/// @brief Field InheritedInverse value: I32(3)
static ::GlobalNamespace::Node_TypeConstraint const InheritedInverse;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::Node_TypeConstraint const None;

/// @brief Field Strict value: I32(2)
static ::GlobalNamespace::Node_TypeConstraint const Strict;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32258};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Node_TypeConstraint, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Node_TypeConstraint) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
