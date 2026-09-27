#pragma once
// IWYU pragma private; include "PlayFab/PlayFabAuthenticationAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabAuthenticationAPI)
namespace PlayFab::AuthenticationModels {
class GetEntityTokenRequest;
}
namespace PlayFab::AuthenticationModels {
class GetEntityTokenResponse;
}
namespace PlayFab::AuthenticationModels {
class ValidateEntityTokenRequest;
}
namespace PlayFab::AuthenticationModels {
class ValidateEntityTokenResponse;
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
class PlayFabAuthenticationAPI;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabAuthenticationAPI*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabAuthenticationAPI*, "PlayFab", "PlayFabAuthenticationAPI");
// Dependencies System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabAuthenticationAPI
class CORDL_TYPE PlayFabAuthenticationAPI : public ::System::Object {
public:
// Declarations
/// @brief Method ForgetAllCredentials, addr 0xa7a0a18, size 0x64, virtual false, abstract: false, final false
static inline void ForgetAllCredentials() ;

/// @brief Method GetEntityToken, addr 0xa7a0a7c, size 0x17c, virtual false, abstract: false, final false
static inline void GetEntityToken(::PlayFab::AuthenticationModels::GetEntityTokenRequest*  request, ::System::Action_1<::PlayFab::AuthenticationModels::GetEntityTokenResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method IsEntityLoggedIn, addr 0xa7a09b4, size 0x64, virtual false, abstract: false, final false
static inline bool IsEntityLoggedIn() ;

/// @brief Method ValidateEntityToken, addr 0xa7a0bf8, size 0x198, virtual false, abstract: false, final false
static inline void ValidateEntityToken(::PlayFab::AuthenticationModels::ValidateEntityTokenRequest*  request, ::System::Action_1<::PlayFab::AuthenticationModels::ValidateEntityTokenResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabAuthenticationAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticationAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabAuthenticationAPI(PlayFabAuthenticationAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticationAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabAuthenticationAPI(PlayFabAuthenticationAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19484};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::PlayFabAuthenticationAPI) == 0x10, "Size mismatch!");

} // namespace end def PlayFab
