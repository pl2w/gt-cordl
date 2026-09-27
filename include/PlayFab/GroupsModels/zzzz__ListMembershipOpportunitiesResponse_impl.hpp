#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/ListMembershipOpportunitiesResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__ListMembershipOpportunitiesResponse_def.hpp"
#include "PlayFab/GroupsModels/zzzz__GroupApplication_def.hpp"
#include "PlayFab/GroupsModels/zzzz__GroupInvitation_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse::*)()>(&::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>*& PlayFab::GroupsModels::ListMembershipOpportunitiesResponse::__cordl_internal_get_Applications()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Applications;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>* const& PlayFab::GroupsModels::ListMembershipOpportunitiesResponse::__cordl_internal_get_Applications() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Applications;
}
constexpr void PlayFab::GroupsModels::ListMembershipOpportunitiesResponse::__cordl_internal_set_Applications(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Applications = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupInvitation*>*& PlayFab::GroupsModels::ListMembershipOpportunitiesResponse::__cordl_internal_get_Invitations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Invitations;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupInvitation*>* const& PlayFab::GroupsModels::ListMembershipOpportunitiesResponse::__cordl_internal_get_Invitations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Invitations;
}
constexpr void PlayFab::GroupsModels::ListMembershipOpportunitiesResponse::__cordl_internal_set_Invitations(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupInvitation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Invitations = value;
}
inline void PlayFab::GroupsModels::ListMembershipOpportunitiesResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse* PlayFab::GroupsModels::ListMembershipOpportunitiesResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse::ListMembershipOpportunitiesResponse()   {
}
