#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/SetGlobalPolicyResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ProfilesModels/zzzz__SetGlobalPolicyResponse_def.hpp"
//  Writing Method size for method: ::PlayFab::ProfilesModels::SetGlobalPolicyResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ProfilesModels::SetGlobalPolicyResponse::*)()>(&::PlayFab::ProfilesModels::SetGlobalPolicyResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::SetGlobalPolicyResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::ProfilesModels::SetGlobalPolicyResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::SetGlobalPolicyResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ProfilesModels::SetGlobalPolicyResponse* PlayFab::ProfilesModels::SetGlobalPolicyResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ProfilesModels::SetGlobalPolicyResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::SetGlobalPolicyResponse::SetGlobalPolicyResponse()   {
}
