#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/AstNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AstNode)
namespace GlobalNamespace {
struct AstNode_AstType;
}
namespace System::Xml::XPath {
struct XPathResultType;
}
// Forward declare root types
namespace MS::Internal::Xml::XPath {
class AstNode;
}
// Write type traits
MARK_REF_T(::MS::Internal::Xml::XPath::AstNode*);
DEFINE_IL2CPP_CLASS(::MS::Internal::Xml::XPath::AstNode*, "MS.Internal.Xml.XPath", "AstNode");
// Dependencies System.Object
namespace MS::Internal::Xml::XPath {
// Is value type: false
// CS Name: MS.Internal.Xml.XPath.AstNode
class CORDL_TYPE AstNode : public ::System::Object {
public:
// Declarations
using AstType = ::GlobalNamespace::AstNode_AstType;

 __declspec(property(get=get_ReturnType)) ::System::Xml::XPath::XPathResultType  ReturnType;

 __declspec(property(get=get_Type)) ::GlobalNamespace::AstNode_AstType  Type;

static inline ::MS::Internal::Xml::XPath::AstNode* New_ctor() ;

/// @brief Method .ctor, addr 0xab87868, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ReturnType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Xml::XPath::XPathResultType get_ReturnType() ;

/// @brief Method get_Type, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::GlobalNamespace::AstNode_AstType get_Type() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstNode(AstNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstNode(AstNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14593};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MS::Internal::Xml::XPath::AstNode) == 0x10, "Size mismatch!");

} // namespace end def MS::Internal::Xml::XPath
