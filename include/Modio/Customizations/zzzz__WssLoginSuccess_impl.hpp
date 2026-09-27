#pragma once
// IWYU pragma private; include "Modio/Customizations/WssLoginSuccess.hpp"
#include "Modio/Customizations/zzzz__WssLoginSuccess_def.hpp"
// Ctor Parameters [CppParam { name: "code", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "access_token", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "date_expires", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Customizations::WssLoginSuccess::WssLoginSuccess(int64_t  code, ::StringW  access_token, int64_t  date_expires) noexcept  {
this->code = code;
this->access_token = access_token;
this->date_expires = date_expires;
}
// Ctor Parameters []
constexpr ::Modio::Customizations::WssLoginSuccess::WssLoginSuccess()   {
}
