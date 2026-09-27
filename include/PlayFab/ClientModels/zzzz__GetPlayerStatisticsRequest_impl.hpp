#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerStatisticsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerStatisticsRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__StatisticNameVersion_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayerStatisticsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayerStatisticsRequest::*)()>(&::PlayFab::ClientModels::GetPlayerStatisticsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerStatisticsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::GetPlayerStatisticsRequest::__cordl_internal_get_StatisticNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::GetPlayerStatisticsRequest::__cordl_internal_get_StatisticNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticNames;
}
constexpr void PlayFab::ClientModels::GetPlayerStatisticsRequest::__cordl_internal_set_StatisticNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatisticNames = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticNameVersion*>*& PlayFab::ClientModels::GetPlayerStatisticsRequest::__cordl_internal_get_StatisticNameVersions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticNameVersions;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticNameVersion*>* const& PlayFab::ClientModels::GetPlayerStatisticsRequest::__cordl_internal_get_StatisticNameVersions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticNameVersions;
}
constexpr void PlayFab::ClientModels::GetPlayerStatisticsRequest::__cordl_internal_set_StatisticNameVersions(::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticNameVersion*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatisticNameVersions = value;
}
inline void PlayFab::ClientModels::GetPlayerStatisticsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerStatisticsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayerStatisticsRequest* PlayFab::ClientModels::GetPlayerStatisticsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayerStatisticsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayerStatisticsRequest::GetPlayerStatisticsRequest()   {
}
