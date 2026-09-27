#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Axis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Axis_AxisType_def.hpp"
#include "System/Xml/XPath/zzzz__XPathNodeType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Axis)
namespace GlobalNamespace {
struct AstNode_AstType;
}
namespace GlobalNamespace {
struct Axis_AxisType;
}
namespace MS::Internal::Xml::XPath {
class AstNode;
}
namespace System::Xml::XPath {
struct XPathNodeType;
}
namespace System::Xml::XPath {
struct XPathResultType;
}
// Forward declare root types
namespace MS::Internal::Xml::XPath {
class Axis;
}
// Write type traits
MARK_REF_T(::MS::Internal::Xml::XPath::Axis*);
DEFINE_IL2CPP_CLASS(::MS::Internal::Xml::XPath::Axis*, "MS.Internal.Xml.XPath", "Axis");
// Dependencies MS.Internal.Xml.XPath.AstNode, MS.Internal.Xml.XPath.Axis::AxisType, System.Xml.XPath.XPathNodeType
namespace MS::Internal::Xml::XPath {
// Is value type: false
// CS Name: MS.Internal.Xml.XPath.Axis
class CORDL_TYPE Axis : public ::MS::Internal::Xml::XPath::AstNode {
public:
// Declarations
using AxisType = ::GlobalNamespace::Axis_AxisType;

 __declspec(property(get=get_AbbrAxis)) bool  AbbrAxis;

 __declspec(property(get=get_Input, put=set_Input)) ::MS::Internal::Xml::XPath::AstNode*  Input;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NodeType)) ::System::Xml::XPath::XPathNodeType  NodeType;

 __declspec(property(get=get_Prefix)) ::StringW  Prefix;

 __declspec(property(get=get_ReturnType)) ::System::Xml::XPath::XPathResultType  ReturnType;

 __declspec(property(get=get_Type)) ::GlobalNamespace::AstNode_AstType  Type;

 __declspec(property(get=get_TypeOfAxis)) ::GlobalNamespace::Axis_AxisType  TypeOfAxis;

 __declspec(property(get=get_Urn, put=set_Urn)) ::StringW  Urn;

/// @brief Field _axisType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__axisType, put=__cordl_internal_set__axisType)) ::GlobalNamespace::Axis_AxisType  _axisType;

/// @brief Field _input, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__input, put=__cordl_internal_set__input)) ::MS::Internal::Xml::XPath::AstNode*  _input;

/// @brief Field _name, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _nodeType, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__nodeType, put=__cordl_internal_set__nodeType)) ::System::Xml::XPath::XPathNodeType  _nodeType;

/// @brief Field _prefix, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__prefix, put=__cordl_internal_set__prefix)) ::StringW  _prefix;

/// @brief Field _urn, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__urn, put=__cordl_internal_set__urn)) ::StringW  _urn;

/// @brief Field abbrAxis, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_abbrAxis, put=__cordl_internal_set_abbrAxis)) bool  abbrAxis;

static inline ::MS::Internal::Xml::XPath::Axis* New_ctor(::GlobalNamespace::Axis_AxisType  axisType, ::MS::Internal::Xml::XPath::AstNode*  input) ;

static inline ::MS::Internal::Xml::XPath::Axis* New_ctor(::GlobalNamespace::Axis_AxisType  axisType, ::MS::Internal::Xml::XPath::AstNode*  input, ::StringW  prefix, ::StringW  name, ::System::Xml::XPath::XPathNodeType  nodetype) ;

constexpr ::GlobalNamespace::Axis_AxisType const& __cordl_internal_get__axisType() const;

constexpr ::GlobalNamespace::Axis_AxisType& __cordl_internal_get__axisType() ;

constexpr ::MS::Internal::Xml::XPath::AstNode* const& __cordl_internal_get__input() const;

constexpr ::MS::Internal::Xml::XPath::AstNode*& __cordl_internal_get__input() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr ::System::Xml::XPath::XPathNodeType const& __cordl_internal_get__nodeType() const;

