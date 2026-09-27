#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedMultiplayerScore_PlayerScoreInRound.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RankedMultiplayerScore_PlayerScoreInRound)
// Forward declare root types
namespace GlobalNamespace {
struct RankedMultiplayerScore_PlayerScoreInRound;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound, "", "RankedMultiplayerScore/PlayerScoreInRound");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RankedMultiplayerScore/PlayerScoreInRound
struct CORDL_TYPE RankedMultiplayerScore_PlayerScoreInRound {
public:
// Declarations
/// @brief Method .ctor, addr 0x5964550, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(int32_t  id, bool  initInfected) ;

// Ctor Parameters []
// @brief default ctor
constexpr RankedMultiplayerScore_PlayerScoreInRound() ;

// Ctor Parameters [CppParam { name: "PlayerId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NumTags", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PointsOnDefense", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "JoinTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TaggedTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Infected", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr RankedMultiplayerScore_PlayerScoreInRound(int32_t  PlayerId, int32_t  NumTags, float_t  PointsOnDefense, float_t  JoinTime, float_t  TaggedTime, bool  Infected) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2363};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field PlayerId, offset: 0x0, size: 0x4, def value: None
 int32_t  PlayerId;

/// @brief Field NumTags, offset: 0x4, size: 0x4, def value: None
 int32_t  NumTags;

/// @brief Field PointsOnDefense, offset: 0x8, size: 0x4, def value: None
 float_t  PointsOnDefense;

/// @brief Field JoinTime, offset: 0xc, size: 0x4, def value: None
 float_t  JoinTime;

/// @brief Field TaggedTime, offset: 0x10, size: 0x4, def value: None
 float_t  TaggedTime;

/// @brief Field Infected, offset: 0x14, size: 0x1, def value: None
 bool  Infected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound, PlayerId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound, NumTags) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound, PointsOnDefense) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound, JoinTime) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound, TaggedTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound, Infected) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
