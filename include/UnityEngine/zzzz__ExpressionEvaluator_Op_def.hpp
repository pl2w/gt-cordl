#pragma once
// IWYU pragma private; include "UnityEngine/ExpressionEvaluator_Op.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExpressionEvaluator_Op)
// Forward declare root types
namespace GlobalNamespace {
struct ExpressionEvaluator_Op;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ExpressionEvaluator_Op);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ExpressionEvaluator_Op, "UnityEngine", "ExpressionEvaluator/Op");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ExpressionEvaluator/Op
struct CORDL_TYPE ExpressionEvaluator_Op {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ExpressionEvaluator_Op_Unwrapped
enum struct __ExpressionEvaluator_Op_Unwrapped : int32_t {
__E_Add = static_cast<int32_t>(0x0),
__E_Sub = static_cast<int32_t>(0x1),
__E_Mul = static_cast<int32_t>(0x2),
__E_Div = static_cast<int32_t>(0x3),
__E_Mod = static_cast<int32_t>(0x4),
__E_Neg = static_cast<int32_t>(0x5),
__E_Pow = static_cast<int32_t>(0x6),
__E_Sqrt = static_cast<int32_t>(0x7),
__E_Sin = static_cast<int32_t>(0x8),
__E_Cos = static_cast<int32_t>(0x9),
__E_Tan = static_cast<int32_t>(0xa),
__E_Floor = static_cast<int32_t>(0xb),
__E_Ceil = static_cast<int32_t>(0xc),
__E_Round = static_cast<int32_t>(0xd),
__E_Rand = static_cast<int32_t>(0xe),
__E_Linear = static_cast<int32_t>(0xf),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExpressionEvaluator_Op_Unwrapped () const noexcept {
return static_cast<__ExpressionEvaluator_Op_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ExpressionEvaluator_Op() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ExpressionEvaluator_Op(int32_t  value__) noexcept;

/// @brief Field Add value: I32(0)
static ::GlobalNamespace::ExpressionEvaluator_Op const Add;

/// @brief Field Ceil value: I32(12)
static ::GlobalNamespace::ExpressionEvaluator_Op const Ceil;

/// @brief Field Cos value: I32(9)
static ::GlobalNamespace::ExpressionEvaluator_Op const Cos;

/// @brief Field Div value: I32(3)
static ::GlobalNamespace::ExpressionEvaluator_Op const Div;

/// @brief Field Floor value: I32(11)
static ::GlobalNamespace::ExpressionEvaluator_Op const Floor;

/// @brief Field Linear value: I32(15)
static ::GlobalNamespace::ExpressionEvaluator_Op const Linear;

/// @brief Field Mod value: I32(4)
static ::GlobalNamespace::ExpressionEvaluator_Op const Mod;

/// @brief Field Mul value: I32(2)
static ::GlobalNamespace::ExpressionEvaluator_Op const Mul;

/// @brief Field Neg value: I32(5)
static ::GlobalNamespace::ExpressionEvaluator_Op const Neg;

/// @brief Field Pow value: I32(6)
static ::GlobalNamespace::ExpressionEvaluator_Op const Pow;

/// @brief Field Rand value: I32(14)
static ::GlobalNamespace::ExpressionEvaluator_Op const Rand;

/// @brief Field Round value: I32(13)
static ::GlobalNamespace::ExpressionEvaluator_Op const Round;

/// @brief Field Sin value: I32(8)
static ::GlobalNamespace::ExpressionEvaluator_Op const Sin;

/// @brief Field Sqrt value: I32(7)
static ::GlobalNamespace::ExpressionEvaluator_Op const Sqrt;

/// @brief Field Sub value: I32(1)
static ::GlobalNamespace::ExpressionEvaluator_Op const Sub;

/// @brief Field Tan value: I32(10)
static ::GlobalNamespace::ExpressionEvaluator_Op const Tan;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14830};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ExpressionEvaluator_Op, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ExpressionEvaluator_Op) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
