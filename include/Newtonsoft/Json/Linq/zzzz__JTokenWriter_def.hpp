#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JTokenWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JTokenWriter)
namespace Newtonsoft::Json::Linq {
class JContainer;
}
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JValue;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
struct JsonToken;
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
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JTokenWriter;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Linq::JTokenWriter*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Linq::JTokenWriter*, "Newtonsoft.Json.Linq", "JTokenWriter");
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies Newtonsoft.Json.JsonWriter
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JTokenWriter
class CORDL_TYPE JTokenWriter : public ::Newtonsoft::Json::JsonWriter {
public:
// Declarations
 __declspec(property(get=get_Token)) ::Newtonsoft::Json::Linq::JToken*  Token;

/// @brief Field _current, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__current, put=__cordl_internal_set__current)) ::Newtonsoft::Json::Linq::JToken*  _current;

/// @brief Field _parent, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent, put=__cordl_internal_set__parent)) ::Newtonsoft::Json::Linq::JContainer*  _parent;

/// @brief Field _token, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__token, put=__cordl_internal_set__token)) ::Newtonsoft::Json::Linq::JContainer*  _token;

/// @brief Field _value, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) ::Newtonsoft::Json::Linq::JValue*  _value;

/// @brief Method AddJValue, addr 0xa3e4b84, size 0xc4, virtual false, abstract: false, final false
inline void AddJValue(::Newtonsoft::Json::Linq::JValue*  value, ::Newtonsoft::Json::JsonToken  token) ;

/// [NullableContext(1)]
/// @brief Method AddParent, addr 0xa3e48a0, size 0x60, virtual false, abstract: false, final false
inline void AddParent(::Newtonsoft::Json::Linq::JContainer*  container) ;

/// @brief Method AddRawValue, addr 0xa3e4b10, size 0x74, virtual false, abstract: false, final false
inline void AddRawValue(::System::Object*  value, ::Newtonsoft::Json::Linq::JTokenType  type, ::Newtonsoft::Json::JsonToken  token) ;

/// @brief Method Close, addr 0xa3e4834, size 0x8, virtual true, abstract: false, final false
inline void Close() ;

static inline ::Newtonsoft::Json::Linq::JTokenWriter* New_ctor() ;

/// @brief Method RemoveParent, addr 0xa3e4900, size 0x70, virtual false, abstract: false, final false
inline void RemoveParent() ;

/// @brief Method WriteComment, addr 0xa3e4da8, size 0x38, virtual true, abstract: false, final false
inline void WriteComment(::StringW  text) ;

/// @brief Method WriteEnd, addr 0xa3e4a4c, size 0x4, virtual true, abstract: false, final false
inline void WriteEnd(::Newtonsoft::Json::JsonToken  token) ;

/// @brief Method WriteNull, addr 0xa3e4cd8, size 0x28, virtual true, abstract: false, final false
inline void WriteNull() ;

/// [NullableContext(1)]
/// @brief Method WritePropertyName, addr 0xa3e4a50, size 0xc0, virtual true, abstract: false, final false
inline void WritePropertyName(::StringW  name) ;

/// @brief Method WriteRaw, addr 0xa3e4d28, size 0x80, virtual true, abstract: false, final false
inline void WriteRaw(::StringW  json) ;

/// @brief Method WriteStartArray, addr 0xa3e4970, size 0x64, virtual true, abstract: false, final false
inline void WriteStartArray() ;

/// [NullableContext(1)]
/// @brief Method WriteStartConstructor, addr 0xa3e49d4, size 0x78, virtual true, abstract: false, final false
inline void WriteStartConstructor(::StringW  name) ;

/// @brief Method WriteStartObject, addr 0xa3e483c, size 0x64, virtual true, abstract: false, final false
inline void WriteStartObject() ;

/// [NullableContext(1)]
/// @brief Method WriteToken, addr 0xa3e575c, size 0x304, virtual true, abstract: false, final false
inline void WriteToken(::Newtonsoft::Json::JsonReader*  reader, bool  writeChildren, bool  writeDateConstructorAsDate, bool  writeComments) ;

/// @brief Method WriteUndefined, addr 0xa3e4d00, size 0x28, virtual true, abstract: false, final false
inline void WriteUndefined() ;

/// @brief Method WriteValue, addr 0xa3e555c, size 0x80, virtual true, abstract: false, final false
inline void WriteValue(::ArrayW<uint8_t>  value) ;

/// @brief Method WriteValue, addr 0xa3e4de0, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(::StringW  value) ;

/// @brief Method WriteValue, addr 0xa3e5418, size 0xbc, virtual true, abstract: false, final false
inline void WriteValue(::System::DateTime  value) ;

/// @brief Method WriteValue, addr 0xa3e54d4, size 0x88, virtual true, abstract: false, final false
inline void WriteValue(::System::DateTimeOffset  value) ;

/// @brief Method WriteValue, addr 0xa3e5390, size 0x88, virtual true, abstract: false, final false
inline void WriteValue(::System::Decimal  value) ;

/// @brief Method WriteValue, addr 0xa3e5658, size 0x88, virtual true, abstract: false, final false
inline void WriteValue(::System::Guid  value) ;

/// @brief Method WriteValue, addr 0xa3e4c48, size 0x90, virtual true, abstract: false, final false
inline void WriteValue(::System::Object*  value) ;

/// @brief Method WriteValue, addr 0xa3e55dc, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(::System::TimeSpan  value) ;

/// @brief Method WriteValue, addr 0xa3e56e0, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(::System::Uri*  value) ;

/// @brief Method WriteValue, addr 0xa3e50ec, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(bool  value) ;

/// @brief Method WriteValue, addr 0xa3e5208, size 0xe8, virtual true, abstract: false, final false
inline void WriteValue(char16_t  value) ;

/// @brief Method WriteValue, addr 0xa3e5070, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(double_t  value) ;

/// @brief Method WriteValue, addr 0xa3e4ff4, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(float_t  value) ;

/// @brief Method WriteValue, addr 0xa3e5168, size 0x50, virtual true, abstract: false, final false
inline void WriteValue(int16_t  value) ;

/// @brief Method WriteValue, addr 0xa3e4e5c, size 0x50, virtual true, abstract: false, final false
inline void WriteValue(int32_t  value) ;

/// @brief Method WriteValue, addr 0xa3e4efc, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method WriteValue, addr 0xa3e5340, size 0x50, virtual true, abstract: false, final false
inline void WriteValue(int8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method WriteValue, addr 0xa3e51b8, size 0x50, virtual true, abstract: false, final false
inline void WriteValue(uint16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method WriteValue, addr 0xa3e4eac, size 0x50, virtual true, abstract: false, final false
inline void WriteValue(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method WriteValue, addr 0xa3e4f78, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(uint64_t  value) ;

/// @brief Method WriteValue, addr 0xa3e52f0, size 0x50, virtual true, abstract: false, final false
inline void WriteValue(uint8_t  value) ;

constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get__current() const;

constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__current() ;

constexpr ::Newtonsoft::Json::Linq::JContainer* const& __cordl_internal_get__parent() const;

constexpr ::Newtonsoft::Json::Linq::JContainer*& __cordl_internal_get__parent() ;

constexpr ::Newtonsoft::Json::Linq::JContainer* const& __cordl_internal_get__token() const;

constexpr ::Newtonsoft::Json::Linq::JContainer*& __cordl_internal_get__token() ;

constexpr ::Newtonsoft::Json::Linq::JValue* const& __cordl_internal_get__value() const;

constexpr ::Newtonsoft::Json::Linq::JValue*& __cordl_internal_get__value() ;

constexpr void __cordl_internal_set__current(::Newtonsoft::Json::Linq::JToken*  value) ;

constexpr void __cordl_internal_set__parent(::Newtonsoft::Json::Linq::JContainer*  value) ;

constexpr void __cordl_internal_set__token(::Newtonsoft::Json::Linq::JContainer*  value) ;

constexpr void __cordl_internal_set__value(::Newtonsoft::Json::Linq::JValue*  value) ;

/// @brief Method .ctor, addr 0xa3e1520, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Token, addr 0xa3e1578, size 0x1c, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* get_Token() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JTokenWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JTokenWriter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JTokenWriter(JTokenWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JTokenWriter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JTokenWriter(JTokenWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23344};

/// @brief Field _token, offset: 0x60, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JContainer*  ____token;

/// @brief Field _parent, offset: 0x68, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JContainer*  ____parent;

/// @brief Field _value, offset: 0x70, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JValue*  ____value;

/// @brief Field _current, offset: 0x78, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JToken*  ____current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JTokenWriter, ____token) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JTokenWriter, ____parent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JTokenWriter, ____value) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JTokenWriter, ____current) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::Linq::JTokenWriter) == 0x80, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
