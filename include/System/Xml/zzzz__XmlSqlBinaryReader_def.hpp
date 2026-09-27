#pragma once
// IWYU pragma private; include "System/Xml/XmlSqlBinaryReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__BinXmlToken_def.hpp"
#include "System/Xml/zzzz__DtdProcessing_def.hpp"
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlSqlBinaryReader_AttrInfo_def.hpp"
#include "System/Xml/zzzz__XmlSqlBinaryReader_ElemInfo_def.hpp"
#include "System/Xml/zzzz__XmlSqlBinaryReader_QName_def.hpp"
#include "System/Xml/zzzz__XmlSqlBinaryReader_ScanState_def.hpp"
#include "System/Xml/zzzz__XmlSqlBinaryReader_SymbolTables_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSqlBinaryReader)
namespace GlobalNamespace {
struct XmlSqlBinaryReader_AttrInfo;
}
namespace GlobalNamespace {
struct XmlSqlBinaryReader_ElemInfo;
}
namespace GlobalNamespace {
struct XmlSqlBinaryReader_QName;
}
namespace GlobalNamespace {
struct XmlSqlBinaryReader_ScanState;
}
namespace GlobalNamespace {
struct XmlSqlBinaryReader_SymbolTables;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml {
struct BinXmlToken;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
struct ReadState;
}
namespace System::Xml {
class SecureStringHasher;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
struct XmlNamespaceScope;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlReaderSettings;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
struct XmlSpace;
}
namespace System::Xml {
class XmlSqlBinaryReader_NamespaceDecl;
}
namespace System::Xml {
class XmlSqlBinaryReader_NestedBinXml;
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
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml {
class XmlSqlBinaryReader;
}
namespace System::Xml {
class XmlSqlBinaryReader_NamespaceDecl;
}
namespace System::Xml {
class XmlSqlBinaryReader_NestedBinXml;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlSqlBinaryReader*);
MARK_REF_T(::System::Xml::XmlSqlBinaryReader_NamespaceDecl*);
MARK_REF_T(::System::Xml::XmlSqlBinaryReader_NestedBinXml*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlSqlBinaryReader*, "System.Xml", "XmlSqlBinaryReader");
DEFINE_IL2CPP_CLASS(::System::Xml::XmlSqlBinaryReader_NamespaceDecl*, "System.Xml", "XmlSqlBinaryReader/NamespaceDecl");
DEFINE_IL2CPP_CLASS(::System::Xml::XmlSqlBinaryReader_NestedBinXml*, "System.Xml", "XmlSqlBinaryReader/NestedBinXml");
// Dependencies System.Type, System.Xml.BinXmlToken, System.Xml.DtdProcessing, System.Xml.ReadState, System.Xml.XmlCharType, System.Xml.XmlNodeType, System.Xml.XmlReader, System.Xml.XmlSqlBinaryReader::AttrInfo, System.Xml.XmlSqlBinaryReader::ElemInfo, System.Xml.XmlSqlBinaryReader::QName, System.Xml.XmlSqlBinaryReader::ScanState, System.Xml.XmlSqlBinaryReader::SymbolTables
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlSqlBinaryReader
class CORDL_TYPE XmlSqlBinaryReader : public ::System::Xml::XmlReader {
public:
// Declarations
using AttrInfo = ::GlobalNamespace::XmlSqlBinaryReader_AttrInfo;

using ElemInfo = ::GlobalNamespace::XmlSqlBinaryReader_ElemInfo;

using QName = ::GlobalNamespace::XmlSqlBinaryReader_QName;

using ScanState = ::GlobalNamespace::XmlSqlBinaryReader_ScanState;

using SymbolTables = ::GlobalNamespace::XmlSqlBinaryReader_SymbolTables;

using NamespaceDecl = ::System::Xml::XmlSqlBinaryReader_NamespaceDecl;

using NestedBinXml = ::System::Xml::XmlSqlBinaryReader_NestedBinXml;

 __declspec(property(get=get_AttributeCount)) int32_t  AttributeCount;

 __declspec(property(get=get_BaseURI)) ::StringW  BaseURI;

 __declspec(property(get=get_Depth)) int32_t  Depth;

 __declspec(property(get=get_IsEmptyElement)) bool  IsEmptyElement;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_NameTable)) ::System::Xml::XmlNameTable*  NameTable;

 __declspec(property(get=get_NamespaceURI)) ::StringW  NamespaceURI;

 __declspec(property(get=get_NodeType)) ::System::Xml::XmlNodeType  NodeType;

 __declspec(property(get=get_Prefix)) ::StringW  Prefix;

 __declspec(property(get=get_ReadState)) ::System::Xml::ReadState  ReadState;

/// @brief Field ScanState2ReadState, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScanState2ReadState, put=setStaticF_ScanState2ReadState)) ::ArrayW<::System::Xml::ReadState>  ScanState2ReadState;

 __declspec(property(get=get_Settings)) ::System::Xml::XmlReaderSettings*  Settings;

/// @brief Field TokenTypeMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TokenTypeMap, put=setStaticF_TokenTypeMap)) ::ArrayW<::System::Type*>  TokenTypeMap;

/// @brief Field TypeOfObject, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TypeOfObject, put=setStaticF_TypeOfObject)) ::System::Type*  TypeOfObject;

/// @brief Field TypeOfString, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TypeOfString, put=setStaticF_TypeOfString)) ::System::Type*  TypeOfString;

 __declspec(property(get=get_Value)) ::StringW  Value;

 __declspec(property(get=get_ValueType)) ::System::Type*  ValueType;

 __declspec(property(get=get_XmlLang)) ::StringW  XmlLang;

 __declspec(property(get=get_XmlSpace)) ::System::Xml::XmlSpace  XmlSpace;

/// @brief Field XsdKatmaiTimeScaleToValueLengthMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_XsdKatmaiTimeScaleToValueLengthMap, put=setStaticF_XsdKatmaiTimeScaleToValueLengthMap)) ::ArrayW<uint8_t>  XsdKatmaiTimeScaleToValueLengthMap;

