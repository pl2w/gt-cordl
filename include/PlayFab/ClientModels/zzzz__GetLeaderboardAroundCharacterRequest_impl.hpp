#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetLeaderboardAroundCharacterRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetLeaderboardAroundCharacterRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest::*)()>(&::PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest::__cordl_internal_get_CharacterId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr ::StringW const& PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest::__cordl_internal_get_CharacterId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr void PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest::__cordl_internal_set_CharacterId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterId = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest::__cordl_internal_get_CharacterType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterType;
}
constexpr ::StringW const& PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest::__cordl_internal_get_CharacterType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterType;
}
constexpr void PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest::__cordl_internal_set_CharacterType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterType = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest::__cordl_internal_get_MaxResultsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxResultsCount;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest::__cordl_internal_get_MaxResultsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxResultsCount;
}
constexpr void PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest::__cordl_internal_set_MaxResultsCount(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxResultsCount = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest::__cordl_internal_get_StatisticName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticName;
}
constexpr ::StringW const& PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest::__cordl_internal_get_StatisticName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticName;
}
constexpr void PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest::__cordl_internal_set_StatisticName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatisticName = value;
}
inline void PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest* PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest::GetLeaderboardAroundCharacterRequest()   {
}
