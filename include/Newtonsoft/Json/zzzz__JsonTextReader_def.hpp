#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonTextReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Utilities/zzzz__StringBuffer_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringReference_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonTextReader)
namespace GlobalNamespace {
struct JsonTextReader__DoReadAsync_d__3;
}
namespace GlobalNamespace {
struct JsonTextReader__EatWhitespaceAsync_d__17;
}
namespace GlobalNamespace {
struct JsonTextReader__MatchAndSetAsync_d__21;
}
namespace GlobalNamespace {
struct JsonTextReader__MatchValueAsync_d__19;
}
namespace GlobalNamespace {
struct JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20;
}
namespace GlobalNamespace {
struct JsonTextReader__ParseCommentAsync_d__16;
}
namespace GlobalNamespace {
struct JsonTextReader__ParseConstructorAsync_d__25;
}
namespace GlobalNamespace {
struct JsonTextReader__ParseNumberAsync_d__29;
}
namespace GlobalNamespace {
struct JsonTextReader__ParseNumberNaNAsync_d__26;
}
namespace GlobalNamespace {
struct JsonTextReader__ParseNumberNegativeInfinityAsync_d__28;
}
namespace GlobalNamespace {
struct JsonTextReader__ParseNumberPositiveInfinityAsync_d__27;
}
namespace GlobalNamespace {
struct JsonTextReader__ParseObjectAsync_d__15;
}
namespace GlobalNamespace {
struct JsonTextReader__ParsePostValueAsync_d__4;
}
namespace GlobalNamespace {
struct JsonTextReader__ParsePropertyAsync_d__31;
}
namespace GlobalNamespace {
struct JsonTextReader__ParseStringAsync_d__18;
}
namespace GlobalNamespace {
struct JsonTextReader__ParseUnicodeAsync_d__12;
}
namespace GlobalNamespace {
struct JsonTextReader__ParseUnquotedPropertyAsync_d__33;
}
namespace GlobalNamespace {
struct JsonTextReader__ParseValueAsync_d__8;
}
namespace GlobalNamespace {
struct JsonTextReader__ProcessCarriageReturnAsync_d__11;
}
namespace GlobalNamespace {
struct JsonTextReader__ReadCharsAsync_d__14;
}
namespace GlobalNamespace {
struct JsonTextReader__ReadDataAsync_d__7;
}
namespace GlobalNamespace {
struct JsonTextReader__ReadFromFinishedAsync_d__5;
}
namespace GlobalNamespace {
struct JsonTextReader__ReadNumberIntoBufferAsync_d__32;
}
namespace GlobalNamespace {
struct JsonTextReader__ReadStringIntoBufferAsync_d__9;
}
namespace Newtonsoft::Json {
template<typename T>
class IArrayPool_1;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace Newtonsoft::Json {
class JsonNameTable;
}
namespace Newtonsoft::Json {
class JsonReaderException;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace Newtonsoft::Json {
struct ReadType;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::IO {
class TextReader;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
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
class Exception;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonTextReader;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::JsonTextReader*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::JsonTextReader*, "Newtonsoft.Json", "JsonTextReader");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies Newtonsoft.Json.JsonReader, Newtonsoft.Json.Utilities.StringBuffer, Newtonsoft.Json.Utilities.StringReference
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonTextReader
class CORDL_TYPE JsonTextReader : public ::Newtonsoft::Json::JsonReader {
public:
// Declarations
using _DoReadAsync_d__3 = ::GlobalNamespace::JsonTextReader__DoReadAsync_d__3;

using _EatWhitespaceAsync_d__17 = ::GlobalNamespace::JsonTextReader__EatWhitespaceAsync_d__17;

using _MatchAndSetAsync_d__21 = ::GlobalNamespace::JsonTextReader__MatchAndSetAsync_d__21;

using _MatchValueAsync_d__19 = ::GlobalNamespace::JsonTextReader__MatchValueAsync_d__19;

using _MatchValueWithTrailingSeparatorAsync_d__20 = ::GlobalNamespace::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20;

using _ParseCommentAsync_d__16 = ::GlobalNamespace::JsonTextReader__ParseCommentAsync_d__16;

using _ParseConstructorAsync_d__25 = ::GlobalNamespace::JsonTextReader__ParseConstructorAsync_d__25;

using _ParseNumberAsync_d__29 = ::GlobalNamespace::JsonTextReader__ParseNumberAsync_d__29;

using _ParseNumberNaNAsync_d__26 = ::GlobalNamespace::JsonTextReader__ParseNumberNaNAsync_d__26;

using _ParseNumberNegativeInfinityAsync_d__28 = ::GlobalNamespace::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28;

using _ParseNumberPositiveInfinityAsync_d__27 = ::GlobalNamespace::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27;

using _ParseObjectAsync_d__15 = ::GlobalNamespace::JsonTextReader__ParseObjectAsync_d__15;

using _ParsePostValueAsync_d__4 = ::GlobalNamespace::JsonTextReader__ParsePostValueAsync_d__4;

using _ParsePropertyAsync_d__31 = ::GlobalNamespace::JsonTextReader__ParsePropertyAsync_d__31;

using _ParseStringAsync_d__18 = ::GlobalNamespace::JsonTextReader__ParseStringAsync_d__18;

using _ParseUnicodeAsync_d__12 = ::GlobalNamespace::JsonTextReader__ParseUnicodeAsync_d__12;

using _ParseUnquotedPropertyAsync_d__33 = ::GlobalNamespace::JsonTextReader__ParseUnquotedPropertyAsync_d__33;

using _ParseValueAsync_d__8 = ::GlobalNamespace::JsonTextReader__ParseValueAsync_d__8;

using _ProcessCarriageReturnAsync_d__11 = ::GlobalNamespace::JsonTextReader__ProcessCarriageReturnAsync_d__11;

using _ReadCharsAsync_d__14 = ::GlobalNamespace::JsonTextReader__ReadCharsAsync_d__14;

using _ReadDataAsync_d__7 = ::GlobalNamespace::JsonTextReader__ReadDataAsync_d__7;

using _ReadFromFinishedAsync_d__5 = ::GlobalNamespace::JsonTextReader__ReadFromFinishedAsync_d__5;

using _ReadNumberIntoBufferAsync_d__32 = ::GlobalNamespace::JsonTextReader__ReadNumberIntoBufferAsync_d__32;

using _ReadStringIntoBufferAsync_d__9 = ::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9;

