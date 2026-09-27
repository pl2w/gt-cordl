#pragma once
// IWYU pragma private; include "System/Xml/XmlNodeReaderNavigator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNodeReaderNavigator_VirtualAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNodeReaderNavigator)
namespace GlobalNamespace {
struct XmlNodeReaderNavigator_VirtualAttribute;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml {
class XmlDeclaration;
}
namespace System::Xml {
class XmlDocumentType;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlElement;
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
class XmlNode;
}
namespace System::Xml {
struct XmlSpace;
}
// Forward declare root types
namespace System::Xml {
class XmlNodeReaderNavigator;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlNodeReaderNavigator*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlNodeReaderNavigator*, "System.Xml", "XmlNodeReaderNavigator");
// Dependencies System.Object, System.Xml.XmlNodeReaderNavigator::VirtualAttribute
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlNodeReaderNavigator
class CORDL_TYPE XmlNodeReaderNavigator : public ::System::Object {
public:
// Declarations
using VirtualAttribute = ::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute;

 __declspec(property(get=get_AttributeCount)) int32_t  AttributeCount;

 __declspec(property(get=get_BaseURI)) ::StringW  BaseURI;

 __declspec(property(get=get_CreatedOnAttribute)) bool  CreatedOnAttribute;

 __declspec(property(get=get_Document)) ::System::Xml::XmlDocument*  Document;

 __declspec(property(get=get_IsDefault)) bool  IsDefault;

 __declspec(property(get=get_IsEmptyElement)) bool  IsEmptyElement;

 __declspec(property(get=get_IsOnDeclOrDocType)) bool  IsOnDeclOrDocType;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NameTable)) ::System::Xml::XmlNameTable*  NameTable;

 __declspec(property(get=get_NamespaceURI)) ::StringW  NamespaceURI;

 __declspec(property(get=get_NodeType)) ::System::Xml::XmlNodeType  NodeType;

 __declspec(property(get=get_Prefix)) ::StringW  Prefix;

 __declspec(property(get=get_SchemaInfo)) ::System::Xml::Schema::IXmlSchemaInfo*  SchemaInfo;

 __declspec(property(get=get_Value)) ::StringW  Value;

 __declspec(property(get=get_XmlLang)) ::StringW  XmlLang;

 __declspec(property(get=get_XmlSpace)) ::System::Xml::XmlSpace  XmlSpace;

/// @brief Field attrIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_attrIndex, put=__cordl_internal_set_attrIndex)) int32_t  attrIndex;

/// @brief Field bCreatedOnAttribute, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get_bCreatedOnAttribute, put=__cordl_internal_set_bCreatedOnAttribute)) bool  bCreatedOnAttribute;

/// @brief Field bLogOnAttrVal, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_bLogOnAttrVal, put=__cordl_internal_set_bLogOnAttrVal)) bool  bLogOnAttrVal;

/// @brief Field bOnAttrVal, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_bOnAttrVal, put=__cordl_internal_set_bOnAttrVal)) bool  bOnAttrVal;

/// @brief Field curNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_curNode, put=__cordl_internal_set_curNode)) ::System::Xml::XmlNode*  curNode;

/// @brief Field decNodeAttributes, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_decNodeAttributes, put=__cordl_internal_set_decNodeAttributes)) ::ArrayW<::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute>  decNodeAttributes;

/// @brief Field doc, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_doc, put=__cordl_internal_set_doc)) ::System::Xml::XmlDocument*  doc;

/// @brief Field docTypeNodeAttributes, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_docTypeNodeAttributes, put=__cordl_internal_set_docTypeNodeAttributes)) ::ArrayW<::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute>  docTypeNodeAttributes;

/// @brief Field elemNode, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_elemNode, put=__cordl_internal_set_elemNode)) ::System::Xml::XmlNode*  elemNode;

/// @brief Field logAttrIndex, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_logAttrIndex, put=__cordl_internal_set_logAttrIndex)) int32_t  logAttrIndex;

/// @brief Field logNode, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_logNode, put=__cordl_internal_set_logNode)) ::System::Xml::XmlNode*  logNode;

/// @brief Field nAttrInd, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_nAttrInd, put=__cordl_internal_set_nAttrInd)) int32_t  nAttrInd;

