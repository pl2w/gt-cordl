#pragma once
// IWYU pragma private; include "System/Xml/XmlValidatingReaderImpl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ValidationType_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlValidatingReaderImpl_ParsingFunction_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlValidatingReaderImpl)
namespace GlobalNamespace {
struct XmlValidatingReaderImpl_ParsingFunction;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Xml::Schema {
class BaseValidator;
}
namespace System::Xml::Schema {
class SchemaAttDef;
}
namespace System::Xml::Schema {
class ValidationEventHandler;
}
namespace System::Xml::Schema {
class XmlSchemaCollection;
}
namespace System::Xml::Schema {
struct XmlSeverityType;
}
namespace System::Xml {
class IDtdDefaultAttributeInfo;
}
namespace System::Xml {
class IDtdInfo;
}
namespace System::Xml {
class IValidationEventHandling;
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
struct ValidationType;
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
class XmlParserContext;
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
class XmlTextReaderImpl;
}
namespace System::Xml {
class XmlValidatingReaderImpl_ValidationEventHandling;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class XmlValidatingReaderImpl;
}
namespace System::Xml {
class XmlValidatingReaderImpl_ValidationEventHandling;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlValidatingReaderImpl*);
MARK_REF_T(::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlValidatingReaderImpl*, "System.Xml", "XmlValidatingReaderImpl");
DEFINE_IL2CPP_CLASS(::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling*, "System.Xml", "XmlValidatingReaderImpl/ValidationEventHandling");
// Dependencies System.Xml.ValidationType, System.Xml.XmlReader, System.Xml.XmlValidatingReaderImpl::ParsingFunction
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlValidatingReaderImpl
class CORDL_TYPE XmlValidatingReaderImpl : public ::System::Xml::XmlReader {
public:
// Declarations
using ParsingFunction = ::GlobalNamespace::XmlValidatingReaderImpl_ParsingFunction;

using ValidationEventHandling = ::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling;

 __declspec(property(get=get_AttributeCount)) int32_t  AttributeCount;

 __declspec(property(get=get_BaseURI)) ::StringW  BaseURI;

 __declspec(property(get=get_CanResolveEntity)) bool  CanResolveEntity;

 __declspec(property(get=get_Depth)) int32_t  Depth;

 __declspec(property(get=get_DtdInfo)) ::System::Xml::IDtdInfo*  DtdInfo;

 __declspec(property(get=get_IsDefault)) bool  IsDefault;

 __declspec(property(get=get_IsEmptyElement)) bool  IsEmptyElement;

 __declspec(property(get=get_LineNumber)) int32_t  LineNumber;

 __declspec(property(get=get_LinePosition)) int32_t  LinePosition;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NameTable)) ::System::Xml::XmlNameTable*  NameTable;

 __declspec(property(get=get_NamespaceManager)) ::System::Xml::XmlNamespaceManager*  NamespaceManager;

 __declspec(property(get=get_NamespaceURI)) ::StringW  NamespaceURI;

 __declspec(property(get=get_Namespaces)) bool  Namespaces;

 __declspec(property(get=get_NodeType)) ::System::Xml::XmlNodeType  NodeType;

 __declspec(property(get=get_Prefix)) ::StringW  Prefix;

 __declspec(property(get=get_QuoteChar)) char16_t  QuoteChar;

 __declspec(property(get=get_ReadState)) ::System::Xml::ReadState  ReadState;

 __declspec(property(put=set_SchemaTypeObject)) ::System::Object*  SchemaTypeObject;

 __declspec(property(get=get_Schemas)) ::System::Xml::Schema::XmlSchemaCollection*  Schemas;

 __declspec(property(get=get_Settings)) ::System::Xml::XmlReaderSettings*  Settings;

 __declspec(property(get=get_StandAlone)) bool  StandAlone;

 __declspec(property(get=get_TypedValueObject, put=set_TypedValueObject)) ::System::Object*  TypedValueObject;

 __declspec(property(get=get_ValidationType)) ::System::Xml::ValidationType  ValidationType;

 __declspec(property(get=get_Validator, put=set_Validator)) ::System::Xml::Schema::BaseValidator*  Validator;

 __declspec(property(get=get_Value)) ::StringW  Value;

 __declspec(property(get=get_XmlLang)) ::StringW  XmlLang;

 __declspec(property(get=get_XmlSpace)) ::System::Xml::XmlSpace  XmlSpace;

 __declspec(property(get=get_EOF)) bool  _cordl_EOF;

