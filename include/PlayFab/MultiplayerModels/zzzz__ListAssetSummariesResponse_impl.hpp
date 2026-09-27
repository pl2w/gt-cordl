#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListAssetSummariesResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ListAssetSummariesResponse_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__AssetSummary_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::ListAssetSummariesResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::ListAssetSummariesResponse::*)()>(&::PlayFab::MultiplayerModels::ListAssetSummariesResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListAssetSummariesResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetSummary*>*& PlayFab::MultiplayerModels::ListAssetSummariesResponse::__cordl_internal_get_AssetSummaries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AssetSummaries;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetSummary*>* const& PlayFab::MultiplayerModels::ListAssetSummariesResponse::__cordl_internal_get_AssetSummaries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AssetSummaries;
}
constexpr void PlayFab::MultiplayerModels::ListAssetSummariesResponse::__cordl_internal_set_AssetSummaries(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetSummary*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AssetSummaries = value;
}
constexpr int32_t& PlayFab::MultiplayerModels::ListAssetSummariesResponse::__cordl_internal_get_PageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
constexpr int32_t const& PlayFab::MultiplayerModels::ListAssetSummariesResponse::__cordl_internal_get_PageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
constexpr void PlayFab::MultiplayerModels::ListAssetSummariesResponse::__cordl_internal_set_PageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PageSize = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::ListAssetSummariesResponse::__cordl_internal_get_SkipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipToken;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::ListAssetSummariesResponse::__cordl_internal_get_SkipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipToken;
}
constexpr void PlayFab::MultiplayerModels::ListAssetSummariesResponse::__cordl_internal_set_SkipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SkipToken = value;
}
inline void PlayFab::MultiplayerModels::ListAssetSummariesResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListAssetSummariesResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::ListAssetSummariesResponse* PlayFab::MultiplayerModels::ListAssetSummariesResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::ListAssetSummariesResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::ListAssetSummariesResponse::ListAssetSummariesResponse()   {
}
