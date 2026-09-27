#pragma once
// IWYU pragma private; include "PlayFab/PlayFabCloudScriptAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabCloudScriptAPI)
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
class PlayFabCloudScriptAPI;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabCloudScriptAPI*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabCloudScriptAPI*, "PlayFab", "PlayFabCloudScriptAPI");
// Dependencies System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabCloudScriptAPI
class CORDL_TYPE PlayFabCloudScriptAPI : public ::System::Object {
public:
// Declarations
/// @brief Method ExecuteEntityCloudScript, addr 0xa7c1874, size 0x194, virtual false, abstract: false, final false
static inline void ExecuteEntityCloudScript(::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteCloudScriptResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ExecuteFunction, addr 0xa7c1a7c, size 0x2a4, virtual false, abstract: false, final false
static inline void ExecuteFunction(::PlayFab::CloudScriptModels::ExecuteFunctionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ForgetAllCredentials, addr 0xa7c17bc, size 0x60, virtual false, abstract: false, final false
static inline void ForgetAllCredentials() ;

/// @brief Method IsEntityLoggedIn, addr 0xa7c1728, size 0x74, virtual false, abstract: false, final false
static inline bool IsEntityLoggedIn() ;

/// @brief Method ListFunctions, addr 0xa7c1dc8, size 0x194, virtual false, abstract: false, final false
static inline void ListFunctions(::PlayFab::CloudScriptModels::ListFunctionsRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ListFunctionsResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListHttpFunctions, addr 0xa7c1f5c, size 0x194, virtual false, abstract: false, final false
static inline void ListHttpFunctions(::PlayFab::CloudScriptModels::ListFunctionsRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ListHttpFunctionsResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListQueuedFunctions, addr 0xa7c20f0, size 0x194, virtual false, abstract: false, final false
static inline void ListQueuedFunctions(::PlayFab::CloudScriptModels::ListFunctionsRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ListQueuedFunctionsResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method PostFunctionResultForEntityTriggeredAction, addr 0xa7c2284, size 0x194, virtual false, abstract: false, final false
static inline void PostFunctionResultForEntityTriggeredAction(::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method PostFunctionResultForFunctionExecution, addr 0xa7c2418, size 0x194, virtual false, abstract: false, final false
static inline void PostFunctionResultForFunctionExecution(::PlayFab::CloudScriptModels::PostFunctionResultForFunctionExecutionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method PostFunctionResultForPlayerTriggeredAction, addr 0xa7c25ac, size 0x194, virtual false, abstract: false, final false
static inline void PostFunctionResultForPlayerTriggeredAction(::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method PostFunctionResultForScheduledTask, addr 0xa7c2740, size 0x194, virtual false, abstract: false, final false
static inline void PostFunctionResultForScheduledTask(::PlayFab::CloudScriptModels::PostFunctionResultForScheduledTaskRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method RegisterHttpFunction, addr 0xa7c28d4, size 0x194, virtual false, abstract: false, final false
static inline void RegisterHttpFunction(::PlayFab::CloudScriptModels::RegisterHttpFunctionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method RegisterQueuedFunction, addr 0xa7c2a68, size 0x194, virtual false, abstract: false, final false
static inline void RegisterQueuedFunction(::PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method UnregisterFunction, addr 0xa7c2bfc, size 0x194, virtual false, abstract: false, final false
static inline void UnregisterFunction(::PlayFab::CloudScriptModels::UnregisterFunctionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabCloudScriptAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabCloudScriptAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabCloudScriptAPI(PlayFabCloudScriptAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabCloudScriptAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabCloudScriptAPI(PlayFabCloudScriptAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19491};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::PlayFabCloudScriptAPI) == 0x10, "Size mismatch!");

} // namespace end def PlayFab
