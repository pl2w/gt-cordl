#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RemoveFriendRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__RemoveFriendRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::RemoveFriendRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::RemoveFriendRequest::*)()>(&::PlayFab::ClientModels::RemoveFriendRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RemoveFriendRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::RemoveFriendRequest::__cordl_internal_get_FriendPlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FriendPlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::RemoveFriendRequest::__cordl_internal_get_FriendPlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FriendPlayFabId;
}
constexpr void PlayFab::ClientModels::RemoveFriendRequest::__cordl_internal_set_FriendPlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FriendPlayFabId = value;
}
inline void PlayFab::ClientModels::RemoveFriendRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RemoveFriendRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::RemoveFriendRequest* PlayFab::ClientModels::RemoveFriendRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::RemoveFriendRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::RemoveFriendRequest::RemoveFriendRequest()   {
}
