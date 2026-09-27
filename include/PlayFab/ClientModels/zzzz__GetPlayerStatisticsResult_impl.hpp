#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerStatisticsResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerStatisticsResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__StatisticValue_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayerStatisticsResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayerStatisticsResult::*)()>(&::PlayFab::ClientModels::GetPlayerStatisticsResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerStatisticsResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticValue*>*& PlayFab::ClientModels::GetPlayerStatisticsResult::__cordl_internal_get_Statistics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Statistics;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticValue*>* const& PlayFab::ClientModels::GetPlayerStatisticsResult::__cordl_internal_get_Statistics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Statistics;
}
constexpr void PlayFab::ClientModels::GetPlayerStatisticsResult::__cordl_internal_set_Statistics(::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticValue*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Statistics = value;
}
inline void PlayFab::ClientModels::GetPlayerStatisticsResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerStatisticsResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayerStatisticsResult* PlayFab::ClientModels::GetPlayerStatisticsResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayerStatisticsResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayerStatisticsResult::GetPlayerStatisticsResult()   {
}
