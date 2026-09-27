#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListBuildSummariesRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ListBuildSummariesRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::ListBuildSummariesRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::ListBuildSummariesRequest::*)()>(&::PlayFab::MultiplayerModels::ListBuildSummariesRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListBuildSummariesRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<int32_t>& PlayFab::MultiplayerModels::ListBuildSummariesRequest::__cordl_internal_get_PageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::MultiplayerModels::ListBuildSummariesRequest::__cordl_internal_get_PageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
constexpr void PlayFab::MultiplayerModels::ListBuildSummariesRequest::__cordl_internal_set_PageSize(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PageSize = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::ListBuildSummariesRequest::__cordl_internal_get_SkipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipToken;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::ListBuildSummariesRequest::__cordl_internal_get_SkipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipToken;
}
constexpr void PlayFab::MultiplayerModels::ListBuildSummariesRequest::__cordl_internal_set_SkipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SkipToken = value;
}
inline void PlayFab::MultiplayerModels::ListBuildSummariesRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListBuildSummariesRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::ListBuildSummariesRequest* PlayFab::MultiplayerModels::ListBuildSummariesRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::ListBuildSummariesRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::ListBuildSummariesRequest::ListBuildSummariesRequest()   {
}
