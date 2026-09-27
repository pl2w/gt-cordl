#pragma once
// IWYU pragma private; include "System/Xml/XsdValidatingReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__AttributePSVIInfo_def.hpp"
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XsdValidatingReader_ValidatingReaderState_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XsdValidatingReader)
namespace GlobalNamespace {
struct XsdValidatingReader_ValidatingReaderState;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml::Schema {
class Parser;
}
namespace System::Xml::Schema {
class ValidationEventHandler;
}
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaElement;
}
namespace System::Xml::Schema {
class XmlSchemaInfo;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class XmlSchemaValidator;
}
namespace System::Xml::Schema {
struct XmlSchemaValidity;
}
namespace System::Xml::Schema {
class XmlValueGetter;
}
namespace System::Xml {
class AttributePSVIInfo;
}
namespace System::Xml {
class IXmlLineInfo;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class ReadContentAsBinaryHelper;
}
namespace System::Xml {
struct ReadState;
}
namespace System::Xml {
class ValidatingReaderNodeData;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlNamespaceManager;
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
class XmlResolver;
}
namespace System::Xml {
struct XmlSpace;
}
namespace System::Xml {
class XsdCachingReader;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml {
class XsdValidatingReader;
}
// Write type traits
MARK_REF_T(::System::Xml::XsdValidatingReader*);
DEFINE_IL2CPP_CLASS(::System::Xml::XsdValidatingReader*, "System.Xml", "XsdValidatingReader");
// Dependencies System.Xml.AttributePSVIInfo, System.Xml.XmlCharType, System.Xml.XmlReader, System.Xml.XsdValidatingReader::ValidatingReaderState
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XsdValidatingReader
class CORDL_TYPE XsdValidatingReader : public ::System::Xml::XmlReader {
public:
// Declarations
using ValidatingReaderState = ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState;

 __declspec(property(get=get_AttributeCount)) int32_t  AttributeCount;

 __declspec(property(get=get_AttributeSchemaInfo)) ::System::Xml::Schema::XmlSchemaInfo*  AttributeSchemaInfo;

 __declspec(property(get=get_AttributeXmlType)) ::System::Xml::Schema::XmlSchemaType*  AttributeXmlType;

 __declspec(property(get=get_BaseURI)) ::StringW  BaseURI;

 __declspec(property(get=get_Depth)) int32_t  Depth;

 __declspec(property(get=get_ElementXmlType)) ::System::Xml::Schema::XmlSchemaType*  ElementXmlType;

 __declspec(property(get=get_IsDefault)) bool  IsDefault;

 __declspec(property(get=get_IsEmptyElement)) bool  IsEmptyElement;

 __declspec(property(get=get_LineNumber)) int32_t  LineNumber;

 __declspec(property(get=get_LinePosition)) int32_t  LinePosition;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NameTable)) ::System::Xml::XmlNameTable*  NameTable;

 __declspec(property(get=get_NamespaceURI)) ::StringW  NamespaceURI;

 __declspec(property(get=get_NodeType)) ::System::Xml::XmlNodeType  NodeType;

/// @brief Field NsXmlNs, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_NsXmlNs, put=__cordl_internal_set_NsXmlNs)) ::StringW  NsXmlNs;

/// @brief Field NsXs, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_NsXs, put=__cordl_internal_set_NsXs)) ::StringW  NsXs;

/// @brief Field NsXsi, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_NsXsi, put=__cordl_internal_set_NsXsi)) ::StringW  NsXsi;

 __declspec(property(get=get_Prefix)) ::StringW  Prefix;

 __declspec(property(get=get_QuoteChar)) char16_t  QuoteChar;

 __declspec(property(get=get_ReadState)) ::System::Xml::ReadState  ReadState;

 __declspec(property(get=get_SchemaInfo)) ::System::Xml::Schema::IXmlSchemaInfo*  SchemaInfo;

 __declspec(property(get=get_Settings)) ::System::Xml::XmlReaderSettings*  Settings;

 __declspec(property(get=System_Xml_Schema_IXmlSchemaInfo_get_IsDefault)) bool  System_Xml_Schema_IXmlSchemaInfo_IsDefault;

 __declspec(property(get=System_Xml_Schema_IXmlSchemaInfo_get_IsNil)) bool  System_Xml_Schema_IXmlSchemaInfo_IsNil;

 __declspec(property(get=System_Xml_Schema_IXmlSchemaInfo_get_MemberType)) ::System::Xml::Schema::XmlSchemaSimpleType*  System_Xml_Schema_IXmlSchemaInfo_MemberType;

 __declspec(property(get=System_Xml_Schema_IXmlSchemaInfo_get_SchemaAttribute)) ::System::Xml::Schema::XmlSchemaAttribute*  System_Xml_Schema_IXmlSchemaInfo_SchemaAttribute;

 __declspec(property(get=System_Xml_Schema_IXmlSchemaInfo_get_SchemaElement)) ::System::Xml::Schema::XmlSchemaElement*  System_Xml_Schema_IXmlSchemaInfo_SchemaElement;

 __declspec(property(get=System_Xml_Schema_IXmlSchemaInfo_get_SchemaType)) ::System::Xml::Schema::XmlSchemaType*  System_Xml_Schema_IXmlSchemaInfo_SchemaType;

 __declspec(property(get=System_Xml_Schema_IXmlSchemaInfo_get_Validity)) ::System::Xml::Schema::XmlSchemaValidity  System_Xml_Schema_IXmlSchemaInfo_Validity;

/// @brief Field TypeOfString, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TypeOfString, put=setStaticF_TypeOfString)) ::System::Type*  TypeOfString;

 __declspec(property(get=get_Value)) ::StringW  Value;

 __declspec(property(get=get_ValueType)) ::System::Type*  ValueType;

 __declspec(property(get=get_XmlLang)) ::StringW  XmlLang;

 __declspec(property(get=get_XmlSpace)) ::System::Xml::XmlSpace  XmlSpace;

/// @brief Field XsdSchema, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_XsdSchema, put=__cordl_internal_set_XsdSchema)) ::StringW  XsdSchema;

/// @brief Field XsiNil, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_XsiNil, put=__cordl_internal_set_XsiNil)) ::StringW  XsiNil;