/// @brief Field nDeclarationAttrCount, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_nDeclarationAttrCount, put=__cordl_internal_set_nDeclarationAttrCount)) int32_t  nDeclarationAttrCount;

/// @brief Field nDocTypeAttrCount, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_nDocTypeAttrCount, put=__cordl_internal_set_nDocTypeAttrCount)) int32_t  nDocTypeAttrCount;

/// @brief Field nLogAttrInd, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_nLogAttrInd, put=__cordl_internal_set_nLogAttrInd)) int32_t  nLogAttrInd;

/// @brief Field nLogLevel, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_nLogLevel, put=__cordl_internal_set_nLogLevel)) int32_t  nLogLevel;

/// @brief Field nameTable, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameTable, put=__cordl_internal_set_nameTable)) ::System::Xml::XmlNameTable*  nameTable;

/// @brief Method CheckIndexCondition, addr 0xabdc970, size 0x68, virtual false, abstract: false, final false
inline void CheckIndexCondition(int32_t  attributeIndex) ;

/// @brief Method DefaultLookupNamespace, addr 0xabde0b4, size 0x11c, virtual false, abstract: false, final false
inline ::StringW DefaultLookupNamespace(::StringW  prefix) ;

/// @brief Method GetAttribute, addr 0xabdd134, size 0x1a4, virtual false, abstract: false, final false
inline ::StringW GetAttribute(int32_t  attributeIndex) ;

/// @brief Method GetAttribute, addr 0xabdcd80, size 0x19c, virtual false, abstract: false, final false
inline ::StringW GetAttribute(::StringW  name) ;

/// @brief Method GetAttribute, addr 0xabdcf64, size 0x1d0, virtual false, abstract: false, final false
inline ::StringW GetAttribute(::StringW  name, ::StringW  ns) ;

/// @brief Method GetAttributeFromElement, addr 0xabdcd3c, size 0x44, virtual false, abstract: false, final false
inline ::StringW GetAttributeFromElement(::System::Xml::XmlElement*  elem, ::StringW  name) ;

/// @brief Method GetAttributeFromElement, addr 0xabdcf1c, size 0x48, virtual false, abstract: false, final false
inline ::StringW GetAttributeFromElement(::System::Xml::XmlElement*  elem, ::StringW  name, ::StringW  ns) ;

/// @brief Method GetDecAttrInd, addr 0xabdcb0c, size 0x98, virtual false, abstract: false, final false
inline int32_t GetDecAttrInd(::StringW  name) ;

/// @brief Method GetDeclarationAttr, addr 0xabdc9d8, size 0xe0, virtual false, abstract: false, final false
inline ::StringW GetDeclarationAttr(::System::Xml::XmlDeclaration*  decl, ::StringW  name) ;

/// @brief Method GetDeclarationAttr, addr 0xabdcab8, size 0x54, virtual false, abstract: false, final false
inline ::StringW GetDeclarationAttr(int32_t  i) ;

/// @brief Method GetDocTypeAttrInd, addr 0xabdcca4, size 0x98, virtual false, abstract: false, final false
inline int32_t GetDocTypeAttrInd(::StringW  name) ;

/// @brief Method GetDocumentTypeAttr, addr 0xabdcba4, size 0xac, virtual false, abstract: false, final false
inline ::StringW GetDocumentTypeAttr(::System::Xml::XmlDocumentType*  docType, ::StringW  name) ;

/// @brief Method GetDocumentTypeAttr, addr 0xabdcc50, size 0x54, virtual false, abstract: false, final false
inline ::StringW GetDocumentTypeAttr(int32_t  i) ;

/// @brief Method GetNamespacesInScope, addr 0xabde594, size 0x4d0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* GetNamespacesInScope(::System::Xml::XmlNamespaceScope  scope) ;

/// @brief Method InitDecAttr, addr 0xabdc33c, size 0x1e4, virtual false, abstract: false, final false
inline void InitDecAttr() ;

/// @brief Method InitDocTypeAttr, addr 0xabdc844, size 0x12c, virtual false, abstract: false, final false
inline void InitDocTypeAttr() ;

/// @brief Method IsLocalNameEmpty, addr 0xabdc004, size 0x20, virtual false, abstract: false, final false
inline bool IsLocalNameEmpty(::System::Xml::XmlNodeType  nt) ;

/// @brief Method LogMove, addr 0xabdd2d8, size 0x44, virtual false, abstract: false, final false
inline void LogMove(int32_t  level) ;

