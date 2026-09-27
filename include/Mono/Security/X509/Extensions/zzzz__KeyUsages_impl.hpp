#pragma once
// IWYU pragma private; include "Mono/Security/X509/Extensions/KeyUsages.hpp"
#include "Mono/Security/X509/Extensions/zzzz__KeyUsages_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Mono::Security::X509::Extensions::KeyUsages::KeyUsages(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::Extensions::KeyUsages::KeyUsages()   {
}
constexpr ::Mono::Security::X509::Extensions::KeyUsages  Mono::Security::X509::Extensions::KeyUsages::digitalSignature{static_cast<int32_t>(0x80)};
constexpr ::Mono::Security::X509::Extensions::KeyUsages  Mono::Security::X509::Extensions::KeyUsages::nonRepudiation{static_cast<int32_t>(0x40)};
constexpr ::Mono::Security::X509::Extensions::KeyUsages  Mono::Security::X509::Extensions::KeyUsages::keyEncipherment{static_cast<int32_t>(0x20)};
constexpr ::Mono::Security::X509::Extensions::KeyUsages  Mono::Security::X509::Extensions::KeyUsages::dataEncipherment{static_cast<int32_t>(0x10)};
constexpr ::Mono::Security::X509::Extensions::KeyUsages  Mono::Security::X509::Extensions::KeyUsages::keyAgreement{static_cast<int32_t>(0x8)};
constexpr ::Mono::Security::X509::Extensions::KeyUsages  Mono::Security::X509::Extensions::KeyUsages::keyCertSign{static_cast<int32_t>(0x4)};
constexpr ::Mono::Security::X509::Extensions::KeyUsages  Mono::Security::X509::Extensions::KeyUsages::cRLSign{static_cast<int32_t>(0x2)};
constexpr ::Mono::Security::X509::Extensions::KeyUsages  Mono::Security::X509::Extensions::KeyUsages::encipherOnly{static_cast<int32_t>(0x1)};
constexpr ::Mono::Security::X509::Extensions::KeyUsages  Mono::Security::X509::Extensions::KeyUsages::decipherOnly{static_cast<int32_t>(0x800)};
constexpr ::Mono::Security::X509::Extensions::KeyUsages  Mono::Security::X509::Extensions::KeyUsages::none{static_cast<int32_t>(0x0)};
