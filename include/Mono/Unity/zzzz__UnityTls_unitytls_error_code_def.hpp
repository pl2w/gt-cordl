#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTls_unitytls_error_code.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityTls_unitytls_error_code)
// Forward declare root types
namespace GlobalNamespace {
struct UnityTls_unitytls_error_code;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnityTls_unitytls_error_code);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityTls_unitytls_error_code, "Mono.Unity", "UnityTls/unitytls_error_code");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.Unity.UnityTls/unitytls_error_code
struct CORDL_TYPE UnityTls_unitytls_error_code {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __UnityTls_unitytls_error_code_Unwrapped
enum struct __UnityTls_unitytls_error_code_Unwrapped : uint32_t {
__E_UNITYTLS_SUCCESS = static_cast<uint32_t>(0x0u),
__E_UNITYTLS_INVALID_ARGUMENT = static_cast<uint32_t>(0x1u),
__E_UNITYTLS_INVALID_FORMAT = static_cast<uint32_t>(0x2u),
__E_UNITYTLS_INVALID_PASSWORD = static_cast<uint32_t>(0x3u),
__E_UNITYTLS_INVALID_STATE = static_cast<uint32_t>(0x4u),
__E_UNITYTLS_BUFFER_OVERFLOW = static_cast<uint32_t>(0x5u),
__E_UNITYTLS_OUT_OF_MEMORY = static_cast<uint32_t>(0x6u),
__E_UNITYTLS_INTERNAL_ERROR = static_cast<uint32_t>(0x7u),
__E_UNITYTLS_NOT_SUPPORTED = static_cast<uint32_t>(0x8u),
__E_UNITYTLS_ENTROPY_SOURCE_FAILED = static_cast<uint32_t>(0x9u),
__E_UNITYTLS_STREAM_CLOSED = static_cast<uint32_t>(0xau),
__E_UNITYTLS_DER_PARSE_ERROR = static_cast<uint32_t>(0xbu),
__E_UNITYTLS_KEY_PARSE_ERROR = static_cast<uint32_t>(0xcu),
__E_UNITYTLS_SSL_ERROR = static_cast<uint32_t>(0xdu),
__E_UNITYTLS_USER_CUSTOM_ERROR_START = static_cast<uint32_t>(0x100000u),
__E_UNITYTLS_USER_WOULD_BLOCK = static_cast<uint32_t>(0x100001u),
__E_UNITYTLS_USER_WOULD_BLOCK_READ = static_cast<uint32_t>(0x100002u),
__E_UNITYTLS_USER_WOULD_BLOCK_WRITE = static_cast<uint32_t>(0x100003u),
__E_UNITYTLS_USER_READ_FAILED = static_cast<uint32_t>(0x100004u),
__E_UNITYTLS_USER_WRITE_FAILED = static_cast<uint32_t>(0x100005u),
__E_UNITYTLS_USER_UNKNOWN_ERROR = static_cast<uint32_t>(0x100006u),
__E_UNITYTLS_SSL_NEEDS_VERIFY = static_cast<uint32_t>(0x100007u),
__E_UNITYTLS_HANDSHAKE_STEP = static_cast<uint32_t>(0x100008u),
__E_UNITYTLS_USER_CUSTOM_ERROR_END = static_cast<uint32_t>(0x200000u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityTls_unitytls_error_code_Unwrapped () const noexcept {
return static_cast<__UnityTls_unitytls_error_code_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnityTls_unitytls_error_code() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr UnityTls_unitytls_error_code(uint32_t  value__) noexcept;

/// @brief Field UNITYTLS_BUFFER_OVERFLOW value: U32(5)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_BUFFER_OVERFLOW;

/// @brief Field UNITYTLS_DER_PARSE_ERROR value: U32(11)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_DER_PARSE_ERROR;

/// @brief Field UNITYTLS_ENTROPY_SOURCE_FAILED value: U32(9)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_ENTROPY_SOURCE_FAILED;

/// @brief Field UNITYTLS_HANDSHAKE_STEP value: U32(1048584)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_HANDSHAKE_STEP;

/// @brief Field UNITYTLS_INTERNAL_ERROR value: U32(7)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_INTERNAL_ERROR;

/// @brief Field UNITYTLS_INVALID_ARGUMENT value: U32(1)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_INVALID_ARGUMENT;

/// @brief Field UNITYTLS_INVALID_FORMAT value: U32(2)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_INVALID_FORMAT;

/// @brief Field UNITYTLS_INVALID_PASSWORD value: U32(3)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_INVALID_PASSWORD;

/// @brief Field UNITYTLS_INVALID_STATE value: U32(4)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_INVALID_STATE;

/// @brief Field UNITYTLS_KEY_PARSE_ERROR value: U32(12)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_KEY_PARSE_ERROR;

/// @brief Field UNITYTLS_NOT_SUPPORTED value: U32(8)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_NOT_SUPPORTED;

/// @brief Field UNITYTLS_OUT_OF_MEMORY value: U32(6)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_OUT_OF_MEMORY;

/// @brief Field UNITYTLS_SSL_ERROR value: U32(13)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_SSL_ERROR;

/// @brief Field UNITYTLS_SSL_NEEDS_VERIFY value: U32(1048583)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_SSL_NEEDS_VERIFY;

/// @brief Field UNITYTLS_STREAM_CLOSED value: U32(10)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_STREAM_CLOSED;

/// @brief Field UNITYTLS_SUCCESS value: U32(0)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_SUCCESS;

/// @brief Field UNITYTLS_USER_CUSTOM_ERROR_END value: U32(2097152)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_USER_CUSTOM_ERROR_END;

/// @brief Field UNITYTLS_USER_CUSTOM_ERROR_START value: U32(1048576)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_USER_CUSTOM_ERROR_START;

/// @brief Field UNITYTLS_USER_READ_FAILED value: U32(1048580)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_USER_READ_FAILED;

/// @brief Field UNITYTLS_USER_UNKNOWN_ERROR value: U32(1048582)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_USER_UNKNOWN_ERROR;

/// @brief Field UNITYTLS_USER_WOULD_BLOCK value: U32(1048577)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_USER_WOULD_BLOCK;

/// @brief Field UNITYTLS_USER_WOULD_BLOCK_READ value: U32(1048578)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_USER_WOULD_BLOCK_READ;

/// @brief Field UNITYTLS_USER_WOULD_BLOCK_WRITE value: U32(1048579)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_USER_WOULD_BLOCK_WRITE;

/// @brief Field UNITYTLS_USER_WRITE_FAILED value: U32(1048581)
static ::GlobalNamespace::UnityTls_unitytls_error_code const UNITYTLS_USER_WRITE_FAILED;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9807};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityTls_unitytls_error_code, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityTls_unitytls_error_code) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
