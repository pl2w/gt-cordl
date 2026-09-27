#pragma once
// IWYU pragma private; include "Liv/Lck/Telemetry/ILckTelemetryClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILckTelemetryClient)
namespace Liv::Lck::Telemetry {
class LckTelemetryEvent;
}
// Forward declare root types
namespace Liv::Lck::Telemetry {
class ILckTelemetryClient;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Telemetry::ILckTelemetryClient*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Telemetry::ILckTelemetryClient*, "Liv.Lck.Telemetry", "ILckTelemetryClient");
// Dependencies 
namespace Liv::Lck::Telemetry {
// Is value type: false
// CS Name: Liv.Lck.Telemetry.ILckTelemetryClient
class CORDL_TYPE ILckTelemetryClient {
public:
// Declarations
/// @brief Method SendTelemetry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SendTelemetry(::Liv::Lck::Telemetry::LckTelemetryEvent*  lckTelemetryEvent) ;

// Ctor Parameters [CppParam { name: "", ty: "ILckTelemetryClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckTelemetryClient(ILckTelemetryClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24906};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::Telemetry
