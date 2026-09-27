#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/ListGroupMembersRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__ListGroupMembersRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::ListGroupMembersRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::ListGroupMembersRequest::*)()>(&::PlayFab::GroupsModels::ListGroupMembersRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::ListGroupMembersRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::GroupsModels::EntityKey*& PlayFab::GroupsModels::ListGroupMembersRequest::__cordl_internal_get_Group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr ::PlayFab::GroupsModels::EntityKey* const& PlayFab::GroupsModels::ListGroupMembersRequest::__cordl_internal_get_Group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr void PlayFab::GroupsModels::ListGroupMembersRequest::__cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Group = value;
}
inline void PlayFab::GroupsModels::ListGroupMembersRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::ListGroupMembersRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::ListGroupMembersRequest* PlayFab::GroupsModels::ListGroupMembersRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::ListGroupMembersRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::ListGroupMembersRequest::ListGroupMembersRequest()   {
}
