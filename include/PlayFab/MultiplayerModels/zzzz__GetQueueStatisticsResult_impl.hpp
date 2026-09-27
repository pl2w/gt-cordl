#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetQueueStatisticsResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__GetQueueStatisticsResult_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__Statistics_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::GetQueueStatisticsResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::GetQueueStatisticsResult::*)()>(&::PlayFab::MultiplayerModels::GetQueueStatisticsResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8409f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetQueueStatisticsResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<uint32_t>& PlayFab::MultiplayerModels::GetQueueStatisticsResult::__cordl_internal_get_NumberOfPlayersMatching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumberOfPlayersMatching;
}
constexpr ::System::Nullable_1<uint32_t> const& PlayFab::MultiplayerModels::GetQueueStatisticsResult::__cordl_internal_get_NumberOfPlayersMatching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumberOfPlayersMatching;
}
constexpr void PlayFab::MultiplayerModels::GetQueueStatisticsResult::__cordl_internal_set_NumberOfPlayersMatching(::System::Nullable_1<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NumberOfPlayersMatching = value;
}
constexpr ::PlayFab::MultiplayerModels::Statistics*& PlayFab::MultiplayerModels::GetQueueStatisticsResult::__cordl_internal_get_TimeToMatchStatisticsInSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TimeToMatchStatisticsInSeconds;
}
constexpr ::PlayFab::MultiplayerModels::Statistics* const& PlayFab::MultiplayerModels::GetQueueStatisticsResult::__cordl_internal_get_TimeToMatchStatisticsInSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TimeToMatchStatisticsInSeconds;
}
constexpr void PlayFab::MultiplayerModels::GetQueueStatisticsResult::__cordl_internal_set_TimeToMatchStatisticsInSeconds(::PlayFab::MultiplayerModels::Statistics*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TimeToMatchStatisticsInSeconds = value;
}
inline void PlayFab::MultiplayerModels::GetQueueStatisticsResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetQueueStatisticsResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::GetQueueStatisticsResult* PlayFab::MultiplayerModels::GetQueueStatisticsResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::GetQueueStatisticsResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::GetQueueStatisticsResult::GetQueueStatisticsResult()   {
}
