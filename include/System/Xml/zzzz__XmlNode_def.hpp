#pragma once
// IWYU pragma private; include "System/Xml/XmlNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(XmlNode)
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml::XPath {
class XPathNavigator;
}
namespace System::Xml::XPath {
struct XPathNodeType;
}
namespace System::Xml {
class XmlAttributeCollection;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlLinkedNode;
}
namespace System::Xml {
struct XmlNodeChangedAction;
}
namespace System::Xml {
class XmlNodeChangedEventArgs;
}
namespace System::Xml {
class XmlNodeList;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
struct XmlSpace;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class XmlNode;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlNode*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlNode*, "System.Xml", "XmlNode");
// [DebuggerDisplay("{debuggerDisplayProxy}")]
// [DefaultMember("Item")]
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlNode
class CORDL_TYPE XmlNode : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Attributes)) ::System::Xml::XmlAttributeCollection*  Attributes;

 __declspec(property(get=get_BaseURI)) ::StringW  BaseURI;

 __declspec(property(get=get_ChildNodes)) ::System::Xml::XmlNodeList*  ChildNodes;

 __declspec(property(get=get_Document)) ::System::Xml::XmlDocument*  Document;

 __declspec(property(get=get_FirstChild)) ::System::Xml::XmlNode*  FirstChild;

 __declspec(property(get=get_HasChildNodes)) bool  HasChildNodes;

 __declspec(property(get=get_InnerText, put=set_InnerText)) ::StringW  InnerText;

 __declspec(property(put=set_InnerXml)) ::StringW  InnerXml;

 __declspec(property(get=get_IsContainer)) bool  IsContainer;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_IsText)) bool  IsText;

 __declspec(property(get=get_LastChild)) ::System::Xml::XmlNode*  LastChild;

 __declspec(property(get=get_LastNode, put=set_LastNode)) ::System::Xml::XmlLinkedNode*  LastNode;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NamespaceURI)) ::StringW  NamespaceURI;

 __declspec(property(get=get_NextSibling)) ::System::Xml::XmlNode*  NextSibling;

 __declspec(property(get=get_NodeType)) ::System::Xml::XmlNodeType  NodeType;

 __declspec(property(get=get_OwnerDocument)) ::System::Xml::XmlDocument*  OwnerDocument;

 __declspec(property(get=get_ParentNode)) ::System::Xml::XmlNode*  ParentNode;

 __declspec(property(get=get_Prefix, put=set_Prefix)) ::StringW  Prefix;

 __declspec(property(get=get_PreviousSibling)) ::System::Xml::XmlNode*  PreviousSibling;

 __declspec(property(get=get_PreviousText)) ::System::Xml::XmlNode*  PreviousText;

 __declspec(property(get=get_SchemaInfo)) ::System::Xml::Schema::IXmlSchemaInfo*  SchemaInfo;

 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

 __declspec(property(get=get_XPLocalName)) ::StringW  XPLocalName;

 __declspec(property(get=get_XPNodeType)) ::System::Xml::XPath::XPathNodeType  XPNodeType;

 __declspec(property(get=get_XmlLang)) ::StringW  XmlLang;

 __declspec(property(get=get_XmlSpace)) ::System::Xml::XmlSpace  XmlSpace;

/// @brief Field parentNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentNode, put=__cordl_internal_set_parentNode)) ::System::Xml::XmlNode*  parentNode;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Method AfterEvent, addr 0xabdb778, size 0x44, virtual true, abstract: false, final false
inline void AfterEvent(::System::Xml::XmlNodeChangedEventArgs*  args) ;

/// @brief Method AncestorNode, addr 0xabda9a8, size 0x6c, virtual false, abstract: false, final false
inline bool AncestorNode(::System::Xml::XmlNode*  node) ;

/// @brief Method AppendChild, addr 0xabcac74, size 0x4d0, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* AppendChild(::System::Xml::XmlNode*  newChild) ;

/// @brief Method AppendChildForLoad, addr 0xabdaa48, size 0x1c8, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode*  newChild, ::System::Xml::XmlDocument*  doc) ;

/// @brief Method AppendChildText, addr 0xabdae88, size 0x104, virtual false, abstract: false, final false
inline void AppendChildText(::System::Text::StringBuilder*  builder) ;

/// @brief Method BeforeEvent, addr 0xabdb734, size 0x44, virtual true, abstract: false, final false
inline void BeforeEvent(::System::Xml::XmlNodeChangedEventArgs*  args) ;

/// @brief Method CanInsertAfter, addr 0xabdac20, size 0x8, virtual true, abstract: false, final false
inline bool CanInsertAfter(::System::Xml::XmlNode*  newChild, ::System::Xml::XmlNode*  refChild) ;

/// @brief Method CanInsertBefore, addr 0xabdac18, size 0x8, virtual true, abstract: false, final false
inline bool CanInsertBefore(::System::Xml::XmlNode*  newChild, ::System::Xml::XmlNode*  refChild) ;

