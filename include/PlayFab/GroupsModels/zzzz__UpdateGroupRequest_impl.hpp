#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/UpdateGroupRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__UpdateGroupRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::UpdateGroupRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::UpdateGroupRequest::*)()>(&::PlayFab::GroupsModels::UpdateGroupRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::UpdateGroupRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::GroupsModels::UpdateGroupRequest::__cordl_internal_get_AdminRoleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdminRoleId;
}
constexpr ::StringW const& PlayFab::GroupsModels::UpdateGroupRequest::__cordl_internal_get_AdminRoleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdminRoleId;
}
constexpr void PlayFab::GroupsModels::UpdateGroupRequest::__cordl_internal_set_AdminRoleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AdminRoleId = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::GroupsModels::UpdateGroupRequest::__cordl_internal_get_ExpectedProfileVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedProfileVersion;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::GroupsModels::UpdateGroupRequest::__cordl_internal_get_ExpectedProfileVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedProfileVersion;
}
constexpr void PlayFab::GroupsModels::UpdateGroupRequest::__cordl_internal_set_ExpectedProfileVersion(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpectedProfileVersion = value;
}
constexpr ::PlayFab::GroupsModels::EntityKey*& PlayFab::GroupsModels::UpdateGroupRequest::__cordl_internal_get_Group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr ::PlayFab::GroupsModels::EntityKey* const& PlayFab::GroupsModels::UpdateGroupRequest::__cordl_internal_get_Group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr void PlayFab::GroupsModels::UpdateGroupRequest::__cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Group = value;
}
constexpr ::StringW& PlayFab::GroupsModels::UpdateGroupRequest::__cordl_internal_get_GroupName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupName;
}
constexpr ::StringW const& PlayFab::GroupsModels::UpdateGroupRequest::__cordl_internal_get_GroupName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupName;
}
constexpr void PlayFab::GroupsModels::UpdateGroupRequest::__cordl_internal_set_GroupName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GroupName = value;
}
constexpr ::StringW& PlayFab::GroupsModels::UpdateGroupRequest::__cordl_internal_get_MemberRoleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MemberRoleId;
}
constexpr ::StringW const& PlayFab::GroupsModels::UpdateGroupRequest::__cordl_internal_get_MemberRoleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MemberRoleId;
}
constexpr void PlayFab::GroupsModels::UpdateGroupRequest::__cordl_internal_set_MemberRoleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MemberRoleId = value;
}
inline void PlayFab::GroupsModels::UpdateGroupRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::UpdateGroupRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::UpdateGroupRequest* PlayFab::GroupsModels::UpdateGroupRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::UpdateGroupRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::UpdateGroupRequest::UpdateGroupRequest()   {
}
