#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__DateParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonPosition_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_State_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonReader)
namespace GlobalNamespace {
struct JsonReader_State;
}
namespace GlobalNamespace {
struct JsonReader__MoveToContentFromNonContentAsync_d__14;
}
namespace GlobalNamespace {
struct JsonReader__ReadAndMoveToContentAsync_d__12;
}
namespace GlobalNamespace {
struct JsonReader__SkipAsync_d__1;
}
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace Newtonsoft::Json {
struct DateParseHandling;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace Newtonsoft::Json {
struct FloatParseHandling;
}
namespace Newtonsoft::Json {
struct JsonContainerType;
}
namespace Newtonsoft::Json {
struct JsonPosition;
}
namespace Newtonsoft::Json {
class JsonReaderException;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Globalization {
class CultureInfo;
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
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonReader;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::JsonReader*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::JsonReader*, "Newtonsoft.Json", "JsonReader");
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies Newtonsoft.Json.DateParseHandling, Newtonsoft.Json.DateTimeZoneHandling, Newtonsoft.Json.FloatParseHandling, Newtonsoft.Json.JsonPosition, Newtonsoft.Json.JsonReader::State, Newtonsoft.Json.JsonToken, System.Nullable`1<T>, System.Object
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonReader
class CORDL_TYPE JsonReader : public ::System::Object {
public:
// Declarations
using State = ::GlobalNamespace::JsonReader_State;

using _MoveToContentFromNonContentAsync_d__14 = ::GlobalNamespace::JsonReader__MoveToContentFromNonContentAsync_d__14;

using _ReadAndMoveToContentAsync_d__12 = ::GlobalNamespace::JsonReader__ReadAndMoveToContentAsync_d__12;

using _SkipAsync_d__1 = ::GlobalNamespace::JsonReader__SkipAsync_d__1;

 __declspec(property(get=get_CloseInput, put=set_CloseInput)) bool  CloseInput;

/// @brief [Nullable(1)]
 __declspec(property(get=get_Culture, put=set_Culture)) ::System::Globalization::CultureInfo*  Culture;

 __declspec(property(get=get_CurrentState)) ::GlobalNamespace::JsonReader_State  CurrentState;

 __declspec(property(get=get_DateFormatString, put=set_DateFormatString)) ::StringW  DateFormatString;

 __declspec(property(get=get_DateParseHandling, put=set_DateParseHandling)) ::Newtonsoft::Json::DateParseHandling  DateParseHandling;

 __declspec(property(get=get_DateTimeZoneHandling, put=set_DateTimeZoneHandling)) ::Newtonsoft::Json::DateTimeZoneHandling  DateTimeZoneHandling;

 __declspec(property(get=get_Depth)) int32_t  Depth;

 __declspec(property(get=get_FloatParseHandling, put=set_FloatParseHandling)) ::Newtonsoft::Json::FloatParseHandling  FloatParseHandling;

 __declspec(property(get=get_MaxDepth, put=set_MaxDepth)) ::System::Nullable_1<int32_t>  MaxDepth;

/// @brief [Nullable(1)]
 __declspec(property(get=get_Path)) ::StringW  Path;

 __declspec(property(get=get_SupportMultipleContent, put=set_SupportMultipleContent)) bool  SupportMultipleContent;

 __declspec(property(get=get_TokenType)) ::Newtonsoft::Json::JsonToken  TokenType;

 __declspec(property(get=get_Value)) ::System::Object*  Value;

 __declspec(property(get=get_ValueType)) ::System::Type*  ValueType;

/// @brief Field <CloseInput>k__BackingField, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__CloseInput_k__BackingField, put=__cordl_internal_set__CloseInput_k__BackingField)) bool  _CloseInput_k__BackingField;

/// @brief Field <SupportMultipleContent>k__BackingField, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get__SupportMultipleContent_k__BackingField, put=__cordl_internal_set__SupportMultipleContent_k__BackingField)) bool  _SupportMultipleContent_k__BackingField;

/// @brief Field _culture, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__culture, put=__cordl_internal_set__culture)) ::System::Globalization::CultureInfo*  _culture;

/// @brief Field _currentPosition, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get__currentPosition, put=__cordl_internal_set__currentPosition)) ::Newtonsoft::Json::JsonPosition  _currentPosition;

/// @brief Field _currentState, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentState, put=__cordl_internal_set__currentState)) ::GlobalNamespace::JsonReader_State  _currentState;

/// @brief Field _dateFormatString, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__dateFormatString, put=__cordl_internal_set__dateFormatString)) ::StringW  _dateFormatString;

/// @brief Field _dateParseHandling, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__dateParseHandling, put=__cordl_internal_set__dateParseHandling)) ::Newtonsoft::Json::DateParseHandling  _dateParseHandling;

/// @brief Field _dateTimeZoneHandling, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__dateTimeZoneHandling, put=__cordl_internal_set__dateTimeZoneHandling)) ::Newtonsoft::Json::DateTimeZoneHandling  _dateTimeZoneHandling;

/// @brief Field _floatParseHandling, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__floatParseHandling, put=__cordl_internal_set__floatParseHandling)) ::Newtonsoft::Json::FloatParseHandling  _floatParseHandling;

/// @brief Field _hasExceededMaxDepth, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasExceededMaxDepth, put=__cordl_internal_set__hasExceededMaxDepth)) bool  _hasExceededMaxDepth;

/// @brief Field _maxDepth, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__maxDepth, put=__cordl_internal_set__maxDepth)) ::System::Nullable_1<int32_t>  _maxDepth;

/// @brief Field _quoteChar, offset 0x20, size 0x2 
 __declspec(property(get=__cordl_internal_get__quoteChar, put=__cordl_internal_set__quoteChar)) char16_t  _quoteChar;

/// @brief Field _stack, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__stack, put=__cordl_internal_set__stack)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*  _stack;

/// @brief Field _tokenType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__tokenType, put=__cordl_internal_set__tokenType)) ::Newtonsoft::Json::JsonToken  _tokenType;

/// @brief Field _value, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) ::System::Object*  _value;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Close, addr 0xa3749e4, size 0x18, virtual true, abstract: false, final false
inline void Close() ;

/// [NullableContext(1)]
/// @brief Method CreateUnexpectedEndException, addr 0xa37456c, size 0x4c, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonReaderException* CreateUnexpectedEndException() ;

/// @brief Method Dispose, addr 0xa3749c0, size 0x24, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method GetContentToken, addr 0xa371b98, size 0x58, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonToken GetContentToken() ;

/// @brief Method GetPosition, addr 0xa3712cc, size 0xa4, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonPosition GetPosition(int32_t  depth) ;

/// @brief Method GetTypeForCloseToken, addr 0xa3747b4, size 0xa8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonContainerType GetTypeForCloseToken(::Newtonsoft::Json::JsonToken  token) ;

/// @brief Method MoveToContent, addr 0xa374ddc, size 0x4c, virtual false, abstract: false, final false
inline bool MoveToContent() ;

/// [NullableContext(1)]
/// @brief Method MoveToContentAsync, addr 0xa370ce4, size 0x90, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* MoveToContentAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// [NullableContext(1)]
/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonReader::<MoveToContentFromNonContentAsync>d__14))]
/// @brief Method MoveToContentFromNonContentAsync, addr 0xa370d74, size 0x11c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* MoveToContentFromNonContentAsync(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Newtonsoft::Json::JsonReader* New_ctor() ;

/// @brief Method Peek, addr 0xa3717fc, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonContainerType Peek() ;

/// @brief Method Pop, addr 0xa3716d8, size 0x124, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonContainerType Pop() ;

/// @brief Method Push, addr 0xa371400, size 0x2b8, virtual false, abstract: false, final false
inline void Push(::Newtonsoft::Json::JsonContainerType  value) ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Read() ;

/// @brief Method ReadAndAssert, addr 0xa3749fc, size 0x54, virtual false, abstract: false, final false
inline void ReadAndAssert() ;

/// @brief Method ReadAndMoveToContent, addr 0xa374dac, size 0x30, virtual false, abstract: false, final false
inline bool ReadAndMoveToContent() ;

/// [NullableContext(1)]
/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonReader::<ReadAndMoveToContentAsync>d__12))]
/// @brief Method ReadAndMoveToContentAsync, addr 0xa370bc8, size 0x11c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* ReadAndMoveToContentAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// [NullableContext(1)]
/// @brief Method ReadArrayElementIntoByteArrayReportDone, addr 0xa372938, size 0x208, virtual false, abstract: false, final false
inline bool ReadArrayElementIntoByteArrayReportDone(::System::Collections::Generic::List_1<uint8_t>*  buffer) ;

/// [NullableContext(1)]
/// @brief Method ReadArrayIntoByteArray, addr 0xa37281c, size 0x110, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ReadArrayIntoByteArray() ;

/// @brief Method ReadAsBoolean, addr 0xa372fb4, size 0x318, virtual true, abstract: false, final false
inline ::System::Nullable_1<bool> ReadAsBoolean() ;

/// @brief Method ReadAsBytes, addr 0xa37224c, size 0x3c0, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> ReadAsBytes() ;

/// @brief Method ReadAsDateTime, addr 0xa373b94, size 0x284, virtual true, abstract: false, final false
inline ::System::Nullable_1<::System::DateTime> ReadAsDateTime() ;

/// @brief Method ReadAsDateTimeOffset, addr 0xa3740a8, size 0x27c, virtual true, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> ReadAsDateTimeOffset() ;

/// @brief Method ReadAsDecimal, addr 0xa37347c, size 0x480, virtual true, abstract: false, final false
inline ::System::Nullable_1<::System::Decimal> ReadAsDecimal() ;

/// @brief Method ReadAsDouble, addr 0xa372b40, size 0x2cc, virtual true, abstract: false, final false
inline ::System::Nullable_1<double_t> ReadAsDouble() ;

/// @brief Method ReadAsInt32, addr 0xa371804, size 0x394, virtual true, abstract: false, final false
inline ::System::Nullable_1<int32_t> ReadAsInt32() ;

/// @brief Method ReadAsString, addr 0xa371fc8, size 0x284, virtual true, abstract: false, final false
inline ::StringW ReadAsString() ;

/// [NullableContext(1)]
/// @brief Method ReadAsync, addr 0xa370a10, size 0xc0, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* ReadAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadBooleanString, addr 0xa3732cc, size 0x1b0, virtual false, abstract: false, final false
inline ::System::Nullable_1<bool> ReadBooleanString(::StringW  s) ;

/// @brief Method ReadDateTimeOffsetString, addr 0xa374324, size 0x248, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> ReadDateTimeOffsetString(::StringW  s) ;

/// @brief Method ReadDateTimeString, addr 0xa373e18, size 0x290, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::DateTime> ReadDateTimeString(::StringW  s) ;

/// @brief Method ReadDecimalString, addr 0xa3738fc, size 0x298, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::Decimal> ReadDecimalString(::StringW  s) ;

/// @brief Method ReadDoubleString, addr 0xa372e0c, size 0x1a8, virtual false, abstract: false, final false
inline ::System::Nullable_1<double_t> ReadDoubleString(::StringW  s) ;

/// @brief Method ReadForType, addr 0xa374aa4, size 0x308, virtual false, abstract: false, final false
inline bool ReadForType(::Newtonsoft::Json::Serialization::JsonContract*  contract, bool  hasConverter) ;

/// @brief Method ReadForTypeAndAssert, addr 0xa374a58, size 0x4c, virtual false, abstract: false, final false
inline void ReadForTypeAndAssert(::Newtonsoft::Json::Serialization::JsonContract*  contract, bool  hasConverter) ;

/// @brief Method ReadInt32String, addr 0xa371e18, size 0x1b0, virtual false, abstract: false, final false
inline ::System::Nullable_1<int32_t> ReadInt32String(::StringW  s) ;

/// @brief Method ReadIntoWrappedTypeObject, addr 0xa37260c, size 0x1cc, virtual false, abstract: false, final false
inline void ReadIntoWrappedTypeObject() ;

/// @brief Method ReaderReadAndAssert, addr 0xa3727d8, size 0x44, virtual false, abstract: false, final false
inline void ReaderReadAndAssert() ;

/// @brief Method SetFinished, addr 0xa374790, size 0x24, virtual false, abstract: false, final false
inline void SetFinished() ;

/// @brief Method SetPostValueState, addr 0xa374754, size 0x3c, virtual false, abstract: false, final false
inline void SetPostValueState(bool  updateIndex) ;

/// @brief Method SetStateBasedOnCurrent, addr 0xa37485c, size 0xf4, virtual false, abstract: false, final false
inline void SetStateBasedOnCurrent() ;

/// @brief Method SetToken, addr 0xa37292c, size 0xc, virtual false, abstract: false, final false
inline void SetToken(::Newtonsoft::Json::JsonToken  newToken) ;

/// @brief Method SetToken, addr 0xa374650, size 0x8, virtual false, abstract: false, final false
inline void SetToken(::Newtonsoft::Json::JsonToken  newToken, ::System::Object*  value) ;

/// @brief Method SetToken, addr 0xa371c74, size 0x1a4, virtual false, abstract: false, final false
inline void SetToken(::Newtonsoft::Json::JsonToken  newToken, ::System::Object*  value, bool  updateIndex) ;

/// @brief Method Skip, addr 0xa3745b8, size 0x98, virtual false, abstract: false, final false
inline void Skip() ;

/// [NullableContext(1)]
/// [AsyncStateMachine(typeof(Newtonsoft.Json.JsonReader::<SkipAsync>d__1))]
/// @brief Method SkipAsync, addr 0xa370ad0, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SkipAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method System.IDisposable.Dispose, addr 0xa374950, size 0x70, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method UpdateScopeWithFinishedValue, addr 0xa3716b8, size 0x18, virtual false, abstract: false, final false
inline void UpdateScopeWithFinishedValue() ;

/// @brief Method ValidateEnd, addr 0xa374658, size 0xfc, virtual false, abstract: false, final false
inline void ValidateEnd(::Newtonsoft::Json::JsonToken  endToken) ;

constexpr bool const& __cordl_internal_get__CloseInput_k__BackingField() const;

constexpr bool& __cordl_internal_get__CloseInput_k__BackingField() ;

constexpr bool const& __cordl_internal_get__SupportMultipleContent_k__BackingField() const;

constexpr bool& __cordl_internal_get__SupportMultipleContent_k__BackingField() ;

constexpr ::System::Globalization::CultureInfo* const& __cordl_internal_get__culture() const;

constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__culture() ;

constexpr ::Newtonsoft::Json::JsonPosition const& __cordl_internal_get__currentPosition() const;

constexpr ::Newtonsoft::Json::JsonPosition& __cordl_internal_get__currentPosition() ;

constexpr ::GlobalNamespace::JsonReader_State const& __cordl_internal_get__currentState() const;

constexpr ::GlobalNamespace::JsonReader_State& __cordl_internal_get__currentState() ;

constexpr ::StringW const& __cordl_internal_get__dateFormatString() const;

constexpr ::StringW& __cordl_internal_get__dateFormatString() ;

constexpr ::Newtonsoft::Json::DateParseHandling const& __cordl_internal_get__dateParseHandling() const;

constexpr ::Newtonsoft::Json::DateParseHandling& __cordl_internal_get__dateParseHandling() ;

constexpr ::Newtonsoft::Json::DateTimeZoneHandling const& __cordl_internal_get__dateTimeZoneHandling() const;

constexpr ::Newtonsoft::Json::DateTimeZoneHandling& __cordl_internal_get__dateTimeZoneHandling() ;

constexpr ::Newtonsoft::Json::FloatParseHandling const& __cordl_internal_get__floatParseHandling() const;

constexpr ::Newtonsoft::Json::FloatParseHandling& __cordl_internal_get__floatParseHandling() ;

constexpr bool const& __cordl_internal_get__hasExceededMaxDepth() const;

constexpr bool& __cordl_internal_get__hasExceededMaxDepth() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maxDepth() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maxDepth() ;

constexpr char16_t const& __cordl_internal_get__quoteChar() const;

constexpr char16_t& __cordl_internal_get__quoteChar() ;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* const& __cordl_internal_get__stack() const;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*& __cordl_internal_get__stack() ;

constexpr ::Newtonsoft::Json::JsonToken const& __cordl_internal_get__tokenType() const;

constexpr ::Newtonsoft::Json::JsonToken& __cordl_internal_get__tokenType() ;

constexpr ::System::Object* const& __cordl_internal_get__value() const;

constexpr ::System::Object*& __cordl_internal_get__value() ;

constexpr void __cordl_internal_set__CloseInput_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__SupportMultipleContent_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__culture(::System::Globalization::CultureInfo*  value) ;

constexpr void __cordl_internal_set__currentPosition(::Newtonsoft::Json::JsonPosition  value) ;

constexpr void __cordl_internal_set__currentState(::GlobalNamespace::JsonReader_State  value) ;

constexpr void __cordl_internal_set__dateFormatString(::StringW  value) ;

constexpr void __cordl_internal_set__dateParseHandling(::Newtonsoft::Json::DateParseHandling  value) ;

constexpr void __cordl_internal_set__dateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling  value) ;

constexpr void __cordl_internal_set__floatParseHandling(::Newtonsoft::Json::FloatParseHandling  value) ;

constexpr void __cordl_internal_set__hasExceededMaxDepth(bool  value) ;

constexpr void __cordl_internal_set__maxDepth(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set__quoteChar(char16_t  value) ;

constexpr void __cordl_internal_set__stack(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*  value) ;

constexpr void __cordl_internal_set__tokenType(::Newtonsoft::Json::JsonToken  value) ;

constexpr void __cordl_internal_set__value(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xa371370, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CloseInput, addr 0xa370e98, size 0x8, virtual false, abstract: false, final false
inline bool get_CloseInput() ;

/// [NullableContext(1)]
/// @brief Method get_Culture, addr 0xa37125c, size 0x68, virtual false, abstract: false, final false
inline ::System::Globalization::CultureInfo* get_Culture() ;

/// @brief Method get_CurrentState, addr 0xa370e90, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::JsonReader_State get_CurrentState() ;

/// @brief Method get_DateFormatString, addr 0xa370fe4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DateFormatString() ;

/// @brief Method get_DateParseHandling, addr 0xa370f1c, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::DateParseHandling get_DateParseHandling() ;

/// @brief Method get_DateTimeZoneHandling, addr 0xa370eb8, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling() ;

/// @brief Method get_Depth, addr 0xa3710dc, size 0x78, virtual true, abstract: false, final false
inline int32_t get_Depth() ;

/// @brief Method get_FloatParseHandling, addr 0xa370f80, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::FloatParseHandling get_FloatParseHandling() ;

/// @brief Method get_MaxDepth, addr 0xa370ff4, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<int32_t> get_MaxDepth() ;

/// [NullableContext(1)]
/// @brief Method get_Path, addr 0xa371154, size 0x108, virtual true, abstract: false, final false
inline ::StringW get_Path() ;

/// [CompilerGenerated]
/// @brief Method get_SupportMultipleContent, addr 0xa370ea8, size 0x8, virtual false, abstract: false, final false
inline bool get_SupportMultipleContent() ;

/// @brief Method get_TokenType, addr 0xa3710b8, size 0x8, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::JsonToken get_TokenType() ;

/// @brief Method get_Value, addr 0xa3710c0, size 0x8, virtual true, abstract: false, final false
inline ::System::Object* get_Value() ;

/// @brief Method get_ValueType, addr 0xa3710c8, size 0x14, virtual true, abstract: false, final false
inline ::System::Type* get_ValueType() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CloseInput, addr 0xa370ea0, size 0x8, virtual false, abstract: false, final false
inline void set_CloseInput(bool  value) ;

/// [NullableContext(1)]
/// @brief Method set_Culture, addr 0xa3712c4, size 0x8, virtual false, abstract: false, final false
inline void set_Culture(::System::Globalization::CultureInfo*  value) ;

/// @brief Method set_DateFormatString, addr 0xa370fec, size 0x8, virtual false, abstract: false, final false
inline void set_DateFormatString(::StringW  value) ;

/// @brief Method set_DateParseHandling, addr 0xa370f24, size 0x5c, virtual false, abstract: false, final false
inline void set_DateParseHandling(::Newtonsoft::Json::DateParseHandling  value) ;

/// @brief Method set_DateTimeZoneHandling, addr 0xa370ec0, size 0x5c, virtual false, abstract: false, final false
inline void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling  value) ;

/// @brief Method set_FloatParseHandling, addr 0xa370f88, size 0x5c, virtual false, abstract: false, final false
inline void set_FloatParseHandling(::Newtonsoft::Json::FloatParseHandling  value) ;

/// @brief Method set_MaxDepth, addr 0xa370ffc, size 0xbc, virtual false, abstract: false, final false
inline void set_MaxDepth(::System::Nullable_1<int32_t>  value) ;

/// [CompilerGenerated]
/// @brief Method set_SupportMultipleContent, addr 0xa370eb0, size 0x8, virtual false, abstract: false, final false
inline void set_SupportMultipleContent(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonReader(JsonReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonReader(JsonReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23105};

/// @brief Field _tokenType, offset: 0x10, size: 0x4, def value: None
 ::Newtonsoft::Json::JsonToken  ____tokenType;

/// @brief Field _value, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ____value;

/// @brief Field _quoteChar, offset: 0x20, size: 0x2, def value: None
 char16_t  ____quoteChar;

/// @brief Field _currentState, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::JsonReader_State  ____currentState;

/// @brief Field _currentPosition, offset: 0x28, size: 0x18, def value: None
 ::Newtonsoft::Json::JsonPosition  ____currentPosition;

/// @brief Field _culture, offset: 0x40, size: 0x8, def value: None
 ::System::Globalization::CultureInfo*  ____culture;

/// @brief Field _dateTimeZoneHandling, offset: 0x48, size: 0x4, def value: None
 ::Newtonsoft::Json::DateTimeZoneHandling  ____dateTimeZoneHandling;

/// @brief Field _maxDepth, offset: 0x50, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ____maxDepth;

/// @brief Field _hasExceededMaxDepth, offset: 0x60, size: 0x1, def value: None
 bool  ____hasExceededMaxDepth;

/// @brief Field _dateParseHandling, offset: 0x64, size: 0x4, def value: None
 ::Newtonsoft::Json::DateParseHandling  ____dateParseHandling;

/// @brief Field _floatParseHandling, offset: 0x68, size: 0x4, def value: None
 ::Newtonsoft::Json::FloatParseHandling  ____floatParseHandling;

/// @brief Field _dateFormatString, offset: 0x70, size: 0x8, def value: None
 ::StringW  ____dateFormatString;

/// @brief Field _stack, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*  ____stack;

/// @brief Size padding 0x78 - 0x88 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// [CompilerGenerated]
/// @brief Field <CloseInput>k__BackingField, offset: 0x80, size: 0x1, def value: None
 bool  ____CloseInput_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SupportMultipleContent>k__BackingField, offset: 0x81, size: 0x1, def value: None
 bool  ____SupportMultipleContent_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____tokenType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____quoteChar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____currentState) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____currentPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____culture) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____dateTimeZoneHandling) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____maxDepth) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____hasExceededMaxDepth) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____dateParseHandling) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____floatParseHandling) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____dateFormatString) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____stack) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____CloseInput_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____SupportMultipleContent_k__BackingField) == 0x81, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::JsonReader) == 0x78, "Size mismatch!");

} // namespace end def Newtonsoft::Json
