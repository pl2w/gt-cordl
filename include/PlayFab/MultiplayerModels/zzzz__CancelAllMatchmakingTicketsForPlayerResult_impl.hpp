#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CancelAllMatchmakingTicketsForPlayerResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CancelAllMatchmakingTicketsForPlayerResult_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerResult::*)()>(&::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8407e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerResult* PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerResult::CancelAllMatchmakingTicketsForPlayerResult()   {
}