/// @brief Method LookupNamespace, addr 0xabdde14, size 0x2a0, virtual false, abstract: false, final false
inline ::StringW LookupNamespace(::StringW  prefix) ;

/// @brief Method LookupPrefix, addr 0xabde1d0, size 0x3c4, virtual false, abstract: false, final false
inline ::StringW LookupPrefix(::StringW  namespaceName) ;

/// @brief Method MoveToAttribute, addr 0xabdd62c, size 0x18, virtual false, abstract: false, final false
inline bool MoveToAttribute(::StringW  name) ;

/// @brief Method MoveToAttribute, addr 0xabdd644, size 0x158, virtual false, abstract: false, final false
inline bool MoveToAttribute(::StringW  name, ::StringW  namespaceURI) ;

/// @brief Method MoveToAttribute, addr 0xabdd874, size 0x1b8, virtual false, abstract: false, final false
inline void MoveToAttribute(int32_t  attributeIndex) ;

/// @brief Method MoveToAttributeFromElement, addr 0xabdd79c, size 0xd8, virtual false, abstract: false, final false
inline bool MoveToAttributeFromElement(::System::Xml::XmlElement*  elem, ::StringW  name, ::StringW  ns) ;

/// @brief Method MoveToElement, addr 0xabddd84, size 0x90, virtual false, abstract: false, final false
inline bool MoveToElement() ;

/// @brief Method MoveToFirstChild, addr 0xabddc70, size 0x68, virtual false, abstract: false, final false
inline bool MoveToFirstChild() ;

/// @brief Method MoveToNext, addr 0xabddd44, size 0x40, virtual false, abstract: false, final false
inline bool MoveToNext() ;

/// @brief Method MoveToNextAttribute, addr 0xabdda2c, size 0x1e4, virtual false, abstract: false, final false
inline bool MoveToNextAttribute(::by_ref<int32_t>  level) ;

/// @brief Method MoveToNextSibling, addr 0xabddcd8, size 0x6c, virtual false, abstract: false, final false
inline bool MoveToNextSibling(::System::Xml::XmlNode*  node) ;

/// @brief Method MoveToParent, addr 0xabddc10, size 0x60, virtual false, abstract: false, final false
inline bool MoveToParent() ;

static inline ::System::Xml::XmlNodeReaderNavigator* New_ctor(::System::Xml::XmlNode*  node) ;

/// @brief Method ReadAttributeValue, addr 0xabdea64, size 0x218, virtual false, abstract: false, final false
inline bool ReadAttributeValue(::by_ref<int32_t>  level, ::by_ref<bool>  bResolveEntity, ::by_ref<::System::Xml::XmlNodeType>  nt) ;

/// @brief Method ResetMove, addr 0xabdd44c, size 0x1e0, virtual false, abstract: false, final false
inline void ResetMove(::by_ref<int32_t>  level, ::by_ref<::System::Xml::XmlNodeType>  nt) ;

/// @brief Method ResetToAttribute, addr 0xabdd398, size 0xb4, virtual false, abstract: false, final false
inline void ResetToAttribute(::by_ref<int32_t>  level) ;

/// @brief Method RollBackMove, addr 0xabdd31c, size 0x4c, virtual false, abstract: false, final false
inline void RollBackMove(::by_ref<int32_t>  level) ;

constexpr int32_t const& __cordl_internal_get_attrIndex() const;

constexpr int32_t& __cordl_internal_get_attrIndex() ;

constexpr bool const& __cordl_internal_get_bCreatedOnAttribute() const;

constexpr bool& __cordl_internal_get_bCreatedOnAttribute() ;

constexpr bool const& __cordl_internal_get_bLogOnAttrVal() const;

constexpr bool& __cordl_internal_get_bLogOnAttrVal() ;

constexpr bool const& __cordl_internal_get_bOnAttrVal() const;

constexpr bool& __cordl_internal_get_bOnAttrVal() ;

constexpr ::System::Xml::XmlNode* const& __cordl_internal_get_curNode() const;

constexpr ::System::Xml::XmlNode*& __cordl_internal_get_curNode() ;

constexpr ::ArrayW<::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute> const& __cordl_internal_get_decNodeAttributes() const;

constexpr ::ArrayW<::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute>& __cordl_internal_get_decNodeAttributes() ;

