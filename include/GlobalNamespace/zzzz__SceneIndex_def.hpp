#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SceneIndex)
// Forward declare root types
namespace GlobalNamespace {
struct SceneIndex;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SceneIndex);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SceneIndex, "", "SceneIndex");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SceneIndex
struct CORDL_TYPE SceneIndex {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SceneIndex_Unwrapped
enum struct __SceneIndex_Unwrapped : int32_t {
__E_GT = static_cast<int32_t>(0x0),
__E_Canyon = static_cast<int32_t>(0x1),
__E_Beach = static_cast<int32_t>(0x2),
__E_Cave = static_cast<int32_t>(0x3),
__E_Basement = static_cast<int32_t>(0x4),
__E_Mountain = static_cast<int32_t>(0x5),
__E_Skyjungle = static_cast<int32_t>(0x6),
__E_Rotating = static_cast<int32_t>(0x7),
__E_Metropolis = static_cast<int32_t>(0x8),
__E_Bayou = static_cast<int32_t>(0x9),
__E_TestBlank = static_cast<int32_t>(0xa),
__E_MonkeBlocks = static_cast<int32_t>(0xb),
__E_Arena = static_cast<int32_t>(0xc),
__E_Hoverboard = static_cast<int32_t>(0xd),
__E_Critters = static_cast<int32_t>(0xe),
__E_GhostReactor = static_cast<int32_t>(0xf),
__E_MonkeBlocksShared = static_cast<int32_t>(0x10),
__E_Ranked = static_cast<int32_t>(0x11),
__E_GhostReactorDrill = static_cast<int32_t>(0x12),
__E_City = static_cast<int32_t>(0x13),
__E_GTFC = static_cast<int32_t>(0x14),
__E_Rewind_2024_02_Forest = static_cast<int32_t>(0x15),
__E_VIMDig_Cave = static_cast<int32_t>(0x16),
__E_SpaceMap = static_cast<int32_t>(0x17),
__E_VIMGravityRush_Cave = static_cast<int32_t>(0x18),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SceneIndex_Unwrapped () const noexcept {
return static_cast<__SceneIndex_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SceneIndex() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SceneIndex(int32_t  value__) noexcept;

/// @brief Field Arena value: I32(12)
static ::GlobalNamespace::SceneIndex const Arena;

/// @brief Field Basement value: I32(4)
static ::GlobalNamespace::SceneIndex const Basement;

/// @brief Field Bayou value: I32(9)
static ::GlobalNamespace::SceneIndex const Bayou;

/// @brief Field Beach value: I32(2)
static ::GlobalNamespace::SceneIndex const Beach;

/// @brief Field Canyon value: I32(1)
static ::GlobalNamespace::SceneIndex const Canyon;

/// @brief Field Cave value: I32(3)
static ::GlobalNamespace::SceneIndex const Cave;

/// @brief Field City value: I32(19)
static ::GlobalNamespace::SceneIndex const City;

/// @brief Field Critters value: I32(14)
static ::GlobalNamespace::SceneIndex const Critters;

/// @brief Field GT value: I32(0)
static ::GlobalNamespace::SceneIndex const GT;

/// @brief Field GTFC value: I32(20)
static ::GlobalNamespace::SceneIndex const GTFC;

/// @brief Field GhostReactor value: I32(15)
static ::GlobalNamespace::SceneIndex const GhostReactor;

/// @brief Field GhostReactorDrill value: I32(18)
static ::GlobalNamespace::SceneIndex const GhostReactorDrill;

/// @brief Field Hoverboard value: I32(13)
static ::GlobalNamespace::SceneIndex const Hoverboard;

/// @brief Field Metropolis value: I32(8)
static ::GlobalNamespace::SceneIndex const Metropolis;

/// @brief Field MonkeBlocks value: I32(11)
static ::GlobalNamespace::SceneIndex const MonkeBlocks;

/// @brief Field MonkeBlocksShared value: I32(16)
static ::GlobalNamespace::SceneIndex const MonkeBlocksShared;

/// @brief Field Mountain value: I32(5)
static ::GlobalNamespace::SceneIndex const Mountain;

/// @brief Field Ranked value: I32(17)
static ::GlobalNamespace::SceneIndex const Ranked;

/// @brief Field Rewind_2024_02_Forest value: I32(21)
static ::GlobalNamespace::SceneIndex const Rewind_2024_02_Forest;

/// @brief Field Rotating value: I32(7)
static ::GlobalNamespace::SceneIndex const Rotating;

/// @brief Field Skyjungle value: I32(6)
static ::GlobalNamespace::SceneIndex const Skyjungle;

/// @brief Field SpaceMap value: I32(23)
static ::GlobalNamespace::SceneIndex const SpaceMap;

/// @brief Field TestBlank value: I32(10)
static ::GlobalNamespace::SceneIndex const TestBlank;

/// @brief Field VIMDig_Cave value: I32(22)
static ::GlobalNamespace::SceneIndex const VIMDig_Cave;

/// @brief Field VIMGravityRush_Cave value: I32(24)
static ::GlobalNamespace::SceneIndex const VIMGravityRush_Cave;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{965};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SceneIndex, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SceneIndex) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