/// @brief Field XsiNoNamespaceSchemaLocation, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_XsiNoNamespaceSchemaLocation, put=__cordl_internal_set_XsiNoNamespaceSchemaLocation)) ::StringW  XsiNoNamespaceSchemaLocation;

/// @brief Field XsiSchemaLocation, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_XsiSchemaLocation, put=__cordl_internal_set_XsiSchemaLocation)) ::StringW  XsiSchemaLocation;

/// @brief Field XsiType, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_XsiType, put=__cordl_internal_set_XsiType)) ::StringW  XsiType;

 __declspec(property(get=get_EOF)) bool  _cordl_EOF;

/// @brief Field atomicValue, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_atomicValue, put=__cordl_internal_set_atomicValue)) ::System::Object*  atomicValue;

/// @brief Field attributeCount, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_attributeCount, put=__cordl_internal_set_attributeCount)) int32_t  attributeCount;

/// @brief Field attributePSVI, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributePSVI, put=__cordl_internal_set_attributePSVI)) ::System::Xml::AttributePSVIInfo*  attributePSVI;

/// @brief Field attributePSVINodes, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributePSVINodes, put=__cordl_internal_set_attributePSVINodes)) ::ArrayW<::System::Xml::AttributePSVIInfo*>  attributePSVINodes;

/// @brief Field cachedNode, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedNode, put=__cordl_internal_set_cachedNode)) ::System::Xml::ValidatingReaderNodeData*  cachedNode;

/// @brief Field cachingReader, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachingReader, put=__cordl_internal_set_cachingReader)) ::System::Xml::XsdCachingReader*  cachingReader;

/// @brief Field coreReader, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_coreReader, put=__cordl_internal_set_coreReader)) ::System::Xml::XmlReader*  coreReader;

/// @brief Field coreReaderAttributeCount, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_coreReaderAttributeCount, put=__cordl_internal_set_coreReaderAttributeCount)) int32_t  coreReaderAttributeCount;

/// @brief Field coreReaderNSResolver, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_coreReaderNSResolver, put=__cordl_internal_set_coreReaderNSResolver)) ::System::Xml::IXmlNamespaceResolver*  coreReaderNSResolver;

/// @brief Field coreReaderNameTable, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_coreReaderNameTable, put=__cordl_internal_set_coreReaderNameTable)) ::System::Xml::XmlNameTable*  coreReaderNameTable;

/// @brief Field currentAttrIndex, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentAttrIndex, put=__cordl_internal_set_currentAttrIndex)) int32_t  currentAttrIndex;

/// @brief Field defaultAttributes, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultAttributes, put=__cordl_internal_set_defaultAttributes)) ::System::Collections::ArrayList*  defaultAttributes;

/// @brief Field inlineSchemaParser, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_inlineSchemaParser, put=__cordl_internal_set_inlineSchemaParser)) ::System::Xml::Schema::Parser*  inlineSchemaParser;

/// @brief Field lineInfo, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineInfo, put=__cordl_internal_set_lineInfo)) ::System::Xml::IXmlLineInfo*  lineInfo;

/// @brief Field manageNamespaces, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_manageNamespaces, put=__cordl_internal_set_manageNamespaces)) bool  manageNamespaces;

/// @brief Field nsManager, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_nsManager, put=__cordl_internal_set_nsManager)) ::System::Xml::XmlNamespaceManager*  nsManager;

/// @brief Field originalAtomicValueString, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalAtomicValueString, put=__cordl_internal_set_originalAtomicValueString)) ::StringW  originalAtomicValueString;

/// @brief Field processInlineSchema, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_processInlineSchema, put=__cordl_internal_set_processInlineSchema)) bool  processInlineSchema;

/// @brief Field readBinaryHelper, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_readBinaryHelper, put=__cordl_internal_set_readBinaryHelper)) ::System::Xml::ReadContentAsBinaryHelper*  readBinaryHelper;

/// @brief Field replayCache, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get_replayCache, put=__cordl_internal_set_replayCache)) bool  replayCache;

/// @brief Field savedState, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_savedState, put=__cordl_internal_set_savedState)) ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState  savedState;

/// @brief Field textNode, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_textNode, put=__cordl_internal_set_textNode)) ::System::Xml::ValidatingReaderNodeData*  textNode;

/// @brief Field thisNSResolver, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_thisNSResolver, put=__cordl_internal_set_thisNSResolver)) ::System::Xml::IXmlNamespaceResolver*  thisNSResolver;

/// @brief Field validationEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_validationEvent, put=__cordl_internal_set_validationEvent)) ::System::Xml::Schema::ValidationEventHandler*  validationEvent;

/// @brief Field validationState, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_validationState, put=__cordl_internal_set_validationState)) ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState  validationState;

/// @brief Field validator, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_validator, put=__cordl_internal_set_validator)) ::System::Xml::Schema::XmlSchemaValidator*  validator;

/// @brief Field valueGetter, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_valueGetter, put=__cordl_internal_set_valueGetter)) ::System::Xml::Schema::XmlValueGetter*  valueGetter;

/// @brief Field xmlCharType, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_xmlCharType, put=__cordl_internal_set_xmlCharType)) ::System::Xml::XmlCharType  xmlCharType;

/// @brief Field xmlResolver, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_xmlResolver, put=__cordl_internal_set_xmlResolver)) ::System::Xml::XmlResolver*  xmlResolver;

/// @brief Field xmlSchemaInfo, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_xmlSchemaInfo, put=__cordl_internal_set_xmlSchemaInfo)) ::System::Xml::Schema::XmlSchemaInfo*  xmlSchemaInfo;

/// @brief Convert operator to "::System::Xml::IXmlLineInfo"
constexpr operator  ::System::Xml::IXmlLineInfo*() noexcept;

/// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
constexpr operator  ::System::Xml::IXmlNamespaceResolver*() noexcept;

/// @brief Convert operator to "::System::Xml::Schema::IXmlSchemaInfo"
constexpr operator  ::System::Xml::Schema::IXmlSchemaInfo*() noexcept;

/// @brief Method AddAttributePSVI, addr 0xabc5f40, size 0x164, virtual false, abstract: false, final false
inline ::System::Xml::AttributePSVIInfo* AddAttributePSVI(int32_t  attIndex) ;

/// @brief Method CachingCallBack, addr 0xabc6840, size 0x48, virtual false, abstract: false, final false
inline void CachingCallBack(::System::Xml::XsdCachingReader*  cachingReader) ;

