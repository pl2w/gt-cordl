#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_Telemetry_Key.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRAnchor_Telemetry_Key)
namespace GlobalNamespace {
struct OVRTelemetryMarker;
}
namespace GlobalNamespace {
struct Telemetry_OVRAnchor_MarkerId;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct Telemetry_OVRAnchor_Key;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Telemetry_OVRAnchor_Key);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Telemetry_OVRAnchor_Key, "", "OVRAnchor/Telemetry/Key");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/Telemetry/Key
struct CORDL_TYPE Telemetry_OVRAnchor_Key {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>*() ;

/// @brief Method Equals, addr 0xa56d804, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa56d7e0, size 0x24, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::Telemetry_OVRAnchor_Key  other) ;

/// @brief Method GetHashCode, addr 0xa56d88c, size 0x3c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0xa56d450, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRTelemetryMarker  marker, uint64_t  requestId) ;

/// @brief Method .ctor, addr 0xa56d540, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId  markerId, uint64_t  requestId) ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>"
constexpr ::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>* i___System__IEquatable_1___GlobalNamespace__Telemetry_OVRAnchor_Key_() ;

// Ctor Parameters []
// @brief default ctor
constexpr Telemetry_OVRAnchor_Key() ;

// Ctor Parameters [CppParam { name: "_markerId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_requestId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr Telemetry_OVRAnchor_Key(int32_t  _markerId, uint64_t  _requestId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11817};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _markerId, offset: 0x0, size: 0x4, def value: None
 int32_t  _markerId;

/// @brief Field _requestId, offset: 0x8, size: 0x8, def value: None
 uint64_t  _requestId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Telemetry_OVRAnchor_Key, _markerId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Telemetry_OVRAnchor_Key, _requestId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Telemetry_OVRAnchor_Key) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
