#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/UpdateBuildRegionsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__UpdateBuildRegionsRequest_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__BuildRegionParams_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::UpdateBuildRegionsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::UpdateBuildRegionsRequest::*)()>(&::PlayFab::MultiplayerModels::UpdateBuildRegionsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::UpdateBuildRegionsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::UpdateBuildRegionsRequest::__cordl_internal_get_BuildId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::UpdateBuildRegionsRequest::__cordl_internal_get_BuildId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildId;
}
constexpr void PlayFab::MultiplayerModels::UpdateBuildRegionsRequest::__cordl_internal_set_BuildId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildId = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>*& PlayFab::MultiplayerModels::UpdateBuildRegionsRequest::__cordl_internal_get_BuildRegions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildRegions;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>* const& PlayFab::MultiplayerModels::UpdateBuildRegionsRequest::__cordl_internal_get_BuildRegions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildRegions;
}
constexpr void PlayFab::MultiplayerModels::UpdateBuildRegionsRequest::__cordl_internal_set_BuildRegions(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildRegions = value;
}
inline void PlayFab::MultiplayerModels::UpdateBuildRegionsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::UpdateBuildRegionsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::UpdateBuildRegionsRequest* PlayFab::MultiplayerModels::UpdateBuildRegionsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::UpdateBuildRegionsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::UpdateBuildRegionsRequest::UpdateBuildRegionsRequest()   {
}