 __declspec(property(get=get_LineNumber)) int32_t  LineNumber;

 __declspec(property(get=get_LinePosition)) int32_t  LinePosition;

/// @brief [Nullable(2)]
 __declspec(property(get=get_PropertyNameTable, put=set_PropertyNameTable)) ::Newtonsoft::Json::JsonNameTable*  PropertyNameTable;

/// @brief Field <PropertyNameTable>k__BackingField, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__PropertyNameTable_k__BackingField, put=__cordl_internal_set__PropertyNameTable_k__BackingField)) ::Newtonsoft::Json::JsonNameTable*  _PropertyNameTable_k__BackingField;

/// @brief Field _arrayPool, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__arrayPool, put=__cordl_internal_set__arrayPool)) ::Newtonsoft::Json::IArrayPool_1<char16_t>*  _arrayPool;

/// @brief Field _charPos, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__charPos, put=__cordl_internal_set__charPos)) int32_t  _charPos;

/// @brief Field _chars, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__chars, put=__cordl_internal_set__chars)) ::ArrayW<char16_t>  _chars;

/// @brief Field _charsUsed, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__charsUsed, put=__cordl_internal_set__charsUsed)) int32_t  _charsUsed;

/// @brief Field _isEndOfFile, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__isEndOfFile, put=__cordl_internal_set__isEndOfFile)) bool  _isEndOfFile;

/// @brief Field _lineNumber, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__lineNumber, put=__cordl_internal_set__lineNumber)) int32_t  _lineNumber;

/// @brief Field _lineStartPos, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__lineStartPos, put=__cordl_internal_set__lineStartPos)) int32_t  _lineStartPos;

/// @brief Field _reader, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__reader, put=__cordl_internal_set__reader)) ::System::IO::TextReader*  _reader;

/// @brief Field _safeAsync, offset 0x82, size 0x1 
 __declspec(property(get=__cordl_internal_get__safeAsync, put=__cordl_internal_set__safeAsync)) bool  _safeAsync;

/// @brief Field _stringBuffer, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get__stringBuffer, put=__cordl_internal_set__stringBuffer)) ::Newtonsoft::Json::Utilities::StringBuffer  _stringBuffer;

/// @brief Field _stringReference, offset 0xc0, size 0x10 
 __declspec(property(get=__cordl_internal_get__stringReference, put=__cordl_internal_set__stringReference)) ::Newtonsoft::Json::Utilities::StringReference  _stringReference;

/// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
constexpr operator  ::Newtonsoft::Json::IJsonLineInfo*() noexcept;

/// @brief Method BigIntegerParse, addr 0xa380a7c, size 0x88, virtual false, abstract: false, final false
static inline ::System::Object* BigIntegerParse(::StringW  number, ::System::Globalization::CultureInfo*  culture) ;

/// @brief Method BlockCopyChars, addr 0xa37b76c, size 0x14, virtual false, abstract: false, final false
static inline void BlockCopyChars(::ArrayW<char16_t>  src, int32_t  srcOffset, ::ArrayW<char16_t>  dst, int32_t  dstOffset, int32_t  count) ;

/// @brief Method ClearRecentString, addr 0xa37ef7c, size 0xc, virtual false, abstract: false, final false
inline void ClearRecentString() ;

/// @brief Method Close, addr 0xa381198, size 0x80, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method ConvertUnicode, addr 0xa37ec40, size 0x154, virtual false, abstract: false, final false
inline char16_t ConvertUnicode(bool  enoughChars) ;

/// @brief Method CreateUnexpectedCharacterException, addr 0xa37d980, size 0xbc, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonReaderException* CreateUnexpectedCharacterException(char16_t  c) ;

/// @brief Method DoReadAsync, addr 0xa378c68, size 0x208, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* DoReadAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<DoReadAsync>d__3))]
/// @brief Method DoReadAsync, addr 0xa37924c, size 0x13c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* DoReadAsync(::System::Threading::Tasks::Task_1<bool>*  task, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method EatWhitespace, addr 0xa37c540, size 0xf4, virtual false, abstract: false, final false
inline void EatWhitespace() ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<EatWhitespaceAsync>d__17))]
/// @brief Method EatWhitespaceAsync, addr 0xa379d74, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* EatWhitespaceAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method EndComment, addr 0xa380b04, size 0x40, virtual false, abstract: false, final false
inline void EndComment(bool  setToken, int32_t  initialPosition, int32_t  endPosition) ;

/// @brief Method EnsureBuffer, addr 0xa378e70, size 0x60, virtual false, abstract: false, final false
inline void EnsureBuffer() ;

/// @brief Method EnsureBufferNotEmpty, addr 0xa37adf8, size 0x54, virtual false, abstract: false, final false
inline void EnsureBufferNotEmpty() ;

/// @brief Method EnsureChars, addr 0xa37b9d4, size 0x20, virtual false, abstract: false, final false
inline bool EnsureChars(int32_t  relativePosition, bool  append) ;

/// @brief Method EnsureCharsAsync, addr 0xa3797f8, size 0xc8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* EnsureCharsAsync(int32_t  relativePosition, bool  append, ::System::Threading::CancellationToken  cancellationToken) ;

/// [NullableContext(2)]
/// @brief Method FinishReadQuotedNumber, addr 0xa37e654, size 0x190, virtual false, abstract: false, final false
inline ::System::Object* FinishReadQuotedNumber(::Newtonsoft::Json::ReadType  readType) ;

/// [NullableContext(2)]
/// @brief Method FinishReadQuotedStringValue, addr 0xa37dbe8, size 0x240, virtual false, abstract: false, final false
inline ::System::Object* FinishReadQuotedStringValue(::Newtonsoft::Json::ReadType  readType) ;

/// @brief Method FinishReadStringIntoBuffer, addr 0xa37eb9c, size 0xa4, virtual false, abstract: false, final false
inline void FinishReadStringIntoBuffer(int32_t  charPos, int32_t  initialPosition, int32_t  lastWritePosition) ;

/// @brief Method HandleNull, addr 0xa37d84c, size 0xd0, virtual false, abstract: false, final false
inline void HandleNull() ;

/// @brief Method HasLineInfo, addr 0xa381218, size 0x8, virtual true, abstract: false, final true
inline bool HasLineInfo() ;

/// @brief Method IsSeparator, addr 0xa380c78, size 0x148, virtual false, abstract: false, final false
inline bool IsSeparator(char16_t  c) ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<MatchAndSetAsync>d__21))]
/// @brief Method MatchAndSetAsync, addr 0xa37a1f4, size 0x134, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* MatchAndSetAsync(::StringW  value, ::Newtonsoft::Json::JsonToken  newToken, /* [Nullable(2)] */ ::System::Object*  tokenValue, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method MatchValue, addr 0xa380ba0, size 0xd8, virtual false, abstract: false, final false
inline bool MatchValue(bool  enoughChars, ::StringW  value) ;

