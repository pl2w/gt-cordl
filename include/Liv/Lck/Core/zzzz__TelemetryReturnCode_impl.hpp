#pragma once
// IWYU pragma private; include "Liv/Lck/Core/TelemetryReturnCode.hpp"
#include "Liv/Lck/Core/zzzz__TelemetryReturnCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Core::TelemetryReturnCode::TelemetryReturnCode(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::TelemetryReturnCode::TelemetryReturnCode()   {
}
constexpr ::Liv::Lck::Core::TelemetryReturnCode  Liv::Lck::Core::TelemetryReturnCode::Ok{static_cast<uint32_t>(0x0u)};
constexpr ::Liv::Lck::Core::TelemetryReturnCode  Liv::Lck::Core::TelemetryReturnCode::Panic{static_cast<uint32_t>(0x1u)};
constexpr ::Liv::Lck::Core::TelemetryReturnCode  Liv::Lck::Core::TelemetryReturnCode::FailedToClearContext{static_cast<uint32_t>(0x2u)};
constexpr ::Liv::Lck::Core::TelemetryReturnCode  Liv::Lck::Core::TelemetryReturnCode::FailedToSetContext{static_cast<uint32_t>(0x3u)};
constexpr ::Liv::Lck::Core::TelemetryReturnCode  Liv::Lck::Core::TelemetryReturnCode::FailedToRetrieveState{static_cast<uint32_t>(0x4u)};
constexpr ::Liv::Lck::Core::TelemetryReturnCode  Liv::Lck::Core::TelemetryReturnCode::FailedToDeserializeContext{static_cast<uint32_t>(0x5u)};
constexpr ::Liv::Lck::Core::TelemetryReturnCode  Liv::Lck::Core::TelemetryReturnCode::InvalidArgument{static_cast<uint32_t>(0x6u)};
