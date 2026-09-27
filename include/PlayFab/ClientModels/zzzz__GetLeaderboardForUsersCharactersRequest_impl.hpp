#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetLeaderboardForUsersCharactersRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetLeaderboardForUsersCharactersRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest::*)()>(&::PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest::__cordl_internal_get_MaxResultsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxResultsCount;
}
constexpr int32_t const& PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest::__cordl_internal_get_MaxResultsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxResultsCount;
}
constexpr void PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest::__cordl_internal_set_MaxResultsCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxResultsCount = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest::__cordl_internal_get_StatisticName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticName;
}
constexpr ::StringW const& PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest::__cordl_internal_get_StatisticName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticName;
}
constexpr void PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest::__cordl_internal_set_StatisticName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatisticName = value;
}
inline void PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest* PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest::GetLeaderboardForUsersCharactersRequest()   {
}
