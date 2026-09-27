#pragma once
// IWYU pragma private; include "Mono/Security/X509/PKCS12_DeriveBytes_Purpose.hpp"
#include "Mono/Security/X509/zzzz__PKCS12_DeriveBytes_Purpose_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DeriveBytes_PKCS12_Purpose::DeriveBytes_PKCS12_Purpose(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DeriveBytes_PKCS12_Purpose::DeriveBytes_PKCS12_Purpose()   {
}
constexpr ::GlobalNamespace::DeriveBytes_PKCS12_Purpose  GlobalNamespace::DeriveBytes_PKCS12_Purpose::Key{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::DeriveBytes_PKCS12_Purpose  GlobalNamespace::DeriveBytes_PKCS12_Purpose::IV{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::DeriveBytes_PKCS12_Purpose  GlobalNamespace::DeriveBytes_PKCS12_Purpose::MAC{static_cast<int32_t>(0x2)};