/// @brief Method MatchValue, addr 0xa380b44, size 0x5c, virtual false, abstract: false, final false
inline bool MatchValue(::StringW  value) ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<MatchValueAsync>d__19))]
/// @brief Method MatchValueAsync, addr 0xa379f7c, size 0x13c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* MatchValueAsync(::StringW  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method MatchValueWithTrailingSeparator, addr 0xa37df10, size 0xa4, virtual false, abstract: false, final false
inline bool MatchValueWithTrailingSeparator(::StringW  value) ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<MatchValueWithTrailingSeparatorAsync>d__20))]
/// @brief Method MatchValueWithTrailingSeparatorAsync, addr 0xa37a0b8, size 0x13c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* MatchValueWithTrailingSeparatorAsync(::StringW  value, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Newtonsoft::Json::JsonTextReader* New_ctor(::System::IO::TextReader*  reader) ;

/// @brief Method OnNewLine, addr 0xa37ae4c, size 0x10, virtual false, abstract: false, final false
inline void OnNewLine(int32_t  pos) ;

/// @brief Method ParseComment, addr 0xa37c634, size 0x294, virtual false, abstract: false, final false
inline void ParseComment(bool  setToken) ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<ParseCommentAsync>d__16))]
/// @brief Method ParseCommentAsync, addr 0xa379c6c, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ParseCommentAsync(bool  setToken, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ParseConstructor, addr 0xa37f5d4, size 0x320, virtual false, abstract: false, final false
inline void ParseConstructor() ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<ParseConstructorAsync>d__25))]
/// @brief Method ParseConstructorAsync, addr 0xa37a4d4, size 0xfc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ParseConstructorAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ParseFalse, addr 0xa37f4fc, size 0xd8, virtual false, abstract: false, final false
inline void ParseFalse() ;

