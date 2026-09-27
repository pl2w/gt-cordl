#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaParticle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_Occurs_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(XmlSchemaParticle)
namespace GlobalNamespace {
class XmlSchemaParticle_EmptyParticle;
}
namespace GlobalNamespace {
struct XmlSchemaParticle_Occurs;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaParticle;
}
// Write type traits
MARK_REF_T(::System::Xml::Schema::XmlSchemaParticle*);
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::XmlSchemaParticle*, "System.Xml.Schema", "XmlSchemaParticle");
// Dependencies System.Decimal, System.Xml.Schema.XmlSchemaAnnotated, System.Xml.Schema.XmlSchemaParticle::Occurs
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaParticle
class CORDL_TYPE XmlSchemaParticle : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
// Declarations
using EmptyParticle = ::GlobalNamespace::XmlSchemaParticle_EmptyParticle;

using Occurs = ::GlobalNamespace::XmlSchemaParticle_Occurs;

/// @brief Field Empty, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Empty, put=setStaticF_Empty)) ::System::Xml::Schema::XmlSchemaParticle*  Empty;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

/// @brief [XmlIgnore]
 __declspec(property(get=get_MaxOccurs, put=set_MaxOccurs)) ::System::Decimal  MaxOccurs;

/// @brief [XmlAttribute("maxOccurs")]
 __declspec(property(get=get_MaxOccursString, put=set_MaxOccursString)) ::StringW  MaxOccursString;

/// @brief [XmlIgnore]
 __declspec(property(get=get_MinOccurs, put=set_MinOccurs)) ::System::Decimal  MinOccurs;

/// @brief [XmlAttribute("minOccurs")]
 __declspec(property(get=get_MinOccursString, put=set_MinOccursString)) ::StringW  MinOccursString;

 __declspec(property(get=get_NameString)) ::StringW  NameString;

/// @brief Field flags, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_flags, put=__cordl_internal_set_flags)) ::GlobalNamespace::XmlSchemaParticle_Occurs  flags;

/// @brief Field maxOccurs, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_maxOccurs, put=__cordl_internal_set_maxOccurs)) ::System::Decimal  maxOccurs;

/// @brief Field minOccurs, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_minOccurs, put=__cordl_internal_set_minOccurs)) ::System::Decimal  minOccurs;

/// @brief Method GetQualifiedName, addr 0xab41eb4, size 0x174, virtual false, abstract: false, final false
inline ::System::Xml::XmlQualifiedName* GetQualifiedName() ;

static inline ::System::Xml::Schema::XmlSchemaParticle* New_ctor() ;

constexpr ::GlobalNamespace::XmlSchemaParticle_Occurs const& __cordl_internal_get_flags() const;

constexpr ::GlobalNamespace::XmlSchemaParticle_Occurs& __cordl_internal_get_flags() ;

constexpr ::System::Decimal const& __cordl_internal_get_maxOccurs() const;

constexpr ::System::Decimal& __cordl_internal_get_maxOccurs() ;

constexpr ::System::Decimal const& __cordl_internal_get_minOccurs() const;

constexpr ::System::Decimal& __cordl_internal_get_minOccurs() ;

constexpr void __cordl_internal_set_flags(::GlobalNamespace::XmlSchemaParticle_Occurs  value) ;

constexpr void __cordl_internal_set_maxOccurs(::System::Decimal  value) ;

constexpr void __cordl_internal_set_minOccurs(::System::Decimal  value) ;

/// @brief Method .ctor, addr 0xab42028, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Xml::Schema::XmlSchemaParticle* getStaticF_Empty() ;

/// @brief Method get_IsEmpty, addr 0xab41e30, size 0x6c, virtual true, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_MaxOccurs, addr 0xab41cc0, size 0xc, virtual false, abstract: false, final false
inline ::System::Decimal get_MaxOccurs() ;

/// @brief Method get_MaxOccursString, addr 0xab41838, size 0x124, virtual false, abstract: false, final false
inline ::StringW get_MaxOccursString() ;

/// @brief Method get_MinOccurs, addr 0xab41b88, size 0xc, virtual false, abstract: false, final false
inline ::System::Decimal get_MinOccurs() ;

/// @brief Method get_MinOccursString, addr 0xab4166c, size 0x78, virtual false, abstract: false, final false
inline ::StringW get_MinOccursString() ;

/// @brief Method get_NameString, addr 0xab41e9c, size 0x18, virtual true, abstract: false, final false
inline ::StringW get_NameString() ;

static inline void setStaticF_Empty(::System::Xml::Schema::XmlSchemaParticle*  value) ;

/// @brief Method set_MaxOccurs, addr 0xab41ccc, size 0x164, virtual false, abstract: false, final false
inline void set_MaxOccurs(::System::Decimal  value) ;

/// @brief Method set_MaxOccursString, addr 0xab4195c, size 0x22c, virtual false, abstract: false, final false
inline void set_MaxOccursString(::StringW  value) ;

/// @brief Method set_MinOccurs, addr 0xab41b94, size 0x12c, virtual false, abstract: false, final false
inline void set_MinOccurs(::System::Decimal  value) ;

/// @brief Method set_MinOccursString, addr 0xab416e4, size 0x154, virtual false, abstract: false, final false
inline void set_MinOccursString(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSchemaParticle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaParticle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSchemaParticle(XmlSchemaParticle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaParticle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSchemaParticle(XmlSchemaParticle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14537};

/// @brief Field minOccurs, offset: 0x50, size: 0x10, def value: None
 ::System::Decimal  ___minOccurs;

/// @brief Field maxOccurs, offset: 0x60, size: 0x10, def value: None
 ::System::Decimal  ___maxOccurs;

/// @brief Field flags, offset: 0x70, size: 0x4, def value: None
 ::GlobalNamespace::XmlSchemaParticle_Occurs  ___flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaParticle, ___minOccurs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaParticle, ___maxOccurs) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaParticle, ___flags) == 0x70, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Schema::XmlSchemaParticle) == 0x78, "Size mismatch!");

} // namespace end def System::Xml::Schema
