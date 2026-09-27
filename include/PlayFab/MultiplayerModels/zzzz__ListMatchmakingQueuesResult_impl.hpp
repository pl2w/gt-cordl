#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListMatchmakingQueuesResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ListMatchmakingQueuesResult_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__MatchmakingQueueConfig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::ListMatchmakingQueuesResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::ListMatchmakingQueuesResult::*)()>(&::PlayFab::MultiplayerModels::ListMatchmakingQueuesResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListMatchmakingQueuesResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingQueueConfig*>*& PlayFab::MultiplayerModels::ListMatchmakingQueuesResult::__cordl_internal_get_MatchMakingQueues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MatchMakingQueues;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingQueueConfig*>* const& PlayFab::MultiplayerModels::ListMatchmakingQueuesResult::__cordl_internal_get_MatchMakingQueues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MatchMakingQueues;
}
constexpr void PlayFab::MultiplayerModels::ListMatchmakingQueuesResult::__cordl_internal_set_MatchMakingQueues(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingQueueConfig*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MatchMakingQueues = value;
}
inline void PlayFab::MultiplayerModels::ListMatchmakingQueuesResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListMatchmakingQueuesResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::ListMatchmakingQueuesResult* PlayFab::MultiplayerModels::ListMatchmakingQueuesResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::ListMatchmakingQueuesResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::ListMatchmakingQueuesResult::ListMatchmakingQueuesResult()   {
}
