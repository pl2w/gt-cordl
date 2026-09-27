#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/TraceJsonWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TraceJsonWriter)
namespace Newtonsoft::Json {
class JsonTextWriter;
}
namespace Newtonsoft::Json {
class JsonWriter;
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
struct Guid;
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
namespace Newtonsoft::Json::Serialization {
class TraceJsonWriter;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Serialization::TraceJsonWriter*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Serialization::TraceJsonWriter*, "Newtonsoft.Json.Serialization", "TraceJsonWriter");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies Newtonsoft.Json.JsonWriter
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.TraceJsonWriter
class CORDL_TYPE TraceJsonWriter : public ::Newtonsoft::Json::JsonWriter {
public:
// Declarations
/// @brief Field _innerWriter, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__innerWriter, put=__cordl_internal_set__innerWriter)) ::Newtonsoft::Json::JsonWriter*  _innerWriter;

/// @brief Field _sw, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__sw, put=__cordl_internal_set__sw)) ::System::IO::StringWriter*  _sw;

/// @brief Field _textWriter, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__textWriter, put=__cordl_internal_set__textWriter)) ::Newtonsoft::Json::JsonTextWriter*  _textWriter;

/// @brief Method Close, addr 0xa3ceacc, size 0x44, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method GetSerializedJsonMessage, addr 0xa3cd0d8, size 0x1c, virtual false, abstract: false, final false
inline ::StringW GetSerializedJsonMessage() ;

static inline ::Newtonsoft::Json::Serialization::TraceJsonWriter* New_ctor(::Newtonsoft::Json::JsonWriter*  innerWriter) ;

/// [NullableContext(2)]
/// @brief Method WriteComment, addr 0xa3ce734, size 0x60, virtual true, abstract: false, final false
inline void WriteComment(::StringW  text) ;

/// @brief Method WriteEndArray, addr 0xa3ce7d8, size 0x44, virtual true, abstract: false, final false
inline void WriteEndArray() ;

/// @brief Method WriteEndConstructor, addr 0xa3ce874, size 0x44, virtual true, abstract: false, final false
inline void WriteEndConstructor() ;

/// @brief Method WriteEndObject, addr 0xa3ce9c8, size 0x44, virtual true, abstract: false, final false
inline void WriteEndObject() ;

/// @brief Method WriteNull, addr 0xa3cd9dc, size 0x4c, virtual true, abstract: false, final false
inline void WriteNull() ;

/// @brief Method WritePropertyName, addr 0xa3ce8b8, size 0x60, virtual true, abstract: false, final false
inline void WritePropertyName(::StringW  name) ;

/// @brief Method WritePropertyName, addr 0xa3ce918, size 0x6c, virtual true, abstract: false, final false
inline void WritePropertyName(::StringW  name, bool  escape) ;

/// [NullableContext(2)]
/// @brief Method WriteRaw, addr 0xa3cea6c, size 0x60, virtual true, abstract: false, final false
inline void WriteRaw(::StringW  json) ;

/// [NullableContext(2)]
/// @brief Method WriteRawValue, addr 0xa3cea0c, size 0x60, virtual true, abstract: false, final false
inline void WriteRawValue(::StringW  json) ;

/// @brief Method WriteStartArray, addr 0xa3ce794, size 0x44, virtual true, abstract: false, final false
inline void WriteStartArray() ;

/// @brief Method WriteStartConstructor, addr 0xa3ce81c, size 0x58, virtual true, abstract: false, final false
inline void WriteStartConstructor(::StringW  name) ;

/// @brief Method WriteStartObject, addr 0xa3ce984, size 0x44, virtual true, abstract: false, final false
inline void WriteStartObject() ;

/// @brief Method WriteUndefined, addr 0xa3cd990, size 0x4c, virtual true, abstract: false, final false
inline void WriteUndefined() ;

/// [NullableContext(2)]
/// @brief Method WriteValue, addr 0xa3cd598, size 0x74, virtual true, abstract: false, final false
inline void WriteValue(::ArrayW<uint8_t>  value) ;

/// [NullableContext(2)]
/// @brief Method WriteValue, addr 0xa3ce1b8, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(::StringW  value) ;

/// @brief Method WriteValue, addr 0xa3cd60c, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(::System::DateTime  value) ;

/// @brief Method WriteValue, addr 0xa3cd72c, size 0x6c, virtual true, abstract: false, final false
inline void WriteValue(::System::DateTimeOffset  value) ;

/// @brief Method WriteValue, addr 0xa3cd0f4, size 0x6c, virtual true, abstract: false, final false
inline void WriteValue(::System::Decimal  value) ;

/// @brief Method WriteValue, addr 0xa3cdb38, size 0x6c, virtual true, abstract: false, final false
inline void WriteValue(::System::Guid  value) ;

/// @brief Method WriteValue, addr 0xa3cd66c, size 0xc0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::DateTime>  value) ;

/// @brief Method WriteValue, addr 0xa3cd798, size 0xd4, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::DateTimeOffset>  value) ;

/// @brief Method WriteValue, addr 0xa3cd160, size 0x10c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::Decimal>  value) ;

/// @brief Method WriteValue, addr 0xa3cdba4, size 0xd8, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::Guid>  value) ;

/// @brief Method WriteValue, addr 0xa3ce278, size 0xc0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::TimeSpan>  value) ;

/// @brief Method WriteValue, addr 0xa3cd2d0, size 0xb0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<bool>  value) ;

/// @brief Method WriteValue, addr 0xa3cd4ec, size 0xac, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<char16_t>  value) ;

/// @brief Method WriteValue, addr 0xa3cd8cc, size 0xc4, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<double_t>  value) ;

/// @brief Method WriteValue, addr 0xa3cda88, size 0xb0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<float_t>  value) ;

/// @brief Method WriteValue, addr 0xa3ce10c, size 0xac, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<int16_t>  value) ;

/// @brief Method WriteValue, addr 0xa3cdcdc, size 0xac, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<int32_t>  value) ;

/// @brief Method WriteValue, addr 0xa3cdde8, size 0xc0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<int64_t>  value) ;

/// @brief Method WriteValue, addr 0xa3ce000, size 0xac, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<int8_t>  value) ;

/// @brief Method WriteValue, addr 0xa3ce688, size 0xac, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<uint16_t>  value) ;

/// @brief Method WriteValue, addr 0xa3ce398, size 0xac, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<uint32_t>  value) ;

/// @brief Method WriteValue, addr 0xa3ce4a4, size 0xc0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<uint64_t>  value) ;

/// @brief Method WriteValue, addr 0xa3cd3e0, size 0xac, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<uint8_t>  value) ;

/// [NullableContext(2)]
/// @brief Method WriteValue, addr 0xa3cdea8, size 0xf8, virtual true, abstract: false, final false
inline void WriteValue(::System::Object*  value) ;

/// @brief Method WriteValue, addr 0xa3ce218, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(::System::TimeSpan  value) ;

/// [NullableContext(2)]
/// @brief Method WriteValue, addr 0xa3ce564, size 0xc4, virtual true, abstract: false, final false
inline void WriteValue(::System::Uri*  value) ;

/// @brief Method WriteValue, addr 0xa3cd26c, size 0x64, virtual true, abstract: false, final false
inline void WriteValue(bool  value) ;

/// @brief Method WriteValue, addr 0xa3cd48c, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(char16_t  value) ;

/// @brief Method WriteValue, addr 0xa3cd86c, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(double_t  value) ;

/// @brief Method WriteValue, addr 0xa3cda28, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(float_t  value) ;

/// @brief Method WriteValue, addr 0xa3ce0ac, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(int16_t  value) ;

/// @brief Method WriteValue, addr 0xa3cdc7c, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(int32_t  value) ;

/// @brief Method WriteValue, addr 0xa3cdd88, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(int64_t  value) ;

/// @brief Method WriteValue, addr 0xa3cdfa0, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(int8_t  value) ;

/// @brief Method WriteValue, addr 0xa3ce628, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(uint16_t  value) ;

/// @brief Method WriteValue, addr 0xa3ce338, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(uint32_t  value) ;

/// @brief Method WriteValue, addr 0xa3ce444, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(uint64_t  value) ;

/// @brief Method WriteValue, addr 0xa3cd380, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(uint8_t  value) ;

constexpr ::Newtonsoft::Json::JsonWriter* const& __cordl_internal_get__innerWriter() const;

constexpr ::Newtonsoft::Json::JsonWriter*& __cordl_internal_get__innerWriter() ;

constexpr ::System::IO::StringWriter* const& __cordl_internal_get__sw() const;

constexpr ::System::IO::StringWriter*& __cordl_internal_get__sw() ;

constexpr ::Newtonsoft::Json::JsonTextWriter* const& __cordl_internal_get__textWriter() const;

constexpr ::Newtonsoft::Json::JsonTextWriter*& __cordl_internal_get__textWriter() ;

constexpr void __cordl_internal_set__innerWriter(::Newtonsoft::Json::JsonWriter*  value) ;

constexpr void __cordl_internal_set__sw(::System::IO::StringWriter*  value) ;

constexpr void __cordl_internal_set__textWriter(::Newtonsoft::Json::JsonTextWriter*  value) ;

/// @brief Method .ctor, addr 0xa3cced0, size 0x208, virtual false, abstract: false, final false
inline void _ctor(::Newtonsoft::Json::JsonWriter*  innerWriter) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TraceJsonWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TraceJsonWriter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TraceJsonWriter(TraceJsonWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TraceJsonWriter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TraceJsonWriter(TraceJsonWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23314};

/// @brief Field _innerWriter, offset: 0x60, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonWriter*  ____innerWriter;

/// @brief Field _textWriter, offset: 0x68, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  ____textWriter;

/// @brief Field _sw, offset: 0x70, size: 0x8, def value: None
 ::System::IO::StringWriter*  ____sw;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::TraceJsonWriter, ____innerWriter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::TraceJsonWriter, ____textWriter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::TraceJsonWriter, ____sw) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::Serialization::TraceJsonWriter) == 0x78, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