/// @brief Field coreReader, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_coreReader, put=__cordl_internal_set_coreReader)) ::System::Xml::XmlReader*  coreReader;

/// @brief Field coreReaderImpl, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_coreReaderImpl, put=__cordl_internal_set_coreReaderImpl)) ::System::Xml::XmlTextReaderImpl*  coreReaderImpl;

/// @brief Field coreReaderNSResolver, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_coreReaderNSResolver, put=__cordl_internal_set_coreReaderNSResolver)) ::System::Xml::IXmlNamespaceResolver*  coreReaderNSResolver;

/// @brief Field eventHandling, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_eventHandling, put=__cordl_internal_set_eventHandling)) ::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling*  eventHandling;

/// @brief Field outerReader, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_outerReader, put=__cordl_internal_set_outerReader)) ::System::Xml::XmlReader*  outerReader;

/// @brief Field parserContext, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_parserContext, put=__cordl_internal_set_parserContext)) ::System::Xml::XmlParserContext*  parserContext;

/// @brief Field parsingFunction, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_parsingFunction, put=__cordl_internal_set_parsingFunction)) ::GlobalNamespace::XmlValidatingReaderImpl_ParsingFunction  parsingFunction;

/// @brief Field processIdentityConstraints, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_processIdentityConstraints, put=__cordl_internal_set_processIdentityConstraints)) bool  processIdentityConstraints;

/// @brief Field readBinaryHelper, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_readBinaryHelper, put=__cordl_internal_set_readBinaryHelper)) ::System::Xml::ReadContentAsBinaryHelper*  readBinaryHelper;

/// @brief Field s_tempResolver, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_tempResolver, put=setStaticF_s_tempResolver)) ::System::Xml::XmlResolver*  s_tempResolver;

/// @brief Field schemaCollection, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_schemaCollection, put=__cordl_internal_set_schemaCollection)) ::System::Xml::Schema::XmlSchemaCollection*  schemaCollection;

/// @brief Field validationType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_validationType, put=__cordl_internal_set_validationType)) ::System::Xml::ValidationType  validationType;

/// @brief Field validator, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_validator, put=__cordl_internal_set_validator)) ::System::Xml::Schema::BaseValidator*  validator;

/// @brief Convert operator to "::System::Xml::IXmlLineInfo"
constexpr operator  ::System::Xml::IXmlLineInfo*() noexcept;

/// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
constexpr operator  ::System::Xml::IXmlNamespaceResolver*() noexcept;

/// @brief Method AddDefaultAttribute, addr 0xabb3858, size 0x18, virtual false, abstract: false, final false
inline bool AddDefaultAttribute(::System::Xml::Schema::SchemaAttDef*  attdef) ;

/// @brief Method Close, addr 0xabb30e0, size 0x34, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method GetAttribute, addr 0xabb2ba8, size 0x20, virtual true, abstract: false, final false
inline ::StringW GetAttribute(int32_t  i) ;

/// @brief Method GetAttribute, addr 0xabb2b88, size 0x20, virtual true, abstract: false, final false
inline ::StringW GetAttribute(::StringW  localName, ::StringW  namespaceURI) ;

/// @brief Method GetAttribute, addr 0xabb2b68, size 0x20, virtual true, abstract: false, final false
inline ::StringW GetAttribute(::StringW  name) ;

/// @brief Method GetNamespacesInScope, addr 0xabb35bc, size 0xa8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* GetNamespacesInScope(::System::Xml::XmlNamespaceScope  scope) ;

/// @brief Method GetResolver, addr 0xabb255c, size 0xe4, virtual false, abstract: false, final false
inline ::System::Xml::XmlResolver* GetResolver() ;

