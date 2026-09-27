#pragma once
// IWYU pragma private; include "System/Decimal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Decimal)
namespace GlobalNamespace {
struct Decimal_DecCalc;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IComparable;
}
namespace System {
class IConvertible;
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
class ISpanFormattable;
}
namespace System {
struct MidpointRounding;
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
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
struct Decimal;
}
// Write type traits
MARK_VAL_T(::System::Decimal);
DEFINE_IL2CPP_CLASS(::System::Decimal, "System", "Decimal");
// [IsReadOnly]
// Dependencies 
namespace System {
// Is value type: true
// CS Name: System.Decimal
struct CORDL_TYPE Decimal {
public:
// Declarations
using DecCalc = ::GlobalNamespace::Decimal_DecCalc;

 __declspec(property(get=get_High)) uint32_t  High;

 __declspec(property(get=get_IsNegative)) bool  IsNegative;

 __declspec(property(get=get_Low)) uint32_t  Low;

 __declspec(property(get=get_Low64)) uint64_t  Low64;

/// @brief Field MaxValue, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_MaxValue, put=setStaticF_MaxValue)) ::System::Decimal  MaxValue;

 __declspec(property(get=get_Mid)) uint32_t  Mid;

/// @brief Field MinValue, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_MinValue, put=setStaticF_MinValue)) ::System::Decimal  MinValue;

/// @brief Field MinusOne, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_MinusOne, put=setStaticF_MinusOne)) ::System::Decimal  MinusOne;

/// @brief Field One, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_One, put=setStaticF_One)) ::System::Decimal  One;

