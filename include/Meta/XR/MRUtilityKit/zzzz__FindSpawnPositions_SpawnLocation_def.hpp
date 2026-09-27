#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/FindSpawnPositions_SpawnLocation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FindSpawnPositions_SpawnLocation)
// Forward declare root types
namespace GlobalNamespace {
struct FindSpawnPositions_SpawnLocation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FindSpawnPositions_SpawnLocation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FindSpawnPositions_SpawnLocation, "Meta.XR.MRUtilityKit", "FindSpawnPositions/SpawnLocation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.FindSpawnPositions/SpawnLocation
struct CORDL_TYPE FindSpawnPositions_SpawnLocation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FindSpawnPositions_SpawnLocation_Unwrapped
enum struct __FindSpawnPositions_SpawnLocation_Unwrapped : int32_t {
__E_Floating = static_cast<int32_t>(0x0),
__E_AnySurface = static_cast<int32_t>(0x1),
__E_VerticalSurfaces = static_cast<int32_t>(0x2),
__E_OnTopOfSurfaces = static_cast<int32_t>(0x3),
__E_HangingDown = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FindSpawnPositions_SpawnLocation_Unwrapped () const noexcept {
return static_cast<__FindSpawnPositions_SpawnLocation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FindSpawnPositions_SpawnLocation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FindSpawnPositions_SpawnLocation(int32_t  value__) noexcept;

/// @brief Field AnySurface value: I32(1)
static ::GlobalNamespace::FindSpawnPositions_SpawnLocation const AnySurface;

/// @brief Field Floating value: I32(0)
static ::GlobalNamespace::FindSpawnPositions_SpawnLocation const Floating;

/// @brief Field HangingDown value: I32(4)
static ::GlobalNamespace::FindSpawnPositions_SpawnLocation const HangingDown;

/// @brief Field OnTopOfSurfaces value: I32(3)
static ::GlobalNamespace::FindSpawnPositions_SpawnLocation const OnTopOfSurfaces;

/// @brief Field VerticalSurfaces value: I32(2)
static ::GlobalNamespace::FindSpawnPositions_SpawnLocation const VerticalSurfaces;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25779};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FindSpawnPositions_SpawnLocation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FindSpawnPositions_SpawnLocation) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
