#pragma once
// IWYU pragma private; include "PlayFab/PlayFabAuthenticationInstanceAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabAuthenticationInstanceAPI)
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
class PlayFabAuthenticationInstanceAPI;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabAuthenticationInstanceAPI*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabAuthenticationInstanceAPI*, "PlayFab", "PlayFabAuthenticationInstanceAPI");
// Dependencies System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabAuthenticationInstanceAPI
class CORDL_TYPE PlayFabAuthenticationInstanceAPI : public ::System::Object {
public:
// Declarations
/// @brief Field apiSettings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_apiSettings, put=__cordl_internal_set_apiSettings)) ::PlayFab::PlayFabApiSettings*  apiSettings;

/// @brief Field authenticationContext, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_authenticationContext, put=__cordl_internal_set_authenticationContext)) ::PlayFab::PlayFabAuthenticationContext*  authenticationContext;

/// @brief Convert operator to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr operator  ::PlayFab::SharedModels::IPlayFabInstanceApi*() noexcept;

/// @brief Method ForgetAllCredentials, addr 0xa7a0fa4, size 0x14, virtual false, abstract: false, final false
inline void ForgetAllCredentials() ;

/// @brief Method GetEntityToken, addr 0xa7a0fb8, size 0x16c, virtual false, abstract: false, final false
inline void GetEntityToken(::PlayFab::AuthenticationModels::GetEntityTokenRequest*  request, ::System::Action_1<::PlayFab::AuthenticationModels::GetEntityTokenResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method IsEntityLoggedIn, addr 0xa7a0f90, size 0x14, virtual false, abstract: false, final false
inline bool IsEntityLoggedIn() ;

static inline ::PlayFab::PlayFabAuthenticationInstanceAPI* New_ctor() ;

static inline ::PlayFab::PlayFabAuthenticationInstanceAPI* New_ctor(::PlayFab::PlayFabAuthenticationContext*  context) ;

static inline ::PlayFab::PlayFabAuthenticationInstanceAPI* New_ctor(::PlayFab::PlayFabApiSettings*  settings) ;

static inline ::PlayFab::PlayFabAuthenticationInstanceAPI* New_ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Method ValidateEntityToken, addr 0xa7a1124, size 0x190, virtual false, abstract: false, final false
inline void ValidateEntityToken(::PlayFab::AuthenticationModels::ValidateEntityTokenRequest*  request, ::System::Action_1<::PlayFab::AuthenticationModels::ValidateEntityTokenResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

constexpr ::PlayFab::PlayFabApiSettings* const& __cordl_internal_get_apiSettings() const;

constexpr ::PlayFab::PlayFabApiSettings*& __cordl_internal_get_apiSettings() ;

constexpr ::PlayFab::PlayFabAuthenticationContext* const& __cordl_internal_get_authenticationContext() const;

constexpr ::PlayFab::PlayFabAuthenticationContext*& __cordl_internal_get_authenticationContext() ;

constexpr void __cordl_internal_set_apiSettings(::PlayFab::PlayFabApiSettings*  value) ;

constexpr void __cordl_internal_set_authenticationContext(::PlayFab::PlayFabAuthenticationContext*  value) ;

/// @brief Method .ctor, addr 0xa7a0d90, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa7a0e84, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Method .ctor, addr 0xa7a0dfc, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::PlayFab::PlayFabApiSettings*  settings) ;

/// @brief Method .ctor, addr 0xa7a0f00, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Convert to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi* i___PlayFab__SharedModels__IPlayFabInstanceApi() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabAuthenticationInstanceAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticationInstanceAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabAuthenticationInstanceAPI(PlayFabAuthenticationInstanceAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticationInstanceAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabAuthenticationInstanceAPI(PlayFabAuthenticationInstanceAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19485};

/// @brief Field apiSettings, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::PlayFabApiSettings*  ___apiSettings;

/// @brief Field authenticationContext, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::PlayFabAuthenticationContext*  ___authenticationContext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::PlayFabAuthenticationInstanceAPI, ___apiSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabAuthenticationInstanceAPI, ___authenticationContext) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::PlayFabAuthenticationInstanceAPI) == 0x20, "Size mismatch!");

} // namespace end def PlayFab
