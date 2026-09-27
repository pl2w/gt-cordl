#pragma once
// IWYU pragma private; include "PlayFab/LocalizationModels/GetLanguageListRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/LocalizationModels/zzzz__GetLanguageListRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::LocalizationModels::GetLanguageListRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::LocalizationModels::GetLanguageListRequest::*)()>(&::PlayFab::LocalizationModels::GetLanguageListRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::LocalizationModels::GetLanguageListRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::LocalizationModels::GetLanguageListRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::LocalizationModels::GetLanguageListRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::LocalizationModels::GetLanguageListRequest* PlayFab::LocalizationModels::GetLanguageListRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::LocalizationModels::GetLanguageListRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::LocalizationModels::GetLanguageListRequest::GetLanguageListRequest()   {
}
