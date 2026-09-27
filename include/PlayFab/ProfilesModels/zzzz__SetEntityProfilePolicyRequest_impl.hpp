#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/SetEntityProfilePolicyRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ProfilesModels/zzzz__SetEntityProfilePolicyRequest_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityKey_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityPermissionStatement_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest::*)()>(&::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ProfilesModels::EntityKey*& PlayFab::ProfilesModels::SetEntityProfilePolicyRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::ProfilesModels::EntityKey* const& PlayFab::ProfilesModels::SetEntityProfilePolicyRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::ProfilesModels::SetEntityProfilePolicyRequest::__cordl_internal_set_Entity(::PlayFab::ProfilesModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*& PlayFab::ProfilesModels::SetEntityProfilePolicyRequest::__cordl_internal_get_Statements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Statements;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>* const& PlayFab::ProfilesModels::SetEntityProfilePolicyRequest::__cordl_internal_get_Statements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Statements;
}
constexpr void PlayFab::ProfilesModels::SetEntityProfilePolicyRequest::__cordl_internal_set_Statements(::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Statements = value;
}
inline void PlayFab::ProfilesModels::SetEntityProfilePolicyRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest* PlayFab::ProfilesModels::SetEntityProfilePolicyRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest::SetEntityProfilePolicyRequest()   {
}
