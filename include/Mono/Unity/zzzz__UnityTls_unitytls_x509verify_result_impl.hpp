#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTls_unitytls_x509verify_result.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_x509verify_result_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result::UnityTls_unitytls_x509verify_result(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result::UnityTls_unitytls_x509verify_result()   {
}
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_SUCCESS{static_cast<uint32_t>(0x0u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_NOT_DONE{static_cast<uint32_t>(0x80000000u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FATAL_ERROR{static_cast<uint32_t>(0xffffffffu)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_EXPIRED{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_REVOKED{static_cast<uint32_t>(0x2u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH{static_cast<uint32_t>(0x4u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED{static_cast<uint32_t>(0x8u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_BADCRL_NOT_TRUSTED{static_cast<uint32_t>(0x10u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_BADCRL_EXPIRED{static_cast<uint32_t>(0x20u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_BADCERT_MISSING{static_cast<uint32_t>(0x40u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_BADCERT_SKIP_VERIFY{static_cast<uint32_t>(0x80u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_BADCERT_OTHER{static_cast<uint32_t>(0x100u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_BADCERT_FUTURE{static_cast<uint32_t>(0x200u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_BADCRL_FUTURE{static_cast<uint32_t>(0x400u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_BADCERT_KEY_USAGE{static_cast<uint32_t>(0x800u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_BADCERT_EXT_KEY_USAGE{static_cast<uint32_t>(0x1000u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_BADCERT_NS_CERT_TYPE{static_cast<uint32_t>(0x2000u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_BADCERT_BAD_MD{static_cast<uint32_t>(0x4000u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_BADCERT_BAD_PK{static_cast<uint32_t>(0x8000u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_BADCERT_BAD_KEY{static_cast<uint32_t>(0x10000u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_BADCRL_BAD_MD{static_cast<uint32_t>(0x20000u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_BADCRL_BAD_PK{static_cast<uint32_t>(0x40000u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_BADCRL_BAD_KEY{static_cast<uint32_t>(0x80000u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR1{static_cast<uint32_t>(0x10000u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR2{static_cast<uint32_t>(0x20000u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR3{static_cast<uint32_t>(0x40000u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR4{static_cast<uint32_t>(0x80000u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR5{static_cast<uint32_t>(0x100000u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR6{static_cast<uint32_t>(0x200000u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR7{static_cast<uint32_t>(0x400000u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR8{static_cast<uint32_t>(0x800000u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_x509verify_result  GlobalNamespace::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR{static_cast<uint32_t>(0x8000000u)};
