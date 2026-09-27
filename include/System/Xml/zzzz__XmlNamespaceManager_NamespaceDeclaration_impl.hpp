#pragma once
// IWYU pragma private; include "System/Xml/XmlNamespaceManager_NamespaceDeclaration.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_NamespaceDeclaration_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XmlNamespaceManager_NamespaceDeclaration.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlNamespaceManager_NamespaceDeclaration::*)(::StringW, ::StringW, int32_t, int32_t)>(&::GlobalNamespace::XmlNamespaceManager_NamespaceDeclaration::Set)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xabf9318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlNamespaceManager_NamespaceDeclaration>(),
                        {"Set", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XmlNamespaceManager_NamespaceDeclaration::Set(::StringW  prefix, ::StringW  uri, int32_t  scopeId, int32_t  previousNsIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlNamespaceManager_NamespaceDeclaration>(),
                        {"Set", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, prefix, uri, scopeId, previousNsIndex);
}
// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uri", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scopeId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "previousNsIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlNamespaceManager_NamespaceDeclaration::XmlNamespaceManager_NamespaceDeclaration(::StringW  prefix, ::StringW  uri, int32_t  scopeId, int32_t  previousNsIndex) noexcept  {
this->prefix = prefix;
this->uri = uri;
this->scopeId = scopeId;
this->previousNsIndex = previousNsIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlNamespaceManager_NamespaceDeclaration::XmlNamespaceManager_NamespaceDeclaration()   {
}
