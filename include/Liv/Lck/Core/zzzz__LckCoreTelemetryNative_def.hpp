#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LckCoreTelemetryNative.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckCoreTelemetryNative)
namespace Liv::Lck::Core {
struct LckTelemetryContextType;
}
namespace Liv::Lck::Core {
struct LckTelemetryEventType;
}
namespace Liv::Lck::Core {
struct SerializationType;
}
namespace Liv::Lck::Core {
struct TelemetryReturnCode;
}
namespace System {
struct IntPtr;
}
namespace System {
struct UIntPtr;
}
// Forward declare root types
namespace Liv::Lck::Core {
class LckCoreTelemetryNative;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Core::LckCoreTelemetryNative*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::LckCoreTelemetryNative*, "Liv.Lck.Core", "LckCoreTelemetryNative");
// Dependencies System.Object
namespace Liv::Lck::Core {
// Is value type: false
// CS Name: Liv.Lck.Core.LckCoreTelemetryNative
class CORDL_TYPE LckCoreTelemetryNative : public ::System::Object {
public:
// Declarations
/// @brief Method clear_context, addr 0x9d0169c, size 0x80, virtual false, abstract: false, final false
static inline ::Liv::Lck::Core::TelemetryReturnCode clear_context(::Liv::Lck::Core::LckTelemetryContextType  context_type) ;

/// @brief Method send_telemetry_event_with_context, addr 0x9d015fc, size 0xa0, virtual false, abstract: false, final false
static inline ::Liv::Lck::Core::TelemetryReturnCode send_telemetry_event_with_context(::Liv::Lck::Core::LckTelemetryEventType  telemetry_event_type, ::System::IntPtr  serialized_context_data_ptr, ::System::UIntPtr  len, ::Liv::Lck::Core::SerializationType  serialization_type) ;

/// @brief Method send_telemetry_event_without_context, addr 0x9d0157c, size 0x80, virtual false, abstract: false, final false
static inline ::Liv::Lck::Core::TelemetryReturnCode send_telemetry_event_without_context(::Liv::Lck::Core::LckTelemetryEventType  telemetry_event_type) ;

/// @brief Method set_telemetry_context_from_serialized_data, addr 0x9d0171c, size 0xa0, virtual false, abstract: false, final false
static inline ::Liv::Lck::Core::TelemetryReturnCode set_telemetry_context_from_serialized_data(::Liv::Lck::Core::LckTelemetryContextType  context_type, ::System::IntPtr  serialized_context_data_ptr, ::System::UIntPtr  len, ::Liv::Lck::Core::SerializationType  serialization_type) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCoreTelemetryNative() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCoreTelemetryNative", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCoreTelemetryNative(LckCoreTelemetryNative && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCoreTelemetryNative", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCoreTelemetryNative(LckCoreTelemetryNative const& ) = delete;

/// @brief Field __DllName offset 0xffffffff size 0x8
static constexpr ::ConstString  __DllName{u"lck_core"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31929};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Core::LckCoreTelemetryNative) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Core
