#pragma once
// IWYU pragma private; include "System/Xml/XmlLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(XmlLoader)
namespace System::Xml {
class IDtdInfo;
}
namespace System::Xml {
class XmlAttribute;
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
class XmlEntityReference;
}
namespace System::Xml {
class XmlEntity;
}
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlParserContext;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlResolver;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml {
class XmlLoader;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlLoader*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlLoader*, "System.Xml", "XmlLoader");
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlLoader
class CORDL_TYPE XmlLoader : public ::System::Object {
public:
// Declarations
/// @brief Field doc, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_doc, put=__cordl_internal_set_doc)) ::System::Xml::XmlDocument*  doc;

/// @brief Field preserveWhitespace, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_preserveWhitespace, put=__cordl_internal_set_preserveWhitespace)) bool  preserveWhitespace;

/// @brief Field reader, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_reader, put=__cordl_internal_set_reader)) ::System::Xml::XmlReader*  reader;

/// @brief Method CreateInnerXmlReader, addr 0xabd8e54, size 0x290, virtual false, abstract: false, final false
inline ::System::Xml::XmlReader* CreateInnerXmlReader(::StringW  xmlFragment, ::System::Xml::XmlNodeType  nt, ::System::Xml::XmlParserContext*  context, ::System::Xml::XmlDocument*  doc) ;

/// @brief Method EntitizeName, addr 0xabd9384, size 0x6c, virtual false, abstract: false, final false
inline ::StringW EntitizeName(::StringW  name) ;

/// @brief Method ExpandEntity, addr 0xabd5018, size 0x4c, virtual false, abstract: false, final false
inline void ExpandEntity(::System::Xml::XmlEntity*  ent) ;

/// @brief Method ExpandEntityReference, addr 0xabd52b8, size 0x5d0, virtual false, abstract: false, final false
inline void ExpandEntityReference(::System::Xml::XmlEntityReference*  eref) ;

/// @brief Method GetContext, addr 0xabd85c0, size 0x894, virtual false, abstract: false, final false
inline ::System::Xml::XmlParserContext* GetContext(::System::Xml::XmlNode*  node) ;

/// @brief Method Load, addr 0xabd1c40, size 0x264, virtual false, abstract: false, final false
inline void Load(::System::Xml::XmlDocument*  doc, ::System::Xml::XmlReader*  reader, bool  preserveWhitespace) ;

/// @brief Method LoadAttributeNode, addr 0xabd6428, size 0x314, virtual false, abstract: false, final false
inline ::System::Xml::XmlAttribute* LoadAttributeNode() ;

/// @brief Method LoadAttributeNodeDirect, addr 0xabd81b4, size 0x140, virtual false, abstract: false, final false
inline ::System::Xml::XmlAttribute* LoadAttributeNodeDirect() ;

/// @brief Method LoadAttributeValue, addr 0xabd6f24, size 0x300, virtual false, abstract: false, final false
inline void LoadAttributeValue(::System::Xml::XmlNode*  parent, bool  direct) ;

/// @brief Method LoadDeclarationNode, addr 0xabd6918, size 0x1a0, virtual false, abstract: false, final false
inline ::System::Xml::XmlDeclaration* LoadDeclarationNode() ;

/// @brief Method LoadDefaultAttribute, addr 0xabd6d74, size 0x1b0, virtual false, abstract: false, final false
inline ::System::Xml::XmlAttribute* LoadDefaultAttribute() ;

/// @brief Method LoadDocSequence, addr 0xabd5e38, size 0x6c, virtual false, abstract: false, final false
inline void LoadDocSequence(::System::Xml::XmlDocument*  parentDoc) ;

/// @brief Method LoadDocumentType, addr 0xabd76ac, size 0xb08, virtual false, abstract: false, final false
inline void LoadDocumentType(::System::Xml::IDtdInfo*  dtdInfo, ::System::Xml::XmlDocumentType*  dtNode) ;

/// @brief Method LoadDocumentTypeNode, addr 0xabd6ab8, size 0x1ac, virtual false, abstract: false, final false
inline ::System::Xml::XmlDocumentType* LoadDocumentTypeNode() ;

/// @brief Method LoadEntityReferenceNode, addr 0xabd673c, size 0x1dc, virtual false, abstract: false, final false
inline ::System::Xml::XmlEntityReference* LoadEntityReferenceNode(bool  direct) ;

/// @brief Method LoadInnerXmlAttribute, addr 0xabcb254, size 0x8, virtual false, abstract: false, final false
inline void LoadInnerXmlAttribute(::System::Xml::XmlAttribute*  node, ::StringW  innerxmltext) ;

/// @brief Method LoadInnerXmlElement, addr 0xabd4c68, size 0x74, virtual false, abstract: false, final false
inline void LoadInnerXmlElement(::System::Xml::XmlElement*  node, ::StringW  innerxmltext) ;

/// @brief Method LoadNode, addr 0xabd5ea4, size 0x584, virtual false, abstract: false, final false
inline ::System::Xml::XmlNode* LoadNode(bool  skipOverWhitespace) ;

/// @brief Method LoadNodeDirect, addr 0xabd7224, size 0x488, virtual false, abstract: false, final false
inline ::System::Xml::XmlNode* LoadNodeDirect() ;

static inline ::System::Xml::XmlLoader* New_ctor() ;

/// @brief Method ParseDocumentType, addr 0xabd360c, size 0x68, virtual false, abstract: false, final false
inline void ParseDocumentType(::System::Xml::XmlDocumentType*  dtNode) ;

/// @brief Method ParseDocumentType, addr 0xabd82f4, size 0x2cc, virtual false, abstract: false, final false
inline void ParseDocumentType(::System::Xml::XmlDocumentType*  dtNode, bool  bUseResolver, ::System::Xml::XmlResolver*  resolver) ;

/// @brief Method ParsePartialContent, addr 0xabd2f54, size 0x224, virtual false, abstract: false, final false
inline ::System::Xml::XmlNamespaceManager* ParsePartialContent(::System::Xml::XmlNode*  parentNode, ::StringW  innerxmltext, ::System::Xml::XmlNodeType  nt) ;

/// @brief Method ParseXmlDeclarationValue, addr 0xabce2e0, size 0x2a0, virtual false, abstract: false, final false
static inline void ParseXmlDeclarationValue(::StringW  strValue, ::by_ref<::StringW>  version, ::by_ref<::StringW>  encoding, ::by_ref<::StringW>  standalone) ;

/// @brief Method ReadCurrentNode, addr 0xabd1990, size 0x144, virtual false, abstract: false, final false
inline ::System::Xml::XmlNode* ReadCurrentNode(::System::Xml::XmlDocument*  doc, ::System::Xml::XmlReader*  reader) ;

/// @brief Method RemoveDuplicateNamespace, addr 0xabd90e4, size 0x2a0, virtual false, abstract: false, final false
inline void RemoveDuplicateNamespace(::System::Xml::XmlElement*  elem, ::System::Xml::XmlNamespaceManager*  mgr, bool  fCheckElemAttrs) ;

/// @brief Method UnexpectedNodeType, addr 0xabd6c64, size 0x110, virtual false, abstract: false, final false
static inline ::System::Exception* UnexpectedNodeType(::System::Xml::XmlNodeType  nodetype) ;

constexpr ::System::Xml::XmlDocument* const& __cordl_internal_get_doc() const;

constexpr ::System::Xml::XmlDocument*& __cordl_internal_get_doc() ;

constexpr bool const& __cordl_internal_get_preserveWhitespace() const;

constexpr bool& __cordl_internal_get_preserveWhitespace() ;

constexpr ::System::Xml::XmlReader* const& __cordl_internal_get_reader() const;

constexpr ::System::Xml::XmlReader*& __cordl_internal_get_reader() ;

constexpr void __cordl_internal_set_doc(::System::Xml::XmlDocument*  value) ;

constexpr void __cordl_internal_set_preserveWhitespace(bool  value) ;

constexpr void __cordl_internal_set_reader(::System::Xml::XmlReader*  value) ;

/// @brief Method .ctor, addr 0xabcb24c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlLoader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlLoader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlLoader(XmlLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlLoader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlLoader(XmlLoader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14124};

/// @brief Field doc, offset: 0x10, size: 0x8, def value: None
 ::System::Xml::XmlDocument*  ___doc;

/// @brief Field reader, offset: 0x18, size: 0x8, def value: None
 ::System::Xml::XmlReader*  ___reader;

/// @brief Field preserveWhitespace, offset: 0x20, size: 0x1, def value: None
 bool  ___preserveWhitespace;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlLoader, ___doc) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlLoader, ___reader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlLoader, ___preserveWhitespace) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlLoader) == 0x28, "Size mismatch!");

} // namespace end def System::Xml