/// @brief Method ParseFalseAsync, addr 0xa37a3c4, size 0x98, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ParseFalseAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ParseNull, addr 0xa37ea60, size 0xac, virtual false, abstract: false, final false
inline void ParseNull() ;

/// @brief Method ParseNullAsync, addr 0xa37a45c, size 0x78, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ParseNullAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ParseNumber, addr 0xa37dea8, size 0x68, virtual false, abstract: false, final false
inline void ParseNumber(::Newtonsoft::Json::ReadType  readType) ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<ParseNumberAsync>d__29))]
/// @brief Method ParseNumberAsync, addr 0xa37a960, size 0x100, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ParseNumberAsync(::Newtonsoft::Json::ReadType  readType, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ParseNumberNaN, addr 0xa37e034, size 0x80, virtual false, abstract: false, final false
inline ::System::Object* ParseNumberNaN(::Newtonsoft::Json::ReadType  readType) ;

/// @brief Method ParseNumberNaN, addr 0xa381050, size 0x148, virtual false, abstract: false, final false
inline ::System::Object* ParseNumberNaN(::Newtonsoft::Json::ReadType  readType, bool  matched) ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<ParseNumberNaNAsync>d__26))]
/// @brief Method ParseNumberNaNAsync, addr 0xa37a5d0, size 0x130, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Object*>* ParseNumberNaNAsync(::Newtonsoft::Json::ReadType  readType, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ParseNumberNegativeInfinity, addr 0xa37de28, size 0x80, virtual false, abstract: false, final false
inline ::System::Object* ParseNumberNegativeInfinity(::Newtonsoft::Json::ReadType  readType) ;

/// @brief Method ParseNumberNegativeInfinity, addr 0xa380dc0, size 0x148, virtual false, abstract: false, final false
inline ::System::Object* ParseNumberNegativeInfinity(::Newtonsoft::Json::ReadType  readType, bool  matched) ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<ParseNumberNegativeInfinityAsync>d__28))]
/// @brief Method ParseNumberNegativeInfinityAsync, addr 0xa37a830, size 0x130, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Object*>* ParseNumberNegativeInfinityAsync(::Newtonsoft::Json::ReadType  readType, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ParseNumberPositiveInfinity, addr 0xa37dfb4, size 0x80, virtual false, abstract: false, final false
inline ::System::Object* ParseNumberPositiveInfinity(::Newtonsoft::Json::ReadType  readType) ;

