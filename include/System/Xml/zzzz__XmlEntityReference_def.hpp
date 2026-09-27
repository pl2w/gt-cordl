#pragma once
// IWYU pragma private; include "System/Xml/XmlEntityReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(XmlEntityReference)
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlLinkedNode;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml {
class XmlEntityReference;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlEntityReference*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlEntityReference*, "System.Xml", "XmlEntityReference");
// Dependencies System.Xml.XmlLinkedNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlEntityReference
class CORDL_TYPE XmlEntityReference : public ::System::Xml::XmlLinkedNode {
public:
// Declarations
 __declspec(property(get=get_BaseURI)) ::StringW  BaseURI;

 __declspec(property(get=get_ChildBaseURI)) ::StringW  ChildBaseURI;

 __declspec(property(get=get_IsContainer)) bool  IsContainer;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_LastNode, put=set_LastNode)) ::System::Xml::XmlLinkedNode*  LastNode;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NodeType)) ::System::Xml::XmlNodeType  NodeType;

 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

/// @brief Field lastChild, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastChild, put=__cordl_internal_set_lastChild)) ::System::Xml::XmlLinkedNode*  lastChild;

/// @brief Field name, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Method CloneNode, addr 0xabd517c, size 0x38, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* CloneNode(bool  deep) ;

/// @brief Method ConstructBaseURI, addr 0xabd5bac, size 0xd8, virtual false, abstract: false, final false
inline ::StringW ConstructBaseURI(::StringW  baseURI, ::StringW  systemId) ;

/// @brief Method IsValidChildType, addr 0xabd58a8, size 0x18, virtual true, abstract: false, final false
inline bool IsValidChildType(::System::Xml::XmlNodeType  type) ;

static inline ::System::Xml::XmlEntityReference* New_ctor(::StringW  name, ::System::Xml::XmlDocument*  doc) ;

/// @brief Method SetParent, addr 0xabd51c4, size 0xb8, virtual true, abstract: false, final false
inline void SetParent(::System::Xml::XmlNode*  node) ;

/// @brief Method SetParentForLoad, addr 0xabd5888, size 0x10, virtual true, abstract: false, final false
inline void SetParentForLoad(::System::Xml::XmlNode*  node) ;

/// @brief Method WriteContentTo, addr 0xabd58e8, size 0x294, virtual true, abstract: false, final false
inline void WriteContentTo(::System::Xml::XmlWriter*  w) ;

/// @brief Method WriteTo, addr 0xabd58c0, size 0x28, virtual true, abstract: false, final false
inline void WriteTo(::System::Xml::XmlWriter*  w) ;

constexpr ::System::Xml::XmlLinkedNode* const& __cordl_internal_get_lastChild() const;

constexpr ::System::Xml::XmlLinkedNode*& __cordl_internal_get_lastChild() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_lastChild(::System::Xml::XmlLinkedNode*  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0xabd0768, size 0xfc, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::System::Xml::XmlDocument*  doc) ;

/// @brief Method get_BaseURI, addr 0xabd5b7c, size 0x30, virtual true, abstract: false, final false
inline ::StringW get_BaseURI() ;

/// @brief Method get_ChildBaseURI, addr 0xabd5c84, size 0x9c, virtual false, abstract: false, final false
inline ::StringW get_ChildBaseURI() ;

/// @brief Method get_IsContainer, addr 0xabd51bc, size 0x8, virtual true, abstract: false, final false
inline bool get_IsContainer() ;

/// @brief Method get_IsReadOnly, addr 0xabd51b4, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_LastNode, addr 0xabd5898, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::XmlLinkedNode* get_LastNode() ;

/// @brief Method get_LocalName, addr 0xabd510c, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_LocalName() ;

/// @brief Method get_Name, addr 0xabd5104, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NodeType, addr 0xabd5174, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Value, addr 0xabd5114, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method set_LastNode, addr 0xabd58a0, size 0x8, virtual true, abstract: false, final false
inline void set_LastNode(::System::Xml::XmlLinkedNode*  value) ;

/// @brief Method set_Value, addr 0xabd511c, size 0x58, virtual true, abstract: false, final false
inline void set_Value(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlEntityReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlEntityReference", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlEntityReference(XmlEntityReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlEntityReference", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlEntityReference(XmlEntityReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14120};

/// @brief Field name, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field lastChild, offset: 0x28, size: 0x8, def value: None
 ::System::Xml::XmlLinkedNode*  ___lastChild;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlEntityReference, ___name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEntityReference, ___lastChild) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlEntityReference) == 0x30, "Size mismatch!");

} // namespace end def System::Xml
