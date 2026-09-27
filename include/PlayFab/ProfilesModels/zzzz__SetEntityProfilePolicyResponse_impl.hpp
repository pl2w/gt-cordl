#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/SetEntityProfilePolicyResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ProfilesModels/zzzz__SetEntityProfilePolicyResponse_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityPermissionStatement_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ProfilesModels::SetEntityProfilePolicyResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ProfilesModels::SetEntityProfilePolicyResponse::*)()>(&::PlayFab::ProfilesModels::SetEntityProfilePolicyResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::SetEntityProfilePolicyResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*& PlayFab::ProfilesModels::SetEntityProfilePolicyResponse::__cordl_internal_get_Permissions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Permissions;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>* const& PlayFab::ProfilesModels::SetEntityProfilePolicyResponse::__cordl_internal_get_Permissions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Permissions;
}
constexpr void PlayFab::ProfilesModels::SetEntityProfilePolicyResponse::__cordl_internal_set_Permissions(::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Permissions = value;
}
inline void PlayFab::ProfilesModels::SetEntityProfilePolicyResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::SetEntityProfilePolicyResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ProfilesModels::SetEntityProfilePolicyResponse* PlayFab::ProfilesModels::SetEntityProfilePolicyResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ProfilesModels::SetEntityProfilePolicyResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::SetEntityProfilePolicyResponse::SetEntityProfilePolicyResponse()   {
}
