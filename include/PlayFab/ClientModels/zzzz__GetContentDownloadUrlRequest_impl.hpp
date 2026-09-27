#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetContentDownloadUrlRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetContentDownloadUrlRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetContentDownloadUrlRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetContentDownloadUrlRequest::*)()>(&::PlayFab::ClientModels::GetContentDownloadUrlRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dc28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetContentDownloadUrlRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GetContentDownloadUrlRequest::__cordl_internal_get_HttpMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HttpMethod;
}
constexpr ::StringW const& PlayFab::ClientModels::GetContentDownloadUrlRequest::__cordl_internal_get_HttpMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HttpMethod;
}
constexpr void PlayFab::ClientModels::GetContentDownloadUrlRequest::__cordl_internal_set_HttpMethod(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HttpMethod = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetContentDownloadUrlRequest::__cordl_internal_get_Key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
constexpr ::StringW const& PlayFab::ClientModels::GetContentDownloadUrlRequest::__cordl_internal_get_Key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
constexpr void PlayFab::ClientModels::GetContentDownloadUrlRequest::__cordl_internal_set_Key(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Key = value;
}
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::GetContentDownloadUrlRequest::__cordl_internal_get_ThruCDN()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThruCDN;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::GetContentDownloadUrlRequest::__cordl_internal_get_ThruCDN() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThruCDN;
}
constexpr void PlayFab::ClientModels::GetContentDownloadUrlRequest::__cordl_internal_set_ThruCDN(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ThruCDN = value;
}
inline void PlayFab::ClientModels::GetContentDownloadUrlRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetContentDownloadUrlRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetContentDownloadUrlRequest* PlayFab::ClientModels::GetContentDownloadUrlRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetContentDownloadUrlRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetContentDownloadUrlRequest::GetContentDownloadUrlRequest()   {
}
