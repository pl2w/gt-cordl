#pragma once
// IWYU pragma private; include "GlobalNamespace/GTZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTZone)
// Forward declare root types
namespace GlobalNamespace {
struct GTZone;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTZone);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTZone, "", "GTZone");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTZone
struct CORDL_TYPE GTZone {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTZone_Unwrapped
enum struct __GTZone_Unwrapped : int32_t {
__E_forest = static_cast<int32_t>(0x0),
__E_city = static_cast<int32_t>(0x1),
__E_basement = static_cast<int32_t>(0x2),
__E_canyon = static_cast<int32_t>(0x3),
__E_beach = static_cast<int32_t>(0x4),
__E_mountain = static_cast<int32_t>(0x5),
__E_skyJungle = static_cast<int32_t>(0x6),
__E_cave = static_cast<int32_t>(0x7),
__E_cityWithSkyJungle = static_cast<int32_t>(0x8),
__E_tutorial = static_cast<int32_t>(0x9),
__E_rotating = static_cast<int32_t>(0xa),
__E_none = static_cast<int32_t>(0xb),
__E_Metropolis = static_cast<int32_t>(0xc),
__E_cityNoBuildings = static_cast<int32_t>(0xd),
__E_attic = static_cast<int32_t>(0xe),
__E_arcade = static_cast<int32_t>(0xf),
__E_bayou = static_cast<int32_t>(0x10),
__E_customMaps = static_cast<int32_t>(0x11),
__E_monkeBlocks = static_cast<int32_t>(0x12),
__E_mall = static_cast<int32_t>(0x13),
__E_mines = static_cast<int32_t>(0x14),
__E_arena = static_cast<int32_t>(0x15),
__E_hoverboard = static_cast<int32_t>(0x16),
__E_critters = static_cast<int32_t>(0x17),
__E_ghostReactor = static_cast<int32_t>(0x18),
__E_monkeBlocksShared = static_cast<int32_t>(0x19),
__E_ghostReactorTunnel = static_cast<int32_t>(0x1a),
__E_ranked = static_cast<int32_t>(0x1b),
__E_ghostReactorDrill = static_cast<int32_t>(0x1c),
__E_forestWithCity = static_cast<int32_t>(0x1d),
__E_GTFC = static_cast<int32_t>(0x1e),
__E_SilverbackStudios = static_cast<int32_t>(0x1f),
__E_VIMExperience1 = static_cast<int32_t>(0x20),
__E_VIMExperience2 = static_cast<int32_t>(0x21),
__E_VIMExperience3 = static_cast<int32_t>(0x22),
__E_VIMExperience4 = static_cast<int32_t>(0x23),
__E_drill = static_cast<int32_t>(0x24),
__E_eventZone = static_cast<int32_t>(0x25),
__E_spaceMap = static_cast<int32_t>(0x26),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTZone_Unwrapped () const noexcept {
return static_cast<__GTZone_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTZone() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTZone(int32_t  value__) noexcept;

/// @brief Field GTFC value: I32(30)
static ::GlobalNamespace::GTZone const GTFC;

/// @brief Field Metropolis value: I32(12)
static ::GlobalNamespace::GTZone const Metropolis;

/// @brief Field SilverbackStudios value: I32(31)
static ::GlobalNamespace::GTZone const SilverbackStudios;

/// @brief Field VIMExperience1 value: I32(32)
static ::GlobalNamespace::GTZone const VIMExperience1;

/// @brief Field VIMExperience2 value: I32(33)
static ::GlobalNamespace::GTZone const VIMExperience2;

/// @brief Field VIMExperience3 value: I32(34)
static ::GlobalNamespace::GTZone const VIMExperience3;

/// @brief Field VIMExperience4 value: I32(35)
static ::GlobalNamespace::GTZone const VIMExperience4;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{955};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field arcade value: I32(15)
static ::GlobalNamespace::GTZone const arcade;

/// @brief Field arena value: I32(21)
static ::GlobalNamespace::GTZone const arena;

/// @brief Field attic value: I32(14)
static ::GlobalNamespace::GTZone const attic;

/// @brief Field basement value: I32(2)
static ::GlobalNamespace::GTZone const basement;

/// @brief Field bayou value: I32(16)
static ::GlobalNamespace::GTZone const bayou;

/// @brief Field beach value: I32(4)
static ::GlobalNamespace::GTZone const beach;

/// @brief Field canyon value: I32(3)
static ::GlobalNamespace::GTZone const canyon;

/// @brief Field cave value: I32(7)
static ::GlobalNamespace::GTZone const cave;

/// @brief Field city value: I32(1)
static ::GlobalNamespace::GTZone const city;

/// @brief Field cityNoBuildings value: I32(13)
static ::GlobalNamespace::GTZone const cityNoBuildings;

/// @brief Field cityWithSkyJungle value: I32(8)
static ::GlobalNamespace::GTZone const cityWithSkyJungle;

/// @brief Field critters value: I32(23)
static ::GlobalNamespace::GTZone const critters;

/// @brief Field customMaps value: I32(17)
static ::GlobalNamespace::GTZone const customMaps;

/// @brief Field drill value: I32(36)
static ::GlobalNamespace::GTZone const drill;

/// @brief Field eventZone value: I32(37)
static ::GlobalNamespace::GTZone const eventZone;

/// @brief Field forest value: I32(0)
static ::GlobalNamespace::GTZone const forest;

/// @brief Field forestWithCity value: I32(29)
static ::GlobalNamespace::GTZone const forestWithCity;

/// @brief Field ghostReactor value: I32(24)
static ::GlobalNamespace::GTZone const ghostReactor;

/// @brief Field ghostReactorDrill value: I32(28)
static ::GlobalNamespace::GTZone const ghostReactorDrill;

/// @brief Field ghostReactorTunnel value: I32(26)
static ::GlobalNamespace::GTZone const ghostReactorTunnel;

/// @brief Field hoverboard value: I32(22)
static ::GlobalNamespace::GTZone const hoverboard;

/// @brief Field mall value: I32(19)
static ::GlobalNamespace::GTZone const mall;

/// @brief Field mines value: I32(20)
static ::GlobalNamespace::GTZone const mines;

/// @brief Field monkeBlocks value: I32(18)
static ::GlobalNamespace::GTZone const monkeBlocks;

/// @brief Field monkeBlocksShared value: I32(25)
static ::GlobalNamespace::GTZone const monkeBlocksShared;

/// @brief Field mountain value: I32(5)
static ::GlobalNamespace::GTZone const mountain;

/// @brief Field none value: I32(11)
static ::GlobalNamespace::GTZone const none;

/// @brief Field ranked value: I32(27)
static ::GlobalNamespace::GTZone const ranked;

/// @brief Field rotating value: I32(10)
static ::GlobalNamespace::GTZone const rotating;

/// @brief Field skyJungle value: I32(6)
static ::GlobalNamespace::GTZone const skyJungle;

/// @brief Field spaceMap value: I32(38)
static ::GlobalNamespace::GTZone const spaceMap;

/// @brief Field tutorial value: I32(9)
static ::GlobalNamespace::GTZone const tutorial;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTZone, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTZone) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
