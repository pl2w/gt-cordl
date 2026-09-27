#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__DateFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonPosition_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_State_def.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonWriter)
namespace GlobalNamespace {
struct JsonWriter_State;
}
namespace Newtonsoft::Json::Utilities {
struct PrimitiveTypeCode;
}
namespace Newtonsoft::Json {
struct DateFormatHandling;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace Newtonsoft::Json {
struct FloatFormatHandling;
}
namespace Newtonsoft::Json {
struct Formatting;
}
namespace Newtonsoft::Json {
struct JsonContainerType;
}
namespace Newtonsoft::Json {
struct JsonPosition;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace Newtonsoft::Json {
class JsonWriterException;
}
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace Newtonsoft::Json {
struct WriteState;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Globalization {
class CultureInfo;
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
class IConvertible;
}
namespace System {
class IDisposable;
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
class Uri;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonWriter;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::JsonWriter*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::JsonWriter*, "Newtonsoft.Json", "JsonWriter");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies Newtonsoft.Json.DateFormatHandling, Newtonsoft.Json.DateTimeZoneHandling, Newtonsoft.Json.FloatFormatHandling, Newtonsoft.Json.Formatting, Newtonsoft.Json.JsonPosition, Newtonsoft.Json.JsonWriter::State, Newtonsoft.Json.StringEscapeHandling, System.Object
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonWriter
class CORDL_TYPE JsonWriter : public ::System::Object {
public:
// Declarations
using State = ::GlobalNamespace::JsonWriter_State;

 __declspec(property(get=get_AutoCompleteOnClose, put=set_AutoCompleteOnClose)) bool  AutoCompleteOnClose;

 __declspec(property(get=get_CloseOutput, put=set_CloseOutput)) bool  CloseOutput;

 __declspec(property(get=get_ContainerPath)) ::StringW  ContainerPath;

 __declspec(property(get=get_Culture, put=set_Culture)) ::System::Globalization::CultureInfo*  Culture;

 __declspec(property(get=get_DateFormatHandling, put=set_DateFormatHandling)) ::Newtonsoft::Json::DateFormatHandling  DateFormatHandling;

/// @brief [Nullable(2)]
 __declspec(property(get=get_DateFormatString, put=set_DateFormatString)) ::StringW  DateFormatString;

 __declspec(property(get=get_DateTimeZoneHandling, put=set_DateTimeZoneHandling)) ::Newtonsoft::Json::DateTimeZoneHandling  DateTimeZoneHandling;

 __declspec(property(get=get_FloatFormatHandling, put=set_FloatFormatHandling)) ::Newtonsoft::Json::FloatFormatHandling  FloatFormatHandling;

 __declspec(property(get=get_Formatting, put=set_Formatting)) ::Newtonsoft::Json::Formatting  Formatting;

 __declspec(property(get=get_Path)) ::StringW  Path;

/// @brief Field StateArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_StateArray, put=setStaticF_StateArray)) ::ArrayW<::ArrayW<::GlobalNamespace::JsonWriter_State>>  StateArray;

/// @brief Field StateArrayTemplate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_StateArrayTemplate, put=setStaticF_StateArrayTemplate)) ::ArrayW<::ArrayW<::GlobalNamespace::JsonWriter_State>>  StateArrayTemplate;

 __declspec(property(get=get_StringEscapeHandling, put=set_StringEscapeHandling)) ::Newtonsoft::Json::StringEscapeHandling  StringEscapeHandling;

 __declspec(property(get=get_Top)) int32_t  Top;

 __declspec(property(get=get_WriteState)) ::Newtonsoft::Json::WriteState  WriteState;

/// @brief Field <AutoCompleteOnClose>k__BackingField, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__AutoCompleteOnClose_k__BackingField, put=__cordl_internal_set__AutoCompleteOnClose_k__BackingField)) bool  _AutoCompleteOnClose_k__BackingField;

/// @brief Field <CloseOutput>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__CloseOutput_k__BackingField, put=__cordl_internal_set__CloseOutput_k__BackingField)) bool  _CloseOutput_k__BackingField;

/// @brief Field _culture, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__culture, put=__cordl_internal_set__culture)) ::System::Globalization::CultureInfo*  _culture;

/// @brief Field _currentPosition, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get__currentPosition, put=__cordl_internal_set__currentPosition)) ::Newtonsoft::Json::JsonPosition  _currentPosition;

/// @brief Field _currentState, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentState, put=__cordl_internal_set__currentState)) ::GlobalNamespace::JsonWriter_State  _currentState;

/// @brief Field _dateFormatHandling, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__dateFormatHandling, put=__cordl_internal_set__dateFormatHandling)) ::Newtonsoft::Json::DateFormatHandling  _dateFormatHandling;

/// @brief Field _dateFormatString, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__dateFormatString, put=__cordl_internal_set__dateFormatString)) ::StringW  _dateFormatString;

/// @brief Field _dateTimeZoneHandling, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__dateTimeZoneHandling, put=__cordl_internal_set__dateTimeZoneHandling)) ::Newtonsoft::Json::DateTimeZoneHandling  _dateTimeZoneHandling;

/// @brief Field _floatFormatHandling, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__floatFormatHandling, put=__cordl_internal_set__floatFormatHandling)) ::Newtonsoft::Json::FloatFormatHandling  _floatFormatHandling;

/// @brief Field _formatting, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__formatting, put=__cordl_internal_set__formatting)) ::Newtonsoft::Json::Formatting  _formatting;

/// @brief Field _stack, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__stack, put=__cordl_internal_set__stack)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*  _stack;

/// @brief Field _stringEscapeHandling, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__stringEscapeHandling, put=__cordl_internal_set__stringEscapeHandling)) ::Newtonsoft::Json::StringEscapeHandling  _stringEscapeHandling;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AutoComplete, addr 0xa38de00, size 0x20c, virtual false, abstract: false, final false
inline void AutoComplete(::Newtonsoft::Json::JsonToken  tokenBeingWritten) ;

/// @brief Method AutoCompleteAll, addr 0xa38ce5c, size 0x40, virtual false, abstract: false, final false
inline void AutoCompleteAll() ;

/// @brief Method AutoCompleteClose, addr 0xa38db94, size 0xbc, virtual false, abstract: false, final false
inline void AutoCompleteClose(::Newtonsoft::Json::JsonContainerType  type) ;

/// @brief Method BuildStateArray, addr 0xa38c1b0, size 0x27c, virtual false, abstract: false, final false
static inline ::ArrayW<::ArrayW<::GlobalNamespace::JsonWriter_State>> BuildStateArray() ;

/// @brief Method CalculateLevelsToComplete, addr 0xa38dc50, size 0xf4, virtual false, abstract: false, final false
inline int32_t CalculateLevelsToComplete(::Newtonsoft::Json::JsonContainerType  type) ;

/// @brief Method CalculateWriteTokenFinalDepth, addr 0xa38da9c, size 0x60, virtual false, abstract: false, final false
inline int32_t CalculateWriteTokenFinalDepth(::Newtonsoft::Json::JsonReader*  reader) ;

/// @brief Method CalculateWriteTokenInitialDepth, addr 0xa38d904, size 0x64, virtual false, abstract: false, final false
inline int32_t CalculateWriteTokenInitialDepth(::Newtonsoft::Json::JsonReader*  reader) ;

/// @brief Method Close, addr 0xa389dec, size 0x10, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method CreateUnsupportedTypeException, addr 0xa38ec14, size 0xb4, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::JsonWriterException* CreateUnsupportedTypeException(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value) ;

/// @brief Method Dispose, addr 0xa38fd24, size 0x20, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method GetCloseTokenForType, addr 0xa38dafc, size 0x98, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonToken GetCloseTokenForType(::Newtonsoft::Json::JsonContainerType  type) ;

/// @brief Method InternalWriteComment, addr 0xa38bfc4, size 0x8, virtual false, abstract: false, final false
inline void InternalWriteComment() ;

/// @brief Method InternalWriteEnd, addr 0xa38ceb0, size 0x4, virtual false, abstract: false, final false
inline void InternalWriteEnd(::Newtonsoft::Json::JsonContainerType  container) ;

/// @brief Method InternalWritePropertyName, addr 0xa38a134, size 0x20, virtual false, abstract: false, final false
inline void InternalWritePropertyName(::StringW  name) ;

/// @brief Method InternalWriteRaw, addr 0xa38a96c, size 0x4, virtual false, abstract: false, final false
inline void InternalWriteRaw() ;

/// @brief Method InternalWriteStart, addr 0xa389e98, size 0x40, virtual false, abstract: false, final false
inline void InternalWriteStart(::Newtonsoft::Json::JsonToken  token, ::Newtonsoft::Json::JsonContainerType  container) ;

/// @brief Method InternalWriteValue, addr 0xa38a6dc, size 0x18, virtual false, abstract: false, final false
inline void InternalWriteValue(::Newtonsoft::Json::JsonToken  token) ;

/// @brief Method IsWriteTokenIncomplete, addr 0xa38da30, size 0x6c, virtual false, abstract: false, final false
inline bool IsWriteTokenIncomplete(::Newtonsoft::Json::JsonReader*  reader, bool  writeChildren, int32_t  initialDepth) ;

static inline ::Newtonsoft::Json::JsonWriter* New_ctor() ;

/// @brief Method OnStringEscapeHandlingChanged, addr 0xa38cb54, size 0x4, virtual true, abstract: false, final false
inline void OnStringEscapeHandlingChanged() ;

/// @brief Method Peek, addr 0xa38c76c, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonContainerType Peek() ;

/// @brief Method Pop, addr 0xa38cd84, size 0xd8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonContainerType Pop() ;

/// @brief Method Push, addr 0xa38cbec, size 0x198, virtual false, abstract: false, final false
inline void Push(::Newtonsoft::Json::JsonContainerType  value) ;

/// @brief Method ResolveConvertibleValue, addr 0xa38fd44, size 0x17c, virtual false, abstract: false, final false
static inline void ResolveConvertibleValue(::System::IConvertible*  convertible, ::by_ref<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>  typeCode, ::by_ref<::System::Object*>  value) ;

/// @brief Method SetWriteState, addr 0xa38ffac, size 0x1d4, virtual false, abstract: false, final false
inline void SetWriteState(::Newtonsoft::Json::JsonToken  token, ::System::Object*  value) ;

/// @brief Method System.IDisposable.Dispose, addr 0xa38fcb4, size 0x70, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method UpdateCurrentState, addr 0xa38dd44, size 0xac, virtual false, abstract: false, final false
inline void UpdateCurrentState() ;

/// @brief Method UpdateScopeWithFinishedValue, addr 0xa38cbd4, size 0x18, virtual false, abstract: false, final false
inline void UpdateScopeWithFinishedValue() ;

/// [NullableContext(2)]
/// @brief Method WriteComment, addr 0xa38fcac, size 0x8, virtual true, abstract: false, final false
inline void WriteComment(::StringW  text) ;

/// @brief Method WriteConstructorDate, addr 0xa38d968, size 0xc8, virtual false, abstract: false, final false
inline void WriteConstructorDate(::Newtonsoft::Json::JsonReader*  reader) ;

/// @brief Method WriteEnd, addr 0xa38cf0c, size 0x8, virtual true, abstract: false, final false
inline void WriteEnd() ;

/// @brief Method WriteEnd, addr 0xa38ddf0, size 0x4, virtual true, abstract: false, final false
inline void WriteEnd(::Newtonsoft::Json::JsonToken  token) ;

/// @brief Method WriteEnd, addr 0xa38cf14, size 0xd4, virtual false, abstract: false, final false
inline void WriteEnd(::Newtonsoft::Json::JsonContainerType  type) ;

/// @brief Method WriteEndArray, addr 0xa38cec0, size 0x8, virtual true, abstract: false, final false
inline void WriteEndArray() ;

/// @brief Method WriteEndConstructor, addr 0xa38ced4, size 0x8, virtual true, abstract: false, final false
inline void WriteEndConstructor() ;

/// @brief Method WriteEndObject, addr 0xa38cea8, size 0x8, virtual true, abstract: false, final false
inline void WriteEndObject() ;

/// @brief Method WriteIndent, addr 0xa38ddf4, size 0x4, virtual true, abstract: false, final false
inline void WriteIndent() ;

/// @brief Method WriteIndentSpace, addr 0xa38ddfc, size 0x4, virtual true, abstract: false, final false
inline void WriteIndentSpace() ;

/// @brief Method WriteNull, addr 0xa38e00c, size 0x1c, virtual true, abstract: false, final false
inline void WriteNull() ;

/// @brief Method WritePropertyName, addr 0xa38cedc, size 0x20, virtual true, abstract: false, final false
inline void WritePropertyName(::StringW  name) ;

/// @brief Method WritePropertyName, addr 0xa38cefc, size 0x10, virtual true, abstract: false, final false
inline void WritePropertyName(::StringW  name, bool  escape) ;

/// [NullableContext(2)]
/// @brief Method WriteRaw, addr 0xa38e044, size 0x4, virtual true, abstract: false, final false
inline void WriteRaw(::StringW  json) ;

/// [NullableContext(2)]
/// @brief Method WriteRawValue, addr 0xa38e048, size 0x50, virtual true, abstract: false, final false
inline void WriteRawValue(::StringW  json) ;

/// @brief Method WriteStartArray, addr 0xa38ceb4, size 0xc, virtual true, abstract: false, final false
inline void WriteStartArray() ;

/// @brief Method WriteStartConstructor, addr 0xa38cec8, size 0xc, virtual true, abstract: false, final false
inline void WriteStartConstructor(::StringW  name) ;

/// @brief Method WriteStartObject, addr 0xa38ce9c, size 0xc, virtual true, abstract: false, final false
inline void WriteStartObject() ;

/// @brief Method WriteToken, addr 0xa38cfe8, size 0x8, virtual false, abstract: false, final false
inline void WriteToken(::Newtonsoft::Json::JsonReader*  reader) ;

/// @brief Method WriteToken, addr 0xa38cff0, size 0x80, virtual false, abstract: false, final false
inline void WriteToken(::Newtonsoft::Json::JsonReader*  reader, bool  writeChildren) ;

/// @brief Method WriteToken, addr 0xa38d724, size 0x1e0, virtual true, abstract: false, final false
inline void WriteToken(::Newtonsoft::Json::JsonReader*  reader, bool  writeChildren, bool  writeDateConstructorAsDate, bool  writeComments) ;

/// [NullableContext(2)]
/// @brief Method WriteToken, addr 0xa38d070, size 0x6b4, virtual false, abstract: false, final false
inline void WriteToken(::Newtonsoft::Json::JsonToken  token, ::System::Object*  value) ;

/// @brief Method WriteUndefined, addr 0xa38e028, size 0x1c, virtual true, abstract: false, final false
inline void WriteUndefined() ;

/// [NullableContext(2)]
/// @brief Method WriteValue, addr 0xa38eb38, size 0x30, virtual true, abstract: false, final false
inline void WriteValue(::ArrayW<uint8_t>  value) ;

/// [NullableContext(2)]
/// @brief Method WriteValue, addr 0xa38e098, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(::StringW  value) ;

/// @brief Method WriteValue, addr 0xa38e220, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(::System::DateTime  value) ;

/// @brief Method WriteValue, addr 0xa38e23c, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(::System::DateTimeOffset  value) ;

/// @brief Method WriteValue, addr 0xa38e204, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(::System::Decimal  value) ;

/// @brief Method WriteValue, addr 0xa38e258, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(::System::Guid  value) ;

/// @brief Method WriteValue, addr 0xa38e91c, size 0x8c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::DateTime>  value) ;

/// @brief Method WriteValue, addr 0xa38e9a8, size 0x80, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::DateTimeOffset>  value) ;

/// @brief Method WriteValue, addr 0xa38e89c, size 0x80, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::Decimal>  value) ;

/// @brief Method WriteValue, addr 0xa38ea28, size 0x84, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::Guid>  value) ;

/// @brief Method WriteValue, addr 0xa38eaac, size 0x8c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::TimeSpan>  value) ;

/// @brief Method WriteValue, addr 0xa38e5ac, size 0x84, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<bool>  value) ;

/// @brief Method WriteValue, addr 0xa38e728, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<char16_t>  value) ;

/// @brief Method WriteValue, addr 0xa38e520, size 0x8c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<double_t>  value) ;

/// @brief Method WriteValue, addr 0xa38e4a0, size 0x80, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<float_t>  value) ;

/// @brief Method WriteValue, addr 0xa38e630, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<int16_t>  value) ;

/// @brief Method WriteValue, addr 0xa38e290, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<int32_t>  value) ;

/// @brief Method WriteValue, addr 0xa38e388, size 0x8c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<int64_t>  value) ;

/// [CLSCompliant(false)]
/// @brief Method WriteValue, addr 0xa38e820, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<int8_t>  value) ;

/// [CLSCompliant(false)]
/// @brief Method WriteValue, addr 0xa38e6ac, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<uint16_t>  value) ;

/// [CLSCompliant(false)]
/// @brief Method WriteValue, addr 0xa38e30c, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<uint32_t>  value) ;

/// [CLSCompliant(false)]
/// @brief Method WriteValue, addr 0xa38e414, size 0x8c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<uint64_t>  value) ;

/// @brief Method WriteValue, addr 0xa38e7a4, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<uint8_t>  value) ;

/// [NullableContext(2)]
/// @brief Method WriteValue, addr 0xa38a6f4, size 0x130, virtual true, abstract: false, final false
inline void WriteValue(::System::Object*  value) ;

/// @brief Method WriteValue, addr 0xa38e274, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(::System::TimeSpan  value) ;

/// [NullableContext(2)]
/// @brief Method WriteValue, addr 0xa38eb68, size 0xac, virtual true, abstract: false, final false
inline void WriteValue(::System::Uri*  value) ;

/// @brief Method WriteValue, addr 0xa38e15c, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(bool  value) ;

/// @brief Method WriteValue, addr 0xa38e1b0, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(char16_t  value) ;

/// @brief Method WriteValue, addr 0xa38e140, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(double_t  value) ;

/// @brief Method WriteValue, addr 0xa38e124, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(float_t  value) ;

/// @brief Method WriteValue, addr 0xa38e178, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(int16_t  value) ;

/// @brief Method WriteValue, addr 0xa38e0b4, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(int32_t  value) ;

/// @brief Method WriteValue, addr 0xa38e0ec, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method WriteValue, addr 0xa38e1e8, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(int8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method WriteValue, addr 0xa38e194, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(uint16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method WriteValue, addr 0xa38e0d0, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method WriteValue, addr 0xa38e108, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(uint64_t  value) ;

/// @brief Method WriteValue, addr 0xa38e1cc, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(uint8_t  value) ;

/// @brief Method WriteValue, addr 0xa38ed30, size 0xf7c, virtual false, abstract: false, final false
static inline void WriteValue(::Newtonsoft::Json::JsonWriter*  writer, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  typeCode, ::System::Object*  value) ;

/// @brief Method WriteValueDelimiter, addr 0xa38ddf8, size 0x4, virtual true, abstract: false, final false
inline void WriteValueDelimiter() ;

constexpr bool const& __cordl_internal_get__AutoCompleteOnClose_k__BackingField() const;

constexpr bool& __cordl_internal_get__AutoCompleteOnClose_k__BackingField() ;

constexpr bool const& __cordl_internal_get__CloseOutput_k__BackingField() const;

constexpr bool& __cordl_internal_get__CloseOutput_k__BackingField() ;

constexpr ::System::Globalization::CultureInfo* const& __cordl_internal_get__culture() const;

constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__culture() ;

constexpr ::Newtonsoft::Json::JsonPosition const& __cordl_internal_get__currentPosition() const;

constexpr ::Newtonsoft::Json::JsonPosition& __cordl_internal_get__currentPosition() ;

constexpr ::GlobalNamespace::JsonWriter_State const& __cordl_internal_get__currentState() const;

constexpr ::GlobalNamespace::JsonWriter_State& __cordl_internal_get__currentState() ;

constexpr ::Newtonsoft::Json::DateFormatHandling const& __cordl_internal_get__dateFormatHandling() const;

constexpr ::Newtonsoft::Json::DateFormatHandling& __cordl_internal_get__dateFormatHandling() ;

constexpr ::StringW const& __cordl_internal_get__dateFormatString() const;

constexpr ::StringW& __cordl_internal_get__dateFormatString() ;

constexpr ::Newtonsoft::Json::DateTimeZoneHandling const& __cordl_internal_get__dateTimeZoneHandling() const;

constexpr ::Newtonsoft::Json::DateTimeZoneHandling& __cordl_internal_get__dateTimeZoneHandling() ;

constexpr ::Newtonsoft::Json::FloatFormatHandling const& __cordl_internal_get__floatFormatHandling() const;

constexpr ::Newtonsoft::Json::FloatFormatHandling& __cordl_internal_get__floatFormatHandling() ;

constexpr ::Newtonsoft::Json::Formatting const& __cordl_internal_get__formatting() const;

constexpr ::Newtonsoft::Json::Formatting& __cordl_internal_get__formatting() ;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* const& __cordl_internal_get__stack() const;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*& __cordl_internal_get__stack() ;

constexpr ::Newtonsoft::Json::StringEscapeHandling const& __cordl_internal_get__stringEscapeHandling() const;

constexpr ::Newtonsoft::Json::StringEscapeHandling& __cordl_internal_get__stringEscapeHandling() ;

constexpr void __cordl_internal_set__AutoCompleteOnClose_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__CloseOutput_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__culture(::System::Globalization::CultureInfo*  value) ;

constexpr void __cordl_internal_set__currentPosition(::Newtonsoft::Json::JsonPosition  value) ;

constexpr void __cordl_internal_set__currentState(::GlobalNamespace::JsonWriter_State  value) ;

constexpr void __cordl_internal_set__dateFormatHandling(::Newtonsoft::Json::DateFormatHandling  value) ;

constexpr void __cordl_internal_set__dateFormatString(::StringW  value) ;

constexpr void __cordl_internal_set__dateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling  value) ;

constexpr void __cordl_internal_set__floatFormatHandling(::Newtonsoft::Json::FloatFormatHandling  value) ;

constexpr void __cordl_internal_set__formatting(::Newtonsoft::Json::Formatting  value) ;

constexpr void __cordl_internal_set__stack(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*  value) ;

constexpr void __cordl_internal_set__stringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling  value) ;

/// @brief Method .ctor, addr 0xa389d28, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::ArrayW<::GlobalNamespace::JsonWriter_State>> getStaticF_StateArray() ;

static inline ::ArrayW<::ArrayW<::GlobalNamespace::JsonWriter_State>> getStaticF_StateArrayTemplate() ;

/// [CompilerGenerated]
/// @brief Method get_AutoCompleteOnClose, addr 0xa38c75c, size 0x8, virtual false, abstract: false, final false
inline bool get_AutoCompleteOnClose() ;

/// [CompilerGenerated]
/// @brief Method get_CloseOutput, addr 0xa38c74c, size 0x8, virtual false, abstract: false, final false
inline bool get_CloseOutput() ;

/// @brief Method get_ContainerPath, addr 0xa38c814, size 0x98, virtual false, abstract: false, final false
inline ::StringW get_ContainerPath() ;

/// @brief Method get_Culture, addr 0xa38b5b8, size 0x68, virtual false, abstract: false, final false
inline ::System::Globalization::CultureInfo* get_Culture() ;

/// @brief Method get_DateFormatHandling, addr 0xa38ca1c, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::DateFormatHandling get_DateFormatHandling() ;

/// [NullableContext(2)]
/// @brief Method get_DateFormatString, addr 0xa38cbbc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DateFormatString() ;

/// @brief Method get_DateTimeZoneHandling, addr 0xa38ca80, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling() ;

/// @brief Method get_FloatFormatHandling, addr 0xa38cb58, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::FloatFormatHandling get_FloatFormatHandling() ;

/// @brief Method get_Formatting, addr 0xa38c9b8, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Formatting get_Formatting() ;

/// @brief Method get_Path, addr 0xa38c8ac, size 0x10c, virtual false, abstract: false, final false
inline ::StringW get_Path() ;

/// @brief Method get_StringEscapeHandling, addr 0xa38cae4, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::StringEscapeHandling get_StringEscapeHandling() ;

/// @brief Method get_Top, addr 0xa38a408, size 0x50, virtual false, abstract: false, final false
inline int32_t get_Top() ;

/// @brief Method get_WriteState, addr 0xa38c774, size 0xa0, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::WriteState get_WriteState() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_StateArray(::ArrayW<::ArrayW<::GlobalNamespace::JsonWriter_State>>  value) ;

static inline void setStaticF_StateArrayTemplate(::ArrayW<::ArrayW<::GlobalNamespace::JsonWriter_State>>  value) ;

/// [CompilerGenerated]
/// @brief Method set_AutoCompleteOnClose, addr 0xa38c764, size 0x8, virtual false, abstract: false, final false
inline void set_AutoCompleteOnClose(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_CloseOutput, addr 0xa38c754, size 0x8, virtual false, abstract: false, final false
inline void set_CloseOutput(bool  value) ;

/// @brief Method set_Culture, addr 0xa38cbcc, size 0x8, virtual false, abstract: false, final false
inline void set_Culture(::System::Globalization::CultureInfo*  value) ;

/// @brief Method set_DateFormatHandling, addr 0xa38ca24, size 0x5c, virtual false, abstract: false, final false
inline void set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling  value) ;

/// [NullableContext(2)]
/// @brief Method set_DateFormatString, addr 0xa38cbc4, size 0x8, virtual false, abstract: false, final false
inline void set_DateFormatString(::StringW  value) ;

/// @brief Method set_DateTimeZoneHandling, addr 0xa38ca88, size 0x5c, virtual false, abstract: false, final false
inline void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling  value) ;

/// @brief Method set_FloatFormatHandling, addr 0xa38cb60, size 0x5c, virtual false, abstract: false, final false
inline void set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling  value) ;

