#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsPerformanceLevel.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsPerformanceLevel_def.hpp"
//  Writing Method size for method: ::PlayFab::InsightsModels::InsightsPerformanceLevel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::InsightsModels::InsightsPerformanceLevel::*)()>(&::PlayFab::InsightsModels::InsightsPerformanceLevel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsPerformanceLevel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_get_ActiveEventExports()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveEventExports;
}
constexpr int32_t const& PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_get_ActiveEventExports() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveEventExports;
}
constexpr void PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_set_ActiveEventExports(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActiveEventExports = value;
}
constexpr int32_t& PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_get_CacheSizeMB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CacheSizeMB;
}
constexpr int32_t const& PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_get_CacheSizeMB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CacheSizeMB;
}
constexpr void PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_set_CacheSizeMB(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CacheSizeMB = value;
}
constexpr int32_t& PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_get_Concurrency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Concurrency;
}
constexpr int32_t const& PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_get_Concurrency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Concurrency;
}
constexpr void PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_set_Concurrency(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Concurrency = value;
}
constexpr double_t& PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_get_CreditsPerMinute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreditsPerMinute;
}
constexpr double_t const& PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_get_CreditsPerMinute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreditsPerMinute;
}
constexpr void PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_set_CreditsPerMinute(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreditsPerMinute = value;
}
constexpr int32_t& PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_get_EventsPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventsPerSecond;
}
constexpr int32_t const& PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_get_EventsPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventsPerSecond;
}
constexpr void PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_set_EventsPerSecond(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EventsPerSecond = value;
}
constexpr int32_t& PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_get_Level()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Level;
}
constexpr int32_t const& PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_get_Level() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Level;
}
constexpr void PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_set_Level(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Level = value;
}
constexpr int32_t& PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_get_MaxMemoryPerQueryMB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxMemoryPerQueryMB;
}
constexpr int32_t const& PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_get_MaxMemoryPerQueryMB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxMemoryPerQueryMB;
}
constexpr void PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_set_MaxMemoryPerQueryMB(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxMemoryPerQueryMB = value;
}
constexpr int32_t& PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_get_VirtualCpuCores()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCpuCores;
}
constexpr int32_t const& PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_get_VirtualCpuCores() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCpuCores;
}
constexpr void PlayFab::InsightsModels::InsightsPerformanceLevel::__cordl_internal_set_VirtualCpuCores(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VirtualCpuCores = value;
}
inline void PlayFab::InsightsModels::InsightsPerformanceLevel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsPerformanceLevel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::InsightsModels::InsightsPerformanceLevel* PlayFab::InsightsModels::InsightsPerformanceLevel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::InsightsModels::InsightsPerformanceLevel*>());
}
// Ctor Parameters []
constexpr ::PlayFab::InsightsModels::InsightsPerformanceLevel::InsightsPerformanceLevel()   {
}