/// @brief Method ClearAttributesInfo, addr 0xabc4554, size 0x44, virtual false, abstract: false, final false
inline void ClearAttributesInfo() ;

/// @brief Method Close, addr 0xabc45b8, size 0x34, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method CreateDummyTextNode, addr 0xabc4930, size 0xa0, virtual false, abstract: false, final false
inline ::System::Xml::ValidatingReaderNodeData* CreateDummyTextNode(::StringW  attributeValue, int32_t  depth) ;

/// @brief Method GetAttribute, addr 0xabc36d4, size 0xd8, virtual true, abstract: false, final false
inline ::StringW GetAttribute(int32_t  i) ;

/// @brief Method GetAttribute, addr 0xabc32dc, size 0x6c, virtual true, abstract: false, final false
inline ::StringW GetAttribute(::StringW  name) ;

/// @brief Method GetAttribute, addr 0xabc34c4, size 0xd0, virtual true, abstract: false, final false
inline ::StringW GetAttribute(::StringW  name, ::StringW  namespaceURI) ;

/// @brief Method GetAttributePSVI, addr 0xabc3b50, size 0xa8, virtual false, abstract: false, final false
inline ::System::Xml::AttributePSVIInfo* GetAttributePSVI(::StringW  localName, ::StringW  ns) ;

/// @brief Method GetAttributePSVI, addr 0xabc3888, size 0x178, virtual false, abstract: false, final false
inline ::System::Xml::AttributePSVIInfo* GetAttributePSVI(::StringW  name) ;

/// @brief Method GetCachingReader, addr 0xabc5e40, size 0x100, virtual false, abstract: false, final false
inline ::System::Xml::XsdCachingReader* GetCachingReader() ;

/// @brief Method GetDefaultAttribute, addr 0xabc3594, size 0x140, virtual false, abstract: false, final false
inline ::System::Xml::ValidatingReaderNodeData* GetDefaultAttribute(::StringW  attrLocalName, ::StringW  ns, bool  updatePosition) ;

/// @brief Method GetDefaultAttribute, addr 0xabc3348, size 0x17c, virtual false, abstract: false, final false
inline ::System::Xml::ValidatingReaderNodeData* GetDefaultAttribute(::StringW  name, bool  updatePosition) ;

/// @brief Method GetIsDefault, addr 0xabc4bd8, size 0x2a0, virtual false, abstract: false, final false
inline void GetIsDefault() ;

/// @brief Method GetMemberType, addr 0xabc4fd0, size 0x108, virtual false, abstract: false, final false
inline void GetMemberType() ;

/// @brief Method GetOriginalAtomicValueStringOfElement, addr 0xabc5de0, size 0x60, virtual false, abstract: false, final false
inline ::StringW GetOriginalAtomicValueStringOfElement() ;

/// @brief Method GetStringValue, addr 0xabc557c, size 0x1c, virtual false, abstract: false, final false
inline ::System::Object* GetStringValue() ;

/// @brief Method HasLineInfo, addr 0xabc51cc, size 0x8, virtual true, abstract: false, final true
inline bool HasLineInfo() ;

/// @brief Method Init, addr 0xabbf7b4, size 0x39c, virtual false, abstract: false, final false
inline void Init() ;

/// @brief Method InternalReadContentAsObject, addr 0xabc0660, size 0x18, virtual false, abstract: false, final false
inline ::System::Object* InternalReadContentAsObject() ;

/// @brief Method InternalReadContentAsObject, addr 0xabc038c, size 0x14, virtual false, abstract: false, final false
inline ::System::Object* InternalReadContentAsObject(bool  unwrapTypedValue) ;

/// @brief Method InternalReadContentAsObject, addr 0xabc1d74, size 0x258, virtual false, abstract: false, final false
inline ::System::Object* InternalReadContentAsObject(bool  unwrapTypedValue, ::by_ref<::StringW>  originalStringValue) ;

/// @brief Method InternalReadElementContentAsObject, addr 0xabc2230, size 0x18, virtual false, abstract: false, final false
inline ::System::Object* InternalReadElementContentAsObject(::by_ref<::System::Xml::Schema::XmlSchemaType*>  xmlType) ;

/// @brief Method InternalReadElementContentAsObject, addr 0xabc63d8, size 0x14, virtual false, abstract: false, final false
inline ::System::Object* InternalReadElementContentAsObject(::by_ref<::System::Xml::Schema::XmlSchemaType*>  xmlType, bool  unwrapTypedValue) ;

/// @brief Method InternalReadElementContentAsObject, addr 0xabc63ec, size 0x1dc, virtual false, abstract: false, final false
inline ::System::Object* InternalReadElementContentAsObject(::by_ref<::System::Xml::Schema::XmlSchemaType*>  xmlType, bool  unwrapTypedValue, ::by_ref<::StringW>  originalString) ;

/// @brief Method IsXSDRoot, addr 0xabc5bbc, size 0x50, virtual false, abstract: false, final false
inline bool IsXSDRoot(::StringW  localName, ::StringW  ns) ;

/// @brief Method LookupNamespace, addr 0xabc4784, size 0xac, virtual true, abstract: false, final false
inline ::StringW LookupNamespace(::StringW  prefix) ;

/// @brief Method MoveToAttribute, addr 0xabc37ac, size 0xdc, virtual true, abstract: false, final false
inline bool MoveToAttribute(::StringW  name) ;

/// @brief Method MoveToAttribute, addr 0xabc3a00, size 0x150, virtual true, abstract: false, final false
inline bool MoveToAttribute(::StringW  name, ::StringW  ns) ;

/// @brief Method MoveToAttribute, addr 0xabc3bf8, size 0x1cc, virtual true, abstract: false, final false
inline void MoveToAttribute(int32_t  i) ;

/// @brief Method MoveToElement, addr 0xabc40ec, size 0x54, virtual true, abstract: false, final false
inline bool MoveToElement() ;

/// @brief Method MoveToFirstAttribute, addr 0xabc3dc4, size 0x194, virtual true, abstract: false, final false
inline bool MoveToFirstAttribute() ;

/// @brief Method MoveToNextAttribute, addr 0xabc3f58, size 0x194, virtual true, abstract: false, final false
inline bool MoveToNextAttribute() ;

