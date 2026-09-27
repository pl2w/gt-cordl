#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetAssetUploadUrlResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__GetAssetUploadUrlResponse_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::GetAssetUploadUrlResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::GetAssetUploadUrlResponse::*)()>(&::PlayFab::MultiplayerModels::GetAssetUploadUrlResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetAssetUploadUrlResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::GetAssetUploadUrlResponse::__cordl_internal_get_AssetUploadUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AssetUploadUrl;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetAssetUploadUrlResponse::__cordl_internal_get_AssetUploadUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AssetUploadUrl;
}
constexpr void PlayFab::MultiplayerModels::GetAssetUploadUrlResponse::__cordl_internal_set_AssetUploadUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AssetUploadUrl = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetAssetUploadUrlResponse::__cordl_internal_get_FileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetAssetUploadUrlResponse::__cordl_internal_get_FileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileName;
}
constexpr void PlayFab::MultiplayerModels::GetAssetUploadUrlResponse::__cordl_internal_set_FileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FileName = value;
}
inline void PlayFab::MultiplayerModels::GetAssetUploadUrlResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetAssetUploadUrlResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::GetAssetUploadUrlResponse* PlayFab::MultiplayerModels::GetAssetUploadUrlResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::GetAssetUploadUrlResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::GetAssetUploadUrlResponse::GetAssetUploadUrlResponse()   {
}
