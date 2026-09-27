#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetFriendLeaderboardAroundPlayerResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetFriendLeaderboardAroundPlayerResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__PlayerLeaderboardEntry_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult::*)()>(&::PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PlayerLeaderboardEntry*>*& PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult::__cordl_internal_get_Leaderboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Leaderboard;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PlayerLeaderboardEntry*>* const& PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult::__cordl_internal_get_Leaderboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Leaderboard;
}
constexpr void PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult::__cordl_internal_set_Leaderboard(::System::Collections::Generic::List_1<::PlayFab::ClientModels::PlayerLeaderboardEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Leaderboard = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult::__cordl_internal_get_NextReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextReset;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult::__cordl_internal_get_NextReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextReset;
}
constexpr void PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult::__cordl_internal_set_NextReset(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NextReset = value;
}
constexpr int32_t& PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult::__cordl_internal_get_Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr int32_t const& PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult::__cordl_internal_get_Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr void PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult::__cordl_internal_set_Version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Version = value;
}
inline void PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult* PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult::GetFriendLeaderboardAroundPlayerResult()   {
}
