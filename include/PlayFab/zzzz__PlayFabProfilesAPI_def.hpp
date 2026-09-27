#pragma once
// IWYU pragma private; include "PlayFab/PlayFabProfilesAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabProfilesAPI)
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
class PlayFabProfilesAPI;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabProfilesAPI*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabProfilesAPI*, "PlayFab", "PlayFabProfilesAPI");
// Dependencies System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabProfilesAPI
class CORDL_TYPE PlayFabProfilesAPI : public ::System::Object {
public:
// Declarations
/// @brief Method ForgetAllCredentials, addr 0xa7da3c8, size 0x60, virtual false, abstract: false, final false
static inline void ForgetAllCredentials() ;

/// @brief Method GetGlobalPolicy, addr 0xa7da428, size 0x194, virtual false, abstract: false, final false
static inline void GetGlobalPolicy(::PlayFab::ProfilesModels::GetGlobalPolicyRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::GetGlobalPolicyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetProfile, addr 0xa7da5bc, size 0x194, virtual false, abstract: false, final false
static inline void GetProfile(::PlayFab::ProfilesModels::GetEntityProfileRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfileResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetProfiles, addr 0xa7da750, size 0x194, virtual false, abstract: false, final false
static inline void GetProfiles(::PlayFab::ProfilesModels::GetEntityProfilesRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfilesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetTitlePlayersFromMasterPlayerAccountIds, addr 0xa7da8e4, size 0x194, virtual false, abstract: false, final false
static inline void GetTitlePlayersFromMasterPlayerAccountIds(::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method IsEntityLoggedIn, addr 0xa7da354, size 0x74, virtual false, abstract: false, final false
static inline bool IsEntityLoggedIn() ;

/// @brief Method SetGlobalPolicy, addr 0xa7daa78, size 0x194, virtual false, abstract: false, final false
static inline void SetGlobalPolicy(::PlayFab::ProfilesModels::SetGlobalPolicyRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::SetGlobalPolicyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method SetProfileLanguage, addr 0xa7dac0c, size 0x194, virtual false, abstract: false, final false
static inline void SetProfileLanguage(::PlayFab::ProfilesModels::SetProfileLanguageRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::SetProfileLanguageResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method SetProfilePolicy, addr 0xa7dada0, size 0x194, virtual false, abstract: false, final false
static inline void SetProfilePolicy(::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest*  request, ::System::Action_1<::PlayFab::ProfilesModels::SetEntityProfilePolicyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabProfilesAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabProfilesAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabProfilesAPI(PlayFabProfilesAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabProfilesAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabProfilesAPI(PlayFabProfilesAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19507};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::PlayFabProfilesAPI) == 0x10, "Size mismatch!");

} // namespace end def PlayFab
