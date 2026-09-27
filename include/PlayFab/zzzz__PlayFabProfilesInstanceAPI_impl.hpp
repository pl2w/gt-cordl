#pragma once
// IWYU pragma private; include "PlayFab/PlayFabProfilesInstanceAPI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/zzzz__PlayFabProfilesInstanceAPI_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__GetEntityProfileRequest_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__GetEntityProfileResponse_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__GetEntityProfilesRequest_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__GetEntityProfilesResponse_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__GetGlobalPolicyRequest_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__GetGlobalPolicyResponse_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__GetTitlePlayersFromMasterPlayerAccountIdsRequest_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__GetTitlePlayersFromMasterPlayerAccountIdsResponse_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__SetEntityProfilePolicyRequest_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__SetEntityProfilePolicyResponse_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__SetGlobalPolicyRequest_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__SetGlobalPolicyResponse_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__SetProfileLanguageRequest_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__SetProfileLanguageResponse_def.hpp"
#include "PlayFab/SharedModels/zzzz__IPlayFabInstanceApi_def.hpp"
#include "PlayFab/zzzz__PlayFabApiSettings_def.hpp"
#include "PlayFab/zzzz__PlayFabAuthenticationContext_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::PlayFabProfilesInstanceAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabProfilesInstanceAPI::*)(::PlayFab::PlayFabAuthenticationContext*)>(&::PlayFab::PlayFabProfilesInstanceAPI::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa7daf34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabProfilesInstanceAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabProfilesInstanceAPI::*)(::PlayFab::PlayFabApiSettings*, ::PlayFab::PlayFabAuthenticationContext*)>(&::PlayFab::PlayFabProfilesInstanceAPI::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa7dafb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabProfilesInstanceAPI.IsEntityLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayFab::PlayFabProfilesInstanceAPI::*)()>(&::PlayFab::PlayFabProfilesInstanceAPI::IsEntityLoggedIn)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa7db040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabProfilesInstanceAPI.ForgetAllCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabProfilesInstanceAPI::*)()>(&::PlayFab::PlayFabProfilesInstanceAPI::ForgetAllCredentials)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa7db068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabProfilesInstanceAPI.GetGlobalPolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabProfilesInstanceAPI::*)(::PlayFab::ProfilesModels::GetGlobalPolicyRequest*, ::System::Action_1<::PlayFab::ProfilesModels::GetGlobalPolicyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabProfilesInstanceAPI::GetGlobalPolicy)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7db078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {"GetGlobalPolicy", {}, {::i2c::type_of<::PlayFab::ProfilesModels::GetGlobalPolicyRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::GetGlobalPolicyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabProfilesInstanceAPI.GetProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabProfilesInstanceAPI::*)(::PlayFab::ProfilesModels::GetEntityProfileRequest*, ::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfileResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabProfilesInstanceAPI::GetProfile)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7db204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {"GetProfile", {}, {::i2c::type_of<::PlayFab::ProfilesModels::GetEntityProfileRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfileResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabProfilesInstanceAPI.GetProfiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabProfilesInstanceAPI::*)(::PlayFab::ProfilesModels::GetEntityProfilesRequest*, ::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfilesResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabProfilesInstanceAPI::GetProfiles)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7db390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {"GetProfiles", {}, {::i2c::type_of<::PlayFab::ProfilesModels::GetEntityProfilesRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfilesResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabProfilesInstanceAPI.GetTitlePlayersFromMasterPlayerAccountIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabProfilesInstanceAPI::*)(::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest*, ::System::Action_1<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabProfilesInstanceAPI::GetTitlePlayersFromMasterPlayerAccountIds)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7db51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {"GetTitlePlayersFromMasterPlayerAccountIds", {}, {::i2c::type_of<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabProfilesInstanceAPI.SetGlobalPolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabProfilesInstanceAPI::*)(::PlayFab::ProfilesModels::SetGlobalPolicyRequest*, ::System::Action_1<::PlayFab::ProfilesModels::SetGlobalPolicyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabProfilesInstanceAPI::SetGlobalPolicy)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7db6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {"SetGlobalPolicy", {}, {::i2c::type_of<::PlayFab::ProfilesModels::SetGlobalPolicyRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::SetGlobalPolicyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabProfilesInstanceAPI.SetProfileLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabProfilesInstanceAPI::*)(::PlayFab::ProfilesModels::SetProfileLanguageRequest*, ::System::Action_1<::PlayFab::ProfilesModels::SetProfileLanguageResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabProfilesInstanceAPI::SetProfileLanguage)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7db834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {"SetProfileLanguage", {}, {::i2c::type_of<::PlayFab::ProfilesModels::SetProfileLanguageRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::SetProfileLanguageResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabProfilesInstanceAPI.SetProfilePolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabProfilesInstanceAPI::*)(::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest*, ::System::Action_1<::PlayFab::ProfilesModels::SetEntityProfilePolicyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabProfilesInstanceAPI::SetProfilePolicy)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7db9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {"SetProfilePolicy", {}, {::i2c::type_of<::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::SetEntityProfilePolicyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::PlayFabApiSettings*& PlayFab::PlayFabProfilesInstanceAPI::__cordl_internal_get_apiSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apiSettings;
}
constexpr ::PlayFab::PlayFabApiSettings* const& PlayFab::PlayFabProfilesInstanceAPI::__cordl_internal_get_apiSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apiSettings;
}
constexpr void PlayFab::PlayFabProfilesInstanceAPI::__cordl_internal_set_apiSettings(::PlayFab::PlayFabApiSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___apiSettings = value;
}
constexpr ::PlayFab::PlayFabAuthenticationContext*& PlayFab::PlayFabProfilesInstanceAPI::__cordl_internal_get_authenticationContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authenticationContext;
}
constexpr ::PlayFab::PlayFabAuthenticationContext* const& PlayFab::PlayFabProfilesInstanceAPI::__cordl_internal_get_authenticationContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authenticationContext;
}
constexpr void PlayFab::PlayFabProfilesInstanceAPI::__cordl_internal_set_authenticationContext(::PlayFab::PlayFabAuthenticationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authenticationContext = value;
}
inline void PlayFab::PlayFabProfilesInstanceAPI::_ctor(::PlayFab::PlayFabAuthenticationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void PlayFab::PlayFabProfilesInstanceAPI::_ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings, context);
}
inline bool PlayFab::PlayFabProfilesInstanceAPI::IsEntityLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void PlayFab::PlayFabProfilesInstanceAPI::ForgetAllCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::PlayFabProfilesInstanceAPI::GetGlobalPolicy(::PlayFab::ProfilesModels::GetGlobalPolicyRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::GetGlobalPolicyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {"GetGlobalPolicy", {}, {::i2c::type_of<::PlayFab::ProfilesModels::GetGlobalPolicyRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::GetGlobalPolicyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabProfilesInstanceAPI::GetProfile(::PlayFab::ProfilesModels::GetEntityProfileRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfileResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {"GetProfile", {}, {::i2c::type_of<::PlayFab::ProfilesModels::GetEntityProfileRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfileResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabProfilesInstanceAPI::GetProfiles(::PlayFab::ProfilesModels::GetEntityProfilesRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfilesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {"GetProfiles", {}, {::i2c::type_of<::PlayFab::ProfilesModels::GetEntityProfilesRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfilesResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabProfilesInstanceAPI::GetTitlePlayersFromMasterPlayerAccountIds(::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {"GetTitlePlayersFromMasterPlayerAccountIds", {}, {::i2c::type_of<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabProfilesInstanceAPI::SetGlobalPolicy(::PlayFab::ProfilesModels::SetGlobalPolicyRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::SetGlobalPolicyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {"SetGlobalPolicy", {}, {::i2c::type_of<::PlayFab::ProfilesModels::SetGlobalPolicyRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::SetGlobalPolicyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabProfilesInstanceAPI::SetProfileLanguage(::PlayFab::ProfilesModels::SetProfileLanguageRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::SetProfileLanguageResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {"SetProfileLanguage", {}, {::i2c::type_of<::PlayFab::ProfilesModels::SetProfileLanguageRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::SetProfileLanguageResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabProfilesInstanceAPI::SetProfilePolicy(::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::SetEntityProfilePolicyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesInstanceAPI*>(),
                        {"SetProfilePolicy", {}, {::i2c::type_of<::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::SetEntityProfilePolicyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline ::PlayFab::PlayFabProfilesInstanceAPI* PlayFab::PlayFabProfilesInstanceAPI::New_ctor(::PlayFab::PlayFabAuthenticationContext*  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PlayFabProfilesInstanceAPI*>(context));
}
inline ::PlayFab::PlayFabProfilesInstanceAPI* PlayFab::PlayFabProfilesInstanceAPI::New_ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PlayFabProfilesInstanceAPI*>(settings, context));
}
/// @brief Convert operator to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr  PlayFab::PlayFabProfilesInstanceAPI::operator ::PlayFab::SharedModels::IPlayFabInstanceApi*() noexcept {
return static_cast<::PlayFab::SharedModels::IPlayFabInstanceApi*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi* PlayFab::PlayFabProfilesInstanceAPI::i___PlayFab__SharedModels__IPlayFabInstanceApi() noexcept {
return static_cast<::PlayFab::SharedModels::IPlayFabInstanceApi*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabProfilesInstanceAPI::PlayFabProfilesInstanceAPI()   {
}
