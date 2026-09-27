#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsSetPerformanceRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsSetPerformanceRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::InsightsModels::InsightsSetPerformanceRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::InsightsModels::InsightsSetPerformanceRequest::*)()>(&::PlayFab::InsightsModels::InsightsSetPerformanceRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsSetPerformanceRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::InsightsModels::InsightsSetPerformanceRequest::__cordl_internal_get_PerformanceLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PerformanceLevel;
}
constexpr int32_t const& PlayFab::InsightsModels::InsightsSetPerformanceRequest::__cordl_internal_get_PerformanceLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PerformanceLevel;
}
constexpr void PlayFab::InsightsModels::InsightsSetPerformanceRequest::__cordl_internal_set_PerformanceLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PerformanceLevel = value;
}
inline void PlayFab::InsightsModels::InsightsSetPerformanceRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsSetPerformanceRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::InsightsModels::InsightsSetPerformanceRequest* PlayFab::InsightsModels::InsightsSetPerformanceRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::InsightsModels::InsightsSetPerformanceRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::InsightsModels::InsightsSetPerformanceRequest::InsightsSetPerformanceRequest()   {
}
