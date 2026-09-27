#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UpdatePlayerStatisticsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UpdatePlayerStatisticsRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__StatisticUpdate_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UpdatePlayerStatisticsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UpdatePlayerStatisticsRequest::*)()>(&::PlayFab::ClientModels::UpdatePlayerStatisticsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UpdatePlayerStatisticsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticUpdate*>*& PlayFab::ClientModels::UpdatePlayerStatisticsRequest::__cordl_internal_get_Statistics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Statistics;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticUpdate*>* const& PlayFab::ClientModels::UpdatePlayerStatisticsRequest::__cordl_internal_get_Statistics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Statistics;
}
constexpr void PlayFab::ClientModels::UpdatePlayerStatisticsRequest::__cordl_internal_set_Statistics(::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticUpdate*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Statistics = value;
}
inline void PlayFab::ClientModels::UpdatePlayerStatisticsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UpdatePlayerStatisticsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UpdatePlayerStatisticsRequest* PlayFab::ClientModels::UpdatePlayerStatisticsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UpdatePlayerStatisticsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UpdatePlayerStatisticsRequest::UpdatePlayerStatisticsRequest()   {
}
