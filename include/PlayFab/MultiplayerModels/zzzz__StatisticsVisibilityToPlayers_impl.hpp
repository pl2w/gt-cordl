#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/StatisticsVisibilityToPlayers.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__StatisticsVisibilityToPlayers_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers::*)()>(&::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers::__cordl_internal_get_ShowNumberOfPlayersMatching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowNumberOfPlayersMatching;
}
constexpr bool const& PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers::__cordl_internal_get_ShowNumberOfPlayersMatching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowNumberOfPlayersMatching;
}
constexpr void PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers::__cordl_internal_set_ShowNumberOfPlayersMatching(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowNumberOfPlayersMatching = value;
}
constexpr bool& PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers::__cordl_internal_get_ShowTimeToMatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowTimeToMatch;
}
constexpr bool const& PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers::__cordl_internal_get_ShowTimeToMatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowTimeToMatch;
}
constexpr void PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers::__cordl_internal_set_ShowTimeToMatch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowTimeToMatch = value;
}
inline void PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers* PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers::StatisticsVisibilityToPlayers()   {
}
