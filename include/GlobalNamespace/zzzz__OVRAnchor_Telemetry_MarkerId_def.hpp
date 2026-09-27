#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_Telemetry_MarkerId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRAnchor_Telemetry_MarkerId)
// Forward declare root types
namespace GlobalNamespace {
struct Telemetry_OVRAnchor_MarkerId;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, "", "OVRAnchor/Telemetry/MarkerId");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/Telemetry/MarkerId
struct CORDL_TYPE Telemetry_OVRAnchor_MarkerId {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Telemetry_OVRAnchor_MarkerId_Unwrapped
enum struct __Telemetry_OVRAnchor_MarkerId_Unwrapped : int32_t {
__E_DiscoverSpaces = static_cast<int32_t>(0x9b8056f),
__E_SaveSpaces = static_cast<int32_t>(0x9b80d4e),
__E_EraseSpaces = static_cast<int32_t>(0x9b8204e),
__E_QuerySpaces = static_cast<int32_t>(0x9b83c86),
__E_SaveSpaceList = static_cast<int32_t>(0x9b82cd8),
__E_EraseSingleSpace = static_cast<int32_t>(0x9b8220c),
__E_ConfigureTracker = static_cast<int32_t>(0x9b8394d),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Telemetry_OVRAnchor_MarkerId_Unwrapped () const noexcept {
return static_cast<__Telemetry_OVRAnchor_MarkerId_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Telemetry_OVRAnchor_MarkerId() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Telemetry_OVRAnchor_MarkerId(int32_t  value__) noexcept;

/// @brief Field ConfigureTracker value: I32(163068237)
static ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId const ConfigureTracker;

/// @brief Field DiscoverSpaces value: I32(163054959)
static ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId const DiscoverSpaces;

/// @brief Field EraseSingleSpace value: I32(163062284)
static ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId const EraseSingleSpace;

/// @brief Field EraseSpaces value: I32(163061838)
static ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId const EraseSpaces;

/// @brief Field QuerySpaces value: I32(163069062)
static ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId const QuerySpaces;

/// @brief Field SaveSpaceList value: I32(163065048)
static ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId const SaveSpaceList;

/// @brief Field SaveSpaces value: I32(163056974)
static ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId const SaveSpaces;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11818};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