/// @brief Method HasLineInfo, addr 0xabb33e0, size 0x8, virtual true, abstract: false, final true
inline bool HasLineInfo() ;

/// @brief Method LookupNamespace, addr 0xabb3114, size 0x20, virtual true, abstract: false, final false
inline ::StringW LookupNamespace(::StringW  prefix) ;

/// @brief Method LookupPrefix, addr 0xabb3678, size 0xac, virtual false, abstract: false, final false
inline ::StringW LookupPrefix(::StringW  namespaceName) ;

/// @brief Method MoveOffEntityReference, addr 0xabb3314, size 0xb0, virtual false, abstract: false, final false
inline void MoveOffEntityReference() ;

/// @brief Method MoveToAttribute, addr 0xabb2c00, size 0x38, virtual true, abstract: false, final false
inline bool MoveToAttribute(::StringW  localName, ::StringW  namespaceURI) ;

/// @brief Method MoveToAttribute, addr 0xabb2bc8, size 0x38, virtual true, abstract: false, final false
inline bool MoveToAttribute(::StringW  name) ;

/// @brief Method MoveToAttribute, addr 0xabb2c38, size 0x30, virtual true, abstract: false, final false
inline void MoveToAttribute(int32_t  i) ;

/// @brief Method MoveToElement, addr 0xabb2cd8, size 0x38, virtual true, abstract: false, final false
inline bool MoveToElement() ;

/// @brief Method MoveToFirstAttribute, addr 0xabb2c68, size 0x38, virtual true, abstract: false, final false
inline bool MoveToFirstAttribute() ;

/// @brief Method MoveToNextAttribute, addr 0xabb2ca0, size 0x38, virtual true, abstract: false, final false
inline bool MoveToNextAttribute() ;

static inline ::System::Xml::XmlValidatingReaderImpl* New_ctor(::System::Xml::XmlReader*  reader, ::System::Xml::Schema::ValidationEventHandler*  settingsEventHandler, bool  processIdentityConstraints) ;

/// @brief Method ParseDtdFromParserContext, addr 0xabb2ee4, size 0x174, virtual false, abstract: false, final false
inline void ParseDtdFromParserContext() ;

/// @brief Method ProcessCoreReaderEvent, addr 0xabb2df8, size 0xec, virtual false, abstract: false, final false
inline void ProcessCoreReaderEvent() ;

/// @brief Method Read, addr 0xabb2d10, size 0xe8, virtual true, abstract: false, final false
inline bool Read() ;

/// @brief Method ReadAttributeValue, addr 0xabb3134, size 0x58, virtual true, abstract: false, final false
inline bool ReadAttributeValue() ;

/// @brief Method ReadContentAsBase64, addr 0xabb318c, size 0xa8, virtual true, abstract: false, final false
inline int32_t ReadContentAsBase64(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method ReadContentAsBinHex, addr 0xabb3234, size 0xa8, virtual true, abstract: false, final false
inline int32_t ReadContentAsBinHex(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method ReadString, addr 0xabb33c4, size 0x1c, virtual true, abstract: false, final false
inline ::StringW ReadString() ;

/// @brief Method ResolveEntity, addr 0xabb32e4, size 0x30, virtual true, abstract: false, final false
inline void ResolveEntity() ;

/// @brief Method ResolveEntityInternally, addr 0xabb3058, size 0x88, virtual false, abstract: false, final false
inline void ResolveEntityInternally() ;

/// @brief Method SetupValidation, addr 0xabb2700, size 0x180, virtual false, abstract: false, final false
inline void SetupValidation(::System::Xml::ValidationType  valType) ;

/// @brief Method System.Xml.IXmlNamespaceResolver.GetNamespacesInScope, addr 0xabb35b8, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope  scope) ;

/// @brief Method System.Xml.IXmlNamespaceResolver.LookupNamespace, addr 0xabb3664, size 0x10, virtual true, abstract: false, final true
inline ::StringW System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW  prefix) ;

/// @brief Method System.Xml.IXmlNamespaceResolver.LookupPrefix, addr 0xabb3674, size 0x4, virtual true, abstract: false, final true
inline ::StringW System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW  namespaceName) ;

