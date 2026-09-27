#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTls_unitytls_x509verify_result.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityTls_unitytls_x509verify_result)
// Forward declare root types
namespace GlobalNamespace {
struct UnityTls_unitytls_x509verify_result;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnityTls_unitytls_x509verify_result);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityTls_unitytls_x509verify_result, "Mono.Unity", "UnityTls/unitytls_x509verify_result");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.Unity.UnityTls/unitytls_x509verify_result
struct CORDL_TYPE UnityTls_unitytls_x509verify_result {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __UnityTls_unitytls_x509verify_result_Unwrapped
enum struct __UnityTls_unitytls_x509verify_result_Unwrapped : uint32_t {
__E_UNITYTLS_X509VERIFY_SUCCESS = static_cast<uint32_t>(0x0u),
__E_UNITYTLS_X509VERIFY_NOT_DONE = static_cast<uint32_t>(0x80000000u),
__E_UNITYTLS_X509VERIFY_FATAL_ERROR = static_cast<uint32_t>(0xffffffffu),
__E_UNITYTLS_X509VERIFY_FLAG_EXPIRED = static_cast<uint32_t>(0x1u),
__E_UNITYTLS_X509VERIFY_FLAG_REVOKED = static_cast<uint32_t>(0x2u),
__E_UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH = static_cast<uint32_t>(0x4u),
__E_UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED = static_cast<uint32_t>(0x8u),
__E_UNITYTLS_X509VERIFY_FLAG_BADCRL_NOT_TRUSTED = static_cast<uint32_t>(0x10u),
__E_UNITYTLS_X509VERIFY_FLAG_BADCRL_EXPIRED = static_cast<uint32_t>(0x20u),
__E_UNITYTLS_X509VERIFY_FLAG_BADCERT_MISSING = static_cast<uint32_t>(0x40u),
__E_UNITYTLS_X509VERIFY_FLAG_BADCERT_SKIP_VERIFY = static_cast<uint32_t>(0x80u),
__E_UNITYTLS_X509VERIFY_FLAG_BADCERT_OTHER = static_cast<uint32_t>(0x100u),
__E_UNITYTLS_X509VERIFY_FLAG_BADCERT_FUTURE = static_cast<uint32_t>(0x200u),
__E_UNITYTLS_X509VERIFY_FLAG_BADCRL_FUTURE = static_cast<uint32_t>(0x400u),
__E_UNITYTLS_X509VERIFY_FLAG_BADCERT_KEY_USAGE = static_cast<uint32_t>(0x800u),
__E_UNITYTLS_X509VERIFY_FLAG_BADCERT_EXT_KEY_USAGE = static_cast<uint32_t>(0x1000u),
__E_UNITYTLS_X509VERIFY_FLAG_BADCERT_NS_CERT_TYPE = static_cast<uint32_t>(0x2000u),
__E_UNITYTLS_X509VERIFY_FLAG_BADCERT_BAD_MD = static_cast<uint32_t>(0x4000u),
__E_UNITYTLS_X509VERIFY_FLAG_BADCERT_BAD_PK = static_cast<uint32_t>(0x8000u),
__E_UNITYTLS_X509VERIFY_FLAG_BADCERT_BAD_KEY = static_cast<uint32_t>(0x10000u),
__E_UNITYTLS_X509VERIFY_FLAG_BADCRL_BAD_MD = static_cast<uint32_t>(0x20000u),
__E_UNITYTLS_X509VERIFY_FLAG_BADCRL_BAD_PK = static_cast<uint32_t>(0x40000u),
__E_UNITYTLS_X509VERIFY_FLAG_BADCRL_BAD_KEY = static_cast<uint32_t>(0x80000u),
__E_UNITYTLS_X509VERIFY_FLAG_USER_ERROR1 = static_cast<uint32_t>(0x10000u),
__E_UNITYTLS_X509VERIFY_FLAG_USER_ERROR2 = static_cast<uint32_t>(0x20000u),
__E_UNITYTLS_X509VERIFY_FLAG_USER_ERROR3 = static_cast<uint32_t>(0x40000u),
__E_UNITYTLS_X509VERIFY_FLAG_USER_ERROR4 = static_cast<uint32_t>(0x80000u),
__E_UNITYTLS_X509VERIFY_FLAG_USER_ERROR5 = static_cast<uint32_t>(0x100000u),
__E_UNITYTLS_X509VERIFY_FLAG_USER_ERROR6 = static_cast<uint32_t>(0x200000u),
__E_UNITYTLS_X509VERIFY_FLAG_USER_ERROR7 = static_cast<uint32_t>(0x400000u),
__E_UNITYTLS_X509VERIFY_FLAG_USER_ERROR8 = static_cast<uint32_t>(0x800000u),
__E_UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR = static_cast<uint32_t>(0x8000000u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityTls_unitytls_x509verify_result_Unwrapped () const noexcept {
return static_cast<__UnityTls_unitytls_x509verify_result_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnityTls_unitytls_x509verify_result() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr UnityTls_unitytls_x509verify_result(uint32_t  value__) noexcept;

/// @brief Field UNITYTLS_X509VERIFY_FATAL_ERROR value: U32(4294967295)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FATAL_ERROR;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_BADCERT_BAD_KEY value: U32(65536)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_BADCERT_BAD_KEY;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_BADCERT_BAD_MD value: U32(16384)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_BADCERT_BAD_MD;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_BADCERT_BAD_PK value: U32(32768)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_BADCERT_BAD_PK;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_BADCERT_EXT_KEY_USAGE value: U32(4096)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_BADCERT_EXT_KEY_USAGE;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_BADCERT_FUTURE value: U32(512)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_BADCERT_FUTURE;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_BADCERT_KEY_USAGE value: U32(2048)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_BADCERT_KEY_USAGE;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_BADCERT_MISSING value: U32(64)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_BADCERT_MISSING;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_BADCERT_NS_CERT_TYPE value: U32(8192)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_BADCERT_NS_CERT_TYPE;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_BADCERT_OTHER value: U32(256)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_BADCERT_OTHER;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_BADCERT_SKIP_VERIFY value: U32(128)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_BADCERT_SKIP_VERIFY;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_BADCRL_BAD_KEY value: U32(524288)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_BADCRL_BAD_KEY;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_BADCRL_BAD_MD value: U32(131072)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_BADCRL_BAD_MD;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_BADCRL_BAD_PK value: U32(262144)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_BADCRL_BAD_PK;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_BADCRL_EXPIRED value: U32(32)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_BADCRL_EXPIRED;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_BADCRL_FUTURE value: U32(1024)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_BADCRL_FUTURE;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_BADCRL_NOT_TRUSTED value: U32(16)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_BADCRL_NOT_TRUSTED;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH value: U32(4)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_EXPIRED value: U32(1)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_EXPIRED;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED value: U32(8)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_REVOKED value: U32(2)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_REVOKED;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR value: U32(134217728)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR1 value: U32(65536)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR1;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR2 value: U32(131072)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR2;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR3 value: U32(262144)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR3;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR4 value: U32(524288)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR4;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR5 value: U32(1048576)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR5;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR6 value: U32(2097152)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR6;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR7 value: U32(4194304)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR7;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR8 value: U32(8388608)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR8;

/// @brief Field UNITYTLS_X509VERIFY_NOT_DONE value: U32(2147483648)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_NOT_DONE;

/// @brief Field UNITYTLS_X509VERIFY_SUCCESS value: U32(0)
static ::GlobalNamespace::UnityTls_unitytls_x509verify_result const UNITYTLS_X509VERIFY_SUCCESS;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9815};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityTls_unitytls_x509verify_result, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityTls_unitytls_x509verify_result) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
