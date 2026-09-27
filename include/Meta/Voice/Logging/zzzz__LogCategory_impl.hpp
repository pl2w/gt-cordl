#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/LogCategory.hpp"
#include "Meta/Voice/Logging/zzzz__LogCategory_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::Logging::LogCategory::LogCategory(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::LogCategory::LogCategory()   {
}
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::Global{static_cast<int32_t>(0x0)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::Conduit{static_cast<int32_t>(0x1)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::ManifestGenerator{static_cast<int32_t>(0x2)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::AssemblyMiner{static_cast<int32_t>(0x3)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::Logging{static_cast<int32_t>(0x4)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::ErrorMitigator{static_cast<int32_t>(0x5)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::ContextSystem{static_cast<int32_t>(0x6)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::Requests{static_cast<int32_t>(0x7)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::TextToSpeech{static_cast<int32_t>(0x8)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::Audio{static_cast<int32_t>(0x9)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::ActivationBlocker{static_cast<int32_t>(0xa)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::Listener{static_cast<int32_t>(0xb)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::Speaker{static_cast<int32_t>(0xc)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::ActivationSystem{static_cast<int32_t>(0xd)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::SpeechService{static_cast<int32_t>(0xe)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::Network{static_cast<int32_t>(0xf)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::Input{static_cast<int32_t>(0x10)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::Output{static_cast<int32_t>(0x11)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::Encoding{static_cast<int32_t>(0x12)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::WebSockets{static_cast<int32_t>(0x13)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::Editor{static_cast<int32_t>(0x14)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::Composer{static_cast<int32_t>(0x15)};
constexpr ::Meta::Voice::Logging::LogCategory  Meta::Voice::Logging::LogCategory::Telemetry{static_cast<int32_t>(0x16)};
