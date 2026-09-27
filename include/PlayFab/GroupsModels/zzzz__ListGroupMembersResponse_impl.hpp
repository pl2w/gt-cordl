#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/ListGroupMembersResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__ListGroupMembersResponse_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityMemberRole_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::ListGroupMembersResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::ListGroupMembersResponse::*)()>(&::PlayFab::GroupsModels::ListGroupMembersResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::ListGroupMembersResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityMemberRole*>*& PlayFab::GroupsModels::ListGroupMembersResponse::__cordl_internal_get_Members()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Members;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityMemberRole*>* const& PlayFab::GroupsModels::ListGroupMembersResponse::__cordl_internal_get_Members() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Members;
}
constexpr void PlayFab::GroupsModels::ListGroupMembersResponse::__cordl_internal_set_Members(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityMemberRole*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Members = value;
}
inline void PlayFab::GroupsModels::ListGroupMembersResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::ListGroupMembersResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::ListGroupMembersResponse* PlayFab::GroupsModels::ListGroupMembersResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::ListGroupMembersResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::ListGroupMembersResponse::ListGroupMembersResponse()   {
}
