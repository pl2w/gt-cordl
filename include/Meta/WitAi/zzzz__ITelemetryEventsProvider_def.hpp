#pragma once
// IWYU pragma private; include "Meta/WitAi/ITelemetryEventsProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITelemetryEventsProvider)
namespace Meta::WitAi::Events {
class TelemetryEvents;
}
// Forward declare root types
namespace Meta::WitAi {
class ITelemetryEventsProvider;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::ITelemetryEventsProvider*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::ITelemetryEventsProvider*, "Meta.WitAi", "ITelemetryEventsProvider");
// Dependencies 
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.ITelemetryEventsProvider
class CORDL_TYPE ITelemetryEventsProvider {
public:
// Declarations
 __declspec(property(get=get_TelemetryEvents)) ::Meta::WitAi::Events::TelemetryEvents*  TelemetryEvents;

/// @brief Method get_TelemetryEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Events::TelemetryEvents* get_TelemetryEvents() ;

// Ctor Parameters [CppParam { name: "", ty: "ITelemetryEventsProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITelemetryEventsProvider(ITelemetryEventsProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25573};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi
