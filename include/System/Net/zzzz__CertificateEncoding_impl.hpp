#pragma once
// IWYU pragma private; include "System/Net/CertificateEncoding.hpp"
#include "System/Net/zzzz__CertificateEncoding_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::CertificateEncoding::CertificateEncoding(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::CertificateEncoding::CertificateEncoding()   {
}
constexpr ::System::Net::CertificateEncoding  System::Net::CertificateEncoding::Zero{static_cast<int32_t>(0x0)};
constexpr ::System::Net::CertificateEncoding  System::Net::CertificateEncoding::X509AsnEncoding{static_cast<int32_t>(0x1)};
constexpr ::System::Net::CertificateEncoding  System::Net::CertificateEncoding::X509NdrEncoding{static_cast<int32_t>(0x2)};
constexpr ::System::Net::CertificateEncoding  System::Net::CertificateEncoding::Pkcs7AsnEncoding{static_cast<int32_t>(0x10000)};
constexpr ::System::Net::CertificateEncoding  System::Net::CertificateEncoding::Pkcs7NdrEncoding{static_cast<int32_t>(0x20000)};
constexpr ::System::Net::CertificateEncoding  System::Net::CertificateEncoding::AnyAsnEncoding{static_cast<int32_t>(0x10001)};