/// @brief Method ParseNumberPositiveInfinity, addr 0xa380f08, size 0x148, virtual false, abstract: false, final false
inline ::System::Object* ParseNumberPositiveInfinity(::Newtonsoft::Json::ReadType  readType, bool  matched) ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<ParseNumberPositiveInfinityAsync>d__27))]
/// @brief Method ParseNumberPositiveInfinityAsync, addr 0xa37a700, size 0x130, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Object*>* ParseNumberPositiveInfinityAsync(::Newtonsoft::Json::ReadType  readType, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ParseObject, addr 0xa37c128, size 0x170, virtual false, abstract: false, final false
inline bool ParseObject() ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<ParseObjectAsync>d__15))]
/// @brief Method ParseObjectAsync, addr 0xa378ff4, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* ParseObjectAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ParsePostValue, addr 0xa37c298, size 0x2a8, virtual false, abstract: false, final false
inline bool ParsePostValue(bool  ignoreComments) ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<ParsePostValueAsync>d__4))]
/// @brief Method ParsePostValueAsync, addr 0xa379114, size 0x138, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* ParsePostValueAsync(bool  ignoreComments, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ParseProperty, addr 0xa37ef88, size 0x228, virtual false, abstract: false, final false
inline bool ParseProperty() ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<ParsePropertyAsync>d__31))]
/// @brief Method ParsePropertyAsync, addr 0xa37aad8, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* ParsePropertyAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ParseReadNumber, addr 0xa37f9a0, size 0x1070, virtual false, abstract: false, final false
inline void ParseReadNumber(::Newtonsoft::Json::ReadType  readType, char16_t  firstChar, int32_t  initialPosition) ;

/// @brief Method ParseReadString, addr 0xa37b3cc, size 0x3a0, virtual false, abstract: false, final false
inline void ParseReadString(char16_t  quote, ::Newtonsoft::Json::ReadType  readType) ;

/// @brief Method ParseString, addr 0xa37ae5c, size 0x48, virtual false, abstract: false, final false
inline void ParseString(char16_t  quote, ::Newtonsoft::Json::ReadType  readType) ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<ParseStringAsync>d__18))]
/// @brief Method ParseStringAsync, addr 0xa379e6c, size 0x110, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ParseStringAsync(char16_t  quote, ::Newtonsoft::Json::ReadType  readType, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ParseTrue, addr 0xa37f424, size 0xd8, virtual false, abstract: false, final false
inline void ParseTrue() ;

/// @brief Method ParseTrueAsync, addr 0xa37a328, size 0x9c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ParseTrueAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ParseUndefined, addr 0xa37f8f4, size 0xac, virtual false, abstract: false, final false
inline void ParseUndefined() ;

/// @brief Method ParseUndefinedAsync, addr 0xa37aa60, size 0x78, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ParseUndefinedAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ParseUnicode, addr 0xa37eb0c, size 0x40, virtual false, abstract: false, final false
inline char16_t ParseUnicode() ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<ParseUnicodeAsync>d__12))]
/// @brief Method ParseUnicodeAsync, addr 0xa379a14, size 0x11c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<char16_t>* ParseUnicodeAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ParseUnquotedProperty, addr 0xa37f204, size 0xf0, virtual false, abstract: false, final false
inline void ParseUnquotedProperty() ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<ParseUnquotedPropertyAsync>d__33))]
/// @brief Method ParseUnquotedPropertyAsync, addr 0xa37acf0, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ParseUnquotedPropertyAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ParseValue, addr 0xa37bc80, size 0x4a8, virtual false, abstract: false, final false
inline bool ParseValue() ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<ParseValueAsync>d__8))]
/// @brief Method ParseValueAsync, addr 0xa378ed0, size 0x124, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* ParseValueAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method PrepareBufferForReadData, addr 0xa37b818, size 0x1bc, virtual false, abstract: false, final false
inline void PrepareBufferForReadData(bool  append, int32_t  charsRequired) ;

/// @brief Method ProcessCarriageReturn, addr 0xa37da3c, size 0x48, virtual false, abstract: false, final false
inline void ProcessCarriageReturn(bool  append) ;