/// @brief Method set_Formatting, addr 0xa38c9c0, size 0x5c, virtual false, abstract: false, final false
inline void set_Formatting(::Newtonsoft::Json::Formatting  value) ;

/// @brief Method set_StringEscapeHandling, addr 0xa38caec, size 0x68, virtual false, abstract: false, final false
inline void set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonWriter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonWriter(JsonWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonWriter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonWriter(JsonWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23140};

/// [Nullable(2)]
/// @brief Field _stack, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*  ____stack;

/// @brief Field _currentPosition, offset: 0x18, size: 0x18, def value: None
 ::Newtonsoft::Json::JsonPosition  ____currentPosition;

/// @brief Field _currentState, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::JsonWriter_State  ____currentState;

/// @brief Field _formatting, offset: 0x34, size: 0x4, def value: None
 ::Newtonsoft::Json::Formatting  ____formatting;

/// [CompilerGenerated]
/// @brief Field <CloseOutput>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____CloseOutput_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AutoCompleteOnClose>k__BackingField, offset: 0x39, size: 0x1, def value: None
 bool  ____AutoCompleteOnClose_k__BackingField;

/// @brief Field _dateFormatHandling, offset: 0x3c, size: 0x4, def value: None
 ::Newtonsoft::Json::DateFormatHandling  ____dateFormatHandling;

/// @brief Field _dateTimeZoneHandling, offset: 0x40, size: 0x4, def value: None
 ::Newtonsoft::Json::DateTimeZoneHandling  ____dateTimeZoneHandling;

/// @brief Field _stringEscapeHandling, offset: 0x44, size: 0x4, def value: None
 ::Newtonsoft::Json::StringEscapeHandling  ____stringEscapeHandling;

/// @brief Field _floatFormatHandling, offset: 0x48, size: 0x4, def value: None
 ::Newtonsoft::Json::FloatFormatHandling  ____floatFormatHandling;

/// [Nullable(2)]
/// @brief Field _dateFormatString, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____dateFormatString;

/// [Nullable(2)]
/// @brief Field _culture, offset: 0x58, size: 0x8, def value: None
 ::System::Globalization::CultureInfo*  ____culture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____stack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____currentPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____currentState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____formatting) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____CloseOutput_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____AutoCompleteOnClose_k__BackingField) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____dateFormatHandling) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____dateTimeZoneHandling) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____stringEscapeHandling) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____floatFormatHandling) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____dateFormatString) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____culture) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::JsonWriter) == 0x60, "Size mismatch!");

} // namespace end def Newtonsoft::Json
