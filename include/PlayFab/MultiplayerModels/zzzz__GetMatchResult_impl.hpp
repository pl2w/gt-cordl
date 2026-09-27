#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetMatchResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__GetMatchResult_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__MatchmakingPlayerWithTeamAssignment_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ServerDetails_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::GetMatchResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::GetMatchResult::*)()>(&::PlayFab::MultiplayerModels::GetMatchResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8409b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetMatchResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::GetMatchResult::__cordl_internal_get_MatchId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MatchId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetMatchResult::__cordl_internal_get_MatchId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MatchId;
}
constexpr void PlayFab::MultiplayerModels::GetMatchResult::__cordl_internal_set_MatchId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MatchId = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*& PlayFab::MultiplayerModels::GetMatchResult::__cordl_internal_get_Members()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Members;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>* const& PlayFab::MultiplayerModels::GetMatchResult::__cordl_internal_get_Members() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Members;
}
constexpr void PlayFab::MultiplayerModels::GetMatchResult::__cordl_internal_set_Members(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Members = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::MultiplayerModels::GetMatchResult::__cordl_internal_get_RegionPreferences()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RegionPreferences;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::MultiplayerModels::GetMatchResult::__cordl_internal_get_RegionPreferences() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RegionPreferences;
}
constexpr void PlayFab::MultiplayerModels::GetMatchResult::__cordl_internal_set_RegionPreferences(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RegionPreferences = value;
}
constexpr ::PlayFab::MultiplayerModels::ServerDetails*& PlayFab::MultiplayerModels::GetMatchResult::__cordl_internal_get_ServerDetails()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerDetails;
}
constexpr ::PlayFab::MultiplayerModels::ServerDetails* const& PlayFab::MultiplayerModels::GetMatchResult::__cordl_internal_get_ServerDetails() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerDetails;
}
constexpr void PlayFab::MultiplayerModels::GetMatchResult::__cordl_internal_set_ServerDetails(::PlayFab::MultiplayerModels::ServerDetails*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerDetails = value;
}
inline void PlayFab::MultiplayerModels::GetMatchResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetMatchResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::GetMatchResult* PlayFab::MultiplayerModels::GetMatchResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::GetMatchResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::GetMatchResult::GetMatchResult()   {
}
