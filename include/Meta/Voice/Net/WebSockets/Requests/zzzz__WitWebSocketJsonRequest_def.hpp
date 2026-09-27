#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/Requests/WitWebSocketJsonRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Net/PubSub/zzzz__PubSubResponseOptions_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceErrorSimulationType_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WitWebSocketJsonRequest)
namespace GlobalNamespace {
struct WitWebSocketJsonRequest__WaitForTimeout_d__75;
}
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::Voice::Net::PubSub {
struct PubSubResponseOptions;
}
namespace Meta::Voice::Net::WebSockets::Requests {
class WitWebSocketJsonRequest___c__DisplayClass81_0;
}
namespace Meta::Voice::Net::WebSockets {
class IWitWebSocketRequest;
}
namespace Meta::Voice::Net::WebSockets {
class UploadChunkDelegate;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi::Requests {
struct VoiceErrorSimulationType;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Meta::Voice::Net::WebSockets::Requests {
class WitWebSocketJsonRequest;
}
namespace Meta::Voice::Net::WebSockets::Requests {
class WitWebSocketJsonRequest___c__DisplayClass81_0;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*);
MARK_REF_T(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*, "Meta.Voice.Net.WebSockets.Requests", "WitWebSocketJsonRequest");
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0*, "Meta.Voice.Net.WebSockets.Requests", "WitWebSocketJsonRequest/<>c__DisplayClass81_0");
// [LogCategory((Meta.Voice.Logging.LogCategory)7)]
// Dependencies Meta.Voice.Net.PubSub.PubSubResponseOptions, Meta.WitAi.Requests.VoiceErrorSimulationType, System.DateTime, System.Object
namespace Meta::Voice::Net::WebSockets::Requests {
// Is value type: false
// CS Name: Meta.Voice.Net.WebSockets.Requests.WitWebSocketJsonRequest
class CORDL_TYPE WitWebSocketJsonRequest : public ::System::Object {
public:
// Declarations
using _WaitForTimeout_d__75 = ::GlobalNamespace::WitWebSocketJsonRequest__WaitForTimeout_d__75;

using __c__DisplayClass81_0 = ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0;

 __declspec(property(get=get_ClientUserId)) ::StringW  ClientUserId;

 __declspec(property(get=get_Code, put=set_Code)) int32_t  Code;