 __declspec(property(get=get_EOF)) bool  _cordl_EOF;

/// @brief Field attrCount, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_attrCount, put=__cordl_internal_set_attrCount)) int32_t  attrCount;

/// @brief Field attrHashTbl, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_attrHashTbl, put=__cordl_internal_set_attrHashTbl)) ::ArrayW<int32_t>  attrHashTbl;

/// @brief Field attrIndex, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_attrIndex, put=__cordl_internal_set_attrIndex)) int32_t  attrIndex;

/// @brief Field attributes, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::ArrayW<::GlobalNamespace::XmlSqlBinaryReader_AttrInfo>  attributes;

/// @brief Field baseUri, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseUri, put=__cordl_internal_set_baseUri)) ::StringW  baseUri;

/// @brief Field checkCharacters, offset 0x139, size 0x1 
 __declspec(property(get=__cordl_internal_get_checkCharacters, put=__cordl_internal_set_checkCharacters)) bool  checkCharacters;

/// @brief Field closeInput, offset 0x138, size 0x1 
 __declspec(property(get=__cordl_internal_get_closeInput, put=__cordl_internal_set_closeInput)) bool  closeInput;

/// @brief Field data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::ArrayW<uint8_t>  data;

/// @brief Field docState, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_docState, put=__cordl_internal_set_docState)) int32_t  docState;

/// @brief Field dtdProcessing, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_dtdProcessing, put=__cordl_internal_set_dtdProcessing)) ::System::Xml::DtdProcessing  dtdProcessing;

/// @brief Field elemDepth, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_elemDepth, put=__cordl_internal_set_elemDepth)) int32_t  elemDepth;

/// @brief Field elementStack, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementStack, put=__cordl_internal_set_elementStack)) ::ArrayW<::GlobalNamespace::XmlSqlBinaryReader_ElemInfo>  elementStack;

/// @brief Field end, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_end, put=__cordl_internal_set_end)) int32_t  end;

/// @brief Field eof, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_eof, put=__cordl_internal_set_eof)) bool  eof;

/// @brief Field hasTypedValue, offset 0x10c, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasTypedValue, put=__cordl_internal_set_hasTypedValue)) bool  hasTypedValue;

/// @brief Field hasher, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_hasher, put=__cordl_internal_set_hasher)) ::System::Xml::SecureStringHasher*  hasher;

/// @brief Field ignoreComments, offset 0x13c, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreComments, put=__cordl_internal_set_ignoreComments)) bool  ignoreComments;

/// @brief Field ignorePIs, offset 0x13b, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignorePIs, put=__cordl_internal_set_ignorePIs)) bool  ignorePIs;

/// @brief Field ignoreWhitespace, offset 0x13a, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreWhitespace, put=__cordl_internal_set_ignoreWhitespace)) bool  ignoreWhitespace;

/// @brief Field inStrm, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_inStrm, put=__cordl_internal_set_inStrm)) ::System::IO::Stream*  inStrm;

/// @brief Field isEmpty, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get_isEmpty, put=__cordl_internal_set_isEmpty)) bool  isEmpty;

/// @brief Field mark, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_mark, put=__cordl_internal_set_mark)) int32_t  mark;

/// @brief Field namespaces, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_namespaces, put=__cordl_internal_set_namespaces)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::XmlSqlBinaryReader_NamespaceDecl*>*  namespaces;

/// @brief Field nodetype, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_nodetype, put=__cordl_internal_set_nodetype)) ::System::Xml::XmlNodeType  nodetype;

/// @brief Field nsxmlns, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_nsxmlns, put=__cordl_internal_set_nsxmlns)) ::StringW  nsxmlns;

/// @brief Field offset, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) int64_t  offset;

/// @brief Field parentNodeType, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_parentNodeType, put=__cordl_internal_set_parentNodeType)) ::System::Xml::XmlNodeType  parentNodeType;

/// @brief Field pos, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_pos, put=__cordl_internal_set_pos)) int32_t  pos;

/// @brief Field posAfterAttrs, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_posAfterAttrs, put=__cordl_internal_set_posAfterAttrs)) int32_t  posAfterAttrs;

/// @brief Field prevNameInfo, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevNameInfo, put=__cordl_internal_set_prevNameInfo)) ::System::Xml::XmlSqlBinaryReader_NestedBinXml*  prevNameInfo;

/// @brief Field qnameElement, offset 0xb8, size 0x18 
 __declspec(property(get=__cordl_internal_get_qnameElement, put=__cordl_internal_set_qnameElement)) ::GlobalNamespace::XmlSqlBinaryReader_QName  qnameElement;

/// @brief Field qnameOther, offset 0xa0, size 0x18 
 __declspec(property(get=__cordl_internal_get_qnameOther, put=__cordl_internal_set_qnameOther)) ::GlobalNamespace::XmlSqlBinaryReader_QName  qnameOther;

/// @brief Field sniffed, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_sniffed, put=__cordl_internal_set_sniffed)) bool  sniffed;

/// @brief Field state, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::XmlSqlBinaryReader_ScanState  state;

/// @brief Field stringValue, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_stringValue, put=__cordl_internal_set_stringValue)) ::StringW  stringValue;

/// @brief Field symbolTables, offset 0x40, size 0x20 
 __declspec(property(get=__cordl_internal_get_symbolTables, put=__cordl_internal_set_symbolTables)) ::GlobalNamespace::XmlSqlBinaryReader_SymbolTables  symbolTables;

/// @brief Field textXmlReader, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_textXmlReader, put=__cordl_internal_set_textXmlReader)) ::System::Xml::XmlReader*  textXmlReader;

/// @brief Field tokDataPos, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_tokDataPos, put=__cordl_internal_set_tokDataPos)) int32_t  tokDataPos;

/// @brief Field tokLen, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_tokLen, put=__cordl_internal_set_tokLen)) int32_t  tokLen;

/// @brief Field token, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_token, put=__cordl_internal_set_token)) ::System::Xml::BinXmlToken  token;

/// @brief Field unicode, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_unicode, put=__cordl_internal_set_unicode)) ::System::Text::Encoding*  unicode;

/// @brief Field valueType, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_valueType, put=__cordl_internal_set_valueType)) ::System::Type*  valueType;

/// @brief Field version, offset 0x160, size 0x1 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) uint8_t  version;

/// @brief Field xml, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_xml, put=__cordl_internal_set_xml)) ::StringW  xml;

/// @brief Field xmlCharType, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_xmlCharType, put=__cordl_internal_set_xmlCharType)) ::System::Xml::XmlCharType  xmlCharType;

/// @brief Field xmlns, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_xmlns, put=__cordl_internal_set_xmlns)) ::StringW  xmlns;

/// @brief Field xmlspacePreserve, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get_xmlspacePreserve, put=__cordl_internal_set_xmlspacePreserve)) bool  xmlspacePreserve;

/// @brief Field xnt, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_xnt, put=__cordl_internal_set_xnt)) ::System::Xml::XmlNameTable*  xnt;

/// @brief Field xntFromSettings, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_xntFromSettings, put=__cordl_internal_set_xntFromSettings)) bool  xntFromSettings;

/// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
constexpr operator  ::System::Xml::IXmlNamespaceResolver*() noexcept;

/// @brief Method AddInitNamespace, addr 0xaaa060c, size 0xdc, virtual false, abstract: false, final false
inline void AddInitNamespace(::StringW  prefix, ::StringW  uri) ;

/// @brief Method AddName, addr 0xaaa8690, size 0x128, virtual false, abstract: false, final false
inline void AddName() ;

/// @brief Method AddQName, addr 0xaaa887c, size 0x2a4, virtual false, abstract: false, final false
inline void AddQName() ;

/// @brief Method CDATAValue, addr 0xaaa1614, size 0x110, virtual false, abstract: false, final false
inline ::StringW CDATAValue() ;

/// @brief Method CheckAllowContent, addr 0xaaab434, size 0x64, virtual false, abstract: false, final false
inline void CheckAllowContent() ;

/// @brief Method CheckText, addr 0xaaab570, size 0x1c4, virtual false, abstract: false, final false
inline ::System::Xml::XmlNodeType CheckText(bool  attr) ;

/// @brief Method CheckTextIsWS, addr 0xaaab734, size 0x9c, virtual false, abstract: false, final false
inline ::System::Xml::XmlNodeType CheckTextIsWS() ;

/// @brief Method CheckValueTokenBounds, addr 0xaaabc44, size 0x5c, virtual false, abstract: false, final false
inline void CheckValueTokenBounds() ;

/// @brief Method ClearAttributes, addr 0xaaa9764, size 0x10, virtual false, abstract: false, final false
inline void ClearAttributes() ;

/// @brief Method Close, addr 0xaaa2e70, size 0x9c, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Fill, addr 0xaaa8cb8, size 0x1c, virtual false, abstract: false, final false
inline void Fill(int32_t  require) ;

/// @brief Method FillAllowEOF, addr 0xaaa8d60, size 0x234, virtual false, abstract: false, final false
inline bool FillAllowEOF() ;

/// @brief Method Fill_, addr 0xaaa8f94, size 0x78, virtual false, abstract: false, final false
inline void Fill_(int32_t  require) ;

/// @brief Method FinishCDATA, addr 0xaaaa654, size 0xa4, virtual false, abstract: false, final false
inline void FinishCDATA() ;

/// @brief Method FinishContentAsXXX, addr 0xaaa3cb4, size 0xc8, virtual false, abstract: false, final false
inline int32_t FinishContentAsXXX(int32_t  origPos) ;

/// @brief Method FinishEndElement, addr 0xaaaa6f8, size 0x5c, virtual false, abstract: false, final false
inline void FinishEndElement() ;

/// @brief Method GenerateImpliedXmlnsAttrs, addr 0xaaa9a74, size 0x140, virtual false, abstract: false, final false
inline void GenerateImpliedXmlnsAttrs() ;

/// @brief Method GenerateTokenTypeMap, addr 0xaaa06e8, size 0xb60, virtual false, abstract: false, final false
inline void GenerateTokenTypeMap() ;

/// @brief Method GetAttribute, addr 0xaaa25b4, size 0x90, virtual true, abstract: false, final false
inline ::StringW GetAttribute(int32_t  i) ;

/// @brief Method GetAttribute, addr 0xaaa2464, size 0x6c, virtual true, abstract: false, final false
inline ::StringW GetAttribute(::StringW  name) ;

/// @brief Method GetAttribute, addr 0xaaa2308, size 0xd0, virtual true, abstract: false, final false
inline ::StringW GetAttribute(::StringW  name, ::StringW  ns) ;

/// @brief Method GetAttributeText, addr 0xaaa1fb0, size 0x12c, virtual false, abstract: false, final false
inline ::StringW GetAttributeText(int32_t  i) ;

/// @brief Method GetDouble, addr 0xaaac14c, size 0xd4, virtual false, abstract: false, final false
inline double_t GetDouble(int32_t  offset) ;

/// @brief Method GetInt16, addr 0xaaabd74, size 0x44, virtual false, abstract: false, final false
inline int16_t GetInt16(int32_t  pos) ;

/// @brief Method GetInt32, addr 0xaaabdb8, size 0x74, virtual false, abstract: false, final false
inline int32_t GetInt32(int32_t  pos) ;

/// @brief Method GetInt64, addr 0xaaabe2c, size 0xd0, virtual false, abstract: false, final false
inline int64_t GetInt64(int32_t  pos) ;

/// @brief Method GetSingle, addr 0xaaac0d4, size 0x78, virtual false, abstract: false, final false
inline float_t GetSingle(int32_t  offset) ;

/// @brief Method GetString, addr 0xaaa14b0, size 0x164, virtual false, abstract: false, final false
inline ::StringW GetString(int32_t  pos, int32_t  cch) ;

/// @brief Method GetStringAligned, addr 0xaaa9614, size 0x30, virtual false, abstract: false, final false
inline ::StringW GetStringAligned(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  cch) ;

/// @brief Method GetUInt16, addr 0xaaabefc, size 0x44, virtual false, abstract: false, final false
inline uint16_t GetUInt16(int32_t  pos) ;

/// @brief Method GetUInt32, addr 0xaaabf40, size 0x74, virtual false, abstract: false, final false
inline uint32_t GetUInt32(int32_t  pos) ;

/// @brief Method GetUInt64, addr 0xaaabfb4, size 0xd0, virtual false, abstract: false, final false
inline uint64_t GetUInt64(int32_t  pos) ;

/// @brief Method GetValueConverter, addr 0xaaac690, size 0x68, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlValueConverter* GetValueConverter(::System::Xml::Schema::XmlTypeCode  typeCode) ;

/// @brief Method GetValueType, addr 0xaaa2d90, size 0xe0, virtual false, abstract: false, final false
inline ::System::Type* GetValueType(::System::Xml::BinXmlToken  token) ;

/// @brief Method GetXsdKatmaiTokenLength, addr 0xaaabb5c, size 0xe8, virtual false, abstract: false, final false
inline int32_t GetXsdKatmaiTokenLength(::System::Xml::BinXmlToken  token) ;

/// @brief Method GrowAttributes, addr 0xaaa96d4, size 0x90, virtual false, abstract: false, final false
inline void GrowAttributes() ;

/// @brief Method GrowElements, addr 0xaaa9644, size 0x90, virtual false, abstract: false, final false
inline void GrowElements() ;

/// @brief Method HashCheckForDuplicateAttributes, addr 0xaaaa3f0, size 0x264, virtual false, abstract: false, final false
inline void HashCheckForDuplicateAttributes() ;

/// @brief Method ImplReadCDATA, addr 0xaaaae28, size 0x34, virtual false, abstract: false, final false
inline void ImplReadCDATA() ;

/// @brief Method ImplReadComment, addr 0xaaaadfc, size 0x2c, virtual false, abstract: false, final false
inline void ImplReadComment() ;

/// @brief Method ImplReadData, addr 0xaaab2b0, size 0x184, virtual false, abstract: false, final false
inline void ImplReadData(::System::Xml::BinXmlToken  tokenType) ;

/// @brief Method ImplReadDoctype, addr 0xaaaaac4, size 0x2cc, virtual false, abstract: false, final false
inline void ImplReadDoctype() ;

/// @brief Method ImplReadElement, addr 0xaaaa754, size 0x290, virtual false, abstract: false, final false
inline void ImplReadElement() ;

/// @brief Method ImplReadEndElement, addr 0xaaaa9e4, size 0xe0, virtual false, abstract: false, final false
inline void ImplReadEndElement() ;

/// @brief Method ImplReadEndNest, addr 0xaaaaf04, size 0x48, virtual false, abstract: false, final false
inline void ImplReadEndNest() ;

/// @brief Method ImplReadNest, addr 0xaaaae5c, size 0xa8, virtual false, abstract: false, final false
inline void ImplReadNest() ;

/// @brief Method ImplReadPI, addr 0xaaaad90, size 0x6c, virtual false, abstract: false, final false
inline void ImplReadPI() ;

/// @brief Method ImplReadXmlText, addr 0xaaaaf4c, size 0x364, virtual false, abstract: false, final false
inline void ImplReadXmlText() ;

/// @brief Method LocateAttribute, addr 0xaaa24d0, size 0xe4, virtual false, abstract: false, final false
inline int32_t LocateAttribute(::StringW  name) ;

/// @brief Method LocateAttribute, addr 0xaaa23d8, size 0x8c, virtual false, abstract: false, final false
inline int32_t LocateAttribute(::StringW  name, ::StringW  ns) ;

/// @brief Method LookupNamespace, addr 0xaaa2f14, size 0xbc, virtual true, abstract: false, final false
inline ::StringW LookupNamespace(::StringW  prefix) ;

/// @brief Method MoveToAttribute, addr 0xaaa2820, size 0x7c, virtual true, abstract: false, final false
inline bool MoveToAttribute(::StringW  name) ;

/// @brief Method MoveToAttribute, addr 0xaaa2644, size 0xe0, virtual true, abstract: false, final false
inline bool MoveToAttribute(::StringW  name, ::StringW  ns) ;

/// @brief Method MoveToAttribute, addr 0xaaa289c, size 0xa4, virtual true, abstract: false, final false
inline void MoveToAttribute(int32_t  i) ;

/// @brief Method MoveToElement, addr 0xaaa2a34, size 0xd0, virtual true, abstract: false, final false
inline bool MoveToElement() ;

/// @brief Method MoveToFirstAttribute, addr 0xaaa2940, size 0x70, virtual true, abstract: false, final false
inline bool MoveToFirstAttribute() ;

/// @brief Method MoveToNextAttribute, addr 0xaaa29b0, size 0x84, virtual true, abstract: false, final false
inline bool MoveToNextAttribute() ;

/// @brief Method NameFlush, addr 0xaaa8bac, size 0x50, virtual false, abstract: false, final false
inline void NameFlush() ;

static inline ::System::Xml::XmlSqlBinaryReader* New_ctor(::System::IO::Stream*  stream, ::ArrayW<uint8_t>  data, int32_t  len, ::StringW  baseUri, bool  closeInput, ::System::Xml::XmlReaderSettings*  settings) ;

/// @brief Method NextToken, addr 0xaaa94c8, size 0x68, virtual false, abstract: false, final false
inline ::System::Xml::BinXmlToken NextToken() ;

/// @brief Method NextToken1, addr 0xaaa9450, size 0x78, virtual false, abstract: false, final false
inline ::System::Xml::BinXmlToken NextToken1() ;

/// @brief Method NextToken2, addr 0xaaa93d8, size 0x78, virtual false, abstract: false, final false
inline ::System::Xml::BinXmlToken NextToken2(::System::Xml::BinXmlToken  token) ;

/// @brief Method ParseMB32, addr 0xaaa8c8c, size 0x2c, virtual false, abstract: false, final false
inline int32_t ParseMB32() ;

/// @brief Method ParseMB32, addr 0xaaa91e8, size 0xec, virtual false, abstract: false, final false
inline int32_t ParseMB32(int32_t  pos) ;

/// @brief Method ParseMB32_, addr 0xaaa9150, size 0x98, virtual false, abstract: false, final false
inline int32_t ParseMB32_(uint8_t  b) ;

/// @brief Method ParseMB64, addr 0xaaa92d4, size 0x2c, virtual false, abstract: false, final false
inline int32_t ParseMB64() ;

/// @brief Method ParseText, addr 0xaaa87b8, size 0xc4, virtual false, abstract: false, final false
inline ::StringW ParseText() ;

/// @brief Method PeekNextToken, addr 0xaaa9530, size 0x28, virtual false, abstract: false, final false
inline ::System::Xml::BinXmlToken PeekNextToken() ;

/// @brief Method PeekToken, addr 0xaaa9300, size 0x68, virtual false, abstract: false, final false
inline ::System::Xml::BinXmlToken PeekToken() ;

/// @brief Method PopNamespaces, addr 0xaaa99a4, size 0xd0, virtual false, abstract: false, final false
inline void PopNamespaces(::System::Xml::XmlSqlBinaryReader_NamespaceDecl*  firstInScopeChain) ;

/// @brief Method PositionOnAttribute, addr 0xaaa2740, size 0xe0, virtual false, abstract: false, final false
inline void PositionOnAttribute(int32_t  i) ;

/// @brief Method PushNamespace, addr 0xaaa9774, size 0x230, virtual false, abstract: false, final false
inline void PushNamespace(::StringW  prefix, ::StringW  ns, bool  implied) ;

/// @brief Method ReScanOverValue, addr 0xaaa2d84, size 0xc, virtual false, abstract: false, final false
inline void ReScanOverValue(::System::Xml::BinXmlToken  token) ;

/// @brief Method Read, addr 0xaaa3088, size 0x1cc, virtual true, abstract: false, final false
inline bool Read() ;

/// @brief Method ReadAttributeValue, addr 0xaaa2b14, size 0x180, virtual true, abstract: false, final false
inline bool ReadAttributeValue() ;

/// @brief Method ReadByte, addr 0xaaa9080, size 0x5c, virtual false, abstract: false, final false
inline uint8_t ReadByte() ;

/// @brief Method ReadContentAs, addr 0xaaa74a4, size 0x458, virtual true, abstract: false, final false
inline ::System::Object* ReadContentAs(::System::Type*  returnType, ::System::Xml::IXmlNamespaceResolver*  namespaceResolver) ;

/// @brief Method ReadContentAsBoolean, addr 0xaaa3e00, size 0x460, virtual true, abstract: false, final false
inline bool ReadContentAsBoolean() ;

/// @brief Method ReadContentAsDateTime, addr 0xaaa4260, size 0x4f8, virtual true, abstract: false, final false
inline ::System::DateTime ReadContentAsDateTime() ;

/// @brief Method ReadContentAsDecimal, addr 0xaaa55ec, size 0x508, virtual true, abstract: false, final false
inline ::System::Decimal ReadContentAsDecimal() ;

/// @brief Method ReadContentAsDouble, addr 0xaaa4ab8, size 0x4f4, virtual true, abstract: false, final false
inline double_t ReadContentAsDouble() ;

/// @brief Method ReadContentAsFloat, addr 0xaaa5100, size 0x4ec, virtual true, abstract: false, final false
inline float_t ReadContentAsFloat() ;

/// @brief Method ReadContentAsInt, addr 0xaaa5d50, size 0x524, virtual true, abstract: false, final false
inline int32_t ReadContentAsInt() ;

/// @brief Method ReadContentAsLong, addr 0xaaa64ac, size 0x4f8, virtual true, abstract: false, final false
inline int64_t ReadContentAsLong() ;

/// @brief Method ReadContentAsObject, addr 0xaaa69a4, size 0x358, virtual true, abstract: false, final false
inline ::System::Object* ReadContentAsObject() ;

/// @brief Method ReadDoc, addr 0xaaa373c, size 0x388, virtual false, abstract: false, final false
inline bool ReadDoc() ;

/// @brief Method ReadInit, addr 0xaaa3254, size 0x4e8, virtual false, abstract: false, final false
inline bool ReadInit(bool  skipXmlDecl) ;

/// @brief Method ReadNameRef, addr 0xaaa8b20, size 0x8c, virtual false, abstract: false, final false
inline int32_t ReadNameRef() ;

/// @brief Method ReadQNameRef, addr 0xaaa8cd4, size 0x8c, virtual false, abstract: false, final false
inline int32_t ReadQNameRef() ;

/// @brief Method ReadToken, addr 0xaaa9368, size 0x70, virtual false, abstract: false, final false
inline ::System::Xml::BinXmlToken ReadToken() ;

/// @brief Method ReadUShort, addr 0xaaa90dc, size 0x74, virtual false, abstract: false, final false
inline uint16_t ReadUShort() ;

/// @brief Method RescanNextToken, addr 0xaaa2c94, size 0xf0, virtual false, abstract: false, final false
inline ::System::Xml::BinXmlToken RescanNextToken() ;

/// @brief Method ResolveEntity, addr 0xaaa2fd0, size 0x38, virtual true, abstract: false, final false
inline void ResolveEntity() ;

/// @brief Method ScanAttributes, addr 0xaaa9bb4, size 0x4bc, virtual false, abstract: false, final false
inline void ScanAttributes() ;

/// @brief Method ScanOverAnyValue, addr 0xaaab7d0, size 0x38c, virtual false, abstract: false, final false
inline ::System::Xml::XmlNodeType ScanOverAnyValue(::System::Xml::BinXmlToken  token, bool  attr, bool  checkChars) ;

/// @brief Method ScanOverValue, addr 0xaaaa15c, size 0x12c, virtual false, abstract: false, final false
inline ::System::Xml::XmlNodeType ScanOverValue(::System::Xml::BinXmlToken  token, bool  attr, bool  checkChars) ;

/// @brief Method ScanText, addr 0xaaa9558, size 0xbc, virtual false, abstract: false, final false
inline int32_t ScanText(::by_ref<int32_t>  start) ;

/// @brief Method SetupContentAsXXX, addr 0xaaa3ac4, size 0x1f0, virtual false, abstract: false, final false
inline bool SetupContentAsXXX(::StringW  name) ;

/// @brief Method SimpleCheckForDuplicateAttributes, addr 0xaaaa288, size 0x168, virtual false, abstract: false, final false
inline void SimpleCheckForDuplicateAttributes() ;

/// @brief Method SkipExtn, addr 0xaaa8bfc, size 0x90, virtual false, abstract: false, final false
inline void SkipExtn() ;

/// @brief Method System.Xml.IXmlNamespaceResolver.GetNamespacesInScope, addr 0xaaa80d4, size 0x39c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope  scope) ;

/// @brief Method System.Xml.IXmlNamespaceResolver.LookupPrefix, addr 0xaaa8470, size 0x1a4, virtual true, abstract: false, final true
inline ::StringW System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW  namespaceName) ;

