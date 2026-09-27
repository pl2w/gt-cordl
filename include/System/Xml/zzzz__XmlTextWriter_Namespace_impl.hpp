#pragma once
// IWYU pragma private; include "System/Xml/XmlTextWriter_Namespace.hpp"
#include "System/Xml/zzzz__XmlTextWriter_Namespace_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XmlTextWriter_Namespace.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlTextWriter_Namespace::*)(::StringW, ::StringW, bool)>(&::GlobalNamespace::XmlTextWriter_Namespace::Set)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xabadfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlTextWriter_Namespace>(),
                        {"Set", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XmlTextWriter_Namespace::Set(::StringW  prefix, ::StringW  ns, bool  declared)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlTextWriter_Namespace>(),
                        {"Set", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, prefix, ns, declared);
}
// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ns", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "declared", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prevNsIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlTextWriter_Namespace::XmlTextWriter_Namespace(::StringW  prefix, ::StringW  ns, bool  declared, int32_t  prevNsIndex) noexcept  {
this->prefix = prefix;
this->ns = ns;
this->declared = declared;
this->prevNsIndex = prevNsIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlTextWriter_Namespace::XmlTextWriter_Namespace()   {
}