/// @brief Method ValidateDefaultAttributeOnUse, addr 0xabb3890, size 0x138, virtual false, abstract: false, final false
inline void ValidateDefaultAttributeOnUse(::System::Xml::IDtdDefaultAttributeInfo*  defaultAttribute, ::System::Xml::XmlTextReaderImpl*  coreReader) ;

/// @brief Method ValidateDtd, addr 0xabb374c, size 0x7c, virtual false, abstract: false, final false
inline void ValidateDtd() ;

constexpr ::System::Xml::XmlReader* const& __cordl_internal_get_coreReader() const;

constexpr ::System::Xml::XmlReader*& __cordl_internal_get_coreReader() ;

constexpr ::System::Xml::XmlTextReaderImpl* const& __cordl_internal_get_coreReaderImpl() const;

constexpr ::System::Xml::XmlTextReaderImpl*& __cordl_internal_get_coreReaderImpl() ;

constexpr ::System::Xml::IXmlNamespaceResolver* const& __cordl_internal_get_coreReaderNSResolver() const;

constexpr ::System::Xml::IXmlNamespaceResolver*& __cordl_internal_get_coreReaderNSResolver() ;

constexpr ::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling* const& __cordl_internal_get_eventHandling() const;

constexpr ::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling*& __cordl_internal_get_eventHandling() ;

constexpr ::System::Xml::XmlReader* const& __cordl_internal_get_outerReader() const;

constexpr ::System::Xml::XmlReader*& __cordl_internal_get_outerReader() ;

constexpr ::System::Xml::XmlParserContext* const& __cordl_internal_get_parserContext() const;

constexpr ::System::Xml::XmlParserContext*& __cordl_internal_get_parserContext() ;

constexpr ::GlobalNamespace::XmlValidatingReaderImpl_ParsingFunction const& __cordl_internal_get_parsingFunction() const;

constexpr ::GlobalNamespace::XmlValidatingReaderImpl_ParsingFunction& __cordl_internal_get_parsingFunction() ;

constexpr bool const& __cordl_internal_get_processIdentityConstraints() const;

constexpr bool& __cordl_internal_get_processIdentityConstraints() ;

constexpr ::System::Xml::ReadContentAsBinaryHelper* const& __cordl_internal_get_readBinaryHelper() const;

constexpr ::System::Xml::ReadContentAsBinaryHelper*& __cordl_internal_get_readBinaryHelper() ;

constexpr ::System::Xml::Schema::XmlSchemaCollection* const& __cordl_internal_get_schemaCollection() const;

constexpr ::System::Xml::Schema::XmlSchemaCollection*& __cordl_internal_get_schemaCollection() ;

constexpr ::System::Xml::ValidationType const& __cordl_internal_get_validationType() const;

constexpr ::System::Xml::ValidationType& __cordl_internal_get_validationType() ;

constexpr ::System::Xml::Schema::BaseValidator* const& __cordl_internal_get_validator() const;

constexpr ::System::Xml::Schema::BaseValidator*& __cordl_internal_get_validator() ;

constexpr void __cordl_internal_set_coreReader(::System::Xml::XmlReader*  value) ;

constexpr void __cordl_internal_set_coreReaderImpl(::System::Xml::XmlTextReaderImpl*  value) ;

constexpr void __cordl_internal_set_coreReaderNSResolver(::System::Xml::IXmlNamespaceResolver*  value) ;

constexpr void __cordl_internal_set_eventHandling(::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling*  value) ;

constexpr void __cordl_internal_set_outerReader(::System::Xml::XmlReader*  value) ;

constexpr void __cordl_internal_set_parserContext(::System::Xml::XmlParserContext*  value) ;

constexpr void __cordl_internal_set_parsingFunction(::GlobalNamespace::XmlValidatingReaderImpl_ParsingFunction  value) ;

constexpr void __cordl_internal_set_processIdentityConstraints(bool  value) ;

constexpr void __cordl_internal_set_readBinaryHelper(::System::Xml::ReadContentAsBinaryHelper*  value) ;

