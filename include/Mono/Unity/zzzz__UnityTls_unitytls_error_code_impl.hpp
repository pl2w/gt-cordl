#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTls_unitytls_error_code.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_error_code_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code::UnityTls_unitytls_error_code(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code::UnityTls_unitytls_error_code()   {
}
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_SUCCESS{static_cast<uint32_t>(0x0u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_INVALID_ARGUMENT{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_INVALID_FORMAT{static_cast<uint32_t>(0x2u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_INVALID_PASSWORD{static_cast<uint32_t>(0x3u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_INVALID_STATE{static_cast<uint32_t>(0x4u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_BUFFER_OVERFLOW{static_cast<uint32_t>(0x5u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_OUT_OF_MEMORY{static_cast<uint32_t>(0x6u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_INTERNAL_ERROR{static_cast<uint32_t>(0x7u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_NOT_SUPPORTED{static_cast<uint32_t>(0x8u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_ENTROPY_SOURCE_FAILED{static_cast<uint32_t>(0x9u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_STREAM_CLOSED{static_cast<uint32_t>(0xau)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_DER_PARSE_ERROR{static_cast<uint32_t>(0xbu)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_KEY_PARSE_ERROR{static_cast<uint32_t>(0xcu)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_SSL_ERROR{static_cast<uint32_t>(0xdu)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_USER_CUSTOM_ERROR_START{static_cast<uint32_t>(0x100000u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_USER_WOULD_BLOCK{static_cast<uint32_t>(0x100001u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_USER_WOULD_BLOCK_READ{static_cast<uint32_t>(0x100002u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_USER_WOULD_BLOCK_WRITE{static_cast<uint32_t>(0x100003u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_USER_READ_FAILED{static_cast<uint32_t>(0x100004u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_USER_WRITE_FAILED{static_cast<uint32_t>(0x100005u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_USER_UNKNOWN_ERROR{static_cast<uint32_t>(0x100006u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_SSL_NEEDS_VERIFY{static_cast<uint32_t>(0x100007u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_HANDSHAKE_STEP{static_cast<uint32_t>(0x100008u)};
constexpr ::GlobalNamespace::UnityTls_unitytls_error_code  GlobalNamespace::UnityTls_unitytls_error_code::UNITYTLS_USER_CUSTOM_ERROR_END{static_cast<uint32_t>(0x200000u)};
