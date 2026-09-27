#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/DeleteBuildRegionRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__DeleteBuildRegionRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::DeleteBuildRegionRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::DeleteBuildRegionRequest::*)()>(&::PlayFab::MultiplayerModels::DeleteBuildRegionRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8408e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::DeleteBuildRegionRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::DeleteBuildRegionRequest::__cordl_internal_get_BuildId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::DeleteBuildRegionRequest::__cordl_internal_get_BuildId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildId;
}
constexpr void PlayFab::MultiplayerModels::DeleteBuildRegionRequest::__cordl_internal_set_BuildId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildId = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::DeleteBuildRegionRequest::__cordl_internal_get_Region()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::DeleteBuildRegionRequest::__cordl_internal_get_Region() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr void PlayFab::MultiplayerModels::DeleteBuildRegionRequest::__cordl_internal_set_Region(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Region = value;
}
inline void PlayFab::MultiplayerModels::DeleteBuildRegionRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::DeleteBuildRegionRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::DeleteBuildRegionRequest* PlayFab::MultiplayerModels::DeleteBuildRegionRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::DeleteBuildRegionRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::DeleteBuildRegionRequest::DeleteBuildRegionRequest()   {
}