/// @brief Method ThrowNotSupported, addr 0xaaa3d7c, size 0x84, virtual false, abstract: false, final false
inline ::System::Exception* ThrowNotSupported(::StringW  res) ;

/// @brief Method ThrowUnexpectedToken, addr 0xaaa8648, size 0x48, virtual false, abstract: false, final false
inline ::System::Exception* ThrowUnexpectedToken(::System::Xml::BinXmlToken  token) ;

/// @brief Method ThrowXmlException, addr 0xaaa900c, size 0x74, virtual false, abstract: false, final false
inline ::System::Exception* ThrowXmlException(::StringW  res) ;

/// @brief Method ThrowXmlException, addr 0xaaaa070, size 0xec, virtual false, abstract: false, final false
inline ::System::Exception* ThrowXmlException(::StringW  res, ::StringW  arg1, ::StringW  arg2) ;

/// @brief Method UpdateFromTextReader, addr 0xaaa2724, size 0x1c, virtual false, abstract: false, final false
inline bool UpdateFromTextReader(bool  needUpdate) ;

/// @brief Method UpdateFromTextReader, addr 0xaaab498, size 0xd8, virtual false, abstract: false, final false
inline void UpdateFromTextReader() ;

/// @brief Method ValueAs, addr 0xaaa78fc, size 0x7d8, virtual false, abstract: false, final false
inline ::System::Object* ValueAs(::System::Xml::BinXmlToken  token, ::System::Type*  returnType, ::System::Xml::IXmlNamespaceResolver*  namespaceResolver) ;

