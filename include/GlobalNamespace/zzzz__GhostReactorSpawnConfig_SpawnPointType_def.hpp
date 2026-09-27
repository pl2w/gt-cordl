#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorSpawnConfig_SpawnPointType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactorSpawnConfig_SpawnPointType)
// Forward declare root types
namespace GlobalNamespace {
struct GhostReactorSpawnConfig_SpawnPointType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType, "", "GhostReactorSpawnConfig/SpawnPointType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GhostReactorSpawnConfig/SpawnPointType
struct CORDL_TYPE GhostReactorSpawnConfig_SpawnPointType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GhostReactorSpawnConfig_SpawnPointType_Unwrapped
enum struct __GhostReactorSpawnConfig_SpawnPointType_Unwrapped : int32_t {
__E_Enemy = static_cast<int32_t>(0x0),
__E_Collectible = static_cast<int32_t>(0x1),
__E_Barrier = static_cast<int32_t>(0x2),
__E_HazardLiquid = static_cast<int32_t>(0x3),
__E_Phantom = static_cast<int32_t>(0x4),
__E_Pest = static_cast<int32_t>(0x5),
__E_Crate = static_cast<int32_t>(0x6),
__E_Tool = static_cast<int32_t>(0x7),
__E_ChaosSeed = static_cast<int32_t>(0x8),
__E_HazardTower = static_cast<int32_t>(0x9),
__E_MiniBoss = static_cast<int32_t>(0xa),
__E_SpawnPointTypeCount = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GhostReactorSpawnConfig_SpawnPointType_Unwrapped () const noexcept {
return static_cast<__GhostReactorSpawnConfig_SpawnPointType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorSpawnConfig_SpawnPointType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GhostReactorSpawnConfig_SpawnPointType(int32_t  value__) noexcept;

/// @brief Field Barrier value: I32(2)
static ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType const Barrier;

/// @brief Field ChaosSeed value: I32(8)
static ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType const ChaosSeed;

/// @brief Field Collectible value: I32(1)
static ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType const Collectible;

/// @brief Field Crate value: I32(6)
static ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType const Crate;

/// @brief Field Enemy value: I32(0)
static ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType const Enemy;

/// @brief Field HazardLiquid value: I32(3)
static ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType const HazardLiquid;

/// @brief Field HazardTower value: I32(9)
static ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType const HazardTower;

/// @brief Field MiniBoss value: I32(10)
static ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType const MiniBoss;

/// @brief Field Pest value: I32(5)
static ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType const Pest;

/// @brief Field Phantom value: I32(4)
static ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType const Phantom;

/// @brief Field SpawnPointTypeCount value: I32(11)
static ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType const SpawnPointTypeCount;

/// @brief Field Tool value: I32(7)
static ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType const Tool;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1834};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
