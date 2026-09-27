#pragma once
// IWYU pragma private; include "System/Xml/XmlTextWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__Formatting_def.hpp"
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/Xml/zzzz__XmlTextWriter_Namespace_def.hpp"
#include "System/Xml/zzzz__XmlTextWriter_SpecialAttr_def.hpp"
#include "System/Xml/zzzz__XmlTextWriter_State_def.hpp"
#include "System/Xml/zzzz__XmlTextWriter_TagInfo_def.hpp"
#include "System/Xml/zzzz__XmlTextWriter_Token_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTextWriter)
namespace GlobalNamespace {
struct XmlTextWriter_NamespaceState;
}
namespace GlobalNamespace {
struct XmlTextWriter_Namespace;
}
namespace GlobalNamespace {
struct XmlTextWriter_SpecialAttr;
}
namespace GlobalNamespace {
struct XmlTextWriter_State;
}
namespace GlobalNamespace {
struct XmlTextWriter_TagInfo;
}
namespace GlobalNamespace {
struct XmlTextWriter_Token;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
class TextWriter;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml {
struct Formatting;
}
namespace System::Xml {
struct WriteState;
}
namespace System::Xml {
struct XmlSpace;
}
namespace System::Xml {
class XmlTextEncoder;
}
namespace System::Xml {
class XmlTextWriterBase64Encoder;
}
// Forward declare root types
namespace System::Xml {
class XmlTextWriter;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlTextWriter*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlTextWriter*, "System.Xml", "XmlTextWriter");
// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
// Dependencies System.Xml.Formatting, System.Xml.XmlCharType, System.Xml.XmlTextWriter::Namespace, System.Xml.XmlTextWriter::SpecialAttr, System.Xml.XmlTextWriter::State, System.Xml.XmlTextWriter::TagInfo, System.Xml.XmlTextWriter::Token, System.Xml.XmlWriter
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlTextWriter
class CORDL_TYPE XmlTextWriter : public ::System::Xml::XmlWriter {
public:
// Declarations
using Namespace = ::GlobalNamespace::XmlTextWriter_Namespace;

using NamespaceState = ::GlobalNamespace::XmlTextWriter_NamespaceState;

using SpecialAttr = ::GlobalNamespace::XmlTextWriter_SpecialAttr;

using State = ::GlobalNamespace::XmlTextWriter_State;

using TagInfo = ::GlobalNamespace::XmlTextWriter_TagInfo;

using Token = ::GlobalNamespace::XmlTextWriter_Token;

 __declspec(property(get=get_BaseStream)) ::System::IO::Stream*  BaseStream;

 __declspec(property(put=set_Formatting)) ::System::Xml::Formatting  Formatting;

 __declspec(property(put=set_Namespaces)) bool  Namespaces;

 __declspec(property(put=set_QuoteChar)) char16_t  QuoteChar;

 __declspec(property(get=get_WriteState)) ::System::Xml::WriteState  WriteState;

 __declspec(property(get=get_XmlLang)) ::StringW  XmlLang;