constexpr void __cordl_internal_set_schemaCollection(::System::Xml::Schema::XmlSchemaCollection*  value) ;

constexpr void __cordl_internal_set_validationType(::System::Xml::ValidationType  value) ;

constexpr void __cordl_internal_set_validator(::System::Xml::Schema::BaseValidator*  value) ;

/// @brief Method .ctor, addr 0xabb213c, size 0x420, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::XmlReader*  reader, ::System::Xml::Schema::ValidationEventHandler*  settingsEventHandler, bool  processIdentityConstraints) ;

static inline ::System::Xml::XmlResolver* getStaticF_s_tempResolver() ;

/// @brief Method get_AttributeCount, addr 0xabb2b48, size 0x20, virtual true, abstract: false, final false
inline int32_t get_AttributeCount() ;

/// @brief Method get_BaseURI, addr 0xabb2a14, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_BaseURI() ;

/// @brief Method get_CanResolveEntity, addr 0xabb32dc, size 0x8, virtual true, abstract: false, final false
inline bool get_CanResolveEntity() ;

/// @brief Method get_Depth, addr 0xabb29f8, size 0x1c, virtual true, abstract: false, final false
inline int32_t get_Depth() ;

/// @brief Method get_DtdInfo, addr 0xabb3870, size 0x20, virtual true, abstract: false, final false
inline ::System::Xml::IDtdInfo* get_DtdInfo() ;

/// @brief Method get_EOF, addr 0xabb2b08, size 0x20, virtual true, abstract: false, final false
inline bool get_EOF() ;

/// @brief Method get_IsDefault, addr 0xabb2a54, size 0x20, virtual true, abstract: false, final false
inline bool get_IsDefault() ;

/// @brief Method get_IsEmptyElement, addr 0xabb2a34, size 0x20, virtual true, abstract: false, final false
inline bool get_IsEmptyElement() ;

/// @brief Method get_LineNumber, addr 0xabb33e8, size 0xe8, virtual true, abstract: false, final true
inline int32_t get_LineNumber() ;

/// @brief Method get_LinePosition, addr 0xabb34d0, size 0xe8, virtual true, abstract: false, final true
inline int32_t get_LinePosition() ;

/// @brief Method get_LocalName, addr 0xabb2988, size 0x1c, virtual true, abstract: false, final false
inline ::StringW get_LocalName() ;

/// @brief Method get_Name, addr 0xabb296c, size 0x1c, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NameTable, addr 0xabb2b28, size 0x20, virtual true, abstract: false, final false
inline ::System::Xml::XmlNameTable* get_NameTable() ;

/// @brief Method get_NamespaceManager, addr 0xabb37d8, size 0x20, virtual true, abstract: false, final false
inline ::System::Xml::XmlNamespaceManager* get_NamespaceManager() ;

/// @brief Method get_NamespaceURI, addr 0xabb29a4, size 0x1c, virtual true, abstract: false, final false
inline ::StringW get_NamespaceURI() ;

/// @brief Method get_Namespaces, addr 0xabb3734, size 0x18, virtual false, abstract: false, final false
inline bool get_Namespaces() ;

/// @brief Method get_NodeType, addr 0xabb2950, size 0x1c, virtual true, abstract: false, final false
inline ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Prefix, addr 0xabb29c0, size 0x1c, virtual true, abstract: false, final false
inline ::StringW get_Prefix() ;

/// @brief Method get_QuoteChar, addr 0xabb2a74, size 0x20, virtual true, abstract: false, final false
inline char16_t get_QuoteChar() ;

/// @brief Method get_ReadState, addr 0xabb2ad4, size 0x34, virtual true, abstract: false, final false
inline ::System::Xml::ReadState get_ReadState() ;

/// @brief Method get_Schemas, addr 0xabb372c, size 0x8, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaCollection* get_Schemas() ;

/// @brief Method get_Settings, addr 0xabb2880, size 0xd0, virtual true, abstract: false, final false
inline ::System::Xml::XmlReaderSettings* get_Settings() ;

