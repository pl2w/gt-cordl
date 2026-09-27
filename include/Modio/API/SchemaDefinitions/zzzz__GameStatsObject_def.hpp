#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GameStatsObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameStatsObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct GameStatsObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::GameStatsObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::GameStatsObject, "Modio.API.SchemaDefinitions", "GameStatsObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.GameStatsObject
struct CORDL_TYPE GameStatsObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fecbdc, size 0x14, virtual false, abstract: false, final false
inline void _ctor(int64_t  game_id, int64_t  mods_count_total, int64_t  mods_downloads_today, int64_t  mods_downloads_total, int64_t  mods_downloads_daily_average, int64_t  mods_subscribers_total, int64_t  date_expires) ;

// Ctor Parameters []
// @brief default ctor
constexpr GameStatsObject() ;

// Ctor Parameters [CppParam { name: "GameId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ModsCountTotal", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ModsDownloadsToday", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ModsDownloadsTotal", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ModsDownloadsDailyAverage", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ModsSubscribersTotal", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateExpires", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr GameStatsObject(int64_t  GameId, int64_t  ModsCountTotal, int64_t  ModsDownloadsToday, int64_t  ModsDownloadsTotal, int64_t  ModsDownloadsDailyAverage, int64_t  ModsSubscribersTotal, int64_t  DateExpires) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18127};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field GameId, offset: 0x0, size: 0x8, def value: None
 int64_t  GameId;

/// @brief Field ModsCountTotal, offset: 0x8, size: 0x8, def value: None
 int64_t  ModsCountTotal;

/// @brief Field ModsDownloadsToday, offset: 0x10, size: 0x8, def value: None
 int64_t  ModsDownloadsToday;

/// @brief Field ModsDownloadsTotal, offset: 0x18, size: 0x8, def value: None
 int64_t  ModsDownloadsTotal;

/// @brief Field ModsDownloadsDailyAverage, offset: 0x20, size: 0x8, def value: None
 int64_t  ModsDownloadsDailyAverage;

/// @brief Field ModsSubscribersTotal, offset: 0x28, size: 0x8, def value: None
 int64_t  ModsSubscribersTotal;

/// @brief Field DateExpires, offset: 0x30, size: 0x8, def value: None
 int64_t  DateExpires;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::GameStatsObject, GameId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameStatsObject, ModsCountTotal) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameStatsObject, ModsDownloadsToday) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameStatsObject, ModsDownloadsTotal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameStatsObject, ModsDownloadsDailyAverage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameStatsObject, ModsSubscribersTotal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameStatsObject, DateExpires) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::GameStatsObject) == 0x38, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
