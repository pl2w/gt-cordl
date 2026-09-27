#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/GetEntityProfilesResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ProfilesModels/zzzz__GetEntityProfilesResponse_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityProfileBody_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ProfilesModels::GetEntityProfilesResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ProfilesModels::GetEntityProfilesResponse::*)()>(&::PlayFab::ProfilesModels::GetEntityProfilesResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::GetEntityProfilesResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityProfileBody*>*& PlayFab::ProfilesModels::GetEntityProfilesResponse::__cordl_internal_get_Profiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Profiles;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityProfileBody*>* const& PlayFab::ProfilesModels::GetEntityProfilesResponse::__cordl_internal_get_Profiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Profiles;
}
constexpr void PlayFab::ProfilesModels::GetEntityProfilesResponse::__cordl_internal_set_Profiles(::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityProfileBody*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Profiles = value;
}
inline void PlayFab::ProfilesModels::GetEntityProfilesResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::GetEntityProfilesResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ProfilesModels::GetEntityProfilesResponse* PlayFab::ProfilesModels::GetEntityProfilesResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ProfilesModels::GetEntityProfilesResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::GetEntityProfilesResponse::GetEntityProfilesResponse()   {
}
