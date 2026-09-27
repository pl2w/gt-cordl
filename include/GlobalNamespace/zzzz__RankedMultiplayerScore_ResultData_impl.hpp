#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedMultiplayerScore_ResultData.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerScore_ResultData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore_ResultData.IsMostTagsTied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RankedMultiplayerScore_ResultData::*)()>(&::GlobalNamespace::RankedMultiplayerScore_ResultData::IsMostTagsTied)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x59653f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore_ResultData>(),
                        {"IsMostTagsTied", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore_ResultData.IsLongestUntaggedTied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RankedMultiplayerScore_ResultData::*)()>(&::GlobalNamespace::RankedMultiplayerScore_ResultData::IsLongestUntaggedTied)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x596545c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore_ResultData>(),
                        {"IsLongestUntaggedTied", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::RankedMultiplayerScore_ResultData::IsMostTagsTied()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore_ResultData>(),
                        {"IsMostTagsTied", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::RankedMultiplayerScore_ResultData::IsLongestUntaggedTied()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore_ResultData>(),
                        {"IsLongestUntaggedTied", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Elo", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Rank", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MostTags", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LongestUntagged", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MostTagsPlayerId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LongestUntaggedPlayerId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RankedMultiplayerScore_ResultData::RankedMultiplayerScore_ResultData(float_t  Elo, int32_t  Rank, int32_t  MostTags, float_t  LongestUntagged, int32_t  MostTagsPlayerId, int32_t  LongestUntaggedPlayerId) noexcept  {
this->Elo = Elo;
this->Rank = Rank;
this->MostTags = MostTags;
this->LongestUntagged = LongestUntagged;
this->MostTagsPlayerId = MostTagsPlayerId;
this->LongestUntaggedPlayerId = LongestUntaggedPlayerId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RankedMultiplayerScore_ResultData::RankedMultiplayerScore_ResultData()   {
}
