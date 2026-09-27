#pragma once
// IWYU pragma private; include "System/Xml/XmlTextReaderImpl_ParsingState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTextReaderImpl_ParsingState)
namespace System::IO {
class Stream;
}
namespace System::IO {
class TextReader;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml {
class IDtdEntityInfo;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace GlobalNamespace {
struct XmlTextReaderImpl_ParsingState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlTextReaderImpl_ParsingState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlTextReaderImpl_ParsingState, "System.Xml", "XmlTextReaderImpl/ParsingState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlTextReaderImpl/ParsingState
struct CORDL_TYPE XmlTextReaderImpl_ParsingState {
public:
// Declarations
 __declspec(property(get=get_LineNo)) int32_t  LineNo;

 __declspec(property(get=get_LinePos)) int32_t  LinePos;

/// @brief Method Clear, addr 0xaba8254, size 0xbc, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Close, addr 0xaba8310, size 0x38, virtual false, abstract: false, final false
inline void Close(bool  closeInput) ;

/// @brief Method get_LineNo, addr 0xaba8348, size 0x8, virtual false, abstract: false, final false
inline int32_t get_LineNo() ;

/// @brief Method get_LinePos, addr 0xaba8350, size 0x10, virtual false, abstract: false, final false
inline int32_t get_LinePos() ;

// Ctor Parameters []
// @brief default ctor
constexpr XmlTextReaderImpl_ParsingState() ;

// Ctor Parameters [CppParam { name: "chars", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "charPos", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "charsUsed", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "encoding", ty: "::System::Text::Encoding*", modifiers: "", def_value: None, comment: None }, CppParam { name: "appendMode", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "decoder", ty: "::System::Text::Decoder*", modifiers: "", def_value: None, comment: None }, CppParam { name: "bytes", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "bytePos", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bytesUsed", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "textReader", ty: "::System::IO::TextReader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "lineNo", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lineStartPos", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "baseUriStr", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "baseUri", ty: "::System::Uri*", modifiers: "", def_value: None, comment: None }, CppParam { name: "isEof", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isStreamEof", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "entity", ty: "::System::Xml::IDtdEntityInfo*", modifiers: "", def_value: None, comment: None }, CppParam { name: "entityId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "eolNormalized", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "entityResolvedManually", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr XmlTextReaderImpl_ParsingState(::ArrayW<char16_t>  chars, int32_t  charPos, int32_t  charsUsed, ::System::Text::Encoding*  encoding, bool  appendMode, ::System::IO::Stream*  stream, ::System::Text::Decoder*  decoder, ::ArrayW<uint8_t>  bytes, int32_t  bytePos, int32_t  bytesUsed, ::System::IO::TextReader*  textReader, int32_t  lineNo, int32_t  lineStartPos, ::StringW  baseUriStr, ::System::Uri*  baseUri, bool  isEof, bool  isStreamEof, ::System::Xml::IDtdEntityInfo*  entity, int32_t  entityId, bool  eolNormalized, bool  entityResolvedManually) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14058};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field chars, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<char16_t>  chars;

/// @brief Field charPos, offset: 0x8, size: 0x4, def value: None
 int32_t  charPos;

/// @brief Field charsUsed, offset: 0xc, size: 0x4, def value: None
 int32_t  charsUsed;

/// @brief Field encoding, offset: 0x10, size: 0x8, def value: None
 ::System::Text::Encoding*  encoding;

/// @brief Field appendMode, offset: 0x18, size: 0x1, def value: None
 bool  appendMode;

/// @brief Field stream, offset: 0x20, size: 0x8, def value: None
 ::System::IO::Stream*  stream;

/// @brief Field decoder, offset: 0x28, size: 0x8, def value: None
 ::System::Text::Decoder*  decoder;

/// @brief Field bytes, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  bytes;

/// @brief Field bytePos, offset: 0x38, size: 0x4, def value: None
 int32_t  bytePos;

/// @brief Field bytesUsed, offset: 0x3c, size: 0x4, def value: None
 int32_t  bytesUsed;

/// @brief Field textReader, offset: 0x40, size: 0x8, def value: None
 ::System::IO::TextReader*  textReader;

/// @brief Field lineNo, offset: 0x48, size: 0x4, def value: None
 int32_t  lineNo;

/// @brief Field lineStartPos, offset: 0x4c, size: 0x4, def value: None
 int32_t  lineStartPos;

/// @brief Field baseUriStr, offset: 0x50, size: 0x8, def value: None
 ::StringW  baseUriStr;

/// @brief Field baseUri, offset: 0x58, size: 0x8, def value: None
 ::System::Uri*  baseUri;

/// @brief Field isEof, offset: 0x60, size: 0x1, def value: None
 bool  isEof;

/// @brief Field isStreamEof, offset: 0x61, size: 0x1, def value: None
 bool  isStreamEof;

/// @brief Field entity, offset: 0x68, size: 0x8, def value: None
 ::System::Xml::IDtdEntityInfo*  entity;

/// @brief Field entityId, offset: 0x70, size: 0x4, def value: None
 int32_t  entityId;

/// @brief Field eolNormalized, offset: 0x74, size: 0x1, def value: None
 bool  eolNormalized;

/// @brief Field entityResolvedManually, offset: 0x75, size: 0x1, def value: None
 bool  entityResolvedManually;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingState, chars) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingState, charPos) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingState, charsUsed) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingState, encoding) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingState, appendMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingState, stream) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingState, decoder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingState, bytes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingState, bytePos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingState, bytesUsed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingState, textReader) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingState, lineNo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingState, lineStartPos) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingState, baseUriStr) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingState, baseUri) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingState, isEof) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingState, isStreamEof) == 0x61, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingState, entity) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingState, entityId) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingState, eolNormalized) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingState, entityResolvedManually) == 0x75, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlTextReaderImpl_ParsingState) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
