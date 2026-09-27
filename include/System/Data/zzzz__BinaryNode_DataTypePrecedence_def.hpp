#pragma once
// IWYU pragma private; include "System/Data/BinaryNode_DataTypePrecedence.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryNode_DataTypePrecedence)
// Forward declare root types
namespace GlobalNamespace {
struct BinaryNode_DataTypePrecedence;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BinaryNode_DataTypePrecedence);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BinaryNode_DataTypePrecedence, "System.Data", "BinaryNode/DataTypePrecedence");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Data.BinaryNode/DataTypePrecedence
struct CORDL_TYPE BinaryNode_DataTypePrecedence {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BinaryNode_DataTypePrecedence_Unwrapped
enum struct __BinaryNode_DataTypePrecedence_Unwrapped : int32_t {
__E_SqlDateTime = static_cast<int32_t>(0x19),
__E_DateTimeOffset = static_cast<int32_t>(0x18),
__E_DateTime = static_cast<int32_t>(0x17),
__E_TimeSpan = static_cast<int32_t>(0x14),
__E_SqlDouble = static_cast<int32_t>(0x13),
__E_Double = static_cast<int32_t>(0x12),
__E_SqlSingle = static_cast<int32_t>(0x11),
__E_Single = static_cast<int32_t>(0x10),
__E_SqlDecimal = static_cast<int32_t>(0xf),
__E_Decimal = static_cast<int32_t>(0xe),
__E_SqlMoney = static_cast<int32_t>(0xd),
__E_UInt64 = static_cast<int32_t>(0xc),
__E_SqlInt64 = static_cast<int32_t>(0xb),
__E_Int64 = static_cast<int32_t>(0xa),
__E_UInt32 = static_cast<int32_t>(0x9),
__E_SqlInt32 = static_cast<int32_t>(0x8),
__E_Int32 = static_cast<int32_t>(0x7),
__E_UInt16 = static_cast<int32_t>(0x6),
__E_SqlInt16 = static_cast<int32_t>(0x5),
__E_Int16 = static_cast<int32_t>(0x4),
__E_Byte = static_cast<int32_t>(0x3),
__E_SqlByte = static_cast<int32_t>(0x2),
__E_SByte = static_cast<int32_t>(0x1),
__E_Error = static_cast<int32_t>(0x0),
__E_SqlBoolean = static_cast<int32_t>(0xffffffff),
__E_Boolean = static_cast<int32_t>(0xfffffffe),
__E_SqlGuid = static_cast<int32_t>(0xfffffffd),
__E_SqlString = static_cast<int32_t>(0xfffffffc),
__E_String = static_cast<int32_t>(0xfffffffb),
__E_SqlXml = static_cast<int32_t>(0xfffffffa),
__E_SqlChars = static_cast<int32_t>(0xfffffff9),
__E_Char = static_cast<int32_t>(0xfffffff8),
__E_SqlBytes = static_cast<int32_t>(0xfffffff7),
__E_SqlBinary = static_cast<int32_t>(0xfffffff6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BinaryNode_DataTypePrecedence_Unwrapped () const noexcept {
return static_cast<__BinaryNode_DataTypePrecedence_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BinaryNode_DataTypePrecedence() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BinaryNode_DataTypePrecedence(int32_t  value__) noexcept;

/// @brief Field Boolean value: I32(-2)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const Boolean;

/// @brief Field Byte value: I32(3)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const Byte;

/// @brief Field Char value: I32(-8)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const Char;

/// @brief Field DateTime value: I32(23)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const DateTime;

/// @brief Field DateTimeOffset value: I32(24)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const DateTimeOffset;

/// @brief Field Decimal value: I32(14)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const Decimal;

/// @brief Field Double value: I32(18)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const Double;

/// @brief Field Error value: I32(0)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const Error;

/// @brief Field Int16 value: I32(4)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const Int16;

/// @brief Field Int32 value: I32(7)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const Int32;

/// @brief Field Int64 value: I32(10)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const Int64;

/// @brief Field SByte value: I32(1)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const SByte;

/// @brief Field Single value: I32(16)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const Single;

/// @brief Field SqlBinary value: I32(-10)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const SqlBinary;

/// @brief Field SqlBoolean value: I32(-1)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const SqlBoolean;

/// @brief Field SqlByte value: I32(2)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const SqlByte;

/// @brief Field SqlBytes value: I32(-9)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const SqlBytes;

/// @brief Field SqlChars value: I32(-7)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const SqlChars;

/// @brief Field SqlDateTime value: I32(25)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const SqlDateTime;

/// @brief Field SqlDecimal value: I32(15)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const SqlDecimal;

/// @brief Field SqlDouble value: I32(19)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const SqlDouble;

/// @brief Field SqlGuid value: I32(-3)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const SqlGuid;

/// @brief Field SqlInt16 value: I32(5)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const SqlInt16;

/// @brief Field SqlInt32 value: I32(8)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const SqlInt32;

/// @brief Field SqlInt64 value: I32(11)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const SqlInt64;

/// @brief Field SqlMoney value: I32(13)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const SqlMoney;

/// @brief Field SqlSingle value: I32(17)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const SqlSingle;

/// @brief Field SqlString value: I32(-4)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const SqlString;

/// @brief Field SqlXml value: I32(-6)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const SqlXml;

/// @brief Field String value: I32(-5)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const String;

/// @brief Field TimeSpan value: I32(20)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const TimeSpan;

/// @brief Field UInt16 value: I32(6)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const UInt16;

/// @brief Field UInt32 value: I32(9)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const UInt32;

/// @brief Field UInt64 value: I32(12)
static ::GlobalNamespace::BinaryNode_DataTypePrecedence const UInt64;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21009};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BinaryNode_DataTypePrecedence, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BinaryNode_DataTypePrecedence) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
