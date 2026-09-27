#pragma once
// IWYU pragma private; include "System/Xml/DtdParser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__DtdParser_ScanningFunction_def.hpp"
#include "System/Xml/zzzz__DtdParser_Token_def.hpp"
#include "System/Xml/zzzz__LineInfo_def.hpp"
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DtdParser)
namespace GlobalNamespace {
struct DtdParser_LiteralType;
}
namespace GlobalNamespace {
struct DtdParser_ScanningFunction;
}
namespace GlobalNamespace {
struct DtdParser_Token;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Schema {
class ParticleContentValidator;
}
namespace System::Xml::Schema {
class SchemaAttDef;
}
namespace System::Xml::Schema {
class SchemaElementDecl;
}
namespace System::Xml::Schema {
class SchemaEntity;
}
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml::Schema {
class XmlSchemaException;
}
namespace System::Xml::Schema {
struct XmlSeverityType;
}
namespace System::Xml {
class DtdParser_ParseElementOnlyContent_LocalFrame;
}
namespace System::Xml {
class DtdParser_UndeclaredNotation;
}
namespace System::Xml {
class IDtdInfo;
}
namespace System::Xml {
class IDtdParserAdapterWithValidation;
}
namespace System::Xml {
class IDtdParserAdapter;
}
namespace System::Xml {
class IDtdParser;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml {
class DtdParser;
}
namespace System::Xml {
class DtdParser_ParseElementOnlyContent_LocalFrame;
}
namespace System::Xml {
class DtdParser_UndeclaredNotation;
}
// Write type traits
MARK_REF_T(::System::Xml::DtdParser*);
MARK_REF_T(::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame*);
MARK_REF_T(::System::Xml::DtdParser_UndeclaredNotation*);
DEFINE_IL2CPP_CLASS(::System::Xml::DtdParser*, "System.Xml", "DtdParser");
DEFINE_IL2CPP_CLASS(::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame*, "System.Xml", "DtdParser/ParseElementOnlyContent_LocalFrame");
DEFINE_IL2CPP_CLASS(::System::Xml::DtdParser_UndeclaredNotation*, "System.Xml", "DtdParser/UndeclaredNotation");
// Dependencies System.Object, System.Xml.DtdParser::ScanningFunction, System.Xml.LineInfo, System.Xml.XmlCharType
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.DtdParser
class CORDL_TYPE DtdParser : public ::System::Object {
public:
// Declarations
using LiteralType = ::GlobalNamespace::DtdParser_LiteralType;

using ScanningFunction = ::GlobalNamespace::DtdParser_ScanningFunction;

using Token = ::GlobalNamespace::DtdParser_Token;

using ParseElementOnlyContent_LocalFrame = ::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame;

using UndeclaredNotation = ::System::Xml::DtdParser_UndeclaredNotation;

 __declspec(property(get=get_BaseUriStr)) ::StringW  BaseUriStr;

 __declspec(property(get=get_IgnoreEntityReferences)) bool  IgnoreEntityReferences;

 __declspec(property(get=get_LineNo)) int32_t  LineNo;

 __declspec(property(get=get_LinePos)) int32_t  LinePos;

 __declspec(property(get=get_Normalize)) bool  Normalize;

 __declspec(property(get=get_ParsingInternalSubset)) bool  ParsingInternalSubset;

 __declspec(property(get=get_ParsingTopLevelMarkup)) bool  ParsingTopLevelMarkup;

 __declspec(property(get=get_SaveInternalSubsetValue)) bool  SaveInternalSubsetValue;

