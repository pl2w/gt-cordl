#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/GetGroupResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__GetGroupResponse_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityKey_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::GetGroupResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::GetGroupResponse::*)()>(&::PlayFab::GroupsModels::GetGroupResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::GetGroupResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::GroupsModels::GetGroupResponse::__cordl_internal_get_AdminRoleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdminRoleId;
}
constexpr ::StringW const& PlayFab::GroupsModels::GetGroupResponse::__cordl_internal_get_AdminRoleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdminRoleId;
}
constexpr void PlayFab::GroupsModels::GetGroupResponse::__cordl_internal_set_AdminRoleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AdminRoleId = value;
}
constexpr ::System::DateTime& PlayFab::GroupsModels::GetGroupResponse::__cordl_internal_get_Created()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Created;
}
constexpr ::System::DateTime const& PlayFab::GroupsModels::GetGroupResponse::__cordl_internal_get_Created() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Created;
}
constexpr void PlayFab::GroupsModels::GetGroupResponse::__cordl_internal_set_Created(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Created = value;
}
constexpr ::PlayFab::GroupsModels::EntityKey*& PlayFab::GroupsModels::GetGroupResponse::__cordl_internal_get_Group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr ::PlayFab::GroupsModels::EntityKey* const& PlayFab::GroupsModels::GetGroupResponse::__cordl_internal_get_Group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr void PlayFab::GroupsModels::GetGroupResponse::__cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Group = value;
}
constexpr ::StringW& PlayFab::GroupsModels::GetGroupResponse::__cordl_internal_get_GroupName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupName;
}
constexpr ::StringW const& PlayFab::GroupsModels::GetGroupResponse::__cordl_internal_get_GroupName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupName;
}
constexpr void PlayFab::GroupsModels::GetGroupResponse::__cordl_internal_set_GroupName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GroupName = value;
}
constexpr ::StringW& PlayFab::GroupsModels::GetGroupResponse::__cordl_internal_get_MemberRoleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MemberRoleId;
}
constexpr ::StringW const& PlayFab::GroupsModels::GetGroupResponse::__cordl_internal_get_MemberRoleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MemberRoleId;
}
constexpr void PlayFab::GroupsModels::GetGroupResponse::__cordl_internal_set_MemberRoleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MemberRoleId = value;
}
constexpr int32_t& PlayFab::GroupsModels::GetGroupResponse::__cordl_internal_get_ProfileVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileVersion;
}
constexpr int32_t const& PlayFab::GroupsModels::GetGroupResponse::__cordl_internal_get_ProfileVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileVersion;
}
constexpr void PlayFab::GroupsModels::GetGroupResponse::__cordl_internal_set_ProfileVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProfileVersion = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& PlayFab::GroupsModels::GetGroupResponse::__cordl_internal_get_Roles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Roles;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& PlayFab::GroupsModels::GetGroupResponse::__cordl_internal_get_Roles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Roles;
}
constexpr void PlayFab::GroupsModels::GetGroupResponse::__cordl_internal_set_Roles(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Roles = value;
}
inline void PlayFab::GroupsModels::GetGroupResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::GetGroupResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::GetGroupResponse* PlayFab::GroupsModels::GetGroupResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::GetGroupResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::GetGroupResponse::GetGroupResponse()   {
}
