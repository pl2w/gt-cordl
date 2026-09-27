#pragma once
// IWYU pragma private; include "System/Xml/XmlWellFormedWriter_Namespace.hpp"
#include "System/Xml/zzzz__XmlWellFormedWriter_NamespaceKind_impl.hpp"
#include "System/Xml/zzzz__XmlWellFormedWriter_Namespace_def.hpp"
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
#include "System/Xml/zzzz__XmlWellFormedWriter_NamespaceKind_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XmlWellFormedWriter_Namespace.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlWellFormedWriter_Namespace::*)(::StringW, ::StringW, ::GlobalNamespace::XmlWellFormedWriter_NamespaceKind)>(&::GlobalNamespace::XmlWellFormedWriter_Namespace::Set)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xabb405c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlWellFormedWriter_Namespace>(),
                        {"Set", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::XmlWellFormedWriter_NamespaceKind>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlWellFormedWriter_Namespace.WriteDecl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlWellFormedWriter_Namespace::*)(::System::Xml::XmlWriter*, ::System::Xml::XmlRawWriter*)>(&::GlobalNamespace::XmlWellFormedWriter_Namespace::WriteDecl)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xabbaf04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlWellFormedWriter_Namespace>(),
                        {"WriteDecl", {}, {::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<::System::Xml::XmlRawWriter*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XmlWellFormedWriter_Namespace::Set(::StringW  prefix, ::StringW  namespaceUri, ::GlobalNamespace::XmlWellFormedWriter_NamespaceKind  kind)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlWellFormedWriter_Namespace>(),
                        {"Set", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::XmlWellFormedWriter_NamespaceKind>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, prefix, namespaceUri, kind);
}
inline void GlobalNamespace::XmlWellFormedWriter_Namespace::WriteDecl(::System::Xml::XmlWriter*  writer, ::System::Xml::XmlRawWriter*  rawWriter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlWellFormedWriter_Namespace>(),
                        {"WriteDecl", {}, {::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<::System::Xml::XmlRawWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer, rawWriter);
}
// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "kind", ty: "::GlobalNamespace::XmlWellFormedWriter_NamespaceKind", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prevNsIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlWellFormedWriter_Namespace::XmlWellFormedWriter_Namespace(::StringW  prefix, ::StringW  namespaceUri, ::GlobalNamespace::XmlWellFormedWriter_NamespaceKind  kind, int32_t  prevNsIndex) noexcept  {
this->prefix = prefix;
this->namespaceUri = namespaceUri;
this->kind = kind;
this->prevNsIndex = prevNsIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlWellFormedWriter_Namespace::XmlWellFormedWriter_Namespace()   {
}
