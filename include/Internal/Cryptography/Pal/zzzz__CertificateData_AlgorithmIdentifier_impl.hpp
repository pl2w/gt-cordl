#pragma once
// IWYU pragma private; include "Internal/Cryptography/Pal/CertificateData_AlgorithmIdentifier.hpp"
#include "Internal/Cryptography/Pal/zzzz__CertificateData_AlgorithmIdentifier_def.hpp"
// Ctor Parameters [CppParam { name: "AlgorithmId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Parameters", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CertificateData_AlgorithmIdentifier::CertificateData_AlgorithmIdentifier(::StringW  AlgorithmId, ::ArrayW<uint8_t>  Parameters) noexcept  {
this->AlgorithmId = AlgorithmId;
this->Parameters = Parameters;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CertificateData_AlgorithmIdentifier::CertificateData_AlgorithmIdentifier()   {
}
