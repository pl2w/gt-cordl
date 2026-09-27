#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModStatsObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModStatsObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ModStatsObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::ModStatsObject::*)(int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, float_t, ::StringW, int64_t)>(&::Modio::API::SchemaDefinitions::ModStatsObject::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9feddf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModStatsObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::ModStatsObject::_ctor(int64_t  mod_id, int64_t  popularity_rank_position, int64_t  popularity_rank_total_mods, int64_t  downloads_today, int64_t  downloads_total, int64_t  subscribers_total, int64_t  ratings_total, int64_t  ratings_positive, int64_t  ratings_negative, int64_t  ratings_percentage_positive, float_t  ratings_weighted_aggregate, ::StringW  ratings_display_text, int64_t  date_expires)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModStatsObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mod_id, popularity_rank_position, popularity_rank_total_mods, downloads_today, downloads_total, subscribers_total, ratings_total, ratings_positive, ratings_negative, ratings_percentage_positive, ratings_weighted_aggregate, ratings_display_text, date_expires);
}
// Ctor Parameters [CppParam { name: "ModId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PopularityRankPosition", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PopularityRankTotalMods", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DownloadsToday", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DownloadsTotal", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SubscribersTotal", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RatingsTotal", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RatingsPositive", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RatingsNegative", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RatingsPercentagePositive", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RatingsWeightedAggregate", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RatingsDisplayText", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateExpires", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::ModStatsObject::ModStatsObject(int64_t  ModId, int64_t  PopularityRankPosition, int64_t  PopularityRankTotalMods, int64_t  DownloadsToday, int64_t  DownloadsTotal, int64_t  SubscribersTotal, int64_t  RatingsTotal, int64_t  RatingsPositive, int64_t  RatingsNegative, int64_t  RatingsPercentagePositive, float_t  RatingsWeightedAggregate, ::StringW  RatingsDisplayText, int64_t  DateExpires) noexcept  {
this->ModId = ModId;
this->PopularityRankPosition = PopularityRankPosition;
this->PopularityRankTotalMods = PopularityRankTotalMods;
this->DownloadsToday = DownloadsToday;
this->DownloadsTotal = DownloadsTotal;
this->SubscribersTotal = SubscribersTotal;
this->RatingsTotal = RatingsTotal;
this->RatingsPositive = RatingsPositive;
this->RatingsNegative = RatingsNegative;
this->RatingsPercentagePositive = RatingsPercentagePositive;
this->RatingsWeightedAggregate = RatingsWeightedAggregate;
this->RatingsDisplayText = RatingsDisplayText;
this->DateExpires = DateExpires;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::ModStatsObject::ModStatsObject()   {
}
