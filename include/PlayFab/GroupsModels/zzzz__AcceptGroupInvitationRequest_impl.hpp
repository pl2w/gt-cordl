#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/AcceptGroupInvitationRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__AcceptGroupInvitationRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::AcceptGroupInvitationRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::AcceptGroupInvitationRequest::*)()>(&::PlayFab::GroupsModels::AcceptGroupInvitationRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::AcceptGroupInvitationRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::GroupsModels::EntityKey*& PlayFab::GroupsModels::AcceptGroupInvitationRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::GroupsModels::EntityKey* const& PlayFab::GroupsModels::AcceptGroupInvitationRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::GroupsModels::AcceptGroupInvitationRequest::__cordl_internal_set_Entity(::PlayFab::GroupsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::PlayFab::GroupsModels::EntityKey*& PlayFab::GroupsModels::AcceptGroupInvitationRequest::__cordl_internal_get_Group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr ::PlayFab::GroupsModels::EntityKey* const& PlayFab::GroupsModels::AcceptGroupInvitationRequest::__cordl_internal_get_Group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr void PlayFab::GroupsModels::AcceptGroupInvitationRequest::__cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Group = value;
}
inline void PlayFab::GroupsModels::AcceptGroupInvitationRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::AcceptGroupInvitationRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::AcceptGroupInvitationRequest* PlayFab::GroupsModels::AcceptGroupInvitationRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::AcceptGroupInvitationRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::AcceptGroupInvitationRequest::AcceptGroupInvitationRequest()   {
}