/// @brief Method CloneNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Xml::XmlNode* CloneNode(bool  deep) ;

/// @brief Method CopyChildren, addr 0xabdac4c, size 0x9c, virtual true, abstract: false, final false
inline void CopyChildren(::System::Xml::XmlDocument*  doc, ::System::Xml::XmlNode*  container, bool  deep) ;

/// @brief Method CreateNavigator, addr 0xabda5d0, size 0x9c, virtual true, abstract: false, final false
inline ::System::Xml::XPath::XPathNavigator* CreateNavigator() ;

/// @brief Method FindChild, addr 0xabdb5ac, size 0x64, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* FindChild(::System::Xml::XmlNodeType  type) ;

/// @brief Method GetEnumerator, addr 0xabd2510, size 0x58, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GetEnumerator() ;

/// @brief Method GetEventArgs, addr 0xabdb610, size 0x124, virtual true, abstract: false, final false
inline ::System::Xml::XmlNodeChangedEventArgs* GetEventArgs(::System::Xml::XmlNode*  node, ::System::Xml::XmlNode*  oldParent, ::System::Xml::XmlNode*  newParent, ::StringW  oldValue, ::StringW  newValue, ::System::Xml::XmlNodeChangedAction  action) ;

/// @brief Method GetPrefixOfNamespace, addr 0xabdb208, size 0x28, virtual true, abstract: false, final false
inline ::StringW GetPrefixOfNamespace(::StringW  namespaceURI) ;

/// @brief Method GetPrefixOfNamespaceStrict, addr 0xabdb230, size 0x374, virtual false, abstract: false, final false
inline ::StringW GetPrefixOfNamespaceStrict(::StringW  namespaceURI) ;

/// @brief Method HasReadOnlyParent, addr 0xabdad40, size 0xdc, virtual false, abstract: false, final false
static inline bool HasReadOnlyParent(::System::Xml::XmlNode*  n) ;

/// @brief Method InsertAfter, addr 0xabca144, size 0x588, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* InsertAfter(::System::Xml::XmlNode*  newChild, ::System::Xml::XmlNode*  refChild) ;

/// @brief Method InsertBefore, addr 0xabc9b04, size 0x5b8, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* InsertBefore(::System::Xml::XmlNode*  newChild, ::System::Xml::XmlNode*  refChild) ;

/// @brief Method IsValidChildType, addr 0xabdac10, size 0x8, virtual true, abstract: false, final false
inline bool IsValidChildType(::System::Xml::XmlNodeType  type) ;

/// @brief Method NestTextNodes, addr 0xabc9a34, size 0x20, virtual false, abstract: false, final false
static inline void NestTextNodes(::System::Xml::XmlNode*  prevNode, ::System::Xml::XmlNode*  nextNode) ;

static inline ::System::Xml::XmlNode* New_ctor() ;

static inline ::System::Xml::XmlNode* New_ctor(::System::Xml::XmlDocument*  doc) ;

/// @brief Method PrependChild, addr 0xabcabbc, size 0x48, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* PrependChild(::System::Xml::XmlNode*  newChild) ;

/// @brief Method RemoveAll, addr 0xabd4b7c, size 0x68, virtual true, abstract: false, final false
inline void RemoveAll() ;

/// @brief Method RemoveChild, addr 0xabca734, size 0x3d4, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* RemoveChild(::System::Xml::XmlNode*  oldChild) ;

/// @brief Method SetParent, addr 0xabd527c, size 0x3c, virtual true, abstract: false, final false
inline void SetParent(::System::Xml::XmlNode*  node) ;

/// @brief Method SetParentForLoad, addr 0xabdb5a4, size 0x8, virtual true, abstract: false, final false
inline void SetParentForLoad(::System::Xml::XmlNode*  node) ;

/// @brief Method SplitName, addr 0xabcfd48, size 0xcc, virtual false, abstract: false, final false
static inline void SplitName(::StringW  name, ::by_ref<::StringW>  prefix, ::by_ref<::StringW>  localName) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xabdae30, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.ICloneable.Clone, addr 0xabdae1c, size 0x14, virtual true, abstract: false, final true
inline ::System::Object* System_ICloneable_Clone() ;

/// @brief Method UnnestTextNodes, addr 0xabdaa14, size 0x34, virtual false, abstract: false, final false
static inline void UnnestTextNodes(::System::Xml::XmlNode*  prevNode, ::System::Xml::XmlNode*  nextNode) ;

/// @brief Method WriteContentTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void WriteContentTo(::System::Xml::XmlWriter*  w) ;

/// @brief Method WriteTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void WriteTo(::System::Xml::XmlWriter*  w) ;

constexpr ::System::Xml::XmlNode* const& __cordl_internal_get_parentNode() const;

