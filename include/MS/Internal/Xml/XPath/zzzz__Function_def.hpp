#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Function.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Function_FunctionType_def.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Function)
namespace GlobalNamespace {
struct AstNode_AstType;
}
namespace GlobalNamespace {
struct Function_FunctionType;
}
namespace MS::Internal::Xml::XPath {
class AstNode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Xml::XPath {
struct XPathResultType;
}
// Forward declare root types
namespace MS::Internal::Xml::XPath {
class Function;
}
// Write type traits
MARK_REF_T(::MS::Internal::Xml::XPath::Function*);
DEFINE_IL2CPP_CLASS(::MS::Internal::Xml::XPath::Function*, "MS.Internal.Xml.XPath", "Function");
// Dependencies MS.Internal.Xml.XPath.AstNode, MS.Internal.Xml.XPath.Function::FunctionType, System.Xml.XPath.XPathResultType
namespace MS::Internal::Xml::XPath {
// Is value type: false
// CS Name: MS.Internal.Xml.XPath.Function
class CORDL_TYPE Function : public ::MS::Internal::Xml::XPath::AstNode {
public:
// Declarations
using FunctionType = ::GlobalNamespace::Function_FunctionType;

 __declspec(property(get=get_ReturnType)) ::System::Xml::XPath::XPathResultType  ReturnType;

/// @brief Field ReturnTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReturnTypes, put=setStaticF_ReturnTypes)) ::ArrayW<::System::Xml::XPath::XPathResultType>  ReturnTypes;

 __declspec(property(get=get_Type)) ::GlobalNamespace::AstNode_AstType  Type;

/// @brief Field _argumentList, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__argumentList, put=__cordl_internal_set__argumentList)) ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*  _argumentList;

/// @brief Field _functionType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__functionType, put=__cordl_internal_set__functionType)) ::GlobalNamespace::Function_FunctionType  _functionType;

/// @brief Field _name, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _prefix, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__prefix, put=__cordl_internal_set__prefix)) ::StringW  _prefix;

static inline ::MS::Internal::Xml::XPath::Function* New_ctor(::GlobalNamespace::Function_FunctionType  ftype, ::MS::Internal::Xml::XPath::AstNode*  arg) ;

static inline ::MS::Internal::Xml::XPath::Function* New_ctor(::GlobalNamespace::Function_FunctionType  ftype, ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*  argumentList) ;

static inline ::MS::Internal::Xml::XPath::Function* New_ctor(::StringW  prefix, ::StringW  name, ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*  argumentList) ;

constexpr ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>* const& __cordl_internal_get__argumentList() const;

constexpr ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*& __cordl_internal_get__argumentList() ;

constexpr ::GlobalNamespace::Function_FunctionType const& __cordl_internal_get__functionType() const;

constexpr ::GlobalNamespace::Function_FunctionType& __cordl_internal_get__functionType() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr ::StringW const& __cordl_internal_get__prefix() const;

constexpr ::StringW& __cordl_internal_get__prefix() ;

constexpr void __cordl_internal_set__argumentList(::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*  value) ;

constexpr void __cordl_internal_set__functionType(::GlobalNamespace::Function_FunctionType  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__prefix(::StringW  value) ;

/// @brief Method .ctor, addr 0xab87b58, size 0x124, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Function_FunctionType  ftype, ::MS::Internal::Xml::XPath::AstNode*  arg) ;

/// @brief Method .ctor, addr 0xab879f0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Function_FunctionType  ftype, ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*  argumentList) ;

/// @brief Method .ctor, addr 0xab87a90, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::StringW  prefix, ::StringW  name, ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*  argumentList) ;

static inline ::ArrayW<::System::Xml::XPath::XPathResultType> getStaticF_ReturnTypes() ;

/// @brief Method get_ReturnType, addr 0xab87c84, size 0x80, virtual true, abstract: false, final false
inline ::System::Xml::XPath::XPathResultType get_ReturnType() ;

/// @brief Method get_Type, addr 0xab87c7c, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::AstNode_AstType get_Type() ;

static inline void setStaticF_ReturnTypes(::ArrayW<::System::Xml::XPath::XPathResultType>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Function() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Function", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Function(Function && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Function", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Function(Function const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14598};

/// @brief Field _functionType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::Function_FunctionType  ____functionType;

/// @brief Field _argumentList, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*  ____argumentList;

/// @brief Field _name, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field _prefix, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____prefix;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MS::Internal::Xml::XPath::Function, ____functionType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Function, ____argumentList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Function, ____name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Function, ____prefix) == 0x28, "Offset mismatch!");

static_assert(sizeof(::MS::Internal::Xml::XPath::Function) == 0x30, "Size mismatch!");

} // namespace end def MS::Internal::Xml::XPath
