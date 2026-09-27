#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Function_FunctionType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Function_FunctionType)
// Forward declare root types
namespace GlobalNamespace {
struct Function_FunctionType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Function_FunctionType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Function_FunctionType, "MS.Internal.Xml.XPath", "Function/FunctionType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MS.Internal.Xml.XPath.Function/FunctionType
struct CORDL_TYPE Function_FunctionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Function_FunctionType_Unwrapped
enum struct __Function_FunctionType_Unwrapped : int32_t {
__E_FuncLast = static_cast<int32_t>(0x0),
__E_FuncPosition = static_cast<int32_t>(0x1),
__E_FuncCount = static_cast<int32_t>(0x2),
__E_FuncID = static_cast<int32_t>(0x3),
__E_FuncLocalName = static_cast<int32_t>(0x4),
__E_FuncNameSpaceUri = static_cast<int32_t>(0x5),
__E_FuncName = static_cast<int32_t>(0x6),
__E_FuncString = static_cast<int32_t>(0x7),
__E_FuncBoolean = static_cast<int32_t>(0x8),
__E_FuncNumber = static_cast<int32_t>(0x9),
__E_FuncTrue = static_cast<int32_t>(0xa),
__E_FuncFalse = static_cast<int32_t>(0xb),
__E_FuncNot = static_cast<int32_t>(0xc),
__E_FuncConcat = static_cast<int32_t>(0xd),
__E_FuncStartsWith = static_cast<int32_t>(0xe),
__E_FuncContains = static_cast<int32_t>(0xf),
__E_FuncSubstringBefore = static_cast<int32_t>(0x10),
__E_FuncSubstringAfter = static_cast<int32_t>(0x11),
__E_FuncSubstring = static_cast<int32_t>(0x12),
__E_FuncStringLength = static_cast<int32_t>(0x13),
__E_FuncNormalize = static_cast<int32_t>(0x14),
__E_FuncTranslate = static_cast<int32_t>(0x15),
__E_FuncLang = static_cast<int32_t>(0x16),
__E_FuncSum = static_cast<int32_t>(0x17),
__E_FuncFloor = static_cast<int32_t>(0x18),
__E_FuncCeiling = static_cast<int32_t>(0x19),
__E_FuncRound = static_cast<int32_t>(0x1a),
__E_FuncUserDefined = static_cast<int32_t>(0x1b),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Function_FunctionType_Unwrapped () const noexcept {
return static_cast<__Function_FunctionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Function_FunctionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Function_FunctionType(int32_t  value__) noexcept;

/// @brief Field FuncBoolean value: I32(8)
static ::GlobalNamespace::Function_FunctionType const FuncBoolean;

/// @brief Field FuncCeiling value: I32(25)
static ::GlobalNamespace::Function_FunctionType const FuncCeiling;

/// @brief Field FuncConcat value: I32(13)
static ::GlobalNamespace::Function_FunctionType const FuncConcat;

/// @brief Field FuncContains value: I32(15)
static ::GlobalNamespace::Function_FunctionType const FuncContains;

/// @brief Field FuncCount value: I32(2)
static ::GlobalNamespace::Function_FunctionType const FuncCount;

/// @brief Field FuncFalse value: I32(11)
static ::GlobalNamespace::Function_FunctionType const FuncFalse;

/// @brief Field FuncFloor value: I32(24)
static ::GlobalNamespace::Function_FunctionType const FuncFloor;

/// @brief Field FuncID value: I32(3)
static ::GlobalNamespace::Function_FunctionType const FuncID;

/// @brief Field FuncLang value: I32(22)
static ::GlobalNamespace::Function_FunctionType const FuncLang;

/// @brief Field FuncLast value: I32(0)
static ::GlobalNamespace::Function_FunctionType const FuncLast;

/// @brief Field FuncLocalName value: I32(4)
static ::GlobalNamespace::Function_FunctionType const FuncLocalName;

/// @brief Field FuncName value: I32(6)
static ::GlobalNamespace::Function_FunctionType const FuncName;

/// @brief Field FuncNameSpaceUri value: I32(5)
static ::GlobalNamespace::Function_FunctionType const FuncNameSpaceUri;

/// @brief Field FuncNormalize value: I32(20)
static ::GlobalNamespace::Function_FunctionType const FuncNormalize;

/// @brief Field FuncNot value: I32(12)
static ::GlobalNamespace::Function_FunctionType const FuncNot;

/// @brief Field FuncNumber value: I32(9)
static ::GlobalNamespace::Function_FunctionType const FuncNumber;

/// @brief Field FuncPosition value: I32(1)
static ::GlobalNamespace::Function_FunctionType const FuncPosition;

/// @brief Field FuncRound value: I32(26)
static ::GlobalNamespace::Function_FunctionType const FuncRound;

/// @brief Field FuncStartsWith value: I32(14)
static ::GlobalNamespace::Function_FunctionType const FuncStartsWith;

/// @brief Field FuncString value: I32(7)
static ::GlobalNamespace::Function_FunctionType const FuncString;

/// @brief Field FuncStringLength value: I32(19)
static ::GlobalNamespace::Function_FunctionType const FuncStringLength;

/// @brief Field FuncSubstring value: I32(18)
static ::GlobalNamespace::Function_FunctionType const FuncSubstring;

/// @brief Field FuncSubstringAfter value: I32(17)
static ::GlobalNamespace::Function_FunctionType const FuncSubstringAfter;

/// @brief Field FuncSubstringBefore value: I32(16)
static ::GlobalNamespace::Function_FunctionType const FuncSubstringBefore;

/// @brief Field FuncSum value: I32(23)
static ::GlobalNamespace::Function_FunctionType const FuncSum;

/// @brief Field FuncTranslate value: I32(21)
static ::GlobalNamespace::Function_FunctionType const FuncTranslate;

/// @brief Field FuncTrue value: I32(10)
static ::GlobalNamespace::Function_FunctionType const FuncTrue;

/// @brief Field FuncUserDefined value: I32(27)
static ::GlobalNamespace::Function_FunctionType const FuncUserDefined;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14597};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Function_FunctionType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Function_FunctionType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
