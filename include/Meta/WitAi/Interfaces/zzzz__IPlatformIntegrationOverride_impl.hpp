#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/IPlatformIntegrationOverride.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IPlatformIntegrationOverride_def.hpp"
#include "Meta/WitAi/zzzz__ITelemetryEventsProvider_def.hpp"
#include "Meta/WitAi/zzzz__IVoiceActivationHandler_def.hpp"
#include "Meta/WitAi/zzzz__IVoiceEventProvider_def.hpp"
#include "Meta/WitAi/zzzz__IVoiceService_def.hpp"
/// @brief Convert operator to "::Meta::WitAi::IVoiceService"
constexpr  Meta::WitAi::Interfaces::IPlatformIntegrationOverride::operator ::Meta::WitAi::IVoiceService*() noexcept {
return static_cast<::Meta::WitAi::IVoiceService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::IVoiceService"
constexpr ::Meta::WitAi::IVoiceService* Meta::WitAi::Interfaces::IPlatformIntegrationOverride::i___Meta__WitAi__IVoiceService() noexcept {
return static_cast<::Meta::WitAi::IVoiceService*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::IVoiceEventProvider"
constexpr  Meta::WitAi::Interfaces::IPlatformIntegrationOverride::operator ::Meta::WitAi::IVoiceEventProvider*() noexcept {
return static_cast<::Meta::WitAi::IVoiceEventProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::IVoiceEventProvider"
constexpr ::Meta::WitAi::IVoiceEventProvider* Meta::WitAi::Interfaces::IPlatformIntegrationOverride::i___Meta__WitAi__IVoiceEventProvider() noexcept {
return static_cast<::Meta::WitAi::IVoiceEventProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::ITelemetryEventsProvider"
constexpr  Meta::WitAi::Interfaces::IPlatformIntegrationOverride::operator ::Meta::WitAi::ITelemetryEventsProvider*() noexcept {
return static_cast<::Meta::WitAi::ITelemetryEventsProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::ITelemetryEventsProvider"
constexpr ::Meta::WitAi::ITelemetryEventsProvider* Meta::WitAi::Interfaces::IPlatformIntegrationOverride::i___Meta__WitAi__ITelemetryEventsProvider() noexcept {
return static_cast<::Meta::WitAi::ITelemetryEventsProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::IVoiceActivationHandler"
constexpr  Meta::WitAi::Interfaces::IPlatformIntegrationOverride::operator ::Meta::WitAi::IVoiceActivationHandler*() noexcept {
return static_cast<::Meta::WitAi::IVoiceActivationHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::IVoiceActivationHandler"
constexpr ::Meta::WitAi::IVoiceActivationHandler* Meta::WitAi::Interfaces::IPlatformIntegrationOverride::i___Meta__WitAi__IVoiceActivationHandler() noexcept {
return static_cast<::Meta::WitAi::IVoiceActivationHandler*>(static_cast<void*>(this));
}
