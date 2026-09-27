#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListMatchmakingQueuesRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ListMatchmakingQueuesRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::ListMatchmakingQueuesRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::ListMatchmakingQueuesRequest::*)()>(&::PlayFab::MultiplayerModels::ListMatchmakingQueuesRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListMatchmakingQueuesRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::MultiplayerModels::ListMatchmakingQueuesRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListMatchmakingQueuesRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::ListMatchmakingQueuesRequest* PlayFab::MultiplayerModels::ListMatchmakingQueuesRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::ListMatchmakingQueuesRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::ListMatchmakingQueuesRequest::ListMatchmakingQueuesRequest()   {
}
