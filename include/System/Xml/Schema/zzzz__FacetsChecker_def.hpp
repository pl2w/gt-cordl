#pragma once
// IWYU pragma private; include "System/Xml/Schema/FacetsChecker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FacetsChecker)
namespace GlobalNamespace {
struct FacetsChecker_FacetsCompiler;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Schema {
class DatatypeImplementation;
}
namespace System::Xml::Schema {
class RestrictionFacets;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Xml::Schema {
class FacetsChecker;
}
// Write type traits
MARK_REF_T(::System::Xml::Schema::FacetsChecker*);
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::FacetsChecker*, "System.Xml.Schema", "FacetsChecker");
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.FacetsChecker
class CORDL_TYPE FacetsChecker : public ::System::Object {
public:
// Declarations
using FacetsCompiler = ::GlobalNamespace::FacetsChecker_FacetsCompiler;

/// @brief Method CheckLexicalFacets, addr 0xaad9b50, size 0x44, virtual true, abstract: false, final false
inline ::System::Exception* CheckLexicalFacets(::by_ref<::StringW>  parseString, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckPatternFacets, addr 0xaad9c8c, size 0x150, virtual false, abstract: false, final false
inline ::System::Exception* CheckPatternFacets(::System::Xml::Schema::RestrictionFacets*  restriction, ::StringW  value) ;

/// @brief Method CheckValueFacets, addr 0xaad9e24, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(::ArrayW<uint8_t>  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0xaad9e1c, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(::StringW  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0xaad9e04, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(::System::DateTime  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0xaad9de4, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(::System::Decimal  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0xaad9ddc, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(::System::Object*  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0xaad9e2c, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(::System::TimeSpan  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0xaad9e34, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(::System::Xml::XmlQualifiedName*  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0xaad9e0c, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(double_t  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0xaad9e14, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(float_t  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0xaad9dfc, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(int16_t  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0xaad9df4, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(int32_t  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0xaad9dec, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(int64_t  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckWhitespaceFacets, addr 0xaad9b94, size 0xf8, virtual false, abstract: false, final false
inline void CheckWhitespaceFacets(::by_ref<::StringW>  s, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method ConstructRestriction, addr 0xaad9e44, size 0x470, virtual true, abstract: false, final false
inline ::System::Xml::Schema::RestrictionFacets* ConstructRestriction(::System::Xml::Schema::DatatypeImplementation*  datatype, ::System::Xml::Schema::XmlSchemaObjectCollection*  facets, ::System::Xml::XmlNameTable*  nameTable) ;

/// @brief Method MatchEnumeration, addr 0xaad9e3c, size 0x8, virtual true, abstract: false, final false
inline bool MatchEnumeration(::System::Object*  value, ::System::Collections::ArrayList*  enumeration, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

static inline ::System::Xml::Schema::FacetsChecker* New_ctor() ;

/// @brief Method Power, addr 0xaadc924, size 0x12c, virtual false, abstract: false, final false
static inline ::System::Decimal Power(int32_t  x, int32_t  y) ;

/// @brief Method .ctor, addr 0xaadca50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FacetsChecker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FacetsChecker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FacetsChecker(FacetsChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FacetsChecker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FacetsChecker(FacetsChecker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14410};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::Schema::FacetsChecker) == 0x10, "Size mismatch!");

} // namespace end def System::Xml::Schema
