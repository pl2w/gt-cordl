#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerSegmentsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerSegmentsRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayerSegmentsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayerSegmentsRequest::*)()>(&::PlayFab::ClientModels::GetPlayerSegmentsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerSegmentsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::ClientModels::GetPlayerSegmentsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerSegmentsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayerSegmentsRequest* PlayFab::ClientModels::GetPlayerSegmentsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayerSegmentsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayerSegmentsRequest::GetPlayerSegmentsRequest()   {
}
