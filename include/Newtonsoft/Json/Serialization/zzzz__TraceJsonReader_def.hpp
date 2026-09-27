#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/TraceJsonReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TraceJsonReader)
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonTextWriter;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace System::IO {
class StringWriter;
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
namespace Newtonsoft::Json::Serialization {
class TraceJsonReader;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Serialization::TraceJsonReader*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Serialization::TraceJsonReader*, "Newtonsoft.Json.Serialization", "TraceJsonReader");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies Newtonsoft.Json.JsonReader
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.TraceJsonReader
class CORDL_TYPE TraceJsonReader : public ::Newtonsoft::Json::JsonReader {
public:
// Declarations
 __declspec(property(get=get_Depth)) int32_t  Depth;

 __declspec(property(get=Newtonsoft_Json_IJsonLineInfo_get_LineNumber)) int32_t  Newtonsoft_Json_IJsonLineInfo_LineNumber;

 __declspec(property(get=Newtonsoft_Json_IJsonLineInfo_get_LinePosition)) int32_t  Newtonsoft_Json_IJsonLineInfo_LinePosition;

 __declspec(property(get=get_Path)) ::StringW  Path;

 __declspec(property(get=get_TokenType)) ::Newtonsoft::Json::JsonToken  TokenType;

/// @brief [Nullable(2)]
 __declspec(property(get=get_Value)) ::System::Object*  Value;

/// @brief [Nullable(2)]
 __declspec(property(get=get_ValueType)) ::System::Type*  ValueType;

/// @brief Field _innerReader, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__innerReader, put=__cordl_internal_set__innerReader)) ::Newtonsoft::Json::JsonReader*  _innerReader;

/// @brief Field _sw, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__sw, put=__cordl_internal_set__sw)) ::System::IO::StringWriter*  _sw;

/// @brief Field _textWriter, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__textWriter, put=__cordl_internal_set__textWriter)) ::Newtonsoft::Json::JsonTextWriter*  _textWriter;

/// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
constexpr operator  ::Newtonsoft::Json::IJsonLineInfo*() noexcept;

/// @brief Method Close, addr 0xa3ccc8c, size 0x20, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method GetDeserializedJsonMessage, addr 0xa3cc8e4, size 0x1c, virtual false, abstract: false, final false
inline ::StringW GetDeserializedJsonMessage() ;

static inline ::Newtonsoft::Json::Serialization::TraceJsonReader* New_ctor(::Newtonsoft::Json::JsonReader*  innerReader) ;

/// @brief Method Newtonsoft.Json.IJsonLineInfo.HasLineInfo, addr 0xa3cccac, size 0xb4, virtual true, abstract: false, final true
inline bool Newtonsoft_Json_IJsonLineInfo_HasLineInfo() ;

/// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LineNumber, addr 0xa3ccd60, size 0xb8, virtual true, abstract: false, final true
inline int32_t Newtonsoft_Json_IJsonLineInfo_get_LineNumber() ;

/// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LinePosition, addr 0xa3cce18, size 0xb8, virtual true, abstract: false, final true
inline int32_t Newtonsoft_Json_IJsonLineInfo_get_LinePosition() ;

/// @brief Method Read, addr 0xa3cc900, size 0x40, virtual true, abstract: false, final false
inline bool Read() ;

/// @brief Method ReadAsBoolean, addr 0xa3ccb14, size 0x44, virtual true, abstract: false, final false
inline ::System::Nullable_1<bool> ReadAsBoolean() ;

/// [NullableContext(2)]
/// @brief Method ReadAsBytes, addr 0xa3cc9f8, size 0x44, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> ReadAsBytes() ;

/// @brief Method ReadAsDateTime, addr 0xa3ccb58, size 0x4c, virtual true, abstract: false, final false
inline ::System::Nullable_1<::System::DateTime> ReadAsDateTime() ;

/// @brief Method ReadAsDateTimeOffset, addr 0xa3ccba4, size 0x5c, virtual true, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> ReadAsDateTimeOffset() ;

/// @brief Method ReadAsDecimal, addr 0xa3cca3c, size 0x8c, virtual true, abstract: false, final false
inline ::System::Nullable_1<::System::Decimal> ReadAsDecimal() ;

/// @brief Method ReadAsDouble, addr 0xa3ccac8, size 0x4c, virtual true, abstract: false, final false
inline ::System::Nullable_1<double_t> ReadAsDouble() ;

/// @brief Method ReadAsInt32, addr 0xa3cc974, size 0x40, virtual true, abstract: false, final false
inline ::System::Nullable_1<int32_t> ReadAsInt32() ;

/// [NullableContext(2)]
/// @brief Method ReadAsString, addr 0xa3cc9b4, size 0x44, virtual true, abstract: false, final false
inline ::StringW ReadAsString() ;

/// @brief Method WriteCurrentToken, addr 0xa3cc940, size 0x34, virtual false, abstract: false, final false
inline void WriteCurrentToken() ;

constexpr ::Newtonsoft::Json::JsonReader* const& __cordl_internal_get__innerReader() const;

constexpr ::Newtonsoft::Json::JsonReader*& __cordl_internal_get__innerReader() ;

constexpr ::System::IO::StringWriter* const& __cordl_internal_get__sw() const;

constexpr ::System::IO::StringWriter*& __cordl_internal_get__sw() ;

constexpr ::Newtonsoft::Json::JsonTextWriter* const& __cordl_internal_get__textWriter() const;

constexpr ::Newtonsoft::Json::JsonTextWriter*& __cordl_internal_get__textWriter() ;

constexpr void __cordl_internal_set__innerReader(::Newtonsoft::Json::JsonReader*  value) ;

constexpr void __cordl_internal_set__sw(::System::IO::StringWriter*  value) ;

constexpr void __cordl_internal_set__textWriter(::Newtonsoft::Json::JsonTextWriter*  value) ;

/// @brief Method .ctor, addr 0xa3cc778, size 0x16c, virtual false, abstract: false, final false
inline void _ctor(::Newtonsoft::Json::JsonReader*  innerReader) ;

/// @brief Method get_Depth, addr 0xa3ccc00, size 0x1c, virtual true, abstract: false, final false
inline int32_t get_Depth() ;

/// @brief Method get_Path, addr 0xa3ccc1c, size 0x1c, virtual true, abstract: false, final false
inline ::StringW get_Path() ;

/// @brief Method get_TokenType, addr 0xa3ccc38, size 0x1c, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::JsonToken get_TokenType() ;

/// [NullableContext(2)]
/// @brief Method get_Value, addr 0xa3ccc54, size 0x1c, virtual true, abstract: false, final false
inline ::System::Object* get_Value() ;

/// [NullableContext(2)]
/// @brief Method get_ValueType, addr 0xa3ccc70, size 0x1c, virtual true, abstract: false, final false
inline ::System::Type* get_ValueType() ;

/// @brief Convert to "::Newtonsoft::Json::IJsonLineInfo"
constexpr ::Newtonsoft::Json::IJsonLineInfo* i___Newtonsoft__Json__IJsonLineInfo() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TraceJsonReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TraceJsonReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TraceJsonReader(TraceJsonReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TraceJsonReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TraceJsonReader(TraceJsonReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23313};

/// @brief Field _innerReader, offset: 0x88, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonReader*  ____innerReader;

/// @brief Field _textWriter, offset: 0x90, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  ____textWriter;

/// @brief Size padding 0x90 - 0xa0 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field _sw, offset: 0x98, size: 0x8, def value: None
 ::System::IO::StringWriter*  ____sw;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::TraceJsonReader, ____innerReader) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::TraceJsonReader, ____textWriter) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::TraceJsonReader, ____sw) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::Serialization::TraceJsonReader) == 0x90, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