static inline ::System::Xml::XsdValidatingReader* New_ctor(::System::Xml::XmlReader*  reader, ::System::Xml::XmlResolver*  xmlResolver, ::System::Xml::XmlReaderSettings*  readerSettings) ;

static inline ::System::Xml::XsdValidatingReader* New_ctor(::System::Xml::XmlReader*  reader, ::System::Xml::XmlResolver*  xmlResolver, ::System::Xml::XmlReaderSettings*  readerSettings, ::System::Xml::Schema::XmlSchemaObject*  partialValidationType) ;

/// @brief Method ProcessElementEvent, addr 0xabc5598, size 0x4c0, virtual false, abstract: false, final false
inline void ProcessElementEvent() ;

/// @brief Method ProcessEndElementEvent, addr 0xabc5a58, size 0x164, virtual false, abstract: false, final false
inline void ProcessEndElementEvent() ;

/// @brief Method ProcessInlineSchema, addr 0xabc448c, size 0xc8, virtual false, abstract: false, final false
inline void ProcessInlineSchema() ;

/// @brief Method ProcessReaderEvent, addr 0xabc42c4, size 0x1c8, virtual false, abstract: false, final false
inline void ProcessReaderEvent() ;

/// @brief Method Read, addr 0xabc4140, size 0x184, virtual true, abstract: false, final false
inline bool Read() ;

/// @brief Method ReadAheadForMemberType, addr 0xabc6650, size 0x1f0, virtual false, abstract: false, final false
inline void ReadAheadForMemberType() ;

/// @brief Method ReadAttributeValue, addr 0xabc4868, size 0xc8, virtual true, abstract: false, final false
inline bool ReadAttributeValue() ;

/// @brief Method ReadContentAs, addr 0xabc19e0, size 0x394, virtual true, abstract: false, final false
inline ::System::Object* ReadContentAs(::System::Type*  returnType, ::System::Xml::IXmlNamespaceResolver*  namespaceResolver) ;

/// @brief Method ReadContentAsBase64, addr 0xabc49d0, size 0xc0, virtual true, abstract: false, final false
inline int32_t ReadContentAsBase64(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method ReadContentAsBinHex, addr 0xabc4a90, size 0xc0, virtual true, abstract: false, final false
inline int32_t ReadContentAsBinHex(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method ReadContentAsBoolean, addr 0xabc03a0, size 0x2c0, virtual true, abstract: false, final false
inline bool ReadContentAsBoolean() ;

/// @brief Method ReadContentAsDateTime, addr 0xabc06b8, size 0x2c4, virtual true, abstract: false, final false
inline ::System::DateTime ReadContentAsDateTime() ;

/// @brief Method ReadContentAsDecimal, addr 0xabc0f04, size 0x2c4, virtual true, abstract: false, final false
inline ::System::Decimal ReadContentAsDecimal() ;

/// @brief Method ReadContentAsDouble, addr 0xabc097c, size 0x2c4, virtual true, abstract: false, final false
inline double_t ReadContentAsDouble() ;

/// @brief Method ReadContentAsFloat, addr 0xabc0c40, size 0x2c4, virtual true, abstract: false, final false
inline float_t ReadContentAsFloat() ;

/// @brief Method ReadContentAsInt, addr 0xabc11c8, size 0x2c4, virtual true, abstract: false, final false
inline int32_t ReadContentAsInt() ;

/// @brief Method ReadContentAsLong, addr 0xabc148c, size 0x2c4, virtual true, abstract: false, final false
inline int64_t ReadContentAsLong() ;

/// @brief Method ReadContentAsObject, addr 0xabc02c0, size 0xcc, virtual true, abstract: false, final false
inline ::System::Object* ReadContentAsObject() ;

/// @brief Method ReadContentAsString, addr 0xabc1750, size 0x290, virtual true, abstract: false, final false
inline ::StringW ReadContentAsString() ;

/// @brief Method ReadElementContentAsBoolean, addr 0xabc1fcc, size 0x264, virtual true, abstract: false, final false
inline bool ReadElementContentAsBoolean() ;

/// @brief Method ReadElementContentAsDateTime, addr 0xabc2248, size 0x268, virtual true, abstract: false, final false
inline ::System::DateTime ReadElementContentAsDateTime() ;

/// @brief Method ReadElementContentAsDecimal, addr 0xabc2980, size 0x268, virtual true, abstract: false, final false
inline ::System::Decimal ReadElementContentAsDecimal() ;

/// @brief Method ReadElementContentAsDouble, addr 0xabc24b0, size 0x268, virtual true, abstract: false, final false
inline double_t ReadElementContentAsDouble() ;

/// @brief Method ReadElementContentAsFloat, addr 0xabc2718, size 0x268, virtual true, abstract: false, final false
inline float_t ReadElementContentAsFloat() ;

/// @brief Method ReadElementContentAsInt, addr 0xabc2be8, size 0x268, virtual true, abstract: false, final false
inline int32_t ReadElementContentAsInt() ;

/// @brief Method ReadElementContentAsLong, addr 0xabc2e50, size 0x268, virtual true, abstract: false, final false
inline int64_t ReadElementContentAsLong() ;

/// @brief Method ReadElementContentAsString, addr 0xabc30b8, size 0x21c, virtual true, abstract: false, final false
inline ::StringW ReadElementContentAsString() ;

/// @brief Method ReadTillEndElement, addr 0xabc61ec, size 0x1ec, virtual false, abstract: false, final false
inline ::System::Object* ReadTillEndElement() ;

/// @brief Method ResolveEntity, addr 0xabc4830, size 0x38, virtual true, abstract: false, final false
inline void ResolveEntity() ;

/// @brief Method ReturnBoxedValue, addr 0xabc60a4, size 0x148, virtual false, abstract: false, final false
inline ::System::Object* ReturnBoxedValue(::System::Object*  typedValue, ::System::Xml::Schema::XmlSchemaType*  xmlType, bool  unWrap) ;

/// @brief Method SetupValidator, addr 0xabbfb50, size 0x214, virtual false, abstract: false, final false
inline void SetupValidator(::System::Xml::XmlReaderSettings*  readerSettings, ::System::Xml::XmlReader*  reader, ::System::Xml::Schema::XmlSchemaObject*  partialValidationType) ;

/// @brief Method Skip, addr 0xabc4620, size 0x15c, virtual true, abstract: false, final false
inline void Skip() ;

/// @brief Method SwitchReader, addr 0xabc65c8, size 0x88, virtual false, abstract: false, final false
inline void SwitchReader() ;

/// @brief Method System.Xml.IXmlNamespaceResolver.GetNamespacesInScope, addr 0xabc5334, size 0xc0, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope  scope) ;

/// @brief Method System.Xml.IXmlNamespaceResolver.LookupNamespace, addr 0xabc53f4, size 0xc4, virtual true, abstract: false, final true
inline ::StringW System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW  prefix) ;

/// @brief Method System.Xml.IXmlNamespaceResolver.LookupPrefix, addr 0xabc54b8, size 0xc4, virtual true, abstract: false, final true
inline ::StringW System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW  namespaceName) ;

