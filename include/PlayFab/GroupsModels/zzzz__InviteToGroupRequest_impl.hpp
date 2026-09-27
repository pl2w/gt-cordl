#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/InviteToGroupRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__InviteToGroupRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::InviteToGroupRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::InviteToGroupRequest::*)()>(&::PlayFab::GroupsModels::InviteToGroupRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::InviteToGroupRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<bool>& PlayFab::GroupsModels::InviteToGroupRequest::__cordl_internal_get_AutoAcceptOutstandingApplication()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoAcceptOutstandingApplication;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::GroupsModels::InviteToGroupRequest::__cordl_internal_get_AutoAcceptOutstandingApplication() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoAcceptOutstandingApplication;
}
constexpr void PlayFab::GroupsModels::InviteToGroupRequest::__cordl_internal_set_AutoAcceptOutstandingApplication(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoAcceptOutstandingApplication = value;
}
constexpr ::PlayFab::GroupsModels::EntityKey*& PlayFab::GroupsModels::InviteToGroupRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::GroupsModels::EntityKey* const& PlayFab::GroupsModels::InviteToGroupRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::GroupsModels::InviteToGroupRequest::__cordl_internal_set_Entity(::PlayFab::GroupsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::PlayFab::GroupsModels::EntityKey*& PlayFab::GroupsModels::InviteToGroupRequest::__cordl_internal_get_Group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr ::PlayFab::GroupsModels::EntityKey* const& PlayFab::GroupsModels::InviteToGroupRequest::__cordl_internal_get_Group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr void PlayFab::GroupsModels::InviteToGroupRequest::__cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Group = value;
}
constexpr ::StringW& PlayFab::GroupsModels::InviteToGroupRequest::__cordl_internal_get_RoleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleId;
}
constexpr ::StringW const& PlayFab::GroupsModels::InviteToGroupRequest::__cordl_internal_get_RoleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleId;
}
constexpr void PlayFab::GroupsModels::InviteToGroupRequest::__cordl_internal_set_RoleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoleId = value;
}
inline void PlayFab::GroupsModels::InviteToGroupRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::InviteToGroupRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::InviteToGroupRequest* PlayFab::GroupsModels::InviteToGroupRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::InviteToGroupRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::InviteToGroupRequest::InviteToGroupRequest()   {
}
