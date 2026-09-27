#pragma once
// IWYU pragma private; include "System/Xml/XmlTextReaderImpl_ParsingState.hpp"
#include "System/Xml/zzzz__XmlTextReaderImpl_ParsingState_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Xml/zzzz__IDtdEntityInfo_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XmlTextReaderImpl_ParsingState.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlTextReaderImpl_ParsingState::*)()>(&::GlobalNamespace::XmlTextReaderImpl_ParsingState::Clear)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaba8254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlTextReaderImpl_ParsingState>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlTextReaderImpl_ParsingState.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlTextReaderImpl_ParsingState::*)(bool)>(&::GlobalNamespace::XmlTextReaderImpl_ParsingState::Close)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaba8310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlTextReaderImpl_ParsingState>(),
                        {"Close", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlTextReaderImpl_ParsingState.get_LineNo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::XmlTextReaderImpl_ParsingState::*)()>(&::GlobalNamespace::XmlTextReaderImpl_ParsingState::get_LineNo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaba8348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlTextReaderImpl_ParsingState>(),
                        {"get_LineNo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlTextReaderImpl_ParsingState.get_LinePos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::XmlTextReaderImpl_ParsingState::*)()>(&::GlobalNamespace::XmlTextReaderImpl_ParsingState::get_LinePos)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaba8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlTextReaderImpl_ParsingState>(),
                        {"get_LinePos", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XmlTextReaderImpl_ParsingState::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlTextReaderImpl_ParsingState>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::XmlTextReaderImpl_ParsingState::Close(bool  closeInput)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlTextReaderImpl_ParsingState>(),
                        {"Close", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, closeInput);
}
inline int32_t GlobalNamespace::XmlTextReaderImpl_ParsingState::get_LineNo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlTextReaderImpl_ParsingState>(),
                        {"get_LineNo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::XmlTextReaderImpl_ParsingState::get_LinePos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlTextReaderImpl_ParsingState>(),
                        {"get_LinePos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "chars", ty: "::ArrayW<char16_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "charPos", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "charsUsed", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "encoding", ty: "::System::Text::Encoding*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "appendMode", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "decoder", ty: "::System::Text::Decoder*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bytes", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bytePos", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bytesUsed", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textReader", ty: "::System::IO::TextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lineNo", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lineStartPos", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "baseUriStr", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "baseUri", ty: "::System::Uri*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isEof", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isStreamEof", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "entity", ty: "::System::Xml::IDtdEntityInfo*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "entityId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "eolNormalized", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "entityResolvedManually", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlTextReaderImpl_ParsingState::XmlTextReaderImpl_ParsingState(::ArrayW<char16_t>  chars, int32_t  charPos, int32_t  charsUsed, ::System::Text::Encoding*  encoding, bool  appendMode, ::System::IO::Stream*  stream, ::System::Text::Decoder*  decoder, ::ArrayW<uint8_t>  bytes, int32_t  bytePos, int32_t  bytesUsed, ::System::IO::TextReader*  textReader, int32_t  lineNo, int32_t  lineStartPos, ::StringW  baseUriStr, ::System::Uri*  baseUri, bool  isEof, bool  isStreamEof, ::System::Xml::IDtdEntityInfo*  entity, int32_t  entityId, bool  eolNormalized, bool  entityResolvedManually) noexcept  {
this->chars = chars;
this->charPos = charPos;
this->charsUsed = charsUsed;
this->encoding = encoding;
this->appendMode = appendMode;
this->stream = stream;
this->decoder = decoder;
this->bytes = bytes;
this->bytePos = bytePos;
this->bytesUsed = bytesUsed;
this->textReader = textReader;
this->lineNo = lineNo;
this->lineStartPos = lineStartPos;
this->baseUriStr = baseUriStr;
this->baseUri = baseUri;
this->isEof = isEof;
this->isStreamEof = isStreamEof;
this->entity = entity;
this->entityId = entityId;
this->eolNormalized = eolNormalized;
this->entityResolvedManually = entityResolvedManually;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlTextReaderImpl_ParsingState::XmlTextReaderImpl_ParsingState()   {
}
