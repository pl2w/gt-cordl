#pragma once
// IWYU pragma private; include "System/Convert.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Convert)
namespace System {
struct Base64FormattingOptions;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class IConvertible;
}
namespace System {
class IFormatProvider;
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
class Convert;
}
// Write type traits
MARK_REF_T(::System::Convert*);
DEFINE_IL2CPP_CLASS(::System::Convert*, "System", "Convert");
// [Extension]
// Dependencies System.Object, System.Type
namespace System {
// Is value type: false
// CS Name: System.Convert
class CORDL_TYPE Convert : public ::System::Object {
public:
// Declarations
/// @brief Field ConvertTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ConvertTypes, put=setStaticF_ConvertTypes)) ::ArrayW<::System::Type*>  ConvertTypes;

/// @brief Field DBNull, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DBNull, put=setStaticF_DBNull)) ::System::Object*  DBNull;

/// @brief Field EnumType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EnumType, put=setStaticF_EnumType)) ::System::Type*  EnumType;

/// @brief Field base64Table, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_base64Table, put=setStaticF_base64Table)) ::ArrayW<char16_t>  base64Table;

/// @brief Field s_decodingMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_decodingMap, put=setStaticF_s_decodingMap)) ::ArrayW<int8_t>  s_decodingMap;

/// @brief Method ChangeType, addr 0xa22e074, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  conversionType) ;

/// @brief Method ChangeType, addr 0xa22e110, size 0x94c, virtual false, abstract: false, final false
static inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  conversionType, ::System::IFormatProvider*  provider) ;

/// @brief Method ChangeType, addr 0xa22d7d4, size 0x8a0, virtual false, abstract: false, final false
static inline ::System::Object* ChangeType(::System::Object*  value, ::System::TypeCode  typeCode, ::System::IFormatProvider*  provider) ;

/// @brief Method ConvertToBase64Array, addr 0xa234204, size 0x238, virtual false, abstract: false, final false
static inline int32_t ConvertToBase64Array(char16_t*  outChars, uint8_t*  inData, int32_t  offset, int32_t  length, bool  insertLineBreaks) ;

/// @brief Method CopyToTempBufferWithoutWhiteSpace, addr 0xa234f24, size 0x120, virtual false, abstract: false, final false
static inline void CopyToTempBufferWithoutWhiteSpace(::System::ReadOnlySpan_1<char16_t>  chars, ::System::Span_1<char16_t>  tempBuffer, ::by_ref<int32_t>  consumed, ::by_ref<int32_t>  charsWritten) ;

/// @brief Method Decode, addr 0xa22d6a8, size 0x50, virtual false, abstract: false, final false
static inline int32_t Decode(::by_ref<char16_t>  encodedChars, ::by_ref<int8_t>  decodingMap) ;

/// @brief Method DefaultToType, addr 0xa229a88, size 0xab0, virtual false, abstract: false, final false
static inline ::System::Object* DefaultToType(::System::IConvertible*  value, ::System::Type*  targetType, ::System::IFormatProvider*  provider) ;

/// @brief Method FromBase64CharArray, addr 0xa235064, size 0x1fc, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> FromBase64CharArray(::ArrayW<char16_t>  inArray, int32_t  offset, int32_t  length) ;

/// @brief Method FromBase64CharPtr, addr 0xa23487c, size 0x190, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> FromBase64CharPtr(char16_t*  inputPtr, int32_t  inputLength) ;

/// @brief Method FromBase64String, addr 0xa2347c8, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> FromBase64String(::StringW  s) ;

/// @brief Method FromBase64_ComputeResultLength, addr 0xa235260, size 0xbc, virtual false, abstract: false, final false
static inline int32_t FromBase64_ComputeResultLength(char16_t*  inputPtr, int32_t  inputLength) ;

/// @brief Method GetTypeCode, addr 0xa22d710, size 0xc4, virtual false, abstract: false, final false
static inline ::System::TypeCode GetTypeCode(::System::Object*  value) ;

/// [Extension]
/// @brief Method IsSpace, addr 0xa235044, size 0x20, virtual false, abstract: false, final false
static inline bool IsSpace(char16_t  c) ;

/// @brief Method ThrowByteOverflowException, addr 0xa22eaa8, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowByteOverflowException() ;

/// @brief Method ThrowCharOverflowException, addr 0xa22ea5c, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowCharOverflowException() ;

/// @brief Method ThrowInt16OverflowException, addr 0xa22eb40, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInt16OverflowException() ;

/// @brief Method ThrowInt32OverflowException, addr 0xa22ebd8, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInt32OverflowException() ;

/// @brief Method ThrowInt64OverflowException, addr 0xa22ec70, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInt64OverflowException() ;

/// @brief Method ThrowSByteOverflowException, addr 0xa22eaf4, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowSByteOverflowException() ;

/// @brief Method ThrowUInt16OverflowException, addr 0xa22eb8c, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowUInt16OverflowException() ;

/// @brief Method ThrowUInt32OverflowException, addr 0xa22ec24, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowUInt32OverflowException() ;

/// @brief Method ThrowUInt64OverflowException, addr 0xa22ecbc, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowUInt64OverflowException() ;

/// @brief Method ToBase64CharArray, addr 0xa23443c, size 0x88, virtual false, abstract: false, final false
static inline int32_t ToBase64CharArray(::ArrayW<uint8_t>  inArray, int32_t  offsetIn, int32_t  length, ::ArrayW<char16_t>  outArray, int32_t  offsetOut) ;

/// @brief Method ToBase64CharArray, addr 0xa2344c4, size 0x304, virtual false, abstract: false, final false
static inline int32_t ToBase64CharArray(::ArrayW<uint8_t>  inArray, int32_t  offsetIn, int32_t  length, ::ArrayW<char16_t>  outArray, int32_t  offsetOut, ::System::Base64FormattingOptions  options) ;

/// @brief Method ToBase64String, addr 0xa233cec, size 0x1a4, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::System::ReadOnlySpan_1<uint8_t>  bytes, ::System::Base64FormattingOptions  options) ;

/// @brief Method ToBase64String, addr 0xa233c38, size 0xb4, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::ArrayW<uint8_t>  inArray) ;

/// @brief Method ToBase64String, addr 0xa233f48, size 0x70, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::ArrayW<uint8_t>  inArray, int32_t  offset, int32_t  length) ;

/// @brief Method ToBase64String, addr 0xa233fb8, size 0x19c, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::ArrayW<uint8_t>  inArray, int32_t  offset, int32_t  length, ::System::Base64FormattingOptions  options) ;

/// @brief Method ToBase64String, addr 0xa233e90, size 0xb8, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::ArrayW<uint8_t>  inArray, ::System::Base64FormattingOptions  options) ;

/// @brief Method ToBase64_CalculateAndValidateOutputLength, addr 0xa234154, size 0xb0, virtual false, abstract: false, final false
static inline int32_t ToBase64_CalculateAndValidateOutputLength(int32_t  inputLength, bool  insertLineBreaks) ;

/// @brief Method ToBoolean, addr 0xa22ef54, size 0x34, virtual false, abstract: false, final false
static inline bool ToBoolean(::StringW  value) ;

/// @brief Method ToBoolean, addr 0xa22ef88, size 0x34, virtual false, abstract: false, final false
static inline bool ToBoolean(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToBoolean, addr 0xa22efd4, size 0x74, virtual false, abstract: false, final false
static inline bool ToBoolean(::System::Decimal  value) ;

/// @brief Method ToBoolean, addr 0xa22ed08, size 0xf4, virtual false, abstract: false, final false
static inline bool ToBoolean(::System::Object*  value) ;

/// @brief Method ToBoolean, addr 0xa22edfc, size 0x104, virtual false, abstract: false, final false
static inline bool ToBoolean(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToBoolean, addr 0xa22efc8, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(double_t  value) ;

/// @brief Method ToBoolean, addr 0xa22efbc, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(float_t  value) ;

/// @brief Method ToBoolean, addr 0xa22ef0c, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(int16_t  value) ;

/// @brief Method ToBoolean, addr 0xa22ef24, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(int32_t  value) ;

/// @brief Method ToBoolean, addr 0xa22ef3c, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToBoolean, addr 0xa22ef00, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(int8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToBoolean, addr 0xa22ef18, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(uint16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToBoolean, addr 0xa22ef30, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToBoolean, addr 0xa22ef48, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(uint64_t  value) ;

/// @brief Method ToBoolean, addr 0xa22af8c, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(uint8_t  value) ;

/// @brief Method ToByte, addr 0xa2301b0, size 0x74, virtual false, abstract: false, final false
static inline uint8_t ToByte(::StringW  value) ;

/// @brief Method ToByte, addr 0xa233304, size 0x110, virtual false, abstract: false, final false
static inline uint8_t ToByte(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToByte, addr 0xa230224, size 0x14, virtual false, abstract: false, final false
static inline uint8_t ToByte(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToByte, addr 0xa23013c, size 0x74, virtual false, abstract: false, final false
static inline uint8_t ToByte(::System::Decimal  value) ;

/// @brief Method ToByte, addr 0xa22fbe4, size 0xf4, virtual false, abstract: false, final false
static inline uint8_t ToByte(::System::Object*  value) ;

/// @brief Method ToByte, addr 0xa22fcd8, size 0x104, virtual false, abstract: false, final false
static inline uint8_t ToByte(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToByte, addr 0xa22955c, size 0x8, virtual false, abstract: false, final false
static inline uint8_t ToByte(bool  value) ;

/// @brief Method ToByte, addr 0xa22c07c, size 0x64, virtual false, abstract: false, final false
static inline uint8_t ToByte(char16_t  value) ;

/// @brief Method ToByte, addr 0xa2300dc, size 0x60, virtual false, abstract: false, final false
static inline uint8_t ToByte(double_t  value) ;

/// @brief Method ToByte, addr 0xa230080, size 0x5c, virtual false, abstract: false, final false
static inline uint8_t ToByte(float_t  value) ;

/// @brief Method ToByte, addr 0xa22fe38, size 0x64, virtual false, abstract: false, final false
static inline uint8_t ToByte(int16_t  value) ;

/// @brief Method ToByte, addr 0xa22ff00, size 0x60, virtual false, abstract: false, final false
static inline uint8_t ToByte(int32_t  value) ;

/// @brief Method ToByte, addr 0xa22ffc0, size 0x60, virtual false, abstract: false, final false
static inline uint8_t ToByte(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToByte, addr 0xa22fddc, size 0x5c, virtual false, abstract: false, final false
static inline uint8_t ToByte(int8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToByte, addr 0xa22fe9c, size 0x64, virtual false, abstract: false, final false
static inline uint8_t ToByte(uint16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToByte, addr 0xa22ff60, size 0x60, virtual false, abstract: false, final false
static inline uint8_t ToByte(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToByte, addr 0xa230020, size 0x60, virtual false, abstract: false, final false
static inline uint8_t ToByte(uint64_t  value) ;

/// @brief Method ToChar, addr 0xa22f47c, size 0x54, virtual false, abstract: false, final false
static inline char16_t ToChar(::StringW  value) ;

/// @brief Method ToChar, addr 0xa22f4d0, size 0x9c, virtual false, abstract: false, final false
static inline char16_t ToChar(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToChar, addr 0xa22f048, size 0xf4, virtual false, abstract: false, final false
static inline char16_t ToChar(::System::Object*  value) ;

/// @brief Method ToChar, addr 0xa22f13c, size 0x104, virtual false, abstract: false, final false
static inline char16_t ToChar(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToChar, addr 0xa22f29c, size 0x5c, virtual false, abstract: false, final false
static inline char16_t ToChar(int16_t  value) ;

/// @brief Method ToChar, addr 0xa22f2fc, size 0x60, virtual false, abstract: false, final false
static inline char16_t ToChar(int32_t  value) ;

/// @brief Method ToChar, addr 0xa22f3bc, size 0x60, virtual false, abstract: false, final false
static inline char16_t ToChar(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToChar, addr 0xa22f240, size 0x5c, virtual false, abstract: false, final false
static inline char16_t ToChar(int8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToChar, addr 0xa22f2f8, size 0x4, virtual false, abstract: false, final false
static inline char16_t ToChar(uint16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToChar, addr 0xa22f35c, size 0x60, virtual false, abstract: false, final false
static inline char16_t ToChar(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToChar, addr 0xa22f41c, size 0x60, virtual false, abstract: false, final false
static inline char16_t ToChar(uint64_t  value) ;

/// @brief Method ToChar, addr 0xa22aff0, size 0x8, virtual false, abstract: false, final false
static inline char16_t ToChar(uint8_t  value) ;

/// @brief Method ToDateTime, addr 0xa232eb4, size 0x90, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDateTime, addr 0xa232d84, size 0x130, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDecimal, addr 0xa232cf8, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDecimal, addr 0xa23278c, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(::System::Object*  value) ;

/// @brief Method ToDecimal, addr 0xa2328a8, size 0x128, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDecimal, addr 0xa229908, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(bool  value) ;

/// @brief Method ToDecimal, addr 0xa232c98, size 0x60, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(double_t  value) ;

/// @brief Method ToDecimal, addr 0xa232c38, size 0x60, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(float_t  value) ;

/// @brief Method ToDecimal, addr 0xa232a28, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int16_t  value) ;

/// @brief Method ToDecimal, addr 0xa232ad8, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int32_t  value) ;

/// @brief Method ToDecimal, addr 0xa232b88, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToDecimal, addr 0xa2329d0, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToDecimal, addr 0xa232a80, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToDecimal, addr 0xa232b30, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToDecimal, addr 0xa232be0, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint64_t  value) ;

/// @brief Method ToDecimal, addr 0xa22b414, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint8_t  value) ;

/// @brief Method ToDouble, addr 0xa2326f8, size 0x78, virtual false, abstract: false, final false
static inline double_t ToDouble(::StringW  value) ;

/// @brief Method ToDouble, addr 0xa232770, size 0x1c, virtual false, abstract: false, final false
static inline double_t ToDouble(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDouble, addr 0xa232690, size 0x68, virtual false, abstract: false, final false
static inline double_t ToDouble(::System::Decimal  value) ;

/// @brief Method ToDouble, addr 0xa23244c, size 0xf4, virtual false, abstract: false, final false
static inline double_t ToDouble(::System::Object*  value) ;

/// @brief Method ToDouble, addr 0xa232540, size 0x104, virtual false, abstract: false, final false
static inline double_t ToDouble(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDouble, addr 0xa229898, size 0x14, virtual false, abstract: false, final false
static inline double_t ToDouble(bool  value) ;

/// @brief Method ToDouble, addr 0xa232688, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(float_t  value) ;

/// @brief Method ToDouble, addr 0xa232650, size 0xc, virtual false, abstract: false, final false
static inline double_t ToDouble(int16_t  value) ;

/// @brief Method ToDouble, addr 0xa232668, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(int32_t  value) ;

/// @brief Method ToDouble, addr 0xa232678, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToDouble, addr 0xa232644, size 0xc, virtual false, abstract: false, final false
static inline double_t ToDouble(int8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToDouble, addr 0xa23265c, size 0xc, virtual false, abstract: false, final false
static inline double_t ToDouble(uint16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToDouble, addr 0xa232670, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToDouble, addr 0xa232680, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(uint64_t  value) ;

/// @brief Method ToDouble, addr 0xa22b3b0, size 0xc, virtual false, abstract: false, final false
static inline double_t ToDouble(uint8_t  value) ;

/// @brief Method ToInt16, addr 0xa233534, size 0x120, virtual false, abstract: false, final false
static inline int16_t ToInt16(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToInt16, addr 0xa230744, size 0x18, virtual false, abstract: false, final false
static inline int16_t ToInt16(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt16, addr 0xa2306d0, size 0x74, virtual false, abstract: false, final false
static inline int16_t ToInt16(::System::Decimal  value) ;

/// @brief Method ToInt16, addr 0xa230238, size 0xf4, virtual false, abstract: false, final false
static inline int16_t ToInt16(::System::Object*  value) ;

/// @brief Method ToInt16, addr 0xa23032c, size 0x104, virtual false, abstract: false, final false
static inline int16_t ToInt16(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt16, addr 0xa2295c0, size 0x8, virtual false, abstract: false, final false
static inline int16_t ToInt16(bool  value) ;

/// @brief Method ToInt16, addr 0xa22c138, size 0x5c, virtual false, abstract: false, final false
static inline int16_t ToInt16(char16_t  value) ;

/// @brief Method ToInt16, addr 0xa230670, size 0x60, virtual false, abstract: false, final false
static inline int16_t ToInt16(double_t  value) ;

/// @brief Method ToInt16, addr 0xa230614, size 0x5c, virtual false, abstract: false, final false
static inline int16_t ToInt16(float_t  value) ;

/// @brief Method ToInt16, addr 0xa230494, size 0x60, virtual false, abstract: false, final false
static inline int16_t ToInt16(int32_t  value) ;

/// @brief Method ToInt16, addr 0xa230554, size 0x60, virtual false, abstract: false, final false
static inline int16_t ToInt16(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToInt16, addr 0xa230430, size 0x8, virtual false, abstract: false, final false
static inline int16_t ToInt16(int8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToInt16, addr 0xa230438, size 0x5c, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToInt16, addr 0xa2304f4, size 0x60, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToInt16, addr 0xa2305b4, size 0x60, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint64_t  value) ;

/// @brief Method ToInt16, addr 0xa22b10c, size 0x8, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint8_t  value) ;

/// @brief Method ToInt32, addr 0xa2310d0, size 0x78, virtual false, abstract: false, final false
static inline int32_t ToInt32(::StringW  value) ;

/// @brief Method ToInt32, addr 0xa233764, size 0xd4, virtual false, abstract: false, final false
static inline int32_t ToInt32(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToInt32, addr 0xa231148, size 0x18, virtual false, abstract: false, final false
static inline int32_t ToInt32(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt32, addr 0xa23105c, size 0x74, virtual false, abstract: false, final false
static inline int32_t ToInt32(::System::Decimal  value) ;

/// @brief Method ToInt32, addr 0xa230cd4, size 0xf4, virtual false, abstract: false, final false
static inline int32_t ToInt32(::System::Object*  value) ;

/// @brief Method ToInt32, addr 0xa230dc8, size 0x104, virtual false, abstract: false, final false
static inline int32_t ToInt32(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt32, addr 0xa229688, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(bool  value) ;

/// @brief Method ToInt32, addr 0xa22c248, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(char16_t  value) ;

/// @brief Method ToInt32, addr 0xa22fa6c, size 0xf4, virtual false, abstract: false, final false
static inline int32_t ToInt32(double_t  value) ;

/// @brief Method ToInt32, addr 0xa231000, size 0x5c, virtual false, abstract: false, final false
static inline int32_t ToInt32(float_t  value) ;

/// @brief Method ToInt32, addr 0xa230ed4, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(int16_t  value) ;

/// @brief Method ToInt32, addr 0xa230f40, size 0x60, virtual false, abstract: false, final false
static inline int32_t ToInt32(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToInt32, addr 0xa230ecc, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(int8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToInt32, addr 0xa230edc, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToInt32, addr 0xa230ee4, size 0x5c, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToInt32, addr 0xa230fa0, size 0x60, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint64_t  value) ;

/// @brief Method ToInt32, addr 0xa22b1cc, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint8_t  value) ;

/// @brief Method ToInt64, addr 0xa231b18, size 0x78, virtual false, abstract: false, final false
static inline int64_t ToInt64(::StringW  value) ;

/// @brief Method ToInt64, addr 0xa23390c, size 0xd4, virtual false, abstract: false, final false
static inline int64_t ToInt64(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToInt64, addr 0xa231b90, size 0x18, virtual false, abstract: false, final false
static inline int64_t ToInt64(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt64, addr 0xa231aa4, size 0x74, virtual false, abstract: false, final false
static inline int64_t ToInt64(::System::Decimal  value) ;

/// @brief Method ToInt64, addr 0xa2316bc, size 0xf4, virtual false, abstract: false, final false
static inline int64_t ToInt64(::System::Object*  value) ;

/// @brief Method ToInt64, addr 0xa2317b0, size 0x104, virtual false, abstract: false, final false
static inline int64_t ToInt64(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt64, addr 0xa229750, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(bool  value) ;

/// @brief Method ToInt64, addr 0xa22c308, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(char16_t  value) ;

/// @brief Method ToInt64, addr 0xa231994, size 0x110, virtual false, abstract: false, final false
static inline int64_t ToInt64(double_t  value) ;

/// @brief Method ToInt64, addr 0xa231938, size 0x5c, virtual false, abstract: false, final false
static inline int64_t ToInt64(float_t  value) ;

/// @brief Method ToInt64, addr 0xa2318bc, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(int16_t  value) ;

/// @brief Method ToInt64, addr 0xa2318cc, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(int32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToInt64, addr 0xa2318b4, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(int8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToInt64, addr 0xa2318c4, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToInt64, addr 0xa2318d4, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToInt64, addr 0xa2318dc, size 0x5c, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint64_t  value) ;

/// @brief Method ToInt64, addr 0xa22b28c, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToSByte, addr 0xa233414, size 0x120, virtual false, abstract: false, final false
static inline int8_t ToSByte(::StringW  value, int32_t  fromBase) ;

/// [CLSCompliant(false)]
/// @brief Method ToSByte, addr 0xa22fbd4, size 0x10, virtual false, abstract: false, final false
static inline int8_t ToSByte(::StringW  value, ::System::IFormatProvider*  provider) ;

/// [CLSCompliant(false)]
/// @brief Method ToSByte, addr 0xa22fb60, size 0x74, virtual false, abstract: false, final false
static inline int8_t ToSByte(::System::Decimal  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToSByte, addr 0xa22f56c, size 0xf4, virtual false, abstract: false, final false
static inline int8_t ToSByte(::System::Object*  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToSByte, addr 0xa22f660, size 0x104, virtual false, abstract: false, final false
static inline int8_t ToSByte(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// [CLSCompliant(false)]
/// @brief Method ToSByte, addr 0xa2294f8, size 0x8, virtual false, abstract: false, final false
static inline int8_t ToSByte(bool  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToSByte, addr 0xa22bfc0, size 0x64, virtual false, abstract: false, final false
static inline int8_t ToSByte(char16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToSByte, addr 0xa22fa0c, size 0x60, virtual false, abstract: false, final false
static inline int8_t ToSByte(double_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToSByte, addr 0xa22f9b0, size 0x5c, virtual false, abstract: false, final false
static inline int8_t ToSByte(float_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToSByte, addr 0xa22f764, size 0x68, virtual false, abstract: false, final false
static inline int8_t ToSByte(int16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToSByte, addr 0xa22f830, size 0x60, virtual false, abstract: false, final false
static inline int8_t ToSByte(int32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToSByte, addr 0xa22f8f0, size 0x60, virtual false, abstract: false, final false
static inline int8_t ToSByte(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToSByte, addr 0xa22f7cc, size 0x64, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToSByte, addr 0xa22f890, size 0x60, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToSByte, addr 0xa22f950, size 0x60, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToSByte, addr 0xa22b050, size 0x5c, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint8_t  value) ;

/// @brief Method ToSingle, addr 0xa2323b8, size 0x78, virtual false, abstract: false, final false
static inline float_t ToSingle(::StringW  value) ;

/// @brief Method ToSingle, addr 0xa232430, size 0x1c, virtual false, abstract: false, final false
static inline float_t ToSingle(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSingle, addr 0xa232350, size 0x68, virtual false, abstract: false, final false
static inline float_t ToSingle(::System::Decimal  value) ;

/// @brief Method ToSingle, addr 0xa232104, size 0xf4, virtual false, abstract: false, final false
static inline float_t ToSingle(::System::Object*  value) ;

/// @brief Method ToSingle, addr 0xa2321f8, size 0x104, virtual false, abstract: false, final false
static inline float_t ToSingle(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSingle, addr 0xa229820, size 0x14, virtual false, abstract: false, final false
static inline float_t ToSingle(bool  value) ;

/// @brief Method ToSingle, addr 0xa232348, size 0x8, virtual false, abstract: false, final false
static inline float_t ToSingle(double_t  value) ;

/// @brief Method ToSingle, addr 0xa232344, size 0x4, virtual false, abstract: false, final false
static inline float_t ToSingle(float_t  value) ;

/// @brief Method ToSingle, addr 0xa232308, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(int16_t  value) ;

/// @brief Method ToSingle, addr 0xa232320, size 0x8, virtual false, abstract: false, final false
static inline float_t ToSingle(int32_t  value) ;

/// @brief Method ToSingle, addr 0xa232330, size 0x8, virtual false, abstract: false, final false
static inline float_t ToSingle(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToSingle, addr 0xa2322fc, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(int8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToSingle, addr 0xa232314, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(uint16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToSingle, addr 0xa232328, size 0x8, virtual false, abstract: false, final false
static inline float_t ToSingle(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToSingle, addr 0xa232338, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(uint64_t  value) ;

/// @brief Method ToSingle, addr 0xa22b34c, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(uint8_t  value) ;

/// @brief Method ToString, addr 0xa233298, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::DateTime  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0xa233204, size 0x94, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Decimal  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0xa232f44, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Object*  value) ;

/// @brief Method ToString, addr 0xa232f9c, size 0x194, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0xa233130, size 0x34, virtual false, abstract: false, final false
static inline ::StringW ToString(char16_t  value) ;

/// @brief Method ToString, addr 0xa233164, size 0x34, virtual false, abstract: false, final false
static inline ::StringW ToString(char16_t  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0xa2331e4, size 0x20, virtual false, abstract: false, final false
static inline ::StringW ToString(double_t  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0xa233198, size 0x1c, virtual false, abstract: false, final false
static inline ::StringW ToString(int32_t  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0xa233b38, size 0x80, virtual false, abstract: false, final false
static inline ::StringW ToString(int32_t  value, int32_t  toBase) ;

/// @brief Method ToString, addr 0xa2331b4, size 0x18, virtual false, abstract: false, final false
static inline ::StringW ToString(int64_t  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0xa233bb8, size 0x80, virtual false, abstract: false, final false
static inline ::StringW ToString(int64_t  value, int32_t  toBase) ;

/// [CLSCompliant(false)]
/// @brief Method ToString, addr 0xa2331cc, size 0x18, virtual false, abstract: false, final false
static inline ::StringW ToString(uint64_t  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0xa233ab4, size 0x84, virtual false, abstract: false, final false
static inline ::StringW ToString(uint8_t  value, int32_t  toBase) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt16, addr 0xa233654, size 0x110, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::StringW  value, int32_t  fromBase) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt16, addr 0xa230cbc, size 0x18, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::StringW  value, ::System::IFormatProvider*  provider) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt16, addr 0xa230c48, size 0x74, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::System::Decimal  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt16, addr 0xa23075c, size 0xf4, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::System::Object*  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt16, addr 0xa230850, size 0x104, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt16, addr 0xa229624, size 0x8, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(bool  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt16, addr 0xa22c1ec, size 0x4, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(char16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt16, addr 0xa230be8, size 0x60, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(double_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt16, addr 0xa230b8c, size 0x5c, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(float_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt16, addr 0xa2309b0, size 0x5c, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt16, addr 0xa230a0c, size 0x60, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt16, addr 0xa230acc, size 0x60, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt16, addr 0xa230954, size 0x5c, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt16, addr 0xa230a6c, size 0x60, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt16, addr 0xa230b2c, size 0x60, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(uint64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt16, addr 0xa22b16c, size 0x8, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(uint8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt32, addr 0xa233838, size 0xd4, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::StringW  value, int32_t  fromBase) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt32, addr 0xa2316a4, size 0x18, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::StringW  value, ::System::IFormatProvider*  provider) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt32, addr 0xa231630, size 0x74, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::System::Decimal  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt32, addr 0xa231160, size 0xf4, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::System::Object*  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt32, addr 0xa231254, size 0x104, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt32, addr 0xa2296ec, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(bool  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt32, addr 0xa22c2a8, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(char16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt32, addr 0xa231590, size 0xa0, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(double_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt32, addr 0xa231534, size 0x5c, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(float_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt32, addr 0xa2313b4, size 0x5c, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt32, addr 0xa231418, size 0x5c, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt32, addr 0xa231474, size 0x60, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt32, addr 0xa231358, size 0x5c, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt32, addr 0xa231410, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(uint16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt32, addr 0xa2314d4, size 0x60, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(uint64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt32, addr 0xa22b22c, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(uint8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt64, addr 0xa2339e0, size 0xd4, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::StringW  value, int32_t  fromBase) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt64, addr 0xa2320ec, size 0x18, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::StringW  value, ::System::IFormatProvider*  provider) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt64, addr 0xa232078, size 0x74, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::System::Decimal  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt64, addr 0xa231ba8, size 0xf4, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::System::Object*  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt64, addr 0xa231c9c, size 0x104, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt64, addr 0xa2297b4, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(bool  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt64, addr 0xa22c368, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(char16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt64, addr 0xa231f7c, size 0xfc, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(double_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt64, addr 0xa231f20, size 0x5c, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(float_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt64, addr 0xa231dfc, size 0x5c, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt64, addr 0xa231e60, size 0x5c, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt64, addr 0xa231ec4, size 0x5c, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt64, addr 0xa231da0, size 0x5c, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt64, addr 0xa231e58, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(uint16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt64, addr 0xa231ebc, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt64, addr 0xa22b2ec, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(uint8_t  value) ;

/// @brief Method TryDecodeFromUtf16, addr 0xa22d320, size 0x388, virtual false, abstract: false, final false
static inline bool TryDecodeFromUtf16(::System::ReadOnlySpan_1<char16_t>  utf16, ::System::Span_1<uint8_t>  bytes, ::by_ref<int32_t>  consumed, ::by_ref<int32_t>  written) ;

/// @brief Method TryFromBase64Chars, addr 0xa234a0c, size 0x518, virtual false, abstract: false, final false
static inline bool TryFromBase64Chars(::System::ReadOnlySpan_1<char16_t>  chars, ::System::Span_1<uint8_t>  bytes, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method WriteThreeLowOrderBytes, addr 0xa22d6f8, size 0x18, virtual false, abstract: false, final false
static inline void WriteThreeLowOrderBytes(::by_ref<uint8_t>  destination, int32_t  value) ;

static inline ::ArrayW<::System::Type*> getStaticF_ConvertTypes() ;

static inline ::System::Object* getStaticF_DBNull() ;

static inline ::System::Type* getStaticF_EnumType() ;

static inline ::ArrayW<char16_t> getStaticF_base64Table() ;

static inline ::ArrayW<int8_t> getStaticF_s_decodingMap() ;

static inline void setStaticF_ConvertTypes(::ArrayW<::System::Type*>  value) ;

static inline void setStaticF_DBNull(::System::Object*  value) ;

static inline void setStaticF_EnumType(::System::Type*  value) ;

static inline void setStaticF_base64Table(::ArrayW<char16_t>  value) ;

static inline void setStaticF_s_decodingMap(::ArrayW<int8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Convert() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Convert(Convert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Convert(Convert const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5469};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Convert) == 0x10, "Size mismatch!");

} // namespace end def System
