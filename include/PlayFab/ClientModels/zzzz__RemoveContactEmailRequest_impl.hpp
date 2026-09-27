#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RemoveContactEmailRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__RemoveContactEmailRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::RemoveContactEmailRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::RemoveContactEmailRequest::*)()>(&::PlayFab::ClientModels::RemoveContactEmailRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RemoveContactEmailRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::ClientModels::RemoveContactEmailRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RemoveContactEmailRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::RemoveContactEmailRequest* PlayFab::ClientModels::RemoveContactEmailRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::RemoveContactEmailRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::RemoveContactEmailRequest::RemoveContactEmailRequest()   {
}
