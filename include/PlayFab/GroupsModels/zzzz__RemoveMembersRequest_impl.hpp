#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/RemoveMembersRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__RemoveMembersRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityKey_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::RemoveMembersRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::RemoveMembersRequest::*)()>(&::PlayFab::GroupsModels::RemoveMembersRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::RemoveMembersRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::GroupsModels::EntityKey*& PlayFab::GroupsModels::RemoveMembersRequest::__cordl_internal_get_Group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr ::PlayFab::GroupsModels::EntityKey* const& PlayFab::GroupsModels::RemoveMembersRequest::__cordl_internal_get_Group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr void PlayFab::GroupsModels::RemoveMembersRequest::__cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Group = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityKey*>*& PlayFab::GroupsModels::RemoveMembersRequest::__cordl_internal_get_Members()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Members;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityKey*>* const& PlayFab::GroupsModels::RemoveMembersRequest::__cordl_internal_get_Members() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Members;
}
constexpr void PlayFab::GroupsModels::RemoveMembersRequest::__cordl_internal_set_Members(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityKey*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Members = value;
}
constexpr ::StringW& PlayFab::GroupsModels::RemoveMembersRequest::__cordl_internal_get_RoleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleId;
}
constexpr ::StringW const& PlayFab::GroupsModels::RemoveMembersRequest::__cordl_internal_get_RoleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleId;
}
constexpr void PlayFab::GroupsModels::RemoveMembersRequest::__cordl_internal_set_RoleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoleId = value;
}
inline void PlayFab::GroupsModels::RemoveMembersRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::RemoveMembersRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::RemoveMembersRequest* PlayFab::GroupsModels::RemoveMembersRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::RemoveMembersRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::RemoveMembersRequest::RemoveMembersRequest()   {
}
