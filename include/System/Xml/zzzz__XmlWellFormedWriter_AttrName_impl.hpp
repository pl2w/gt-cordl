#pragma once
// IWYU pragma private; include "System/Xml/XmlWellFormedWriter_AttrName.hpp"
#include "System/Xml/zzzz__XmlWellFormedWriter_AttrName_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XmlWellFormedWriter_AttrName.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlWellFormedWriter_AttrName::*)(::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::XmlWellFormedWriter_AttrName::Set)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xabbb178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlWellFormedWriter_AttrName>(),
                        {"Set", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlWellFormedWriter_AttrName.IsDuplicate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::XmlWellFormedWriter_AttrName::*)(::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::XmlWellFormedWriter_AttrName::IsDuplicate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xabbb1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlWellFormedWriter_AttrName>(),
                        {"IsDuplicate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XmlWellFormedWriter_AttrName::Set(::StringW  prefix, ::StringW  localName, ::StringW  namespaceUri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlWellFormedWriter_AttrName>(),
                        {"Set", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, prefix, localName, namespaceUri);
}
inline bool GlobalNamespace::XmlWellFormedWriter_AttrName::IsDuplicate(::StringW  prefix, ::StringW  localName, ::StringW  namespaceUri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlWellFormedWriter_AttrName>(),
                        {"IsDuplicate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, prefix, localName, namespaceUri);
}
// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prev", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlWellFormedWriter_AttrName::XmlWellFormedWriter_AttrName(::StringW  prefix, ::StringW  namespaceUri, ::StringW  localName, int32_t  prev) noexcept  {
this->prefix = prefix;
this->namespaceUri = namespaceUri;
this->localName = localName;
this->prev = prev;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlWellFormedWriter_AttrName::XmlWellFormedWriter_AttrName()   {
}
