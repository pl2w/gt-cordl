#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/GetEntityProfileResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ProfilesModels/zzzz__GetEntityProfileResponse_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityProfileBody_def.hpp"
//  Writing Method size for method: ::PlayFab::ProfilesModels::GetEntityProfileResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ProfilesModels::GetEntityProfileResponse::*)()>(&::PlayFab::ProfilesModels::GetEntityProfileResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::GetEntityProfileResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ProfilesModels::EntityProfileBody*& PlayFab::ProfilesModels::GetEntityProfileResponse::__cordl_internal_get_Profile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Profile;
}
constexpr ::PlayFab::ProfilesModels::EntityProfileBody* const& PlayFab::ProfilesModels::GetEntityProfileResponse::__cordl_internal_get_Profile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Profile;
}
constexpr void PlayFab::ProfilesModels::GetEntityProfileResponse::__cordl_internal_set_Profile(::PlayFab::ProfilesModels::EntityProfileBody*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Profile = value;
}
inline void PlayFab::ProfilesModels::GetEntityProfileResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::GetEntityProfileResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ProfilesModels::GetEntityProfileResponse* PlayFab::ProfilesModels::GetEntityProfileResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ProfilesModels::GetEntityProfileResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::GetEntityProfileResponse::GetEntityProfileResponse()   {
}
