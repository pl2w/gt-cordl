#pragma once
// IWYU pragma private; include "PlayFab/Internal/CallRequestContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/Internal/zzzz__HttpRequestState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CallRequestContainer)
namespace PlayFab::SharedModels {
class IPlayFabInstanceApi;
}
namespace PlayFab::SharedModels {
class PlayFabRequestCommon;
}
namespace PlayFab::SharedModels {
class PlayFabResultCommon;
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
namespace System::Net {
class HttpWebRequest;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::Internal {
class CallRequestContainer;
}
// Write type traits
MARK_REF_T(::PlayFab::Internal::CallRequestContainer*);
DEFINE_IL2CPP_CLASS(::PlayFab::Internal::CallRequestContainer*, "PlayFab.Internal", "CallRequestContainer");
// Dependencies PlayFab.Internal.HttpRequestState, System.Object
namespace PlayFab::Internal {
// Is value type: false
// CS Name: PlayFab.Internal.CallRequestContainer
class CORDL_TYPE CallRequestContainer : public ::System::Object {
public:
// Declarations
/// @brief Field ApiEndpoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ApiEndpoint, put=__cordl_internal_set_ApiEndpoint)) ::StringW  ApiEndpoint;

/// @brief Field ApiRequest, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ApiRequest, put=__cordl_internal_set_ApiRequest)) ::PlayFab::SharedModels::PlayFabRequestCommon*  ApiRequest;

/// @brief Field ApiResult, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_ApiResult, put=__cordl_internal_set_ApiResult)) ::PlayFab::SharedModels::PlayFabResultCommon*  ApiResult;

/// @brief Field CustomData, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomData, put=__cordl_internal_set_CustomData)) ::System::Object*  CustomData;

/// @brief Field DeserializeResultJson, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_DeserializeResultJson, put=__cordl_internal_set_DeserializeResultJson)) ::System::Action*  DeserializeResultJson;

/// @brief Field Error, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_Error, put=__cordl_internal_set_Error)) ::PlayFab::PlayFabError*  Error;

/// @brief Field ErrorCallback, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_ErrorCallback, put=__cordl_internal_set_ErrorCallback)) ::System::Action_1<::PlayFab::PlayFabError*>*  ErrorCallback;

/// @brief Field FullUrl, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_FullUrl, put=__cordl_internal_set_FullUrl)) ::StringW  FullUrl;

/// @brief Field HttpRequest, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_HttpRequest, put=__cordl_internal_set_HttpRequest)) ::System::Net::HttpWebRequest*  HttpRequest;

/// @brief Field HttpState, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_HttpState, put=__cordl_internal_set_HttpState)) ::PlayFab::Internal::HttpRequestState  HttpState;

/// @brief Field InvokeSuccessCallback, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_InvokeSuccessCallback, put=__cordl_internal_set_InvokeSuccessCallback)) ::System::Action*  InvokeSuccessCallback;

/// @brief Field JsonResponse, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_JsonResponse, put=__cordl_internal_set_JsonResponse)) ::StringW  JsonResponse;

/// @brief Field Payload, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Payload, put=__cordl_internal_set_Payload)) ::ArrayW<uint8_t>  Payload;

/// @brief Field RequestHeaders, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_RequestHeaders, put=__cordl_internal_set_RequestHeaders)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  RequestHeaders;

/// @brief Field context, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_context, put=__cordl_internal_set_context)) ::PlayFab::PlayFabAuthenticationContext*  context;

/// @brief Field instanceApi, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_instanceApi, put=__cordl_internal_set_instanceApi)) ::PlayFab::SharedModels::IPlayFabInstanceApi*  instanceApi;

/// @brief Field settings, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::PlayFab::PlayFabApiSettings*  settings;

static inline ::PlayFab::Internal::CallRequestContainer* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ApiEndpoint() const;

constexpr ::StringW& __cordl_internal_get_ApiEndpoint() ;

constexpr ::PlayFab::SharedModels::PlayFabRequestCommon* const& __cordl_internal_get_ApiRequest() const;

constexpr ::PlayFab::SharedModels::PlayFabRequestCommon*& __cordl_internal_get_ApiRequest() ;

constexpr ::PlayFab::SharedModels::PlayFabResultCommon* const& __cordl_internal_get_ApiResult() const;

constexpr ::PlayFab::SharedModels::PlayFabResultCommon*& __cordl_internal_get_ApiResult() ;

constexpr ::System::Object* const& __cordl_internal_get_CustomData() const;

constexpr ::System::Object*& __cordl_internal_get_CustomData() ;

constexpr ::System::Action* const& __cordl_internal_get_DeserializeResultJson() const;

constexpr ::System::Action*& __cordl_internal_get_DeserializeResultJson() ;

constexpr ::PlayFab::PlayFabError* const& __cordl_internal_get_Error() const;

constexpr ::PlayFab::PlayFabError*& __cordl_internal_get_Error() ;

constexpr ::System::Action_1<::PlayFab::PlayFabError*>* const& __cordl_internal_get_ErrorCallback() const;

constexpr ::System::Action_1<::PlayFab::PlayFabError*>*& __cordl_internal_get_ErrorCallback() ;

constexpr ::StringW const& __cordl_internal_get_FullUrl() const;

constexpr ::StringW& __cordl_internal_get_FullUrl() ;

constexpr ::System::Net::HttpWebRequest* const& __cordl_internal_get_HttpRequest() const;

constexpr ::System::Net::HttpWebRequest*& __cordl_internal_get_HttpRequest() ;

constexpr ::PlayFab::Internal::HttpRequestState const& __cordl_internal_get_HttpState() const;

constexpr ::PlayFab::Internal::HttpRequestState& __cordl_internal_get_HttpState() ;

constexpr ::System::Action* const& __cordl_internal_get_InvokeSuccessCallback() const;

constexpr ::System::Action*& __cordl_internal_get_InvokeSuccessCallback() ;

constexpr ::StringW const& __cordl_internal_get_JsonResponse() const;

constexpr ::StringW& __cordl_internal_get_JsonResponse() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_Payload() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_Payload() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_RequestHeaders() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_RequestHeaders() ;

constexpr ::PlayFab::PlayFabAuthenticationContext* const& __cordl_internal_get_context() const;

constexpr ::PlayFab::PlayFabAuthenticationContext*& __cordl_internal_get_context() ;

constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi* const& __cordl_internal_get_instanceApi() const;

constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi*& __cordl_internal_get_instanceApi() ;

constexpr ::PlayFab::PlayFabApiSettings* const& __cordl_internal_get_settings() const;

constexpr ::PlayFab::PlayFabApiSettings*& __cordl_internal_get_settings() ;

constexpr void __cordl_internal_set_ApiEndpoint(::StringW  value) ;

constexpr void __cordl_internal_set_ApiRequest(::PlayFab::SharedModels::PlayFabRequestCommon*  value) ;

constexpr void __cordl_internal_set_ApiResult(::PlayFab::SharedModels::PlayFabResultCommon*  value) ;

constexpr void __cordl_internal_set_CustomData(::System::Object*  value) ;

constexpr void __cordl_internal_set_DeserializeResultJson(::System::Action*  value) ;

constexpr void __cordl_internal_set_Error(::PlayFab::PlayFabError*  value) ;

constexpr void __cordl_internal_set_ErrorCallback(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

constexpr void __cordl_internal_set_FullUrl(::StringW  value) ;

constexpr void __cordl_internal_set_HttpRequest(::System::Net::HttpWebRequest*  value) ;

constexpr void __cordl_internal_set_HttpState(::PlayFab::Internal::HttpRequestState  value) ;

constexpr void __cordl_internal_set_InvokeSuccessCallback(::System::Action*  value) ;

constexpr void __cordl_internal_set_JsonResponse(::StringW  value) ;

constexpr void __cordl_internal_set_Payload(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_RequestHeaders(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_context(::PlayFab::PlayFabAuthenticationContext*  value) ;

constexpr void __cordl_internal_set_instanceApi(::PlayFab::SharedModels::IPlayFabInstanceApi*  value) ;

constexpr void __cordl_internal_set_settings(::PlayFab::PlayFabApiSettings*  value) ;

/// @brief Method .ctor, addr 0xa844260, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallRequestContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallRequestContainer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CallRequestContainer(CallRequestContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallRequestContainer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallRequestContainer(CallRequestContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19918};

/// @brief Field HttpState, offset: 0x10, size: 0x4, def value: None
 ::PlayFab::Internal::HttpRequestState  ___HttpState;

/// @brief Field HttpRequest, offset: 0x18, size: 0x8, def value: None
 ::System::Net::HttpWebRequest*  ___HttpRequest;

/// @brief Field ApiEndpoint, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___ApiEndpoint;

/// @brief Field FullUrl, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___FullUrl;

/// @brief Field Payload, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___Payload;

/// @brief Field JsonResponse, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___JsonResponse;

/// @brief Field ApiRequest, offset: 0x40, size: 0x8, def value: None
 ::PlayFab::SharedModels::PlayFabRequestCommon*  ___ApiRequest;

/// @brief Field RequestHeaders, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___RequestHeaders;

/// @brief Field ApiResult, offset: 0x50, size: 0x8, def value: None
 ::PlayFab::SharedModels::PlayFabResultCommon*  ___ApiResult;

/// @brief Field Error, offset: 0x58, size: 0x8, def value: None
 ::PlayFab::PlayFabError*  ___Error;

/// @brief Field DeserializeResultJson, offset: 0x60, size: 0x8, def value: None
 ::System::Action*  ___DeserializeResultJson;

/// @brief Field InvokeSuccessCallback, offset: 0x68, size: 0x8, def value: None
 ::System::Action*  ___InvokeSuccessCallback;

/// @brief Field ErrorCallback, offset: 0x70, size: 0x8, def value: None
 ::System::Action_1<::PlayFab::PlayFabError*>*  ___ErrorCallback;

/// @brief Field CustomData, offset: 0x78, size: 0x8, def value: None
 ::System::Object*  ___CustomData;

/// @brief Field settings, offset: 0x80, size: 0x8, def value: None
 ::PlayFab::PlayFabApiSettings*  ___settings;

/// @brief Field context, offset: 0x88, size: 0x8, def value: None
 ::PlayFab::PlayFabAuthenticationContext*  ___context;

/// @brief Field instanceApi, offset: 0x90, size: 0x8, def value: None
 ::PlayFab::SharedModels::IPlayFabInstanceApi*  ___instanceApi;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Internal::CallRequestContainer, ___HttpState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::CallRequestContainer, ___HttpRequest) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::CallRequestContainer, ___ApiEndpoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::CallRequestContainer, ___FullUrl) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::CallRequestContainer, ___Payload) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::CallRequestContainer, ___JsonResponse) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::CallRequestContainer, ___ApiRequest) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::CallRequestContainer, ___RequestHeaders) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::CallRequestContainer, ___ApiResult) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::CallRequestContainer, ___Error) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::CallRequestContainer, ___DeserializeResultJson) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::CallRequestContainer, ___InvokeSuccessCallback) == 0x68, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::CallRequestContainer, ___ErrorCallback) == 0x70, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::CallRequestContainer, ___CustomData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::CallRequestContainer, ___settings) == 0x80, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::CallRequestContainer, ___context) == 0x88, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::CallRequestContainer, ___instanceApi) == 0x90, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Internal::CallRequestContainer) == 0x98, "Size mismatch!");

} // namespace end def PlayFab::Internal
