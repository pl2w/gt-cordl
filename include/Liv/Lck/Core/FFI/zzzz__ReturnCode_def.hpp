#pragma once
// IWYU pragma private; include "Liv/Lck/Core/FFI/ReturnCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReturnCode)
// Forward declare root types
namespace Liv::Lck::Core::FFI {
struct ReturnCode;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::Core::FFI::ReturnCode);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::FFI::ReturnCode, "Liv.Lck.Core.FFI", "ReturnCode");
// Dependencies 
namespace Liv::Lck::Core::FFI {
// Is value type: true
// CS Name: Liv.Lck.Core.FFI.ReturnCode
struct CORDL_TYPE ReturnCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __ReturnCode_Unwrapped
enum struct __ReturnCode_Unwrapped : uint32_t {
__E_Ok = static_cast<uint32_t>(0x0u),
__E_Error = static_cast<uint32_t>(0x1u),
__E_Panic = static_cast<uint32_t>(0x2u),
__E_InvalidArgument = static_cast<uint32_t>(0x3u),
__E_BackendUnavailable = static_cast<uint32_t>(0x4u),
__E_Uninitialized = static_cast<uint32_t>(0x5u),
__E_BackendDataParsingError = static_cast<uint32_t>(0x6u),
__E_BackendClientError = static_cast<uint32_t>(0x7u),
__E_UserNotLoggedIn = static_cast<uint32_t>(0x8u),
__E_NullPointer = static_cast<uint32_t>(0x9u),
__E_LoginAttemptExpired = static_cast<uint32_t>(0xau),
__E_Fatal = static_cast<uint32_t>(0xbu),
__E_RateLimiterBackoff = static_cast<uint32_t>(0xcu),
__E_InvalidTrackingId = static_cast<uint32_t>(0xdu),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReturnCode_Unwrapped () const noexcept {
return static_cast<__ReturnCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ReturnCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr ReturnCode(uint32_t  value__) noexcept;

/// @brief Field BackendClientError value: U32(7)
static ::Liv::Lck::Core::FFI::ReturnCode const BackendClientError;

/// @brief Field BackendDataParsingError value: U32(6)
static ::Liv::Lck::Core::FFI::ReturnCode const BackendDataParsingError;

/// @brief Field BackendUnavailable value: U32(4)
static ::Liv::Lck::Core::FFI::ReturnCode const BackendUnavailable;

/// @brief Field Error value: U32(1)
static ::Liv::Lck::Core::FFI::ReturnCode const Error;

/// @brief Field Fatal value: U32(11)
static ::Liv::Lck::Core::FFI::ReturnCode const Fatal;

/// @brief Field InvalidArgument value: U32(3)
static ::Liv::Lck::Core::FFI::ReturnCode const InvalidArgument;

/// @brief Field InvalidTrackingId value: U32(13)
static ::Liv::Lck::Core::FFI::ReturnCode const InvalidTrackingId;

/// @brief Field LoginAttemptExpired value: U32(10)
static ::Liv::Lck::Core::FFI::ReturnCode const LoginAttemptExpired;

/// @brief Field NullPointer value: U32(9)
static ::Liv::Lck::Core::FFI::ReturnCode const NullPointer;

/// @brief Field Ok value: U32(0)
static ::Liv::Lck::Core::FFI::ReturnCode const Ok;

/// @brief Field Panic value: U32(2)
static ::Liv::Lck::Core::FFI::ReturnCode const Panic;

/// @brief Field RateLimiterBackoff value: U32(12)
static ::Liv::Lck::Core::FFI::ReturnCode const RateLimiterBackoff;

/// @brief Field Uninitialized value: U32(5)
static ::Liv::Lck::Core::FFI::ReturnCode const Uninitialized;

/// @brief Field UserNotLoggedIn value: U32(8)
static ::Liv::Lck::Core::FFI::ReturnCode const UserNotLoggedIn;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31942};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::FFI::ReturnCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::FFI::ReturnCode) == 0x4, "Size mismatch!");

} // namespace end def Liv::Lck::Core::FFI
