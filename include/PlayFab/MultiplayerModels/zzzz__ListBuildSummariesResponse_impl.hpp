#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListBuildSummariesResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ListBuildSummariesResponse_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__BuildSummary_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::ListBuildSummariesResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::ListBuildSummariesResponse::*)()>(&::PlayFab::MultiplayerModels::ListBuildSummariesResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListBuildSummariesResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildSummary*>*& PlayFab::MultiplayerModels::ListBuildSummariesResponse::__cordl_internal_get_BuildSummaries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildSummaries;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildSummary*>* const& PlayFab::MultiplayerModels::ListBuildSummariesResponse::__cordl_internal_get_BuildSummaries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildSummaries;
}
constexpr void PlayFab::MultiplayerModels::ListBuildSummariesResponse::__cordl_internal_set_BuildSummaries(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildSummary*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildSummaries = value;
}
constexpr int32_t& PlayFab::MultiplayerModels::ListBuildSummariesResponse::__cordl_internal_get_PageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
constexpr int32_t const& PlayFab::MultiplayerModels::ListBuildSummariesResponse::__cordl_internal_get_PageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
constexpr void PlayFab::MultiplayerModels::ListBuildSummariesResponse::__cordl_internal_set_PageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PageSize = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::ListBuildSummariesResponse::__cordl_internal_get_SkipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipToken;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::ListBuildSummariesResponse::__cordl_internal_get_SkipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipToken;
}
constexpr void PlayFab::MultiplayerModels::ListBuildSummariesResponse::__cordl_internal_set_SkipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SkipToken = value;
}
inline void PlayFab::MultiplayerModels::ListBuildSummariesResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListBuildSummariesResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::ListBuildSummariesResponse* PlayFab::MultiplayerModels::ListBuildSummariesResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::ListBuildSummariesResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::ListBuildSummariesResponse::ListBuildSummariesResponse()   {
}
