#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/TermsObject_EmbeddedLinks.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedLinks_EmbeddedManage_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedLinks_EmbeddedPrivacy_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedLinks_EmbeddedRefund_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedLinks_EmbeddedTerms_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedLinks_EmbeddedWebsite_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedLinks_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedLinks_EmbeddedManage_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedLinks_EmbeddedPrivacy_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedLinks_EmbeddedRefund_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedLinks_EmbeddedTerms_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedLinks_EmbeddedWebsite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TermsObject_EmbeddedLinks._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TermsObject_EmbeddedLinks::*)(::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedWebsite, ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedTerms, ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedPrivacy, ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedRefund, ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedManage)>(&::GlobalNamespace::TermsObject_EmbeddedLinks::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9fee3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TermsObject_EmbeddedLinks>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedWebsite>(), ::i2c::type_of<::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedTerms>(), ::i2c::type_of<::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedPrivacy>(), ::i2c::type_of<::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedRefund>(), ::i2c::type_of<::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedManage>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TermsObject_EmbeddedLinks::_ctor(::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedWebsite  website, ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedTerms  terms, ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedPrivacy  privacy, ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedRefund  refund, ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedManage  manage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TermsObject_EmbeddedLinks>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedWebsite>(), ::i2c::type_of<::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedTerms>(), ::i2c::type_of<::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedPrivacy>(), ::i2c::type_of<::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedRefund>(), ::i2c::type_of<::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedManage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, website, terms, privacy, refund, manage);
}
// Ctor Parameters [CppParam { name: "Website", ty: "::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedWebsite", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Terms", ty: "::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedTerms", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Privacy", ty: "::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedPrivacy", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Refund", ty: "::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedRefund", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Manage", ty: "::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedManage", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TermsObject_EmbeddedLinks::TermsObject_EmbeddedLinks(::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedWebsite  Website, ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedTerms  Terms, ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedPrivacy  Privacy, ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedRefund  Refund, ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedManage  Manage) noexcept  {
this->Website = Website;
this->Terms = Terms;
this->Privacy = Privacy;
this->Refund = Refund;
this->Manage = Manage;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TermsObject_EmbeddedLinks::TermsObject_EmbeddedLinks()   {
}