/// @brief Method ProcessCarriageReturnAsync, addr 0xa3796f8, size 0x100, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ProcessCarriageReturnAsync(bool  append, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<ProcessCarriageReturnAsync>d__11))]
/// @brief Method ProcessCarriageReturnAsync, addr 0xa379920, size 0xf4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ProcessCarriageReturnAsync(::System::Threading::Tasks::Task_1<bool>*  task) ;

/// @brief Method ProcessLineFeed, addr 0xa37da84, size 0x1c, virtual false, abstract: false, final false
inline void ProcessLineFeed() ;

/// @brief Method ProcessValueComma, addr 0xa37d91c, size 0x64, virtual false, abstract: false, final false
inline void ProcessValueComma() ;

/// @brief Method Read, addr 0xa37ba64, size 0x21c, virtual true, abstract: false, final false
inline bool Read() ;

/// @brief Method ReadAsBoolean, addr 0xa37e0b4, size 0x5a0, virtual true, abstract: false, final false
inline ::System::Nullable_1<bool> ReadAsBoolean() ;

/// [NullableContext(2)]
/// @brief Method ReadAsBytes, addr 0xa37d36c, size 0x490, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> ReadAsBytes() ;

/// @brief Method ReadAsDateTime, addr 0xa37cd74, size 0xc4, virtual true, abstract: false, final false
inline ::System::Nullable_1<::System::DateTime> ReadAsDateTime() ;

/// @brief Method ReadAsDateTimeOffset, addr 0xa37e7e4, size 0xdc, virtual true, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> ReadAsDateTimeOffset() ;

/// @brief Method ReadAsDecimal, addr 0xa37e8c0, size 0xdc, virtual true, abstract: false, final false
inline ::System::Nullable_1<::System::Decimal> ReadAsDecimal() ;

/// @brief Method ReadAsDouble, addr 0xa37e99c, size 0xc4, virtual true, abstract: false, final false
inline ::System::Nullable_1<double_t> ReadAsDouble() ;

/// @brief Method ReadAsInt32, addr 0xa37c8c8, size 0xc4, virtual true, abstract: false, final false
inline ::System::Nullable_1<int32_t> ReadAsInt32() ;

/// [NullableContext(2)]
/// @brief Method ReadAsString, addr 0xa37d338, size 0x34, virtual true, abstract: false, final false
inline ::StringW ReadAsString() ;

/// @brief Method ReadAsync, addr 0xa378c58, size 0x10, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* ReadAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadChars, addr 0xa37b9f4, size 0x70, virtual false, abstract: false, final false
inline bool ReadChars(int32_t  relativePosition, bool  append) ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<ReadCharsAsync>d__14))]
/// @brief Method ReadCharsAsync, addr 0xa379b30, size 0x13c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* ReadCharsAsync(int32_t  relativePosition, bool  append, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadData, addr 0xa37b780, size 0x8, virtual false, abstract: false, final false
inline int32_t ReadData(bool  append) ;

/// @brief Method ReadData, addr 0xa37b788, size 0x90, virtual false, abstract: false, final false
inline int32_t ReadData(bool  append, int32_t  charsRequired) ;

/// @brief Method ReadDataAsync, addr 0xa3794a8, size 0xc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadDataAsync(bool  append, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<ReadDataAsync>d__7))]
/// @brief Method ReadDataAsync, addr 0xa3794b4, size 0x13c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadDataAsync(bool  append, int32_t  charsRequired, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadFinished, addr 0xa37daa0, size 0x148, virtual false, abstract: false, final false
inline void ReadFinished() ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<ReadFromFinishedAsync>d__5))]
/// @brief Method ReadFromFinishedAsync, addr 0xa379388, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* ReadFromFinishedAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadNullChar, addr 0xa37d7fc, size 0x50, virtual false, abstract: false, final false
inline bool ReadNullChar() ;

/// @brief Method ReadNumberCharIntoBuffer, addr 0xa37ee18, size 0x164, virtual false, abstract: false, final false
inline bool ReadNumberCharIntoBuffer(char16_t  currentChar, int32_t  charPos) ;

/// @brief Method ReadNumberIntoBuffer, addr 0xa37ed94, size 0x84, virtual false, abstract: false, final false
inline void ReadNumberIntoBuffer() ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<ReadNumberIntoBufferAsync>d__32))]
/// @brief Method ReadNumberIntoBufferAsync, addr 0xa37abf8, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ReadNumberIntoBufferAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// [NullableContext(2)]
/// @brief Method ReadNumberValue, addr 0xa37c98c, size 0x3e8, virtual false, abstract: false, final false
inline ::System::Object* ReadNumberValue(::Newtonsoft::Json::ReadType  readType) ;

