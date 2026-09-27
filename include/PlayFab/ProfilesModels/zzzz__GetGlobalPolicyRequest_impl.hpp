#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/GetGlobalPolicyRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ProfilesModels/zzzz__GetGlobalPolicyRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ProfilesModels::GetGlobalPolicyRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ProfilesModels::GetGlobalPolicyRequest::*)()>(&::PlayFab::ProfilesModels::GetGlobalPolicyRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::GetGlobalPolicyRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::ProfilesModels::GetGlobalPolicyRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::GetGlobalPolicyRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ProfilesModels::GetGlobalPolicyRequest* PlayFab::ProfilesModels::GetGlobalPolicyRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ProfilesModels::GetGlobalPolicyRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::GetGlobalPolicyRequest::GetGlobalPolicyRequest()   {
}
