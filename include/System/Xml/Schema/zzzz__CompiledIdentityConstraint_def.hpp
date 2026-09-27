#pragma once
// IWYU pragma private; include "System/Xml/Schema/CompiledIdentityConstraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Asttree_def.hpp"
#include "System/Xml/Schema/zzzz__CompiledIdentityConstraint_ConstraintRole_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(CompiledIdentityConstraint)
namespace GlobalNamespace {
struct CompiledIdentityConstraint_ConstraintRole;
}
namespace System::Xml::Schema {
class Asttree;
}
namespace System::Xml::Schema {
class XmlSchemaIdentityConstraint;
}
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class CompiledIdentityConstraint;
}
// Write type traits
MARK_REF_T(::System::Xml::Schema::CompiledIdentityConstraint*);
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::CompiledIdentityConstraint*, "System.Xml.Schema", "CompiledIdentityConstraint");
// Dependencies System.Object, System.Xml.Schema.Asttree, System.Xml.Schema.CompiledIdentityConstraint::ConstraintRole
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.CompiledIdentityConstraint
class CORDL_TYPE CompiledIdentityConstraint : public ::System::Object {
public:
// Declarations
using ConstraintRole = ::GlobalNamespace::CompiledIdentityConstraint_ConstraintRole;

/// @brief Field Empty, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Empty, put=setStaticF_Empty)) ::System::Xml::Schema::CompiledIdentityConstraint*  Empty;

 __declspec(property(get=get_Fields)) ::ArrayW<::System::Xml::Schema::Asttree*>  Fields;

 __declspec(property(get=get_Role)) ::GlobalNamespace::CompiledIdentityConstraint_ConstraintRole  Role;

 __declspec(property(get=get_Selector)) ::System::Xml::Schema::Asttree*  Selector;

/// @brief Field fields, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_fields, put=__cordl_internal_set_fields)) ::ArrayW<::System::Xml::Schema::Asttree*>  fields;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::System::Xml::XmlQualifiedName*  name;

/// @brief Field refer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_refer, put=__cordl_internal_set_refer)) ::System::Xml::XmlQualifiedName*  refer;

/// @brief Field role, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_role, put=__cordl_internal_set_role)) ::GlobalNamespace::CompiledIdentityConstraint_ConstraintRole  role;

/// @brief Field selector, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_selector, put=__cordl_internal_set_selector)) ::System::Xml::Schema::Asttree*  selector;

static inline ::System::Xml::Schema::CompiledIdentityConstraint* New_ctor() ;

static inline ::System::Xml::Schema::CompiledIdentityConstraint* New_ctor(::System::Xml::Schema::XmlSchemaIdentityConstraint*  constraint, ::System::Xml::XmlNamespaceManager*  nsmgr) ;

constexpr ::ArrayW<::System::Xml::Schema::Asttree*> const& __cordl_internal_get_fields() const;

constexpr ::ArrayW<::System::Xml::Schema::Asttree*>& __cordl_internal_get_fields() ;

constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_name() const;

constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_name() ;

constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_refer() const;

constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_refer() ;

constexpr ::GlobalNamespace::CompiledIdentityConstraint_ConstraintRole const& __cordl_internal_get_role() const;

constexpr ::GlobalNamespace::CompiledIdentityConstraint_ConstraintRole& __cordl_internal_get_role() ;

constexpr ::System::Xml::Schema::Asttree* const& __cordl_internal_get_selector() const;

constexpr ::System::Xml::Schema::Asttree*& __cordl_internal_get_selector() ;

constexpr void __cordl_internal_set_fields(::ArrayW<::System::Xml::Schema::Asttree*>  value) ;

constexpr void __cordl_internal_set_name(::System::Xml::XmlQualifiedName*  value) ;

constexpr void __cordl_internal_set_refer(::System::Xml::XmlQualifiedName*  value) ;

constexpr void __cordl_internal_set_role(::GlobalNamespace::CompiledIdentityConstraint_ConstraintRole  value) ;

constexpr void __cordl_internal_set_selector(::System::Xml::Schema::Asttree*  value) ;

/// @brief Method .ctor, addr 0xac2f87c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xac2f904, size 0x4ec, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::Schema::XmlSchemaIdentityConstraint*  constraint, ::System::Xml::XmlNamespaceManager*  nsmgr) ;

static inline ::System::Xml::Schema::CompiledIdentityConstraint* getStaticF_Empty() ;

/// @brief Method get_Fields, addr 0xac2f874, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::System::Xml::Schema::Asttree*> get_Fields() ;

/// @brief Method get_Role, addr 0xac2f864, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CompiledIdentityConstraint_ConstraintRole get_Role() ;

/// @brief Method get_Selector, addr 0xac2f86c, size 0x8, virtual false, abstract: false, final false
inline ::System::Xml::Schema::Asttree* get_Selector() ;

static inline void setStaticF_Empty(::System::Xml::Schema::CompiledIdentityConstraint*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CompiledIdentityConstraint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CompiledIdentityConstraint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CompiledIdentityConstraint(CompiledIdentityConstraint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CompiledIdentityConstraint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CompiledIdentityConstraint(CompiledIdentityConstraint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14307};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::System::Xml::XmlQualifiedName*  ___name;

/// @brief Field role, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::CompiledIdentityConstraint_ConstraintRole  ___role;

/// @brief Field selector, offset: 0x20, size: 0x8, def value: None
 ::System::Xml::Schema::Asttree*  ___selector;

/// @brief Field fields, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::System::Xml::Schema::Asttree*>  ___fields;

/// @brief Field refer, offset: 0x30, size: 0x8, def value: None
 ::System::Xml::XmlQualifiedName*  ___refer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::CompiledIdentityConstraint, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::CompiledIdentityConstraint, ___role) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::CompiledIdentityConstraint, ___selector) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::CompiledIdentityConstraint, ___fields) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::CompiledIdentityConstraint, ___refer) == 0x30, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Schema::CompiledIdentityConstraint) == 0x38, "Size mismatch!");

} // namespace end def System::Xml::Schema
