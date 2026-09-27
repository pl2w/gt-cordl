#pragma once
// IWYU pragma private; include "Liv/Lck/Core/FFI/ReturnCode.hpp"
#include "Liv/Lck/Core/FFI/zzzz__ReturnCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Core::FFI::ReturnCode::ReturnCode(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::FFI::ReturnCode::ReturnCode()   {
}
constexpr ::Liv::Lck::Core::FFI::ReturnCode  Liv::Lck::Core::FFI::ReturnCode::Ok{static_cast<uint32_t>(0x0u)};
constexpr ::Liv::Lck::Core::FFI::ReturnCode  Liv::Lck::Core::FFI::ReturnCode::Error{static_cast<uint32_t>(0x1u)};
constexpr ::Liv::Lck::Core::FFI::ReturnCode  Liv::Lck::Core::FFI::ReturnCode::Panic{static_cast<uint32_t>(0x2u)};
constexpr ::Liv::Lck::Core::FFI::ReturnCode  Liv::Lck::Core::FFI::ReturnCode::InvalidArgument{static_cast<uint32_t>(0x3u)};
constexpr ::Liv::Lck::Core::FFI::ReturnCode  Liv::Lck::Core::FFI::ReturnCode::BackendUnavailable{static_cast<uint32_t>(0x4u)};
constexpr ::Liv::Lck::Core::FFI::ReturnCode  Liv::Lck::Core::FFI::ReturnCode::Uninitialized{static_cast<uint32_t>(0x5u)};
constexpr ::Liv::Lck::Core::FFI::ReturnCode  Liv::Lck::Core::FFI::ReturnCode::BackendDataParsingError{static_cast<uint32_t>(0x6u)};
constexpr ::Liv::Lck::Core::FFI::ReturnCode  Liv::Lck::Core::FFI::ReturnCode::BackendClientError{static_cast<uint32_t>(0x7u)};
constexpr ::Liv::Lck::Core::FFI::ReturnCode  Liv::Lck::Core::FFI::ReturnCode::UserNotLoggedIn{static_cast<uint32_t>(0x8u)};
constexpr ::Liv::Lck::Core::FFI::ReturnCode  Liv::Lck::Core::FFI::ReturnCode::NullPointer{static_cast<uint32_t>(0x9u)};
constexpr ::Liv::Lck::Core::FFI::ReturnCode  Liv::Lck::Core::FFI::ReturnCode::LoginAttemptExpired{static_cast<uint32_t>(0xau)};
constexpr ::Liv::Lck::Core::FFI::ReturnCode  Liv::Lck::Core::FFI::ReturnCode::Fatal{static_cast<uint32_t>(0xbu)};
constexpr ::Liv::Lck::Core::FFI::ReturnCode  Liv::Lck::Core::FFI::ReturnCode::RateLimiterBackoff{static_cast<uint32_t>(0xcu)};
constexpr ::Liv::Lck::Core::FFI::ReturnCode  Liv::Lck::Core::FFI::ReturnCode::InvalidTrackingId{static_cast<uint32_t>(0xdu)};
