#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Operator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Operator_Op_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(Operator)
namespace GlobalNamespace {
struct AstNode_AstType;
}
namespace GlobalNamespace {
struct Operator_Op;
}
namespace MS::Internal::Xml::XPath {
class AstNode;
}
namespace System::Xml::XPath {
struct XPathResultType;
}
// Forward declare root types
namespace MS::Internal::Xml::XPath {
class Operator;
}
// Write type traits
MARK_REF_T(::MS::Internal::Xml::XPath::Operator*);
DEFINE_IL2CPP_CLASS(::MS::Internal::Xml::XPath::Operator*, "MS.Internal.Xml.XPath", "Operator");
// Dependencies MS.Internal.Xml.XPath.AstNode, MS.Internal.Xml.XPath.Operator::Op
namespace MS::Internal::Xml::XPath {
// Is value type: false
// CS Name: MS.Internal.Xml.XPath.Operator
class CORDL_TYPE Operator : public ::MS::Internal::Xml::XPath::AstNode {
public:
// Declarations
using Op = ::GlobalNamespace::Operator_Op;

 __declspec(property(get=get_ReturnType)) ::System::Xml::XPath::XPathResultType  ReturnType;

 __declspec(property(get=get_Type)) ::GlobalNamespace::AstNode_AstType  Type;

/// @brief Field _opType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__opType, put=__cordl_internal_set__opType)) ::GlobalNamespace::Operator_Op  _opType;

/// @brief Field _opnd1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__opnd1, put=__cordl_internal_set__opnd1)) ::MS::Internal::Xml::XPath::AstNode*  _opnd1;

/// @brief Field _opnd2, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__opnd2, put=__cordl_internal_set__opnd2)) ::MS::Internal::Xml::XPath::AstNode*  _opnd2;

/// @brief Field s_invertOp, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_invertOp, put=setStaticF_s_invertOp)) ::ArrayW<::GlobalNamespace::Operator_Op>  s_invertOp;

static inline ::MS::Internal::Xml::XPath::Operator* New_ctor(::GlobalNamespace::Operator_Op  op, ::MS::Internal::Xml::XPath::AstNode*  opnd1, ::MS::Internal::Xml::XPath::AstNode*  opnd2) ;

constexpr ::GlobalNamespace::Operator_Op const& __cordl_internal_get__opType() const;

constexpr ::GlobalNamespace::Operator_Op& __cordl_internal_get__opType() ;

constexpr ::MS::Internal::Xml::XPath::AstNode* const& __cordl_internal_get__opnd1() const;

constexpr ::MS::Internal::Xml::XPath::AstNode*& __cordl_internal_get__opnd1() ;

constexpr ::MS::Internal::Xml::XPath::AstNode* const& __cordl_internal_get__opnd2() const;

constexpr ::MS::Internal::Xml::XPath::AstNode*& __cordl_internal_get__opnd2() ;

constexpr void __cordl_internal_set__opType(::GlobalNamespace::Operator_Op  value) ;

constexpr void __cordl_internal_set__opnd1(::MS::Internal::Xml::XPath::AstNode*  value) ;

constexpr void __cordl_internal_set__opnd2(::MS::Internal::Xml::XPath::AstNode*  value) ;

/// @brief Method .ctor, addr 0xab87e7c, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Operator_Op  op, ::MS::Internal::Xml::XPath::AstNode*  opnd1, ::MS::Internal::Xml::XPath::AstNode*  opnd2) ;

static inline ::ArrayW<::GlobalNamespace::Operator_Op> getStaticF_s_invertOp() ;

/// @brief Method get_ReturnType, addr 0xab87ed8, size 0x20, virtual true, abstract: false, final false
inline ::System::Xml::XPath::XPathResultType get_ReturnType() ;

/// @brief Method get_Type, addr 0xab87ed0, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::AstNode_AstType get_Type() ;

static inline void setStaticF_s_invertOp(::ArrayW<::GlobalNamespace::Operator_Op>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Operator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Operator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Operator(Operator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Operator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Operator(Operator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14602};

/// @brief Field _opType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::Operator_Op  ____opType;

/// @brief Field _opnd1, offset: 0x18, size: 0x8, def value: None
 ::MS::Internal::Xml::XPath::AstNode*  ____opnd1;

/// @brief Field _opnd2, offset: 0x20, size: 0x8, def value: None
 ::MS::Internal::Xml::XPath::AstNode*  ____opnd2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MS::Internal::Xml::XPath::Operator, ____opType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Operator, ____opnd1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Operator, ____opnd2) == 0x20, "Offset mismatch!");

static_assert(sizeof(::MS::Internal::Xml::XPath::Operator) == 0x28, "Size mismatch!");

} // namespace end def MS::Internal::Xml::XPath
