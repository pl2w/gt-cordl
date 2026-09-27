#pragma once
// IWYU pragma private; include "Liv/Lck/Core/CoreError.hpp"
#include "Liv/Lck/Core/zzzz__CoreError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Core::CoreError::CoreError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::CoreError::CoreError()   {
}
constexpr ::Liv::Lck::Core::CoreError  Liv::Lck::Core::CoreError::InternalError{static_cast<int32_t>(0x0)};
constexpr ::Liv::Lck::Core::CoreError  Liv::Lck::Core::CoreError::MissingTrackingId{static_cast<int32_t>(0x1)};
constexpr ::Liv::Lck::Core::CoreError  Liv::Lck::Core::CoreError::InvalidArgument{static_cast<int32_t>(0x2)};
constexpr ::Liv::Lck::Core::CoreError  Liv::Lck::Core::CoreError::UserNotLoggedIn{static_cast<int32_t>(0x3)};
constexpr ::Liv::Lck::Core::CoreError  Liv::Lck::Core::CoreError::FailedToCacheCosmetics{static_cast<int32_t>(0x4)};
constexpr ::Liv::Lck::Core::CoreError  Liv::Lck::Core::CoreError::ServiceUnavailable{static_cast<int32_t>(0x5)};
constexpr ::Liv::Lck::Core::CoreError  Liv::Lck::Core::CoreError::RateLimiterBackoff{static_cast<int32_t>(0x6)};
constexpr ::Liv::Lck::Core::CoreError  Liv::Lck::Core::CoreError::LoginAttemptExpired{static_cast<int32_t>(0x7)};
constexpr ::Liv::Lck::Core::CoreError  Liv::Lck::Core::CoreError::InvalidTrackingId{static_cast<int32_t>(0x8)};
