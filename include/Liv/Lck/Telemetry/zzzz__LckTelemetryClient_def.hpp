#pragma once
// IWYU pragma private; include "Liv/Lck/Telemetry/LckTelemetryClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LckTelemetryClient)
namespace Liv::Lck::Core::Serialization {
class ILckSerializer;
}
namespace Liv::Lck::Telemetry {
class ILckTelemetryClient;
}
namespace Liv::Lck::Telemetry {
class LckTelemetryEvent;
}
// Forward declare root types
namespace Liv::Lck::Telemetry {
class LckTelemetryClient;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Telemetry::LckTelemetryClient*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Telemetry::LckTelemetryClient*, "Liv.Lck.Telemetry", "LckTelemetryClient");
// Dependencies System.Object
namespace Liv::Lck::Telemetry {
// Is value type: false
// CS Name: Liv.Lck.Telemetry.LckTelemetryClient
class CORDL_TYPE LckTelemetryClient : public ::System::Object {
public:
// Declarations
/// @brief Field _serializer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__serializer, put=__cordl_internal_set__serializer)) ::Liv::Lck::Core::Serialization::ILckSerializer*  _serializer;

/// @brief Convert operator to "::Liv::Lck::Telemetry::ILckTelemetryClient"
constexpr operator  ::Liv::Lck::Telemetry::ILckTelemetryClient*() noexcept;

/// @brief [Preserve]
static inline ::Liv::Lck::Telemetry::LckTelemetryClient* New_ctor(::Liv::Lck::Core::Serialization::ILckSerializer*  serializer) ;

/// @brief Method SendTelemetry, addr 0x9d4b674, size 0x80, virtual true, abstract: false, final true
inline void SendTelemetry(::Liv::Lck::Telemetry::LckTelemetryEvent*  lckTelemetryEvent) ;

/// @brief Method SerializeAndSend, addr 0x9d4b6f4, size 0x474, virtual false, abstract: false, final false
inline void SerializeAndSend(::Liv::Lck::Telemetry::LckTelemetryEvent*  lckTelemetryEvent) ;

constexpr ::Liv::Lck::Core::Serialization::ILckSerializer* const& __cordl_internal_get__serializer() const;

constexpr ::Liv::Lck::Core::Serialization::ILckSerializer*& __cordl_internal_get__serializer() ;

constexpr void __cordl_internal_set__serializer(::Liv::Lck::Core::Serialization::ILckSerializer*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9d4b644, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::Core::Serialization::ILckSerializer*  serializer) ;

/// @brief Convert to "::Liv::Lck::Telemetry::ILckTelemetryClient"
constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient* i___Liv__Lck__Telemetry__ILckTelemetryClient() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckTelemetryClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckTelemetryClient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckTelemetryClient(LckTelemetryClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckTelemetryClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckTelemetryClient(LckTelemetryClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24905};

/// @brief Field _serializer, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::Core::Serialization::ILckSerializer*  ____serializer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Telemetry::LckTelemetryClient, ____serializer) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Telemetry::LckTelemetryClient) == 0x18, "Size mismatch!");

} // namespace end def Liv::Lck::Telemetry
