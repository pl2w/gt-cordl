#pragma once
// IWYU pragma private; include "PlayFab/PlayFabLocalizationAPI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/zzzz__PlayFabLocalizationAPI_def.hpp"
#include "PlayFab/LocalizationModels/zzzz__GetLanguageListRequest_def.hpp"
#include "PlayFab/LocalizationModels/zzzz__GetLanguageListResponse_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::PlayFabLocalizationAPI.IsEntityLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::PlayFab::PlayFabLocalizationAPI::IsEntityLoggedIn)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa7ce1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabLocalizationAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabLocalizationAPI.ForgetAllCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayFab::PlayFabLocalizationAPI::ForgetAllCredentials)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa7ce268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabLocalizationAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabLocalizationAPI.GetLanguageList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::LocalizationModels::GetLanguageListRequest*, ::System::Action_1<::PlayFab::LocalizationModels::GetLanguageListResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabLocalizationAPI::GetLanguageList)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7ce2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabLocalizationAPI*>(),
                        {"GetLanguageList", {}, {::i2c::type_of<::PlayFab::LocalizationModels::GetLanguageListRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::LocalizationModels::GetLanguageListResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool PlayFab::PlayFabLocalizationAPI::IsEntityLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabLocalizationAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabLocalizationAPI::ForgetAllCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabLocalizationAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabLocalizationAPI::GetLanguageList(::PlayFab::LocalizationModels::GetLanguageListRequest*  request, ::System::Action_1<::PlayFab::LocalizationModels::GetLanguageListResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabLocalizationAPI*>(),
                        {"GetLanguageList", {}, {::i2c::type_of<::PlayFab::LocalizationModels::GetLanguageListRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::LocalizationModels::GetLanguageListResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabLocalizationAPI::PlayFabLocalizationAPI()   {
}
