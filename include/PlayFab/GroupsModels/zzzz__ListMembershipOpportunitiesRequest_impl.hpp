#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/ListMembershipOpportunitiesRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__ListMembershipOpportunitiesRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest::*)()>(&::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::GroupsModels::EntityKey*& PlayFab::GroupsModels::ListMembershipOpportunitiesRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::GroupsModels::EntityKey* const& PlayFab::GroupsModels::ListMembershipOpportunitiesRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::GroupsModels::ListMembershipOpportunitiesRequest::__cordl_internal_set_Entity(::PlayFab::GroupsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
inline void PlayFab::GroupsModels::ListMembershipOpportunitiesRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest* PlayFab::GroupsModels::ListMembershipOpportunitiesRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest::ListMembershipOpportunitiesRequest()   {
}