/// @brief Method ReadStringIntoBuffer, addr 0xa37af64, size 0x468, virtual false, abstract: false, final false
inline void ReadStringIntoBuffer(char16_t  quote) ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonTextReader::<ReadStringIntoBufferAsync>d__9))]
/// @brief Method ReadStringIntoBufferAsync, addr 0xa3795f0, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ReadStringIntoBufferAsync(char16_t  quote, ::System::Threading::CancellationToken  cancellationToken) ;

/// [NullableContext(2)]
/// @brief Method ReadStringValue, addr 0xa37ce38, size 0x500, virtual false, abstract: false, final false
inline ::System::Object* ReadStringValue(::Newtonsoft::Json::ReadType  readType) ;

/// @brief Method ReadUnquotedPropertyReportIfDone, addr 0xa37f2f4, size 0x130, virtual false, abstract: false, final false
inline bool ReadUnquotedPropertyReportIfDone(char16_t  currentChar, int32_t  initialPosition) ;

/// @brief Method SetNewLine, addr 0xa3798c0, size 0x60, virtual false, abstract: false, final false
inline void SetNewLine(bool  hasNextChar) ;

/// @brief Method ShiftBufferIfNeeded, addr 0xa37aea4, size 0xc0, virtual false, abstract: false, final false
inline void ShiftBufferIfNeeded() ;

/// @brief Method ThrowReaderError, addr 0xa380a10, size 0x6c, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonReaderException* ThrowReaderError(::StringW  message, /* [Nullable(2)] */ ::System::Exception*  ex) ;

/// @brief Method ValidIdentifierChar, addr 0xa37f1b0, size 0x54, virtual false, abstract: false, final false
inline bool ValidIdentifierChar(char16_t  value) ;

/// @brief Method WriteCharToBuffer, addr 0xa37eb4c, size 0x50, virtual false, abstract: false, final false
inline void WriteCharToBuffer(char16_t  writeChar, int32_t  lastWritePosition, int32_t  writeToPosition) ;

constexpr ::Newtonsoft::Json::JsonNameTable* const& __cordl_internal_get__PropertyNameTable_k__BackingField() const;

constexpr ::Newtonsoft::Json::JsonNameTable*& __cordl_internal_get__PropertyNameTable_k__BackingField() ;

constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>* const& __cordl_internal_get__arrayPool() const;

constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>*& __cordl_internal_get__arrayPool() ;

constexpr int32_t const& __cordl_internal_get__charPos() const;

constexpr int32_t& __cordl_internal_get__charPos() ;

constexpr ::ArrayW<char16_t> const& __cordl_internal_get__chars() const;

constexpr ::ArrayW<char16_t>& __cordl_internal_get__chars() ;

constexpr int32_t const& __cordl_internal_get__charsUsed() const;

constexpr int32_t& __cordl_internal_get__charsUsed() ;

constexpr bool const& __cordl_internal_get__isEndOfFile() const;

constexpr bool& __cordl_internal_get__isEndOfFile() ;

constexpr int32_t const& __cordl_internal_get__lineNumber() const;

constexpr int32_t& __cordl_internal_get__lineNumber() ;

constexpr int32_t const& __cordl_internal_get__lineStartPos() const;

constexpr int32_t& __cordl_internal_get__lineStartPos() ;

constexpr ::System::IO::TextReader* const& __cordl_internal_get__reader() const;

constexpr ::System::IO::TextReader*& __cordl_internal_get__reader() ;

constexpr bool const& __cordl_internal_get__safeAsync() const;

constexpr bool& __cordl_internal_get__safeAsync() ;

constexpr ::Newtonsoft::Json::Utilities::StringBuffer const& __cordl_internal_get__stringBuffer() const;

constexpr ::Newtonsoft::Json::Utilities::StringBuffer& __cordl_internal_get__stringBuffer() ;

constexpr ::Newtonsoft::Json::Utilities::StringReference const& __cordl_internal_get__stringReference() const;

constexpr ::Newtonsoft::Json::Utilities::StringReference& __cordl_internal_get__stringReference() ;

constexpr void __cordl_internal_set__PropertyNameTable_k__BackingField(::Newtonsoft::Json::JsonNameTable*  value) ;

