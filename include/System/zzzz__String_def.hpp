#pragma once
// IWYU pragma private; include "System/String.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(String)
namespace GlobalNamespace {
struct String_ProbabilisticMap;
}
namespace GlobalNamespace {
struct String_TrimType;
}
namespace System::Buffers {
template<typename T,typename TArg>
class SpanAction_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
struct ValueListBuilder_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Globalization {
struct CompareOptions;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
struct NormalizationForm;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class ICloneable;
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
class Object;
}
namespace System {
struct ParamsArray;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
struct StringComparison;
}
namespace System {
struct StringSplitOptions;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class String;
}
// Write type traits
MARK_REF_T(::System::String*);
DEFINE_IL2CPP_CLASS(::System::String*, "System", "String");
// [DefaultMember("Chars")]
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.String
class CORDL_TYPE String : public ::System::Object {
public:
// Declarations
using ProbabilisticMap = ::GlobalNamespace::String_ProbabilisticMap;

using TrimType = ::GlobalNamespace::String_TrimType;

 __declspec(property(get=get_Chars)) char16_t  Chars[];

/// @brief Field Empty, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Empty, put=setStaticF_Empty)) ::StringW  Empty;

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Field _firstChar, offset 0x14, size 0x2 
 __declspec(property(get=__cordl_internal_get__firstChar, put=__cordl_internal_set__firstChar)) char16_t  _firstChar;

/// @brief Field _stringLength, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__stringLength, put=__cordl_internal_set__stringLength)) int32_t  _stringLength;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<char16_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() noexcept;

/// @brief Convert operator to "::System::IComparable_1<::StringW>"
constexpr operator  ::System::IComparable_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::IConvertible"
constexpr operator  ::System::IConvertible*() noexcept;

/// @brief Convert operator to "::System::IEquatable_1<::StringW>"
constexpr operator  ::System::IEquatable_1<::StringW>*() noexcept;

/// @brief Method ArrayContains, addr 0xa135588, size 0x64, virtual false, abstract: false, final false
static inline bool ArrayContains(char16_t  searchChar, ::ArrayW<char16_t>  anyOf) ;

/// @brief Method CheckStringComparison, addr 0xa12cd08, size 0x1c, virtual false, abstract: false, final false
static inline void CheckStringComparison(::System::StringComparison  comparisonType) ;

/// @brief Method Clone, addr 0xa12ed74, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* Clone() ;

/// @brief Method Compare, addr 0xa12cdd0, size 0x8, virtual false, abstract: false, final false
static inline int32_t Compare(::StringW  strA, int32_t  indexA, ::StringW  strB, int32_t  indexB, int32_t  length) ;

/// @brief Method Compare, addr 0xa12cf1c, size 0x434, virtual false, abstract: false, final false
static inline int32_t Compare(::StringW  strA, int32_t  indexA, ::StringW  strB, int32_t  indexB, int32_t  length, ::System::StringComparison  comparisonType) ;

/// @brief Method Compare, addr 0xa12cdd8, size 0x144, virtual false, abstract: false, final false
static inline int32_t Compare(::StringW  strA, int32_t  indexA, ::StringW  strB, int32_t  indexB, int32_t  length, bool  ignoreCase) ;

/// @brief Method Compare, addr 0xa12ca40, size 0x2c8, virtual false, abstract: false, final false
static inline int32_t Compare(::StringW  strA, ::StringW  strB, ::System::StringComparison  comparisonType) ;

/// @brief Method Compare, addr 0xa12cd24, size 0x9c, virtual false, abstract: false, final false
static inline int32_t Compare(::StringW  strA, ::StringW  strB, ::System::Globalization::CultureInfo*  culture, ::System::Globalization::CompareOptions  options) ;

/// @brief Method Compare, addr 0xa12ca38, size 0x8, virtual false, abstract: false, final false
static inline int32_t Compare(::StringW  strA, ::StringW  strB, bool  ignoreCase) ;

/// @brief Method Compare, addr 0xa12cdc0, size 0x10, virtual false, abstract: false, final false
static inline int32_t Compare(::StringW  strA, ::StringW  strB, bool  ignoreCase, ::System::Globalization::CultureInfo*  culture) ;

/// @brief Method CompareOrdinal, addr 0xa12d434, size 0x1f0, virtual false, abstract: false, final false
static inline int32_t CompareOrdinal(::StringW  strA, int32_t  indexA, ::StringW  strB, int32_t  indexB, int32_t  length) ;

/// @brief Method CompareOrdinal, addr 0xa12d350, size 0x44, virtual false, abstract: false, final false
static inline int32_t CompareOrdinal(::StringW  strA, ::StringW  strB) ;

/// @brief Method CompareOrdinal, addr 0xa12d394, size 0xa0, virtual false, abstract: false, final false
static inline int32_t CompareOrdinal(::System::ReadOnlySpan_1<char16_t>  strA, ::System::ReadOnlySpan_1<char16_t>  strB) ;

/// @brief Method CompareOrdinalHelper, addr 0xa12c850, size 0x38, virtual false, abstract: false, final false
static inline int32_t CompareOrdinalHelper(::StringW  strA, int32_t  indexA, int32_t  countA, ::StringW  strB, int32_t  indexB, int32_t  countB) ;

/// @brief Method CompareOrdinalHelper, addr 0xa12c888, size 0x1b0, virtual false, abstract: false, final false
static inline int32_t CompareOrdinalHelper(::StringW  strA, ::StringW  strB) ;

/// @brief Method CompareTo, addr 0xa12d69c, size 0x8, virtual true, abstract: false, final true
inline int32_t CompareTo(::StringW  strB) ;

/// @brief Method CompareTo, addr 0xa12d624, size 0x78, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  value) ;

/// @brief Method Concat, addr 0xa12fc70, size 0x88, virtual false, abstract: false, final false
static inline ::StringW Concat(::System::Object*  arg0, ::System::Object*  arg1) ;

/// @brief Method Concat, addr 0xa12fcf8, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW Concat(::System::Object*  arg0, ::System::Object*  arg1, ::System::Object*  arg2) ;

/// @brief Method Concat, addr 0xa12fe7c, size 0x224, virtual false, abstract: false, final false
static inline ::StringW Concat(/* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method Concat, addr 0xa121848, size 0x98, virtual false, abstract: false, final false
static inline ::StringW Concat(::StringW  str0, ::StringW  str1) ;

/// @brief Method Concat, addr 0xa12fdbc, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW Concat(::StringW  str0, ::StringW  str1, ::StringW  str2) ;

/// @brief Method Concat, addr 0xa130544, size 0x108, virtual false, abstract: false, final false
static inline ::StringW Concat(::StringW  str0, ::StringW  str1, ::StringW  str2, ::StringW  str3) ;

/// @brief Method Concat, addr 0xa13064c, size 0x1fc, virtual false, abstract: false, final false
static inline ::StringW Concat(/* [ParamArray] */ ::ArrayW<::StringW>  values) ;

/// @brief Method Concat, addr 0xa1300a0, size 0x4a4, virtual false, abstract: false, final false
static inline ::StringW Concat(::System::Collections::Generic::IEnumerable_1<::StringW>*  values) ;

/// @brief Method Concat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW Concat(::System::Collections::Generic::IEnumerable_1<T>*  values) ;

/// @brief Method Contains, addr 0xa134db4, size 0x24, virtual false, abstract: false, final false
inline bool Contains(::StringW  value) ;

/// @brief Method Contains, addr 0xa134de8, size 0x24, virtual false, abstract: false, final false
inline bool Contains(::StringW  value, ::System::StringComparison  comparisonType) ;

/// @brief Method Contains, addr 0xa134e0c, size 0x24, virtual false, abstract: false, final false
inline bool Contains(char16_t  value) ;

/// @brief Method Contains, addr 0xa134e40, size 0x18, virtual false, abstract: false, final false
inline bool Contains(char16_t  value, ::System::StringComparison  comparisonType) ;

/// @brief Method Copy, addr 0xa12ed78, size 0x94, virtual false, abstract: false, final false
static inline ::StringW Copy(::StringW  str) ;

/// @brief Method CopyTo, addr 0xa12ee0c, size 0x18c, virtual false, abstract: false, final false
inline void CopyTo(int32_t  sourceIndex, ::ArrayW<char16_t>  destination, int32_t  destinationIndex, int32_t  count) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TState>
static inline ::StringW Create(int32_t  length, TState  state, ::System::Buffers::SpanAction_2<char16_t,TState>*  action) ;

/// @brief Method CreateFromChar, addr 0xa12f380, size 0x24, virtual false, abstract: false, final false
static inline ::StringW CreateFromChar(char16_t  c) ;

/// @brief Method CreateString, addr 0xa1367f4, size 0xc, virtual false, abstract: false, final false
inline ::StringW CreateString(char16_t  c, int32_t  count) ;

/// @brief Method CreateString, addr 0xa12c814, size 0x8, virtual false, abstract: false, final false
inline ::StringW CreateString(::ArrayW<char16_t>  val) ;

/// @brief Method CreateString, addr 0xa1367e4, size 0x10, virtual false, abstract: false, final false
inline ::StringW CreateString(::ArrayW<char16_t>  val, int32_t  startIndex, int32_t  length) ;

/// @brief Method CreateString, addr 0xa136814, size 0xc, virtual false, abstract: false, final false
inline ::StringW CreateString(::System::ReadOnlySpan_1<char16_t>  value) ;

/// @brief Method CreateString, addr 0xa1367d4, size 0x10, virtual false, abstract: false, final false
inline ::StringW CreateString(char16_t*  value, int32_t  startIndex, int32_t  length) ;

/// @brief Method CreateString, addr 0xa1367cc, size 0x8, virtual false, abstract: false, final false
inline ::StringW CreateString(int8_t*  value) ;

/// @brief Method CreateString, addr 0xa12eb74, size 0x10, virtual false, abstract: false, final false
inline ::StringW CreateString(int8_t*  value, int32_t  startIndex, int32_t  length) ;

/// @brief Method CreateString, addr 0xa136800, size 0x14, virtual false, abstract: false, final false
inline ::StringW CreateString(int8_t*  value, int32_t  startIndex, int32_t  length, ::System::Text::Encoding*  enc) ;

/// @brief Method CreateStringForSByteConstructor, addr 0xa12e82c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW CreateStringForSByteConstructor(uint8_t*  pb, int32_t  numBytes) ;

/// @brief Method CreateStringFromEncoding, addr 0xa12f2d8, size 0xa8, virtual false, abstract: false, final false
static inline ::StringW CreateStringFromEncoding(uint8_t*  bytes, int32_t  byteLength, ::System::Text::Encoding*  encoding) ;

/// @brief Method CreateTrimmedString, addr 0xa134d80, size 0x34, virtual false, abstract: false, final false
inline ::StringW CreateTrimmedString(int32_t  start, int32_t  end) ;

/// @brief Method Ctor, addr 0xa12eb88, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW Ctor(char16_t  c, int32_t  count) ;

/// @brief Method Ctor, addr 0xa12e5fc, size 0x154, virtual false, abstract: false, final false
static inline ::StringW Ctor(char16_t*  ptr, int32_t  startIndex, int32_t  length) ;

/// @brief Method Ctor, addr 0xa12e3e4, size 0x70, virtual false, abstract: false, final false
static inline ::StringW Ctor(::ArrayW<char16_t>  value) ;

/// @brief Method Ctor, addr 0xa12e468, size 0x190, virtual false, abstract: false, final false
static inline ::StringW Ctor(::ArrayW<char16_t>  value, int32_t  startIndex, int32_t  length) ;

/// @brief Method Ctor, addr 0xa12ec7c, size 0xa8, virtual false, abstract: false, final false
static inline ::StringW Ctor(::System::ReadOnlySpan_1<char16_t>  value) ;

/// @brief Method Ctor, addr 0xa12e754, size 0xd8, virtual false, abstract: false, final false
static inline ::StringW Ctor(int8_t*  value) ;

/// @brief Method Ctor, addr 0xa12e88c, size 0x140, virtual false, abstract: false, final false
static inline ::StringW Ctor(int8_t*  value, int32_t  startIndex, int32_t  length) ;

/// @brief Method Ctor, addr 0xa12e9d0, size 0x1a4, virtual false, abstract: false, final false
static inline ::StringW Ctor(int8_t*  value, int32_t  startIndex, int32_t  length, ::System::Text::Encoding*  enc) ;

/// @brief Method EndsWith, addr 0xa12d6a4, size 0x8, virtual false, abstract: false, final false
inline bool EndsWith(::StringW  value) ;

/// @brief Method EndsWith, addr 0xa12d6ac, size 0x2d0, virtual false, abstract: false, final false
inline bool EndsWith(::StringW  value, ::System::StringComparison  comparisonType) ;

/// @brief Method EndsWith, addr 0xa12d97c, size 0x50, virtual false, abstract: false, final false
inline bool EndsWith(char16_t  value) ;

/// @brief Method Equals, addr 0xa12dd14, size 0x4c, virtual false, abstract: false, final false
static inline bool Equals(::StringW  a, ::StringW  b) ;

/// @brief Method Equals, addr 0xa12dd60, size 0x2b0, virtual false, abstract: false, final false
static inline bool Equals(::StringW  a, ::StringW  b, ::System::StringComparison  comparisonType) ;

/// @brief Method Equals, addr 0xa12d9cc, size 0x58, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa12da24, size 0x40, virtual true, abstract: false, final true
inline bool Equals(::StringW  value) ;

/// @brief Method Equals, addr 0xa12da64, size 0x2b0, virtual false, abstract: false, final false
inline bool Equals(::StringW  value, ::System::StringComparison  comparisonType) ;

/// @brief Method EqualsHelper, addr 0xa12c81c, size 0x2c, virtual false, abstract: false, final false
static inline bool EqualsHelper(::StringW  strA, ::StringW  strB) ;

/// @brief Method FastAllocateString, addr 0xa12e454, size 0x4, virtual false, abstract: false, final false
static inline ::StringW FastAllocateString(int32_t  length) ;

/// @brief Method FillStringChecked, addr 0xa12fbf8, size 0x78, virtual false, abstract: false, final false
static inline void FillStringChecked(::StringW  dest, int32_t  destPos, ::StringW  src) ;

/// @brief Method Format, addr 0xa125710, size 0x44, virtual false, abstract: false, final false
static inline ::StringW Format(::StringW  format, ::System::Object*  arg0) ;

/// @brief Method Format, addr 0xa130944, size 0x44, virtual false, abstract: false, final false
static inline ::StringW Format(::StringW  format, ::System::Object*  arg0, ::System::Object*  arg1) ;

/// @brief Method Format, addr 0xa130988, size 0x44, virtual false, abstract: false, final false
static inline ::StringW Format(::StringW  format, ::System::Object*  arg0, ::System::Object*  arg1, ::System::Object*  arg2) ;

/// @brief Method Format, addr 0xa1309cc, size 0xa8, virtual false, abstract: false, final false
static inline ::StringW Format(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method Format, addr 0xa130a74, size 0x54, virtual false, abstract: false, final false
static inline ::StringW Format(::System::IFormatProvider*  provider, ::StringW  format, ::System::Object*  arg0) ;

/// @brief Method Format, addr 0xa130ac8, size 0x58, virtual false, abstract: false, final false
static inline ::StringW Format(::System::IFormatProvider*  provider, ::StringW  format, ::System::Object*  arg0, ::System::Object*  arg1) ;

/// @brief Method Format, addr 0xa130b20, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW Format(::System::IFormatProvider*  provider, ::StringW  format, ::System::Object*  arg0, ::System::Object*  arg1, ::System::Object*  arg2) ;

/// @brief Method Format, addr 0xa130b7c, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW Format(::System::IFormatProvider*  provider, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method FormatHelper, addr 0xa130848, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW FormatHelper(::System::IFormatProvider*  provider, ::StringW  format, ::System::ParamsArray  args) ;

/// @brief Method GetHashCode, addr 0xa12e028, size 0x4, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetLegacyNonRandomizedHashCode, addr 0xa12e02c, size 0x54, virtual false, abstract: false, final false
inline int32_t GetLegacyNonRandomizedHashCode() ;

/// @brief Method GetRawStringData, addr 0xa12c848, size 0x8, virtual false, abstract: false, final false
inline ::by_ref<char16_t> GetRawStringData() ;

/// @brief Method GetTypeCode, addr 0xa12f568, size 0x8, virtual true, abstract: false, final true
inline ::System::TypeCode GetTypeCode() ;

/// @brief Method IndexOf, addr 0xa13560c, size 0x10, virtual false, abstract: false, final false
inline int32_t IndexOf(::StringW  value) ;

/// @brief Method IndexOf, addr 0xa134dd8, size 0x10, virtual false, abstract: false, final false
inline int32_t IndexOf(::StringW  value, ::System::StringComparison  comparisonType) ;

/// @brief Method IndexOf, addr 0xa13561c, size 0x10, virtual false, abstract: false, final false
inline int32_t IndexOf(::StringW  value, int32_t  startIndex) ;

/// @brief Method IndexOf, addr 0xa13562c, size 0x10, virtual false, abstract: false, final false
inline int32_t IndexOf(::StringW  value, int32_t  startIndex, ::System::StringComparison  comparisonType) ;

/// @brief Method IndexOf, addr 0xa13563c, size 0x360, virtual false, abstract: false, final false
inline int32_t IndexOf(::StringW  value, int32_t  startIndex, int32_t  count, ::System::StringComparison  comparisonType) ;

/// @brief Method IndexOf, addr 0xa134e30, size 0x10, virtual false, abstract: false, final false
inline int32_t IndexOf(char16_t  value) ;

/// @brief Method IndexOf, addr 0xa134e58, size 0x250, virtual false, abstract: false, final false
inline int32_t IndexOf(char16_t  value, ::System::StringComparison  comparisonType) ;

/// @brief Method IndexOf, addr 0xa1350a8, size 0xc, virtual false, abstract: false, final false
inline int32_t IndexOf(char16_t  value, int32_t  startIndex) ;

/// @brief Method IndexOf, addr 0xa1350b4, size 0xd8, virtual false, abstract: false, final false
inline int32_t IndexOf(char16_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method IndexOfAny, addr 0xa13518c, size 0xc, virtual false, abstract: false, final false
inline int32_t IndexOfAny(::ArrayW<char16_t>  anyOf) ;

/// @brief Method IndexOfAny, addr 0xa135364, size 0xc, virtual false, abstract: false, final false
inline int32_t IndexOfAny(::ArrayW<char16_t>  anyOf, int32_t  startIndex) ;

/// @brief Method IndexOfAny, addr 0xa135198, size 0x1cc, virtual false, abstract: false, final false
inline int32_t IndexOfAny(::ArrayW<char16_t>  anyOf, int32_t  startIndex, int32_t  count) ;

/// @brief Method IndexOfAny, addr 0xa135370, size 0x8c, virtual false, abstract: false, final false
inline int32_t IndexOfAny(char16_t  value1, char16_t  value2, int32_t  startIndex, int32_t  count) ;

/// @brief Method IndexOfAny, addr 0xa1353fc, size 0x64, virtual false, abstract: false, final false
inline int32_t IndexOfAny(char16_t  value1, char16_t  value2, char16_t  value3, int32_t  startIndex, int32_t  count) ;

/// @brief Method IndexOfCharArray, addr 0xa135460, size 0x128, virtual false, abstract: false, final false
inline int32_t IndexOfCharArray(::ArrayW<char16_t>  anyOf, int32_t  startIndex, int32_t  count) ;

/// @brief Method IndexOfUnchecked, addr 0xa1360f4, size 0x110, virtual false, abstract: false, final false
inline int32_t IndexOfUnchecked(::StringW  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method IndexOfUncheckedIgnoreCase, addr 0xa136204, size 0x1d4, virtual false, abstract: false, final false
inline int32_t IndexOfUncheckedIgnoreCase(::StringW  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method InitializeProbabilisticMap, addr 0xa1345c8, size 0xd8, virtual false, abstract: false, final false
static inline void InitializeProbabilisticMap(uint32_t*  charMap, ::System::ReadOnlySpan_1<char16_t>  anyOf) ;

/// @brief Method Insert, addr 0xa130c2c, size 0x13c, virtual false, abstract: false, final false
inline ::StringW Insert(int32_t  startIndex, ::StringW  value) ;

/// @brief Method Intern, addr 0xa136820, size 0x158, virtual false, abstract: false, final false
static inline ::StringW Intern(::StringW  str) ;

/// @brief Method InternalIntern, addr 0xa1366a4, size 0x4, virtual false, abstract: false, final false
static inline ::StringW InternalIntern(::StringW  str) ;

/// @brief Method InternalSubString, addr 0xa1346b8, size 0x58, virtual false, abstract: false, final false
inline ::StringW InternalSubString(int32_t  startIndex, int32_t  length) ;

/// @brief Method IsCharBitSet, addr 0xa1346a0, size 0x18, virtual false, abstract: false, final false
static inline bool IsCharBitSet(uint32_t*  charMap, uint8_t  value) ;

/// [NonVersionable]
/// @brief Method IsNullOrEmpty, addr 0xa12f234, size 0x1c, virtual false, abstract: false, final false
static inline bool IsNullOrEmpty(::StringW  value) ;

/// @brief Method IsNullOrWhiteSpace, addr 0xa12f250, size 0x88, virtual false, abstract: false, final false
static inline bool IsNullOrWhiteSpace(::StringW  value) ;

/// @brief Method Join, addr 0xa130dc4, size 0x3c, virtual false, abstract: false, final false
static inline ::StringW Join(::StringW  separator, ::ArrayW<::StringW>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Join, addr 0xa130d68, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW Join(::StringW  separator, /* [ParamArray] */ ::ArrayW<::StringW>  value) ;

/// @brief Method Join, addr 0xa130e00, size 0x34, virtual false, abstract: false, final false
static inline ::StringW Join(::StringW  separator, /* [ParamArray] */ ::ArrayW<::System::Object*>  values) ;

/// @brief Method Join, addr 0xa130fc0, size 0x4bc, virtual false, abstract: false, final false
static inline ::StringW Join(::StringW  separator, ::System::Collections::Generic::IEnumerable_1<::StringW>*  values) ;

/// @brief Method Join, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW Join(::StringW  separator, ::System::Collections::Generic::IEnumerable_1<T>*  values) ;

/// @brief Method Join, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW Join(char16_t  separator, ::System::Collections::Generic::IEnumerable_1<T>*  values) ;

/// @brief Method JoinCore, addr 0xa13147c, size 0x390, virtual false, abstract: false, final false
static inline ::StringW JoinCore(char16_t*  separator, int32_t  separatorLength, ::ArrayW<::StringW>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method JoinCore, addr 0xa130e34, size 0x18c, virtual false, abstract: false, final false
static inline ::StringW JoinCore(char16_t*  separator, int32_t  separatorLength, ::ArrayW<::System::Object*>  values) ;

/// @brief Method JoinCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW JoinCore(char16_t*  separator, int32_t  separatorLength, ::System::Collections::Generic::IEnumerable_1<T>*  values) ;

/// @brief Method LastIndexOf, addr 0xa135d0c, size 0x10, virtual false, abstract: false, final false
inline int32_t LastIndexOf(::StringW  value) ;

/// @brief Method LastIndexOf, addr 0xa1360dc, size 0x10, virtual false, abstract: false, final false
inline int32_t LastIndexOf(::StringW  value, ::System::StringComparison  comparisonType) ;

/// @brief Method LastIndexOf, addr 0xa1360d0, size 0xc, virtual false, abstract: false, final false
inline int32_t LastIndexOf(::StringW  value, int32_t  startIndex) ;

/// @brief Method LastIndexOf, addr 0xa135d1c, size 0x3b4, virtual false, abstract: false, final false
inline int32_t LastIndexOf(::StringW  value, int32_t  startIndex, int32_t  count, ::System::StringComparison  comparisonType) ;

/// @brief Method LastIndexOf, addr 0xa13599c, size 0x10, virtual false, abstract: false, final false
inline int32_t LastIndexOf(char16_t  value) ;

/// @brief Method LastIndexOf, addr 0xa1359ac, size 0x8, virtual false, abstract: false, final false
inline int32_t LastIndexOf(char16_t  value, int32_t  startIndex) ;

/// @brief Method LastIndexOf, addr 0xa1359b4, size 0xe4, virtual false, abstract: false, final false
inline int32_t LastIndexOf(char16_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOfAny, addr 0xa135a98, size 0xc, virtual false, abstract: false, final false
inline int32_t LastIndexOfAny(::ArrayW<char16_t>  anyOf) ;

/// @brief Method LastIndexOfAny, addr 0xa135bdc, size 0x8, virtual false, abstract: false, final false
inline int32_t LastIndexOfAny(::ArrayW<char16_t>  anyOf, int32_t  startIndex) ;

/// @brief Method LastIndexOfAny, addr 0xa135aa4, size 0x138, virtual false, abstract: false, final false
inline int32_t LastIndexOfAny(::ArrayW<char16_t>  anyOf, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOfCharArray, addr 0xa135be4, size 0x128, virtual false, abstract: false, final false
inline int32_t LastIndexOfCharArray(::ArrayW<char16_t>  anyOf, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOfUnchecked, addr 0xa1363d8, size 0xdc, virtual false, abstract: false, final false
inline int32_t LastIndexOfUnchecked(::StringW  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOfUncheckedIgnoreCase, addr 0xa1364b4, size 0x1a0, virtual false, abstract: false, final false
inline int32_t LastIndexOfUncheckedIgnoreCase(::StringW  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method MakeSeparatorList, addr 0xa1343c0, size 0x1fc, virtual false, abstract: false, final false
inline void MakeSeparatorList(::StringW  separator, ::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>>  sepListBuilder) ;

/// @brief Method MakeSeparatorList, addr 0xa1340dc, size 0x2e4, virtual false, abstract: false, final false
inline void MakeSeparatorList(::ArrayW<::StringW>  separators, ::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>>  sepListBuilder, ::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>>  lengthListBuilder) ;

/// @brief Method MakeSeparatorList, addr 0xa1330d8, size 0x4a8, virtual false, abstract: false, final false
inline void MakeSeparatorList(::System::ReadOnlySpan_1<char16_t>  separators, ::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>>  sepListBuilder) ;

static inline ::System::String* New_ctor(char16_t  c, int32_t  count) ;

static inline ::System::String* New_ctor(::ArrayW<char16_t>  value) ;

static inline ::System::String* New_ctor(::ArrayW<char16_t>  value, int32_t  startIndex, int32_t  length) ;

static inline ::System::String* New_ctor(::System::ReadOnlySpan_1<char16_t>  value) ;

/// @brief [CLSCompliant(false)]
static inline ::System::String* New_ctor(char16_t*  value, int32_t  startIndex, int32_t  length) ;

/// @brief [CLSCompliant(false)]
static inline ::System::String* New_ctor(int8_t*  value) ;

/// @brief [CLSCompliant(false)]
static inline ::System::String* New_ctor(int8_t*  value, int32_t  startIndex, int32_t  length) ;

/// @brief [CLSCompliant(false)]
static inline ::System::String* New_ctor(int8_t*  value, int32_t  startIndex, int32_t  length, ::System::Text::Encoding*  enc) ;

/// @brief Method Normalize, addr 0xa12fb90, size 0x68, virtual false, abstract: false, final false
inline ::StringW Normalize(::System::Text::NormalizationForm  normalizationForm) ;

/// @brief Method PadLeft, addr 0xa13180c, size 0x8, virtual false, abstract: false, final false
inline ::StringW PadLeft(int32_t  totalWidth) ;

/// @brief Method PadLeft, addr 0xa131814, size 0x1f0, virtual false, abstract: false, final false
inline ::StringW PadLeft(int32_t  totalWidth, char16_t  paddingChar) ;

/// @brief Method PadRight, addr 0xa131a04, size 0x8, virtual false, abstract: false, final false
inline ::StringW PadRight(int32_t  totalWidth) ;

/// @brief Method PadRight, addr 0xa131a0c, size 0x22c, virtual false, abstract: false, final false
inline ::StringW PadRight(int32_t  totalWidth, char16_t  paddingChar) ;

/// @brief Method Remove, addr 0xa131dbc, size 0xb8, virtual false, abstract: false, final false
inline ::StringW Remove(int32_t  startIndex) ;

/// @brief Method Remove, addr 0xa131c38, size 0x184, virtual false, abstract: false, final false
inline ::StringW Remove(int32_t  startIndex, int32_t  count) ;

/// @brief Method Replace, addr 0xa132730, size 0xd8, virtual false, abstract: false, final false
inline ::StringW Replace(char16_t  oldChar, char16_t  newChar) ;

/// @brief Method Replace, addr 0xa132420, size 0x310, virtual false, abstract: false, final false
inline ::StringW Replace(::StringW  oldValue, ::StringW  newValue) ;

/// @brief Method Replace, addr 0xa131fc4, size 0x1e4, virtual false, abstract: false, final false
inline ::StringW Replace(::StringW  oldValue, ::StringW  newValue, ::System::StringComparison  comparisonType) ;

/// @brief Method ReplaceCore, addr 0xa1321a8, size 0x278, virtual false, abstract: false, final false
inline ::StringW ReplaceCore(::StringW  oldValue, ::StringW  newValue, ::System::Globalization::CultureInfo*  culture, ::System::Globalization::CompareOptions  options) ;

/// @brief Method ReplaceHelper, addr 0xa132808, size 0x340, virtual false, abstract: false, final false
inline ::StringW ReplaceHelper(int32_t  oldValueLength, ::StringW  newValue, ::System::ReadOnlySpan_1<int32_t>  indices) ;

/// @brief Method SetCharBit, addr 0xa1355ec, size 0x20, virtual false, abstract: false, final false
static inline void SetCharBit(uint32_t*  charMap, uint8_t  value) ;

/// @brief Method Split, addr 0xa133ed8, size 0x14, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> Split(::ArrayW<::StringW>  separator, int32_t  count, ::System::StringSplitOptions  options) ;

/// @brief Method Split, addr 0xa133ec4, size 0x14, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> Split(::ArrayW<::StringW>  separator, ::System::StringSplitOptions  options) ;

/// @brief Method Split, addr 0xa132fe8, size 0x78, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> Split(::ArrayW<char16_t>  separator, int32_t  count) ;

/// @brief Method Split, addr 0xa133060, size 0x78, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> Split(::ArrayW<char16_t>  separator, ::System::StringSplitOptions  options) ;

/// @brief Method Split, addr 0xa132f74, size 0x74, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> Split(/* [ParamArray] */ ::ArrayW<char16_t>  separator) ;

/// @brief Method Split, addr 0xa133a1c, size 0x34, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> Split(::StringW  separator, ::System::StringSplitOptions  options) ;

/// @brief Method Split, addr 0xa132f10, size 0x64, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> Split(char16_t  separator, int32_t  count, ::System::StringSplitOptions  options) ;

/// @brief Method Split, addr 0xa132b48, size 0x60, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> Split(char16_t  separator, ::System::StringSplitOptions  options) ;

/// @brief Method SplitInternal, addr 0xa133eec, size 0x1f0, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> SplitInternal(::StringW  separator, int32_t  count, ::System::StringSplitOptions  options) ;

/// @brief Method SplitInternal, addr 0xa133a50, size 0x474, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> SplitInternal(::StringW  separator, ::ArrayW<::StringW>  separators, int32_t  count, ::System::StringSplitOptions  options) ;

/// @brief Method SplitInternal, addr 0xa132ba8, size 0x368, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> SplitInternal(::System::ReadOnlySpan_1<char16_t>  separators, int32_t  count, ::System::StringSplitOptions  options) ;

/// @brief Method SplitKeepEmptyEntries, addr 0xa133580, size 0x1e4, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> SplitKeepEmptyEntries(::System::ReadOnlySpan_1<int32_t>  sepList, ::System::ReadOnlySpan_1<int32_t>  lengthList, int32_t  defaultLength, int32_t  count) ;

/// @brief Method SplitOmitEmptyEntries, addr 0xa133764, size 0x2b8, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> SplitOmitEmptyEntries(::System::ReadOnlySpan_1<int32_t>  sepList, ::System::ReadOnlySpan_1<int32_t>  lengthList, int32_t  defaultLength, int32_t  count) ;

/// @brief Method StartsWith, addr 0xa12e080, size 0x58, virtual false, abstract: false, final false
inline bool StartsWith(::StringW  value) ;

/// @brief Method StartsWith, addr 0xa12e0d8, size 0x2e8, virtual false, abstract: false, final false
inline bool StartsWith(::StringW  value, ::System::StringComparison  comparisonType) ;

/// @brief Method StartsWith, addr 0xa12e3c0, size 0x20, virtual false, abstract: false, final false
inline bool StartsWith(char16_t  value) ;

/// @brief Method StartsWithOrdinalUnchecked, addr 0xa136654, size 0x50, virtual false, abstract: false, final false
inline bool StartsWithOrdinalUnchecked(::StringW  value) ;

/// @brief Method Substring, addr 0xa1345bc, size 0xc, virtual false, abstract: false, final false
inline ::StringW Substring(int32_t  startIndex) ;

/// @brief Method Substring, addr 0xa131e74, size 0x150, virtual false, abstract: false, final false
inline ::StringW Substring(int32_t  startIndex, int32_t  length) ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator, addr 0xa12f3ac, size 0x5c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<char16_t>* System_Collections_Generic_IEnumerable_System_Char__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xa12f408, size 0x5c, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.IConvertible.ToBoolean, addr 0xa12f570, size 0x68, virtual true, abstract: false, final true
inline bool System_IConvertible_ToBoolean(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToByte, addr 0xa12f6a8, size 0x68, virtual true, abstract: false, final true
inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToChar, addr 0xa12f5d8, size 0x68, virtual true, abstract: false, final true
inline char16_t System_IConvertible_ToChar(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDateTime, addr 0xa12fab8, size 0x68, virtual true, abstract: false, final true
inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDecimal, addr 0xa12fa50, size 0x68, virtual true, abstract: false, final true
inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDouble, addr 0xa12f9e8, size 0x68, virtual true, abstract: false, final true
inline double_t System_IConvertible_ToDouble(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt16, addr 0xa12f710, size 0x68, virtual true, abstract: false, final true
inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt32, addr 0xa12f7e0, size 0x68, virtual true, abstract: false, final true
inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt64, addr 0xa12f8b0, size 0x68, virtual true, abstract: false, final true
inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSByte, addr 0xa12f640, size 0x68, virtual true, abstract: false, final true
inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSingle, addr 0xa12f980, size 0x68, virtual true, abstract: false, final true
inline float_t System_IConvertible_ToSingle(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToType, addr 0xa12fb20, size 0x70, virtual true, abstract: false, final true
inline ::System::Object* System_IConvertible_ToType(::System::Type*  type, ::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt16, addr 0xa12f778, size 0x68, virtual true, abstract: false, final true
inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt32, addr 0xa12f848, size 0x68, virtual true, abstract: false, final true
inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt64, addr 0xa12f918, size 0x68, virtual true, abstract: false, final true
inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider*  provider) ;

/// @brief Method ToCharArray, addr 0xa12ef98, size 0xf4, virtual false, abstract: false, final false
inline ::ArrayW<char16_t> ToCharArray() ;

/// @brief Method ToCharArray, addr 0xa12f08c, size 0x1a8, virtual false, abstract: false, final false
inline ::ArrayW<char16_t> ToCharArray(int32_t  startIndex, int32_t  length) ;

/// @brief Method ToLower, addr 0xa134710, size 0x7c, virtual false, abstract: false, final false
inline ::StringW ToLower() ;

/// @brief Method ToLower, addr 0xa13478c, size 0x84, virtual false, abstract: false, final false
inline ::StringW ToLower(::System::Globalization::CultureInfo*  culture) ;

/// @brief Method ToLowerInvariant, addr 0xa134810, size 0x7c, virtual false, abstract: false, final false
inline ::StringW ToLowerInvariant() ;

/// @brief Method ToString, addr 0xa12f3a4, size 0x4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xa12f3a8, size 0x4, virtual true, abstract: false, final true
inline ::StringW ToString(::System::IFormatProvider*  provider) ;

/// @brief Method ToUpper, addr 0xa13488c, size 0x7c, virtual false, abstract: false, final false
inline ::StringW ToUpper() ;

/// @brief Method ToUpper, addr 0xa134908, size 0x84, virtual false, abstract: false, final false
inline ::StringW ToUpper(::System::Globalization::CultureInfo*  culture) ;

/// @brief Method ToUpperInvariant, addr 0xa13498c, size 0x7c, virtual false, abstract: false, final false
inline ::StringW ToUpperInvariant() ;

/// @brief Method Trim, addr 0xa134a08, size 0x8, virtual false, abstract: false, final false
inline ::StringW Trim() ;

/// @brief Method Trim, addr 0xa134b28, size 0x20, virtual false, abstract: false, final false
inline ::StringW Trim(char16_t  trimChar) ;

/// @brief Method Trim, addr 0xa134cac, size 0x2c, virtual false, abstract: false, final false
inline ::StringW Trim(/* [ParamArray] */ ::ArrayW<char16_t>  trimChars) ;

/// @brief Method TrimEnd, addr 0xa134d2c, size 0x8, virtual false, abstract: false, final false
inline ::StringW TrimEnd() ;

/// @brief Method TrimEnd, addr 0xa134d34, size 0x20, virtual false, abstract: false, final false
inline ::StringW TrimEnd(char16_t  trimChar) ;

/// @brief Method TrimEnd, addr 0xa134d54, size 0x2c, virtual false, abstract: false, final false
inline ::StringW TrimEnd(/* [ParamArray] */ ::ArrayW<char16_t>  trimChars) ;

/// @brief Method TrimHelper, addr 0xa134b48, size 0x164, virtual false, abstract: false, final false
inline ::StringW TrimHelper(char16_t*  trimChars, int32_t  trimCharsLength, ::GlobalNamespace::String_TrimType  trimType) ;

/// @brief Method TrimStart, addr 0xa134cd8, size 0x8, virtual false, abstract: false, final false
inline ::StringW TrimStart() ;

/// @brief Method TrimStart, addr 0xa134ce0, size 0x20, virtual false, abstract: false, final false
inline ::StringW TrimStart(char16_t  trimChar) ;

/// @brief Method TrimStart, addr 0xa134d00, size 0x2c, virtual false, abstract: false, final false
inline ::StringW TrimStart(/* [ParamArray] */ ::ArrayW<char16_t>  trimChars) ;

/// @brief Method TrimWhiteSpaceHelper, addr 0xa134a10, size 0x118, virtual false, abstract: false, final false
inline ::StringW TrimWhiteSpaceHelper(::GlobalNamespace::String_TrimType  trimType) ;

constexpr char16_t const& __cordl_internal_get__firstChar() const;

constexpr char16_t& __cordl_internal_get__firstChar() ;

constexpr int32_t const& __cordl_internal_get__stringLength() const;

constexpr int32_t& __cordl_internal_get__stringLength() ;

constexpr void __cordl_internal_set__firstChar(char16_t  value) ;

constexpr void __cordl_internal_set__stringLength(int32_t  value) ;

/// @brief Method bzero, addr 0xa136770, size 0xc, virtual false, abstract: false, final false
static inline void _cordl_bzero(uint8_t*  dest, int32_t  len) ;

/// @brief Method .ctor, addr 0xa12eb84, size 0x4, virtual false, abstract: false, final false
inline void _ctor(char16_t  c, int32_t  count) ;

/// @brief Method .ctor, addr 0xa12e3e0, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<char16_t>  value) ;

/// @brief Method .ctor, addr 0xa12e464, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<char16_t>  value, int32_t  startIndex, int32_t  length) ;

/// @brief Method .ctor, addr 0xa12ec78, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::System::ReadOnlySpan_1<char16_t>  value) ;

/// [CLSCompliant(false)]
/// @brief Method .ctor, addr 0xa12e5f8, size 0x4, virtual false, abstract: false, final false
inline void _ctor(char16_t*  value, int32_t  startIndex, int32_t  length) ;

/// [CLSCompliant(false)]
/// @brief Method .ctor, addr 0xa12e750, size 0x4, virtual false, abstract: false, final false
inline void _ctor(int8_t*  value) ;

/// [CLSCompliant(false)]
/// @brief Method .ctor, addr 0xa12e888, size 0x4, virtual false, abstract: false, final false
inline void _ctor(int8_t*  value, int32_t  startIndex, int32_t  length) ;

/// [CLSCompliant(false)]
/// @brief Method .ctor, addr 0xa12e9cc, size 0x4, virtual false, abstract: false, final false
inline void _ctor(int8_t*  value, int32_t  startIndex, int32_t  length, ::System::Text::Encoding*  enc) ;

/// @brief Method bzero_aligned_1, addr 0xa13677c, size 0x8, virtual false, abstract: false, final false
static inline void bzero_aligned_1(uint8_t*  dest, int32_t  len) ;

/// @brief Method bzero_aligned_2, addr 0xa136784, size 0x8, virtual false, abstract: false, final false
static inline void bzero_aligned_2(uint8_t*  dest, int32_t  len) ;

/// @brief Method bzero_aligned_4, addr 0xa13678c, size 0x8, virtual false, abstract: false, final false
static inline void bzero_aligned_4(uint8_t*  dest, int32_t  len) ;

/// @brief Method bzero_aligned_8, addr 0xa136794, size 0x8, virtual false, abstract: false, final false
static inline void bzero_aligned_8(uint8_t*  dest, int32_t  len) ;

static inline ::StringW getStaticF_Empty() ;

/// [Intrinsic]
/// @brief Method get_Chars, addr 0xa129840, size 0x3c, virtual false, abstract: false, final false
inline char16_t get_Chars(int32_t  index) ;

/// @brief Method get_Length, addr 0xa1360ec, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<char16_t>* i___System__Collections__Generic__IEnumerable_1_char16_t_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() noexcept;

/// @brief Convert to "::System::IComparable_1<::StringW>"
constexpr ::System::IComparable_1<::StringW>* i___System__IComparable_1___StringW_() noexcept;

/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible* i___System__IConvertible() noexcept;

/// @brief Convert to "::System::IEquatable_1<::StringW>"
constexpr ::System::IEquatable_1<::StringW>* i___System__IEquatable_1___StringW_() noexcept;

/// @brief Method memcpy, addr 0xa136768, size 0x8, virtual false, abstract: false, final false
static inline void memcpy(uint8_t*  dest, uint8_t*  src, int32_t  size) ;

/// @brief Method memcpy_aligned_1, addr 0xa13679c, size 0xc, virtual false, abstract: false, final false
static inline void memcpy_aligned_1(uint8_t*  dest, uint8_t*  src, int32_t  size) ;

/// @brief Method memcpy_aligned_2, addr 0xa1367a8, size 0xc, virtual false, abstract: false, final false
static inline void memcpy_aligned_2(uint8_t*  dest, uint8_t*  src, int32_t  size) ;

/// @brief Method memcpy_aligned_4, addr 0xa1367b4, size 0xc, virtual false, abstract: false, final false
static inline void memcpy_aligned_4(uint8_t*  dest, uint8_t*  src, int32_t  size) ;

/// @brief Method memcpy_aligned_8, addr 0xa1367c0, size 0xc, virtual false, abstract: false, final false
static inline void memcpy_aligned_8(uint8_t*  dest, uint8_t*  src, int32_t  size) ;

/// @brief Method memset, addr 0xa1366a8, size 0xc0, virtual false, abstract: false, final false
static inline void memset(uint8_t*  dest, int32_t  val, int32_t  len) ;

/// @brief Method op_Equality, addr 0xa1218e0, size 0x4, virtual false, abstract: false, final false
static inline bool op_Equality(::StringW  a, ::StringW  b) ;

/// @brief Method op_Implicit, addr 0xa12ed24, size 0x50, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<char16_t> op_Implicit___System__ReadOnlySpan_1_char16_t_(::StringW  value) ;

/// @brief Method op_Inequality, addr 0xa12e010, size 0x18, virtual false, abstract: false, final false
static inline bool op_Inequality(::StringW  a, ::StringW  b) ;

static inline void setStaticF_Empty(::StringW  value) ;

/// @brief Method wcslen, addr 0xa12f464, size 0x104, virtual false, abstract: false, final false
static inline int32_t wcslen(char16_t*  ptr) ;

/// @brief Method wstrcpy, addr 0xa12e458, size 0xc, virtual false, abstract: false, final false
static inline void wstrcpy(char16_t*  dmem, char16_t*  smem, int32_t  charCount) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr String() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "String", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
String(String && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "String", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
String(String const& ) = delete;

/// @brief Field PROBABILISTICMAP_BLOCK_INDEX_MASK offset 0xffffffff size 0x4
static constexpr int32_t  PROBABILISTICMAP_BLOCK_INDEX_MASK{static_cast<int32_t>(0x7)};

/// @brief Field PROBABILISTICMAP_BLOCK_INDEX_SHIFT offset 0xffffffff size 0x4
static constexpr int32_t  PROBABILISTICMAP_BLOCK_INDEX_SHIFT{static_cast<int32_t>(0x3)};

/// @brief Field PROBABILISTICMAP_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  PROBABILISTICMAP_SIZE{static_cast<int32_t>(0x8)};

/// @brief Field StackallocIntBufferSizeLimit offset 0xffffffff size 0x4
static constexpr int32_t  StackallocIntBufferSizeLimit{static_cast<int32_t>(0x80)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5414};

/// @brief Field _stringLength, offset: 0x10, size: 0x4, def value: None
 int32_t  ____stringLength;

/// @brief Field _firstChar, offset: 0x14, size: 0x2, def value: None
 char16_t  ____firstChar;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::String, ____stringLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::String, ____firstChar) == 0x14, "Offset mismatch!");

static_assert(sizeof(::System::String) == 0x18, "Size mismatch!");

} // namespace end def System
