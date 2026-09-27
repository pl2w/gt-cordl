#pragma once
// IWYU pragma private; include "System/Net/Security/SecurityBufferType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SecurityBufferType)
// Forward declare root types
namespace System::Net::Security {
struct SecurityBufferType;
}
// Write type traits
MARK_VAL_T(::System::Net::Security::SecurityBufferType);
DEFINE_IL2CPP_CLASS(::System::Net::Security::SecurityBufferType, "System.Net.Security", "SecurityBufferType");
// Dependencies 
namespace System::Net::Security {
// Is value type: true
// CS Name: System.Net.Security.SecurityBufferType
struct CORDL_TYPE SecurityBufferType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SecurityBufferType_Unwrapped
enum struct __SecurityBufferType_Unwrapped : int32_t {
__E_SECBUFFER_EMPTY = static_cast<int32_t>(0x0),
__E_SECBUFFER_DATA = static_cast<int32_t>(0x1),
__E_SECBUFFER_TOKEN = static_cast<int32_t>(0x2),
__E_SECBUFFER_PKG_PARAMS = static_cast<int32_t>(0x3),
__E_SECBUFFER_MISSING = static_cast<int32_t>(0x4),
__E_SECBUFFER_EXTRA = static_cast<int32_t>(0x5),
__E_SECBUFFER_STREAM_TRAILER = static_cast<int32_t>(0x6),
__E_SECBUFFER_STREAM_HEADER = static_cast<int32_t>(0x7),
__E_SECBUFFER_PADDING = static_cast<int32_t>(0x9),
__E_SECBUFFER_STREAM = static_cast<int32_t>(0xa),
__E_SECBUFFER_CHANNEL_BINDINGS = static_cast<int32_t>(0xe),
__E_SECBUFFER_TARGET_HOST = static_cast<int32_t>(0x10),
__E_SECBUFFER_ALERT = static_cast<int32_t>(0x11),
__E_SECBUFFER_APPLICATION_PROTOCOLS = static_cast<int32_t>(0x12),
__E_SECBUFFER_READONLY = static_cast<int32_t>(0x80000000),
__E_SECBUFFER_READONLY_WITH_CHECKSUM = static_cast<int32_t>(0x10000000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SecurityBufferType_Unwrapped () const noexcept {
return static_cast<__SecurityBufferType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SecurityBufferType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SecurityBufferType(int32_t  value__) noexcept;

/// @brief Field SECBUFFER_ALERT value: I32(17)
static ::System::Net::Security::SecurityBufferType const SECBUFFER_ALERT;

/// @brief Field SECBUFFER_APPLICATION_PROTOCOLS value: I32(18)
static ::System::Net::Security::SecurityBufferType const SECBUFFER_APPLICATION_PROTOCOLS;

/// @brief Field SECBUFFER_CHANNEL_BINDINGS value: I32(14)
static ::System::Net::Security::SecurityBufferType const SECBUFFER_CHANNEL_BINDINGS;

/// @brief Field SECBUFFER_DATA value: I32(1)
static ::System::Net::Security::SecurityBufferType const SECBUFFER_DATA;

/// @brief Field SECBUFFER_EMPTY value: I32(0)
static ::System::Net::Security::SecurityBufferType const SECBUFFER_EMPTY;

/// @brief Field SECBUFFER_EXTRA value: I32(5)
static ::System::Net::Security::SecurityBufferType const SECBUFFER_EXTRA;

/// @brief Field SECBUFFER_MISSING value: I32(4)
static ::System::Net::Security::SecurityBufferType const SECBUFFER_MISSING;

/// @brief Field SECBUFFER_PADDING value: I32(9)
static ::System::Net::Security::SecurityBufferType const SECBUFFER_PADDING;

/// @brief Field SECBUFFER_PKG_PARAMS value: I32(3)
static ::System::Net::Security::SecurityBufferType const SECBUFFER_PKG_PARAMS;

/// @brief Field SECBUFFER_READONLY value: I32(-2147483648)
static ::System::Net::Security::SecurityBufferType const SECBUFFER_READONLY;

/// @brief Field SECBUFFER_READONLY_WITH_CHECKSUM value: I32(268435456)
static ::System::Net::Security::SecurityBufferType const SECBUFFER_READONLY_WITH_CHECKSUM;

/// @brief Field SECBUFFER_STREAM value: I32(10)
static ::System::Net::Security::SecurityBufferType const SECBUFFER_STREAM;

/// @brief Field SECBUFFER_STREAM_HEADER value: I32(7)
static ::System::Net::Security::SecurityBufferType const SECBUFFER_STREAM_HEADER;

/// @brief Field SECBUFFER_STREAM_TRAILER value: I32(6)
static ::System::Net::Security::SecurityBufferType const SECBUFFER_STREAM_TRAILER;

/// @brief Field SECBUFFER_TARGET_HOST value: I32(16)
static ::System::Net::Security::SecurityBufferType const SECBUFFER_TARGET_HOST;

/// @brief Field SECBUFFER_TOKEN value: I32(2)
static ::System::Net::Security::SecurityBufferType const SECBUFFER_TOKEN;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10928};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Security::SecurityBufferType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::Security::SecurityBufferType) == 0x4, "Size mismatch!");

} // namespace end def System::Net::Security