constexpr ::System::Xml::XmlNode*& __cordl_internal_get_parentNode() ;

constexpr void __cordl_internal_set_parentNode(::System::Xml::XmlNode*  value) ;

/// @brief Method .ctor, addr 0xabcec84, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xabc8c10, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::XmlDocument*  doc) ;

/// @brief Method get_Attributes, addr 0xabda8a0, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::XmlAttributeCollection* get_Attributes() ;

/// @brief Method get_BaseURI, addr 0xabdb03c, size 0x120, virtual true, abstract: false, final false
inline ::StringW get_BaseURI() ;

/// @brief Method get_ChildNodes, addr 0xabda828, size 0x68, virtual true, abstract: false, final false
inline ::System::Xml::XmlNodeList* get_ChildNodes() ;

/// @brief Method get_Document, addr 0xabdb15c, size 0xac, virtual false, abstract: false, final false
inline ::System::Xml::XmlDocument* get_Document() ;

/// @brief Method get_FirstChild, addr 0xabda960, size 0x24, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* get_FirstChild() ;

/// @brief Method get_HasChildNodes, addr 0xabdac28, size 0x24, virtual true, abstract: false, final false
inline bool get_HasChildNodes() ;

/// @brief Method get_InnerText, addr 0xabc93dc, size 0xfc, virtual true, abstract: false, final false
inline ::StringW get_InnerText() ;

/// @brief Method get_IsContainer, addr 0xabda994, size 0x8, virtual true, abstract: false, final false
inline bool get_IsContainer() ;

/// @brief Method get_IsReadOnly, addr 0xabdad1c, size 0x24, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_IsText, addr 0xabdba3c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsText() ;

/// @brief Method get_LastChild, addr 0xabda984, size 0x10, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* get_LastChild() ;

/// @brief Method get_LastNode, addr 0xabda99c, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::XmlLinkedNode* get_LastNode() ;

/// @brief Method get_LocalName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_LocalName() ;

/// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Name() ;

/// @brief Method get_NamespaceURI, addr 0xabdace8, size 0x18, virtual true, abstract: false, final false
inline ::StringW get_NamespaceURI() ;

/// @brief Method get_NextSibling, addr 0xabda898, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* get_NextSibling() ;

/// @brief Method get_NodeType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_OwnerDocument, addr 0xabda8a8, size 0xb8, virtual true, abstract: false, final false
inline ::System::Xml::XmlDocument* get_OwnerDocument() ;

/// @brief Method get_ParentNode, addr 0xabda740, size 0xe8, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* get_ParentNode() ;

/// @brief Method get_Prefix, addr 0xabdad00, size 0x18, virtual true, abstract: false, final false
inline ::StringW get_Prefix() ;

/// @brief Method get_PreviousSibling, addr 0xabda890, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* get_PreviousSibling() ;

/// @brief Method get_PreviousText, addr 0xabdba44, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* get_PreviousText() ;

/// @brief Method get_SchemaInfo, addr 0xabdafe4, size 0x58, virtual true, abstract: false, final false
inline ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo() ;

/// @brief Method get_Value, addr 0xabda66c, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method get_XPLocalName, addr 0xabdba24, size 0x18, virtual true, abstract: false, final false
inline ::StringW get_XPLocalName() ;

/// @brief Method get_XPNodeType, addr 0xabdba1c, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::XPath::XPathNodeType get_XPNodeType() ;

/// @brief Method get_XmlLang, addr 0xabdb934, size 0xe8, virtual true, abstract: false, final false
inline ::StringW get_XmlLang() ;

/// @brief Method get_XmlSpace, addr 0xabdb7bc, size 0x178, virtual true, abstract: false, final false
inline ::System::Xml::XmlSpace get_XmlSpace() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

/// @brief Method set_InnerText, addr 0xabc94d8, size 0xd0, virtual true, abstract: false, final false
inline void set_InnerText(::StringW  value) ;

/// @brief Method set_InnerXml, addr 0xabdaf8c, size 0x58, virtual true, abstract: false, final false
inline void set_InnerXml(::StringW  value) ;

/// @brief Method set_LastNode, addr 0xabda9a4, size 0x4, virtual true, abstract: false, final false
inline void set_LastNode(::System::Xml::XmlLinkedNode*  value) ;

/// @brief Method set_Prefix, addr 0xabdad18, size 0x4, virtual true, abstract: false, final false
inline void set_Prefix(::StringW  value) ;

/// @brief Method set_Value, addr 0xabda674, size 0xcc, virtual true, abstract: false, final false
inline void set_Value(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlNode(XmlNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlNode(XmlNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14130};

/// @brief Field parentNode, offset: 0x10, size: 0x8, def value: None
 ::System::Xml::XmlNode*  ___parentNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlNode, ___parentNode) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlNode) == 0x18, "Size mismatch!");

} // namespace end def System::Xml
