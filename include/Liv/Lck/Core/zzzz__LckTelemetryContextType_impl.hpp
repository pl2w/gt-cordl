#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LckTelemetryContextType.hpp"
#include "Liv/Lck/Core/zzzz__LckTelemetryContextType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Core::LckTelemetryContextType::LckTelemetryContextType(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::LckTelemetryContextType::LckTelemetryContextType()   {
}
constexpr ::Liv::Lck::Core::LckTelemetryContextType  Liv::Lck::Core::LckTelemetryContextType::RecordingContext{static_cast<uint32_t>(0x0u)};
constexpr ::Liv::Lck::Core::LckTelemetryContextType  Liv::Lck::Core::LckTelemetryContextType::StreamingContext{static_cast<uint32_t>(0x1u)};
