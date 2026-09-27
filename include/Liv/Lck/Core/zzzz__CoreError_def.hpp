#pragma once
// IWYU pragma private; include "Liv/Lck/Core/CoreError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CoreError)
// Forward declare root types
namespace Liv::Lck::Core {
struct CoreError;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::Core::CoreError);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::CoreError, "Liv.Lck.Core", "CoreError");
// Dependencies 
namespace Liv::Lck::Core {
// Is value type: true
// CS Name: Liv.Lck.Core.CoreError
struct CORDL_TYPE CoreError {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CoreError_Unwrapped
enum struct __CoreError_Unwrapped : int32_t {
__E_InternalError = static_cast<int32_t>(0x0),
__E_MissingTrackingId = static_cast<int32_t>(0x1),
__E_InvalidArgument = static_cast<int32_t>(0x2),
__E_UserNotLoggedIn = static_cast<int32_t>(0x3),
__E_FailedToCacheCosmetics = static_cast<int32_t>(0x4),
__E_ServiceUnavailable = static_cast<int32_t>(0x5),
__E_RateLimiterBackoff = static_cast<int32_t>(0x6),
__E_LoginAttemptExpired = static_cast<int32_t>(0x7),
__E_InvalidTrackingId = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CoreError_Unwrapped () const noexcept {
return static_cast<__CoreError_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CoreError() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CoreError(int32_t  value__) noexcept;

/// @brief Field FailedToCacheCosmetics value: I32(4)
static ::Liv::Lck::Core::CoreError const FailedToCacheCosmetics;

/// @brief Field InternalError value: I32(0)
static ::Liv::Lck::Core::CoreError const InternalError;

/// @brief Field InvalidArgument value: I32(2)
static ::Liv::Lck::Core::CoreError const InvalidArgument;

/// @brief Field InvalidTrackingId value: I32(8)
static ::Liv::Lck::Core::CoreError const InvalidTrackingId;

/// @brief Field LoginAttemptExpired value: I32(7)
static ::Liv::Lck::Core::CoreError const LoginAttemptExpired;

/// @brief Field MissingTrackingId value: I32(1)
static ::Liv::Lck::Core::CoreError const MissingTrackingId;

/// @brief Field RateLimiterBackoff value: I32(6)
static ::Liv::Lck::Core::CoreError const RateLimiterBackoff;

/// @brief Field ServiceUnavailable value: I32(5)
static ::Liv::Lck::Core::CoreError const ServiceUnavailable;

/// @brief Field UserNotLoggedIn value: I32(3)
static ::Liv::Lck::Core::CoreError const UserNotLoggedIn;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31910};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::CoreError, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::CoreError) == 0x4, "Size mismatch!");

} // namespace end def Liv::Lck::Core