/// @brief Method ValueAsDateTime, addr 0xaaa4758, size 0x360, virtual false, abstract: false, final false
inline ::System::DateTime ValueAsDateTime() ;

/// @brief Method ValueAsDateTimeOffset, addr 0xaaac220, size 0x110, virtual false, abstract: false, final false
inline ::System::DateTimeOffset ValueAsDateTimeOffset() ;

/// @brief Method ValueAsDateTimeString, addr 0xaaac330, size 0x360, virtual false, abstract: false, final false
inline ::StringW ValueAsDateTimeString() ;

/// @brief Method ValueAsDecimal, addr 0xaaa5af4, size 0x25c, virtual false, abstract: false, final false
inline ::System::Decimal ValueAsDecimal() ;

/// @brief Method ValueAsDouble, addr 0xaaa4fac, size 0x154, virtual false, abstract: false, final false
inline double_t ValueAsDouble() ;

/// @brief Method ValueAsLong, addr 0xaaa6274, size 0x238, virtual false, abstract: false, final false
inline int64_t ValueAsLong() ;

/// @brief Method ValueAsObject, addr 0xaaa6cfc, size 0x7a8, virtual false, abstract: false, final false
inline ::System::Object* ValueAsObject(::System::Xml::BinXmlToken  token, bool  returnInternalTypes) ;