 __declspec(property(get=get_Scale)) int32_t  Scale;

/// @brief Field Zero, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Zero, put=setStaticF_Zero)) ::System::Decimal  Zero;

/// @brief Field flags, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_flags, put=__cordl_internal_set_flags)) int32_t  flags;

/// @brief Field hi, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_hi, put=__cordl_internal_set_hi)) int32_t  hi;

/// @brief Field lo, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lo, put=__cordl_internal_set_lo)) int32_t  lo;

/// @brief Field mid, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_mid, put=__cordl_internal_set_mid)) int32_t  mid;

/// @brief Field ulomidLE, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ulomidLE, put=__cordl_internal_set_ulomidLE)) uint64_t  ulomidLE;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::Decimal>"
constexpr operator  ::System::IComparable_1<::System::Decimal>*() ;

/// @brief Convert operator to "::System::IConvertible"
constexpr operator  ::System::IConvertible*() ;

/// @brief Convert operator to "::System::IEquatable_1<::System::Decimal>"
constexpr operator  ::System::IEquatable_1<::System::Decimal>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Convert operator to "::System::ISpanFormattable"
constexpr operator  ::System::ISpanFormattable*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() ;

/// @brief Method Abs, addr 0xa33bee0, size 0x14, virtual false, abstract: false, final false
static inline ::System::Decimal Abs(::by_ref<::System::Decimal>  d) ;

/// @brief Method Add, addr 0xa33bef4, size 0xb4, virtual false, abstract: false, final false
static inline ::System::Decimal Add(::System::Decimal  d1, ::System::Decimal  d2) ;

/// @brief Method AsMutable, addr 0xa33b1a0, size 0x4, virtual false, abstract: false, final false
static inline ::by_ref<::GlobalNamespace::Decimal_DecCalc> AsMutable(::by_ref<::System::Decimal>  d) ;

/// @brief Method Compare, addr 0xa33c660, size 0x88, virtual false, abstract: false, final false
static inline int32_t Compare(::System::Decimal  d1, ::System::Decimal  d2) ;

/// @brief Method CompareTo, addr 0xa33c940, size 0x90, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Decimal  value) ;

/// @brief Method CompareTo, addr 0xa33c810, size 0x130, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  value) ;

/// @brief Method DecDivMod1E9, addr 0xa33b1a4, size 0xc8, virtual false, abstract: false, final false
static inline uint32_t DecDivMod1E9(::by_ref<::System::Decimal>  value) ;

/// @brief Method Divide, addr 0xa33c9d0, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Decimal Divide(::System::Decimal  d1, ::System::Decimal  d2) ;

/// @brief Method Equals, addr 0xa33d3ac, size 0x98, virtual true, abstract: false, final true
inline bool Equals(::System::Decimal  value) ;

/// @brief Method Equals, addr 0xa33d2d0, size 0xdc, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  value) ;

/// @brief Method Floor, addr 0xa33d5e4, size 0xd0, virtual false, abstract: false, final false
static inline ::System::Decimal Floor(::System::Decimal  d) ;

/// @brief Method GetBits, addr 0xa33e038, size 0x9c, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t> GetBits(::System::Decimal  d) ;

/// @brief Method GetHashCode, addr 0xa33d444, size 0x54, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetTypeCode, addr 0xa3407fc, size 0x8, virtual true, abstract: false, final true
inline ::System::TypeCode GetTypeCode() ;

/// @brief Method IsValid, addr 0xa33bc38, size 0x1c, virtual false, abstract: false, final false
static inline bool IsValid(int32_t  flags) ;

/// @brief Method Max, addr 0xa33e0d4, size 0x70, virtual false, abstract: false, final false
static inline ::by_ref<::System::Decimal> Max(::by_ref<::System::Decimal>  d1, ::by_ref<::System::Decimal>  d2) ;

/// @brief Method Min, addr 0xa33e144, size 0x70, virtual false, abstract: false, final false
static inline ::by_ref<::System::Decimal> Min(::by_ref<::System::Decimal>  d1, ::by_ref<::System::Decimal>  d2) ;

/// @brief Method Multiply, addr 0xa33e1b4, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Decimal Multiply(::System::Decimal  d1, ::System::Decimal  d2) ;

/// @brief Method Negate, addr 0xa33e768, size 0x8, virtual false, abstract: false, final false
static inline ::System::Decimal Negate(::System::Decimal  d) ;

/// @brief Method Parse, addr 0xa33dcb4, size 0xd4, virtual false, abstract: false, final false
static inline ::System::Decimal Parse(::StringW  s, ::System::IFormatProvider*  provider) ;

/// @brief Method Parse, addr 0xa33dd88, size 0xe4, virtual false, abstract: false, final false
static inline ::System::Decimal Parse(::StringW  s, ::System::Globalization::NumberStyles  style, ::System::IFormatProvider*  provider) ;

/// @brief Method Round, addr 0xa33e770, size 0x94, virtual false, abstract: false, final false
static inline ::System::Decimal Round(::System::Decimal  d, int32_t  decimals) ;

/// @brief Method Round, addr 0xa33e804, size 0x1c0, virtual false, abstract: false, final false
static inline ::System::Decimal Round(::by_ref<::System::Decimal>  d, int32_t  decimals, ::System::MidpointRounding  mode) ;

/// @brief Method System.IConvertible.ToBoolean, addr 0xa340804, size 0x60, virtual true, abstract: false, final true
inline bool System_IConvertible_ToBoolean(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToByte, addr 0xa340948, size 0x60, virtual true, abstract: false, final true
inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToChar, addr 0xa340864, size 0x84, virtual true, abstract: false, final true
inline char16_t System_IConvertible_ToChar(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDateTime, addr 0xa340cb4, size 0x84, virtual true, abstract: false, final true
inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDecimal, addr 0xa340ca8, size 0xc, virtual true, abstract: false, final true
inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDouble, addr 0xa340c48, size 0x60, virtual true, abstract: false, final true
inline double_t System_IConvertible_ToDouble(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt16, addr 0xa3409a8, size 0x60, virtual true, abstract: false, final true
inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt32, addr 0xa340a68, size 0x60, virtual true, abstract: false, final true
inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt64, addr 0xa340b28, size 0x60, virtual true, abstract: false, final true
inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSByte, addr 0xa3408e8, size 0x60, virtual true, abstract: false, final true
inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSingle, addr 0xa340be8, size 0x60, virtual true, abstract: false, final true
inline float_t System_IConvertible_ToSingle(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToType, addr 0xa340d38, size 0xd4, virtual true, abstract: false, final true
inline ::System::Object* System_IConvertible_ToType(::System::Type*  type, ::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt16, addr 0xa340a08, size 0x60, virtual true, abstract: false, final true
inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt32, addr 0xa340ac8, size 0x60, virtual true, abstract: false, final true
inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt64, addr 0xa340b88, size 0x60, virtual true, abstract: false, final true
inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider*  provider) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0xa33be1c, size 0xb4, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

/// @brief Method ToByte, addr 0xa33e9c4, size 0x178, virtual false, abstract: false, final false
static inline uint8_t ToByte(::System::Decimal  value) ;

/// @brief Method ToDouble, addr 0xa33f14c, size 0x80, virtual false, abstract: false, final false
static inline double_t ToDouble(::System::Decimal  d) ;

/// @brief Method ToInt16, addr 0xa33efd4, size 0x178, virtual false, abstract: false, final false
static inline int16_t ToInt16(::System::Decimal  value) ;

/// @brief Method ToInt32, addr 0xa33ee3c, size 0x198, virtual false, abstract: false, final false
static inline int32_t ToInt32(::System::Decimal  d) ;

/// @brief Method ToInt64, addr 0xa33f2cc, size 0x1a8, virtual false, abstract: false, final false
static inline int64_t ToInt64(::System::Decimal  d) ;

/// [CLSCompliant(false)]
/// @brief Method ToSByte, addr 0xa33ecc4, size 0x178, virtual false, abstract: false, final false
static inline int8_t ToSByte(::System::Decimal  value) ;

/// @brief Method ToSingle, addr 0xa33f788, size 0x80, virtual false, abstract: false, final false
static inline float_t ToSingle(::System::Decimal  d) ;

/// @brief Method ToString, addr 0xa33d9a8, size 0xac, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xa33db10, size 0xd8, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0xa33da54, size 0xbc, virtual true, abstract: false, final true
inline ::StringW ToString(::System::IFormatProvider*  provider) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt16, addr 0xa33f474, size 0x178, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::System::Decimal  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt32, addr 0xa33eb3c, size 0x188, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::System::Decimal  d) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt64, addr 0xa33f5ec, size 0x19c, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::System::Decimal  d) ;

/// @brief Method Truncate, addr 0xa33f864, size 0x100, virtual false, abstract: false, final false
static inline ::System::Decimal Truncate(::System::Decimal  d) ;

/// @brief Method Truncate, addr 0xa33f964, size 0x98, virtual false, abstract: false, final false
static inline void Truncate(::by_ref<::System::Decimal>  d) ;

/// @brief Method TryFormat, addr 0xa33dbe8, size 0xcc, virtual true, abstract: false, final true
inline bool TryFormat(::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider) ;

/// @brief Method TryParse, addr 0xa33de6c, size 0xd4, virtual false, abstract: false, final false
static inline bool TryParse(::StringW  s, ::by_ref<::System::Decimal>  result) ;

/// @brief Method TryParse, addr 0xa33df40, size 0xf8, virtual false, abstract: false, final false
static inline bool TryParse(::StringW  s, ::System::Globalization::NumberStyles  style, ::System::IFormatProvider*  provider, ::by_ref<::System::Decimal>  result) ;

constexpr int32_t const& __cordl_internal_get_flags() const;

constexpr int32_t& __cordl_internal_get_flags() ;

constexpr int32_t const& __cordl_internal_get_hi() const;

constexpr int32_t& __cordl_internal_get_hi() ;

constexpr int32_t const& __cordl_internal_get_lo() const;

constexpr int32_t& __cordl_internal_get_lo() ;

constexpr int32_t const& __cordl_internal_get_mid() const;

constexpr int32_t& __cordl_internal_get_mid() ;

constexpr uint64_t const& __cordl_internal_get_ulomidLE() const;

constexpr uint64_t& __cordl_internal_get_ulomidLE() ;

constexpr void __cordl_internal_set_flags(int32_t  value) ;

constexpr void __cordl_internal_set_hi(int32_t  value) ;

constexpr void __cordl_internal_set_lo(int32_t  value) ;

constexpr void __cordl_internal_set_mid(int32_t  value) ;

constexpr void __cordl_internal_set_ulomidLE(uint64_t  value) ;

/// @brief Method .ctor, addr 0xa33bc54, size 0x138, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<int32_t>  bits) ;

/// @brief Method .ctor, addr 0xa33bed0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::System::Decimal>  d, int32_t  flags) ;

/// @brief Method .ctor, addr 0xa33bd8c, size 0x90, virtual false, abstract: false, final false
inline void _ctor(int32_t  lo, int32_t  mid, int32_t  hi, bool  isNegative, uint8_t  scale) ;

/// @brief Method .ctor, addr 0xa33b7a0, size 0x88, virtual false, abstract: false, final false
inline void _ctor(double_t  value) ;

/// @brief Method .ctor, addr 0xa33b314, size 0x88, virtual false, abstract: false, final false
inline void _ctor(float_t  value) ;

/// @brief Method .ctor, addr 0xa33b2c8, size 0x18, virtual false, abstract: false, final false
inline void _ctor(int32_t  value) ;

/// @brief Method .ctor, addr 0xa33b2ec, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method .ctor, addr 0xa33b2e0, size 0xc, virtual false, abstract: false, final false
inline void _ctor(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method .ctor, addr 0xa33b30c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(uint64_t  value) ;

static inline ::System::Decimal getStaticF_MaxValue() ;

static inline ::System::Decimal getStaticF_MinValue() ;

static inline ::System::Decimal getStaticF_MinusOne() ;

static inline ::System::Decimal getStaticF_One() ;

static inline ::System::Decimal getStaticF_Zero() ;

/// @brief Method get_High, addr 0xa33b138, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_High() ;

/// @brief Method get_IsNegative, addr 0xa33b150, size 0xc, virtual false, abstract: false, final false
inline bool get_IsNegative() ;

/// @brief Method get_Low, addr 0xa33b140, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_Low() ;

/// @brief Method get_Low64, addr 0xa33b164, size 0x3c, virtual false, abstract: false, final false
inline uint64_t get_Low64() ;

/// @brief Method get_Mid, addr 0xa33b148, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_Mid() ;

/// @brief Method get_Scale, addr 0xa33b15c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Scale() ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() ;

/// @brief Convert to "::System::IComparable_1<::System::Decimal>"
constexpr ::System::IComparable_1<::System::Decimal>* i___System__IComparable_1___System__Decimal_() ;

/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible* i___System__IConvertible() ;

/// @brief Convert to "::System::IEquatable_1<::System::Decimal>"
constexpr ::System::IEquatable_1<::System::Decimal>* i___System__IEquatable_1___System__Decimal_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Convert to "::System::ISpanFormattable"
constexpr ::System::ISpanFormattable* i___System__ISpanFormattable() ;

/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() ;

/// @brief Method op_Addition, addr 0xa33fd8c, size 0xb4, virtual false, abstract: false, final false
static inline ::System::Decimal op_Addition(::System::Decimal  d1, ::System::Decimal  d2) ;

/// @brief Method op_Division, addr 0xa33ffa4, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Decimal op_Division(::System::Decimal  d1, ::System::Decimal  d2) ;

/// @brief Method op_Equality, addr 0xa3404a0, size 0x90, virtual false, abstract: false, final false
static inline bool op_Equality(::System::Decimal  d1, ::System::Decimal  d2) ;

/// @brief Method op_Explicit, addr 0xa33fadc, size 0x44, virtual false, abstract: false, final false
static inline ::System::Decimal op_Explicit___System__Decimal(double_t  value) ;

/// @brief Method op_Explicit, addr 0xa33fa98, size 0x44, virtual false, abstract: false, final false
static inline ::System::Decimal op_Explicit___System__Decimal(float_t  value) ;

/// @brief Method op_Explicit, addr 0xa33fcb0, size 0x64, virtual false, abstract: false, final false
static inline double_t op_Explicit_double_t(::System::Decimal  value) ;

/// @brief Method op_Explicit, addr 0xa33fc4c, size 0x64, virtual false, abstract: false, final false
static inline float_t op_Explicit_float_t(::System::Decimal  value) ;

/// @brief Method op_Explicit, addr 0xa33fb20, size 0x64, virtual false, abstract: false, final false
static inline int32_t op_Explicit_int32_t(::System::Decimal  value) ;

/// @brief Method op_Explicit, addr 0xa33fb84, size 0x64, virtual false, abstract: false, final false
static inline int64_t op_Explicit_int64_t(::System::Decimal  value) ;

/// [CLSCompliant(false)]
/// @brief Method op_Explicit, addr 0xa33fbe8, size 0x64, virtual false, abstract: false, final false
static inline uint64_t op_Explicit_uint64_t(::System::Decimal  value) ;

/// @brief Method op_GreaterThan, addr 0xa3406dc, size 0x90, virtual false, abstract: false, final false
static inline bool op_GreaterThan(::System::Decimal  d1, ::System::Decimal  d2) ;

/// @brief Method op_GreaterThanOrEqual, addr 0xa34076c, size 0x90, virtual false, abstract: false, final false
static inline bool op_GreaterThanOrEqual(::System::Decimal  d1, ::System::Decimal  d2) ;

/// @brief Method op_Implicit, addr 0xa33fa44, size 0x10, virtual false, abstract: false, final false
static inline ::System::Decimal op_Implicit___System__Decimal(char16_t  value) ;

/// @brief Method op_Implicit, addr 0xa33fa20, size 0x14, virtual false, abstract: false, final false
static inline ::System::Decimal op_Implicit___System__Decimal(int16_t  value) ;

/// @brief Method op_Implicit, addr 0xa33fa54, size 0x14, virtual false, abstract: false, final false
static inline ::System::Decimal op_Implicit___System__Decimal(int32_t  value) ;

/// @brief Method op_Implicit, addr 0xa33fa78, size 0x14, virtual false, abstract: false, final false
static inline ::System::Decimal op_Implicit___System__Decimal(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method op_Implicit, addr 0xa33fa0c, size 0x14, virtual false, abstract: false, final false
static inline ::System::Decimal op_Implicit___System__Decimal(int8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method op_Implicit, addr 0xa33fa34, size 0x10, virtual false, abstract: false, final false
static inline ::System::Decimal op_Implicit___System__Decimal(uint16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method op_Implicit, addr 0xa33fa68, size 0x10, virtual false, abstract: false, final false
static inline ::System::Decimal op_Implicit___System__Decimal(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method op_Implicit, addr 0xa33fa8c, size 0xc, virtual false, abstract: false, final false
static inline ::System::Decimal op_Implicit___System__Decimal(uint64_t  value) ;

/// @brief Method op_Implicit, addr 0xa33f9fc, size 0x10, virtual false, abstract: false, final false
static inline ::System::Decimal op_Implicit___System__Decimal(uint8_t  value) ;

/// @brief Method op_Increment, addr 0xa33fd1c, size 0x70, virtual false, abstract: false, final false
static inline ::System::Decimal op_Increment(::System::Decimal  d) ;

/// @brief Method op_Inequality, addr 0xa340530, size 0x90, virtual false, abstract: false, final false
static inline bool op_Inequality(::System::Decimal  d1, ::System::Decimal  d2) ;

/// @brief Method op_LessThan, addr 0xa3405c0, size 0x8c, virtual false, abstract: false, final false
static inline bool op_LessThan(::System::Decimal  d1, ::System::Decimal  d2) ;

/// @brief Method op_LessThanOrEqual, addr 0xa34064c, size 0x90, virtual false, abstract: false, final false
static inline bool op_LessThanOrEqual(::System::Decimal  d1, ::System::Decimal  d2) ;

/// @brief Method op_Modulus, addr 0xa340054, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Decimal op_Modulus(::System::Decimal  d1, ::System::Decimal  d2) ;

/// @brief Method op_Multiply, addr 0xa33fef4, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Decimal op_Multiply(::System::Decimal  d1, ::System::Decimal  d2) ;

/// @brief Method op_Subtraction, addr 0xa33fe40, size 0xb4, virtual false, abstract: false, final false
static inline ::System::Decimal op_Subtraction(::System::Decimal  d1, ::System::Decimal  d2) ;

/// @brief Method op_UnaryNegation, addr 0xa33fd14, size 0x8, virtual false, abstract: false, final false
static inline ::System::Decimal op_UnaryNegation(::System::Decimal  d) ;

static inline void setStaticF_MaxValue(::System::Decimal  value) ;

static inline void setStaticF_MinValue(::System::Decimal  value) ;

static inline void setStaticF_MinusOne(::System::Decimal  value) ;

static inline void setStaticF_One(::System::Decimal  value) ;

static inline void setStaticF_Zero(::System::Decimal  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Decimal() ;

// Ctor Parameters [CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hi", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lo", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "mid", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ulomidLE", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr Decimal(int32_t  flags, int32_t  hi, int32_t  lo, int32_t  mid, uint64_t  ulomidLE) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___flags_padding[0x0];
/// @brief Field flags, offset: 0x0, size: 0x4, def value: None
 int32_t  ___flags;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___flags_padding_forAlignment[0x0];
/// @brief Field flags, offset: 0x0, size: 0x4, def value: None
 int32_t  ___flags_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___hi_padding[0x4];
/// @brief Field hi, offset: 0x4, size: 0x4, def value: None
 int32_t  ___hi;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___hi_padding_forAlignment[0x4];
/// @brief Field hi, offset: 0x4, size: 0x4, def value: None
 int32_t  ___hi_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___lo_padding[0x8];
/// @brief Field lo, offset: 0x8, size: 0x4, def value: None
 int32_t  ___lo;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___lo_padding_forAlignment[0x8];
/// @brief Field lo, offset: 0x8, size: 0x4, def value: None
 int32_t  ___lo_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___mid_padding[0xc];
/// @brief Field mid, offset: 0xc, size: 0x4, def value: None
 int32_t  ___mid;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___mid_padding_forAlignment[0xc];
/// @brief Field mid, offset: 0xc, size: 0x4, def value: None
 int32_t  ___mid_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___ulomidLE_padding[0x8];
/// @brief Field ulomidLE, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___ulomidLE;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___ulomidLE_padding_forAlignment[0x8];
/// @brief Field ulomidLE, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___ulomidLE_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5782};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::System::Decimal) == 0x10, "Size mismatch!");

} // namespace end def System
