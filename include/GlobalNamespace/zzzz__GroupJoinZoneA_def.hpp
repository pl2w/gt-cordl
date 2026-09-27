#pragma once
// IWYU pragma private; include "GlobalNamespace/GroupJoinZoneA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GroupJoinZoneA)
// Forward declare root types
namespace GlobalNamespace {
struct GroupJoinZoneA;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GroupJoinZoneA);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GroupJoinZoneA, "", "GroupJoinZoneA");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GroupJoinZoneA
struct CORDL_TYPE GroupJoinZoneA {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __GroupJoinZoneA_Unwrapped
enum struct __GroupJoinZoneA_Unwrapped : uint32_t {
__E_Basement = static_cast<uint32_t>(0x1u),
__E_Beach = static_cast<uint32_t>(0x2u),
__E_Cave = static_cast<uint32_t>(0x4u),
__E_Canyon = static_cast<uint32_t>(0x8u),
__E_City = static_cast<uint32_t>(0x10u),
__E_Clouds = static_cast<uint32_t>(0x20u),
__E_Forest = static_cast<uint32_t>(0x40u),
__E_Mountain = static_cast<uint32_t>(0x80u),
__E_Rotating = static_cast<uint32_t>(0x100u),
__E_Mines = static_cast<uint32_t>(0x200u),
__E_Arena = static_cast<uint32_t>(0x400u),
__E_ArenaTunnel = static_cast<uint32_t>(0x800u),
__E_Hoverboard = static_cast<uint32_t>(0x1000u),
__E_TreeRoom = static_cast<uint32_t>(0x2000u),
__E_MountainTunnel = static_cast<uint32_t>(0x4000u),
__E_BasementTunnel = static_cast<uint32_t>(0x8000u),
__E_RotatingTunnel = static_cast<uint32_t>(0x10000u),
__E_BeachTunnel = static_cast<uint32_t>(0x20000u),
__E_CloudsElevator = static_cast<uint32_t>(0x40000u),
__E_MinesTunnel = static_cast<uint32_t>(0x80000u),
__E_CavesComputer = static_cast<uint32_t>(0x100000u),
__E_Metropolis = static_cast<uint32_t>(0x200000u),
__E_MetropolisTunnel = static_cast<uint32_t>(0x400000u),
__E_Attic = static_cast<uint32_t>(0x800000u),
__E_Arcade = static_cast<uint32_t>(0x1000000u),
__E_ArcadeTunnel = static_cast<uint32_t>(0x2000000u),
__E_Bayou = static_cast<uint32_t>(0x4000000u),
__E_BayouTunnel = static_cast<uint32_t>(0x8000000u),
__E_CustomMaps = static_cast<uint32_t>(0x10000000u),
__E_MallConnector = static_cast<uint32_t>(0x20000000u),
__E_MonkeBlocks = static_cast<uint32_t>(0x40000000u),
__E_GTFC = static_cast<uint32_t>(0x80000000u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GroupJoinZoneA_Unwrapped () const noexcept {
return static_cast<__GroupJoinZoneA_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GroupJoinZoneA() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr GroupJoinZoneA(uint32_t  value__) noexcept;

/// @brief Field Arcade value: U32(16777216)
static ::GlobalNamespace::GroupJoinZoneA const Arcade;

/// @brief Field ArcadeTunnel value: U32(33554432)
static ::GlobalNamespace::GroupJoinZoneA const ArcadeTunnel;

/// @brief Field Arena value: U32(1024)
static ::GlobalNamespace::GroupJoinZoneA const Arena;

/// @brief Field ArenaTunnel value: U32(2048)
static ::GlobalNamespace::GroupJoinZoneA const ArenaTunnel;

/// @brief Field Attic value: U32(8388608)
static ::GlobalNamespace::GroupJoinZoneA const Attic;

/// @brief Field Basement value: U32(1)
static ::GlobalNamespace::GroupJoinZoneA const Basement;

/// @brief Field BasementTunnel value: U32(32768)
static ::GlobalNamespace::GroupJoinZoneA const BasementTunnel;

/// @brief Field Bayou value: U32(67108864)
static ::GlobalNamespace::GroupJoinZoneA const Bayou;

/// @brief Field BayouTunnel value: U32(134217728)
static ::GlobalNamespace::GroupJoinZoneA const BayouTunnel;

/// @brief Field Beach value: U32(2)
static ::GlobalNamespace::GroupJoinZoneA const Beach;

/// @brief Field BeachTunnel value: U32(131072)
static ::GlobalNamespace::GroupJoinZoneA const BeachTunnel;

/// @brief Field Canyon value: U32(8)
static ::GlobalNamespace::GroupJoinZoneA const Canyon;

/// @brief Field Cave value: U32(4)
static ::GlobalNamespace::GroupJoinZoneA const Cave;

/// @brief Field CavesComputer value: U32(1048576)
static ::GlobalNamespace::GroupJoinZoneA const CavesComputer;

/// @brief Field City value: U32(16)
static ::GlobalNamespace::GroupJoinZoneA const City;

/// @brief Field Clouds value: U32(32)
static ::GlobalNamespace::GroupJoinZoneA const Clouds;

/// @brief Field CloudsElevator value: U32(262144)
static ::GlobalNamespace::GroupJoinZoneA const CloudsElevator;

/// @brief Field CustomMaps value: U32(268435456)
static ::GlobalNamespace::GroupJoinZoneA const CustomMaps;

/// @brief Field Forest value: U32(64)
static ::GlobalNamespace::GroupJoinZoneA const Forest;

/// @brief Field GTFC value: U32(2147483648)
static ::GlobalNamespace::GroupJoinZoneA const GTFC;

/// @brief Field Hoverboard value: U32(4096)
static ::GlobalNamespace::GroupJoinZoneA const Hoverboard;

/// @brief Field MallConnector value: U32(536870912)
static ::GlobalNamespace::GroupJoinZoneA const MallConnector;

/// @brief Field Metropolis value: U32(2097152)
static ::GlobalNamespace::GroupJoinZoneA const Metropolis;

/// @brief Field MetropolisTunnel value: U32(4194304)
static ::GlobalNamespace::GroupJoinZoneA const MetropolisTunnel;

/// @brief Field Mines value: U32(512)
static ::GlobalNamespace::GroupJoinZoneA const Mines;

/// @brief Field MinesTunnel value: U32(524288)
static ::GlobalNamespace::GroupJoinZoneA const MinesTunnel;

/// @brief Field MonkeBlocks value: U32(1073741824)
static ::GlobalNamespace::GroupJoinZoneA const MonkeBlocks;

/// @brief Field Mountain value: U32(128)
static ::GlobalNamespace::GroupJoinZoneA const Mountain;

/// @brief Field MountainTunnel value: U32(16384)
static ::GlobalNamespace::GroupJoinZoneA const MountainTunnel;

/// @brief Field Rotating value: U32(256)
static ::GlobalNamespace::GroupJoinZoneA const Rotating;

/// @brief Field RotatingTunnel value: U32(65536)
static ::GlobalNamespace::GroupJoinZoneA const RotatingTunnel;

/// @brief Field TreeRoom value: U32(8192)
static ::GlobalNamespace::GroupJoinZoneA const TreeRoom;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1711};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GroupJoinZoneA, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GroupJoinZoneA) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
