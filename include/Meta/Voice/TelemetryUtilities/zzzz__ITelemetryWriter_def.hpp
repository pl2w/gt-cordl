#pragma once
// IWYU pragma private; include "Meta/Voice/TelemetryUtilities/ITelemetryWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ITelemetryWriter)
namespace Meta::Voice::TelemetryUtilities {
struct OperationID;
}
namespace Meta::Voice::TelemetryUtilities {
struct RuntimeTelemetryPoint;
}
namespace Meta::Voice::TelemetryUtilities {
struct TerminationReason;
}
// Forward declare root types
namespace Meta::Voice::TelemetryUtilities {
class ITelemetryWriter;
}
// Write type traits
MARK_REF_T(::Meta::Voice::TelemetryUtilities::ITelemetryWriter*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::TelemetryUtilities::ITelemetryWriter*, "Meta.Voice.TelemetryUtilities", "ITelemetryWriter");
// Dependencies 
namespace Meta::Voice::TelemetryUtilities {
// Is value type: false
// CS Name: Meta.Voice.TelemetryUtilities.ITelemetryWriter
class CORDL_TYPE ITelemetryWriter {
public:
// Declarations
/// @brief Method LogEventTermination, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LogEventTermination(::Meta::Voice::TelemetryUtilities::OperationID  operationId, ::Meta::Voice::TelemetryUtilities::TerminationReason  reason, ::StringW  message) ;

/// @brief Method LogPoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LogPoint(::Meta::Voice::TelemetryUtilities::OperationID  operationId, ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  point) ;

// Ctor Parameters [CppParam { name: "", ty: "ITelemetryWriter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITelemetryWriter(ITelemetryWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33054};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::TelemetryUtilities