constexpr ::System::Xml::XPath::XPathNodeType& __cordl_internal_get__nodeType() ;

constexpr ::StringW const& __cordl_internal_get__prefix() const;

constexpr ::StringW& __cordl_internal_get__prefix() ;

constexpr ::StringW const& __cordl_internal_get__urn() const;

constexpr ::StringW& __cordl_internal_get__urn() ;

constexpr bool const& __cordl_internal_get_abbrAxis() const;

constexpr bool& __cordl_internal_get_abbrAxis() ;

constexpr void __cordl_internal_set__axisType(::GlobalNamespace::Axis_AxisType  value) ;

constexpr void __cordl_internal_set__input(::MS::Internal::Xml::XPath::AstNode*  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__nodeType(::System::Xml::XPath::XPathNodeType  value) ;

constexpr void __cordl_internal_set__prefix(::StringW  value) ;

constexpr void __cordl_internal_set__urn(::StringW  value) ;

constexpr void __cordl_internal_set_abbrAxis(bool  value) ;

/// @brief Method .ctor, addr 0xab8790c, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Axis_AxisType  axisType, ::MS::Internal::Xml::XPath::AstNode*  input) ;

/// @brief Method .ctor, addr 0xab87870, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Axis_AxisType  axisType, ::MS::Internal::Xml::XPath::AstNode*  input, ::StringW  prefix, ::StringW  name, ::System::Xml::XPath::XPathNodeType  nodetype) ;

/// @brief Method get_AbbrAxis, addr 0xab87984, size 0x8, virtual false, abstract: false, final false
inline bool get_AbbrAxis() ;

/// @brief Method get_Input, addr 0xab87954, size 0x8, virtual false, abstract: false, final false
inline ::MS::Internal::Xml::XPath::AstNode* get_Input() ;

/// @brief Method get_Name, addr 0xab8796c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NodeType, addr 0xab87974, size 0x8, virtual false, abstract: false, final false
inline ::System::Xml::XPath::XPathNodeType get_NodeType() ;

/// @brief Method get_Prefix, addr 0xab87964, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Prefix() ;

/// @brief Method get_ReturnType, addr 0xab8794c, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::XPath::XPathResultType get_ReturnType() ;

/// @brief Method get_Type, addr 0xab87944, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::AstNode_AstType get_Type() ;

/// @brief Method get_TypeOfAxis, addr 0xab8797c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Axis_AxisType get_TypeOfAxis() ;

/// @brief Method get_Urn, addr 0xab8798c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Urn() ;

/// @brief Method set_Input, addr 0xab8795c, size 0x8, virtual false, abstract: false, final false
inline void set_Input(::MS::Internal::Xml::XPath::AstNode*  value) ;

/// @brief Method set_Urn, addr 0xab87994, size 0x8, virtual false, abstract: false, final false
inline void set_Urn(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Axis() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Axis", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Axis(Axis && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Axis", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Axis(Axis const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14595};

/// @brief Field _axisType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::Axis_AxisType  ____axisType;

/// @brief Field _input, offset: 0x18, size: 0x8, def value: None
 ::MS::Internal::Xml::XPath::AstNode*  ____input;

/// @brief Field _prefix, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____prefix;

/// @brief Field _name, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field _nodeType, offset: 0x30, size: 0x4, def value: None
 ::System::Xml::XPath::XPathNodeType  ____nodeType;

/// @brief Field abbrAxis, offset: 0x34, size: 0x1, def value: None
 bool  ___abbrAxis;

/// @brief Field _urn, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____urn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MS::Internal::Xml::XPath::Axis, ____axisType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Axis, ____input) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Axis, ____prefix) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Axis, ____name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Axis, ____nodeType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Axis, ___abbrAxis) == 0x34, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Axis, ____urn) == 0x38, "Offset mismatch!");

static_assert(sizeof(::MS::Internal::Xml::XPath::Axis) == 0x40, "Size mismatch!");

} // namespace end def MS::Internal::Xml::XPath
