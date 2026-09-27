#pragma once
// IWYU pragma private; include "PlayFab/PlayFabAuthenticationInstanceAPI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/zzzz__PlayFabAuthenticationInstanceAPI_def.hpp"
#include "PlayFab/AuthenticationModels/zzzz__GetEntityTokenRequest_def.hpp"
#include "PlayFab/AuthenticationModels/zzzz__GetEntityTokenResponse_def.hpp"
#include "PlayFab/AuthenticationModels/zzzz__ValidateEntityTokenRequest_def.hpp"
#include "PlayFab/AuthenticationModels/zzzz__ValidateEntityTokenResponse_def.hpp"
#include "PlayFab/SharedModels/zzzz__IPlayFabInstanceApi_def.hpp"
#include "PlayFab/zzzz__PlayFabApiSettings_def.hpp"
#include "PlayFab/zzzz__PlayFabAuthenticationContext_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::PlayFabAuthenticationInstanceAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabAuthenticationInstanceAPI::*)()>(&::PlayFab::PlayFabAuthenticationInstanceAPI::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa7a0d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationInstanceAPI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabAuthenticationInstanceAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabAuthenticationInstanceAPI::*)(::PlayFab::PlayFabApiSettings*)>(&::PlayFab::PlayFabAuthenticationInstanceAPI::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa7a0dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabApiSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabAuthenticationInstanceAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabAuthenticationInstanceAPI::*)(::PlayFab::PlayFabAuthenticationContext*)>(&::PlayFab::PlayFabAuthenticationInstanceAPI::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa7a0e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabAuthenticationInstanceAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabAuthenticationInstanceAPI::*)(::PlayFab::PlayFabApiSettings*, ::PlayFab::PlayFabAuthenticationContext*)>(&::PlayFab::PlayFabAuthenticationInstanceAPI::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa7a0f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabAuthenticationInstanceAPI.IsEntityLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayFab::PlayFabAuthenticationInstanceAPI::*)()>(&::PlayFab::PlayFabAuthenticationInstanceAPI::IsEntityLoggedIn)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa7a0f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationInstanceAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabAuthenticationInstanceAPI.ForgetAllCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabAuthenticationInstanceAPI::*)()>(&::PlayFab::PlayFabAuthenticationInstanceAPI::ForgetAllCredentials)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa7a0fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationInstanceAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabAuthenticationInstanceAPI.GetEntityToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabAuthenticationInstanceAPI::*)(::PlayFab::AuthenticationModels::GetEntityTokenRequest*, ::System::Action_1<::PlayFab::AuthenticationModels::GetEntityTokenResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabAuthenticationInstanceAPI::GetEntityToken)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa7a0fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationInstanceAPI*>(),
                        {"GetEntityToken", {}, {::i2c::type_of<::PlayFab::AuthenticationModels::GetEntityTokenRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::AuthenticationModels::GetEntityTokenResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabAuthenticationInstanceAPI.ValidateEntityToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabAuthenticationInstanceAPI::*)(::PlayFab::AuthenticationModels::ValidateEntityTokenRequest*, ::System::Action_1<::PlayFab::AuthenticationModels::ValidateEntityTokenResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabAuthenticationInstanceAPI::ValidateEntityToken)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa7a1124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationInstanceAPI*>(),
                        {"ValidateEntityToken", {}, {::i2c::type_of<::PlayFab::AuthenticationModels::ValidateEntityTokenRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::AuthenticationModels::ValidateEntityTokenResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::PlayFabApiSettings*& PlayFab::PlayFabAuthenticationInstanceAPI::__cordl_internal_get_apiSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apiSettings;
}
constexpr ::PlayFab::PlayFabApiSettings* const& PlayFab::PlayFabAuthenticationInstanceAPI::__cordl_internal_get_apiSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apiSettings;
}
constexpr void PlayFab::PlayFabAuthenticationInstanceAPI::__cordl_internal_set_apiSettings(::PlayFab::PlayFabApiSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___apiSettings = value;
}
constexpr ::PlayFab::PlayFabAuthenticationContext*& PlayFab::PlayFabAuthenticationInstanceAPI::__cordl_internal_get_authenticationContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authenticationContext;
}
constexpr ::PlayFab::PlayFabAuthenticationContext* const& PlayFab::PlayFabAuthenticationInstanceAPI::__cordl_internal_get_authenticationContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authenticationContext;
}
constexpr void PlayFab::PlayFabAuthenticationInstanceAPI::__cordl_internal_set_authenticationContext(::PlayFab::PlayFabAuthenticationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authenticationContext = value;
}
inline void PlayFab::PlayFabAuthenticationInstanceAPI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationInstanceAPI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::PlayFabAuthenticationInstanceAPI::_ctor(::PlayFab::PlayFabApiSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabApiSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void PlayFab::PlayFabAuthenticationInstanceAPI::_ctor(::PlayFab::PlayFabAuthenticationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void PlayFab::PlayFabAuthenticationInstanceAPI::_ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings, context);
}
inline bool PlayFab::PlayFabAuthenticationInstanceAPI::IsEntityLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationInstanceAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void PlayFab::PlayFabAuthenticationInstanceAPI::ForgetAllCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationInstanceAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::PlayFabAuthenticationInstanceAPI::GetEntityToken(::PlayFab::AuthenticationModels::GetEntityTokenRequest*  request, ::System::Action_1<::PlayFab::AuthenticationModels::GetEntityTokenResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationInstanceAPI*>(),
                        {"GetEntityToken", {}, {::i2c::type_of<::PlayFab::AuthenticationModels::GetEntityTokenRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::AuthenticationModels::GetEntityTokenResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabAuthenticationInstanceAPI::ValidateEntityToken(::PlayFab::AuthenticationModels::ValidateEntityTokenRequest*  request, ::System::Action_1<::PlayFab::AuthenticationModels::ValidateEntityTokenResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationInstanceAPI*>(),
                        {"ValidateEntityToken", {}, {::i2c::type_of<::PlayFab::AuthenticationModels::ValidateEntityTokenRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::AuthenticationModels::ValidateEntityTokenResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline ::PlayFab::PlayFabAuthenticationInstanceAPI* PlayFab::PlayFabAuthenticationInstanceAPI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PlayFabAuthenticationInstanceAPI*>());
}
inline ::PlayFab::PlayFabAuthenticationInstanceAPI* PlayFab::PlayFabAuthenticationInstanceAPI::New_ctor(::PlayFab::PlayFabApiSettings*  settings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PlayFabAuthenticationInstanceAPI*>(settings));
}
inline ::PlayFab::PlayFabAuthenticationInstanceAPI* PlayFab::PlayFabAuthenticationInstanceAPI::New_ctor(::PlayFab::PlayFabAuthenticationContext*  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PlayFabAuthenticationInstanceAPI*>(context));
}
inline ::PlayFab::PlayFabAuthenticationInstanceAPI* PlayFab::PlayFabAuthenticationInstanceAPI::New_ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PlayFabAuthenticationInstanceAPI*>(settings, context));
}
/// @brief Convert operator to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr  PlayFab::PlayFabAuthenticationInstanceAPI::operator ::PlayFab::SharedModels::IPlayFabInstanceApi*() noexcept {
return static_cast<::PlayFab::SharedModels::IPlayFabInstanceApi*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi* PlayFab::PlayFabAuthenticationInstanceAPI::i___PlayFab__SharedModels__IPlayFabInstanceApi() noexcept {
return static_cast<::PlayFab::SharedModels::IPlayFabInstanceApi*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabAuthenticationInstanceAPI::PlayFabAuthenticationInstanceAPI()   {
}
