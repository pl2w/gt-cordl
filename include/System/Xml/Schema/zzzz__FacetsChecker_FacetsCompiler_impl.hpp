#pragma once
// IWYU pragma private; include "System/Xml/Schema/FacetsChecker_FacetsCompiler.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_FacetsCompiler_Map_impl.hpp"
#include "System/Xml/Schema/zzzz__RestrictionFlags_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_impl.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_FacetsCompiler_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/Schema/zzzz__DatatypeImplementation_def.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_FacetsCompiler_Map_def.hpp"
#include "System/Xml/Schema/zzzz__RestrictionFacets_def.hpp"
#include "System/Xml/Schema/zzzz__RestrictionFlags_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaFacet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaPatternFacet_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::DatatypeImplementation*, ::System::Xml::Schema::RestrictionFacets*)>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::_ctor)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xaada2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::Schema::DatatypeImplementation*>(), ::i2c::type_of<::System::Xml::Schema::RestrictionFacets*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.CompileLengthFacet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::CompileLengthFacet)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0xaada500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileLengthFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.CompileMinLengthFacet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::CompileMinLengthFacet)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0xaada854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileMinLengthFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.CompileMaxLengthFacet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::CompileMaxLengthFacet)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0xaadab6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileMaxLengthFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.CompilePatternFacet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaPatternFacet*)>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::CompilePatternFacet)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xaadae84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompilePatternFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaPatternFacet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.CompileEnumerationFacet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*, ::System::Xml::IXmlNamespaceResolver*, ::System::Xml::XmlNameTable*)>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::CompileEnumerationFacet)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xaadb008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileEnumerationFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.CompileWhitespaceFacet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::CompileWhitespaceFacet)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0xaadb160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileWhitespaceFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.CompileMaxInclusiveFacet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::CompileMaxInclusiveFacet)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xaadb870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileMaxInclusiveFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.CompileMaxExclusiveFacet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::CompileMaxExclusiveFacet)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xaadba40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileMaxExclusiveFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.CompileMinInclusiveFacet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::CompileMinInclusiveFacet)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xaadb4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileMinInclusiveFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.CompileMinExclusiveFacet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::CompileMinExclusiveFacet)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xaadb6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileMinExclusiveFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.CompileTotalDigitsFacet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::CompileTotalDigitsFacet)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0xaadbc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileTotalDigitsFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.CompileFractionDigitsFacet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::CompileFractionDigitsFacet)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xaadbf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileFractionDigitsFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.FinishFacetCompile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)()>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::FinishFacetCompile)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0xaadc1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"FinishFacetCompile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.CheckValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)(::System::Object*, ::System::Xml::Schema::XmlSchemaFacet*)>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::CheckValue)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0xaadccf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CheckValue", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.CompileFacetCombinations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)()>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::CompileFacetCombinations)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0xaadc548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileFacetCombinations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.CopyFacetsFromBaseType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)()>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::CopyFacetsFromBaseType)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0xaadd3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CopyFacetsFromBaseType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.ParseFacetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaDatatype*, ::System::Xml::Schema::XmlSchemaFacet*, ::StringW, ::System::Xml::IXmlNamespaceResolver*, ::System::Xml::XmlNameTable*)>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::ParseFacetValue)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xaadcb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"ParseFacetValue", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.Preprocess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::Preprocess)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xaadd18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"Preprocess", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.CheckProhibitedFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*, ::System::Xml::Schema::RestrictionFlags, ::StringW)>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::CheckProhibitedFlag)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaadca58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CheckProhibitedFlag", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>(), ::i2c::type_of<::System::Xml::Schema::RestrictionFlags>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.CheckDupFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*, ::System::Xml::Schema::RestrictionFlags, ::StringW)>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::CheckDupFlag)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaadcad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CheckDupFlag", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>(), ::i2c::type_of<::System::Xml::Schema::RestrictionFlags>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.SetFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*, ::System::Xml::Schema::RestrictionFlags)>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::SetFlag)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaadcc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"SetFlag", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>(), ::i2c::type_of<::System::Xml::Schema::RestrictionFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FacetsChecker_FacetsCompiler.SetFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::RestrictionFlags)>(&::GlobalNamespace::FacetsChecker_FacetsCompiler::SetFlag)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaadd7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"SetFlag", {}, {::i2c::type_of<::System::Xml::Schema::RestrictionFlags>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::setStaticF_c_map(::ArrayW<::GlobalNamespace::FacetsCompiler_FacetsChecker_Map>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::FacetsCompiler_FacetsChecker_Map>, "c_map", ::GlobalNamespace::FacetsChecker_FacetsCompiler>(std::forward<::ArrayW<::GlobalNamespace::FacetsCompiler_FacetsChecker_Map>>(value));
}
inline ::ArrayW<::GlobalNamespace::FacetsCompiler_FacetsChecker_Map> GlobalNamespace::FacetsChecker_FacetsCompiler::getStaticF_c_map()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::FacetsCompiler_FacetsChecker_Map>, "c_map", ::GlobalNamespace::FacetsChecker_FacetsCompiler>();
}
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::_ctor(::System::Xml::Schema::DatatypeImplementation*  baseDatatype, ::System::Xml::Schema::RestrictionFacets*  restriction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::Schema::DatatypeImplementation*>(), ::i2c::type_of<::System::Xml::Schema::RestrictionFacets*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, baseDatatype, restriction);
}
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::CompileLengthFacet(::System::Xml::Schema::XmlSchemaFacet*  facet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileLengthFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::CompileMinLengthFacet(::System::Xml::Schema::XmlSchemaFacet*  facet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileMinLengthFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::CompileMaxLengthFacet(::System::Xml::Schema::XmlSchemaFacet*  facet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileMaxLengthFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::CompilePatternFacet(::System::Xml::Schema::XmlSchemaPatternFacet*  facet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompilePatternFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaPatternFacet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::CompileEnumerationFacet(::System::Xml::Schema::XmlSchemaFacet*  facet, ::System::Xml::IXmlNamespaceResolver*  nsmgr, ::System::Xml::XmlNameTable*  nameTable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileEnumerationFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet, nsmgr, nameTable);
}
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::CompileWhitespaceFacet(::System::Xml::Schema::XmlSchemaFacet*  facet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileWhitespaceFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::CompileMaxInclusiveFacet(::System::Xml::Schema::XmlSchemaFacet*  facet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileMaxInclusiveFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::CompileMaxExclusiveFacet(::System::Xml::Schema::XmlSchemaFacet*  facet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileMaxExclusiveFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::CompileMinInclusiveFacet(::System::Xml::Schema::XmlSchemaFacet*  facet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileMinInclusiveFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::CompileMinExclusiveFacet(::System::Xml::Schema::XmlSchemaFacet*  facet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileMinExclusiveFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::CompileTotalDigitsFacet(::System::Xml::Schema::XmlSchemaFacet*  facet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileTotalDigitsFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::CompileFractionDigitsFacet(::System::Xml::Schema::XmlSchemaFacet*  facet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileFractionDigitsFacet", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::FinishFacetCompile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"FinishFacetCompile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::CheckValue(::System::Object*  value, ::System::Xml::Schema::XmlSchemaFacet*  facet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CheckValue", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, facet);
}
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::CompileFacetCombinations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CompileFacetCombinations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::CopyFacetsFromBaseType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CopyFacetsFromBaseType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::FacetsChecker_FacetsCompiler::ParseFacetValue(::System::Xml::Schema::XmlSchemaDatatype*  datatype, ::System::Xml::Schema::XmlSchemaFacet*  facet, ::StringW  code, ::System::Xml::IXmlNamespaceResolver*  nsmgr, ::System::Xml::XmlNameTable*  nameTable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"ParseFacetValue", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method, datatype, facet, code, nsmgr, nameTable);
}
inline ::StringW GlobalNamespace::FacetsChecker_FacetsCompiler::Preprocess(::StringW  pattern)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"Preprocess", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pattern);
}
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::CheckProhibitedFlag(::System::Xml::Schema::XmlSchemaFacet*  facet, ::System::Xml::Schema::RestrictionFlags  flag, ::StringW  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CheckProhibitedFlag", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>(), ::i2c::type_of<::System::Xml::Schema::RestrictionFlags>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet, flag, errorCode);
}
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::CheckDupFlag(::System::Xml::Schema::XmlSchemaFacet*  facet, ::System::Xml::Schema::RestrictionFlags  flag, ::StringW  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"CheckDupFlag", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>(), ::i2c::type_of<::System::Xml::Schema::RestrictionFlags>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet, flag, errorCode);
}
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::SetFlag(::System::Xml::Schema::XmlSchemaFacet*  facet, ::System::Xml::Schema::RestrictionFlags  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"SetFlag", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>(), ::i2c::type_of<::System::Xml::Schema::RestrictionFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet, flag);
}
inline void GlobalNamespace::FacetsChecker_FacetsCompiler::SetFlag(::System::Xml::Schema::RestrictionFlags  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FacetsChecker_FacetsCompiler>(),
                        {"SetFlag", {}, {::i2c::type_of<::System::Xml::Schema::RestrictionFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, flag);
}
// Ctor Parameters [CppParam { name: "datatype", ty: "::System::Xml::Schema::DatatypeImplementation*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "derivedRestriction", ty: "::System::Xml::Schema::RestrictionFacets*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "baseFlags", ty: "::System::Xml::Schema::RestrictionFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "baseFixedFlags", ty: "::System::Xml::Schema::RestrictionFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "validRestrictionFlags", ty: "::System::Xml::Schema::RestrictionFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nonNegativeInt", ty: "::System::Xml::Schema::XmlSchemaDatatype*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "builtInType", ty: "::System::Xml::Schema::XmlSchemaDatatype*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "builtInEnum", ty: "::System::Xml::Schema::XmlTypeCode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "firstPattern", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "regStr", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pattern_facet", ty: "::System::Xml::Schema::XmlSchemaPatternFacet*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FacetsChecker_FacetsCompiler::FacetsChecker_FacetsCompiler(::System::Xml::Schema::DatatypeImplementation*  datatype, ::System::Xml::Schema::RestrictionFacets*  derivedRestriction, ::System::Xml::Schema::RestrictionFlags  baseFlags, ::System::Xml::Schema::RestrictionFlags  baseFixedFlags, ::System::Xml::Schema::RestrictionFlags  validRestrictionFlags, ::System::Xml::Schema::XmlSchemaDatatype*  nonNegativeInt, ::System::Xml::Schema::XmlSchemaDatatype*  builtInType, ::System::Xml::Schema::XmlTypeCode  builtInEnum, bool  firstPattern, ::System::Text::StringBuilder*  regStr, ::System::Xml::Schema::XmlSchemaPatternFacet*  pattern_facet) noexcept  {
this->datatype = datatype;
this->derivedRestriction = derivedRestriction;
this->baseFlags = baseFlags;
this->baseFixedFlags = baseFixedFlags;
this->validRestrictionFlags = validRestrictionFlags;
this->nonNegativeInt = nonNegativeInt;
this->builtInType = builtInType;
this->builtInEnum = builtInEnum;
this->firstPattern = firstPattern;
this->regStr = regStr;
this->pattern_facet = pattern_facet;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FacetsChecker_FacetsCompiler::FacetsChecker_FacetsCompiler()   {
}