 __declspec(property(get=get_XmlSpace)) ::System::Xml::XmlSpace  XmlSpace;

/// @brief Field base64Encoder, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_base64Encoder, put=__cordl_internal_set_base64Encoder)) ::System::Xml::XmlTextWriterBase64Encoder*  base64Encoder;

/// @brief Field curQuoteChar, offset 0x6a, size 0x2 
 __declspec(property(get=__cordl_internal_get_curQuoteChar, put=__cordl_internal_set_curQuoteChar)) char16_t  curQuoteChar;

/// @brief Field currentState, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::XmlTextWriter_State  currentState;

/// @brief Field encoding, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_encoding, put=__cordl_internal_set_encoding)) ::System::Text::Encoding*  encoding;

/// @brief Field flush, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_flush, put=__cordl_internal_set_flush)) bool  flush;

/// @brief Field formatting, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_formatting, put=__cordl_internal_set_formatting)) ::System::Xml::Formatting  formatting;

/// @brief Field indentChar, offset 0x3c, size 0x2 
 __declspec(property(get=__cordl_internal_get_indentChar, put=__cordl_internal_set_indentChar)) char16_t  indentChar;

/// @brief Field indentation, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_indentation, put=__cordl_internal_set_indentation)) int32_t  indentation;

/// @brief Field indented, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_indented, put=__cordl_internal_set_indented)) bool  indented;

/// @brief Field lastToken, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastToken, put=__cordl_internal_set_lastToken)) ::GlobalNamespace::XmlTextWriter_Token  lastToken;

/// @brief Field namespaces, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_namespaces, put=__cordl_internal_set_namespaces)) bool  namespaces;

/// @brief Field nsHashtable, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_nsHashtable, put=__cordl_internal_set_nsHashtable)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  nsHashtable;

/// @brief Field nsStack, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_nsStack, put=__cordl_internal_set_nsStack)) ::ArrayW<::GlobalNamespace::XmlTextWriter_Namespace>  nsStack;

/// @brief Field nsTop, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_nsTop, put=__cordl_internal_set_nsTop)) int32_t  nsTop;

/// @brief Field prefixForXmlNs, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefixForXmlNs, put=__cordl_internal_set_prefixForXmlNs)) ::StringW  prefixForXmlNs;

/// @brief Field quoteChar, offset 0x68, size 0x2 
 __declspec(property(get=__cordl_internal_get_quoteChar, put=__cordl_internal_set_quoteChar)) char16_t  quoteChar;

/// @brief Field specialAttr, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_specialAttr, put=__cordl_internal_set_specialAttr)) ::GlobalNamespace::XmlTextWriter_SpecialAttr  specialAttr;

/// @brief Field stack, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_stack, put=__cordl_internal_set_stack)) ::ArrayW<::GlobalNamespace::XmlTextWriter_TagInfo>  stack;

/// @brief Field stateName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_stateName, put=setStaticF_stateName)) ::ArrayW<::StringW>  stateName;

/// @brief Field stateTable, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateTable, put=__cordl_internal_set_stateTable)) ::ArrayW<::GlobalNamespace::XmlTextWriter_State>  stateTable;

/// @brief Field stateTableDefault, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_stateTableDefault, put=setStaticF_stateTableDefault)) ::ArrayW<::GlobalNamespace::XmlTextWriter_State>  stateTableDefault;

/// @brief Field stateTableDocument, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_stateTableDocument, put=setStaticF_stateTableDocument)) ::ArrayW<::GlobalNamespace::XmlTextWriter_State>  stateTableDocument;

/// @brief Field textWriter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_textWriter, put=__cordl_internal_set_textWriter)) ::System::IO::TextWriter*  textWriter;

/// @brief Field tokenName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tokenName, put=setStaticF_tokenName)) ::ArrayW<::StringW>  tokenName;

/// @brief Field top, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_top, put=__cordl_internal_set_top)) int32_t  top;

/// @brief Field useNsHashtable, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_useNsHashtable, put=__cordl_internal_set_useNsHashtable)) bool  useNsHashtable;

/// @brief Field xmlCharType, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_xmlCharType, put=__cordl_internal_set_xmlCharType)) ::System::Xml::XmlCharType  xmlCharType;

/// @brief Field xmlEncoder, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_xmlEncoder, put=__cordl_internal_set_xmlEncoder)) ::System::Xml::XmlTextEncoder*  xmlEncoder;

/// @brief Method AddNamespace, addr 0xabaddcc, size 0x1d4, virtual false, abstract: false, final false
inline void AddNamespace(::StringW  prefix, ::StringW  ns, bool  declared) ;

/// @brief Method AddToNamespaceHashtable, addr 0xabadfe4, size 0xe8, virtual false, abstract: false, final false
inline void AddToNamespaceHashtable(int32_t  namespaceIndex) ;

/// @brief Method AutoComplete, addr 0xabaa424, size 0x520, virtual false, abstract: false, final false
inline void AutoComplete(::GlobalNamespace::XmlTextWriter_Token  token) ;

/// @brief Method AutoCompleteAll, addr 0xaba9de4, size 0x54, virtual false, abstract: false, final false
inline void AutoCompleteAll() ;

/// @brief Method Close, addr 0xabad080, size 0x12c, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method FindPrefix, addr 0xabaaf6c, size 0xc8, virtual false, abstract: false, final false
inline ::StringW FindPrefix(::StringW  ns) ;

/// @brief Method Flush, addr 0xabad1ac, size 0x1c, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method FlushEncoders, addr 0xabadab8, size 0x24, virtual false, abstract: false, final false
inline void FlushEncoders() ;

/// @brief Method GeneratePrefix, addr 0xababee0, size 0x114, virtual false, abstract: false, final false
inline ::StringW GeneratePrefix() ;

/// @brief Method HandleSpecialAttribute, addr 0xabadbb4, size 0x218, virtual false, abstract: false, final false
inline void HandleSpecialAttribute() ;

/// @brief Method Indent, addr 0xabad648, size 0xd0, virtual false, abstract: false, final false
inline void Indent(bool  beforeEndElement) ;

/// @brief Method InternalWriteEndElement, addr 0xabab400, size 0x2dc, virtual false, abstract: false, final false
inline void InternalWriteEndElement(bool  longFormat) ;

/// @brief Method InternalWriteName, addr 0xabad488, size 0x3c, virtual false, abstract: false, final false
inline void InternalWriteName(::StringW  name, bool  isNCName) ;

/// @brief Method InternalWriteProcessingInstruction, addr 0xabac680, size 0xf8, virtual false, abstract: false, final false
inline void InternalWriteProcessingInstruction(::StringW  name, ::StringW  text) ;

/// @brief Method LookupNamespace, addr 0xabaae90, size 0xdc, virtual false, abstract: false, final false
inline int32_t LookupNamespace(::StringW  prefix) ;

/// @brief Method LookupNamespaceInCurrentScope, addr 0xababdac, size 0x134, virtual false, abstract: false, final false
inline int32_t LookupNamespaceInCurrentScope(::StringW  prefix) ;

/// @brief Method LookupPrefix, addr 0xabad4c4, size 0xdc, virtual true, abstract: false, final false
inline ::StringW LookupPrefix(::StringW  ns) ;

static inline ::System::Xml::XmlTextWriter* New_ctor() ;

static inline ::System::Xml::XmlTextWriter* New_ctor(::StringW  filename, ::System::Text::Encoding*  encoding) ;

static inline ::System::Xml::XmlTextWriter* New_ctor(::System::IO::Stream*  w, ::System::Text::Encoding*  encoding) ;

static inline ::System::Xml::XmlTextWriter* New_ctor(::System::IO::TextWriter*  w) ;

/// @brief Method PopNamespaces, addr 0xabadadc, size 0xd8, virtual false, abstract: false, final false
inline void PopNamespaces(int32_t  indexFrom, int32_t  indexTo) ;

/// @brief Method PushNamespace, addr 0xabab034, size 0x264, virtual false, abstract: false, final false
inline void PushNamespace(::StringW  prefix, ::StringW  ns, bool  declared) ;

/// @brief Method PushStack, addr 0xabaadac, size 0xe4, virtual false, abstract: false, final false
inline void PushStack() ;

/// @brief Method StartDocument, addr 0xaba9888, size 0x384, virtual false, abstract: false, final false
inline void StartDocument(int32_t  standalone) ;

/// @brief Method ValidateName, addr 0xabaa25c, size 0x1c8, virtual false, abstract: false, final false
inline void ValidateName(::StringW  name, bool  isNCName) ;

/// @brief Method VerifyPrefixXml, addr 0xabab298, size 0x160, virtual false, abstract: false, final false
inline void VerifyPrefixXml(::StringW  prefix, ::StringW  ns) ;

/// @brief Method WriteBase64, addr 0xabace34, size 0x158, virtual true, abstract: false, final false
inline void WriteBase64(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteBinHex, addr 0xabacf8c, size 0xd0, virtual true, abstract: false, final false
inline void WriteBinHex(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteCData, addr 0xabac094, size 0x1c0, virtual true, abstract: false, final false
inline void WriteCData(::StringW  text) ;

/// @brief Method WriteCharEntity, addr 0xabac840, size 0xbc, virtual true, abstract: false, final false
inline void WriteCharEntity(char16_t  ch) ;

/// @brief Method WriteChars, addr 0xabacbd0, size 0xd4, virtual true, abstract: false, final false
inline void WriteChars(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteComment, addr 0xabac254, size 0x1fc, virtual true, abstract: false, final false
inline void WriteComment(::StringW  text) ;

/// @brief Method WriteDocType, addr 0xaba9e38, size 0x424, virtual true, abstract: false, final false
inline void WriteDocType(::StringW  name, ::StringW  pubid, ::StringW  sysid, ::StringW  subset) ;

/// @brief Method WriteEndAttribute, addr 0xababff4, size 0xa0, virtual true, abstract: false, final false
inline void WriteEndAttribute() ;

/// @brief Method WriteEndAttributeQuote, addr 0xabad718, size 0x48, virtual false, abstract: false, final false
inline void WriteEndAttributeQuote() ;

/// @brief Method WriteEndDocument, addr 0xaba9c20, size 0x1c4, virtual true, abstract: false, final false
inline void WriteEndDocument() ;

/// @brief Method WriteEndElement, addr 0xabab3f8, size 0x8, virtual true, abstract: false, final false
inline void WriteEndElement() ;

/// @brief Method WriteEndStartTag, addr 0xabad760, size 0x358, virtual false, abstract: false, final false
inline void WriteEndStartTag(bool  empty) ;

/// @brief Method WriteEntityRef, addr 0xabac778, size 0xc8, virtual true, abstract: false, final false
inline void WriteEntityRef(::StringW  name) ;

/// @brief Method WriteFullEndElement, addr 0xabab6dc, size 0x8, virtual true, abstract: false, final false
inline void WriteFullEndElement() ;

/// @brief Method WriteProcessingInstruction, addr 0xabac450, size 0x230, virtual true, abstract: false, final false
inline void WriteProcessingInstruction(::StringW  name, ::StringW  text) ;

/// @brief Method WriteQualifiedName, addr 0xabad1c8, size 0x2c0, virtual true, abstract: false, final false
inline void WriteQualifiedName(::StringW  localName, ::StringW  ns) ;

/// @brief Method WriteRaw, addr 0xabacca4, size 0xd4, virtual true, abstract: false, final false
inline void WriteRaw(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteRaw, addr 0xabacd78, size 0xbc, virtual true, abstract: false, final false
inline void WriteRaw(::StringW  data) ;

/// @brief Method WriteStartAttribute, addr 0xabab6e4, size 0x6c8, virtual true, abstract: false, final false
inline void WriteStartAttribute(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method WriteStartDocument, addr 0xaba9880, size 0x8, virtual true, abstract: false, final false
inline void WriteStartDocument() ;

/// @brief Method WriteStartDocument, addr 0xaba9c0c, size 0x14, virtual true, abstract: false, final false
inline void WriteStartDocument(bool  standalone) ;

/// @brief Method WriteStartElement, addr 0xabaa944, size 0x468, virtual true, abstract: false, final false
inline void WriteStartElement(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method WriteString, addr 0xabaca44, size 0xc8, virtual true, abstract: false, final false
inline void WriteString(::StringW  text) ;

/// @brief Method WriteSurrogateCharEntity, addr 0xabacb0c, size 0xc4, virtual true, abstract: false, final false
inline void WriteSurrogateCharEntity(char16_t  lowChar, char16_t  highChar) ;

/// @brief Method WriteWhitespace, addr 0xabac8fc, size 0x148, virtual true, abstract: false, final false
inline void WriteWhitespace(::StringW  ws) ;

constexpr ::System::Xml::XmlTextWriterBase64Encoder* const& __cordl_internal_get_base64Encoder() const;

constexpr ::System::Xml::XmlTextWriterBase64Encoder*& __cordl_internal_get_base64Encoder() ;

constexpr char16_t const& __cordl_internal_get_curQuoteChar() const;

constexpr char16_t& __cordl_internal_get_curQuoteChar() ;

constexpr ::GlobalNamespace::XmlTextWriter_State const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::XmlTextWriter_State& __cordl_internal_get_currentState() ;

constexpr ::System::Text::Encoding* const& __cordl_internal_get_encoding() const;

constexpr ::System::Text::Encoding*& __cordl_internal_get_encoding() ;

constexpr bool const& __cordl_internal_get_flush() const;

constexpr bool& __cordl_internal_get_flush() ;

constexpr ::System::Xml::Formatting const& __cordl_internal_get_formatting() const;

constexpr ::System::Xml::Formatting& __cordl_internal_get_formatting() ;

constexpr char16_t const& __cordl_internal_get_indentChar() const;

constexpr char16_t& __cordl_internal_get_indentChar() ;

constexpr int32_t const& __cordl_internal_get_indentation() const;

constexpr int32_t& __cordl_internal_get_indentation() ;

constexpr bool const& __cordl_internal_get_indented() const;

constexpr bool& __cordl_internal_get_indented() ;

constexpr ::GlobalNamespace::XmlTextWriter_Token const& __cordl_internal_get_lastToken() const;

constexpr ::GlobalNamespace::XmlTextWriter_Token& __cordl_internal_get_lastToken() ;

constexpr bool const& __cordl_internal_get_namespaces() const;

constexpr bool& __cordl_internal_get_namespaces() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get_nsHashtable() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get_nsHashtable() ;

constexpr ::ArrayW<::GlobalNamespace::XmlTextWriter_Namespace> const& __cordl_internal_get_nsStack() const;

constexpr ::ArrayW<::GlobalNamespace::XmlTextWriter_Namespace>& __cordl_internal_get_nsStack() ;

constexpr int32_t const& __cordl_internal_get_nsTop() const;

constexpr int32_t& __cordl_internal_get_nsTop() ;

constexpr ::StringW const& __cordl_internal_get_prefixForXmlNs() const;

constexpr ::StringW& __cordl_internal_get_prefixForXmlNs() ;

constexpr char16_t const& __cordl_internal_get_quoteChar() const;

constexpr char16_t& __cordl_internal_get_quoteChar() ;

constexpr ::GlobalNamespace::XmlTextWriter_SpecialAttr const& __cordl_internal_get_specialAttr() const;

constexpr ::GlobalNamespace::XmlTextWriter_SpecialAttr& __cordl_internal_get_specialAttr() ;

constexpr ::ArrayW<::GlobalNamespace::XmlTextWriter_TagInfo> const& __cordl_internal_get_stack() const;

constexpr ::ArrayW<::GlobalNamespace::XmlTextWriter_TagInfo>& __cordl_internal_get_stack() ;

constexpr ::ArrayW<::GlobalNamespace::XmlTextWriter_State> const& __cordl_internal_get_stateTable() const;

constexpr ::ArrayW<::GlobalNamespace::XmlTextWriter_State>& __cordl_internal_get_stateTable() ;

constexpr ::System::IO::TextWriter* const& __cordl_internal_get_textWriter() const;

constexpr ::System::IO::TextWriter*& __cordl_internal_get_textWriter() ;

constexpr int32_t const& __cordl_internal_get_top() const;

constexpr int32_t& __cordl_internal_get_top() ;

constexpr bool const& __cordl_internal_get_useNsHashtable() const;

constexpr bool& __cordl_internal_get_useNsHashtable() ;

constexpr ::System::Xml::XmlCharType const& __cordl_internal_get_xmlCharType() const;

constexpr ::System::Xml::XmlCharType& __cordl_internal_get_xmlCharType() ;

constexpr ::System::Xml::XmlTextEncoder* const& __cordl_internal_get_xmlEncoder() const;

constexpr ::System::Xml::XmlTextEncoder*& __cordl_internal_get_xmlEncoder() ;

constexpr void __cordl_internal_set_base64Encoder(::System::Xml::XmlTextWriterBase64Encoder*  value) ;

constexpr void __cordl_internal_set_curQuoteChar(char16_t  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::XmlTextWriter_State  value) ;

constexpr void __cordl_internal_set_encoding(::System::Text::Encoding*  value) ;

constexpr void __cordl_internal_set_flush(bool  value) ;

constexpr void __cordl_internal_set_formatting(::System::Xml::Formatting  value) ;

constexpr void __cordl_internal_set_indentChar(char16_t  value) ;

constexpr void __cordl_internal_set_indentation(int32_t  value) ;

constexpr void __cordl_internal_set_indented(bool  value) ;

constexpr void __cordl_internal_set_lastToken(::GlobalNamespace::XmlTextWriter_Token  value) ;

constexpr void __cordl_internal_set_namespaces(bool  value) ;

constexpr void __cordl_internal_set_nsHashtable(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

constexpr void __cordl_internal_set_nsStack(::ArrayW<::GlobalNamespace::XmlTextWriter_Namespace>  value) ;

constexpr void __cordl_internal_set_nsTop(int32_t  value) ;

constexpr void __cordl_internal_set_prefixForXmlNs(::StringW  value) ;

constexpr void __cordl_internal_set_quoteChar(char16_t  value) ;

constexpr void __cordl_internal_set_specialAttr(::GlobalNamespace::XmlTextWriter_SpecialAttr  value) ;

constexpr void __cordl_internal_set_stack(::ArrayW<::GlobalNamespace::XmlTextWriter_TagInfo>  value) ;

constexpr void __cordl_internal_set_stateTable(::ArrayW<::GlobalNamespace::XmlTextWriter_State>  value) ;

constexpr void __cordl_internal_set_textWriter(::System::IO::TextWriter*  value) ;

constexpr void __cordl_internal_set_top(int32_t  value) ;

constexpr void __cordl_internal_set_useNsHashtable(bool  value) ;

constexpr void __cordl_internal_set_xmlCharType(::System::Xml::XmlCharType  value) ;

constexpr void __cordl_internal_set_xmlEncoder(::System::Xml::XmlTextEncoder*  value) ;

/// @brief Method .ctor, addr 0xaba9498, size 0x15c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xaba9760, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::StringW  filename, ::System::Text::Encoding*  encoding) ;

/// @brief Method .ctor, addr 0xaba9658, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  w, ::System::Text::Encoding*  encoding) ;

/// @brief Method .ctor, addr 0xaba4604, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::IO::TextWriter*  w) ;

static inline ::ArrayW<::StringW> getStaticF_stateName() ;

static inline ::ArrayW<::GlobalNamespace::XmlTextWriter_State> getStaticF_stateTableDefault() ;

static inline ::ArrayW<::GlobalNamespace::XmlTextWriter_State> getStaticF_stateTableDocument() ;

static inline ::ArrayW<::StringW> getStaticF_tokenName() ;

/// @brief Method get_BaseStream, addr 0xaba97e0, size 0x8c, virtual false, abstract: false, final false
inline ::System::IO::Stream* get_BaseStream() ;

/// @brief Method get_WriteState, addr 0xabad05c, size 0x24, virtual true, abstract: false, final false
inline ::System::Xml::WriteState get_WriteState() ;

/// @brief Method get_XmlLang, addr 0xabad5f4, size 0x54, virtual true, abstract: false, final false
inline ::StringW get_XmlLang() ;

/// @brief Method get_XmlSpace, addr 0xabad5a0, size 0x54, virtual true, abstract: false, final false
inline ::System::Xml::XmlSpace get_XmlSpace() ;

static inline void setStaticF_stateName(::ArrayW<::StringW>  value) ;

static inline void setStaticF_stateTableDefault(::ArrayW<::GlobalNamespace::XmlTextWriter_State>  value) ;

static inline void setStaticF_stateTableDocument(::ArrayW<::GlobalNamespace::XmlTextWriter_State>  value) ;

static inline void setStaticF_tokenName(::ArrayW<::StringW>  value) ;

/// @brief Method set_Formatting, addr 0xaba986c, size 0x14, virtual false, abstract: false, final false
inline void set_Formatting(::System::Xml::Formatting  value) ;

/// @brief Method set_Namespaces, addr 0xaba47d0, size 0x6c, virtual false, abstract: false, final false
inline void set_Namespaces(bool  value) ;

/// @brief Method set_QuoteChar, addr 0xaba401c, size 0x8c, virtual false, abstract: false, final false
inline void set_QuoteChar(char16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlTextWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlTextWriter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlTextWriter(XmlTextWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlTextWriter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlTextWriter(XmlTextWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14073};

/// @brief Field textWriter, offset: 0x18, size: 0x8, def value: None
 ::System::IO::TextWriter*  ___textWriter;

/// @brief Field xmlEncoder, offset: 0x20, size: 0x8, def value: None
 ::System::Xml::XmlTextEncoder*  ___xmlEncoder;

/// @brief Field encoding, offset: 0x28, size: 0x8, def value: None
 ::System::Text::Encoding*  ___encoding;

/// @brief Field formatting, offset: 0x30, size: 0x4, def value: None
 ::System::Xml::Formatting  ___formatting;

/// @brief Field indented, offset: 0x34, size: 0x1, def value: None
 bool  ___indented;

/// @brief Field indentation, offset: 0x38, size: 0x4, def value: None
 int32_t  ___indentation;

/// @brief Field indentChar, offset: 0x3c, size: 0x2, def value: None
 char16_t  ___indentChar;

/// @brief Field stack, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::XmlTextWriter_TagInfo>  ___stack;

/// @brief Field top, offset: 0x48, size: 0x4, def value: None
 int32_t  ___top;

/// @brief Field stateTable, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::XmlTextWriter_State>  ___stateTable;

/// @brief Field currentState, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::XmlTextWriter_State  ___currentState;

/// @brief Field lastToken, offset: 0x5c, size: 0x4, def value: None
 ::GlobalNamespace::XmlTextWriter_Token  ___lastToken;

/// @brief Field base64Encoder, offset: 0x60, size: 0x8, def value: None
 ::System::Xml::XmlTextWriterBase64Encoder*  ___base64Encoder;

/// @brief Field quoteChar, offset: 0x68, size: 0x2, def value: None
 char16_t  ___quoteChar;

/// @brief Field curQuoteChar, offset: 0x6a, size: 0x2, def value: None
 char16_t  ___curQuoteChar;

/// @brief Field namespaces, offset: 0x6c, size: 0x1, def value: None
 bool  ___namespaces;

/// @brief Field specialAttr, offset: 0x70, size: 0x4, def value: None
 ::GlobalNamespace::XmlTextWriter_SpecialAttr  ___specialAttr;

/// @brief Field prefixForXmlNs, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___prefixForXmlNs;

/// @brief Field flush, offset: 0x80, size: 0x1, def value: None
 bool  ___flush;

/// @brief Field nsStack, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::XmlTextWriter_Namespace>  ___nsStack;

/// @brief Field nsTop, offset: 0x90, size: 0x4, def value: None
 int32_t  ___nsTop;

/// @brief Field nsHashtable, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ___nsHashtable;

/// @brief Field useNsHashtable, offset: 0xa0, size: 0x1, def value: None
 bool  ___useNsHashtable;

/// @brief Field xmlCharType, offset: 0xa8, size: 0x8, def value: None
 ::System::Xml::XmlCharType  ___xmlCharType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlTextWriter, ___textWriter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___xmlEncoder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___encoding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___formatting) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___indented) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___indentation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___indentChar) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___stack) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___top) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___stateTable) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___currentState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___lastToken) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___base64Encoder) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___quoteChar) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___curQuoteChar) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___namespaces) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___specialAttr) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___prefixForXmlNs) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___flush) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___nsStack) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___nsTop) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___nsHashtable) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___useNsHashtable) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___xmlCharType) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlTextWriter) == 0xb0, "Size mismatch!");

} // namespace end def System::Xml