 __declspec(property(get=get_SupportNamespaces)) bool  SupportNamespaces;

/// @brief Field chars, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_chars, put=__cordl_internal_set_chars)) ::ArrayW<char16_t>  chars;

/// @brief Field charsUsed, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_charsUsed, put=__cordl_internal_set_charsUsed)) int32_t  charsUsed;

/// @brief Field colonPos, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_colonPos, put=__cordl_internal_set_colonPos)) int32_t  colonPos;

/// @brief Field condSectionDepth, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_condSectionDepth, put=__cordl_internal_set_condSectionDepth)) int32_t  condSectionDepth;

/// @brief Field condSectionEntityIds, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_condSectionEntityIds, put=__cordl_internal_set_condSectionEntityIds)) ::ArrayW<int32_t>  condSectionEntityIds;

/// @brief Field curPos, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_curPos, put=__cordl_internal_set_curPos)) int32_t  curPos;

/// @brief Field currentEntityId, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentEntityId, put=__cordl_internal_set_currentEntityId)) int32_t  currentEntityId;

/// @brief Field documentBaseUri, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_documentBaseUri, put=__cordl_internal_set_documentBaseUri)) ::StringW  documentBaseUri;

/// @brief Field externalDtdBaseUri, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_externalDtdBaseUri, put=__cordl_internal_set_externalDtdBaseUri)) ::StringW  externalDtdBaseUri;

/// @brief Field externalEntitiesDepth, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_externalEntitiesDepth, put=__cordl_internal_set_externalEntitiesDepth)) int32_t  externalEntitiesDepth;

/// @brief Field freeFloatingDtd, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_freeFloatingDtd, put=__cordl_internal_set_freeFloatingDtd)) bool  freeFloatingDtd;

/// @brief Field hasFreeFloatingInternalSubset, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasFreeFloatingInternalSubset, put=__cordl_internal_set_hasFreeFloatingInternalSubset)) bool  hasFreeFloatingInternalSubset;

/// @brief Field internalSubsetValueSb, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_internalSubsetValueSb, put=__cordl_internal_set_internalSubsetValueSb)) ::System::Text::StringBuilder*  internalSubsetValueSb;

/// @brief Field literalLineInfo, offset 0x9c, size 0x8 
 __declspec(property(get=__cordl_internal_get_literalLineInfo, put=__cordl_internal_set_literalLineInfo)) ::System::Xml::LineInfo  literalLineInfo;

/// @brief Field literalQuoteChar, offset 0xa4, size 0x2 
 __declspec(property(get=__cordl_internal_get_literalQuoteChar, put=__cordl_internal_set_literalQuoteChar)) char16_t  literalQuoteChar;

/// @brief Field nameTable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameTable, put=__cordl_internal_set_nameTable)) ::System::Xml::XmlNameTable*  nameTable;

/// @brief Field nextScaningFunction, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextScaningFunction, put=__cordl_internal_set_nextScaningFunction)) ::GlobalNamespace::DtdParser_ScanningFunction  nextScaningFunction;

/// @brief Field normalize, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_normalize, put=__cordl_internal_set_normalize)) bool  normalize;

/// @brief Field publicId, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_publicId, put=__cordl_internal_set_publicId)) ::StringW  publicId;

/// @brief Field readerAdapter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_readerAdapter, put=__cordl_internal_set_readerAdapter)) ::System::Xml::IDtdParserAdapter*  readerAdapter;

/// @brief Field readerAdapterWithValidation, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_readerAdapterWithValidation, put=__cordl_internal_set_readerAdapterWithValidation)) ::System::Xml::IDtdParserAdapterWithValidation*  readerAdapterWithValidation;

/// @brief Field savedScanningFunction, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_savedScanningFunction, put=__cordl_internal_set_savedScanningFunction)) ::GlobalNamespace::DtdParser_ScanningFunction  savedScanningFunction;

/// @brief Field scanningFunction, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_scanningFunction, put=__cordl_internal_set_scanningFunction)) ::GlobalNamespace::DtdParser_ScanningFunction  scanningFunction;

/// @brief Field schemaInfo, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_schemaInfo, put=__cordl_internal_set_schemaInfo)) ::System::Xml::Schema::SchemaInfo*  schemaInfo;

/// @brief Field stringBuilder, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_stringBuilder, put=__cordl_internal_set_stringBuilder)) ::System::Text::StringBuilder*  stringBuilder;

/// @brief Field supportNamespaces, offset 0x4a, size 0x1 
 __declspec(property(get=__cordl_internal_get_supportNamespaces, put=__cordl_internal_set_supportNamespaces)) bool  supportNamespaces;

/// @brief Field systemId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_systemId, put=__cordl_internal_set_systemId)) ::StringW  systemId;

/// @brief Field tokenStartPos, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_tokenStartPos, put=__cordl_internal_set_tokenStartPos)) int32_t  tokenStartPos;

/// @brief Field undeclaredNotations, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_undeclaredNotations, put=__cordl_internal_set_undeclaredNotations)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::DtdParser_UndeclaredNotation*>*  undeclaredNotations;

/// @brief Field v1Compat, offset 0x4b, size 0x1 
 __declspec(property(get=__cordl_internal_get_v1Compat, put=__cordl_internal_set_v1Compat)) bool  v1Compat;

/// @brief Field validate, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_validate, put=__cordl_internal_set_validate)) bool  validate;

/// @brief Field whitespaceSeen, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_whitespaceSeen, put=__cordl_internal_set_whitespaceSeen)) bool  whitespaceSeen;

/// @brief Field xmlCharType, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_xmlCharType, put=__cordl_internal_set_xmlCharType)) ::System::Xml::XmlCharType  xmlCharType;

/// @brief Convert operator to "::System::Xml::IDtdParser"
constexpr operator  ::System::Xml::IDtdParser*() noexcept;

/// @brief Method AddUndeclaredNotation, addr 0xabe6b00, size 0x180, virtual false, abstract: false, final false
inline void AddUndeclaredNotation(::StringW  notationName) ;

/// @brief Method Create, addr 0xabe209c, size 0x50, virtual false, abstract: false, final false
static inline ::System::Xml::IDtdParser* Create() ;

/// @brief Method EatPublicKeyword, addr 0xabeacc4, size 0xe4, virtual false, abstract: false, final false
inline bool EatPublicKeyword() ;

/// @brief Method EatSystemKeyword, addr 0xabeada8, size 0xe4, virtual false, abstract: false, final false
inline bool EatSystemKeyword() ;

/// @brief Method GetNameQualified, addr 0xabe3cb0, size 0x170, virtual false, abstract: false, final false
inline ::System::Xml::XmlQualifiedName* GetNameQualified(bool  canHavePrefix) ;

/// @brief Method GetNameString, addr 0xabe6ae0, size 0x20, virtual false, abstract: false, final false
inline ::StringW GetNameString() ;

/// @brief Method GetNmtokenString, addr 0xabe6c80, size 0x20, virtual false, abstract: false, final false
inline ::StringW GetNmtokenString() ;

/// @brief Method GetToken, addr 0xabe33ec, size 0x864, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token GetToken(bool  needWhiteSpace) ;

/// @brief Method GetValue, addr 0xabe6d00, size 0x5c, virtual false, abstract: false, final false
inline ::StringW GetValue() ;

/// @brief Method GetValueWithStrippedSpaces, addr 0xabe6ca0, size 0x60, virtual false, abstract: false, final false
inline ::StringW GetValueWithStrippedSpaces() ;

/// @brief Method HandleEntityEnd, addr 0xabea9ac, size 0x1a4, virtual false, abstract: false, final false
inline bool HandleEntityEnd(bool  inLiteral) ;

/// @brief Method HandleEntityReference, addr 0xabec214, size 0x2b4, virtual false, abstract: false, final false
inline bool HandleEntityReference(::System::Xml::XmlQualifiedName*  entityName, bool  paramEntity, bool  inLiteral, bool  inAttribute) ;

/// @brief Method HandleEntityReference, addr 0xabe7a2c, size 0x50, virtual false, abstract: false, final false
inline bool HandleEntityReference(bool  paramEntity, bool  inLiteral, bool  inAttribute) ;

/// @brief Method Initialize, addr 0xabe20ec, size 0x420, virtual false, abstract: false, final false
inline void Initialize(::System::Xml::IDtdParserAdapter*  readerAdapter) ;

/// @brief Method InitializeFreeFloatingDtd, addr 0xabe250c, size 0x3f0, virtual false, abstract: false, final false
inline void InitializeFreeFloatingDtd(::StringW  baseUri, ::StringW  docTypeName, ::StringW  publicId, ::StringW  systemId, ::StringW  internalSubset, ::System::Xml::IDtdParserAdapter*  adapter) ;

/// @brief Method IsAttributeValueType, addr 0xabe6a14, size 0xc, virtual false, abstract: false, final false
inline bool IsAttributeValueType(::GlobalNamespace::DtdParser_Token  token) ;

/// @brief Method LoadParsingBuffer, addr 0xabe3260, size 0x18c, virtual false, abstract: false, final false
inline void LoadParsingBuffer() ;

static inline ::System::Xml::DtdParser* New_ctor() ;

/// @brief Method OnUnexpectedError, addr 0xabe3c50, size 0x60, virtual false, abstract: false, final false
inline void OnUnexpectedError() ;

/// @brief Method Parse, addr 0xabe2ae0, size 0x228, virtual false, abstract: false, final false
inline void Parse(bool  saveInternalSubset) ;

/// @brief Method ParseAttlistDecl, addr 0xabe48dc, size 0x560, virtual false, abstract: false, final false
inline void ParseAttlistDecl() ;

/// @brief Method ParseAttlistDefault, addr 0xabe6868, size 0x1ac, virtual false, abstract: false, final false
inline void ParseAttlistDefault(::System::Xml::Schema::SchemaAttDef*  attrDef, bool  ignoreErrors) ;

/// @brief Method ParseAttlistType, addr 0xabe62dc, size 0x58c, virtual false, abstract: false, final false
inline void ParseAttlistType(::System::Xml::Schema::SchemaAttDef*  attrDef, ::System::Xml::Schema::SchemaElementDecl*  elementDecl, bool  ignoreErrors) ;

/// @brief Method ParseComment, addr 0xabe5778, size 0x24c, virtual false, abstract: false, final false
inline void ParseComment() ;

/// @brief Method ParseCondSection, addr 0xabe5b40, size 0x254, virtual false, abstract: false, final false
inline void ParseCondSection() ;

/// @brief Method ParseElementDecl, addr 0xabe4e3c, size 0x3a8, virtual false, abstract: false, final false
inline void ParseElementDecl() ;

/// @brief Method ParseElementMixedContent, addr 0xabe6d5c, size 0x284, virtual false, abstract: false, final false
inline void ParseElementMixedContent(::System::Xml::Schema::ParticleContentValidator*  pcv, int32_t  startParenEntityId) ;

/// @brief Method ParseElementOnlyContent, addr 0xabe6fe0, size 0x370, virtual false, abstract: false, final false
inline void ParseElementOnlyContent(::System::Xml::Schema::ParticleContentValidator*  pcv, int32_t  startParenEntityId) ;

/// @brief Method ParseEntityDecl, addr 0xabe51e4, size 0x390, virtual false, abstract: false, final false
inline void ParseEntityDecl() ;

/// @brief Method ParseExternalId, addr 0xabe3e20, size 0x524, virtual false, abstract: false, final false
inline void ParseExternalId(::GlobalNamespace::DtdParser_Token  idTokenType, ::GlobalNamespace::DtdParser_Token  declType, ::by_ref<::StringW>  publicId, ::by_ref<::StringW>  systemId) ;

/// @brief Method ParseExternalSubset, addr 0xabe4350, size 0x1b0, virtual false, abstract: false, final false
inline void ParseExternalSubset() ;

/// @brief Method ParseFreeFloatingDtd, addr 0xabe2e4c, size 0x54, virtual false, abstract: false, final false
inline void ParseFreeFloatingDtd() ;

/// @brief Method ParseHowMany, addr 0xabe737c, size 0x70, virtual false, abstract: false, final false
inline void ParseHowMany(::System::Xml::Schema::ParticleContentValidator*  pcv) ;

/// @brief Method ParseInDocumentDtd, addr 0xabe2ea0, size 0x164, virtual false, abstract: false, final false
inline void ParseInDocumentDtd(bool  saveInternalSubset) ;

/// @brief Method ParseInternalSubset, addr 0xabe434c, size 0x4, virtual false, abstract: false, final false
inline void ParseInternalSubset() ;

/// @brief Method ParseNotationDecl, addr 0xabe5574, size 0x204, virtual false, abstract: false, final false
inline void ParseNotationDecl() ;

/// @brief Method ParsePI, addr 0xabe59c4, size 0x164, virtual false, abstract: false, final false
inline void ParsePI() ;

/// @brief Method ParseSubset, addr 0xabe4500, size 0x3dc, virtual false, abstract: false, final false
inline void ParseSubset() ;

/// @brief Method ParseUnexpectedToken, addr 0xabe7a7c, size 0xac, virtual false, abstract: false, final false
inline ::StringW ParseUnexpectedToken(int32_t  startPos) ;

/// @brief Method ReadData, addr 0xabea8e8, size 0xc4, virtual false, abstract: false, final false
inline int32_t ReadData() ;

/// @brief Method ReadDataInName, addr 0xabebfb8, size 0x44, virtual false, abstract: false, final false
inline bool ReadDataInName() ;

/// @brief Method SaveParsingBuffer, addr 0xabe4344, size 0x8, virtual false, abstract: false, final false
inline void SaveParsingBuffer() ;

/// @brief Method SaveParsingBuffer, addr 0xabe5e68, size 0x14c, virtual false, abstract: false, final false
inline void SaveParsingBuffer(int32_t  internalSubsetValueEndPos) ;

/// @brief Method ScanAttlist1, addr 0xabe8c30, size 0xc4, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanAttlist1() ;

/// @brief Method ScanAttlist2, addr 0xabe8cf4, size 0x6e4, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanAttlist2() ;

/// @brief Method ScanAttlist3, addr 0xabe93d8, size 0xa0, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanAttlist3() ;

/// @brief Method ScanAttlist4, addr 0xabe9478, size 0xd0, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanAttlist4() ;

/// @brief Method ScanAttlist5, addr 0xabe9548, size 0xd0, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanAttlist5() ;

/// @brief Method ScanAttlist6, addr 0xabe9618, size 0x3c0, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanAttlist6() ;

/// @brief Method ScanAttlist7, addr 0xabe99d8, size 0xbc, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanAttlist7() ;

/// @brief Method ScanClosingTag, addr 0xabea854, size 0x94, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanClosingTag() ;

/// @brief Method ScanCondSection1, addr 0xabea088, size 0x2dc, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanCondSection1() ;

/// @brief Method ScanCondSection2, addr 0xabea364, size 0x98, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanCondSection2() ;

/// @brief Method ScanCondSection3, addr 0xabea3fc, size 0x458, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanCondSection3() ;

/// @brief Method ScanDoctype1, addr 0xabe82d4, size 0x164, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanDoctype1() ;

/// @brief Method ScanDoctype2, addr 0xabe8438, size 0xb8, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanDoctype2() ;

/// @brief Method ScanElement1, addr 0xabe84f0, size 0x1f4, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanElement1() ;

/// @brief Method ScanElement2, addr 0xabe86e4, size 0x1c4, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanElement2() ;

/// @brief Method ScanElement3, addr 0xabe88a8, size 0x80, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanElement3() ;

/// @brief Method ScanElement4, addr 0xabe8928, size 0xe0, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanElement4() ;

/// @brief Method ScanElement5, addr 0xabe8a08, size 0xf8, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanElement5() ;

/// @brief Method ScanElement6, addr 0xabe8b00, size 0xd0, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanElement6() ;

/// @brief Method ScanElement7, addr 0xabe8bd0, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanElement7() ;

/// @brief Method ScanEntity1, addr 0xabe9da0, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanEntity1() ;

/// @brief Method ScanEntity2, addr 0xabe9e14, size 0x170, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanEntity2() ;

/// @brief Method ScanEntity3, addr 0xabe9f84, size 0x104, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanEntity3() ;

/// @brief Method ScanEntityName, addr 0xabeb964, size 0x160, virtual false, abstract: false, final false
inline ::System::Xml::XmlQualifiedName* ScanEntityName() ;

/// @brief Method ScanLiteral, addr 0xabeae8c, size 0xad8, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanLiteral(::GlobalNamespace::DtdParser_LiteralType  literalType) ;

/// @brief Method ScanName, addr 0xabeab50, size 0x8, virtual false, abstract: false, final false
inline void ScanName() ;

/// @brief Method ScanNameExpected, addr 0xabe7b28, size 0x24, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanNameExpected() ;

/// @brief Method ScanNmtoken, addr 0xabeab60, size 0x164, virtual false, abstract: false, final false
inline void ScanNmtoken() ;

/// @brief Method ScanNmtokenExpected, addr 0xabe7b70, size 0x20, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanNmtokenExpected() ;

/// @brief Method ScanNotation1, addr 0xabe9a94, size 0x13c, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanNotation1() ;

/// @brief Method ScanPublicId1, addr 0xabe9c84, size 0xb4, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanPublicId1() ;

/// @brief Method ScanPublicId2, addr 0xabe9d38, size 0x68, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanPublicId2() ;

/// @brief Method ScanQName, addr 0xabeab58, size 0x8, virtual false, abstract: false, final false
inline void ScanQName() ;

/// @brief Method ScanQName, addr 0xabebd30, size 0x288, virtual false, abstract: false, final false
inline void ScanQName(bool  isQName) ;

/// @brief Method ScanQNameExpected, addr 0xabe7b4c, size 0x24, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanQNameExpected() ;

/// @brief Method ScanSubsetContent, addr 0xabe7b90, size 0x744, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanSubsetContent() ;

/// @brief Method ScanSystemId, addr 0xabe9bd0, size 0xb4, virtual false, abstract: false, final false
inline ::GlobalNamespace::DtdParser_Token ScanSystemId() ;

/// @brief Method SendValidationEvent, addr 0xabe5d94, size 0xd4, virtual false, abstract: false, final false
inline void SendValidationEvent(int32_t  pos, ::System::Xml::Schema::XmlSeverityType  severity, ::StringW  code, ::StringW  arg) ;

/// @brief Method SendValidationEvent, addr 0xabe6a20, size 0xc0, virtual false, abstract: false, final false
inline void SendValidationEvent(::System::Xml::Schema::XmlSeverityType  severity, ::StringW  code, ::StringW  arg) ;

/// @brief Method SendValidationEvent, addr 0xabe311c, size 0x144, virtual false, abstract: false, final false
inline void SendValidationEvent(::System::Xml::Schema::XmlSeverityType  severity, ::System::Xml::Schema::XmlSchemaException*  e) ;

/// @brief Method StripSpaces, addr 0xabebffc, size 0x218, virtual false, abstract: false, final false
static inline ::StringW StripSpaces(::StringW  value) ;

/// @brief Method System.Xml.IDtdParser.ParseFreeFloatingDtd, addr 0xabe2d08, size 0x24, virtual true, abstract: false, final true
inline ::System::Xml::IDtdInfo* System_Xml_IDtdParser_ParseFreeFloatingDtd(::StringW  baseUri, ::StringW  docTypeName, ::StringW  publicId, ::StringW  systemId, ::StringW  internalSubset, ::System::Xml::IDtdParserAdapter*  adapter) ;

/// @brief Method System.Xml.IDtdParser.ParseInternalDtd, addr 0xabe2ab0, size 0x30, virtual true, abstract: false, final true
inline ::System::Xml::IDtdInfo* System_Xml_IDtdParser_ParseInternalDtd(::System::Xml::IDtdParserAdapter*  adapter, bool  saveInternalSubset) ;

/// @brief Method Throw, addr 0xabe5b28, size 0x18, virtual false, abstract: false, final false
inline void Throw(int32_t  curPos, ::StringW  res) ;

/// @brief Method Throw, addr 0xabe73ec, size 0x1e4, virtual false, abstract: false, final false
inline void Throw(int32_t  curPos, ::StringW  res, ::StringW  arg) ;

/// @brief Method Throw, addr 0xabe7794, size 0x1e4, virtual false, abstract: false, final false
inline void Throw(int32_t  curPos, ::StringW  res, ::ArrayW<::StringW>  args) ;

/// @brief Method Throw, addr 0xabe6110, size 0x1cc, virtual false, abstract: false, final false
inline void Throw(::StringW  res, ::StringW  arg, int32_t  lineNo, int32_t  linePos) ;

/// @brief Method ThrowInvalidChar, addr 0xabe7978, size 0x80, virtual false, abstract: false, final false
inline void ThrowInvalidChar(::ArrayW<char16_t>  data, int32_t  length, int32_t  invCharPos) ;

/// @brief Method ThrowInvalidChar, addr 0xabe29d4, size 0x7c, virtual false, abstract: false, final false
inline void ThrowInvalidChar(int32_t  pos, ::StringW  data, int32_t  invCharPos) ;

/// @brief Method ThrowUnexpectedToken, addr 0xabe5fb4, size 0x8, virtual false, abstract: false, final false
inline void ThrowUnexpectedToken(int32_t  pos, ::StringW  expectedToken) ;

/// @brief Method ThrowUnexpectedToken, addr 0xabe7624, size 0x170, virtual false, abstract: false, final false
inline void ThrowUnexpectedToken(int32_t  pos, ::StringW  expectedToken1, ::StringW  expectedToken2) ;

/// @brief Method VerifyEntityReference, addr 0xabebac4, size 0x228, virtual false, abstract: false, final false
inline ::System::Xml::Schema::SchemaEntity* VerifyEntityReference(::System::Xml::XmlQualifiedName*  entityName, bool  paramEntity, bool  mustBeDeclared, bool  inAttribute) ;

constexpr ::ArrayW<char16_t> const& __cordl_internal_get_chars() const;

constexpr ::ArrayW<char16_t>& __cordl_internal_get_chars() ;

constexpr int32_t const& __cordl_internal_get_charsUsed() const;

constexpr int32_t& __cordl_internal_get_charsUsed() ;

constexpr int32_t const& __cordl_internal_get_colonPos() const;

constexpr int32_t& __cordl_internal_get_colonPos() ;

constexpr int32_t const& __cordl_internal_get_condSectionDepth() const;

constexpr int32_t& __cordl_internal_get_condSectionDepth() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_condSectionEntityIds() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_condSectionEntityIds() ;

constexpr int32_t const& __cordl_internal_get_curPos() const;

constexpr int32_t& __cordl_internal_get_curPos() ;

constexpr int32_t const& __cordl_internal_get_currentEntityId() const;

constexpr int32_t& __cordl_internal_get_currentEntityId() ;

constexpr ::StringW const& __cordl_internal_get_documentBaseUri() const;

constexpr ::StringW& __cordl_internal_get_documentBaseUri() ;

constexpr ::StringW const& __cordl_internal_get_externalDtdBaseUri() const;

constexpr ::StringW& __cordl_internal_get_externalDtdBaseUri() ;

constexpr int32_t const& __cordl_internal_get_externalEntitiesDepth() const;

constexpr int32_t& __cordl_internal_get_externalEntitiesDepth() ;

constexpr bool const& __cordl_internal_get_freeFloatingDtd() const;

constexpr bool& __cordl_internal_get_freeFloatingDtd() ;

constexpr bool const& __cordl_internal_get_hasFreeFloatingInternalSubset() const;

constexpr bool& __cordl_internal_get_hasFreeFloatingInternalSubset() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_internalSubsetValueSb() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_internalSubsetValueSb() ;

constexpr ::System::Xml::LineInfo const& __cordl_internal_get_literalLineInfo() const;

constexpr ::System::Xml::LineInfo& __cordl_internal_get_literalLineInfo() ;

constexpr char16_t const& __cordl_internal_get_literalQuoteChar() const;

constexpr char16_t& __cordl_internal_get_literalQuoteChar() ;

constexpr ::System::Xml::XmlNameTable* const& __cordl_internal_get_nameTable() const;

constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_nameTable() ;

constexpr ::GlobalNamespace::DtdParser_ScanningFunction const& __cordl_internal_get_nextScaningFunction() const;

constexpr ::GlobalNamespace::DtdParser_ScanningFunction& __cordl_internal_get_nextScaningFunction() ;

constexpr bool const& __cordl_internal_get_normalize() const;

constexpr bool& __cordl_internal_get_normalize() ;

constexpr ::StringW const& __cordl_internal_get_publicId() const;

constexpr ::StringW& __cordl_internal_get_publicId() ;

constexpr ::System::Xml::IDtdParserAdapter* const& __cordl_internal_get_readerAdapter() const;

constexpr ::System::Xml::IDtdParserAdapter*& __cordl_internal_get_readerAdapter() ;

constexpr ::System::Xml::IDtdParserAdapterWithValidation* const& __cordl_internal_get_readerAdapterWithValidation() const;

constexpr ::System::Xml::IDtdParserAdapterWithValidation*& __cordl_internal_get_readerAdapterWithValidation() ;

constexpr ::GlobalNamespace::DtdParser_ScanningFunction const& __cordl_internal_get_savedScanningFunction() const;

constexpr ::GlobalNamespace::DtdParser_ScanningFunction& __cordl_internal_get_savedScanningFunction() ;

constexpr ::GlobalNamespace::DtdParser_ScanningFunction const& __cordl_internal_get_scanningFunction() const;

constexpr ::GlobalNamespace::DtdParser_ScanningFunction& __cordl_internal_get_scanningFunction() ;

constexpr ::System::Xml::Schema::SchemaInfo* const& __cordl_internal_get_schemaInfo() const;

constexpr ::System::Xml::Schema::SchemaInfo*& __cordl_internal_get_schemaInfo() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_stringBuilder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_stringBuilder() ;

constexpr bool const& __cordl_internal_get_supportNamespaces() const;

constexpr bool& __cordl_internal_get_supportNamespaces() ;

constexpr ::StringW const& __cordl_internal_get_systemId() const;

constexpr ::StringW& __cordl_internal_get_systemId() ;

constexpr int32_t const& __cordl_internal_get_tokenStartPos() const;

constexpr int32_t& __cordl_internal_get_tokenStartPos() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::DtdParser_UndeclaredNotation*>* const& __cordl_internal_get_undeclaredNotations() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::DtdParser_UndeclaredNotation*>*& __cordl_internal_get_undeclaredNotations() ;

constexpr bool const& __cordl_internal_get_v1Compat() const;

constexpr bool& __cordl_internal_get_v1Compat() ;

constexpr bool const& __cordl_internal_get_validate() const;

constexpr bool& __cordl_internal_get_validate() ;

constexpr bool const& __cordl_internal_get_whitespaceSeen() const;

constexpr bool& __cordl_internal_get_whitespaceSeen() ;

constexpr ::System::Xml::XmlCharType const& __cordl_internal_get_xmlCharType() const;

constexpr ::System::Xml::XmlCharType& __cordl_internal_get_xmlCharType() ;

constexpr void __cordl_internal_set_chars(::ArrayW<char16_t>  value) ;

constexpr void __cordl_internal_set_charsUsed(int32_t  value) ;

constexpr void __cordl_internal_set_colonPos(int32_t  value) ;

constexpr void __cordl_internal_set_condSectionDepth(int32_t  value) ;

constexpr void __cordl_internal_set_condSectionEntityIds(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_curPos(int32_t  value) ;

constexpr void __cordl_internal_set_currentEntityId(int32_t  value) ;

constexpr void __cordl_internal_set_documentBaseUri(::StringW  value) ;

constexpr void __cordl_internal_set_externalDtdBaseUri(::StringW  value) ;

constexpr void __cordl_internal_set_externalEntitiesDepth(int32_t  value) ;

constexpr void __cordl_internal_set_freeFloatingDtd(bool  value) ;

constexpr void __cordl_internal_set_hasFreeFloatingInternalSubset(bool  value) ;

constexpr void __cordl_internal_set_internalSubsetValueSb(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_literalLineInfo(::System::Xml::LineInfo  value) ;

constexpr void __cordl_internal_set_literalQuoteChar(char16_t  value) ;

constexpr void __cordl_internal_set_nameTable(::System::Xml::XmlNameTable*  value) ;

constexpr void __cordl_internal_set_nextScaningFunction(::GlobalNamespace::DtdParser_ScanningFunction  value) ;

constexpr void __cordl_internal_set_normalize(bool  value) ;

constexpr void __cordl_internal_set_publicId(::StringW  value) ;

constexpr void __cordl_internal_set_readerAdapter(::System::Xml::IDtdParserAdapter*  value) ;

constexpr void __cordl_internal_set_readerAdapterWithValidation(::System::Xml::IDtdParserAdapterWithValidation*  value) ;

constexpr void __cordl_internal_set_savedScanningFunction(::GlobalNamespace::DtdParser_ScanningFunction  value) ;

constexpr void __cordl_internal_set_scanningFunction(::GlobalNamespace::DtdParser_ScanningFunction  value) ;

constexpr void __cordl_internal_set_schemaInfo(::System::Xml::Schema::SchemaInfo*  value) ;

constexpr void __cordl_internal_set_stringBuilder(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_supportNamespaces(bool  value) ;

constexpr void __cordl_internal_set_systemId(::StringW  value) ;

constexpr void __cordl_internal_set_tokenStartPos(int32_t  value) ;

constexpr void __cordl_internal_set_undeclaredNotations(::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::DtdParser_UndeclaredNotation*>*  value) ;

constexpr void __cordl_internal_set_v1Compat(bool  value) ;

constexpr void __cordl_internal_set_validate(bool  value) ;

constexpr void __cordl_internal_set_whitespaceSeen(bool  value) ;

constexpr void __cordl_internal_set_xmlCharType(::System::Xml::XmlCharType  value) ;

/// @brief Method .ctor, addr 0xabe1f6c, size 0xb8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BaseUriStr, addr 0xabe3004, size 0x118, virtual false, abstract: false, final false
inline ::StringW get_BaseUriStr() ;

/// @brief Method get_IgnoreEntityReferences, addr 0xabe2d3c, size 0x10, virtual false, abstract: false, final false
inline bool get_IgnoreEntityReferences() ;

/// @brief Method get_LineNo, addr 0xabe5fbc, size 0xa4, virtual false, abstract: false, final false
inline int32_t get_LineNo() ;

/// @brief Method get_LinePos, addr 0xabe6060, size 0xb0, virtual false, abstract: false, final false
inline int32_t get_LinePos() ;

/// @brief Method get_Normalize, addr 0xabe2e44, size 0x8, virtual false, abstract: false, final false
inline bool get_Normalize() ;

/// @brief Method get_ParsingInternalSubset, addr 0xabe2d2c, size 0x10, virtual false, abstract: false, final false
inline bool get_ParsingInternalSubset() ;

/// @brief Method get_ParsingTopLevelMarkup, addr 0xabe2e0c, size 0x30, virtual false, abstract: false, final false
inline bool get_ParsingTopLevelMarkup() ;

/// @brief Method get_SaveInternalSubsetValue, addr 0xabe2d4c, size 0xc0, virtual false, abstract: false, final false
inline bool get_SaveInternalSubsetValue() ;

/// @brief Method get_SupportNamespaces, addr 0xabe2e3c, size 0x8, virtual false, abstract: false, final false
inline bool get_SupportNamespaces() ;

/// @brief Convert to "::System::Xml::IDtdParser"
constexpr ::System::Xml::IDtdParser* i___System__Xml__IDtdParser() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DtdParser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DtdParser", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DtdParser(DtdParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DtdParser", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DtdParser(DtdParser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14158};

/// @brief Field readerAdapter, offset: 0x10, size: 0x8, def value: None
 ::System::Xml::IDtdParserAdapter*  ___readerAdapter;

/// @brief Field readerAdapterWithValidation, offset: 0x18, size: 0x8, def value: None
 ::System::Xml::IDtdParserAdapterWithValidation*  ___readerAdapterWithValidation;

/// @brief Field nameTable, offset: 0x20, size: 0x8, def value: None
 ::System::Xml::XmlNameTable*  ___nameTable;

/// @brief Field schemaInfo, offset: 0x28, size: 0x8, def value: None
 ::System::Xml::Schema::SchemaInfo*  ___schemaInfo;

/// @brief Field xmlCharType, offset: 0x30, size: 0x8, def value: None
 ::System::Xml::XmlCharType  ___xmlCharType;

/// @brief Field systemId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___systemId;

/// @brief Field publicId, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___publicId;

/// @brief Field normalize, offset: 0x48, size: 0x1, def value: None
 bool  ___normalize;

/// @brief Field validate, offset: 0x49, size: 0x1, def value: None
 bool  ___validate;

/// @brief Field supportNamespaces, offset: 0x4a, size: 0x1, def value: None
 bool  ___supportNamespaces;

/// @brief Field v1Compat, offset: 0x4b, size: 0x1, def value: None
 bool  ___v1Compat;

/// @brief Field chars, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<char16_t>  ___chars;

/// @brief Field charsUsed, offset: 0x58, size: 0x4, def value: None
 int32_t  ___charsUsed;

/// @brief Field curPos, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___curPos;

/// @brief Field scanningFunction, offset: 0x60, size: 0x4, def value: None
 ::GlobalNamespace::DtdParser_ScanningFunction  ___scanningFunction;

/// @brief Field nextScaningFunction, offset: 0x64, size: 0x4, def value: None
 ::GlobalNamespace::DtdParser_ScanningFunction  ___nextScaningFunction;

/// @brief Field savedScanningFunction, offset: 0x68, size: 0x4, def value: None
 ::GlobalNamespace::DtdParser_ScanningFunction  ___savedScanningFunction;

/// @brief Field whitespaceSeen, offset: 0x6c, size: 0x1, def value: None
 bool  ___whitespaceSeen;

/// @brief Field tokenStartPos, offset: 0x70, size: 0x4, def value: None
 int32_t  ___tokenStartPos;

/// @brief Field colonPos, offset: 0x74, size: 0x4, def value: None
 int32_t  ___colonPos;

/// @brief Field internalSubsetValueSb, offset: 0x78, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___internalSubsetValueSb;

/// @brief Field externalEntitiesDepth, offset: 0x80, size: 0x4, def value: None
 int32_t  ___externalEntitiesDepth;

/// @brief Field currentEntityId, offset: 0x84, size: 0x4, def value: None
 int32_t  ___currentEntityId;

/// @brief Field freeFloatingDtd, offset: 0x88, size: 0x1, def value: None
 bool  ___freeFloatingDtd;

/// @brief Field hasFreeFloatingInternalSubset, offset: 0x89, size: 0x1, def value: None
 bool  ___hasFreeFloatingInternalSubset;

/// @brief Field stringBuilder, offset: 0x90, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___stringBuilder;

/// @brief Field condSectionDepth, offset: 0x98, size: 0x4, def value: None
 int32_t  ___condSectionDepth;

/// @brief Field literalLineInfo, offset: 0x9c, size: 0x8, def value: None
 ::System::Xml::LineInfo  ___literalLineInfo;

/// @brief Field literalQuoteChar, offset: 0xa4, size: 0x2, def value: None
 char16_t  ___literalQuoteChar;

/// @brief Field documentBaseUri, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___documentBaseUri;

/// @brief Field externalDtdBaseUri, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___externalDtdBaseUri;

/// @brief Field undeclaredNotations, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::DtdParser_UndeclaredNotation*>*  ___undeclaredNotations;

/// @brief Field condSectionEntityIds, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___condSectionEntityIds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::DtdParser, ___readerAdapter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___readerAdapterWithValidation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___nameTable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___schemaInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___xmlCharType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___systemId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___publicId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___normalize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___validate) == 0x49, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___supportNamespaces) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___v1Compat) == 0x4b, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___chars) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___charsUsed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___curPos) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___scanningFunction) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___nextScaningFunction) == 0x64, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___savedScanningFunction) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___whitespaceSeen) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___tokenStartPos) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___colonPos) == 0x74, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___internalSubsetValueSb) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___externalEntitiesDepth) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___currentEntityId) == 0x84, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___freeFloatingDtd) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___hasFreeFloatingInternalSubset) == 0x89, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___stringBuilder) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___condSectionDepth) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___literalLineInfo) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___literalQuoteChar) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___documentBaseUri) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___externalDtdBaseUri) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___undeclaredNotations) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___condSectionEntityIds) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::System::Xml::DtdParser) == 0xc8, "Size mismatch!");

} // namespace end def System::Xml
// Dependencies System.Object, System.Xml.DtdParser::Token
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.DtdParser/ParseElementOnlyContent_LocalFrame
class CORDL_TYPE DtdParser_ParseElementOnlyContent_LocalFrame : public ::System::Object {
public:
// Declarations
/// @brief Field parsingSchema, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_parsingSchema, put=__cordl_internal_set_parsingSchema)) ::GlobalNamespace::DtdParser_Token  parsingSchema;

/// @brief Field startParenEntityId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_startParenEntityId, put=__cordl_internal_set_startParenEntityId)) int32_t  startParenEntityId;

static inline ::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame* New_ctor(int32_t  startParentEntityIdParam) ;

constexpr ::GlobalNamespace::DtdParser_Token const& __cordl_internal_get_parsingSchema() const;

constexpr ::GlobalNamespace::DtdParser_Token& __cordl_internal_get_parsingSchema() ;

constexpr int32_t const& __cordl_internal_get_startParenEntityId() const;

constexpr int32_t& __cordl_internal_get_startParenEntityId() ;

constexpr void __cordl_internal_set_parsingSchema(::GlobalNamespace::DtdParser_Token  value) ;

constexpr void __cordl_internal_set_startParenEntityId(int32_t  value) ;

/// @brief Method .ctor, addr 0xabe7350, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(int32_t  startParentEntityIdParam) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DtdParser_ParseElementOnlyContent_LocalFrame() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DtdParser_ParseElementOnlyContent_LocalFrame", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DtdParser_ParseElementOnlyContent_LocalFrame(DtdParser_ParseElementOnlyContent_LocalFrame && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DtdParser_ParseElementOnlyContent_LocalFrame", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DtdParser_ParseElementOnlyContent_LocalFrame(DtdParser_ParseElementOnlyContent_LocalFrame const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14157};

/// @brief Field startParenEntityId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___startParenEntityId;

/// @brief Field parsingSchema, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::DtdParser_Token  ___parsingSchema;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame, ___startParenEntityId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame, ___parsingSchema) == 0x14, "Offset mismatch!");

static_assert(sizeof(::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame) == 0x18, "Size mismatch!");

} // namespace end def System::Xml
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.DtdParser/UndeclaredNotation
class CORDL_TYPE DtdParser_UndeclaredNotation : public ::System::Object {
public:
// Declarations
/// @brief Field lineNo, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_lineNo, put=__cordl_internal_set_lineNo)) int32_t  lineNo;

/// @brief Field linePos, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_linePos, put=__cordl_internal_set_linePos)) int32_t  linePos;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field next, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_next, put=__cordl_internal_set_next)) ::System::Xml::DtdParser_UndeclaredNotation*  next;

static inline ::System::Xml::DtdParser_UndeclaredNotation* New_ctor(::StringW  name, int32_t  lineNo, int32_t  linePos) ;

constexpr int32_t const& __cordl_internal_get_lineNo() const;

constexpr int32_t& __cordl_internal_get_lineNo() ;

constexpr int32_t const& __cordl_internal_get_linePos() const;

constexpr int32_t& __cordl_internal_get_linePos() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::System::Xml::DtdParser_UndeclaredNotation* const& __cordl_internal_get_next() const;

constexpr ::System::Xml::DtdParser_UndeclaredNotation*& __cordl_internal_get_next() ;

constexpr void __cordl_internal_set_lineNo(int32_t  value) ;

constexpr void __cordl_internal_set_linePos(int32_t  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_next(::System::Xml::DtdParser_UndeclaredNotation*  value) ;

/// @brief Method .ctor, addr 0xabe75d0, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, int32_t  lineNo, int32_t  linePos) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DtdParser_UndeclaredNotation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DtdParser_UndeclaredNotation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DtdParser_UndeclaredNotation(DtdParser_UndeclaredNotation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DtdParser_UndeclaredNotation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DtdParser_UndeclaredNotation(DtdParser_UndeclaredNotation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14156};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field lineNo, offset: 0x18, size: 0x4, def value: None
 int32_t  ___lineNo;

/// @brief Field linePos, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___linePos;

/// @brief Field next, offset: 0x20, size: 0x8, def value: None
 ::System::Xml::DtdParser_UndeclaredNotation*  ___next;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::DtdParser_UndeclaredNotation, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser_UndeclaredNotation, ___lineNo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser_UndeclaredNotation, ___linePos) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser_UndeclaredNotation, ___next) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Xml::DtdParser_UndeclaredNotation) == 0x28, "Size mismatch!");

} // namespace end def System::Xml
