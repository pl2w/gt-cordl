#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/IPlatformIntegrationOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPlatformIntegrationOverride)
namespace Meta::WitAi {
class ITelemetryEventsProvider;
}
namespace Meta::WitAi {
class IVoiceActivationHandler;
}
namespace Meta::WitAi {
class IVoiceEventProvider;
}
namespace Meta::WitAi {
class IVoiceService;
}
// Forward declare root types
namespace Meta::WitAi::Interfaces {
class IPlatformIntegrationOverride;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Interfaces::IPlatformIntegrationOverride*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Interfaces::IPlatformIntegrationOverride*, "Meta.WitAi.Interfaces", "IPlatformIntegrationOverride");
// Dependencies 
namespace Meta::WitAi::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.Interfaces.IPlatformIntegrationOverride
class CORDL_TYPE IPlatformIntegrationOverride {
public:
// Declarations
/// @brief Convert operator to "::Meta::WitAi::ITelemetryEventsProvider"
constexpr operator  ::Meta::WitAi::ITelemetryEventsProvider*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::IVoiceActivationHandler"
constexpr operator  ::Meta::WitAi::IVoiceActivationHandler*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::IVoiceEventProvider"
constexpr operator  ::Meta::WitAi::IVoiceEventProvider*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::IVoiceService"
constexpr operator  ::Meta::WitAi::IVoiceService*() noexcept;

/// @brief Convert to "::Meta::WitAi::ITelemetryEventsProvider"
constexpr ::Meta::WitAi::ITelemetryEventsProvider* i___Meta__WitAi__ITelemetryEventsProvider() noexcept;

/// @brief Convert to "::Meta::WitAi::IVoiceActivationHandler"
constexpr ::Meta::WitAi::IVoiceActivationHandler* i___Meta__WitAi__IVoiceActivationHandler() noexcept;

/// @brief Convert to "::Meta::WitAi::IVoiceEventProvider"
constexpr ::Meta::WitAi::IVoiceEventProvider* i___Meta__WitAi__IVoiceEventProvider() noexcept;

/// @brief Convert to "::Meta::WitAi::IVoiceService"
constexpr ::Meta::WitAi::IVoiceService* i___Meta__WitAi__IVoiceService() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IPlatformIntegrationOverride", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPlatformIntegrationOverride(IPlatformIntegrationOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31681};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Interfaces
