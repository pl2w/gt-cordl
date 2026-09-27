#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetContentDownloadUrlResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetContentDownloadUrlResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetContentDownloadUrlResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetContentDownloadUrlResult::*)()>(&::PlayFab::ClientModels::GetContentDownloadUrlResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetContentDownloadUrlResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GetContentDownloadUrlResult::__cordl_internal_get_URL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___URL;
}
constexpr ::StringW const& PlayFab::ClientModels::GetContentDownloadUrlResult::__cordl_internal_get_URL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___URL;
}
constexpr void PlayFab::ClientModels::GetContentDownloadUrlResult::__cordl_internal_set_URL(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___URL = value;
}
inline void PlayFab::ClientModels::GetContentDownloadUrlResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetContentDownloadUrlResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetContentDownloadUrlResult* PlayFab::ClientModels::GetContentDownloadUrlResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetContentDownloadUrlResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetContentDownloadUrlResult::GetContentDownloadUrlResult()   {
}
