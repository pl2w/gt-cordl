#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ReportAdActivityRequest.hpp"
#include "PlayFab/ClientModels/zzzz__AdActivity_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ReportAdActivityRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ReportAdActivityRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ReportAdActivityRequest::*)()>(&::PlayFab::ClientModels::ReportAdActivityRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ReportAdActivityRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ClientModels::AdActivity& PlayFab::ClientModels::ReportAdActivityRequest::__cordl_internal_get_Activity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Activity;
}
constexpr ::PlayFab::ClientModels::AdActivity const& PlayFab::ClientModels::ReportAdActivityRequest::__cordl_internal_get_Activity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Activity;
}
constexpr void PlayFab::ClientModels::ReportAdActivityRequest::__cordl_internal_set_Activity(::PlayFab::ClientModels::AdActivity  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Activity = value;
}
constexpr ::StringW& PlayFab::ClientModels::ReportAdActivityRequest::__cordl_internal_get_PlacementId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlacementId;
}
constexpr ::StringW const& PlayFab::ClientModels::ReportAdActivityRequest::__cordl_internal_get_PlacementId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlacementId;
}
constexpr void PlayFab::ClientModels::ReportAdActivityRequest::__cordl_internal_set_PlacementId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlacementId = value;
}
constexpr ::StringW& PlayFab::ClientModels::ReportAdActivityRequest::__cordl_internal_get_RewardId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RewardId;
}
constexpr ::StringW const& PlayFab::ClientModels::ReportAdActivityRequest::__cordl_internal_get_RewardId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RewardId;
}
constexpr void PlayFab::ClientModels::ReportAdActivityRequest::__cordl_internal_set_RewardId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RewardId = value;
}
inline void PlayFab::ClientModels::ReportAdActivityRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ReportAdActivityRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ReportAdActivityRequest* PlayFab::ClientModels::ReportAdActivityRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ReportAdActivityRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ReportAdActivityRequest::ReportAdActivityRequest()   {
}
