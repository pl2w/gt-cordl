#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/SetMatchmakingQueueResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__SetMatchmakingQueueResult_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::SetMatchmakingQueueResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::SetMatchmakingQueueResult::*)()>(&::PlayFab::MultiplayerModels::SetMatchmakingQueueResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::SetMatchmakingQueueResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::MultiplayerModels::SetMatchmakingQueueResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::SetMatchmakingQueueResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::SetMatchmakingQueueResult* PlayFab::MultiplayerModels::SetMatchmakingQueueResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::SetMatchmakingQueueResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::SetMatchmakingQueueResult::SetMatchmakingQueueResult()   {
}
