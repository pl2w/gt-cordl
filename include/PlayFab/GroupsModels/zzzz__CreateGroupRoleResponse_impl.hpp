#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/CreateGroupRoleResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__CreateGroupRoleResponse_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::CreateGroupRoleResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::CreateGroupRoleResponse::*)()>(&::PlayFab::GroupsModels::CreateGroupRoleResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::CreateGroupRoleResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::GroupsModels::CreateGroupRoleResponse::__cordl_internal_get_ProfileVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileVersion;
}
constexpr int32_t const& PlayFab::GroupsModels::CreateGroupRoleResponse::__cordl_internal_get_ProfileVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileVersion;
}
constexpr void PlayFab::GroupsModels::CreateGroupRoleResponse::__cordl_internal_set_ProfileVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProfileVersion = value;
}
constexpr ::StringW& PlayFab::GroupsModels::CreateGroupRoleResponse::__cordl_internal_get_RoleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleId;
}
constexpr ::StringW const& PlayFab::GroupsModels::CreateGroupRoleResponse::__cordl_internal_get_RoleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleId;
}
constexpr void PlayFab::GroupsModels::CreateGroupRoleResponse::__cordl_internal_set_RoleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoleId = value;
}
constexpr ::StringW& PlayFab::GroupsModels::CreateGroupRoleResponse::__cordl_internal_get_RoleName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleName;
}
constexpr ::StringW const& PlayFab::GroupsModels::CreateGroupRoleResponse::__cordl_internal_get_RoleName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleName;
}
constexpr void PlayFab::GroupsModels::CreateGroupRoleResponse::__cordl_internal_set_RoleName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoleName = value;
}
inline void PlayFab::GroupsModels::CreateGroupRoleResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::CreateGroupRoleResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::CreateGroupRoleResponse* PlayFab::GroupsModels::CreateGroupRoleResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::CreateGroupRoleResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::CreateGroupRoleResponse::CreateGroupRoleResponse()   {
}