/// @brief Method ValueAsString, addr 0xaaa1864, size 0x74c, virtual false, abstract: false, final false
inline ::StringW ValueAsString(::System::Xml::BinXmlToken  token) ;

/// @brief Method ValueAsULong, addr 0xaaac084, size 0x50, virtual false, abstract: false, final false
inline uint64_t ValueAsULong() ;

/// @brief Method VerifyVersion, addr 0xaaa8614, size 0x34, virtual false, abstract: false, final false
inline void VerifyVersion(int32_t  requiredVersion, ::System::Xml::BinXmlToken  token) ;

/// @brief Method XmlDeclValue, addr 0xaaa1724, size 0x140, virtual false, abstract: false, final false
inline ::StringW XmlDeclValue() ;

/// @brief Method XsdKatmaiTimeScaleToValueLength, addr 0xaaabca0, size 0xd4, virtual false, abstract: false, final false
inline int32_t XsdKatmaiTimeScaleToValueLength(uint8_t  scale) ;

constexpr int32_t const& __cordl_internal_get_attrCount() const;

constexpr int32_t& __cordl_internal_get_attrCount() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_attrHashTbl() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_attrHashTbl() ;

constexpr int32_t const& __cordl_internal_get_attrIndex() const;

constexpr int32_t& __cordl_internal_get_attrIndex() ;

constexpr ::ArrayW<::GlobalNamespace::XmlSqlBinaryReader_AttrInfo> const& __cordl_internal_get_attributes() const;

constexpr ::ArrayW<::GlobalNamespace::XmlSqlBinaryReader_AttrInfo>& __cordl_internal_get_attributes() ;

constexpr ::StringW const& __cordl_internal_get_baseUri() const;

constexpr ::StringW& __cordl_internal_get_baseUri() ;

constexpr bool const& __cordl_internal_get_checkCharacters() const;

constexpr bool& __cordl_internal_get_checkCharacters() ;

constexpr bool const& __cordl_internal_get_closeInput() const;

constexpr bool& __cordl_internal_get_closeInput() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_data() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_data() ;

constexpr int32_t const& __cordl_internal_get_docState() const;

constexpr int32_t& __cordl_internal_get_docState() ;

constexpr ::System::Xml::DtdProcessing const& __cordl_internal_get_dtdProcessing() const;

constexpr ::System::Xml::DtdProcessing& __cordl_internal_get_dtdProcessing() ;

constexpr int32_t const& __cordl_internal_get_elemDepth() const;

constexpr int32_t& __cordl_internal_get_elemDepth() ;

constexpr ::ArrayW<::GlobalNamespace::XmlSqlBinaryReader_ElemInfo> const& __cordl_internal_get_elementStack() const;

constexpr ::ArrayW<::GlobalNamespace::XmlSqlBinaryReader_ElemInfo>& __cordl_internal_get_elementStack() ;

constexpr int32_t const& __cordl_internal_get_end() const;

constexpr int32_t& __cordl_internal_get_end() ;

constexpr bool const& __cordl_internal_get_eof() const;

constexpr bool& __cordl_internal_get_eof() ;

constexpr bool const& __cordl_internal_get_hasTypedValue() const;

constexpr bool& __cordl_internal_get_hasTypedValue() ;

constexpr ::System::Xml::SecureStringHasher* const& __cordl_internal_get_hasher() const;

constexpr ::System::Xml::SecureStringHasher*& __cordl_internal_get_hasher() ;

constexpr bool const& __cordl_internal_get_ignoreComments() const;

constexpr bool& __cordl_internal_get_ignoreComments() ;

constexpr bool const& __cordl_internal_get_ignorePIs() const;

constexpr bool& __cordl_internal_get_ignorePIs() ;

constexpr bool const& __cordl_internal_get_ignoreWhitespace() const;

constexpr bool& __cordl_internal_get_ignoreWhitespace() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_inStrm() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_inStrm() ;

constexpr bool const& __cordl_internal_get_isEmpty() const;

constexpr bool& __cordl_internal_get_isEmpty() ;

constexpr int32_t const& __cordl_internal_get_mark() const;

constexpr int32_t& __cordl_internal_get_mark() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::XmlSqlBinaryReader_NamespaceDecl*>* const& __cordl_internal_get_namespaces() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::XmlSqlBinaryReader_NamespaceDecl*>*& __cordl_internal_get_namespaces() ;

constexpr ::System::Xml::XmlNodeType const& __cordl_internal_get_nodetype() const;

constexpr ::System::Xml::XmlNodeType& __cordl_internal_get_nodetype() ;

constexpr ::StringW const& __cordl_internal_get_nsxmlns() const;

constexpr ::StringW& __cordl_internal_get_nsxmlns() ;

constexpr int64_t const& __cordl_internal_get_offset() const;

constexpr int64_t& __cordl_internal_get_offset() ;

constexpr ::System::Xml::XmlNodeType const& __cordl_internal_get_parentNodeType() const;

constexpr ::System::Xml::XmlNodeType& __cordl_internal_get_parentNodeType() ;

constexpr int32_t const& __cordl_internal_get_pos() const;

constexpr int32_t& __cordl_internal_get_pos() ;

constexpr int32_t const& __cordl_internal_get_posAfterAttrs() const;

constexpr int32_t& __cordl_internal_get_posAfterAttrs() ;

constexpr ::System::Xml::XmlSqlBinaryReader_NestedBinXml* const& __cordl_internal_get_prevNameInfo() const;

constexpr ::System::Xml::XmlSqlBinaryReader_NestedBinXml*& __cordl_internal_get_prevNameInfo() ;

constexpr ::GlobalNamespace::XmlSqlBinaryReader_QName const& __cordl_internal_get_qnameElement() const;

constexpr ::GlobalNamespace::XmlSqlBinaryReader_QName& __cordl_internal_get_qnameElement() ;

constexpr ::GlobalNamespace::XmlSqlBinaryReader_QName const& __cordl_internal_get_qnameOther() const;

constexpr ::GlobalNamespace::XmlSqlBinaryReader_QName& __cordl_internal_get_qnameOther() ;

constexpr bool const& __cordl_internal_get_sniffed() const;

constexpr bool& __cordl_internal_get_sniffed() ;

constexpr ::GlobalNamespace::XmlSqlBinaryReader_ScanState const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::XmlSqlBinaryReader_ScanState& __cordl_internal_get_state() ;

constexpr ::StringW const& __cordl_internal_get_stringValue() const;

constexpr ::StringW& __cordl_internal_get_stringValue() ;

constexpr ::GlobalNamespace::XmlSqlBinaryReader_SymbolTables const& __cordl_internal_get_symbolTables() const;

