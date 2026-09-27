#pragma once
// IWYU pragma private; include "PlayFab/PlayFabAuthenticationAPI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/zzzz__PlayFabAuthenticationAPI_def.hpp"
#include "PlayFab/AuthenticationModels/zzzz__GetEntityTokenRequest_def.hpp"
#include "PlayFab/AuthenticationModels/zzzz__GetEntityTokenResponse_def.hpp"
#include "PlayFab/AuthenticationModels/zzzz__ValidateEntityTokenRequest_def.hpp"
#include "PlayFab/AuthenticationModels/zzzz__ValidateEntityTokenResponse_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::PlayFabAuthenticationAPI.IsEntityLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::PlayFab::PlayFabAuthenticationAPI::IsEntityLoggedIn)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa7a09b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabAuthenticationAPI.ForgetAllCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayFab::PlayFabAuthenticationAPI::ForgetAllCredentials)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa7a0a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabAuthenticationAPI.GetEntityToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::AuthenticationModels::GetEntityTokenRequest*, ::System::Action_1<::PlayFab::AuthenticationModels::GetEntityTokenResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabAuthenticationAPI::GetEntityToken)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa7a0a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationAPI*>(),
                        {"GetEntityToken", {}, {::i2c::type_of<::PlayFab::AuthenticationModels::GetEntityTokenRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::AuthenticationModels::GetEntityTokenResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabAuthenticationAPI.ValidateEntityToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::AuthenticationModels::ValidateEntityTokenRequest*, ::System::Action_1<::PlayFab::AuthenticationModels::ValidateEntityTokenResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabAuthenticationAPI::ValidateEntityToken)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xa7a0bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationAPI*>(),
                        {"ValidateEntityToken", {}, {::i2c::type_of<::PlayFab::AuthenticationModels::ValidateEntityTokenRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::AuthenticationModels::ValidateEntityTokenResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool PlayFab::PlayFabAuthenticationAPI::IsEntityLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabAuthenticationAPI::ForgetAllCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabAuthenticationAPI::GetEntityToken(::PlayFab::AuthenticationModels::GetEntityTokenRequest*  request, ::System::Action_1<::PlayFab::AuthenticationModels::GetEntityTokenResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationAPI*>(),
                        {"GetEntityToken", {}, {::i2c::type_of<::PlayFab::AuthenticationModels::GetEntityTokenRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::AuthenticationModels::GetEntityTokenResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabAuthenticationAPI::ValidateEntityToken(::PlayFab::AuthenticationModels::ValidateEntityTokenRequest*  request, ::System::Action_1<::PlayFab::AuthenticationModels::ValidateEntityTokenResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationAPI*>(),
                        {"ValidateEntityToken", {}, {::i2c::type_of<::PlayFab::AuthenticationModels::ValidateEntityTokenRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::AuthenticationModels::ValidateEntityTokenResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabAuthenticationAPI::PlayFabAuthenticationAPI()   {
}