/// @brief Method get_StandAlone, addr 0xabb37f8, size 0x18, virtual false, abstract: false, final false
inline bool get_StandAlone() ;

/// @brief Method get_TypedValueObject, addr 0xabb3828, size 0x18, virtual false, abstract: false, final false
inline ::System::Object* get_TypedValueObject() ;

/// @brief Method get_ValidationType, addr 0xabb3724, size 0x8, virtual false, abstract: false, final false
inline ::System::Xml::ValidationType get_ValidationType() ;

/// @brief Method get_Validator, addr 0xabb37c8, size 0x8, virtual false, abstract: false, final false
inline ::System::Xml::Schema::BaseValidator* get_Validator() ;

/// @brief Method get_Value, addr 0xabb29dc, size 0x1c, virtual true, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method get_XmlLang, addr 0xabb2ab4, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_XmlLang() ;

/// @brief Method get_XmlSpace, addr 0xabb2a94, size 0x20, virtual true, abstract: false, final false
inline ::System::Xml::XmlSpace get_XmlSpace() ;

/// @brief Convert to "::System::Xml::IXmlLineInfo"
constexpr ::System::Xml::IXmlLineInfo* i___System__Xml__IXmlLineInfo() noexcept;

/// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
constexpr ::System::Xml::IXmlNamespaceResolver* i___System__Xml__IXmlNamespaceResolver() noexcept;

static inline void setStaticF_s_tempResolver(::System::Xml::XmlResolver*  value) ;

/// @brief Method set_SchemaTypeObject, addr 0xabb3810, size 0x18, virtual false, abstract: false, final false
inline void set_SchemaTypeObject(::System::Object*  value) ;

/// @brief Method set_TypedValueObject, addr 0xabb3840, size 0x18, virtual false, abstract: false, final false
inline void set_TypedValueObject(::System::Object*  value) ;

/// @brief Method set_Validator, addr 0xabb37d0, size 0x8, virtual false, abstract: false, final false
inline void set_Validator(::System::Xml::Schema::BaseValidator*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlValidatingReaderImpl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlValidatingReaderImpl", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlValidatingReaderImpl(XmlValidatingReaderImpl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlValidatingReaderImpl", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlValidatingReaderImpl(XmlValidatingReaderImpl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14079};

/// @brief Field coreReader, offset: 0x10, size: 0x8, def value: None
 ::System::Xml::XmlReader*  ___coreReader;

/// @brief Field coreReaderImpl, offset: 0x18, size: 0x8, def value: None
 ::System::Xml::XmlTextReaderImpl*  ___coreReaderImpl;

/// @brief Field coreReaderNSResolver, offset: 0x20, size: 0x8, def value: None
 ::System::Xml::IXmlNamespaceResolver*  ___coreReaderNSResolver;

/// @brief Field validationType, offset: 0x28, size: 0x4, def value: None
 ::System::Xml::ValidationType  ___validationType;

/// @brief Field validator, offset: 0x30, size: 0x8, def value: None
 ::System::Xml::Schema::BaseValidator*  ___validator;

/// @brief Field schemaCollection, offset: 0x38, size: 0x8, def value: None
 ::System::Xml::Schema::XmlSchemaCollection*  ___schemaCollection;

/// @brief Field processIdentityConstraints, offset: 0x40, size: 0x1, def value: None
 bool  ___processIdentityConstraints;

/// @brief Field parsingFunction, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::XmlValidatingReaderImpl_ParsingFunction  ___parsingFunction;

/// @brief Field eventHandling, offset: 0x48, size: 0x8, def value: None
 ::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling*  ___eventHandling;

/// @brief Field parserContext, offset: 0x50, size: 0x8, def value: None
 ::System::Xml::XmlParserContext*  ___parserContext;

/// @brief Field readBinaryHelper, offset: 0x58, size: 0x8, def value: None
 ::System::Xml::ReadContentAsBinaryHelper*  ___readBinaryHelper;

/// @brief Field outerReader, offset: 0x60, size: 0x8, def value: None
 ::System::Xml::XmlReader*  ___outerReader;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlValidatingReaderImpl, ___coreReader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlValidatingReaderImpl, ___coreReaderImpl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlValidatingReaderImpl, ___coreReaderNSResolver) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlValidatingReaderImpl, ___validationType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlValidatingReaderImpl, ___validator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlValidatingReaderImpl, ___schemaCollection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlValidatingReaderImpl, ___processIdentityConstraints) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlValidatingReaderImpl, ___parsingFunction) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlValidatingReaderImpl, ___eventHandling) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlValidatingReaderImpl, ___parserContext) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlValidatingReaderImpl, ___readBinaryHelper) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlValidatingReaderImpl, ___outerReader) == 0x60, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlValidatingReaderImpl) == 0x68, "Size mismatch!");

} // namespace end def System::Xml
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlValidatingReaderImpl/ValidationEventHandling
class CORDL_TYPE XmlValidatingReaderImpl_ValidationEventHandling : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Xml_IValidationEventHandling_get_EventHandler)) ::System::Object*  System_Xml_IValidationEventHandling_EventHandler;

