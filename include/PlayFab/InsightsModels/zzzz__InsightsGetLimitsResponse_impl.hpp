#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsGetLimitsResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsGetLimitsResponse_def.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsPerformanceLevel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::InsightsModels::InsightsGetLimitsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::InsightsModels::InsightsGetLimitsResponse::*)()>(&::PlayFab::InsightsModels::InsightsGetLimitsResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsGetLimitsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::InsightsModels::InsightsGetLimitsResponse::__cordl_internal_get_DefaultPerformanceLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultPerformanceLevel;
}
constexpr int32_t const& PlayFab::InsightsModels::InsightsGetLimitsResponse::__cordl_internal_get_DefaultPerformanceLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultPerformanceLevel;
}
constexpr void PlayFab::InsightsModels::InsightsGetLimitsResponse::__cordl_internal_set_DefaultPerformanceLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultPerformanceLevel = value;
}
constexpr int32_t& PlayFab::InsightsModels::InsightsGetLimitsResponse::__cordl_internal_get_DefaultStorageRetentionDays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultStorageRetentionDays;
}
constexpr int32_t const& PlayFab::InsightsModels::InsightsGetLimitsResponse::__cordl_internal_get_DefaultStorageRetentionDays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultStorageRetentionDays;
}
constexpr void PlayFab::InsightsModels::InsightsGetLimitsResponse::__cordl_internal_set_DefaultStorageRetentionDays(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultStorageRetentionDays = value;
}
constexpr int32_t& PlayFab::InsightsModels::InsightsGetLimitsResponse::__cordl_internal_get_StorageMaxRetentionDays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StorageMaxRetentionDays;
}
constexpr int32_t const& PlayFab::InsightsModels::InsightsGetLimitsResponse::__cordl_internal_get_StorageMaxRetentionDays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StorageMaxRetentionDays;
}
constexpr void PlayFab::InsightsModels::InsightsGetLimitsResponse::__cordl_internal_set_StorageMaxRetentionDays(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StorageMaxRetentionDays = value;
}
constexpr int32_t& PlayFab::InsightsModels::InsightsGetLimitsResponse::__cordl_internal_get_StorageMinRetentionDays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StorageMinRetentionDays;
}
constexpr int32_t const& PlayFab::InsightsModels::InsightsGetLimitsResponse::__cordl_internal_get_StorageMinRetentionDays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StorageMinRetentionDays;
}
constexpr void PlayFab::InsightsModels::InsightsGetLimitsResponse::__cordl_internal_set_StorageMinRetentionDays(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StorageMinRetentionDays = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsPerformanceLevel*>*& PlayFab::InsightsModels::InsightsGetLimitsResponse::__cordl_internal_get_SubMeters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubMeters;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsPerformanceLevel*>* const& PlayFab::InsightsModels::InsightsGetLimitsResponse::__cordl_internal_get_SubMeters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubMeters;
}
constexpr void PlayFab::InsightsModels::InsightsGetLimitsResponse::__cordl_internal_set_SubMeters(::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsPerformanceLevel*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SubMeters = value;
}
inline void PlayFab::InsightsModels::InsightsGetLimitsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsGetLimitsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::InsightsModels::InsightsGetLimitsResponse* PlayFab::InsightsModels::InsightsGetLimitsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::InsightsModels::InsightsGetLimitsResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::InsightsModels::InsightsGetLimitsResponse::InsightsGetLimitsResponse()   {
}
