#pragma once
// IWYU pragma private; include "System/Numerics/BigInteger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BigInteger)
namespace GlobalNamespace {
struct BigInteger_GetBytesMode;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System {
struct Decimal;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IComparable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Numerics {
struct BigInteger;
}
// Write type traits
MARK_VAL_T(::System::Numerics::BigInteger);
DEFINE_IL2CPP_CLASS(::System::Numerics::BigInteger, "System.Numerics", "BigInteger");
// [IsReadOnly]
// Dependencies 
namespace System::Numerics {
// Is value type: true
// CS Name: System.Numerics.BigInteger
struct CORDL_TYPE BigInteger {
public:
// Declarations
using GetBytesMode = ::GlobalNamespace::BigInteger_GetBytesMode;

 __declspec(property(get=get_IsEven)) bool  IsEven;

 __declspec(property(get=get_IsZero)) bool  IsZero;

 __declspec(property(get=get_Sign)) int32_t  Sign;

/// @brief Field s_bnMinInt, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_bnMinInt, put=setStaticF_s_bnMinInt)) ::System::Numerics::BigInteger  s_bnMinInt;

/// @brief Field s_bnMinusOneInt, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_bnMinusOneInt, put=setStaticF_s_bnMinusOneInt)) ::System::Numerics::BigInteger  s_bnMinusOneInt;

/// @brief Field s_bnOneInt, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_bnOneInt, put=setStaticF_s_bnOneInt)) ::System::Numerics::BigInteger  s_bnOneInt;

/// @brief Field s_bnZeroInt, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_bnZeroInt, put=setStaticF_s_bnZeroInt)) ::System::Numerics::BigInteger  s_bnZeroInt;

/// @brief Field s_success, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_success, put=setStaticF_s_success)) ::ArrayW<uint8_t>  s_success;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::Numerics::BigInteger>"
constexpr operator  ::System::IComparable_1<::System::Numerics::BigInteger>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::System::Numerics::BigInteger>"
constexpr operator  ::System::IEquatable_1<::System::Numerics::BigInteger>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Add, addr 0xa9f7d74, size 0x164, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger Add(::ArrayW<uint32_t>  leftBits, int32_t  leftSign, ::ArrayW<uint32_t>  rightBits, int32_t  rightSign) ;

/// @brief Method CompareTo, addr 0xa9f73ec, size 0x108, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  obj) ;

/// @brief Method CompareTo, addr 0xa9f72c8, size 0x124, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Numerics::BigInteger  other) ;

/// @brief Method CompareTo, addr 0xa9f7238, size 0x90, virtual false, abstract: false, final false
inline int32_t CompareTo(int64_t  other) ;

/// @brief Method Equals, addr 0xa9f6fe4, size 0xac, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa9f7090, size 0xbc, virtual true, abstract: false, final true
inline bool Equals(::System::Numerics::BigInteger  other) ;

/// @brief Method Equals, addr 0xa9f714c, size 0x68, virtual false, abstract: false, final false
inline bool Equals(int64_t  other) ;

/// @brief Method GetDiffLength, addr 0xa9f71c0, size 0x78, virtual false, abstract: false, final false
static inline int32_t GetDiffLength(::ArrayW<uint32_t>  rgu1, ::ArrayW<uint32_t>  rgu2, int32_t  cu) ;

/// @brief Method GetHashCode, addr 0xa9f6f8c, size 0x50, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetPartsForBitManipulation, addr 0xa9f9484, size 0xd0, virtual false, abstract: false, final false
static inline bool GetPartsForBitManipulation(::by_ref<::System::Numerics::BigInteger>  x, ::by_ref<::ArrayW<uint32_t>>  xd, ::by_ref<int32_t>  xl) ;

/// @brief Method ModPow, addr 0xa9f66bc, size 0x378, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger ModPow(::System::Numerics::BigInteger  value, ::System::Numerics::BigInteger  exponent, ::System::Numerics::BigInteger  modulus) ;

/// @brief Method Parse, addr 0xa9f6554, size 0x88, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger Parse(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method Parse, addr 0xa9f65dc, size 0x34, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger Parse(::StringW  value, ::System::Globalization::NumberStyles  style, ::System::IFormatProvider*  provider) ;

/// @brief Method Subtract, addr 0xa9f814c, size 0x19c, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger Subtract(::ArrayW<uint32_t>  leftBits, int32_t  leftSign, ::ArrayW<uint32_t>  rightBits, int32_t  rightSign) ;

/// @brief Method ToByteArray, addr 0xa9f74f4, size 0x5c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ToByteArray() ;

/// @brief Method ToByteArray, addr 0xa9f7550, size 0x8c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ToByteArray(bool  isUnsigned, bool  isBigEndian) ;

/// @brief Method ToString, addr 0xa9f7c2c, size 0x30, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xa9f7d3c, size 0x38, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0xa9f7d08, size 0x34, virtual false, abstract: false, final false
inline ::StringW ToString(::System::IFormatProvider*  provider) ;

/// @brief Method TryGetBytes, addr 0xa9f75dc, size 0x4f8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> TryGetBytes(::GlobalNamespace::BigInteger_GetBytesMode  mode, ::System::Span_1<uint8_t>  destination, bool  isUnsigned, bool  isBigEndian, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryWriteBytes, addr 0xa9f7ad4, size 0xb0, virtual false, abstract: false, final false
inline bool TryWriteBytes(::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, bool  isUnsigned, bool  isBigEndian) ;

/// @brief Method TryWriteOrCountBytes, addr 0xa9f7b84, size 0xa8, virtual false, abstract: false, final false
inline bool TryWriteOrCountBytes(::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, bool  isUnsigned, bool  isBigEndian) ;

/// @brief Method .ctor, addr 0xa9f624c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  n, ::ArrayW<uint32_t>  rgu) ;

/// @brief Method .ctor, addr 0xa9f625c, size 0x1f8, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint32_t>  value, bool  negative) ;

/// [CLSCompliant(false)]
/// @brief Method .ctor, addr 0xa9f5b0c, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0xa9f5910, size 0x1fc, virtual false, abstract: false, final false
inline void _ctor(::System::Decimal  value) ;

/// @brief Method .ctor, addr 0xa9f5bd0, size 0x5c8, virtual false, abstract: false, final false
inline void _ctor(::System::ReadOnlySpan_1<uint8_t>  value, bool  isUnsigned, bool  isBigEndian) ;

/// @brief Method .ctor, addr 0xa9f559c, size 0x2d0, virtual false, abstract: false, final false
inline void _ctor(double_t  value) ;

/// @brief Method .ctor, addr 0xa9f5538, size 0x64, virtual false, abstract: false, final false
inline void _ctor(float_t  value) ;

/// @brief Method .ctor, addr 0xa9f51d8, size 0x84, virtual false, abstract: false, final false
inline void _ctor(int32_t  value) ;

/// @brief Method .ctor, addr 0xa9f5300, size 0x14c, virtual false, abstract: false, final false
inline void _ctor(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method .ctor, addr 0xa9f525c, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method .ctor, addr 0xa9f544c, size 0xec, virtual false, abstract: false, final false
inline void _ctor(uint64_t  value) ;

static inline ::System::Numerics::BigInteger getStaticF_s_bnMinInt() ;

static inline ::System::Numerics::BigInteger getStaticF_s_bnMinusOneInt() ;

static inline ::System::Numerics::BigInteger getStaticF_s_bnOneInt() ;

static inline ::System::Numerics::BigInteger getStaticF_s_bnZeroInt() ;

static inline ::ArrayW<uint8_t> getStaticF_s_success() ;

/// @brief Method get_IsEven, addr 0xa9f6514, size 0x2c, virtual false, abstract: false, final false
inline bool get_IsEven() ;

/// @brief Method get_IsZero, addr 0xa9f6504, size 0x10, virtual false, abstract: false, final false
inline bool get_IsZero() ;

/// @brief Method get_MinusOne, addr 0xa9f64ac, size 0x58, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger get_MinusOne() ;

/// @brief Method get_Sign, addr 0xa9f6540, size 0x14, virtual false, abstract: false, final false
inline int32_t get_Sign() ;

/// @brief Method get_Zero, addr 0xa9f6454, size 0x58, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger get_Zero() ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() ;

/// @brief Convert to "::System::IComparable_1<::System::Numerics::BigInteger>"
constexpr ::System::IComparable_1<::System::Numerics::BigInteger>* i___System__IComparable_1___System__Numerics__BigInteger_() ;

/// @brief Convert to "::System::IEquatable_1<::System::Numerics::BigInteger>"
constexpr ::System::IEquatable_1<::System::Numerics::BigInteger>* i___System__IEquatable_1___System__Numerics__BigInteger_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0xa9f9584, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Addition(::System::Numerics::BigInteger  left, ::System::Numerics::BigInteger  right) ;

/// @brief Method op_Division, addr 0xa9f9a38, size 0x14c, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Division(::System::Numerics::BigInteger  dividend, ::System::Numerics::BigInteger  divisor) ;

/// @brief Method op_Equality, addr 0xa9f9f78, size 0x6c, virtual false, abstract: false, final false
static inline bool op_Equality(::System::Numerics::BigInteger  left, int64_t  right) ;

/// @brief Method op_Explicit, addr 0xa9f8db4, size 0x170, virtual false, abstract: false, final false
static inline ::System::Decimal op_Explicit___System__Decimal(::System::Numerics::BigInteger  value) ;

/// @brief Method op_Explicit, addr 0xa9f8ba8, size 0xec, virtual false, abstract: false, final false
static inline double_t op_Explicit_double_t(::System::Numerics::BigInteger  value) ;

/// @brief Method op_Explicit, addr 0xa9f8b3c, size 0x6c, virtual false, abstract: false, final false
static inline float_t op_Explicit_float_t(::System::Numerics::BigInteger  value) ;

/// @brief Method op_Explicit, addr 0xa9f8810, size 0x90, virtual false, abstract: false, final false
static inline int16_t op_Explicit_int16_t(::System::Numerics::BigInteger  value) ;

/// @brief Method op_Explicit, addr 0xa9f86a4, size 0xdc, virtual false, abstract: false, final false
static inline int32_t op_Explicit_int32_t(::System::Numerics::BigInteger  value) ;

/// @brief Method op_Explicit, addr 0xa9f89d8, size 0xa8, virtual false, abstract: false, final false
static inline int64_t op_Explicit_int64_t(::System::Numerics::BigInteger  value) ;

/// [CLSCompliant(false)]
/// @brief Method op_Explicit, addr 0xa9f8780, size 0x90, virtual false, abstract: false, final false
static inline int8_t op_Explicit_int8_t(::System::Numerics::BigInteger  value) ;

/// [CLSCompliant(false)]
/// @brief Method op_Explicit, addr 0xa9f88a0, size 0x90, virtual false, abstract: false, final false
static inline uint16_t op_Explicit_uint16_t(::System::Numerics::BigInteger  value) ;

/// [CLSCompliant(false)]
/// @brief Method op_Explicit, addr 0xa9f8930, size 0xa8, virtual false, abstract: false, final false
static inline uint32_t op_Explicit_uint32_t(::System::Numerics::BigInteger  value) ;

/// [CLSCompliant(false)]
/// @brief Method op_Explicit, addr 0xa9f8a80, size 0xbc, virtual false, abstract: false, final false
static inline uint64_t op_Explicit_uint64_t(::System::Numerics::BigInteger  value) ;

/// @brief Method op_Explicit, addr 0xa9f8614, size 0x90, virtual false, abstract: false, final false
static inline uint8_t op_Explicit_uint8_t(::System::Numerics::BigInteger  value) ;

/// @brief Method op_GreaterThanOrEqual, addr 0xa9f9d9c, size 0x80, virtual false, abstract: false, final false
static inline bool op_GreaterThanOrEqual(::System::Numerics::BigInteger  left, ::System::Numerics::BigInteger  right) ;

/// @brief Method op_Implicit, addr 0xa9f8570, size 0x28, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(int16_t  value) ;

/// @brief Method op_Implicit, addr 0xa9f85c4, size 0x28, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(int32_t  value) ;

/// @brief Method op_Implicit, addr 0xa9f6c9c, size 0x28, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method op_Implicit, addr 0xa9f8548, size 0x28, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(int8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method op_Implicit, addr 0xa9f8598, size 0x2c, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(uint16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method op_Implicit, addr 0xa9f85ec, size 0x28, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method op_Implicit, addr 0xa9f58e8, size 0x28, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(uint64_t  value) ;

/// @brief Method op_Implicit, addr 0xa9f851c, size 0x2c, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(uint8_t  value) ;

/// @brief Method op_Inequality, addr 0xa9f9e1c, size 0x80, virtual false, abstract: false, final false
static inline bool op_Inequality(::System::Numerics::BigInteger  left, ::System::Numerics::BigInteger  right) ;

/// @brief Method op_Inequality, addr 0xa9f9fe4, size 0x70, virtual false, abstract: false, final false
static inline bool op_Inequality(::System::Numerics::BigInteger  left, int64_t  right) ;

/// @brief Method op_LeftShift, addr 0xa9f8f24, size 0x244, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_LeftShift(::System::Numerics::BigInteger  value, int32_t  shift) ;

/// @brief Method op_LessThan, addr 0xa9f9e9c, size 0x6c, virtual false, abstract: false, final false
static inline bool op_LessThan(::System::Numerics::BigInteger  left, int64_t  right) ;

/// @brief Method op_LessThan, addr 0xa9fa054, size 0x70, virtual false, abstract: false, final false
static inline bool op_LessThan(int64_t  left, ::System::Numerics::BigInteger  right) ;

/// @brief Method op_LessThanOrEqual, addr 0xa9f9d1c, size 0x80, virtual false, abstract: false, final false
static inline bool op_LessThanOrEqual(::System::Numerics::BigInteger  left, ::System::Numerics::BigInteger  right) ;

/// @brief Method op_LessThanOrEqual, addr 0xa9f9f08, size 0x70, virtual false, abstract: false, final false
static inline bool op_LessThanOrEqual(::System::Numerics::BigInteger  left, int64_t  right) ;

/// @brief Method op_LessThanOrEqual, addr 0xa9fa0c4, size 0x70, virtual false, abstract: false, final false
static inline bool op_LessThanOrEqual(int64_t  left, ::System::Numerics::BigInteger  right) ;

/// @brief Method op_Multiply, addr 0xa9f9634, size 0x178, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Multiply(::System::Numerics::BigInteger  left, ::System::Numerics::BigInteger  right) ;

/// @brief Method op_RightShift, addr 0xa9f9168, size 0x31c, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_RightShift(::System::Numerics::BigInteger  value, int32_t  shift) ;

/// @brief Method op_Subtraction, addr 0xa9f809c, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Subtraction(::System::Numerics::BigInteger  left, ::System::Numerics::BigInteger  right) ;

/// @brief Method op_UnaryNegation, addr 0xa9f9554, size 0x30, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_UnaryNegation(::System::Numerics::BigInteger  value) ;

static inline void setStaticF_s_bnMinInt(::System::Numerics::BigInteger  value) ;

static inline void setStaticF_s_bnMinusOneInt(::System::Numerics::BigInteger  value) ;

static inline void setStaticF_s_bnOneInt(::System::Numerics::BigInteger  value) ;

static inline void setStaticF_s_bnZeroInt(::System::Numerics::BigInteger  value) ;

static inline void setStaticF_s_success(::ArrayW<uint8_t>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BigInteger() ;

// Ctor Parameters [CppParam { name: "_sign", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_bits", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None, comment: None }]
constexpr BigInteger(int32_t  _sign, ::ArrayW<uint32_t>  _bits) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31668};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _sign, offset: 0x0, size: 0x4, def value: None
 int32_t  _sign;

/// @brief Field _bits, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint32_t>  _bits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Numerics::BigInteger, _sign) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Numerics::BigInteger, _bits) == 0x8, "Offset mismatch!");

static_assert(sizeof(::System::Numerics::BigInteger) == 0x10, "Size mismatch!");

} // namespace end def System::Numerics
