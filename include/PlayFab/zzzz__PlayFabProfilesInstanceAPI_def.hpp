#pragma once
// IWYU pragma private; include "PlayFab/PlayFabProfilesInstanceAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabProfilesInstanceAPI)
namespace PlayFab::ProfilesModels {
class GetEntityProfileRequest;
}
namespace PlayFab::ProfilesModels {
class GetEntityProfileResponse;
}
namespace PlayFab::ProfilesModels {
class GetEntityProfilesRequest;
}
namespace PlayFab::ProfilesModels {
class GetEntityProfilesResponse;
}
namespace PlayFab::ProfilesModels {
class GetGlobalPolicyRequest;
}
namespace PlayFab::ProfilesModels {
class GetGlobalPolicyResponse;
}
namespace PlayFab::ProfilesModels {
class GetTitlePlayersFromMasterPlayerAccountIdsRequest;
}
namespace PlayFab::ProfilesModels {
class GetTitlePlayersFromMasterPlayerAccountIdsResponse;
}
namespace PlayFab::ProfilesModels {
class SetEntityProfilePolicyRequest;
}
namespace PlayFab::ProfilesModels {
class SetEntityProfilePolicyResponse;
}
namespace PlayFab::ProfilesModels {
class SetGlobalPolicyRequest;
}
namespace PlayFab::ProfilesModels {
class SetGlobalPolicyResponse;
}
namespace PlayFab::ProfilesModels {
class SetProfileLanguageRequest;
}
namespace PlayFab::ProfilesModels {
class SetProfileLanguageResponse;
}
namespace PlayFab::SharedModels {
class IPlayFabInstanceApi;
}
namespace PlayFab {
class PlayFabApiSettings;
}
namespace PlayFab {
class PlayFabAuthenticationContext;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab {
class PlayFabProfilesInstanceAPI;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabProfilesInstanceAPI*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabProfilesInstanceAPI*, "PlayFab", "PlayFabProfilesInstanceAPI");
// Dependencies System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabProfilesInstanceAPI
class CORDL_TYPE PlayFabProfilesInstanceAPI : public ::System::Object {
public:
// Declarations
/// @brief Field apiSettings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_apiSettings, put=__cordl_internal_set_apiSettings)) ::PlayFab::PlayFabApiSettings*  apiSettings;

/// @brief Field authenticationContext, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_authenticationContext, put=__cordl_internal_set_authenticationContext)) ::PlayFab::PlayFabAuthenticationContext*  authenticationContext;

/// @brief Convert operator to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr operator  ::PlayFab::SharedModels::IPlayFabInstanceApi*() noexcept;

/// @brief Method ForgetAllCredentials, addr 0xa7db068, size 0x10, virtual false, abstract: false, final false
inline void ForgetAllCredentials() ;

/// @brief Method GetGlobalPolicy, addr 0xa7db078, size 0x18c, virtual false, abstract: false, final false
inline void GetGlobalPolicy(::PlayFab::ProfilesModels::GetGlobalPolicyRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::GetGlobalPolicyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetProfile, addr 0xa7db204, size 0x18c, virtual false, abstract: false, final false
inline void GetProfile(::PlayFab::ProfilesModels::GetEntityProfileRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfileResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetProfiles, addr 0xa7db390, size 0x18c, virtual false, abstract: false, final false
inline void GetProfiles(::PlayFab::ProfilesModels::GetEntityProfilesRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfilesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetTitlePlayersFromMasterPlayerAccountIds, addr 0xa7db51c, size 0x18c, virtual false, abstract: false, final false
inline void GetTitlePlayersFromMasterPlayerAccountIds(::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method IsEntityLoggedIn, addr 0xa7db040, size 0x28, virtual false, abstract: false, final false
inline bool IsEntityLoggedIn() ;

static inline ::PlayFab::PlayFabProfilesInstanceAPI* New_ctor(::PlayFab::PlayFabAuthenticationContext*  context) ;

static inline ::PlayFab::PlayFabProfilesInstanceAPI* New_ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Method SetGlobalPolicy, addr 0xa7db6a8, size 0x18c, virtual false, abstract: false, final false
inline void SetGlobalPolicy(::PlayFab::ProfilesModels::SetGlobalPolicyRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::SetGlobalPolicyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method SetProfileLanguage, addr 0xa7db834, size 0x18c, virtual false, abstract: false, final false
inline void SetProfileLanguage(::PlayFab::ProfilesModels::SetProfileLanguageRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::SetProfileLanguageResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method SetProfilePolicy, addr 0xa7db9c0, size 0x18c, virtual false, abstract: false, final false
inline void SetProfilePolicy(::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::SetEntityProfilePolicyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

constexpr ::PlayFab::PlayFabApiSettings* const& __cordl_internal_get_apiSettings() const;

constexpr ::PlayFab::PlayFabApiSettings*& __cordl_internal_get_apiSettings() ;

constexpr ::PlayFab::PlayFabAuthenticationContext* const& __cordl_internal_get_authenticationContext() const;

constexpr ::PlayFab::PlayFabAuthenticationContext*& __cordl_internal_get_authenticationContext() ;

constexpr void __cordl_internal_set_apiSettings(::PlayFab::PlayFabApiSettings*  value) ;

constexpr void __cordl_internal_set_authenticationContext(::PlayFab::PlayFabAuthenticationContext*  value) ;

/// @brief Method .ctor, addr 0xa7daf34, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Method .ctor, addr 0xa7dafb0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Convert to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi* i___PlayFab__SharedModels__IPlayFabInstanceApi() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabProfilesInstanceAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabProfilesInstanceAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabProfilesInstanceAPI(PlayFabProfilesInstanceAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabProfilesInstanceAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabProfilesInstanceAPI(PlayFabProfilesInstanceAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19508};

/// @brief Field apiSettings, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::PlayFabApiSettings*  ___apiSettings;

/// @brief Field authenticationContext, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::PlayFabAuthenticationContext*  ___authenticationContext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::PlayFabProfilesInstanceAPI, ___apiSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabProfilesInstanceAPI, ___authenticationContext) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::PlayFabProfilesInstanceAPI) == 0x20, "Size mismatch!");

} // namespace end def PlayFab
