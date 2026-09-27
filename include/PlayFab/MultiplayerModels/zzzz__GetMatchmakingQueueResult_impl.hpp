#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetMatchmakingQueueResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__GetMatchmakingQueueResult_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__MatchmakingQueueConfig_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::GetMatchmakingQueueResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::GetMatchmakingQueueResult::*)()>(&::PlayFab::MultiplayerModels::GetMatchmakingQueueResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetMatchmakingQueueResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::MultiplayerModels::MatchmakingQueueConfig*& PlayFab::MultiplayerModels::GetMatchmakingQueueResult::__cordl_internal_get_MatchmakingQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MatchmakingQueue;
}
constexpr ::PlayFab::MultiplayerModels::MatchmakingQueueConfig* const& PlayFab::MultiplayerModels::GetMatchmakingQueueResult::__cordl_internal_get_MatchmakingQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MatchmakingQueue;
}
constexpr void PlayFab::MultiplayerModels::GetMatchmakingQueueResult::__cordl_internal_set_MatchmakingQueue(::PlayFab::MultiplayerModels::MatchmakingQueueConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MatchmakingQueue = value;
}
inline void PlayFab::MultiplayerModels::GetMatchmakingQueueResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetMatchmakingQueueResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::GetMatchmakingQueueResult* PlayFab::MultiplayerModels::GetMatchmakingQueueResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::GetMatchmakingQueueResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::GetMatchmakingQueueResult::GetMatchmakingQueueResult()   {
}