/// @brief Method System.Xml.Schema.IXmlSchemaInfo.get_IsDefault, addr 0xabc4b50, size 0x88, virtual true, abstract: false, final true
inline bool System_Xml_Schema_IXmlSchemaInfo_get_IsDefault() ;

/// @brief Method System.Xml.Schema.IXmlSchemaInfo.get_IsNil, addr 0xabc4e78, size 0x48, virtual true, abstract: false, final true
inline bool System_Xml_Schema_IXmlSchemaInfo_get_IsNil() ;

/// @brief Method System.Xml.Schema.IXmlSchemaInfo.get_MemberType, addr 0xabc4f50, size 0x80, virtual true, abstract: false, final true
inline ::System::Xml::Schema::XmlSchemaSimpleType* System_Xml_Schema_IXmlSchemaInfo_get_MemberType() ;

/// @brief Method System.Xml.Schema.IXmlSchemaInfo.get_SchemaAttribute, addr 0xabc5188, size 0x44, virtual true, abstract: false, final true
inline ::System::Xml::Schema::XmlSchemaAttribute* System_Xml_Schema_IXmlSchemaInfo_get_SchemaAttribute() ;

/// @brief Method System.Xml.Schema.IXmlSchemaInfo.get_SchemaElement, addr 0xabc5134, size 0x54, virtual true, abstract: false, final true
inline ::System::Xml::Schema::XmlSchemaElement* System_Xml_Schema_IXmlSchemaInfo_get_SchemaElement() ;

/// @brief Method System.Xml.Schema.IXmlSchemaInfo.get_SchemaType, addr 0xabc50d8, size 0x5c, virtual true, abstract: false, final true
inline ::System::Xml::Schema::XmlSchemaType* System_Xml_Schema_IXmlSchemaInfo_get_SchemaType() ;

/// @brief Method System.Xml.Schema.IXmlSchemaInfo.get_Validity, addr 0xabc4ec0, size 0x90, virtual true, abstract: false, final true
inline ::System::Xml::Schema::XmlSchemaValidity System_Xml_Schema_IXmlSchemaInfo_get_Validity() ;

/// @brief Method ValidateAttributes, addr 0xabc5c0c, size 0x1d4, virtual false, abstract: false, final false
inline void ValidateAttributes() ;

constexpr ::StringW const& __cordl_internal_get_NsXmlNs() const;

constexpr ::StringW& __cordl_internal_get_NsXmlNs() ;

constexpr ::StringW const& __cordl_internal_get_NsXs() const;

constexpr ::StringW& __cordl_internal_get_NsXs() ;

constexpr ::StringW const& __cordl_internal_get_NsXsi() const;

constexpr ::StringW& __cordl_internal_get_NsXsi() ;

constexpr ::StringW const& __cordl_internal_get_XsdSchema() const;

constexpr ::StringW& __cordl_internal_get_XsdSchema() ;

constexpr ::StringW const& __cordl_internal_get_XsiNil() const;

constexpr ::StringW& __cordl_internal_get_XsiNil() ;

constexpr ::StringW const& __cordl_internal_get_XsiNoNamespaceSchemaLocation() const;

constexpr ::StringW& __cordl_internal_get_XsiNoNamespaceSchemaLocation() ;

constexpr ::StringW const& __cordl_internal_get_XsiSchemaLocation() const;

constexpr ::StringW& __cordl_internal_get_XsiSchemaLocation() ;

constexpr ::StringW const& __cordl_internal_get_XsiType() const;

constexpr ::StringW& __cordl_internal_get_XsiType() ;

constexpr ::System::Object* const& __cordl_internal_get_atomicValue() const;

constexpr ::System::Object*& __cordl_internal_get_atomicValue() ;

constexpr int32_t const& __cordl_internal_get_attributeCount() const;

constexpr int32_t& __cordl_internal_get_attributeCount() ;

constexpr ::System::Xml::AttributePSVIInfo* const& __cordl_internal_get_attributePSVI() const;

constexpr ::System::Xml::AttributePSVIInfo*& __cordl_internal_get_attributePSVI() ;

constexpr ::ArrayW<::System::Xml::AttributePSVIInfo*> const& __cordl_internal_get_attributePSVINodes() const;

constexpr ::ArrayW<::System::Xml::AttributePSVIInfo*>& __cordl_internal_get_attributePSVINodes() ;

constexpr ::System::Xml::ValidatingReaderNodeData* const& __cordl_internal_get_cachedNode() const;

constexpr ::System::Xml::ValidatingReaderNodeData*& __cordl_internal_get_cachedNode() ;

constexpr ::System::Xml::XsdCachingReader* const& __cordl_internal_get_cachingReader() const;

constexpr ::System::Xml::XsdCachingReader*& __cordl_internal_get_cachingReader() ;

constexpr ::System::Xml::XmlReader* const& __cordl_internal_get_coreReader() const;

constexpr ::System::Xml::XmlReader*& __cordl_internal_get_coreReader() ;

constexpr int32_t const& __cordl_internal_get_coreReaderAttributeCount() const;

constexpr int32_t& __cordl_internal_get_coreReaderAttributeCount() ;

constexpr ::System::Xml::IXmlNamespaceResolver* const& __cordl_internal_get_coreReaderNSResolver() const;

constexpr ::System::Xml::IXmlNamespaceResolver*& __cordl_internal_get_coreReaderNSResolver() ;

constexpr ::System::Xml::XmlNameTable* const& __cordl_internal_get_coreReaderNameTable() const;

constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_coreReaderNameTable() ;

constexpr int32_t const& __cordl_internal_get_currentAttrIndex() const;

