#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/ChangeMemberRoleRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__ChangeMemberRoleRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityKey_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::ChangeMemberRoleRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::ChangeMemberRoleRequest::*)()>(&::PlayFab::GroupsModels::ChangeMemberRoleRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::ChangeMemberRoleRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::GroupsModels::ChangeMemberRoleRequest::__cordl_internal_get_DestinationRoleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DestinationRoleId;
}
constexpr ::StringW const& PlayFab::GroupsModels::ChangeMemberRoleRequest::__cordl_internal_get_DestinationRoleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DestinationRoleId;
}
constexpr void PlayFab::GroupsModels::ChangeMemberRoleRequest::__cordl_internal_set_DestinationRoleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DestinationRoleId = value;
}
constexpr ::PlayFab::GroupsModels::EntityKey*& PlayFab::GroupsModels::ChangeMemberRoleRequest::__cordl_internal_get_Group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr ::PlayFab::GroupsModels::EntityKey* const& PlayFab::GroupsModels::ChangeMemberRoleRequest::__cordl_internal_get_Group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr void PlayFab::GroupsModels::ChangeMemberRoleRequest::__cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Group = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityKey*>*& PlayFab::GroupsModels::ChangeMemberRoleRequest::__cordl_internal_get_Members()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Members;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityKey*>* const& PlayFab::GroupsModels::ChangeMemberRoleRequest::__cordl_internal_get_Members() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Members;
}
constexpr void PlayFab::GroupsModels::ChangeMemberRoleRequest::__cordl_internal_set_Members(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityKey*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Members = value;
}
constexpr ::StringW& PlayFab::GroupsModels::ChangeMemberRoleRequest::__cordl_internal_get_OriginRoleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OriginRoleId;
}
constexpr ::StringW const& PlayFab::GroupsModels::ChangeMemberRoleRequest::__cordl_internal_get_OriginRoleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OriginRoleId;
}
constexpr void PlayFab::GroupsModels::ChangeMemberRoleRequest::__cordl_internal_set_OriginRoleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OriginRoleId = value;
}
inline void PlayFab::GroupsModels::ChangeMemberRoleRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::ChangeMemberRoleRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::ChangeMemberRoleRequest* PlayFab::GroupsModels::ChangeMemberRoleRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::ChangeMemberRoleRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::ChangeMemberRoleRequest::ChangeMemberRoleRequest()   {
}
