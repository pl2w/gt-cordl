#pragma once
// IWYU pragma private; include "System/Xml/XmlWellFormedWriter_ElementScope.hpp"
#include "System/Xml/zzzz__XmlSpace_impl.hpp"
#include "System/Xml/zzzz__XmlWellFormedWriter_ElementScope_def.hpp"
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XmlWellFormedWriter_ElementScope.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlWellFormedWriter_ElementScope::*)(::StringW, ::StringW, ::StringW, int32_t)>(&::GlobalNamespace::XmlWellFormedWriter_ElementScope::Set)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xabb409c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlWellFormedWriter_ElementScope>(),
                        {"Set", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlWellFormedWriter_ElementScope.WriteEndElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlWellFormedWriter_ElementScope::*)(::System::Xml::XmlRawWriter*)>(&::GlobalNamespace::XmlWellFormedWriter_ElementScope::WriteEndElement)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xabb5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlWellFormedWriter_ElementScope>(),
                        {"WriteEndElement", {}, {::i2c::type_of<::System::Xml::XmlRawWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlWellFormedWriter_ElementScope.WriteFullEndElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlWellFormedWriter_ElementScope::*)(::System::Xml::XmlRawWriter*)>(&::GlobalNamespace::XmlWellFormedWriter_ElementScope::WriteFullEndElement)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xabb5b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlWellFormedWriter_ElementScope>(),
                        {"WriteFullEndElement", {}, {::i2c::type_of<::System::Xml::XmlRawWriter*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XmlWellFormedWriter_ElementScope::Set(::StringW  prefix, ::StringW  localName, ::StringW  namespaceUri, int32_t  prevNSTop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlWellFormedWriter_ElementScope>(),
                        {"Set", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, prefix, localName, namespaceUri, prevNSTop);
}
inline void GlobalNamespace::XmlWellFormedWriter_ElementScope::WriteEndElement(::System::Xml::XmlRawWriter*  rawWriter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlWellFormedWriter_ElementScope>(),
                        {"WriteEndElement", {}, {::i2c::type_of<::System::Xml::XmlRawWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rawWriter);
}
inline void GlobalNamespace::XmlWellFormedWriter_ElementScope::WriteFullEndElement(::System::Xml::XmlRawWriter*  rawWriter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlWellFormedWriter_ElementScope>(),
                        {"WriteFullEndElement", {}, {::i2c::type_of<::System::Xml::XmlRawWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rawWriter);
}
// Ctor Parameters [CppParam { name: "prevNSTop", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "xmlSpace", ty: "::System::Xml::XmlSpace", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "xmlLang", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlWellFormedWriter_ElementScope::XmlWellFormedWriter_ElementScope(int32_t  prevNSTop, ::StringW  prefix, ::StringW  localName, ::StringW  namespaceUri, ::System::Xml::XmlSpace  xmlSpace, ::StringW  xmlLang) noexcept  {
this->prevNSTop = prevNSTop;
this->prefix = prefix;
this->localName = localName;
this->namespaceUri = namespaceUri;
this->xmlSpace = xmlSpace;
this->xmlLang = xmlLang;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlWellFormedWriter_ElementScope::XmlWellFormedWriter_ElementScope()   {
}
