#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/UpdateBuildRegionRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__UpdateBuildRegionRequest_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__BuildRegionParams_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::UpdateBuildRegionRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::UpdateBuildRegionRequest::*)()>(&::PlayFab::MultiplayerModels::UpdateBuildRegionRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::UpdateBuildRegionRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::UpdateBuildRegionRequest::__cordl_internal_get_BuildId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::UpdateBuildRegionRequest::__cordl_internal_get_BuildId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildId;
}
constexpr void PlayFab::MultiplayerModels::UpdateBuildRegionRequest::__cordl_internal_set_BuildId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildId = value;
}
constexpr ::PlayFab::MultiplayerModels::BuildRegionParams*& PlayFab::MultiplayerModels::UpdateBuildRegionRequest::__cordl_internal_get_BuildRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildRegion;
}
constexpr ::PlayFab::MultiplayerModels::BuildRegionParams* const& PlayFab::MultiplayerModels::UpdateBuildRegionRequest::__cordl_internal_get_BuildRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildRegion;
}
constexpr void PlayFab::MultiplayerModels::UpdateBuildRegionRequest::__cordl_internal_set_BuildRegion(::PlayFab::MultiplayerModels::BuildRegionParams*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildRegion = value;
}
inline void PlayFab::MultiplayerModels::UpdateBuildRegionRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::UpdateBuildRegionRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::UpdateBuildRegionRequest* PlayFab::MultiplayerModels::UpdateBuildRegionRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::UpdateBuildRegionRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::UpdateBuildRegionRequest::UpdateBuildRegionRequest()   {
}
