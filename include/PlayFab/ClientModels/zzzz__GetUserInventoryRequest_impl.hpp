#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetUserInventoryRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetUserInventoryRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetUserInventoryRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetUserInventoryRequest::*)()>(&::PlayFab::ClientModels::GetUserInventoryRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84de98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetUserInventoryRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::ClientModels::GetUserInventoryRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetUserInventoryRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetUserInventoryRequest* PlayFab::ClientModels::GetUserInventoryRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetUserInventoryRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetUserInventoryRequest::GetUserInventoryRequest()   {
}
