#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RemoveSharedGroupMembersRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__RemoveSharedGroupMembersRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::RemoveSharedGroupMembersRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::RemoveSharedGroupMembersRequest::*)()>(&::PlayFab::ClientModels::RemoveSharedGroupMembersRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RemoveSharedGroupMembersRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::RemoveSharedGroupMembersRequest::__cordl_internal_get_PlayFabIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::RemoveSharedGroupMembersRequest::__cordl_internal_get_PlayFabIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabIds;
}
constexpr void PlayFab::ClientModels::RemoveSharedGroupMembersRequest::__cordl_internal_set_PlayFabIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabIds = value;
}
constexpr ::StringW& PlayFab::ClientModels::RemoveSharedGroupMembersRequest::__cordl_internal_get_SharedGroupId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SharedGroupId;
}
constexpr ::StringW const& PlayFab::ClientModels::RemoveSharedGroupMembersRequest::__cordl_internal_get_SharedGroupId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SharedGroupId;
}
constexpr void PlayFab::ClientModels::RemoveSharedGroupMembersRequest::__cordl_internal_set_SharedGroupId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SharedGroupId = value;
}
inline void PlayFab::ClientModels::RemoveSharedGroupMembersRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RemoveSharedGroupMembersRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::RemoveSharedGroupMembersRequest* PlayFab::ClientModels::RemoveSharedGroupMembersRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::RemoveSharedGroupMembersRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::RemoveSharedGroupMembersRequest::RemoveSharedGroupMembersRequest()   {
}
