#pragma once
// IWYU pragma private; include "Modio/TermsOfUseLink.hpp"
#include "Modio/zzzz__LinkType_impl.hpp"
#include "Modio/zzzz__TermsOfUseLink_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "::Modio::LinkType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "required", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::TermsOfUseLink::TermsOfUseLink(::Modio::LinkType  type, ::StringW  text, ::StringW  url, bool  required) noexcept  {
this->type = type;
this->text = text;
this->url = url;
this->required = required;
}
// Ctor Parameters []
constexpr ::Modio::TermsOfUseLink::TermsOfUseLink()   {
}
