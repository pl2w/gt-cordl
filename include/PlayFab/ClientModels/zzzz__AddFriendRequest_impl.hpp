#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AddFriendRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__AddFriendRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::AddFriendRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::AddFriendRequest::*)()>(&::PlayFab::ClientModels::AddFriendRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84d9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AddFriendRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::AddFriendRequest::__cordl_internal_get_FriendEmail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FriendEmail;
}
constexpr ::StringW const& PlayFab::ClientModels::AddFriendRequest::__cordl_internal_get_FriendEmail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FriendEmail;
}
constexpr void PlayFab::ClientModels::AddFriendRequest::__cordl_internal_set_FriendEmail(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FriendEmail = value;
}
constexpr ::StringW& PlayFab::ClientModels::AddFriendRequest::__cordl_internal_get_FriendPlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FriendPlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::AddFriendRequest::__cordl_internal_get_FriendPlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FriendPlayFabId;
}
constexpr void PlayFab::ClientModels::AddFriendRequest::__cordl_internal_set_FriendPlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FriendPlayFabId = value;
}
constexpr ::StringW& PlayFab::ClientModels::AddFriendRequest::__cordl_internal_get_FriendTitleDisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FriendTitleDisplayName;
}
constexpr ::StringW const& PlayFab::ClientModels::AddFriendRequest::__cordl_internal_get_FriendTitleDisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FriendTitleDisplayName;
}
constexpr void PlayFab::ClientModels::AddFriendRequest::__cordl_internal_set_FriendTitleDisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FriendTitleDisplayName = value;
}
constexpr ::StringW& PlayFab::ClientModels::AddFriendRequest::__cordl_internal_get_FriendUsername()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FriendUsername;
}
constexpr ::StringW const& PlayFab::ClientModels::AddFriendRequest::__cordl_internal_get_FriendUsername() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FriendUsername;
}
constexpr void PlayFab::ClientModels::AddFriendRequest::__cordl_internal_set_FriendUsername(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FriendUsername = value;
}
inline void PlayFab::ClientModels::AddFriendRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AddFriendRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::AddFriendRequest* PlayFab::ClientModels::AddFriendRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::AddFriendRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::AddFriendRequest::AddFriendRequest()   {
}
