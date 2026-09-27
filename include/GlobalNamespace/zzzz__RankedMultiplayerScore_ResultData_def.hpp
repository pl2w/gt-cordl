#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedMultiplayerScore_ResultData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RankedMultiplayerScore_ResultData)
// Forward declare root types
namespace GlobalNamespace {
struct RankedMultiplayerScore_ResultData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RankedMultiplayerScore_ResultData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RankedMultiplayerScore_ResultData, "", "RankedMultiplayerScore/ResultData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RankedMultiplayerScore/ResultData
struct CORDL_TYPE RankedMultiplayerScore_ResultData {
public:
// Declarations
/// @brief Method IsLongestUntaggedTied, addr 0x596545c, size 0x68, virtual false, abstract: false, final false
inline bool IsLongestUntaggedTied() ;

/// @brief Method IsMostTagsTied, addr 0x59653f4, size 0x68, virtual false, abstract: false, final false
inline bool IsMostTagsTied() ;

// Ctor Parameters []
// @brief default ctor
constexpr RankedMultiplayerScore_ResultData() ;

// Ctor Parameters [CppParam { name: "Elo", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Rank", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MostTags", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LongestUntagged", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MostTagsPlayerId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LongestUntaggedPlayerId", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RankedMultiplayerScore_ResultData(float_t  Elo, int32_t  Rank, int32_t  MostTags, float_t  LongestUntagged, int32_t  MostTagsPlayerId, int32_t  LongestUntaggedPlayerId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2364};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Elo, offset: 0x0, size: 0x4, def value: None
 float_t  Elo;

/// @brief Field Rank, offset: 0x4, size: 0x4, def value: None
 int32_t  Rank;

/// @brief Field MostTags, offset: 0x8, size: 0x4, def value: None
 int32_t  MostTags;

/// @brief Field LongestUntagged, offset: 0xc, size: 0x4, def value: None
 float_t  LongestUntagged;

/// @brief Field MostTagsPlayerId, offset: 0x10, size: 0x4, def value: None
 int32_t  MostTagsPlayerId;

/// @brief Field LongestUntaggedPlayerId, offset: 0x14, size: 0x4, def value: None
 int32_t  LongestUntaggedPlayerId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore_ResultData, Elo) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore_ResultData, Rank) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore_ResultData, MostTags) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore_ResultData, LongestUntagged) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore_ResultData, MostTagsPlayerId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore_ResultData, LongestUntaggedPlayerId) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RankedMultiplayerScore_ResultData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
