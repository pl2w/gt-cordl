#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsSetStorageRetentionRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsSetStorageRetentionRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest::*)()>(&::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::InsightsModels::InsightsSetStorageRetentionRequest::__cordl_internal_get_RetentionDays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RetentionDays;
}
constexpr int32_t const& PlayFab::InsightsModels::InsightsSetStorageRetentionRequest::__cordl_internal_get_RetentionDays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RetentionDays;
}
constexpr void PlayFab::InsightsModels::InsightsSetStorageRetentionRequest::__cordl_internal_set_RetentionDays(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RetentionDays = value;
}
inline void PlayFab::InsightsModels::InsightsSetStorageRetentionRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest* PlayFab::InsightsModels::InsightsSetStorageRetentionRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest::InsightsSetStorageRetentionRequest()   {
}
