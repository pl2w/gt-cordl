#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/JsonConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonConverter)
namespace SouthPointe::Serialization::MessagePack {
class FormatReader;
}
namespace SouthPointe::Serialization::MessagePack {
struct Format;
}
namespace SouthPointe::Serialization::MessagePack {
class SerializationContext;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class JsonConverter;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::JsonConverter*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::JsonConverter*, "SouthPointe.Serialization.MessagePack", "JsonConverter");
// Dependencies System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.JsonConverter
class CORDL_TYPE JsonConverter : public ::System::Object {
public:
// Declarations
/// @brief Field builder, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_builder, put=__cordl_internal_set_builder)) ::System::Text::StringBuilder*  builder;

/// @brief Field context, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_context, put=__cordl_internal_set_context)) ::SouthPointe::Serialization::MessagePack::SerializationContext*  context;

/// @brief Field indentationSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_indentationSize, put=__cordl_internal_set_indentationSize)) int32_t  indentationSize;

/// @brief Field reader, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_reader, put=__cordl_internal_set_reader)) ::SouthPointe::Serialization::MessagePack::FormatReader*  reader;

/// @brief Method Append, addr 0x9d08e40, size 0x28, virtual false, abstract: false, final false
inline ::SouthPointe::Serialization::MessagePack::JsonConverter* Append(::StringW  str) ;

/// @brief Method AppendIfPretty, addr 0x9d094e8, size 0x40, virtual false, abstract: false, final false
inline ::SouthPointe::Serialization::MessagePack::JsonConverter* AppendIfPretty(::StringW  str) ;

/// @brief Method AppendQuotedString, addr 0x9d08e68, size 0x88, virtual false, abstract: false, final false
inline ::SouthPointe::Serialization::MessagePack::JsonConverter* AppendQuotedString(::StringW  str) ;

/// @brief Method AppendStream, addr 0x9d0890c, size 0x4bc, virtual false, abstract: false, final false
inline ::SouthPointe::Serialization::MessagePack::JsonConverter* AppendStream() ;

/// @brief Method Encode, addr 0x9d086e4, size 0x148, virtual false, abstract: false, final false
static inline ::StringW Encode(::System::IO::Stream*  stream, ::SouthPointe::Serialization::MessagePack::SerializationContext*  context) ;

/// @brief Method Indent, addr 0x9d0946c, size 0x7c, virtual false, abstract: false, final false
inline ::SouthPointe::Serialization::MessagePack::JsonConverter* Indent() ;

static inline ::SouthPointe::Serialization::MessagePack::JsonConverter* New_ctor(::System::IO::Stream*  stream, ::SouthPointe::Serialization::MessagePack::SerializationContext*  context) ;

/// @brief Method ReadArray, addr 0x9d0905c, size 0x140, virtual false, abstract: false, final false
inline void ReadArray(::SouthPointe::Serialization::MessagePack::Format  format) ;

/// @brief Method ReadExt, addr 0x9d09330, size 0x120, virtual false, abstract: false, final false
inline void ReadExt(::SouthPointe::Serialization::MessagePack::Format  format) ;

/// @brief Method ReadMap, addr 0x9d0919c, size 0x194, virtual false, abstract: false, final false
inline void ReadMap(::SouthPointe::Serialization::MessagePack::Format  format) ;

/// @brief Method StringifyBinary, addr 0x9d08ef0, size 0x16c, virtual false, abstract: false, final false
inline void StringifyBinary(::ArrayW<uint8_t>  bytes) ;

/// @brief Method ToString, addr 0x9d09450, size 0x1c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ValueSeparator, addr 0x9d09528, size 0x24, virtual false, abstract: false, final false
inline ::SouthPointe::Serialization::MessagePack::JsonConverter* ValueSeparator() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_builder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_builder() ;

constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext* const& __cordl_internal_get_context() const;

constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext*& __cordl_internal_get_context() ;

constexpr int32_t const& __cordl_internal_get_indentationSize() const;

constexpr int32_t& __cordl_internal_get_indentationSize() ;

constexpr ::SouthPointe::Serialization::MessagePack::FormatReader* const& __cordl_internal_get_reader() const;

constexpr ::SouthPointe::Serialization::MessagePack::FormatReader*& __cordl_internal_get_reader() ;

constexpr void __cordl_internal_set_builder(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_context(::SouthPointe::Serialization::MessagePack::SerializationContext*  value) ;

constexpr void __cordl_internal_set_indentationSize(int32_t  value) ;

constexpr void __cordl_internal_set_reader(::SouthPointe::Serialization::MessagePack::FormatReader*  value) ;

/// @brief Method .ctor, addr 0x9d0882c, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::SouthPointe::Serialization::MessagePack::SerializationContext*  context) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonConverter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonConverter(JsonConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonConverter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonConverter(JsonConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31739};

/// @brief Field context, offset: 0x10, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::SerializationContext*  ___context;

/// @brief Field reader, offset: 0x18, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::FormatReader*  ___reader;

/// @brief Field builder, offset: 0x20, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___builder;

/// @brief Field indentationSize, offset: 0x28, size: 0x4, def value: None
 int32_t  ___indentationSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::JsonConverter, ___context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::JsonConverter, ___reader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::JsonConverter, ___builder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::JsonConverter, ___indentationSize) == 0x28, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::JsonConverter) == 0x30, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
