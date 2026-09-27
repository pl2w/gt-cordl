#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetLeaderboardForUsersCharactersResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetLeaderboardForUsersCharactersResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__CharacterLeaderboardEntry_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetLeaderboardForUsersCharactersResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetLeaderboardForUsersCharactersResult::*)()>(&::PlayFab::ClientModels::GetLeaderboardForUsersCharactersResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dc88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetLeaderboardForUsersCharactersResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterLeaderboardEntry*>*& PlayFab::ClientModels::GetLeaderboardForUsersCharactersResult::__cordl_internal_get_Leaderboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Leaderboard;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterLeaderboardEntry*>* const& PlayFab::ClientModels::GetLeaderboardForUsersCharactersResult::__cordl_internal_get_Leaderboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Leaderboard;
}
constexpr void PlayFab::ClientModels::GetLeaderboardForUsersCharactersResult::__cordl_internal_set_Leaderboard(::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterLeaderboardEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Leaderboard = value;
}
inline void PlayFab::ClientModels::GetLeaderboardForUsersCharactersResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetLeaderboardForUsersCharactersResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetLeaderboardForUsersCharactersResult* PlayFab::ClientModels::GetLeaderboardForUsersCharactersResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetLeaderboardForUsersCharactersResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetLeaderboardForUsersCharactersResult::GetLeaderboardForUsersCharactersResult()   {
}