constexpr ::GlobalNamespace::XmlSqlBinaryReader_SymbolTables& __cordl_internal_get_symbolTables() ;

constexpr ::System::Xml::XmlReader* const& __cordl_internal_get_textXmlReader() const;

constexpr ::System::Xml::XmlReader*& __cordl_internal_get_textXmlReader() ;

constexpr int32_t const& __cordl_internal_get_tokDataPos() const;

constexpr int32_t& __cordl_internal_get_tokDataPos() ;

constexpr int32_t const& __cordl_internal_get_tokLen() const;

constexpr int32_t& __cordl_internal_get_tokLen() ;

constexpr ::System::Xml::BinXmlToken const& __cordl_internal_get_token() const;

constexpr ::System::Xml::BinXmlToken& __cordl_internal_get_token() ;

constexpr ::System::Text::Encoding* const& __cordl_internal_get_unicode() const;

constexpr ::System::Text::Encoding*& __cordl_internal_get_unicode() ;

constexpr ::System::Type* const& __cordl_internal_get_valueType() const;

constexpr ::System::Type*& __cordl_internal_get_valueType() ;

constexpr uint8_t const& __cordl_internal_get_version() const;

constexpr uint8_t& __cordl_internal_get_version() ;

constexpr ::StringW const& __cordl_internal_get_xml() const;

constexpr ::StringW& __cordl_internal_get_xml() ;

constexpr ::System::Xml::XmlCharType const& __cordl_internal_get_xmlCharType() const;

constexpr ::System::Xml::XmlCharType& __cordl_internal_get_xmlCharType() ;

constexpr ::StringW const& __cordl_internal_get_xmlns() const;

constexpr ::StringW& __cordl_internal_get_xmlns() ;

constexpr bool const& __cordl_internal_get_xmlspacePreserve() const;

constexpr bool& __cordl_internal_get_xmlspacePreserve() ;

constexpr ::System::Xml::XmlNameTable* const& __cordl_internal_get_xnt() const;

constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_xnt() ;

constexpr bool const& __cordl_internal_get_xntFromSettings() const;

constexpr bool& __cordl_internal_get_xntFromSettings() ;

constexpr void __cordl_internal_set_attrCount(int32_t  value) ;

