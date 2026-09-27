#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/CreateGroupRoleRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__CreateGroupRoleRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::CreateGroupRoleRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::CreateGroupRoleRequest::*)()>(&::PlayFab::GroupsModels::CreateGroupRoleRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::CreateGroupRoleRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::GroupsModels::EntityKey*& PlayFab::GroupsModels::CreateGroupRoleRequest::__cordl_internal_get_Group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr ::PlayFab::GroupsModels::EntityKey* const& PlayFab::GroupsModels::CreateGroupRoleRequest::__cordl_internal_get_Group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr void PlayFab::GroupsModels::CreateGroupRoleRequest::__cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Group = value;
}
constexpr ::StringW& PlayFab::GroupsModels::CreateGroupRoleRequest::__cordl_internal_get_RoleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleId;
}
constexpr ::StringW const& PlayFab::GroupsModels::CreateGroupRoleRequest::__cordl_internal_get_RoleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleId;
}
constexpr void PlayFab::GroupsModels::CreateGroupRoleRequest::__cordl_internal_set_RoleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoleId = value;
}
constexpr ::StringW& PlayFab::GroupsModels::CreateGroupRoleRequest::__cordl_internal_get_RoleName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleName;
}
constexpr ::StringW const& PlayFab::GroupsModels::CreateGroupRoleRequest::__cordl_internal_get_RoleName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleName;
}
constexpr void PlayFab::GroupsModels::CreateGroupRoleRequest::__cordl_internal_set_RoleName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoleName = value;
}
inline void PlayFab::GroupsModels::CreateGroupRoleRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::CreateGroupRoleRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::CreateGroupRoleRequest* PlayFab::GroupsModels::CreateGroupRoleRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::CreateGroupRoleRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::CreateGroupRoleRequest::CreateGroupRoleRequest()   {
}
