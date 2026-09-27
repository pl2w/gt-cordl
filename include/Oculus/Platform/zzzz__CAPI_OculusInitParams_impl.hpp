#pragma once
// IWYU pragma private; include "Oculus/Platform/CAPI_OculusInitParams.hpp"
#include "Oculus/Platform/zzzz__CAPI_OculusInitParams_def.hpp"
// Ctor Parameters [CppParam { name: "sType", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "email", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "appId", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uriPrefixOverride", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CAPI_OculusInitParams::CAPI_OculusInitParams(int32_t  sType, ::StringW  email, ::StringW  password, uint64_t  appId, ::StringW  uriPrefixOverride) noexcept  {
this->sType = sType;
this->email = email;
this->password = password;
this->appId = appId;
this->uriPrefixOverride = uriPrefixOverride;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CAPI_OculusInitParams::CAPI_OculusInitParams()   {
}
