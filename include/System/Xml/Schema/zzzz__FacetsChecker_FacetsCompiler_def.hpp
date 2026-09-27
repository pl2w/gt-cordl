#pragma once
// IWYU pragma private; include "System/Xml/Schema/FacetsChecker_FacetsCompiler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__FacetsChecker_FacetsCompiler_Map_def.hpp"
#include "System/Xml/Schema/zzzz__RestrictionFlags_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FacetsChecker_FacetsCompiler)
namespace GlobalNamespace {
struct FacetsCompiler_FacetsChecker_Map;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Schema {
class DatatypeImplementation;
}
namespace System::Xml::Schema {
class RestrictionFacets;
}
namespace System::Xml::Schema {
struct RestrictionFlags;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
class XmlSchemaFacet;
}
namespace System::Xml::Schema {
class XmlSchemaPatternFacet;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct FacetsChecker_FacetsCompiler;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FacetsChecker_FacetsCompiler);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FacetsChecker_FacetsCompiler, "System.Xml.Schema", "FacetsChecker/FacetsCompiler");
// Dependencies System.Xml.Schema.FacetsChecker::FacetsCompiler::Map, System.Xml.Schema.RestrictionFlags, System.Xml.Schema.XmlTypeCode
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.Schema.FacetsChecker/FacetsCompiler
struct CORDL_TYPE FacetsChecker_FacetsCompiler {
public:
// Declarations
using Map = ::GlobalNamespace::FacetsCompiler_FacetsChecker_Map;

/// @brief Field c_map, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_c_map, put=setStaticF_c_map)) ::ArrayW<::GlobalNamespace::FacetsCompiler_FacetsChecker_Map>  c_map;

/// @brief Method CheckDupFlag, addr 0xaadcad8, size 0x70, virtual false, abstract: false, final false
inline void CheckDupFlag(::System::Xml::Schema::XmlSchemaFacet*  facet, ::System::Xml::Schema::RestrictionFlags  flag, ::StringW  errorCode) ;

/// @brief Method CheckProhibitedFlag, addr 0xaadca58, size 0x80, virtual false, abstract: false, final false
inline void CheckProhibitedFlag(::System::Xml::Schema::XmlSchemaFacet*  facet, ::System::Xml::Schema::RestrictionFlags  flag, ::StringW  errorCode) ;

/// @brief Method CheckValue, addr 0xaadccf4, size 0x498, virtual false, abstract: false, final false
inline void CheckValue(::System::Object*  value, ::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CompileEnumerationFacet, addr 0xaadb008, size 0x158, virtual false, abstract: false, final false
inline void CompileEnumerationFacet(::System::Xml::Schema::XmlSchemaFacet*  facet, ::System::Xml::IXmlNamespaceResolver*  nsmgr, ::System::Xml::XmlNameTable*  nameTable) ;

/// @brief Method CompileFacetCombinations, addr 0xaadc548, size 0x3dc, virtual false, abstract: false, final false
inline void CompileFacetCombinations() ;

/// @brief Method CompileFractionDigitsFacet, addr 0xaadbf20, size 0x2b4, virtual false, abstract: false, final false
inline void CompileFractionDigitsFacet(::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CompileLengthFacet, addr 0xaada500, size 0x354, virtual false, abstract: false, final false
inline void CompileLengthFacet(::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CompileMaxExclusiveFacet, addr 0xaadba40, size 0x1d0, virtual false, abstract: false, final false
inline void CompileMaxExclusiveFacet(::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CompileMaxInclusiveFacet, addr 0xaadb870, size 0x1d0, virtual false, abstract: false, final false
inline void CompileMaxInclusiveFacet(::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CompileMaxLengthFacet, addr 0xaadab6c, size 0x318, virtual false, abstract: false, final false
inline void CompileMaxLengthFacet(::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CompileMinExclusiveFacet, addr 0xaadb6a0, size 0x1d0, virtual false, abstract: false, final false
inline void CompileMinExclusiveFacet(::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CompileMinInclusiveFacet, addr 0xaadb4d0, size 0x1d0, virtual false, abstract: false, final false
inline void CompileMinInclusiveFacet(::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CompileMinLengthFacet, addr 0xaada854, size 0x318, virtual false, abstract: false, final false
inline void CompileMinLengthFacet(::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CompilePatternFacet, addr 0xaadae84, size 0x184, virtual false, abstract: false, final false
inline void CompilePatternFacet(::System::Xml::Schema::XmlSchemaPatternFacet*  facet) ;

/// @brief Method CompileTotalDigitsFacet, addr 0xaadbc10, size 0x310, virtual false, abstract: false, final false
inline void CompileTotalDigitsFacet(::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CompileWhitespaceFacet, addr 0xaadb160, size 0x370, virtual false, abstract: false, final false
inline void CompileWhitespaceFacet(::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CopyFacetsFromBaseType, addr 0xaadd3e8, size 0x40c, virtual false, abstract: false, final false
inline void CopyFacetsFromBaseType() ;

/// @brief Method FinishFacetCompile, addr 0xaadc1d4, size 0x374, virtual false, abstract: false, final false
inline void FinishFacetCompile() ;

/// @brief Method ParseFacetValue, addr 0xaadcb48, size 0x144, virtual false, abstract: false, final false
inline ::System::Object* ParseFacetValue(::System::Xml::Schema::XmlSchemaDatatype*  datatype, ::System::Xml::Schema::XmlSchemaFacet*  facet, ::StringW  code, ::System::Xml::IXmlNamespaceResolver*  nsmgr, ::System::Xml::XmlNameTable*  nameTable) ;

/// @brief Method Preprocess, addr 0xaadd18c, size 0x25c, virtual false, abstract: false, final false
static inline ::StringW Preprocess(::StringW  pattern) ;

/// @brief Method SetFlag, addr 0xaadcc8c, size 0x68, virtual false, abstract: false, final false
inline void SetFlag(::System::Xml::Schema::XmlSchemaFacet*  facet, ::System::Xml::Schema::RestrictionFlags  flag) ;

/// @brief Method SetFlag, addr 0xaadd7f4, size 0x38, virtual false, abstract: false, final false
inline void SetFlag(::System::Xml::Schema::RestrictionFlags  flag) ;

/// @brief Method .ctor, addr 0xaada2b4, size 0x24c, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::Schema::DatatypeImplementation*  baseDatatype, ::System::Xml::Schema::RestrictionFacets*  restriction) ;

static inline ::ArrayW<::GlobalNamespace::FacetsCompiler_FacetsChecker_Map> getStaticF_c_map() ;

static inline void setStaticF_c_map(::ArrayW<::GlobalNamespace::FacetsCompiler_FacetsChecker_Map>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FacetsChecker_FacetsCompiler() ;

// Ctor Parameters [CppParam { name: "datatype", ty: "::System::Xml::Schema::DatatypeImplementation*", modifiers: "", def_value: None, comment: None }, CppParam { name: "derivedRestriction", ty: "::System::Xml::Schema::RestrictionFacets*", modifiers: "", def_value: None, comment: None }, CppParam { name: "baseFlags", ty: "::System::Xml::Schema::RestrictionFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "baseFixedFlags", ty: "::System::Xml::Schema::RestrictionFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "validRestrictionFlags", ty: "::System::Xml::Schema::RestrictionFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "nonNegativeInt", ty: "::System::Xml::Schema::XmlSchemaDatatype*", modifiers: "", def_value: None, comment: None }, CppParam { name: "builtInType", ty: "::System::Xml::Schema::XmlSchemaDatatype*", modifiers: "", def_value: None, comment: None }, CppParam { name: "builtInEnum", ty: "::System::Xml::Schema::XmlTypeCode", modifiers: "", def_value: None, comment: None }, CppParam { name: "firstPattern", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "regStr", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: None, comment: None }, CppParam { name: "pattern_facet", ty: "::System::Xml::Schema::XmlSchemaPatternFacet*", modifiers: "", def_value: None, comment: None }]
constexpr FacetsChecker_FacetsCompiler(::System::Xml::Schema::DatatypeImplementation*  datatype, ::System::Xml::Schema::RestrictionFacets*  derivedRestriction, ::System::Xml::Schema::RestrictionFlags  baseFlags, ::System::Xml::Schema::RestrictionFlags  baseFixedFlags, ::System::Xml::Schema::RestrictionFlags  validRestrictionFlags, ::System::Xml::Schema::XmlSchemaDatatype*  nonNegativeInt, ::System::Xml::Schema::XmlSchemaDatatype*  builtInType, ::System::Xml::Schema::XmlTypeCode  builtInEnum, bool  firstPattern, ::System::Text::StringBuilder*  regStr, ::System::Xml::Schema::XmlSchemaPatternFacet*  pattern_facet) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14409};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field datatype, offset: 0x0, size: 0x8, def value: None
 ::System::Xml::Schema::DatatypeImplementation*  datatype;

/// @brief Field derivedRestriction, offset: 0x8, size: 0x8, def value: None
 ::System::Xml::Schema::RestrictionFacets*  derivedRestriction;

/// @brief Field baseFlags, offset: 0x10, size: 0x4, def value: None
 ::System::Xml::Schema::RestrictionFlags  baseFlags;

/// @brief Field baseFixedFlags, offset: 0x14, size: 0x4, def value: None
 ::System::Xml::Schema::RestrictionFlags  baseFixedFlags;

/// @brief Field validRestrictionFlags, offset: 0x18, size: 0x4, def value: None
 ::System::Xml::Schema::RestrictionFlags  validRestrictionFlags;

/// @brief Field nonNegativeInt, offset: 0x20, size: 0x8, def value: None
 ::System::Xml::Schema::XmlSchemaDatatype*  nonNegativeInt;

/// @brief Field builtInType, offset: 0x28, size: 0x8, def value: None
 ::System::Xml::Schema::XmlSchemaDatatype*  builtInType;

/// @brief Field builtInEnum, offset: 0x30, size: 0x4, def value: None
 ::System::Xml::Schema::XmlTypeCode  builtInEnum;

/// @brief Field firstPattern, offset: 0x34, size: 0x1, def value: None
 bool  firstPattern;

/// @brief Field regStr, offset: 0x38, size: 0x8, def value: None
 ::System::Text::StringBuilder*  regStr;

/// @brief Field pattern_facet, offset: 0x40, size: 0x8, def value: None
 ::System::Xml::Schema::XmlSchemaPatternFacet*  pattern_facet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FacetsChecker_FacetsCompiler, datatype) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FacetsChecker_FacetsCompiler, derivedRestriction) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FacetsChecker_FacetsCompiler, baseFlags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FacetsChecker_FacetsCompiler, baseFixedFlags) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FacetsChecker_FacetsCompiler, validRestrictionFlags) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FacetsChecker_FacetsCompiler, nonNegativeInt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FacetsChecker_FacetsCompiler, builtInType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FacetsChecker_FacetsCompiler, builtInEnum) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FacetsChecker_FacetsCompiler, firstPattern) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FacetsChecker_FacetsCompiler, regStr) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FacetsChecker_FacetsCompiler, pattern_facet) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FacetsChecker_FacetsCompiler) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