constexpr ::System::Xml::XmlDocument* const& __cordl_internal_get_doc() const;

constexpr ::System::Xml::XmlDocument*& __cordl_internal_get_doc() ;

constexpr ::ArrayW<::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute> const& __cordl_internal_get_docTypeNodeAttributes() const;

constexpr ::ArrayW<::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute>& __cordl_internal_get_docTypeNodeAttributes() ;

constexpr ::System::Xml::XmlNode* const& __cordl_internal_get_elemNode() const;

constexpr ::System::Xml::XmlNode*& __cordl_internal_get_elemNode() ;

constexpr int32_t const& __cordl_internal_get_logAttrIndex() const;

constexpr int32_t& __cordl_internal_get_logAttrIndex() ;

constexpr ::System::Xml::XmlNode* const& __cordl_internal_get_logNode() const;

constexpr ::System::Xml::XmlNode*& __cordl_internal_get_logNode() ;

constexpr int32_t const& __cordl_internal_get_nAttrInd() const;

constexpr int32_t& __cordl_internal_get_nAttrInd() ;

constexpr int32_t const& __cordl_internal_get_nDeclarationAttrCount() const;

constexpr int32_t& __cordl_internal_get_nDeclarationAttrCount() ;

constexpr int32_t const& __cordl_internal_get_nDocTypeAttrCount() const;

constexpr int32_t& __cordl_internal_get_nDocTypeAttrCount() ;

constexpr int32_t const& __cordl_internal_get_nLogAttrInd() const;

constexpr int32_t& __cordl_internal_get_nLogAttrInd() ;

constexpr int32_t const& __cordl_internal_get_nLogLevel() const;

constexpr int32_t& __cordl_internal_get_nLogLevel() ;

constexpr ::System::Xml::XmlNameTable* const& __cordl_internal_get_nameTable() const;

constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_nameTable() ;

constexpr void __cordl_internal_set_attrIndex(int32_t  value) ;

constexpr void __cordl_internal_set_bCreatedOnAttribute(bool  value) ;

constexpr void __cordl_internal_set_bLogOnAttrVal(bool  value) ;

constexpr void __cordl_internal_set_bOnAttrVal(bool  value) ;

constexpr void __cordl_internal_set_curNode(::System::Xml::XmlNode*  value) ;

constexpr void __cordl_internal_set_decNodeAttributes(::ArrayW<::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute>  value) ;

constexpr void __cordl_internal_set_doc(::System::Xml::XmlDocument*  value) ;

constexpr void __cordl_internal_set_docTypeNodeAttributes(::ArrayW<::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute>  value) ;

constexpr void __cordl_internal_set_elemNode(::System::Xml::XmlNode*  value) ;

constexpr void __cordl_internal_set_logAttrIndex(int32_t  value) ;

constexpr void __cordl_internal_set_logNode(::System::Xml::XmlNode*  value) ;

constexpr void __cordl_internal_set_nAttrInd(int32_t  value) ;

constexpr void __cordl_internal_set_nDeclarationAttrCount(int32_t  value) ;

constexpr void __cordl_internal_set_nDocTypeAttrCount(int32_t  value) ;

constexpr void __cordl_internal_set_nLogAttrInd(int32_t  value) ;

constexpr void __cordl_internal_set_nLogLevel(int32_t  value) ;

constexpr void __cordl_internal_set_nameTable(::System::Xml::XmlNameTable*  value) ;

/// @brief Method .ctor, addr 0xabdbb90, size 0x34c, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::XmlNode*  node) ;

/// @brief Method get_AttributeCount, addr 0xabdc708, size 0x13c, virtual false, abstract: false, final false
inline int32_t get_AttributeCount() ;

/// @brief Method get_BaseURI, addr 0xabdc520, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_BaseURI() ;

/// @brief Method get_CreatedOnAttribute, addr 0xabdc0a0, size 0x8, virtual false, abstract: false, final false
inline bool get_CreatedOnAttribute() ;

/// @brief Method get_Document, addr 0xabdec7c, size 0x10, virtual false, abstract: false, final false
inline ::System::Xml::XmlDocument* get_Document() ;

/// @brief Method get_IsDefault, addr 0xabdc62c, size 0xb4, virtual false, abstract: false, final false
inline bool get_IsDefault() ;

