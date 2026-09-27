#pragma once
// IWYU pragma private; include "Modio/Customizations/WssDeviceLoginResponse.hpp"
#include "Modio/Customizations/zzzz__WssDeviceLoginResponse_def.hpp"
// Ctor Parameters [CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "date_expires", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "display_url", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "login_url", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Customizations::WssDeviceLoginResponse::WssDeviceLoginResponse(::StringW  code, int64_t  date_expires, ::StringW  display_url, ::StringW  login_url) noexcept  {
this->code = code;
this->date_expires = date_expires;
this->display_url = display_url;
this->login_url = login_url;
}
// Ctor Parameters []
constexpr ::Modio::Customizations::WssDeviceLoginResponse::WssDeviceLoginResponse()   {
}
