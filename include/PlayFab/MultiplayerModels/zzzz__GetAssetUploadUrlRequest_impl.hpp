#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetAssetUploadUrlRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__GetAssetUploadUrlRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::GetAssetUploadUrlRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::GetAssetUploadUrlRequest::*)()>(&::PlayFab::MultiplayerModels::GetAssetUploadUrlRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetAssetUploadUrlRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::GetAssetUploadUrlRequest::__cordl_internal_get_FileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetAssetUploadUrlRequest::__cordl_internal_get_FileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileName;
}
constexpr void PlayFab::MultiplayerModels::GetAssetUploadUrlRequest::__cordl_internal_set_FileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FileName = value;
}
inline void PlayFab::MultiplayerModels::GetAssetUploadUrlRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetAssetUploadUrlRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::GetAssetUploadUrlRequest* PlayFab::MultiplayerModels::GetAssetUploadUrlRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::GetAssetUploadUrlRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::GetAssetUploadUrlRequest::GetAssetUploadUrlRequest()   {
}
