#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/SetFriendTagsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__SetFriendTagsRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::SetFriendTagsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::SetFriendTagsRequest::*)()>(&::PlayFab::ClientModels::SetFriendTagsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::SetFriendTagsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::SetFriendTagsRequest::__cordl_internal_get_FriendPlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FriendPlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::SetFriendTagsRequest::__cordl_internal_get_FriendPlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FriendPlayFabId;
}
constexpr void PlayFab::ClientModels::SetFriendTagsRequest::__cordl_internal_set_FriendPlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FriendPlayFabId = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::SetFriendTagsRequest::__cordl_internal_get_Tags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tags;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::SetFriendTagsRequest::__cordl_internal_get_Tags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tags;
}
constexpr void PlayFab::ClientModels::SetFriendTagsRequest::__cordl_internal_set_Tags(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tags = value;
}
inline void PlayFab::ClientModels::SetFriendTagsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::SetFriendTagsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::SetFriendTagsRequest* PlayFab::ClientModels::SetFriendTagsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::SetFriendTagsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::SetFriendTagsRequest::SetFriendTagsRequest()   {
}
