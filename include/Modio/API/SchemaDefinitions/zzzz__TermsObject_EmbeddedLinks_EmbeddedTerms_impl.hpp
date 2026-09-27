#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/TermsObject_EmbeddedLinks_EmbeddedTerms.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedLinks_EmbeddedTerms_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedTerms._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedTerms::*)(::StringW, ::StringW, bool)>(&::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedTerms::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9fee4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedTerms>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedTerms::_ctor(::StringW  text, ::StringW  url, bool  required)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedTerms>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, text, url, required);
}
// Ctor Parameters [CppParam { name: "Text", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Url", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Required", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedTerms::EmbeddedLinks_TermsObject_EmbeddedTerms(::StringW  Text, ::StringW  Url, bool  Required) noexcept  {
this->Text = Text;
this->Url = Url;
this->Required = Required;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedTerms::EmbeddedLinks_TermsObject_EmbeddedTerms()   {
}
