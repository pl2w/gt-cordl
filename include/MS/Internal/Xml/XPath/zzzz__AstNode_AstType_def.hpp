#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/AstNode_AstType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AstNode_AstType)
// Forward declare root types
namespace GlobalNamespace {
struct AstNode_AstType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AstNode_AstType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AstNode_AstType, "MS.Internal.Xml.XPath", "AstNode/AstType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MS.Internal.Xml.XPath.AstNode/AstType
struct CORDL_TYPE AstNode_AstType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AstNode_AstType_Unwrapped
enum struct __AstNode_AstType_Unwrapped : int32_t {
__E_Axis = static_cast<int32_t>(0x0),
__E_Operator = static_cast<int32_t>(0x1),
__E_Filter = static_cast<int32_t>(0x2),
__E_ConstantOperand = static_cast<int32_t>(0x3),
__E_Function = static_cast<int32_t>(0x4),
__E_Group = static_cast<int32_t>(0x5),
__E_Root = static_cast<int32_t>(0x6),
__E_Variable = static_cast<int32_t>(0x7),
__E_Error = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AstNode_AstType_Unwrapped () const noexcept {
return static_cast<__AstNode_AstType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AstNode_AstType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AstNode_AstType(int32_t  value__) noexcept;

/// @brief Field Axis value: I32(0)
static ::GlobalNamespace::AstNode_AstType const Axis;

/// @brief Field ConstantOperand value: I32(3)
static ::GlobalNamespace::AstNode_AstType const ConstantOperand;

/// @brief Field Error value: I32(8)
static ::GlobalNamespace::AstNode_AstType const Error;

/// @brief Field Filter value: I32(2)
static ::GlobalNamespace::AstNode_AstType const Filter;

/// @brief Field Function value: I32(4)
static ::GlobalNamespace::AstNode_AstType const Function;

/// @brief Field Group value: I32(5)
static ::GlobalNamespace::AstNode_AstType const Group;

/// @brief Field Operator value: I32(1)
static ::GlobalNamespace::AstNode_AstType const Operator;

/// @brief Field Root value: I32(6)
static ::GlobalNamespace::AstNode_AstType const Root;

/// @brief Field Variable value: I32(7)
static ::GlobalNamespace::AstNode_AstType const Variable;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14592};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AstNode_AstType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AstNode_AstType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