constexpr int32_t& __cordl_internal_get_currentAttrIndex() ;

constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_defaultAttributes() const;

constexpr ::System::Collections::ArrayList*& __cordl_internal_get_defaultAttributes() ;

constexpr ::System::Xml::Schema::Parser* const& __cordl_internal_get_inlineSchemaParser() const;

constexpr ::System::Xml::Schema::Parser*& __cordl_internal_get_inlineSchemaParser() ;

constexpr ::System::Xml::IXmlLineInfo* const& __cordl_internal_get_lineInfo() const;

constexpr ::System::Xml::IXmlLineInfo*& __cordl_internal_get_lineInfo() ;

constexpr bool const& __cordl_internal_get_manageNamespaces() const;

constexpr bool& __cordl_internal_get_manageNamespaces() ;

constexpr ::System::Xml::XmlNamespaceManager* const& __cordl_internal_get_nsManager() const;

constexpr ::System::Xml::XmlNamespaceManager*& __cordl_internal_get_nsManager() ;

constexpr ::StringW const& __cordl_internal_get_originalAtomicValueString() const;

constexpr ::StringW& __cordl_internal_get_originalAtomicValueString() ;

constexpr bool const& __cordl_internal_get_processInlineSchema() const;

constexpr bool& __cordl_internal_get_processInlineSchema() ;

constexpr ::System::Xml::ReadContentAsBinaryHelper* const& __cordl_internal_get_readBinaryHelper() const;

constexpr ::System::Xml::ReadContentAsBinaryHelper*& __cordl_internal_get_readBinaryHelper() ;

constexpr bool const& __cordl_internal_get_replayCache() const;

constexpr bool& __cordl_internal_get_replayCache() ;

constexpr ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState const& __cordl_internal_get_savedState() const;

constexpr ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState& __cordl_internal_get_savedState() ;

constexpr ::System::Xml::ValidatingReaderNodeData* const& __cordl_internal_get_textNode() const;

constexpr ::System::Xml::ValidatingReaderNodeData*& __cordl_internal_get_textNode() ;

constexpr ::System::Xml::IXmlNamespaceResolver* const& __cordl_internal_get_thisNSResolver() const;

constexpr ::System::Xml::IXmlNamespaceResolver*& __cordl_internal_get_thisNSResolver() ;

constexpr ::System::Xml::Schema::ValidationEventHandler* const& __cordl_internal_get_validationEvent() const;

constexpr ::System::Xml::Schema::ValidationEventHandler*& __cordl_internal_get_validationEvent() ;

constexpr ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState const& __cordl_internal_get_validationState() const;

constexpr ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState& __cordl_internal_get_validationState() ;

constexpr ::System::Xml::Schema::XmlSchemaValidator* const& __cordl_internal_get_validator() const;

constexpr ::System::Xml::Schema::XmlSchemaValidator*& __cordl_internal_get_validator() ;

constexpr ::System::Xml::Schema::XmlValueGetter* const& __cordl_internal_get_valueGetter() const;

constexpr ::System::Xml::Schema::XmlValueGetter*& __cordl_internal_get_valueGetter() ;

constexpr ::System::Xml::XmlCharType const& __cordl_internal_get_xmlCharType() const;

constexpr ::System::Xml::XmlCharType& __cordl_internal_get_xmlCharType() ;

constexpr ::System::Xml::XmlResolver* const& __cordl_internal_get_xmlResolver() const;

constexpr ::System::Xml::XmlResolver*& __cordl_internal_get_xmlResolver() ;

constexpr ::System::Xml::Schema::XmlSchemaInfo* const& __cordl_internal_get_xmlSchemaInfo() const;

constexpr ::System::Xml::Schema::XmlSchemaInfo*& __cordl_internal_get_xmlSchemaInfo() ;

constexpr void __cordl_internal_set_NsXmlNs(::StringW  value) ;

constexpr void __cordl_internal_set_NsXs(::StringW  value) ;

constexpr void __cordl_internal_set_NsXsi(::StringW  value) ;

constexpr void __cordl_internal_set_XsdSchema(::StringW  value) ;

constexpr void __cordl_internal_set_XsiNil(::StringW  value) ;

constexpr void __cordl_internal_set_XsiNoNamespaceSchemaLocation(::StringW  value) ;

constexpr void __cordl_internal_set_XsiSchemaLocation(::StringW  value) ;

constexpr void __cordl_internal_set_XsiType(::StringW  value) ;

constexpr void __cordl_internal_set_atomicValue(::System::Object*  value) ;

constexpr void __cordl_internal_set_attributeCount(int32_t  value) ;

constexpr void __cordl_internal_set_attributePSVI(::System::Xml::AttributePSVIInfo*  value) ;

constexpr void __cordl_internal_set_attributePSVINodes(::ArrayW<::System::Xml::AttributePSVIInfo*>  value) ;

constexpr void __cordl_internal_set_cachedNode(::System::Xml::ValidatingReaderNodeData*  value) ;

constexpr void __cordl_internal_set_cachingReader(::System::Xml::XsdCachingReader*  value) ;

constexpr void __cordl_internal_set_coreReader(::System::Xml::XmlReader*  value) ;

constexpr void __cordl_internal_set_coreReaderAttributeCount(int32_t  value) ;

constexpr void __cordl_internal_set_coreReaderNSResolver(::System::Xml::IXmlNamespaceResolver*  value) ;

constexpr void __cordl_internal_set_coreReaderNameTable(::System::Xml::XmlNameTable*  value) ;

constexpr void __cordl_internal_set_currentAttrIndex(int32_t  value) ;

constexpr void __cordl_internal_set_defaultAttributes(::System::Collections::ArrayList*  value) ;

constexpr void __cordl_internal_set_inlineSchemaParser(::System::Xml::Schema::Parser*  value) ;

constexpr void __cordl_internal_set_lineInfo(::System::Xml::IXmlLineInfo*  value) ;

constexpr void __cordl_internal_set_manageNamespaces(bool  value) ;

constexpr void __cordl_internal_set_nsManager(::System::Xml::XmlNamespaceManager*  value) ;

constexpr void __cordl_internal_set_originalAtomicValueString(::StringW  value) ;

constexpr void __cordl_internal_set_processInlineSchema(bool  value) ;

constexpr void __cordl_internal_set_readBinaryHelper(::System::Xml::ReadContentAsBinaryHelper*  value) ;