/// @brief Method get_IsEmptyElement, addr 0xabdc580, size 0xac, virtual false, abstract: false, final false
inline bool get_IsEmptyElement() ;

/// @brief Method get_IsOnDeclOrDocType, addr 0xabdd368, size 0x30, virtual false, abstract: false, final false
inline bool get_IsOnDeclOrDocType() ;

/// @brief Method get_LocalName, addr 0xabdc024, size 0x7c, virtual false, abstract: false, final false
inline ::StringW get_LocalName() ;

/// @brief Method get_Name, addr 0xabdbf40, size 0xc4, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NameTable, addr 0xabdc700, size 0x8, virtual false, abstract: false, final false
inline ::System::Xml::XmlNameTable* get_NameTable() ;

/// @brief Method get_NamespaceURI, addr 0xabdbf20, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_NamespaceURI() ;

/// @brief Method get_NodeType, addr 0xabdbedc, size 0x44, virtual false, abstract: false, final false
inline ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Prefix, addr 0xabdc0a8, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_Prefix() ;

/// @brief Method get_SchemaInfo, addr 0xabdc6e0, size 0x20, virtual false, abstract: false, final false
inline ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo() ;

/// @brief Method get_Value, addr 0xabdc0c8, size 0x274, virtual false, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method get_XmlLang, addr 0xabdc560, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_XmlLang() ;

/// @brief Method get_XmlSpace, addr 0xabdc540, size 0x20, virtual false, abstract: false, final false
inline ::System::Xml::XmlSpace get_XmlSpace() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlNodeReaderNavigator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlNodeReaderNavigator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlNodeReaderNavigator(XmlNodeReaderNavigator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlNodeReaderNavigator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlNodeReaderNavigator(XmlNodeReaderNavigator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14135};

/// @brief Field curNode, offset: 0x10, size: 0x8, def value: None
 ::System::Xml::XmlNode*  ___curNode;

/// @brief Field elemNode, offset: 0x18, size: 0x8, def value: None
 ::System::Xml::XmlNode*  ___elemNode;

/// @brief Field logNode, offset: 0x20, size: 0x8, def value: None
 ::System::Xml::XmlNode*  ___logNode;

/// @brief Field attrIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___attrIndex;

/// @brief Field logAttrIndex, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___logAttrIndex;

/// @brief Field nameTable, offset: 0x30, size: 0x8, def value: None
 ::System::Xml::XmlNameTable*  ___nameTable;

/// @brief Field doc, offset: 0x38, size: 0x8, def value: None
 ::System::Xml::XmlDocument*  ___doc;

/// @brief Field nAttrInd, offset: 0x40, size: 0x4, def value: None
 int32_t  ___nAttrInd;

/// @brief Field nDeclarationAttrCount, offset: 0x44, size: 0x4, def value: None
 int32_t  ___nDeclarationAttrCount;

/// @brief Field nDocTypeAttrCount, offset: 0x48, size: 0x4, def value: None
 int32_t  ___nDocTypeAttrCount;

/// @brief Field nLogLevel, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___nLogLevel;

/// @brief Field nLogAttrInd, offset: 0x50, size: 0x4, def value: None
 int32_t  ___nLogAttrInd;

/// @brief Field bLogOnAttrVal, offset: 0x54, size: 0x1, def value: None
 bool  ___bLogOnAttrVal;

/// @brief Field bCreatedOnAttribute, offset: 0x55, size: 0x1, def value: None
 bool  ___bCreatedOnAttribute;

/// @brief Field decNodeAttributes, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute>  ___decNodeAttributes;

/// @brief Field docTypeNodeAttributes, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute>  ___docTypeNodeAttributes;

/// @brief Field bOnAttrVal, offset: 0x68, size: 0x1, def value: None
 bool  ___bOnAttrVal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___curNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___elemNode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___logNode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___attrIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___logAttrIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___nameTable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___doc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___nAttrInd) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___nDeclarationAttrCount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___nDocTypeAttrCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___nLogLevel) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___nLogAttrInd) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___bLogOnAttrVal) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___bCreatedOnAttribute) == 0x55, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___decNodeAttributes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___docTypeNodeAttributes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___bOnAttrVal) == 0x68, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlNodeReaderNavigator) == 0x70, "Size mismatch!");

} // namespace end def System::Xml