constexpr void __cordl_internal_set_attrHashTbl(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_attrIndex(int32_t  value) ;

constexpr void __cordl_internal_set_attributes(::ArrayW<::GlobalNamespace::XmlSqlBinaryReader_AttrInfo>  value) ;

constexpr void __cordl_internal_set_baseUri(::StringW  value) ;

constexpr void __cordl_internal_set_checkCharacters(bool  value) ;

constexpr void __cordl_internal_set_closeInput(bool  value) ;

constexpr void __cordl_internal_set_data(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_docState(int32_t  value) ;

constexpr void __cordl_internal_set_dtdProcessing(::System::Xml::DtdProcessing  value) ;

constexpr void __cordl_internal_set_elemDepth(int32_t  value) ;

constexpr void __cordl_internal_set_elementStack(::ArrayW<::GlobalNamespace::XmlSqlBinaryReader_ElemInfo>  value) ;

constexpr void __cordl_internal_set_end(int32_t  value) ;

constexpr void __cordl_internal_set_eof(bool  value) ;

constexpr void __cordl_internal_set_hasTypedValue(bool  value) ;

constexpr void __cordl_internal_set_hasher(::System::Xml::SecureStringHasher*  value) ;

constexpr void __cordl_internal_set_ignoreComments(bool  value) ;

constexpr void __cordl_internal_set_ignorePIs(bool  value) ;

constexpr void __cordl_internal_set_ignoreWhitespace(bool  value) ;

constexpr void __cordl_internal_set_inStrm(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set_isEmpty(bool  value) ;

constexpr void __cordl_internal_set_mark(int32_t  value) ;

constexpr void __cordl_internal_set_namespaces(::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::XmlSqlBinaryReader_NamespaceDecl*>*  value) ;

constexpr void __cordl_internal_set_nodetype(::System::Xml::XmlNodeType  value) ;

constexpr void __cordl_internal_set_nsxmlns(::StringW  value) ;

constexpr void __cordl_internal_set_offset(int64_t  value) ;

constexpr void __cordl_internal_set_parentNodeType(::System::Xml::XmlNodeType  value) ;

constexpr void __cordl_internal_set_pos(int32_t  value) ;

constexpr void __cordl_internal_set_posAfterAttrs(int32_t  value) ;

constexpr void __cordl_internal_set_prevNameInfo(::System::Xml::XmlSqlBinaryReader_NestedBinXml*  value) ;

constexpr void __cordl_internal_set_qnameElement(::GlobalNamespace::XmlSqlBinaryReader_QName  value) ;

constexpr void __cordl_internal_set_qnameOther(::GlobalNamespace::XmlSqlBinaryReader_QName  value) ;

constexpr void __cordl_internal_set_sniffed(bool  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::XmlSqlBinaryReader_ScanState  value) ;

constexpr void __cordl_internal_set_stringValue(::StringW  value) ;

constexpr void __cordl_internal_set_symbolTables(::GlobalNamespace::XmlSqlBinaryReader_SymbolTables  value) ;

constexpr void __cordl_internal_set_textXmlReader(::System::Xml::XmlReader*  value) ;

constexpr void __cordl_internal_set_tokDataPos(int32_t  value) ;

constexpr void __cordl_internal_set_tokLen(int32_t  value) ;

constexpr void __cordl_internal_set_token(::System::Xml::BinXmlToken  value) ;

constexpr void __cordl_internal_set_unicode(::System::Text::Encoding*  value) ;

constexpr void __cordl_internal_set_valueType(::System::Type*  value) ;

constexpr void __cordl_internal_set_version(uint8_t  value) ;

constexpr void __cordl_internal_set_xml(::StringW  value) ;

constexpr void __cordl_internal_set_xmlCharType(::System::Xml::XmlCharType  value) ;

constexpr void __cordl_internal_set_xmlns(::StringW  value) ;

constexpr void __cordl_internal_set_xmlspacePreserve(bool  value) ;

constexpr void __cordl_internal_set_xnt(::System::Xml::XmlNameTable*  value) ;

constexpr void __cordl_internal_set_xntFromSettings(bool  value) ;

/// @brief Method .ctor, addr 0xaaa00c8, size 0x544, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::ArrayW<uint8_t>  data, int32_t  len, ::StringW  baseUri, bool  closeInput, ::System::Xml::XmlReaderSettings*  settings) ;

static inline ::ArrayW<::System::Xml::ReadState> getStaticF_ScanState2ReadState() ;

static inline ::ArrayW<::System::Type*> getStaticF_TokenTypeMap() ;

static inline ::System::Type* getStaticF_TypeOfObject() ;

static inline ::System::Type* getStaticF_TypeOfString() ;

static inline ::ArrayW<uint8_t> getStaticF_XsdKatmaiTimeScaleToValueLengthMap() ;

/// @brief Method get_AttributeCount, addr 0xaaa22bc, size 0x4c, virtual true, abstract: false, final false
inline int32_t get_AttributeCount() ;

/// @brief Method get_BaseURI, addr 0xaaa2178, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_BaseURI() ;

/// @brief Method get_Depth, addr 0xaaa20dc, size 0x9c, virtual true, abstract: false, final false
inline int32_t get_Depth() ;

/// @brief Method get_EOF, addr 0xaaa2b04, size 0x10, virtual true, abstract: false, final false
inline bool get_EOF() ;

/// @brief Method get_IsEmptyElement, addr 0xaaa2180, size 0x24, virtual true, abstract: false, final false
inline bool get_IsEmptyElement() ;

/// @brief Method get_LocalName, addr 0xaaa136c, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_LocalName() ;

/// @brief Method get_NameTable, addr 0xaaa2f0c, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::XmlNameTable* get_NameTable() ;

/// @brief Method get_NamespaceURI, addr 0xaaa1374, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_NamespaceURI() ;

/// @brief Method get_NodeType, addr 0xaaa1364, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Prefix, addr 0xaaa137c, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Prefix() ;

/// @brief Method get_ReadState, addr 0xaaa3008, size 0x80, virtual true, abstract: false, final false
inline ::System::Xml::ReadState get_ReadState() ;

/// @brief Method get_Settings, addr 0xaaa1248, size 0x11c, virtual true, abstract: false, final false
inline ::System::Xml::XmlReaderSettings* get_Settings() ;

/// @brief Method get_Value, addr 0xaaa1384, size 0x12c, virtual true, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method get_ValueType, addr 0xaaa22b4, size 0x8, virtual true, abstract: false, final false
inline ::System::Type* get_ValueType() ;

/// @brief Method get_XmlLang, addr 0xaaa2224, size 0x90, virtual true, abstract: false, final false
inline ::StringW get_XmlLang() ;

/// @brief Method get_XmlSpace, addr 0xaaa21a4, size 0x80, virtual true, abstract: false, final false
inline ::System::Xml::XmlSpace get_XmlSpace() ;

/// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
constexpr ::System::Xml::IXmlNamespaceResolver* i___System__Xml__IXmlNamespaceResolver() noexcept;

static inline void setStaticF_ScanState2ReadState(::ArrayW<::System::Xml::ReadState>  value) ;

static inline void setStaticF_TokenTypeMap(::ArrayW<::System::Type*>  value) ;

static inline void setStaticF_TypeOfObject(::System::Type*  value) ;

static inline void setStaticF_TypeOfString(::System::Type*  value) ;

static inline void setStaticF_XsdKatmaiTimeScaleToValueLengthMap(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSqlBinaryReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSqlBinaryReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSqlBinaryReader(XmlSqlBinaryReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSqlBinaryReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSqlBinaryReader(XmlSqlBinaryReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13989};

/// @brief Field inStrm, offset: 0x10, size: 0x8, def value: None
 ::System::IO::Stream*  ___inStrm;

/// @brief Field data, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___data;

/// @brief Field pos, offset: 0x20, size: 0x4, def value: None
 int32_t  ___pos;

/// @brief Field mark, offset: 0x24, size: 0x4, def value: None
 int32_t  ___mark;

/// @brief Field end, offset: 0x28, size: 0x4, def value: None
 int32_t  ___end;

/// @brief Field offset, offset: 0x30, size: 0x8, def value: None
 int64_t  ___offset;

/// @brief Field eof, offset: 0x38, size: 0x1, def value: None
 bool  ___eof;

/// @brief Field sniffed, offset: 0x39, size: 0x1, def value: None
 bool  ___sniffed;

/// @brief Field isEmpty, offset: 0x3a, size: 0x1, def value: None
 bool  ___isEmpty;

/// @brief Field docState, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___docState;

/// @brief Field symbolTables, offset: 0x40, size: 0x20, def value: None
 ::GlobalNamespace::XmlSqlBinaryReader_SymbolTables  ___symbolTables;

/// @brief Field xnt, offset: 0x60, size: 0x8, def value: None
 ::System::Xml::XmlNameTable*  ___xnt;

/// @brief Field xntFromSettings, offset: 0x68, size: 0x1, def value: None
 bool  ___xntFromSettings;

/// @brief Field xml, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___xml;

/// @brief Field xmlns, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___xmlns;

/// @brief Field nsxmlns, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___nsxmlns;

/// @brief Field baseUri, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___baseUri;

/// @brief Field state, offset: 0x90, size: 0x4, def value: None
 ::GlobalNamespace::XmlSqlBinaryReader_ScanState  ___state;

/// @brief Field nodetype, offset: 0x94, size: 0x4, def value: None
 ::System::Xml::XmlNodeType  ___nodetype;

/// @brief Field token, offset: 0x98, size: 0x4, def value: None
 ::System::Xml::BinXmlToken  ___token;

/// @brief Field attrIndex, offset: 0x9c, size: 0x4, def value: None
 int32_t  ___attrIndex;

/// @brief Field qnameOther, offset: 0xa0, size: 0x18, def value: None
 ::GlobalNamespace::XmlSqlBinaryReader_QName  ___qnameOther;

/// @brief Field qnameElement, offset: 0xb8, size: 0x18, def value: None
 ::GlobalNamespace::XmlSqlBinaryReader_QName  ___qnameElement;

/// @brief Field parentNodeType, offset: 0xd0, size: 0x4, def value: None
 ::System::Xml::XmlNodeType  ___parentNodeType;

/// @brief Field elementStack, offset: 0xd8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::XmlSqlBinaryReader_ElemInfo>  ___elementStack;

/// @brief Field elemDepth, offset: 0xe0, size: 0x4, def value: None
 int32_t  ___elemDepth;

/// @brief Field attributes, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::XmlSqlBinaryReader_AttrInfo>  ___attributes;

/// @brief Field attrHashTbl, offset: 0xf0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___attrHashTbl;

/// @brief Field attrCount, offset: 0xf8, size: 0x4, def value: None
 int32_t  ___attrCount;

/// @brief Field posAfterAttrs, offset: 0xfc, size: 0x4, def value: None
 int32_t  ___posAfterAttrs;

/// @brief Field xmlspacePreserve, offset: 0x100, size: 0x1, def value: None
 bool  ___xmlspacePreserve;

/// @brief Field tokLen, offset: 0x104, size: 0x4, def value: None
 int32_t  ___tokLen;

/// @brief Field tokDataPos, offset: 0x108, size: 0x4, def value: None
 int32_t  ___tokDataPos;

/// @brief Field hasTypedValue, offset: 0x10c, size: 0x1, def value: None
 bool  ___hasTypedValue;

/// @brief Field valueType, offset: 0x110, size: 0x8, def value: None
 ::System::Type*  ___valueType;

/// @brief Field stringValue, offset: 0x118, size: 0x8, def value: None
 ::StringW  ___stringValue;

/// @brief Field namespaces, offset: 0x120, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::XmlSqlBinaryReader_NamespaceDecl*>*  ___namespaces;

/// @brief Field prevNameInfo, offset: 0x128, size: 0x8, def value: None
 ::System::Xml::XmlSqlBinaryReader_NestedBinXml*  ___prevNameInfo;

/// @brief Field textXmlReader, offset: 0x130, size: 0x8, def value: None
 ::System::Xml::XmlReader*  ___textXmlReader;

/// @brief Field closeInput, offset: 0x138, size: 0x1, def value: None
 bool  ___closeInput;

/// @brief Field checkCharacters, offset: 0x139, size: 0x1, def value: None
 bool  ___checkCharacters;

/// @brief Field ignoreWhitespace, offset: 0x13a, size: 0x1, def value: None
 bool  ___ignoreWhitespace;

/// @brief Field ignorePIs, offset: 0x13b, size: 0x1, def value: None
 bool  ___ignorePIs;

/// @brief Field ignoreComments, offset: 0x13c, size: 0x1, def value: None
 bool  ___ignoreComments;

/// @brief Field dtdProcessing, offset: 0x140, size: 0x4, def value: None
 ::System::Xml::DtdProcessing  ___dtdProcessing;

/// @brief Field hasher, offset: 0x148, size: 0x8, def value: None
 ::System::Xml::SecureStringHasher*  ___hasher;

/// @brief Field xmlCharType, offset: 0x150, size: 0x8, def value: None
 ::System::Xml::XmlCharType  ___xmlCharType;

/// @brief Field unicode, offset: 0x158, size: 0x8, def value: None
 ::System::Text::Encoding*  ___unicode;

/// @brief Field version, offset: 0x160, size: 0x1, def value: None
 uint8_t  ___version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___inStrm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___pos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___mark) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___end) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___eof) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___sniffed) == 0x39, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___isEmpty) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___docState) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___symbolTables) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___xnt) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___xntFromSettings) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___xml) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___xmlns) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___nsxmlns) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___baseUri) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___state) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___nodetype) == 0x94, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___token) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___attrIndex) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___qnameOther) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___qnameElement) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___parentNodeType) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___elementStack) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___elemDepth) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___attributes) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___attrHashTbl) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___attrCount) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___posAfterAttrs) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___xmlspacePreserve) == 0x100, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___tokLen) == 0x104, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___tokDataPos) == 0x108, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___hasTypedValue) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___valueType) == 0x110, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___stringValue) == 0x118, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___namespaces) == 0x120, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___prevNameInfo) == 0x128, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___textXmlReader) == 0x130, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___closeInput) == 0x138, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___checkCharacters) == 0x139, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___ignoreWhitespace) == 0x13a, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___ignorePIs) == 0x13b, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___ignoreComments) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___dtdProcessing) == 0x140, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___hasher) == 0x148, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___xmlCharType) == 0x150, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___unicode) == 0x158, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader, ___version) == 0x160, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlSqlBinaryReader) == 0x168, "Size mismatch!");

} // namespace end def System::Xml
// Dependencies System.Object, System.Xml.XmlSqlBinaryReader::SymbolTables
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlSqlBinaryReader/NestedBinXml
class CORDL_TYPE XmlSqlBinaryReader_NestedBinXml : public ::System::Object {
public:
// Declarations
/// @brief Field docState, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_docState, put=__cordl_internal_set_docState)) int32_t  docState;

/// @brief Field next, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_next, put=__cordl_internal_set_next)) ::System::Xml::XmlSqlBinaryReader_NestedBinXml*  next;

/// @brief Field symbolTables, offset 0x10, size 0x20 
 __declspec(property(get=__cordl_internal_get_symbolTables, put=__cordl_internal_set_symbolTables)) ::GlobalNamespace::XmlSqlBinaryReader_SymbolTables  symbolTables;

static inline ::System::Xml::XmlSqlBinaryReader_NestedBinXml* New_ctor(::GlobalNamespace::XmlSqlBinaryReader_SymbolTables  symbolTables, int32_t  docState, ::System::Xml::XmlSqlBinaryReader_NestedBinXml*  next) ;

constexpr int32_t const& __cordl_internal_get_docState() const;

constexpr int32_t& __cordl_internal_get_docState() ;

constexpr ::System::Xml::XmlSqlBinaryReader_NestedBinXml* const& __cordl_internal_get_next() const;

constexpr ::System::Xml::XmlSqlBinaryReader_NestedBinXml*& __cordl_internal_get_next() ;

constexpr ::GlobalNamespace::XmlSqlBinaryReader_SymbolTables const& __cordl_internal_get_symbolTables() const;

constexpr ::GlobalNamespace::XmlSqlBinaryReader_SymbolTables& __cordl_internal_get_symbolTables() ;

constexpr void __cordl_internal_set_docState(int32_t  value) ;

constexpr void __cordl_internal_set_next(::System::Xml::XmlSqlBinaryReader_NestedBinXml*  value) ;

constexpr void __cordl_internal_set_symbolTables(::GlobalNamespace::XmlSqlBinaryReader_SymbolTables  value) ;

/// @brief Method .ctor, addr 0xaab602c, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::XmlSqlBinaryReader_SymbolTables  symbolTables, int32_t  docState, ::System::Xml::XmlSqlBinaryReader_NestedBinXml*  next) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSqlBinaryReader_NestedBinXml() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSqlBinaryReader_NestedBinXml", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSqlBinaryReader_NestedBinXml(XmlSqlBinaryReader_NestedBinXml && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSqlBinaryReader_NestedBinXml", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSqlBinaryReader_NestedBinXml(XmlSqlBinaryReader_NestedBinXml const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13988};

/// @brief Field symbolTables, offset: 0x10, size: 0x20, def value: None
 ::GlobalNamespace::XmlSqlBinaryReader_SymbolTables  ___symbolTables;

/// @brief Field docState, offset: 0x30, size: 0x4, def value: None
 int32_t  ___docState;

/// @brief Field next, offset: 0x38, size: 0x8, def value: None
 ::System::Xml::XmlSqlBinaryReader_NestedBinXml*  ___next;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlSqlBinaryReader_NestedBinXml, ___symbolTables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader_NestedBinXml, ___docState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader_NestedBinXml, ___next) == 0x38, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlSqlBinaryReader_NestedBinXml) == 0x40, "Size mismatch!");

} // namespace end def System::Xml
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlSqlBinaryReader/NamespaceDecl
class CORDL_TYPE XmlSqlBinaryReader_NamespaceDecl : public ::System::Object {
public:
// Declarations
/// @brief Field implied, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_implied, put=__cordl_internal_set_implied)) bool  implied;

/// @brief Field prefix, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefix, put=__cordl_internal_set_prefix)) ::StringW  prefix;

/// @brief Field prevLink, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevLink, put=__cordl_internal_set_prevLink)) ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*  prevLink;

/// @brief Field scope, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_scope, put=__cordl_internal_set_scope)) int32_t  scope;

/// @brief Field scopeLink, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_scopeLink, put=__cordl_internal_set_scopeLink)) ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*  scopeLink;

/// @brief Field uri, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_uri, put=__cordl_internal_set_uri)) ::StringW  uri;

static inline ::System::Xml::XmlSqlBinaryReader_NamespaceDecl* New_ctor(::StringW  prefix, ::StringW  nsuri, ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*  nextInScope, ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*  prevDecl, int32_t  scope, bool  implied) ;

constexpr bool const& __cordl_internal_get_implied() const;

constexpr bool& __cordl_internal_get_implied() ;

constexpr ::StringW const& __cordl_internal_get_prefix() const;

constexpr ::StringW& __cordl_internal_get_prefix() ;

constexpr ::System::Xml::XmlSqlBinaryReader_NamespaceDecl* const& __cordl_internal_get_prevLink() const;

constexpr ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*& __cordl_internal_get_prevLink() ;

constexpr int32_t const& __cordl_internal_get_scope() const;

constexpr int32_t& __cordl_internal_get_scope() ;

constexpr ::System::Xml::XmlSqlBinaryReader_NamespaceDecl* const& __cordl_internal_get_scopeLink() const;

constexpr ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*& __cordl_internal_get_scopeLink() ;

constexpr ::StringW const& __cordl_internal_get_uri() const;

constexpr ::StringW& __cordl_internal_get_uri() ;

constexpr void __cordl_internal_set_implied(bool  value) ;

constexpr void __cordl_internal_set_prefix(::StringW  value) ;

constexpr void __cordl_internal_set_prevLink(::System::Xml::XmlSqlBinaryReader_NamespaceDecl*  value) ;

constexpr void __cordl_internal_set_scope(int32_t  value) ;

constexpr void __cordl_internal_set_scopeLink(::System::Xml::XmlSqlBinaryReader_NamespaceDecl*  value) ;

constexpr void __cordl_internal_set_uri(::StringW  value) ;

/// @brief Method .ctor, addr 0xaab5ec8, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::StringW  prefix, ::StringW  nsuri, ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*  nextInScope, ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*  prevDecl, int32_t  scope, bool  implied) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSqlBinaryReader_NamespaceDecl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSqlBinaryReader_NamespaceDecl", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSqlBinaryReader_NamespaceDecl(XmlSqlBinaryReader_NamespaceDecl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSqlBinaryReader_NamespaceDecl", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSqlBinaryReader_NamespaceDecl(XmlSqlBinaryReader_NamespaceDecl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13986};

/// @brief Field prefix, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___prefix;

/// @brief Field uri, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___uri;

/// @brief Field scopeLink, offset: 0x20, size: 0x8, def value: None
 ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*  ___scopeLink;

/// @brief Field prevLink, offset: 0x28, size: 0x8, def value: None
 ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*  ___prevLink;

/// @brief Field scope, offset: 0x30, size: 0x4, def value: None
 int32_t  ___scope;

/// @brief Field implied, offset: 0x34, size: 0x1, def value: None
 bool  ___implied;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlSqlBinaryReader_NamespaceDecl, ___prefix) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader_NamespaceDecl, ___uri) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader_NamespaceDecl, ___scopeLink) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader_NamespaceDecl, ___prevLink) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader_NamespaceDecl, ___scope) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSqlBinaryReader_NamespaceDecl, ___implied) == 0x34, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlSqlBinaryReader_NamespaceDecl) == 0x38, "Size mismatch!");

} // namespace end def System::Xml
