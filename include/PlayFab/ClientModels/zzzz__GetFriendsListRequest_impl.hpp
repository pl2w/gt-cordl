#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetFriendsListRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetFriendsListRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__PlayerProfileViewConstraints_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetFriendsListRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetFriendsListRequest::*)()>(&::PlayFab::ClientModels::GetFriendsListRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetFriendsListRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::GetFriendsListRequest::__cordl_internal_get_IncludeFacebookFriends()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IncludeFacebookFriends;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::GetFriendsListRequest::__cordl_internal_get_IncludeFacebookFriends() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IncludeFacebookFriends;
}
constexpr void PlayFab::ClientModels::GetFriendsListRequest::__cordl_internal_set_IncludeFacebookFriends(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IncludeFacebookFriends = value;
}
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::GetFriendsListRequest::__cordl_internal_get_IncludeSteamFriends()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IncludeSteamFriends;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::GetFriendsListRequest::__cordl_internal_get_IncludeSteamFriends() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IncludeSteamFriends;
}
constexpr void PlayFab::ClientModels::GetFriendsListRequest::__cordl_internal_set_IncludeSteamFriends(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IncludeSteamFriends = value;
}
constexpr ::PlayFab::ClientModels::PlayerProfileViewConstraints*& PlayFab::ClientModels::GetFriendsListRequest::__cordl_internal_get_ProfileConstraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileConstraints;
}
constexpr ::PlayFab::ClientModels::PlayerProfileViewConstraints* const& PlayFab::ClientModels::GetFriendsListRequest::__cordl_internal_get_ProfileConstraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileConstraints;
}
constexpr void PlayFab::ClientModels::GetFriendsListRequest::__cordl_internal_set_ProfileConstraints(::PlayFab::ClientModels::PlayerProfileViewConstraints*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProfileConstraints = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetFriendsListRequest::__cordl_internal_get_XboxToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XboxToken;
}
constexpr ::StringW const& PlayFab::ClientModels::GetFriendsListRequest::__cordl_internal_get_XboxToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XboxToken;
}
constexpr void PlayFab::ClientModels::GetFriendsListRequest::__cordl_internal_set_XboxToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XboxToken = value;
}
inline void PlayFab::ClientModels::GetFriendsListRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetFriendsListRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetFriendsListRequest* PlayFab::ClientModels::GetFriendsListRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetFriendsListRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetFriendsListRequest::GetFriendsListRequest()   {
}
