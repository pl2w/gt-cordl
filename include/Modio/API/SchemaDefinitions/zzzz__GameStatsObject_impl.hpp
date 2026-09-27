#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GameStatsObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameStatsObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::GameStatsObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::GameStatsObject::*)(int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t)>(&::Modio::API::SchemaDefinitions::GameStatsObject::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9fecbdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GameStatsObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::GameStatsObject::_ctor(int64_t  game_id, int64_t  mods_count_total, int64_t  mods_downloads_today, int64_t  mods_downloads_total, int64_t  mods_downloads_daily_average, int64_t  mods_subscribers_total, int64_t  date_expires)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GameStatsObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, game_id, mods_count_total, mods_downloads_today, mods_downloads_total, mods_downloads_daily_average, mods_subscribers_total, date_expires);
}
// Ctor Parameters [CppParam { name: "GameId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ModsCountTotal", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ModsDownloadsToday", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ModsDownloadsTotal", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ModsDownloadsDailyAverage", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ModsSubscribersTotal", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateExpires", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::GameStatsObject::GameStatsObject(int64_t  GameId, int64_t  ModsCountTotal, int64_t  ModsDownloadsToday, int64_t  ModsDownloadsTotal, int64_t  ModsDownloadsDailyAverage, int64_t  ModsSubscribersTotal, int64_t  DateExpires) noexcept  {
this->GameId = GameId;
this->ModsCountTotal = ModsCountTotal;
this->ModsDownloadsToday = ModsDownloadsToday;
this->ModsDownloadsTotal = ModsDownloadsTotal;
this->ModsDownloadsDailyAverage = ModsDownloadsDailyAverage;
this->ModsSubscribersTotal = ModsSubscribersTotal;
this->DateExpires = DateExpires;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::GameStatsObject::GameStatsObject()   {
}
