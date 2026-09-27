#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/UpdateGroupRoleRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__UpdateGroupRoleRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::UpdateGroupRoleRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::UpdateGroupRoleRequest::*)()>(&::PlayFab::GroupsModels::UpdateGroupRoleRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::UpdateGroupRoleRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<int32_t>& PlayFab::GroupsModels::UpdateGroupRoleRequest::__cordl_internal_get_ExpectedProfileVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedProfileVersion;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::GroupsModels::UpdateGroupRoleRequest::__cordl_internal_get_ExpectedProfileVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedProfileVersion;
}
constexpr void PlayFab::GroupsModels::UpdateGroupRoleRequest::__cordl_internal_set_ExpectedProfileVersion(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpectedProfileVersion = value;
}
constexpr ::PlayFab::GroupsModels::EntityKey*& PlayFab::GroupsModels::UpdateGroupRoleRequest::__cordl_internal_get_Group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr ::PlayFab::GroupsModels::EntityKey* const& PlayFab::GroupsModels::UpdateGroupRoleRequest::__cordl_internal_get_Group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr void PlayFab::GroupsModels::UpdateGroupRoleRequest::__cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Group = value;
}
constexpr ::StringW& PlayFab::GroupsModels::UpdateGroupRoleRequest::__cordl_internal_get_RoleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleId;
}
constexpr ::StringW const& PlayFab::GroupsModels::UpdateGroupRoleRequest::__cordl_internal_get_RoleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleId;
}
constexpr void PlayFab::GroupsModels::UpdateGroupRoleRequest::__cordl_internal_set_RoleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoleId = value;
}
constexpr ::StringW& PlayFab::GroupsModels::UpdateGroupRoleRequest::__cordl_internal_get_RoleName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleName;
}
constexpr ::StringW const& PlayFab::GroupsModels::UpdateGroupRoleRequest::__cordl_internal_get_RoleName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleName;
}
constexpr void PlayFab::GroupsModels::UpdateGroupRoleRequest::__cordl_internal_set_RoleName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoleName = value;
}
inline void PlayFab::GroupsModels::UpdateGroupRoleRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::UpdateGroupRoleRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::UpdateGroupRoleRequest* PlayFab::GroupsModels::UpdateGroupRoleRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::UpdateGroupRoleRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::UpdateGroupRoleRequest::UpdateGroupRoleRequest()   {
}
