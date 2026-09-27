#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/ListMembershipResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__ListMembershipResponse_def.hpp"
#include "PlayFab/GroupsModels/zzzz__GroupWithRoles_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::ListMembershipResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::ListMembershipResponse::*)()>(&::PlayFab::GroupsModels::ListMembershipResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::ListMembershipResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupWithRoles*>*& PlayFab::GroupsModels::ListMembershipResponse::__cordl_internal_get_Groups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Groups;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupWithRoles*>* const& PlayFab::GroupsModels::ListMembershipResponse::__cordl_internal_get_Groups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Groups;
}
constexpr void PlayFab::GroupsModels::ListMembershipResponse::__cordl_internal_set_Groups(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupWithRoles*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Groups = value;
}
inline void PlayFab::GroupsModels::ListMembershipResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::ListMembershipResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::ListMembershipResponse* PlayFab::GroupsModels::ListMembershipResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::ListMembershipResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::ListMembershipResponse::ListMembershipResponse()   {
}
