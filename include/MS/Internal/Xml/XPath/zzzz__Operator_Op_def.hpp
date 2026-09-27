#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Operator_Op.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Operator_Op)
// Forward declare root types
namespace GlobalNamespace {
struct Operator_Op;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Operator_Op);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Operator_Op, "MS.Internal.Xml.XPath", "Operator/Op");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MS.Internal.Xml.XPath.Operator/Op
struct CORDL_TYPE Operator_Op {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Operator_Op_Unwrapped
enum struct __Operator_Op_Unwrapped : int32_t {
__E_INVALID = static_cast<int32_t>(0x0),
__E_OR = static_cast<int32_t>(0x1),
__E_AND = static_cast<int32_t>(0x2),
__E_EQ = static_cast<int32_t>(0x3),
__E_NE = static_cast<int32_t>(0x4),
__E_LT = static_cast<int32_t>(0x5),
__E_LE = static_cast<int32_t>(0x6),
__E_GT = static_cast<int32_t>(0x7),
__E_GE = static_cast<int32_t>(0x8),
__E_PLUS = static_cast<int32_t>(0x9),
__E_MINUS = static_cast<int32_t>(0xa),
__E_MUL = static_cast<int32_t>(0xb),
__E_DIV = static_cast<int32_t>(0xc),
__E_MOD = static_cast<int32_t>(0xd),
__E_UNION = static_cast<int32_t>(0xe),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Operator_Op_Unwrapped () const noexcept {
return static_cast<__Operator_Op_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Operator_Op() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Operator_Op(int32_t  value__) noexcept;

/// @brief Field AND value: I32(2)
static ::GlobalNamespace::Operator_Op const AND;

/// @brief Field DIV value: I32(12)
static ::GlobalNamespace::Operator_Op const DIV;

/// @brief Field EQ value: I32(3)
static ::GlobalNamespace::Operator_Op const EQ;

/// @brief Field GE value: I32(8)
static ::GlobalNamespace::Operator_Op const GE;

/// @brief Field GT value: I32(7)
static ::GlobalNamespace::Operator_Op const GT;

/// @brief Field INVALID value: I32(0)
static ::GlobalNamespace::Operator_Op const INVALID;

/// @brief Field LE value: I32(6)
static ::GlobalNamespace::Operator_Op const LE;

/// @brief Field LT value: I32(5)
static ::GlobalNamespace::Operator_Op const LT;

/// @brief Field MINUS value: I32(10)
static ::GlobalNamespace::Operator_Op const MINUS;

/// @brief Field MOD value: I32(13)
static ::GlobalNamespace::Operator_Op const MOD;

/// @brief Field MUL value: I32(11)
static ::GlobalNamespace::Operator_Op const MUL;

/// @brief Field NE value: I32(4)
static ::GlobalNamespace::Operator_Op const NE;

/// @brief Field OR value: I32(1)
static ::GlobalNamespace::Operator_Op const OR;

/// @brief Field PLUS value: I32(9)
static ::GlobalNamespace::Operator_Op const PLUS;

/// @brief Field UNION value: I32(14)
static ::GlobalNamespace::Operator_Op const UNION;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14601};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Operator_Op, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Operator_Op) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
