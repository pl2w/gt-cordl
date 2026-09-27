#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetLeaderboardAroundPlayerRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetLeaderboardAroundPlayerRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__PlayerProfileViewConstraints_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest::*)()>(&::PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<int32_t>& PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest::__cordl_internal_get_MaxResultsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxResultsCount;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest::__cordl_internal_get_MaxResultsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxResultsCount;
}
constexpr void PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest::__cordl_internal_set_MaxResultsCount(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxResultsCount = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
constexpr ::PlayFab::ClientModels::PlayerProfileViewConstraints*& PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest::__cordl_internal_get_ProfileConstraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileConstraints;
}
constexpr ::PlayFab::ClientModels::PlayerProfileViewConstraints* const& PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest::__cordl_internal_get_ProfileConstraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileConstraints;
}
constexpr void PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest::__cordl_internal_set_ProfileConstraints(::PlayFab::ClientModels::PlayerProfileViewConstraints*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProfileConstraints = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest::__cordl_internal_get_StatisticName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticName;
}
constexpr ::StringW const& PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest::__cordl_internal_get_StatisticName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticName;
}
constexpr void PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest::__cordl_internal_set_StatisticName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatisticName = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest::__cordl_internal_get_Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest::__cordl_internal_get_Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr void PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest::__cordl_internal_set_Version(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Version = value;
}
inline void PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest* PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest::GetLeaderboardAroundPlayerRequest()   {
}
