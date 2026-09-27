#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JTokenType_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__DynamicProxy_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JValue)
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JValue_JValueDynamicProxy;
}
namespace Newtonsoft::Json::Linq {
class JsonCloneSettings;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Dynamic {
class BinaryOperationBinder;
}
namespace System::Dynamic {
class ConvertBinder;
}
namespace System::Dynamic {
class DynamicMetaObject;
}
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Numerics {
struct BigInteger;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
struct Guid;
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
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JValue;
}
namespace Newtonsoft::Json::Linq {
class JValue_JValueDynamicProxy;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Linq::JValue*);
MARK_REF_T(::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Linq::JValue*, "Newtonsoft.Json.Linq", "JValue");
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy*, "Newtonsoft.Json.Linq", "JValue/JValueDynamicProxy");
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies Newtonsoft.Json.Linq.JToken, Newtonsoft.Json.Linq.JTokenType
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JValue
class CORDL_TYPE JValue : public ::Newtonsoft::Json::Linq::JToken {
public:
// Declarations
using JValueDynamicProxy = ::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy;

 __declspec(property(get=get_HasValues)) bool  HasValues;

 __declspec(property(get=get_Type)) ::Newtonsoft::Json::Linq::JTokenType  Type;

 __declspec(property(get=get_Value, put=set_Value)) ::System::Object*  Value;

/// @brief Field _value, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) ::System::Object*  _value;

/// @brief Field _valueType, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__valueType, put=__cordl_internal_set__valueType)) ::Newtonsoft::Json::Linq::JTokenType  _valueType;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() noexcept;

/// @brief Convert operator to "::System::IComparable_1<::Newtonsoft::Json::Linq::JValue*>"
constexpr operator  ::System::IComparable_1<::Newtonsoft::Json::Linq::JValue*>*() noexcept;

/// @brief Convert operator to "::System::IConvertible"
constexpr operator  ::System::IConvertible*() noexcept;

/// @brief Convert operator to "::System::IEquatable_1<::Newtonsoft::Json::Linq::JValue*>"
constexpr operator  ::System::IEquatable_1<::Newtonsoft::Json::Linq::JValue*>*() noexcept;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() noexcept;

/// [NullableContext(1)]
/// @brief Method CloneToken, addr 0xa3e7a34, size 0x68, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* CloneToken(/* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method Compare, addr 0xa3e669c, size 0xaa0, virtual false, abstract: false, final false
static inline int32_t Compare(::Newtonsoft::Json::Linq::JTokenType  valueType, ::System::Object*  objA, ::System::Object*  objB) ;

/// [NullableContext(1)]
/// @brief Method CompareBigInteger, addr 0xa3e63b4, size 0x2e8, virtual false, abstract: false, final false
static inline int32_t CompareBigInteger(::System::Numerics::BigInteger  i1, ::System::Object*  i2) ;

/// [NullableContext(1)]
/// @brief Method CompareFloat, addr 0xa3e713c, size 0xfc, virtual false, abstract: false, final false
static inline int32_t CompareFloat(::System::Object*  objA, ::System::Object*  objB) ;

/// @brief Method CompareTo, addr 0xa3e8a40, size 0x30, virtual true, abstract: false, final true
inline int32_t CompareTo(::Newtonsoft::Json::Linq::JValue*  obj) ;

/// [NullableContext(1)]
/// @brief Method CreateComment, addr 0xa3e7a9c, size 0x5c, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JValue* CreateComment(/* [Nullable(2)] */ ::StringW  value) ;

/// [NullableContext(1)]
/// @brief Method CreateNull, addr 0xa3e7af8, size 0x58, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JValue* CreateNull() ;

/// [NullableContext(1)]
/// @brief Method CreateUndefined, addr 0xa3e7b50, size 0x58, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JValue* CreateUndefined() ;

/// @brief Method Equals, addr 0xa3e86b0, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa3e86a0, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::Newtonsoft::Json::Linq::JValue*  other) ;

/// @brief Method GetHashCode, addr 0xa3e873c, size 0x18, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// [NullableContext(1)]
/// @brief Method GetMetaObject, addr 0xa3e8898, size 0xb0, virtual true, abstract: false, final false
inline ::System::Dynamic::DynamicMetaObject* GetMetaObject(::System::Linq::Expressions::Expression*  parameter) ;

/// @brief Method GetStringValueType, addr 0xa3e7ba8, size 0x7c, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JTokenType GetStringValueType(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType>  current) ;

/// @brief Method GetValueType, addr 0xa3e6084, size 0x328, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JTokenType GetValueType(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType>  current, ::System::Object*  value) ;

/// @brief [NullableContext(1)]
static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::Newtonsoft::Json::Linq::JValue*  other, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::StringW  value) ;

static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::DateTime  value) ;

