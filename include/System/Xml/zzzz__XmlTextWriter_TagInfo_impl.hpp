#pragma once
// IWYU pragma private; include "System/Xml/XmlTextWriter_TagInfo.hpp"
#include "System/Xml/zzzz__XmlSpace_impl.hpp"
#include "System/Xml/zzzz__XmlTextWriter_NamespaceState_impl.hpp"
#include "System/Xml/zzzz__XmlTextWriter_TagInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XmlTextWriter_TagInfo.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlTextWriter_TagInfo::*)(int32_t)>(&::GlobalNamespace::XmlTextWriter_TagInfo::Init)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xaba95f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlTextWriter_TagInfo>(),
                        {"Init", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XmlTextWriter_TagInfo::Init(int32_t  nsTop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlTextWriter_TagInfo>(),
                        {"Init", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nsTop);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "defaultNs", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "defaultNsState", ty: "::GlobalNamespace::XmlTextWriter_NamespaceState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "xmlSpace", ty: "::System::Xml::XmlSpace", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "xmlLang", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prevNsTop", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prefixCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mixed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlTextWriter_TagInfo::XmlTextWriter_TagInfo(::StringW  name, ::StringW  prefix, ::StringW  defaultNs, ::GlobalNamespace::XmlTextWriter_NamespaceState  defaultNsState, ::System::Xml::XmlSpace  xmlSpace, ::StringW  xmlLang, int32_t  prevNsTop, int32_t  prefixCount, bool  mixed) noexcept  {
this->name = name;
this->prefix = prefix;
this->defaultNs = defaultNs;
this->defaultNsState = defaultNsState;
this->xmlSpace = xmlSpace;
this->xmlLang = xmlLang;
this->prevNsTop = prevNsTop;
this->prefixCount = prefixCount;
this->mixed = mixed;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlTextWriter_TagInfo::XmlTextWriter_TagInfo()   {
}