constexpr void __cordl_internal_set__arrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>*  value) ;

constexpr void __cordl_internal_set__charPos(int32_t  value) ;

constexpr void __cordl_internal_set__chars(::ArrayW<char16_t>  value) ;

constexpr void __cordl_internal_set__charsUsed(int32_t  value) ;

constexpr void __cordl_internal_set__isEndOfFile(bool  value) ;

constexpr void __cordl_internal_set__lineNumber(int32_t  value) ;

constexpr void __cordl_internal_set__lineStartPos(int32_t  value) ;

constexpr void __cordl_internal_set__reader(::System::IO::TextReader*  value) ;

constexpr void __cordl_internal_set__safeAsync(bool  value) ;

constexpr void __cordl_internal_set__stringBuffer(::Newtonsoft::Json::Utilities::StringBuffer  value) ;

constexpr void __cordl_internal_set__stringReference(::Newtonsoft::Json::Utilities::StringReference  value) ;

/// @brief Method .ctor, addr 0xa36fa10, size 0x104, virtual false, abstract: false, final false
inline void _ctor(::System::IO::TextReader*  reader) ;

/// @brief Method get_LineNumber, addr 0xa381220, size 0x48, virtual true, abstract: false, final true
inline int32_t get_LineNumber() ;

/// @brief Method get_LinePosition, addr 0xa381268, size 0xc, virtual true, abstract: false, final true
inline int32_t get_LinePosition() ;

/// [NullableContext(2)]
/// [CompilerGenerated]
/// @brief Method get_PropertyNameTable, addr 0xa37ade8, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonNameTable* get_PropertyNameTable() ;

/// @brief Convert to "::Newtonsoft::Json::IJsonLineInfo"
constexpr ::Newtonsoft::Json::IJsonLineInfo* i___Newtonsoft__Json__IJsonLineInfo() noexcept;

/// [NullableContext(2)]
/// [CompilerGenerated]
/// @brief Method set_PropertyNameTable, addr 0xa37adf0, size 0x8, virtual false, abstract: false, final false
inline void set_PropertyNameTable(::Newtonsoft::Json::JsonNameTable*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonTextReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonTextReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonTextReader(JsonTextReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonTextReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonTextReader(JsonTextReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23135};

/// @brief Field _safeAsync, offset: 0x82, size: 0x1, def value: None
 bool  ____safeAsync;

/// @brief Field _reader, offset: 0x88, size: 0x8, def value: None
 ::System::IO::TextReader*  ____reader;

/// [Nullable(2)]
/// @brief Field _chars, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<char16_t>  ____chars;

/// @brief Field _charsUsed, offset: 0x98, size: 0x4, def value: None
 int32_t  ____charsUsed;

/// @brief Field _charPos, offset: 0x9c, size: 0x4, def value: None
 int32_t  ____charPos;

/// @brief Field _lineStartPos, offset: 0xa0, size: 0x4, def value: None
 int32_t  ____lineStartPos;

/// @brief Field _lineNumber, offset: 0xa4, size: 0x4, def value: None
 int32_t  ____lineNumber;

/// @brief Field _isEndOfFile, offset: 0xa8, size: 0x1, def value: None
 bool  ____isEndOfFile;

/// @brief Field _stringBuffer, offset: 0xb0, size: 0x10, def value: None
 ::Newtonsoft::Json::Utilities::StringBuffer  ____stringBuffer;

/// @brief Field _stringReference, offset: 0xc0, size: 0x10, def value: None
 ::Newtonsoft::Json::Utilities::StringReference  ____stringReference;

/// [Nullable(2)]
/// @brief Field _arrayPool, offset: 0xd0, size: 0x8, def value: None
 ::Newtonsoft::Json::IArrayPool_1<char16_t>*  ____arrayPool;

/// @brief Size padding 0xd0 - 0xe0 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// [Nullable(2)]
/// [CompilerGenerated]
/// @brief Field <PropertyNameTable>k__BackingField, offset: 0xd8, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonNameTable*  ____PropertyNameTable_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____safeAsync) == 0x82, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____reader) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____chars) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____charsUsed) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____charPos) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____lineStartPos) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____lineNumber) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____isEndOfFile) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____stringBuffer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____stringReference) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____arrayPool) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____PropertyNameTable_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::JsonTextReader) == 0xd0, "Size mismatch!");

} // namespace end def Newtonsoft::Json
