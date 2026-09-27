#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/NotificationType.hpp"
#include "Liv/Lck/Tablet/zzzz__NotificationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Tablet::NotificationType::NotificationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Tablet::NotificationType::NotificationType()   {
}
constexpr ::Liv::Lck::Tablet::NotificationType  Liv::Lck::Tablet::NotificationType::VideoSaved{static_cast<int32_t>(0x0)};
constexpr ::Liv::Lck::Tablet::NotificationType  Liv::Lck::Tablet::NotificationType::PhotoSaved{static_cast<int32_t>(0x1)};
constexpr ::Liv::Lck::Tablet::NotificationType  Liv::Lck::Tablet::NotificationType::EnterStreamCode{static_cast<int32_t>(0x2)};
constexpr ::Liv::Lck::Tablet::NotificationType  Liv::Lck::Tablet::NotificationType::ConfigureStream{static_cast<int32_t>(0x3)};
constexpr ::Liv::Lck::Tablet::NotificationType  Liv::Lck::Tablet::NotificationType::InternalError{static_cast<int32_t>(0x4)};
constexpr ::Liv::Lck::Tablet::NotificationType  Liv::Lck::Tablet::NotificationType::MissingTrackingId{static_cast<int32_t>(0x5)};
constexpr ::Liv::Lck::Tablet::NotificationType  Liv::Lck::Tablet::NotificationType::InvalidTrackingId{static_cast<int32_t>(0x6)};
constexpr ::Liv::Lck::Tablet::NotificationType  Liv::Lck::Tablet::NotificationType::InvalidArgument{static_cast<int32_t>(0x7)};
constexpr ::Liv::Lck::Tablet::NotificationType  Liv::Lck::Tablet::NotificationType::UnknownStreamingError{static_cast<int32_t>(0x8)};
constexpr ::Liv::Lck::Tablet::NotificationType  Liv::Lck::Tablet::NotificationType::ServiceUnavailable{static_cast<int32_t>(0x9)};
constexpr ::Liv::Lck::Tablet::NotificationType  Liv::Lck::Tablet::NotificationType::RateLimiterBackoff{static_cast<int32_t>(0xa)};
constexpr ::Liv::Lck::Tablet::NotificationType  Liv::Lck::Tablet::NotificationType::EchoInfo{static_cast<int32_t>(0xb)};
constexpr ::Liv::Lck::Tablet::NotificationType  Liv::Lck::Tablet::NotificationType::EchoLowStorage{static_cast<int32_t>(0xc)};
constexpr ::Liv::Lck::Tablet::NotificationType  Liv::Lck::Tablet::NotificationType::EchoError{static_cast<int32_t>(0xd)};
constexpr ::Liv::Lck::Tablet::NotificationType  Liv::Lck::Tablet::NotificationType::HeadsetView{static_cast<int32_t>(0xe)};