constexpr void __cordl_internal_set_replayCache(bool  value) ;

constexpr void __cordl_internal_set_savedState(::GlobalNamespace::XsdValidatingReader_ValidatingReaderState  value) ;

constexpr void __cordl_internal_set_textNode(::System::Xml::ValidatingReaderNodeData*  value) ;

constexpr void __cordl_internal_set_thisNSResolver(::System::Xml::IXmlNamespaceResolver*  value) ;

constexpr void __cordl_internal_set_validationEvent(::System::Xml::Schema::ValidationEventHandler*  value) ;

constexpr void __cordl_internal_set_validationState(::GlobalNamespace::XsdValidatingReader_ValidatingReaderState  value) ;

constexpr void __cordl_internal_set_validator(::System::Xml::Schema::XmlSchemaValidator*  value) ;

constexpr void __cordl_internal_set_valueGetter(::System::Xml::Schema::XmlValueGetter*  value) ;

constexpr void __cordl_internal_set_xmlCharType(::System::Xml::XmlCharType  value) ;

constexpr void __cordl_internal_set_xmlResolver(::System::Xml::XmlResolver*  value) ;

constexpr void __cordl_internal_set_xmlSchemaInfo(::System::Xml::Schema::XmlSchemaInfo*  value) ;

/// @brief Method .ctor, addr 0xabbfd64, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::XmlReader*  reader, ::System::Xml::XmlResolver*  xmlResolver, ::System::Xml::XmlReaderSettings*  readerSettings) ;

/// @brief Method .ctor, addr 0xabbf5ac, size 0x208, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::XmlReader*  reader, ::System::Xml::XmlResolver*  xmlResolver, ::System::Xml::XmlReaderSettings*  readerSettings, ::System::Xml::Schema::XmlSchemaObject*  partialValidationType) ;

static inline ::System::Type* getStaticF_TypeOfString() ;

/// @brief Method get_AttributeCount, addr 0xabc32d4, size 0x8, virtual true, abstract: false, final false
inline int32_t get_AttributeCount() ;

/// @brief Method get_AttributeSchemaInfo, addr 0xabc02a8, size 0x18, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaInfo* get_AttributeSchemaInfo() ;

/// @brief Method get_AttributeXmlType, addr 0xabc0690, size 0x28, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaType* get_AttributeXmlType() ;

/// @brief Method get_BaseURI, addr 0xabc0108, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_BaseURI() ;

/// @brief Method get_Depth, addr 0xabc00cc, size 0x3c, virtual true, abstract: false, final false
inline int32_t get_Depth() ;

/// @brief Method get_EOF, addr 0xabc4598, size 0x20, virtual true, abstract: false, final false
inline bool get_EOF() ;

/// @brief Method get_ElementXmlType, addr 0xabc0678, size 0x18, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaType* get_ElementXmlType() ;

/// @brief Method get_IsDefault, addr 0xabc0148, size 0x34, virtual true, abstract: false, final false
inline bool get_IsDefault() ;

/// @brief Method get_IsEmptyElement, addr 0xabc0128, size 0x20, virtual true, abstract: false, final false
inline bool get_IsEmptyElement() ;

/// @brief Method get_LineNumber, addr 0xabc51d4, size 0xb0, virtual true, abstract: false, final true
inline int32_t get_LineNumber() ;

/// @brief Method get_LinePosition, addr 0xabc5284, size 0xb0, virtual true, abstract: false, final true
inline int32_t get_LinePosition() ;

/// @brief Method get_LocalName, addr 0xabbffdc, size 0x3c, virtual true, abstract: false, final false
inline ::StringW get_LocalName() ;

/// @brief Method get_Name, addr 0xabbfec4, size 0x118, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NameTable, addr 0xabc477c, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::XmlNameTable* get_NameTable() ;

/// @brief Method get_NamespaceURI, addr 0xabc0018, size 0x3c, virtual true, abstract: false, final false
inline ::StringW get_NamespaceURI() ;

/// @brief Method get_NodeType, addr 0xabbfe3c, size 0x88, virtual true, abstract: false, final false
inline ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Prefix, addr 0xabc0054, size 0x3c, virtual true, abstract: false, final false
inline ::StringW get_Prefix() ;

/// @brief Method get_QuoteChar, addr 0xabc017c, size 0x20, virtual true, abstract: false, final false
inline char16_t get_QuoteChar() ;

/// @brief Method get_ReadState, addr 0xabc45ec, size 0x34, virtual true, abstract: false, final false
inline ::System::Xml::ReadState get_ReadState() ;

/// @brief Method get_SchemaInfo, addr 0xabc01dc, size 0x4, virtual true, abstract: false, final false
inline ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo() ;

/// @brief Method get_Settings, addr 0xabbfd6c, size 0xd0, virtual true, abstract: false, final false
inline ::System::Xml::XmlReaderSettings* get_Settings() ;

/// @brief Method get_Value, addr 0xabc0090, size 0x3c, virtual true, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method get_ValueType, addr 0xabc01e0, size 0xc8, virtual true, abstract: false, final false
inline ::System::Type* get_ValueType() ;

/// @brief Method get_XmlLang, addr 0xabc01bc, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_XmlLang() ;

/// @brief Method get_XmlSpace, addr 0xabc019c, size 0x20, virtual true, abstract: false, final false
inline ::System::Xml::XmlSpace get_XmlSpace() ;

/// @brief Convert to "::System::Xml::IXmlLineInfo"
constexpr ::System::Xml::IXmlLineInfo* i___System__Xml__IXmlLineInfo() noexcept;

/// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
constexpr ::System::Xml::IXmlNamespaceResolver* i___System__Xml__IXmlNamespaceResolver() noexcept;

/// @brief Convert to "::System::Xml::Schema::IXmlSchemaInfo"
constexpr ::System::Xml::Schema::IXmlSchemaInfo* i___System__Xml__Schema__IXmlSchemaInfo() noexcept;

