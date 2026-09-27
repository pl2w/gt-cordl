#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetLeaderboardRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetLeaderboardRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__PlayerProfileViewConstraints_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetLeaderboardRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetLeaderboardRequest::*)()>(&::PlayFab::ClientModels::GetLeaderboardRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetLeaderboardRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<int32_t>& PlayFab::ClientModels::GetLeaderboardRequest::__cordl_internal_get_MaxResultsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxResultsCount;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::ClientModels::GetLeaderboardRequest::__cordl_internal_get_MaxResultsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxResultsCount;
}
constexpr void PlayFab::ClientModels::GetLeaderboardRequest::__cordl_internal_set_MaxResultsCount(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxResultsCount = value;
}
constexpr ::PlayFab::ClientModels::PlayerProfileViewConstraints*& PlayFab::ClientModels::GetLeaderboardRequest::__cordl_internal_get_ProfileConstraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileConstraints;
}
constexpr ::PlayFab::ClientModels::PlayerProfileViewConstraints* const& PlayFab::ClientModels::GetLeaderboardRequest::__cordl_internal_get_ProfileConstraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileConstraints;
}
constexpr void PlayFab::ClientModels::GetLeaderboardRequest::__cordl_internal_set_ProfileConstraints(::PlayFab::ClientModels::PlayerProfileViewConstraints*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProfileConstraints = value;
}
constexpr int32_t& PlayFab::ClientModels::GetLeaderboardRequest::__cordl_internal_get_StartPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartPosition;
}
constexpr int32_t const& PlayFab::ClientModels::GetLeaderboardRequest::__cordl_internal_get_StartPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartPosition;
}
constexpr void PlayFab::ClientModels::GetLeaderboardRequest::__cordl_internal_set_StartPosition(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartPosition = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetLeaderboardRequest::__cordl_internal_get_StatisticName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticName;
}
constexpr ::StringW const& PlayFab::ClientModels::GetLeaderboardRequest::__cordl_internal_get_StatisticName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticName;
}
constexpr void PlayFab::ClientModels::GetLeaderboardRequest::__cordl_internal_set_StatisticName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatisticName = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::ClientModels::GetLeaderboardRequest::__cordl_internal_get_Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::ClientModels::GetLeaderboardRequest::__cordl_internal_get_Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr void PlayFab::ClientModels::GetLeaderboardRequest::__cordl_internal_set_Version(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Version = value;
}
inline void PlayFab::ClientModels::GetLeaderboardRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetLeaderboardRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetLeaderboardRequest* PlayFab::ClientModels::GetLeaderboardRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetLeaderboardRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetLeaderboardRequest::GetLeaderboardRequest()   {
}
