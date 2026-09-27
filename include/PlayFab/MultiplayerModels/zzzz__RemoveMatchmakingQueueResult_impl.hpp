#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/RemoveMatchmakingQueueResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__RemoveMatchmakingQueueResult_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::RemoveMatchmakingQueueResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::RemoveMatchmakingQueueResult::*)()>(&::PlayFab::MultiplayerModels::RemoveMatchmakingQueueResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::RemoveMatchmakingQueueResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::MultiplayerModels::RemoveMatchmakingQueueResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::RemoveMatchmakingQueueResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::RemoveMatchmakingQueueResult* PlayFab::MultiplayerModels::RemoveMatchmakingQueueResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::RemoveMatchmakingQueueResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::RemoveMatchmakingQueueResult::RemoveMatchmakingQueueResult()   {
}