/// @brief Field eventHandler, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_eventHandler, put=__cordl_internal_set_eventHandler)) ::System::Xml::Schema::ValidationEventHandler*  eventHandler;

/// @brief Field reader, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_reader, put=__cordl_internal_set_reader)) ::System::Xml::XmlValidatingReaderImpl*  reader;

/// @brief Convert operator to "::System::Xml::IValidationEventHandling"
constexpr operator  ::System::Xml::IValidationEventHandling*() noexcept;

/// @brief Method AddHandler, addr 0xabb2670, size 0x90, virtual false, abstract: false, final false
inline void AddHandler(::System::Xml::Schema::ValidationEventHandler*  handler) ;

static inline ::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling* New_ctor(::System::Xml::XmlValidatingReaderImpl*  reader) ;

/// @brief Method System.Xml.IValidationEventHandling.SendEvent, addr 0xabb39d0, size 0x114, virtual true, abstract: false, final true
inline void System_Xml_IValidationEventHandling_SendEvent(::System::Exception*  exception, ::System::Xml::Schema::XmlSeverityType  severity) ;

/// @brief Method System.Xml.IValidationEventHandling.get_EventHandler, addr 0xabb39c8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Xml_IValidationEventHandling_get_EventHandler() ;

constexpr ::System::Xml::Schema::ValidationEventHandler* const& __cordl_internal_get_eventHandler() const;

constexpr ::System::Xml::Schema::ValidationEventHandler*& __cordl_internal_get_eventHandler() ;

constexpr ::System::Xml::XmlValidatingReaderImpl* const& __cordl_internal_get_reader() const;

constexpr ::System::Xml::XmlValidatingReaderImpl*& __cordl_internal_get_reader() ;

constexpr void __cordl_internal_set_eventHandler(::System::Xml::Schema::ValidationEventHandler*  value) ;

constexpr void __cordl_internal_set_reader(::System::Xml::XmlValidatingReaderImpl*  value) ;

/// @brief Method .ctor, addr 0xabb2640, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::XmlValidatingReaderImpl*  reader) ;

/// @brief Convert to "::System::Xml::IValidationEventHandling"
constexpr ::System::Xml::IValidationEventHandling* i___System__Xml__IValidationEventHandling() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlValidatingReaderImpl_ValidationEventHandling() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlValidatingReaderImpl_ValidationEventHandling", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlValidatingReaderImpl_ValidationEventHandling(XmlValidatingReaderImpl_ValidationEventHandling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlValidatingReaderImpl_ValidationEventHandling", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlValidatingReaderImpl_ValidationEventHandling(XmlValidatingReaderImpl_ValidationEventHandling const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14078};

/// @brief Field reader, offset: 0x10, size: 0x8, def value: None
 ::System::Xml::XmlValidatingReaderImpl*  ___reader;

/// @brief Field eventHandler, offset: 0x18, size: 0x8, def value: None
 ::System::Xml::Schema::ValidationEventHandler*  ___eventHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling, ___reader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling, ___eventHandler) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling) == 0x20, "Size mismatch!");

} // namespace end def System::Xml
