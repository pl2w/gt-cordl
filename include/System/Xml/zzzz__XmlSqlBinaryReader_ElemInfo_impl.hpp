#pragma once
// IWYU pragma private; include "System/Xml/XmlSqlBinaryReader_ElemInfo.hpp"
#include "System/Xml/zzzz__XmlSpace_impl.hpp"
#include "System/Xml/zzzz__XmlSqlBinaryReader_QName_impl.hpp"
#include "System/Xml/zzzz__XmlSqlBinaryReader_ElemInfo_def.hpp"
#include "System/Xml/zzzz__XmlSqlBinaryReader_QName_def.hpp"
#include "System/Xml/zzzz__XmlSqlBinaryReader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XmlSqlBinaryReader_ElemInfo.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlSqlBinaryReader_ElemInfo::*)(::GlobalNamespace::XmlSqlBinaryReader_QName, bool)>(&::GlobalNamespace::XmlSqlBinaryReader_ElemInfo::Set)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaab5d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSqlBinaryReader_ElemInfo>(),
                        {"Set", {}, {::i2c::type_of<::GlobalNamespace::XmlSqlBinaryReader_QName>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlSqlBinaryReader_ElemInfo.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlSqlBinaryReader_NamespaceDecl* (::GlobalNamespace::XmlSqlBinaryReader_ElemInfo::*)()>(&::GlobalNamespace::XmlSqlBinaryReader_ElemInfo::Clear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaab5d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSqlBinaryReader_ElemInfo>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XmlSqlBinaryReader_ElemInfo::Set(::GlobalNamespace::XmlSqlBinaryReader_QName  name, bool  xmlspacePreserve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSqlBinaryReader_ElemInfo>(),
                        {"Set", {}, {::i2c::type_of<::GlobalNamespace::XmlSqlBinaryReader_QName>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, xmlspacePreserve);
}
inline ::System::Xml::XmlSqlBinaryReader_NamespaceDecl* GlobalNamespace::XmlSqlBinaryReader_ElemInfo::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSqlBinaryReader_ElemInfo>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSqlBinaryReader_NamespaceDecl*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "name", ty: "::GlobalNamespace::XmlSqlBinaryReader_QName", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "xmlLang", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "xmlSpace", ty: "::System::Xml::XmlSpace", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "xmlspacePreserve", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nsdecls", ty: "::System::Xml::XmlSqlBinaryReader_NamespaceDecl*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlSqlBinaryReader_ElemInfo::XmlSqlBinaryReader_ElemInfo(::GlobalNamespace::XmlSqlBinaryReader_QName  name, ::StringW  xmlLang, ::System::Xml::XmlSpace  xmlSpace, bool  xmlspacePreserve, ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*  nsdecls) noexcept  {
this->name = name;
this->xmlLang = xmlLang;
this->xmlSpace = xmlSpace;
this->xmlspacePreserve = xmlspacePreserve;
this->nsdecls = nsdecls;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlSqlBinaryReader_ElemInfo::XmlSqlBinaryReader_ElemInfo()   {
}
