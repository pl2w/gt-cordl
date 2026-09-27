#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedMultiplayerScore_PlayerScore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RankedMultiplayerScore_PlayerScore)
// Forward declare root types
namespace GlobalNamespace {
struct RankedMultiplayerScore_PlayerScore;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RankedMultiplayerScore_PlayerScore);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RankedMultiplayerScore_PlayerScore, "", "RankedMultiplayerScore/PlayerScore");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RankedMultiplayerScore/PlayerScore
struct CORDL_TYPE RankedMultiplayerScore_PlayerScore {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RankedMultiplayerScore_PlayerScore() ;

// Ctor Parameters [CppParam { name: "PlayerId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GameScore", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "EloScore", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NumTags", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TimeUntagged", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PointsOnDefense", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr RankedMultiplayerScore_PlayerScore(int32_t  PlayerId, float_t  GameScore, float_t  EloScore, int32_t  NumTags, float_t  TimeUntagged, float_t  PointsOnDefense) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2362};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field PlayerId, offset: 0x0, size: 0x4, def value: None
 int32_t  PlayerId;

/// @brief Field GameScore, offset: 0x4, size: 0x4, def value: None
 float_t  GameScore;

/// @brief Field EloScore, offset: 0x8, size: 0x4, def value: None
 float_t  EloScore;

/// @brief Field NumTags, offset: 0xc, size: 0x4, def value: None
 int32_t  NumTags;

/// @brief Field TimeUntagged, offset: 0x10, size: 0x4, def value: None
 float_t  TimeUntagged;

/// @brief Field PointsOnDefense, offset: 0x14, size: 0x4, def value: None
 float_t  PointsOnDefense;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore_PlayerScore, PlayerId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore_PlayerScore, GameScore) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore_PlayerScore, EloScore) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore_PlayerScore, NumTags) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore_PlayerScore, TimeUntagged) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore_PlayerScore, PointsOnDefense) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RankedMultiplayerScore_PlayerScore) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
