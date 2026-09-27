#pragma once
// IWYU pragma private; include "PlayFab/PlayFabProfilesAPI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/zzzz__PlayFabProfilesAPI_def.hpp"
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
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::PlayFabProfilesAPI.IsEntityLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::PlayFab::PlayFabProfilesAPI::IsEntityLoggedIn)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa7da354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabProfilesAPI.ForgetAllCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayFab::PlayFabProfilesAPI::ForgetAllCredentials)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa7da3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabProfilesAPI.GetGlobalPolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::ProfilesModels::GetGlobalPolicyRequest*, ::System::Action_1<::PlayFab::ProfilesModels::GetGlobalPolicyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabProfilesAPI::GetGlobalPolicy)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7da428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesAPI*>(),
                        {"GetGlobalPolicy", {}, {::i2c::type_of<::PlayFab::ProfilesModels::GetGlobalPolicyRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::GetGlobalPolicyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabProfilesAPI.GetProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::ProfilesModels::GetEntityProfileRequest*, ::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfileResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabProfilesAPI::GetProfile)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7da5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesAPI*>(),
                        {"GetProfile", {}, {::i2c::type_of<::PlayFab::ProfilesModels::GetEntityProfileRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfileResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabProfilesAPI.GetProfiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::ProfilesModels::GetEntityProfilesRequest*, ::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfilesResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabProfilesAPI::GetProfiles)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7da750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesAPI*>(),
                        {"GetProfiles", {}, {::i2c::type_of<::PlayFab::ProfilesModels::GetEntityProfilesRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfilesResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabProfilesAPI.GetTitlePlayersFromMasterPlayerAccountIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest*, ::System::Action_1<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabProfilesAPI::GetTitlePlayersFromMasterPlayerAccountIds)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7da8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesAPI*>(),
                        {"GetTitlePlayersFromMasterPlayerAccountIds", {}, {::i2c::type_of<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabProfilesAPI.SetGlobalPolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::ProfilesModels::SetGlobalPolicyRequest*, ::System::Action_1<::PlayFab::ProfilesModels::SetGlobalPolicyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabProfilesAPI::SetGlobalPolicy)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7daa78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesAPI*>(),
                        {"SetGlobalPolicy", {}, {::i2c::type_of<::PlayFab::ProfilesModels::SetGlobalPolicyRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::SetGlobalPolicyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabProfilesAPI.SetProfileLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::ProfilesModels::SetProfileLanguageRequest*, ::System::Action_1<::PlayFab::ProfilesModels::SetProfileLanguageResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabProfilesAPI::SetProfileLanguage)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7dac0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesAPI*>(),
                        {"SetProfileLanguage", {}, {::i2c::type_of<::PlayFab::ProfilesModels::SetProfileLanguageRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::SetProfileLanguageResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabProfilesAPI.SetProfilePolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest*, ::System::Action_1<::PlayFab::ProfilesModels::SetEntityProfilePolicyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabProfilesAPI::SetProfilePolicy)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7dada0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesAPI*>(),
                        {"SetProfilePolicy", {}, {::i2c::type_of<::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::SetEntityProfilePolicyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool PlayFab::PlayFabProfilesAPI::IsEntityLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabProfilesAPI::ForgetAllCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabProfilesAPI::GetGlobalPolicy(::PlayFab::ProfilesModels::GetGlobalPolicyRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::GetGlobalPolicyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesAPI*>(),
                        {"GetGlobalPolicy", {}, {::i2c::type_of<::PlayFab::ProfilesModels::GetGlobalPolicyRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::GetGlobalPolicyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabProfilesAPI::GetProfile(::PlayFab::ProfilesModels::GetEntityProfileRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfileResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesAPI*>(),
                        {"GetProfile", {}, {::i2c::type_of<::PlayFab::ProfilesModels::GetEntityProfileRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfileResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabProfilesAPI::GetProfiles(::PlayFab::ProfilesModels::GetEntityProfilesRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfilesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesAPI*>(),
                        {"GetProfiles", {}, {::i2c::type_of<::PlayFab::ProfilesModels::GetEntityProfilesRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfilesResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabProfilesAPI::GetTitlePlayersFromMasterPlayerAccountIds(::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesAPI*>(),
                        {"GetTitlePlayersFromMasterPlayerAccountIds", {}, {::i2c::type_of<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabProfilesAPI::SetGlobalPolicy(::PlayFab::ProfilesModels::SetGlobalPolicyRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::SetGlobalPolicyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesAPI*>(),
                        {"SetGlobalPolicy", {}, {::i2c::type_of<::PlayFab::ProfilesModels::SetGlobalPolicyRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::SetGlobalPolicyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabProfilesAPI::SetProfileLanguage(::PlayFab::ProfilesModels::SetProfileLanguageRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::SetProfileLanguageResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesAPI*>(),
                        {"SetProfileLanguage", {}, {::i2c::type_of<::PlayFab::ProfilesModels::SetProfileLanguageRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::SetProfileLanguageResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabProfilesAPI::SetProfilePolicy(::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::SetEntityProfilePolicyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabProfilesAPI*>(),
                        {"SetProfilePolicy", {}, {::i2c::type_of<::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ProfilesModels::SetEntityProfilePolicyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabProfilesAPI::PlayFabProfilesAPI()   {
}