static inline void setStaticF_TypeOfString(::System::Type*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XsdValidatingReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XsdValidatingReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XsdValidatingReader(XsdValidatingReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XsdValidatingReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XsdValidatingReader(XsdValidatingReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14104};

/// @brief Field coreReader, offset: 0x10, size: 0x8, def value: None
 ::System::Xml::XmlReader*  ___coreReader;

/// @brief Field coreReaderNSResolver, offset: 0x18, size: 0x8, def value: None
 ::System::Xml::IXmlNamespaceResolver*  ___coreReaderNSResolver;

/// @brief Field thisNSResolver, offset: 0x20, size: 0x8, def value: None
 ::System::Xml::IXmlNamespaceResolver*  ___thisNSResolver;

/// @brief Field validator, offset: 0x28, size: 0x8, def value: None
 ::System::Xml::Schema::XmlSchemaValidator*  ___validator;

/// @brief Field xmlResolver, offset: 0x30, size: 0x8, def value: None
 ::System::Xml::XmlResolver*  ___xmlResolver;

/// @brief Field validationEvent, offset: 0x38, size: 0x8, def value: None
 ::System::Xml::Schema::ValidationEventHandler*  ___validationEvent;

/// @brief Field validationState, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState  ___validationState;

/// @brief Field valueGetter, offset: 0x48, size: 0x8, def value: None
 ::System::Xml::Schema::XmlValueGetter*  ___valueGetter;

/// @brief Field nsManager, offset: 0x50, size: 0x8, def value: None
 ::System::Xml::XmlNamespaceManager*  ___nsManager;

/// @brief Field manageNamespaces, offset: 0x58, size: 0x1, def value: None
 bool  ___manageNamespaces;

/// @brief Field processInlineSchema, offset: 0x59, size: 0x1, def value: None
 bool  ___processInlineSchema;

/// @brief Field replayCache, offset: 0x5a, size: 0x1, def value: None
 bool  ___replayCache;

/// @brief Field cachedNode, offset: 0x60, size: 0x8, def value: None
 ::System::Xml::ValidatingReaderNodeData*  ___cachedNode;

/// @brief Field attributePSVI, offset: 0x68, size: 0x8, def value: None
 ::System::Xml::AttributePSVIInfo*  ___attributePSVI;

/// @brief Field attributeCount, offset: 0x70, size: 0x4, def value: None
 int32_t  ___attributeCount;

/// @brief Field coreReaderAttributeCount, offset: 0x74, size: 0x4, def value: None
 int32_t  ___coreReaderAttributeCount;

/// @brief Field currentAttrIndex, offset: 0x78, size: 0x4, def value: None
 int32_t  ___currentAttrIndex;

/// @brief Field attributePSVINodes, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::System::Xml::AttributePSVIInfo*>  ___attributePSVINodes;

/// @brief Field defaultAttributes, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::ArrayList*  ___defaultAttributes;

/// @brief Field inlineSchemaParser, offset: 0x90, size: 0x8, def value: None
 ::System::Xml::Schema::Parser*  ___inlineSchemaParser;

/// @brief Field atomicValue, offset: 0x98, size: 0x8, def value: None
 ::System::Object*  ___atomicValue;

/// @brief Field xmlSchemaInfo, offset: 0xa0, size: 0x8, def value: None
 ::System::Xml::Schema::XmlSchemaInfo*  ___xmlSchemaInfo;

/// @brief Field originalAtomicValueString, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___originalAtomicValueString;

/// @brief Field coreReaderNameTable, offset: 0xb0, size: 0x8, def value: None
 ::System::Xml::XmlNameTable*  ___coreReaderNameTable;

/// @brief Field cachingReader, offset: 0xb8, size: 0x8, def value: None
 ::System::Xml::XsdCachingReader*  ___cachingReader;

/// @brief Field textNode, offset: 0xc0, size: 0x8, def value: None
 ::System::Xml::ValidatingReaderNodeData*  ___textNode;

/// @brief Field NsXmlNs, offset: 0xc8, size: 0x8, def value: None
 ::StringW  ___NsXmlNs;

/// @brief Field NsXs, offset: 0xd0, size: 0x8, def value: None
 ::StringW  ___NsXs;

/// @brief Field NsXsi, offset: 0xd8, size: 0x8, def value: None
 ::StringW  ___NsXsi;

/// @brief Field XsiType, offset: 0xe0, size: 0x8, def value: None
 ::StringW  ___XsiType;

/// @brief Field XsiNil, offset: 0xe8, size: 0x8, def value: None
 ::StringW  ___XsiNil;

/// @brief Field XsdSchema, offset: 0xf0, size: 0x8, def value: None
 ::StringW  ___XsdSchema;

/// @brief Field XsiSchemaLocation, offset: 0xf8, size: 0x8, def value: None
 ::StringW  ___XsiSchemaLocation;

/// @brief Field XsiNoNamespaceSchemaLocation, offset: 0x100, size: 0x8, def value: None
 ::StringW  ___XsiNoNamespaceSchemaLocation;

/// @brief Field xmlCharType, offset: 0x108, size: 0x8, def value: None
 ::System::Xml::XmlCharType  ___xmlCharType;

/// @brief Field lineInfo, offset: 0x110, size: 0x8, def value: None
 ::System::Xml::IXmlLineInfo*  ___lineInfo;

/// @brief Field readBinaryHelper, offset: 0x118, size: 0x8, def value: None
 ::System::Xml::ReadContentAsBinaryHelper*  ___readBinaryHelper;

/// @brief Field savedState, offset: 0x120, size: 0x4, def value: None
 ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState  ___savedState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XsdValidatingReader, ___coreReader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___coreReaderNSResolver) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___thisNSResolver) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___validator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___xmlResolver) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___validationEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___validationState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___valueGetter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___nsManager) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___manageNamespaces) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___processInlineSchema) == 0x59, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___replayCache) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___cachedNode) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___attributePSVI) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___attributeCount) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___coreReaderAttributeCount) == 0x74, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___currentAttrIndex) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___attributePSVINodes) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___defaultAttributes) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___inlineSchemaParser) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___atomicValue) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___xmlSchemaInfo) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___originalAtomicValueString) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___coreReaderNameTable) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___cachingReader) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___textNode) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___NsXmlNs) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___NsXs) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___NsXsi) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___XsiType) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___XsiNil) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___XsdSchema) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___XsiSchemaLocation) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___XsiNoNamespaceSchemaLocation) == 0x100, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___xmlCharType) == 0x108, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___lineInfo) == 0x110, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___readBinaryHelper) == 0x118, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdValidatingReader, ___savedState) == 0x120, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XsdValidatingReader) == 0x128, "Size mismatch!");

} // namespace end def System::Xml
