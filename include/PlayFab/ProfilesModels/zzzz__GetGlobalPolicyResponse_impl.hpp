#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/GetGlobalPolicyResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ProfilesModels/zzzz__GetGlobalPolicyResponse_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityPermissionStatement_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ProfilesModels::GetGlobalPolicyResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ProfilesModels::GetGlobalPolicyResponse::*)()>(&::PlayFab::ProfilesModels::GetGlobalPolicyResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::GetGlobalPolicyResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*& PlayFab::ProfilesModels::GetGlobalPolicyResponse::__cordl_internal_get_Permissions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Permissions;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>* const& PlayFab::ProfilesModels::GetGlobalPolicyResponse::__cordl_internal_get_Permissions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Permissions;
}
constexpr void PlayFab::ProfilesModels::GetGlobalPolicyResponse::__cordl_internal_set_Permissions(::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Permissions = value;
}
inline void PlayFab::ProfilesModels::GetGlobalPolicyResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::GetGlobalPolicyResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ProfilesModels::GetGlobalPolicyResponse* PlayFab::ProfilesModels::GetGlobalPolicyResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ProfilesModels::GetGlobalPolicyResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::GetGlobalPolicyResponse::GetGlobalPolicyResponse()   {
}
