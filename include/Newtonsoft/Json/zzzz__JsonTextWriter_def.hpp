#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonTextWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonTextWriter)
namespace Newtonsoft::Json::Utilities {
class Base64Encoder;
}
namespace Newtonsoft::Json {
template<typename T>
class IArrayPool_1;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace System::IO {
class TextWriter;
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
namespace Newtonsoft::Json {
class JsonTextWriter;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::JsonTextWriter*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::JsonTextWriter*, "Newtonsoft.Json", "JsonTextWriter");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies Newtonsoft.Json.JsonWriter
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonTextWriter
class CORDL_TYPE JsonTextWriter : public ::Newtonsoft::Json::JsonWriter {
public:
// Declarations
 __declspec(property(get=get_Base64Encoder)) ::Newtonsoft::Json::Utilities::Base64Encoder*  Base64Encoder;

 __declspec(property(get=get_QuoteChar)) char16_t  QuoteChar;

/// @brief Field _arrayPool, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__arrayPool, put=__cordl_internal_set__arrayPool)) ::Newtonsoft::Json::IArrayPool_1<char16_t>*  _arrayPool;

/// @brief Field _base64Encoder, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__base64Encoder, put=__cordl_internal_set__base64Encoder)) ::Newtonsoft::Json::Utilities::Base64Encoder*  _base64Encoder;

/// @brief Field _charEscapeFlags, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__charEscapeFlags, put=__cordl_internal_set__charEscapeFlags)) ::ArrayW<bool>  _charEscapeFlags;

/// @brief Field _indentChar, offset 0x78, size 0x2 
 __declspec(property(get=__cordl_internal_get__indentChar, put=__cordl_internal_set__indentChar)) char16_t  _indentChar;

/// @brief Field _indentChars, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__indentChars, put=__cordl_internal_set__indentChars)) ::ArrayW<char16_t>  _indentChars;

/// @brief Field _indentation, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__indentation, put=__cordl_internal_set__indentation)) int32_t  _indentation;

/// @brief Field _quoteChar, offset 0x80, size 0x2 
 __declspec(property(get=__cordl_internal_get__quoteChar, put=__cordl_internal_set__quoteChar)) char16_t  _quoteChar;

/// @brief Field _quoteName, offset 0x82, size 0x1 
 __declspec(property(get=__cordl_internal_get__quoteName, put=__cordl_internal_set__quoteName)) bool  _quoteName;

/// @brief Field _safeAsync, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__safeAsync, put=__cordl_internal_set__safeAsync)) bool  _safeAsync;

/// @brief Field _writeBuffer, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__writeBuffer, put=__cordl_internal_set__writeBuffer)) ::ArrayW<char16_t>  _writeBuffer;

/// @brief Field _writer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__writer, put=__cordl_internal_set__writer)) ::System::IO::TextWriter*  _writer;

/// @brief Method Close, addr 0xa389dc8, size 0x24, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method CloseBufferAndWriter, addr 0xa389dfc, size 0x64, virtual false, abstract: false, final false
inline void CloseBufferAndWriter() ;

/// @brief Method EnsureWriteBuffer, addr 0xa38aa24, size 0x4c, virtual false, abstract: false, final false
inline void EnsureWriteBuffer() ;

static inline ::Newtonsoft::Json::JsonTextWriter* New_ctor(::System::IO::TextWriter*  textWriter) ;

/// @brief Method OnStringEscapeHandlingChanged, addr 0xa38a2e0, size 0x4, virtual true, abstract: false, final false
inline void OnStringEscapeHandlingChanged() ;

/// @brief Method SetIndentChars, addr 0xa38a458, size 0xf8, virtual false, abstract: false, final false
inline int32_t SetIndentChars() ;

/// @brief Method UpdateCharEscapeFlags, addr 0xa389d54, size 0x74, virtual false, abstract: false, final false
inline void UpdateCharEscapeFlags() ;

/// [NullableContext(2)]
/// @brief Method WriteComment, addr 0xa38bf0c, size 0xb8, virtual true, abstract: false, final false
inline void WriteComment(::StringW  text) ;

/// @brief Method WriteEnd, addr 0xa389fb8, size 0xf0, virtual true, abstract: false, final false
inline void WriteEnd(::Newtonsoft::Json::JsonToken  token) ;

/// @brief Method WriteEscapedString, addr 0xa38a154, size 0xbc, virtual false, abstract: false, final false
inline void WriteEscapedString(::StringW  value, bool  quote) ;

/// @brief Method WriteIndent, addr 0xa38a2e4, size 0x124, virtual true, abstract: false, final false
inline void WriteIndent() ;

/// @brief Method WriteIndentSpace, addr 0xa38a574, size 0x24, virtual true, abstract: false, final false
inline void WriteIndentSpace() ;

/// @brief Method WriteIntegerValue, addr 0xa38aab4, size 0x48, virtual false, abstract: false, final false
inline void WriteIntegerValue(int32_t  value) ;

/// @brief Method WriteIntegerValue, addr 0xa38ab40, size 0x48, virtual false, abstract: false, final false
inline void WriteIntegerValue(int64_t  value) ;

/// @brief Method WriteIntegerValue, addr 0xa38c140, size 0x70, virtual false, abstract: false, final false
inline void WriteIntegerValue(uint32_t  value, bool  negative) ;

/// @brief Method WriteIntegerValue, addr 0xa38ac14, size 0x70, virtual false, abstract: false, final false
inline void WriteIntegerValue(uint64_t  value, bool  negative) ;

/// @brief Method WriteNull, addr 0xa38a824, size 0x94, virtual true, abstract: false, final false
inline void WriteNull() ;

/// @brief Method WriteNumberToBuffer, addr 0xa38c098, size 0xa8, virtual false, abstract: false, final false
inline int32_t WriteNumberToBuffer(uint32_t  value, bool  negative) ;

/// @brief Method WriteNumberToBuffer, addr 0xa38bfcc, size 0xcc, virtual false, abstract: false, final false
inline int32_t WriteNumberToBuffer(uint64_t  value, bool  negative) ;

/// @brief Method WritePropertyName, addr 0xa38a0d8, size 0x5c, virtual true, abstract: false, final false
inline void WritePropertyName(::StringW  name) ;

/// @brief Method WritePropertyName, addr 0xa38a210, size 0xd0, virtual true, abstract: false, final false
inline void WritePropertyName(::StringW  name, bool  escape) ;

/// [NullableContext(2)]
/// @brief Method WriteRaw, addr 0xa38a94c, size 0x20, virtual true, abstract: false, final false
inline void WriteRaw(::StringW  json) ;

/// @brief Method WriteStartArray, addr 0xa389ed8, size 0x38, virtual true, abstract: false, final false
inline void WriteStartArray() ;

/// @brief Method WriteStartConstructor, addr 0xa389f10, size 0xa8, virtual true, abstract: false, final false
inline void WriteStartConstructor(::StringW  name) ;

/// @brief Method WriteStartObject, addr 0xa389e60, size 0x38, virtual true, abstract: false, final false
inline void WriteStartObject() ;

/// @brief Method WriteUndefined, addr 0xa38a8b8, size 0x94, virtual true, abstract: false, final false
inline void WriteUndefined() ;

/// [NullableContext(2)]
/// @brief Method WriteValue, addr 0xa38b620, size 0xc0, virtual true, abstract: false, final false
inline void WriteValue(::ArrayW<uint8_t>  value) ;

/// [NullableContext(2)]
/// @brief Method WriteValue, addr 0xa38a970, size 0xb4, virtual true, abstract: false, final false
inline void WriteValue(::StringW  value) ;

/// @brief Method WriteValue, addr 0xa38b310, size 0x194, virtual true, abstract: false, final false
inline void WriteValue(::System::DateTime  value) ;

/// @brief Method WriteValue, addr 0xa38b938, size 0x168, virtual true, abstract: false, final false
inline void WriteValue(::System::DateTimeOffset  value) ;

/// @brief Method WriteValue, addr 0xa38b260, size 0xb0, virtual true, abstract: false, final false
inline void WriteValue(::System::Decimal  value) ;

/// @brief Method WriteValue, addr 0xa38bc0c, size 0x10c, virtual true, abstract: false, final false
inline void WriteValue(::System::Guid  value) ;

/// @brief Method WriteValue, addr 0xa38af00, size 0x110, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<double_t>  value) ;

/// @brief Method WriteValue, addr 0xa38ad40, size 0x104, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<float_t>  value) ;

/// [NullableContext(2)]
/// @brief Method WriteValue, addr 0xa38a5b8, size 0x124, virtual true, abstract: false, final false
inline void WriteValue(::System::Object*  value) ;

/// @brief Method WriteValue, addr 0xa38bd18, size 0x124, virtual true, abstract: false, final false
inline void WriteValue(::System::TimeSpan  value) ;

/// [NullableContext(2)]
/// @brief Method WriteValue, addr 0xa38be3c, size 0xd0, virtual true, abstract: false, final false
inline void WriteValue(::System::Uri*  value) ;

/// @brief Method WriteValue, addr 0xa38b010, size 0xa0, virtual true, abstract: false, final false
inline void WriteValue(bool  value) ;

/// @brief Method WriteValue, addr 0xa38b138, size 0xa0, virtual true, abstract: false, final false
inline void WriteValue(char16_t  value) ;

/// @brief Method WriteValue, addr 0xa38ae44, size 0xbc, virtual true, abstract: false, final false
inline void WriteValue(double_t  value) ;

/// @brief Method WriteValue, addr 0xa38ac84, size 0xbc, virtual true, abstract: false, final false
inline void WriteValue(float_t  value) ;

/// @brief Method WriteValue, addr 0xa38b0b0, size 0x44, virtual true, abstract: false, final false
inline void WriteValue(int16_t  value) ;

/// @brief Method WriteValue, addr 0xa38aa70, size 0x44, virtual true, abstract: false, final false
inline void WriteValue(int32_t  value) ;

/// @brief Method WriteValue, addr 0xa38ab88, size 0x44, virtual true, abstract: false, final false
inline void WriteValue(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method WriteValue, addr 0xa38b21c, size 0x44, virtual true, abstract: false, final false
inline void WriteValue(int8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method WriteValue, addr 0xa38b0f4, size 0x44, virtual true, abstract: false, final false
inline void WriteValue(uint16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method WriteValue, addr 0xa38aafc, size 0x44, virtual true, abstract: false, final false
inline void WriteValue(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method WriteValue, addr 0xa38abcc, size 0x48, virtual true, abstract: false, final false
inline void WriteValue(uint64_t  value) ;

/// @brief Method WriteValue, addr 0xa38b1d8, size 0x44, virtual true, abstract: false, final false
inline void WriteValue(uint8_t  value) ;

/// @brief Method WriteValueDelimiter, addr 0xa38a550, size 0x24, virtual true, abstract: false, final false
inline void WriteValueDelimiter() ;

/// @brief Method WriteValueInternal, addr 0xa38a598, size 0x20, virtual false, abstract: false, final false
inline void WriteValueInternal(::StringW  value, ::Newtonsoft::Json::JsonToken  token) ;

/// @brief Method WriteValueToBuffer, addr 0xa38b4a4, size 0x114, virtual false, abstract: false, final false
inline int32_t WriteValueToBuffer(::System::DateTime  value) ;

/// @brief Method WriteValueToBuffer, addr 0xa38baa0, size 0x16c, virtual false, abstract: false, final false
inline int32_t WriteValueToBuffer(::System::DateTimeOffset  value) ;

constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>* const& __cordl_internal_get__arrayPool() const;

constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>*& __cordl_internal_get__arrayPool() ;

constexpr ::Newtonsoft::Json::Utilities::Base64Encoder* const& __cordl_internal_get__base64Encoder() const;

constexpr ::Newtonsoft::Json::Utilities::Base64Encoder*& __cordl_internal_get__base64Encoder() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get__charEscapeFlags() const;

constexpr ::ArrayW<bool>& __cordl_internal_get__charEscapeFlags() ;

constexpr char16_t const& __cordl_internal_get__indentChar() const;

constexpr char16_t& __cordl_internal_get__indentChar() ;

constexpr ::ArrayW<char16_t> const& __cordl_internal_get__indentChars() const;

constexpr ::ArrayW<char16_t>& __cordl_internal_get__indentChars() ;

constexpr int32_t const& __cordl_internal_get__indentation() const;

constexpr int32_t& __cordl_internal_get__indentation() ;

constexpr char16_t const& __cordl_internal_get__quoteChar() const;

constexpr char16_t& __cordl_internal_get__quoteChar() ;

constexpr bool const& __cordl_internal_get__quoteName() const;

constexpr bool& __cordl_internal_get__quoteName() ;

constexpr bool const& __cordl_internal_get__safeAsync() const;

constexpr bool& __cordl_internal_get__safeAsync() ;

constexpr ::ArrayW<char16_t> const& __cordl_internal_get__writeBuffer() const;

constexpr ::ArrayW<char16_t>& __cordl_internal_get__writeBuffer() ;

constexpr ::System::IO::TextWriter* const& __cordl_internal_get__writer() const;

constexpr ::System::IO::TextWriter*& __cordl_internal_get__writer() ;

constexpr void __cordl_internal_set__arrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>*  value) ;

constexpr void __cordl_internal_set__base64Encoder(::Newtonsoft::Json::Utilities::Base64Encoder*  value) ;

constexpr void __cordl_internal_set__charEscapeFlags(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set__indentChar(char16_t  value) ;

constexpr void __cordl_internal_set__indentChars(::ArrayW<char16_t>  value) ;

constexpr void __cordl_internal_set__indentation(int32_t  value) ;

constexpr void __cordl_internal_set__quoteChar(char16_t  value) ;

constexpr void __cordl_internal_set__quoteName(bool  value) ;

constexpr void __cordl_internal_set__safeAsync(bool  value) ;

constexpr void __cordl_internal_set__writeBuffer(::ArrayW<char16_t>  value) ;

constexpr void __cordl_internal_set__writer(::System::IO::TextWriter*  value) ;

/// @brief Method .ctor, addr 0xa389bc0, size 0x168, virtual false, abstract: false, final false
inline void _ctor(::System::IO::TextWriter*  textWriter) ;

/// @brief Method get_Base64Encoder, addr 0xa389a94, size 0x80, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Utilities::Base64Encoder* get_Base64Encoder() ;

/// @brief Method get_QuoteChar, addr 0xa389bb8, size 0x8, virtual false, abstract: false, final false
inline char16_t get_QuoteChar() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonTextWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonTextWriter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonTextWriter(JsonTextWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonTextWriter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonTextWriter(JsonTextWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23137};

/// @brief Field _safeAsync, offset: 0x60, size: 0x1, def value: None
 bool  ____safeAsync;

/// @brief Field _writer, offset: 0x68, size: 0x8, def value: None
 ::System::IO::TextWriter*  ____writer;

/// [Nullable(2)]
/// @brief Field _base64Encoder, offset: 0x70, size: 0x8, def value: None
 ::Newtonsoft::Json::Utilities::Base64Encoder*  ____base64Encoder;

/// @brief Field _indentChar, offset: 0x78, size: 0x2, def value: None
 char16_t  ____indentChar;

/// @brief Field _indentation, offset: 0x7c, size: 0x4, def value: None
 int32_t  ____indentation;

/// @brief Field _quoteChar, offset: 0x80, size: 0x2, def value: None
 char16_t  ____quoteChar;

/// @brief Field _quoteName, offset: 0x82, size: 0x1, def value: None
 bool  ____quoteName;

/// [Nullable(2)]
/// @brief Field _charEscapeFlags, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<bool>  ____charEscapeFlags;

/// [Nullable(2)]
/// @brief Field _writeBuffer, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<char16_t>  ____writeBuffer;

/// [Nullable(2)]
/// @brief Field _arrayPool, offset: 0x98, size: 0x8, def value: None
 ::Newtonsoft::Json::IArrayPool_1<char16_t>*  ____arrayPool;

/// [Nullable(2)]
/// @brief Field _indentChars, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<char16_t>  ____indentChars;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____safeAsync) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____writer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____base64Encoder) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____indentChar) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____indentation) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____quoteChar) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____quoteName) == 0x82, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____charEscapeFlags) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____writeBuffer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____arrayPool) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____indentChars) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::JsonTextWriter) == 0xa8, "Size mismatch!");

} // namespace end def Newtonsoft::Json
