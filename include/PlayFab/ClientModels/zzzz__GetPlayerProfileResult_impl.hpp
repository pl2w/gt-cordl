#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerProfileResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerProfileResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__PlayerProfileModel_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayerProfileResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayerProfileResult::*)()>(&::PlayFab::ClientModels::GetPlayerProfileResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerProfileResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ClientModels::PlayerProfileModel*& PlayFab::ClientModels::GetPlayerProfileResult::__cordl_internal_get_PlayerProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerProfile;
}
constexpr ::PlayFab::ClientModels::PlayerProfileModel* const& PlayFab::ClientModels::GetPlayerProfileResult::__cordl_internal_get_PlayerProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerProfile;
}
constexpr void PlayFab::ClientModels::GetPlayerProfileResult::__cordl_internal_set_PlayerProfile(::PlayFab::ClientModels::PlayerProfileModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerProfile = value;
}
inline void PlayFab::ClientModels::GetPlayerProfileResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerProfileResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayerProfileResult* PlayFab::ClientModels::GetPlayerProfileResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayerProfileResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayerProfileResult::GetPlayerProfileResult()   {
}
