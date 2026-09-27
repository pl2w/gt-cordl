#pragma once
// IWYU pragma private; include "PlayFab/PlayFabCloudScriptInstanceAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabCloudScriptInstanceAPI)
namespace PlayFab::CloudScriptModels {
class EmptyResult;
}
namespace PlayFab::CloudScriptModels {
class ExecuteCloudScriptResult;
}
namespace PlayFab::CloudScriptModels {
class ExecuteEntityCloudScriptRequest;
}
namespace PlayFab::CloudScriptModels {
class ExecuteFunctionRequest;
}
namespace PlayFab::CloudScriptModels {
class ExecuteFunctionResult;
}
namespace PlayFab::CloudScriptModels {
class ListFunctionsRequest;
}
namespace PlayFab::CloudScriptModels {
class ListFunctionsResult;
}
namespace PlayFab::CloudScriptModels {
class ListHttpFunctionsResult;
}
namespace PlayFab::CloudScriptModels {
class ListQueuedFunctionsResult;
}
namespace PlayFab::CloudScriptModels {
class PostFunctionResultForEntityTriggeredActionRequest;
}
namespace PlayFab::CloudScriptModels {
class PostFunctionResultForFunctionExecutionRequest;
}
namespace PlayFab::CloudScriptModels {
class PostFunctionResultForPlayerTriggeredActionRequest;
}
namespace PlayFab::CloudScriptModels {
class PostFunctionResultForScheduledTaskRequest;
}
namespace PlayFab::CloudScriptModels {
class RegisterHttpFunctionRequest;
}
namespace PlayFab::CloudScriptModels {
class RegisterQueuedFunctionRequest;
}
namespace PlayFab::CloudScriptModels {
class UnregisterFunctionRequest;
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
class PlayFabCloudScriptInstanceAPI;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabCloudScriptInstanceAPI*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabCloudScriptInstanceAPI*, "PlayFab", "PlayFabCloudScriptInstanceAPI");
// Dependencies System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabCloudScriptInstanceAPI
class CORDL_TYPE PlayFabCloudScriptInstanceAPI : public ::System::Object {
public:
// Declarations
/// @brief Field apiSettings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_apiSettings, put=__cordl_internal_set_apiSettings)) ::PlayFab::PlayFabApiSettings*  apiSettings;

/// @brief Field authenticationContext, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_authenticationContext, put=__cordl_internal_set_authenticationContext)) ::PlayFab::PlayFabAuthenticationContext*  authenticationContext;

/// @brief Convert operator to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr operator  ::PlayFab::SharedModels::IPlayFabInstanceApi*() noexcept;

/// @brief Method ExecuteEntityCloudScript, addr 0xa7c2ed4, size 0x18c, virtual false, abstract: false, final false
inline void ExecuteEntityCloudScript(::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteCloudScriptResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ExecuteFunction, addr 0xa7c3060, size 0x18c, virtual false, abstract: false, final false
inline void ExecuteFunction(::PlayFab::CloudScriptModels::ExecuteFunctionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ForgetAllCredentials, addr 0xa7c2ec4, size 0x10, virtual false, abstract: false, final false
inline void ForgetAllCredentials() ;

/// @brief Method IsEntityLoggedIn, addr 0xa7c2e9c, size 0x28, virtual false, abstract: false, final false
inline bool IsEntityLoggedIn() ;

/// @brief Method ListFunctions, addr 0xa7c31ec, size 0x18c, virtual false, abstract: false, final false
inline void ListFunctions(::PlayFab::CloudScriptModels::ListFunctionsRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ListFunctionsResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListHttpFunctions, addr 0xa7c3378, size 0x18c, virtual false, abstract: false, final false
inline void ListHttpFunctions(::PlayFab::CloudScriptModels::ListFunctionsRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ListHttpFunctionsResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListQueuedFunctions, addr 0xa7c3504, size 0x18c, virtual false, abstract: false, final false
inline void ListQueuedFunctions(::PlayFab::CloudScriptModels::ListFunctionsRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ListQueuedFunctionsResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

static inline ::PlayFab::PlayFabCloudScriptInstanceAPI* New_ctor(::PlayFab::PlayFabAuthenticationContext*  context) ;

static inline ::PlayFab::PlayFabCloudScriptInstanceAPI* New_ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Method PostFunctionResultForEntityTriggeredAction, addr 0xa7c3690, size 0x18c, virtual false, abstract: false, final false
inline void PostFunctionResultForEntityTriggeredAction(::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method PostFunctionResultForFunctionExecution, addr 0xa7c381c, size 0x18c, virtual false, abstract: false, final false
inline void PostFunctionResultForFunctionExecution(::PlayFab::CloudScriptModels::PostFunctionResultForFunctionExecutionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method PostFunctionResultForPlayerTriggeredAction, addr 0xa7c39a8, size 0x18c, virtual false, abstract: false, final false
inline void PostFunctionResultForPlayerTriggeredAction(::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method PostFunctionResultForScheduledTask, addr 0xa7c3b34, size 0x18c, virtual false, abstract: false, final false
inline void PostFunctionResultForScheduledTask(::PlayFab::CloudScriptModels::PostFunctionResultForScheduledTaskRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method RegisterHttpFunction, addr 0xa7c3cc0, size 0x18c, virtual false, abstract: false, final false
inline void RegisterHttpFunction(::PlayFab::CloudScriptModels::RegisterHttpFunctionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method RegisterQueuedFunction, addr 0xa7c3e4c, size 0x18c, virtual false, abstract: false, final false
inline void RegisterQueuedFunction(::PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method UnregisterFunction, addr 0xa7c3fd8, size 0x18c, virtual false, abstract: false, final false
inline void UnregisterFunction(::PlayFab::CloudScriptModels::UnregisterFunctionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

constexpr ::PlayFab::PlayFabApiSettings* const& __cordl_internal_get_apiSettings() const;

constexpr ::PlayFab::PlayFabApiSettings*& __cordl_internal_get_apiSettings() ;

constexpr ::PlayFab::PlayFabAuthenticationContext* const& __cordl_internal_get_authenticationContext() const;

constexpr ::PlayFab::PlayFabAuthenticationContext*& __cordl_internal_get_authenticationContext() ;

constexpr void __cordl_internal_set_apiSettings(::PlayFab::PlayFabApiSettings*  value) ;

constexpr void __cordl_internal_set_authenticationContext(::PlayFab::PlayFabAuthenticationContext*  value) ;

/// @brief Method .ctor, addr 0xa7c2d90, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Method .ctor, addr 0xa7c2e0c, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Convert to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi* i___PlayFab__SharedModels__IPlayFabInstanceApi() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabCloudScriptInstanceAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabCloudScriptInstanceAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabCloudScriptInstanceAPI(PlayFabCloudScriptInstanceAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabCloudScriptInstanceAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabCloudScriptInstanceAPI(PlayFabCloudScriptInstanceAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19492};

/// @brief Field apiSettings, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::PlayFabApiSettings*  ___apiSettings;

/// @brief Field authenticationContext, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::PlayFabAuthenticationContext*  ___authenticationContext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::PlayFabCloudScriptInstanceAPI, ___apiSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabCloudScriptInstanceAPI, ___authenticationContext) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::PlayFabCloudScriptInstanceAPI) == 0x20, "Size mismatch!");

} // namespace end def PlayFab
