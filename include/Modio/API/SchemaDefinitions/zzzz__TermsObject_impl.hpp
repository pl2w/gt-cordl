#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/TermsObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedButtons_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedLinks_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedButtons_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedLinks_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::TermsObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::TermsObject::*)(::StringW, ::StringW, ::GlobalNamespace::TermsObject_EmbeddedButtons, ::GlobalNamespace::TermsObject_EmbeddedLinks)>(&::Modio::API::SchemaDefinitions::TermsObject::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9fee33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::TermsObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::TermsObject_EmbeddedButtons>(), ::i2c::type_of<::GlobalNamespace::TermsObject_EmbeddedLinks>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::TermsObject::_ctor(::StringW  plaintext, ::StringW  html, ::GlobalNamespace::TermsObject_EmbeddedButtons  buttons, ::GlobalNamespace::TermsObject_EmbeddedLinks  links)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::TermsObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::TermsObject_EmbeddedButtons>(), ::i2c::type_of<::GlobalNamespace::TermsObject_EmbeddedLinks>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, plaintext, html, buttons, links);
}
// Ctor Parameters [CppParam { name: "Plaintext", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Html", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Buttons", ty: "::GlobalNamespace::TermsObject_EmbeddedButtons", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Links", ty: "::GlobalNamespace::TermsObject_EmbeddedLinks", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::TermsObject::TermsObject(::StringW  Plaintext, ::StringW  Html, ::GlobalNamespace::TermsObject_EmbeddedButtons  Buttons, ::GlobalNamespace::TermsObject_EmbeddedLinks  Links) noexcept  {
this->Plaintext = Plaintext;
this->Html = Html;
this->Buttons = Buttons;
this->Links = Links;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::TermsObject::TermsObject()   {
}