static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::DateTimeOffset  value) ;

static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::Decimal  value) ;

static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::Guid  value) ;

static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::Object*  value) ;

static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::Object*  value, ::Newtonsoft::Json::Linq::JTokenType  type) ;

static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::TimeSpan  value) ;

static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::Uri*  value) ;

static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(bool  value) ;

static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(double_t  value) ;

static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(float_t  value) ;

static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(int64_t  value) ;

/// @brief [CLSCompliant(false)]
static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(uint64_t  value) ;

/// @brief Method Operation, addr 0xa3e7238, size 0x7fc, virtual false, abstract: false, final false
static inline bool Operation(::System::Linq::Expressions::ExpressionType  operation, ::System::Object*  objA, ::System::Object*  objB, ::by_ref<::System::Object*>  result) ;

/// @brief Method System.IComparable.CompareTo, addr 0xa3e8990, size 0xb0, virtual true, abstract: false, final true
inline int32_t System_IComparable_CompareTo(::System::Object*  obj) ;

/// @brief Method System.IConvertible.GetTypeCode, addr 0xa3e8a70, size 0xbc, virtual true, abstract: false, final true
inline ::System::TypeCode System_IConvertible_GetTypeCode() ;

/// @brief Method System.IConvertible.ToBoolean, addr 0xa3e8b2c, size 0x58, virtual true, abstract: false, final true
inline bool System_IConvertible_ToBoolean(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToByte, addr 0xa3e8c34, size 0x58, virtual true, abstract: false, final true
inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToChar, addr 0xa3e8b84, size 0x58, virtual true, abstract: false, final true
inline char16_t System_IConvertible_ToChar(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDateTime, addr 0xa3e8fa4, size 0x58, virtual true, abstract: false, final true
inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDecimal, addr 0xa3e8f4c, size 0x58, virtual true, abstract: false, final true
inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDouble, addr 0xa3e8ef4, size 0x58, virtual true, abstract: false, final true
inline double_t System_IConvertible_ToDouble(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt16, addr 0xa3e8c8c, size 0x58, virtual true, abstract: false, final true
inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt32, addr 0xa3e8d3c, size 0x58, virtual true, abstract: false, final true
inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt64, addr 0xa3e8dec, size 0x58, virtual true, abstract: false, final true
inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSByte, addr 0xa3e8bdc, size 0x58, virtual true, abstract: false, final true
inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSingle, addr 0xa3e8e9c, size 0x58, virtual true, abstract: false, final true
inline float_t System_IConvertible_ToSingle(::System::IFormatProvider*  provider) ;

/// [NullableContext(1)]
/// @brief Method System.IConvertible.ToType, addr 0xa3e8ffc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_IConvertible_ToType(::System::Type*  conversionType, /* [Nullable(2)] */ ::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt16, addr 0xa3e8ce4, size 0x58, virtual true, abstract: false, final true
inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt32, addr 0xa3e8d94, size 0x58, virtual true, abstract: false, final true
inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt64, addr 0xa3e8e44, size 0x58, virtual true, abstract: false, final true
inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider*  provider) ;

/// [NullableContext(1)]
/// @brief Method ToString, addr 0xa3e8754, size 0x2c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xa3e878c, size 0x10c, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// [NullableContext(1)]
/// @brief Method ToString, addr 0xa3e8780, size 0xc, virtual true, abstract: false, final true
inline ::StringW ToString(/* [Nullable(2)] */ ::System::IFormatProvider*  formatProvider) ;

/// [NullableContext(1)]
/// @brief Method ValuesEquals, addr 0xa3e8644, size 0x5c, virtual false, abstract: false, final false
static inline bool ValuesEquals(::Newtonsoft::Json::Linq::JValue*  v1, ::Newtonsoft::Json::Linq::JValue*  v2) ;

/// [NullableContext(1)]
/// @brief Method WriteTo, addr 0xa3e7d24, size 0x920, virtual true, abstract: false, final false
inline void WriteTo(::Newtonsoft::Json::JsonWriter*  writer, /* [ParamArray] */ ::ArrayW<::Newtonsoft::Json::JsonConverter*>  converters) ;

constexpr ::System::Object* const& __cordl_internal_get__value() const;

constexpr ::System::Object*& __cordl_internal_get__value() ;

constexpr ::Newtonsoft::Json::Linq::JTokenType const& __cordl_internal_get__valueType() const;

constexpr ::Newtonsoft::Json::Linq::JTokenType& __cordl_internal_get__valueType() ;

constexpr void __cordl_internal_set__value(::System::Object*  value) ;

constexpr void __cordl_internal_set__valueType(::Newtonsoft::Json::Linq::JTokenType  value) ;

/// [NullableContext(1)]
/// @brief Method .ctor, addr 0xa3e5ae0, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::Newtonsoft::Json::Linq::JValue*  other, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method .ctor, addr 0xa3e5ee4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  value) ;

/// @brief Method .ctor, addr 0xa3e5d8c, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::System::DateTime  value) ;

/// @brief Method .ctor, addr 0xa3e5df8, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::System::DateTimeOffset  value) ;

/// @brief Method .ctor, addr 0xa3e5c1c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::System::Decimal  value) ;

/// @brief Method .ctor, addr 0xa3e5eec, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  value) ;

/// @brief Method .ctor, addr 0xa3e6054, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xa3e5a60, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  value, ::Newtonsoft::Json::Linq::JTokenType  type) ;

/// @brief Method .ctor, addr 0xa3e5fe8, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::System::TimeSpan  value) ;

/// @brief Method .ctor, addr 0xa3e5f64, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::System::Uri*  value) ;

/// @brief Method .ctor, addr 0xa3e5e70, size 0x74, virtual false, abstract: false, final false
inline void _ctor(bool  value) ;

/// @brief Method .ctor, addr 0xa3e5cd8, size 0x74, virtual false, abstract: false, final false
inline void _ctor(double_t  value) ;

/// @brief Method .ctor, addr 0xa3e5d4c, size 0x40, virtual false, abstract: false, final false
inline void _ctor(float_t  value) ;

/// @brief Method .ctor, addr 0xa3e5ba8, size 0x74, virtual false, abstract: false, final false
inline void _ctor(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method .ctor, addr 0xa3e5c98, size 0x40, virtual false, abstract: false, final false
inline void _ctor(uint64_t  value) ;

/// @brief Method get_HasValues, addr 0xa3e63ac, size 0x8, virtual true, abstract: false, final false
inline bool get_HasValues() ;

/// @brief Method get_Type, addr 0xa3e7c24, size 0x8, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JTokenType get_Type() ;

/// @brief Method get_Value, addr 0xa3e7c2c, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_Value() ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() noexcept;

/// @brief Convert to "::System::IComparable_1<::Newtonsoft::Json::Linq::JValue*>"
constexpr ::System::IComparable_1<::Newtonsoft::Json::Linq::JValue*>* i___System__IComparable_1___Newtonsoft__Json__Linq__JValue__() noexcept;

/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible* i___System__IConvertible() noexcept;

/// @brief Convert to "::System::IEquatable_1<::Newtonsoft::Json::Linq::JValue*>"
constexpr ::System::IEquatable_1<::Newtonsoft::Json::Linq::JValue*>* i___System__IEquatable_1___Newtonsoft__Json__Linq__JValue__() noexcept;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() noexcept;

/// @brief Method set_Value, addr 0xa3e7c34, size 0xf0, virtual false, abstract: false, final false
inline void set_Value(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JValue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JValue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JValue(JValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JValue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JValue(JValue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23346};

/// @brief Field _valueType, offset: 0x30, size: 0x4, def value: None
 ::Newtonsoft::Json::Linq::JTokenType  ____valueType;

/// @brief Field _value, offset: 0x38, size: 0x8, def value: None
 ::System::Object*  ____value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JValue, ____valueType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JValue, ____value) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::Linq::JValue) == 0x40, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
// [NullableContext(1)]
// [Nullable(new[] { 0, 1 })]
// Dependencies Newtonsoft.Json.Utilities.DynamicProxy`1<T>
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JValue/JValueDynamicProxy
class CORDL_TYPE JValue_JValueDynamicProxy : public ::Newtonsoft::Json::Utilities::DynamicProxy_1<::Newtonsoft::Json::Linq::JValue*> {
public:
// Declarations
static inline ::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy* New_ctor() ;

/// @brief Method TryBinaryOperation, addr 0xa3e91e4, size 0x32c, virtual true, abstract: false, final false
inline bool TryBinaryOperation(::Newtonsoft::Json::Linq::JValue*  instance, ::System::Dynamic::BinaryOperationBinder*  binder, ::System::Object*  arg, /* [Nullable(2)] [NotNullWhen(true)] */ ::by_ref<::System::Object*>  result) ;

/// @brief Method TryConvert, addr 0xa3e9004, size 0x1e0, virtual true, abstract: false, final false
inline bool TryConvert(::Newtonsoft::Json::Linq::JValue*  instance, ::System::Dynamic::ConvertBinder*  binder, /* [Nullable(2)] [NotNullWhen(true)] */ ::by_ref<::System::Object*>  result) ;

/// @brief Method .ctor, addr 0xa3e8948, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JValue_JValueDynamicProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JValue_JValueDynamicProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JValue_JValueDynamicProxy(JValue_JValueDynamicProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JValue_JValueDynamicProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JValue_JValueDynamicProxy(JValue_JValueDynamicProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23345};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy) == 0x10, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