 __declspec(property(get=get_Completion)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  Completion;

 __declspec(property(get=get_Error, put=set_Error)) ::StringW  Error;

 __declspec(property(get=get_IsComplete, put=set_IsComplete)) bool  IsComplete;

 __declspec(property(get=get_IsDownloading, put=set_IsDownloading)) bool  IsDownloading;

 __declspec(property(get=get_IsUploading, put=set_IsUploading)) bool  IsUploading;

 __declspec(property(get=get_Logger)) ::Meta::Voice::Logging::IVLogger*  Logger;

 __declspec(property(get=get_OnComplete, put=set_OnComplete)) ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  OnComplete;

 __declspec(property(get=get_OnFirstResponse, put=set_OnFirstResponse)) ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  OnFirstResponse;

 __declspec(property(get=get_OnRawResponse, put=set_OnRawResponse)) ::System::Action_1<::StringW>*  OnRawResponse;

 __declspec(property(get=get_OperationId)) ::StringW  OperationId;

 __declspec(property(get=get_PostData)) ::Meta::WitAi::Json::WitResponseNode*  PostData;

 __declspec(property(get=get_PublishOptions, put=set_PublishOptions)) ::Meta::Voice::Net::PubSub::PubSubResponseOptions  PublishOptions;

 __declspec(property(get=get_RequestId)) ::StringW  RequestId;

 __declspec(property(get=get_ResponseData, put=set_ResponseData)) ::Meta::WitAi::Json::WitResponseNode*  ResponseData;

 __declspec(property(get=get_SimulatedErrorType, put=set_SimulatedErrorType)) ::Meta::WitAi::Requests::VoiceErrorSimulationType  SimulatedErrorType;

 __declspec(property(get=get_TimeoutMs, put=set_TimeoutMs)) int32_t  TimeoutMs;

 __declspec(property(get=get_TopicId, put=set_TopicId)) ::StringW  TopicId;

/// @brief Field <ClientUserId>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ClientUserId_k__BackingField, put=__cordl_internal_set__ClientUserId_k__BackingField)) ::StringW  _ClientUserId_k__BackingField;

/// @brief Field <Code>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__Code_k__BackingField, put=__cordl_internal_set__Code_k__BackingField)) int32_t  _Code_k__BackingField;

/// @brief Field <Completion>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Completion_k__BackingField, put=__cordl_internal_set__Completion_k__BackingField)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  _Completion_k__BackingField;

/// @brief Field <Error>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) ::StringW  _Error_k__BackingField;

/// @brief Field <IsComplete>k__BackingField, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsComplete_k__BackingField, put=__cordl_internal_set__IsComplete_k__BackingField)) bool  _IsComplete_k__BackingField;

/// @brief Field <IsDownloading>k__BackingField, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDownloading_k__BackingField, put=__cordl_internal_set__IsDownloading_k__BackingField)) bool  _IsDownloading_k__BackingField;

/// @brief Field <IsUploading>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsUploading_k__BackingField, put=__cordl_internal_set__IsUploading_k__BackingField)) bool  _IsUploading_k__BackingField;

/// @brief Field <Logger>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logger_k__BackingField, put=__cordl_internal_set__Logger_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  _Logger_k__BackingField;

/// @brief Field <OnComplete>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnComplete_k__BackingField, put=__cordl_internal_set__OnComplete_k__BackingField)) ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  _OnComplete_k__BackingField;

/// @brief Field <OnFirstResponse>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnFirstResponse_k__BackingField, put=__cordl_internal_set__OnFirstResponse_k__BackingField)) ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  _OnFirstResponse_k__BackingField;

/// @brief Field <OnRawResponse>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnRawResponse_k__BackingField, put=__cordl_internal_set__OnRawResponse_k__BackingField)) ::System::Action_1<::StringW>*  _OnRawResponse_k__BackingField;

/// @brief Field <OperationId>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__OperationId_k__BackingField, put=__cordl_internal_set__OperationId_k__BackingField)) ::StringW  _OperationId_k__BackingField;

/// @brief Field <PostData>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__PostData_k__BackingField, put=__cordl_internal_set__PostData_k__BackingField)) ::Meta::WitAi::Json::WitResponseNode*  _PostData_k__BackingField;

/// @brief Field <PublishOptions>k__BackingField, offset 0x38, size 0x2 
 __declspec(property(get=__cordl_internal_get__PublishOptions_k__BackingField, put=__cordl_internal_set__PublishOptions_k__BackingField)) ::Meta::Voice::Net::PubSub::PubSubResponseOptions  _PublishOptions_k__BackingField;

/// @brief Field <RequestId>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__RequestId_k__BackingField, put=__cordl_internal_set__RequestId_k__BackingField)) ::StringW  _RequestId_k__BackingField;

/// @brief Field <ResponseData>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__ResponseData_k__BackingField, put=__cordl_internal_set__ResponseData_k__BackingField)) ::Meta::WitAi::Json::WitResponseNode*  _ResponseData_k__BackingField;

/// @brief Field <SimulatedErrorType>k__BackingField, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__SimulatedErrorType_k__BackingField, put=__cordl_internal_set__SimulatedErrorType_k__BackingField)) ::Meta::WitAi::Requests::VoiceErrorSimulationType  _SimulatedErrorType_k__BackingField;

/// @brief Field <TimeoutMs>k__BackingField, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__TimeoutMs_k__BackingField, put=__cordl_internal_set__TimeoutMs_k__BackingField)) int32_t  _TimeoutMs_k__BackingField;

/// @brief Field <TopicId>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__TopicId_k__BackingField, put=__cordl_internal_set__TopicId_k__BackingField)) ::StringW  _TopicId_k__BackingField;

/// @brief Field _timeoutStart, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeoutStart, put=__cordl_internal_set__timeoutStart)) ::System::DateTime  _timeoutStart;

/// @brief Field _uploader, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__uploader, put=__cordl_internal_set__uploader)) ::Meta::Voice::Net::WebSockets::UploadChunkDelegate*  _uploader;

/// @brief Convert operator to "::Meta::Voice::Net::WebSockets::IWitWebSocketRequest"
constexpr operator  ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*() noexcept;

/// @brief Method Cancel, addr 0x9e34314, size 0x88, virtual true, abstract: false, final false
inline void Cancel() ;

/// @brief Method GetTimeoutStart, addr 0x9e342b0, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime GetTimeoutStart() ;

/// @brief Method HandleComplete, addr 0x9e34798, size 0x124, virtual true, abstract: false, final false
inline void HandleComplete() ;

/// @brief Method HandleDownload, addr 0x9e34528, size 0x90, virtual true, abstract: false, final false
inline void HandleDownload(::StringW  jsonString, ::Meta::WitAi::Json::WitResponseNode*  jsonData, ::ArrayW<uint8_t>  binaryData) ;

/// @brief Method HandleDownloadBegin, addr 0x9e346d0, size 0xa8, virtual true, abstract: false, final false
inline void HandleDownloadBegin() ;

/// @brief Method HandleUpload, addr 0x9e33e38, size 0x378, virtual true, abstract: false, final false
inline void HandleUpload(::Meta::Voice::Net::WebSockets::UploadChunkDelegate*  uploadChunk) ;

static inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest* New_ctor(::Meta::WitAi::Json::WitResponseNode*  postData, ::StringW  requestId, ::StringW  clientUserId, ::StringW  operationId) ;

/// @brief Method RaiseComplete, addr 0x9e348bc, size 0x20, virtual true, abstract: false, final false
inline void RaiseComplete() ;

/// @brief Method RaiseFirstResponse, addr 0x9e34778, size 0x20, virtual true, abstract: false, final false
inline void RaiseFirstResponse() ;

/// @brief Method ReturnRawResponse, addr 0x9e345b8, size 0x110, virtual true, abstract: false, final false
inline void ReturnRawResponse(::StringW  jsonString) ;

/// @brief Method SendAbort, addr 0x9e3439c, size 0x18c, virtual false, abstract: false, final false
inline void SendAbort(::StringW  reason) ;

/// @brief Method SetResponseData, addr 0x9e33a24, size 0x314, virtual true, abstract: false, final false
inline void SetResponseData(::Meta::WitAi::Json::WitResponseNode*  newResponseData) ;

/// @brief Method ToString, addr 0x9e348dc, size 0x200, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UpdateTimeoutStart, addr 0x9e342b8, size 0x5c, virtual false, abstract: false, final false
inline void UpdateTimeoutStart() ;

/// @brief Method UploadChunk, addr 0x9e341b0, size 0x28, virtual false, abstract: false, final false
inline void UploadChunk(::Meta::WitAi::Json::WitResponseNode*  uploadJson, ::ArrayW<uint8_t>  uploadBinary) ;

/// [AsyncStateMachine(typeof(Meta.Voice.Net.WebSockets.Requests.WitWebSocketJsonRequest::<WaitForTimeout>d__75))]
/// @brief Method WaitForTimeout, addr 0x9e341d8, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForTimeout() ;

constexpr ::StringW const& __cordl_internal_get__ClientUserId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ClientUserId_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Code_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Code_k__BackingField() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get__Completion_k__BackingField() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__Completion_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Error_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Error_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsComplete_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsComplete_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsDownloading_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsDownloading_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsUploading_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsUploading_k__BackingField() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get__Logger_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get__Logger_k__BackingField() ;

constexpr ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>* const& __cordl_internal_get__OnComplete_k__BackingField() const;

constexpr ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*& __cordl_internal_get__OnComplete_k__BackingField() ;

constexpr ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>* const& __cordl_internal_get__OnFirstResponse_k__BackingField() const;

constexpr ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*& __cordl_internal_get__OnFirstResponse_k__BackingField() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get__OnRawResponse_k__BackingField() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get__OnRawResponse_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__OperationId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__OperationId_k__BackingField() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get__PostData_k__BackingField() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get__PostData_k__BackingField() ;

constexpr ::Meta::Voice::Net::PubSub::PubSubResponseOptions const& __cordl_internal_get__PublishOptions_k__BackingField() const;

constexpr ::Meta::Voice::Net::PubSub::PubSubResponseOptions& __cordl_internal_get__PublishOptions_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__RequestId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__RequestId_k__BackingField() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get__ResponseData_k__BackingField() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get__ResponseData_k__BackingField() ;

constexpr ::Meta::WitAi::Requests::VoiceErrorSimulationType const& __cordl_internal_get__SimulatedErrorType_k__BackingField() const;

constexpr ::Meta::WitAi::Requests::VoiceErrorSimulationType& __cordl_internal_get__SimulatedErrorType_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__TimeoutMs_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__TimeoutMs_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__TopicId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__TopicId_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__timeoutStart() const;

constexpr ::System::DateTime& __cordl_internal_get__timeoutStart() ;

constexpr ::Meta::Voice::Net::WebSockets::UploadChunkDelegate* const& __cordl_internal_get__uploader() const;

constexpr ::Meta::Voice::Net::WebSockets::UploadChunkDelegate*& __cordl_internal_get__uploader() ;

constexpr void __cordl_internal_set__ClientUserId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Code_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Completion_k__BackingField(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr void __cordl_internal_set__Error_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__IsComplete_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsDownloading_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsUploading_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

constexpr void __cordl_internal_set__OnComplete_k__BackingField(::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value) ;

constexpr void __cordl_internal_set__OnFirstResponse_k__BackingField(::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value) ;

constexpr void __cordl_internal_set__OnRawResponse_k__BackingField(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__OperationId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__PostData_k__BackingField(::Meta::WitAi::Json::WitResponseNode*  value) ;

constexpr void __cordl_internal_set__PublishOptions_k__BackingField(::Meta::Voice::Net::PubSub::PubSubResponseOptions  value) ;

constexpr void __cordl_internal_set__RequestId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ResponseData_k__BackingField(::Meta::WitAi::Json::WitResponseNode*  value) ;

constexpr void __cordl_internal_set__SimulatedErrorType_k__BackingField(::Meta::WitAi::Requests::VoiceErrorSimulationType  value) ;

constexpr void __cordl_internal_set__TimeoutMs_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__TopicId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__timeoutStart(::System::DateTime  value) ;

constexpr void __cordl_internal_set__uploader(::Meta::Voice::Net::WebSockets::UploadChunkDelegate*  value) ;

/// @brief Method .ctor, addr 0x9e336cc, size 0x294, virtual false, abstract: false, final false
inline void _ctor(::Meta::WitAi::Json::WitResponseNode*  postData, ::StringW  requestId, ::StringW  clientUserId, ::StringW  operationId) ;

/// [CompilerGenerated]
/// @brief Method get_ClientUserId, addr 0x9e33d48, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_ClientUserId() ;

/// [CompilerGenerated]
/// @brief Method get_Code, addr 0x9e33dc0, size 0x8, virtual true, abstract: false, final true
inline int32_t get_Code() ;

/// [CompilerGenerated]
/// @brief Method get_Completion, addr 0x9e33db8, size 0x8, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* get_Completion() ;

/// [CompilerGenerated]
/// @brief Method get_Error, addr 0x9e33dd0, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Error() ;

/// [CompilerGenerated]
/// @brief Method get_IsComplete, addr 0x9e33da8, size 0x8, virtual true, abstract: false, final true
inline bool get_IsComplete() ;

/// [CompilerGenerated]
/// @brief Method get_IsDownloading, addr 0x9e33d98, size 0x8, virtual true, abstract: false, final true
inline bool get_IsDownloading() ;

/// [CompilerGenerated]
/// @brief Method get_IsUploading, addr 0x9e33d88, size 0x8, virtual true, abstract: false, final true
inline bool get_IsUploading() ;

/// [CompilerGenerated]
/// @brief Method get_Logger, addr 0x9e33d38, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::IVLogger* get_Logger() ;

/// [CompilerGenerated]
/// @brief Method get_OnComplete, addr 0x9e33e28, size 0x8, virtual true, abstract: false, final true
inline ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>* get_OnComplete() ;

/// [CompilerGenerated]
/// @brief Method get_OnFirstResponse, addr 0x9e33e18, size 0x8, virtual true, abstract: false, final true
inline ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>* get_OnFirstResponse() ;

/// [CompilerGenerated]
/// @brief Method get_OnRawResponse, addr 0x9e33e08, size 0x8, virtual true, abstract: false, final true
inline ::System::Action_1<::StringW>* get_OnRawResponse() ;

/// [CompilerGenerated]
/// @brief Method get_OperationId, addr 0x9e33d50, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_OperationId() ;

/// [CompilerGenerated]
/// @brief Method get_PostData, addr 0x9e33df0, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseNode* get_PostData() ;

/// [CompilerGenerated]
/// @brief Method get_PublishOptions, addr 0x9e33d68, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Net::PubSub::PubSubResponseOptions get_PublishOptions() ;

/// [CompilerGenerated]
/// @brief Method get_RequestId, addr 0x9e33d40, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_RequestId() ;

/// [CompilerGenerated]
/// @brief Method get_ResponseData, addr 0x9e33df8, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseNode* get_ResponseData() ;

/// [CompilerGenerated]
/// @brief Method get_SimulatedErrorType, addr 0x9e33de0, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Requests::VoiceErrorSimulationType get_SimulatedErrorType() ;

/// [CompilerGenerated]
/// @brief Method get_TimeoutMs, addr 0x9e33d78, size 0x8, virtual true, abstract: false, final true
inline int32_t get_TimeoutMs() ;

/// [CompilerGenerated]
/// @brief Method get_TopicId, addr 0x9e33d58, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_TopicId() ;

/// @brief Convert to "::Meta::Voice::Net::WebSockets::IWitWebSocketRequest"
constexpr ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest* i___Meta__Voice__Net__WebSockets__IWitWebSocketRequest() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Code, addr 0x9e33dc8, size 0x8, virtual false, abstract: false, final false
inline void set_Code(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Error, addr 0x9e33dd8, size 0x8, virtual false, abstract: false, final false
inline void set_Error(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsComplete, addr 0x9e33db0, size 0x8, virtual false, abstract: false, final false
inline void set_IsComplete(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsDownloading, addr 0x9e33da0, size 0x8, virtual false, abstract: false, final false
inline void set_IsDownloading(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsUploading, addr 0x9e33d90, size 0x8, virtual false, abstract: false, final false
inline void set_IsUploading(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_OnComplete, addr 0x9e33e30, size 0x8, virtual true, abstract: false, final true
inline void set_OnComplete(::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_OnFirstResponse, addr 0x9e33e20, size 0x8, virtual true, abstract: false, final true
inline void set_OnFirstResponse(::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_OnRawResponse, addr 0x9e33e10, size 0x8, virtual true, abstract: false, final true
inline void set_OnRawResponse(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_PublishOptions, addr 0x9e33d70, size 0x8, virtual true, abstract: false, final true
inline void set_PublishOptions(::Meta::Voice::Net::PubSub::PubSubResponseOptions  value) ;

/// [CompilerGenerated]
/// @brief Method set_ResponseData, addr 0x9e33e00, size 0x8, virtual false, abstract: false, final false
inline void set_ResponseData(::Meta::WitAi::Json::WitResponseNode*  value) ;

/// [CompilerGenerated]
/// @brief Method set_SimulatedErrorType, addr 0x9e33de8, size 0x8, virtual false, abstract: false, final false
inline void set_SimulatedErrorType(::Meta::WitAi::Requests::VoiceErrorSimulationType  value) ;

/// [CompilerGenerated]
/// @brief Method set_TimeoutMs, addr 0x9e33d80, size 0x8, virtual true, abstract: false, final true
inline void set_TimeoutMs(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_TopicId, addr 0x9e33d60, size 0x8, virtual true, abstract: false, final true
inline void set_TopicId(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitWebSocketJsonRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketJsonRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitWebSocketJsonRequest(WitWebSocketJsonRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketJsonRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitWebSocketJsonRequest(WitWebSocketJsonRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25488};

/// [CompilerGenerated]
/// @brief Field <Logger>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ____Logger_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RequestId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____RequestId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ClientUserId>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____ClientUserId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OperationId>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____OperationId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TopicId>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____TopicId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PublishOptions>k__BackingField, offset: 0x38, size: 0x2, def value: None
 ::Meta::Voice::Net::PubSub::PubSubResponseOptions  ____PublishOptions_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TimeoutMs>k__BackingField, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____TimeoutMs_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsUploading>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____IsUploading_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsDownloading>k__BackingField, offset: 0x41, size: 0x1, def value: None
 bool  ____IsDownloading_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsComplete>k__BackingField, offset: 0x42, size: 0x1, def value: None
 bool  ____IsComplete_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Completion>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ____Completion_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Code>k__BackingField, offset: 0x50, size: 0x4, def value: None
 int32_t  ____Code_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Error>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____Error_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SimulatedErrorType>k__BackingField, offset: 0x60, size: 0x4, def value: None
 ::Meta::WitAi::Requests::VoiceErrorSimulationType  ____SimulatedErrorType_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PostData>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  ____PostData_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ResponseData>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  ____ResponseData_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OnRawResponse>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ____OnRawResponse_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OnFirstResponse>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  ____OnFirstResponse_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OnComplete>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  ____OnComplete_k__BackingField;

/// @brief Field _uploader, offset: 0x90, size: 0x8, def value: None
 ::Meta::Voice::Net::WebSockets::UploadChunkDelegate*  ____uploader;

/// @brief Field _timeoutStart, offset: 0x98, size: 0x8, def value: None
 ::System::DateTime  ____timeoutStart;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest, ____Logger_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest, ____RequestId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest, ____ClientUserId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest, ____OperationId_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest, ____TopicId_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest, ____PublishOptions_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest, ____TimeoutMs_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest, ____IsUploading_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest, ____IsDownloading_k__BackingField) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest, ____IsComplete_k__BackingField) == 0x42, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest, ____Completion_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest, ____Code_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest, ____Error_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest, ____SimulatedErrorType_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest, ____PostData_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest, ____ResponseData_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest, ____OnRawResponse_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest, ____OnFirstResponse_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest, ____OnComplete_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest, ____uploader) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest, ____timeoutStart) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest) == 0xa0, "Size mismatch!");

} // namespace end def Meta::Voice::Net::WebSockets::Requests
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Voice::Net::WebSockets::Requests {
// Is value type: false
// CS Name: Meta.Voice.Net.WebSockets.Requests.WitWebSocketJsonRequest/<>c__DisplayClass81_0
class CORDL_TYPE WitWebSocketJsonRequest___c__DisplayClass81_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*  __4__this;

/// @brief Field jsonString, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_jsonString, put=__cordl_internal_set_jsonString)) ::StringW  jsonString;

static inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0* New_ctor() ;

/// @brief Method <ReturnRawResponse>b__0, addr 0x9e34adc, size 0x30, virtual false, abstract: false, final false
inline void _ReturnRawResponse_b__0() ;

constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_jsonString() const;

constexpr ::StringW& __cordl_internal_get_jsonString() ;

constexpr void __cordl_internal_set___4__this(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*  value) ;

constexpr void __cordl_internal_set_jsonString(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e346c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitWebSocketJsonRequest___c__DisplayClass81_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketJsonRequest___c__DisplayClass81_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitWebSocketJsonRequest___c__DisplayClass81_0(WitWebSocketJsonRequest___c__DisplayClass81_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketJsonRequest___c__DisplayClass81_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitWebSocketJsonRequest___c__DisplayClass81_0(WitWebSocketJsonRequest___c__DisplayClass81_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25486};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*  _____4__this;

/// @brief Field jsonString, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___jsonString;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0, ___jsonString) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::Voice::Net::WebSockets::Requests
