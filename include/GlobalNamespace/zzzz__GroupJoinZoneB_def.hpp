#pragma once
// IWYU pragma private; include "GlobalNamespace/GroupJoinZoneB.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GroupJoinZoneB)
// Forward declare root types
namespace GlobalNamespace {
struct GroupJoinZoneB;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GroupJoinZoneB);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GroupJoinZoneB, "", "GroupJoinZoneB");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GroupJoinZoneB
struct CORDL_TYPE GroupJoinZoneB {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GroupJoinZoneB_Unwrapped
enum struct __GroupJoinZoneB_Unwrapped : int32_t {
__E_HoverboardTunnel = static_cast<int32_t>(0x1),
__E_Critters = static_cast<int32_t>(0x2),
__E_CrittersTunnel = static_cast<int32_t>(0x4),
__E_GhostReactor = static_cast<int32_t>(0x8),
__E_MonkeBlocksShared = static_cast<int32_t>(0x10),
__E_MonkeBlocksSharedTunnel = static_cast<int32_t>(0x20),
__E_GhostReactorTunnel = static_cast<int32_t>(0x40),
__E_RankedForest = static_cast<int32_t>(0x80),
__E_RankedForestTunnel = static_cast<int32_t>(0x100),
__E_GhostReactorDrill = static_cast<int32_t>(0x200),
__E_VIMExperience1 = static_cast<int32_t>(0x400),
__E_VIMExperience2 = static_cast<int32_t>(0x800),
__E_VIMExperience3 = static_cast<int32_t>(0x1000),
__E_VIMExperience4 = static_cast<int32_t>(0x2000),
__E_SpaceMap = static_cast<int32_t>(0x4000),
__E_SpaceMapTunnel = static_cast<int32_t>(0x8000),
__E_Mall = static_cast<int32_t>(0x10000),
__E_SilverbackStudios = static_cast<int32_t>(0x20000),
__E_SilverbackEntrance = static_cast<int32_t>(0x40000),
__E_MonkeBlocksEntrance = static_cast<int32_t>(0x80000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GroupJoinZoneB_Unwrapped () const noexcept {
return static_cast<__GroupJoinZoneB_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GroupJoinZoneB() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GroupJoinZoneB(int32_t  value__) noexcept;

/// @brief Field Critters value: I32(2)
static ::GlobalNamespace::GroupJoinZoneB const Critters;

/// @brief Field CrittersTunnel value: I32(4)
static ::GlobalNamespace::GroupJoinZoneB const CrittersTunnel;

/// @brief Field GhostReactor value: I32(8)
static ::GlobalNamespace::GroupJoinZoneB const GhostReactor;

/// @brief Field GhostReactorDrill value: I32(512)
static ::GlobalNamespace::GroupJoinZoneB const GhostReactorDrill;

/// @brief Field GhostReactorTunnel value: I32(64)
static ::GlobalNamespace::GroupJoinZoneB const GhostReactorTunnel;

/// @brief Field HoverboardTunnel value: I32(1)
static ::GlobalNamespace::GroupJoinZoneB const HoverboardTunnel;

/// @brief Field Mall value: I32(65536)
static ::GlobalNamespace::GroupJoinZoneB const Mall;

/// @brief Field MonkeBlocksEntrance value: I32(524288)
static ::GlobalNamespace::GroupJoinZoneB const MonkeBlocksEntrance;

/// @brief Field MonkeBlocksShared value: I32(16)
static ::GlobalNamespace::GroupJoinZoneB const MonkeBlocksShared;

/// @brief Field MonkeBlocksSharedTunnel value: I32(32)
static ::GlobalNamespace::GroupJoinZoneB const MonkeBlocksSharedTunnel;

/// @brief Field RankedForest value: I32(128)
static ::GlobalNamespace::GroupJoinZoneB const RankedForest;

/// @brief Field RankedForestTunnel value: I32(256)
static ::GlobalNamespace::GroupJoinZoneB const RankedForestTunnel;

/// @brief Field SilverbackEntrance value: I32(262144)
static ::GlobalNamespace::GroupJoinZoneB const SilverbackEntrance;

/// @brief Field SilverbackStudios value: I32(131072)
static ::GlobalNamespace::GroupJoinZoneB const SilverbackStudios;

/// @brief Field SpaceMap value: I32(16384)
static ::GlobalNamespace::GroupJoinZoneB const SpaceMap;

/// @brief Field SpaceMapTunnel value: I32(32768)
static ::GlobalNamespace::GroupJoinZoneB const SpaceMapTunnel;

/// @brief Field VIMExperience1 value: I32(1024)
static ::GlobalNamespace::GroupJoinZoneB const VIMExperience1;

/// @brief Field VIMExperience2 value: I32(2048)
static ::GlobalNamespace::GroupJoinZoneB const VIMExperience2;

/// @brief Field VIMExperience3 value: I32(4096)
static ::GlobalNamespace::GroupJoinZoneB const VIMExperience3;

/// @brief Field VIMExperience4 value: I32(8192)
static ::GlobalNamespace::GroupJoinZoneB const VIMExperience4;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1712};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GroupJoinZoneB, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GroupJoinZoneB) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
