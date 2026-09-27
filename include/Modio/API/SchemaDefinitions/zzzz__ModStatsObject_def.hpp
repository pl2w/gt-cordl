#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModStatsObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModStatsObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct ModStatsObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::ModStatsObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::ModStatsObject, "Modio.API.SchemaDefinitions", "ModStatsObject");
// [IsReadOnly]
// [JsonObject((Newtonsoft.Json.MemberSerialization)2)]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.ModStatsObject
struct CORDL_TYPE ModStatsObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9feddf8, size 0x54, virtual false, abstract: false, final false
inline void _ctor(int64_t  mod_id, int64_t  popularity_rank_position, int64_t  popularity_rank_total_mods, int64_t  downloads_today, int64_t  downloads_total, int64_t  subscribers_total, int64_t  ratings_total, int64_t  ratings_positive, int64_t  ratings_negative, int64_t  ratings_percentage_positive, float_t  ratings_weighted_aggregate, ::StringW  ratings_display_text, int64_t  date_expires) ;

// Ctor Parameters []
// @brief default ctor
constexpr ModStatsObject() ;

// Ctor Parameters [CppParam { name: "ModId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PopularityRankPosition", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PopularityRankTotalMods", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DownloadsToday", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DownloadsTotal", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SubscribersTotal", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RatingsTotal", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RatingsPositive", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RatingsNegative", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RatingsPercentagePositive", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RatingsWeightedAggregate", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RatingsDisplayText", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateExpires", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr ModStatsObject(int64_t  ModId, int64_t  PopularityRankPosition, int64_t  PopularityRankTotalMods, int64_t  DownloadsToday, int64_t  DownloadsTotal, int64_t  SubscribersTotal, int64_t  RatingsTotal, int64_t  RatingsPositive, int64_t  RatingsNegative, int64_t  RatingsPercentagePositive, float_t  RatingsWeightedAggregate, ::StringW  RatingsDisplayText, int64_t  DateExpires) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18155};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field ModId, offset: 0x0, size: 0x8, def value: None
 int64_t  ModId;

/// @brief Field PopularityRankPosition, offset: 0x8, size: 0x8, def value: None
 int64_t  PopularityRankPosition;

/// @brief Field PopularityRankTotalMods, offset: 0x10, size: 0x8, def value: None
 int64_t  PopularityRankTotalMods;

/// @brief Field DownloadsToday, offset: 0x18, size: 0x8, def value: None
 int64_t  DownloadsToday;

/// @brief Field DownloadsTotal, offset: 0x20, size: 0x8, def value: None
 int64_t  DownloadsTotal;

/// @brief Field SubscribersTotal, offset: 0x28, size: 0x8, def value: None
 int64_t  SubscribersTotal;

/// @brief Field RatingsTotal, offset: 0x30, size: 0x8, def value: None
 int64_t  RatingsTotal;

/// @brief Field RatingsPositive, offset: 0x38, size: 0x8, def value: None
 int64_t  RatingsPositive;

/// @brief Field RatingsNegative, offset: 0x40, size: 0x8, def value: None
 int64_t  RatingsNegative;

/// @brief Field RatingsPercentagePositive, offset: 0x48, size: 0x8, def value: None
 int64_t  RatingsPercentagePositive;

/// @brief Field RatingsWeightedAggregate, offset: 0x50, size: 0x4, def value: None
 float_t  RatingsWeightedAggregate;

/// @brief Field RatingsDisplayText, offset: 0x58, size: 0x8, def value: None
 ::StringW  RatingsDisplayText;

/// @brief Field DateExpires, offset: 0x60, size: 0x8, def value: None
 int64_t  DateExpires;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::ModStatsObject, ModId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModStatsObject, PopularityRankPosition) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModStatsObject, PopularityRankTotalMods) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModStatsObject, DownloadsToday) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModStatsObject, DownloadsTotal) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModStatsObject, SubscribersTotal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModStatsObject, RatingsTotal) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModStatsObject, RatingsPositive) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModStatsObject, RatingsNegative) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModStatsObject, RatingsPercentagePositive) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModStatsObject, RatingsWeightedAggregate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModStatsObject, RatingsDisplayText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModStatsObject, DateExpires) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::ModStatsObject) == 0x68, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
