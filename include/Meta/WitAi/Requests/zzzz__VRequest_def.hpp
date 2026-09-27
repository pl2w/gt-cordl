#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Requests/zzzz__VRequestMethod_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VRequest)
namespace GlobalNamespace {
struct VRequest__DecodeFileHeaders_d__110;
}
namespace GlobalNamespace {
struct VRequest__DecodeFile_d__112;
}
namespace GlobalNamespace {
struct VRequest__DecodeText_d__121;
}
namespace GlobalNamespace {
struct VRequest__GetDownloadedText_d__104;
}
namespace GlobalNamespace {
struct VRequest__GetError_d__103;
}
namespace GlobalNamespace {
struct VRequest__RequestFileDownload_d__113;
}
namespace GlobalNamespace {
struct VRequest__RequestFileExists_d__116;
}
namespace GlobalNamespace {
struct VRequest__RequestFileHeaders_d__109;
}
namespace GlobalNamespace {
struct VRequest__RequestFile_d__111;
}
namespace GlobalNamespace {
template<typename TData>
struct VRequest__RequestJsonGet_d__124_1;
}
namespace GlobalNamespace {
template<typename TData>
struct VRequest__RequestJsonPost_d__125_1;
}
namespace GlobalNamespace {
template<typename TData>
struct VRequest__RequestJsonPost_d__126_1;
}
namespace GlobalNamespace {
template<typename TData>
struct VRequest__RequestJsonPost_d__127_1;
}
namespace GlobalNamespace {
template<typename TData>
struct VRequest__RequestJson_d__122_1;
}
namespace GlobalNamespace {
struct VRequest__RequestText_d__120;
}
namespace GlobalNamespace {
template<typename TValue>
struct VRequest__Request_d__92_1;
}
namespace GlobalNamespace {
struct VRequest__WaitForTimeout_d__97;
}
namespace GlobalNamespace {
struct VRequest__WaitForTurn_d__5;
}
namespace GlobalNamespace {
struct VRequest__WaitWhileRunning_d__102;
}
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::WitAi::Requests {
template<typename TValue>
class VRequestDecodeDelegate_1;
}
namespace Meta::WitAi::Requests {
struct VRequestMethod;
}
namespace Meta::WitAi::Requests {
class VRequestProgressDelegate;
}
namespace Meta::WitAi::Requests {
class VRequestResponseDelegate;
}
namespace Meta::WitAi::Requests {
template<typename TValue>
struct VRequestResponse_1;
}
namespace Meta::WitAi::Requests {
class VRequest___c__DisplayClass104_0;
}
namespace Meta::WitAi::Requests {
class VRequest___c__DisplayClass110_0;
}
namespace Meta::WitAi::Requests {
class VRequest___c__DisplayClass112_0;
}
namespace Meta::WitAi::Requests {
class VRequest___c__DisplayClass113_0;
}
namespace Meta::WitAi::Requests {
class VRequest___c__DisplayClass116_0;
}
namespace Meta::WitAi::Requests {
class VRequest___c__DisplayClass120_0;
}
namespace Meta::WitAi::Requests {
class VRequest___c__DisplayClass121_0;
}
namespace Meta::WitAi::Requests {
template<typename TData>
class VRequest___c__DisplayClass122_0_1;
}
namespace Meta::WitAi::Requests {
template<typename TData>
class VRequest___c__DisplayClass126_0_1;
}
namespace Meta::WitAi::Requests {
template<typename TValue>
class VRequest___c__DisplayClass92_0_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
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
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace System {
class Uri;
}
namespace UnityEngine::Networking {
class DownloadHandler;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::Networking {
class UploadHandler;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace Meta::WitAi::Requests {
class VRequest;
}
namespace Meta::WitAi::Requests {
class VRequest___c__DisplayClass104_0;
}
namespace Meta::WitAi::Requests {
class VRequest___c__DisplayClass110_0;
}
namespace Meta::WitAi::Requests {
class VRequest___c__DisplayClass112_0;
}
namespace Meta::WitAi::Requests {
class VRequest___c__DisplayClass113_0;
}
namespace Meta::WitAi::Requests {
class VRequest___c__DisplayClass116_0;
}
namespace Meta::WitAi::Requests {
class VRequest___c__DisplayClass120_0;
}
namespace Meta::WitAi::Requests {
class VRequest___c__DisplayClass121_0;
}
namespace Meta::WitAi::Requests {
template<typename TData>
class VRequest___c__DisplayClass122_0_1;
}
namespace Meta::WitAi::Requests {
template<typename TData>
class VRequest___c__DisplayClass126_0_1;
}
namespace Meta::WitAi::Requests {
template<typename TValue>
class VRequest___c__DisplayClass92_0_1;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Requests::VRequest*);
MARK_REF_T(::Meta::WitAi::Requests::VRequest___c__DisplayClass104_0*);
MARK_REF_T(::Meta::WitAi::Requests::VRequest___c__DisplayClass110_0*);
MARK_REF_T(::Meta::WitAi::Requests::VRequest___c__DisplayClass112_0*);
MARK_REF_T(::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0*);
MARK_REF_T(::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0*);
MARK_REF_T(::Meta::WitAi::Requests::VRequest___c__DisplayClass120_0*);
MARK_REF_T(::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0*);
MARK_GEN_REF_T_PTR(::Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1);
MARK_GEN_REF_T_PTR(::Meta::WitAi::Requests::VRequest___c__DisplayClass126_0_1);
MARK_GEN_REF_T_PTR(::Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::VRequest*, "Meta.WitAi.Requests", "VRequest");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::VRequest___c__DisplayClass104_0*, "Meta.WitAi.Requests", "VRequest/<>c__DisplayClass104_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::VRequest___c__DisplayClass110_0*, "Meta.WitAi.Requests", "VRequest/<>c__DisplayClass110_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::VRequest___c__DisplayClass112_0*, "Meta.WitAi.Requests", "VRequest/<>c__DisplayClass112_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0*, "Meta.WitAi.Requests", "VRequest/<>c__DisplayClass113_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0*, "Meta.WitAi.Requests", "VRequest/<>c__DisplayClass116_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::VRequest___c__DisplayClass120_0*, "Meta.WitAi.Requests", "VRequest/<>c__DisplayClass120_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0*, "Meta.WitAi.Requests", "VRequest/<>c__DisplayClass121_0");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1, "Meta.WitAi.Requests", "VRequest/<>c__DisplayClass122_0`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::Requests::VRequest___c__DisplayClass126_0_1, "Meta.WitAi.Requests", "VRequest/<>c__DisplayClass126_0`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1, "Meta.WitAi.Requests", "VRequest/<>c__DisplayClass92_0`1");
// [LogCategory((Meta.Voice.Logging.LogCategory)7)]
// Dependencies Meta.WitAi.Requests.VRequestMethod, System.DateTime, System.Object
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.VRequest
class CORDL_TYPE VRequest : public ::System::Object {
public:
// Declarations
using _DecodeFileHeaders_d__110 = ::GlobalNamespace::VRequest__DecodeFileHeaders_d__110;

using _DecodeFile_d__112 = ::GlobalNamespace::VRequest__DecodeFile_d__112;

using _DecodeText_d__121 = ::GlobalNamespace::VRequest__DecodeText_d__121;

using _GetDownloadedText_d__104 = ::GlobalNamespace::VRequest__GetDownloadedText_d__104;

using _GetError_d__103 = ::GlobalNamespace::VRequest__GetError_d__103;

using _RequestFileDownload_d__113 = ::GlobalNamespace::VRequest__RequestFileDownload_d__113;

using _RequestFileExists_d__116 = ::GlobalNamespace::VRequest__RequestFileExists_d__116;

using _RequestFileHeaders_d__109 = ::GlobalNamespace::VRequest__RequestFileHeaders_d__109;

using _RequestFile_d__111 = ::GlobalNamespace::VRequest__RequestFile_d__111;

template<typename TData>
using _RequestJsonGet_d__124_1 = ::GlobalNamespace::VRequest__RequestJsonGet_d__124_1<TData>;

template<typename TData>
using _RequestJsonPost_d__125_1 = ::GlobalNamespace::VRequest__RequestJsonPost_d__125_1<TData>;

template<typename TData>
using _RequestJsonPost_d__126_1 = ::GlobalNamespace::VRequest__RequestJsonPost_d__126_1<TData>;

template<typename TData>
using _RequestJsonPost_d__127_1 = ::GlobalNamespace::VRequest__RequestJsonPost_d__127_1<TData>;

template<typename TData>
using _RequestJson_d__122_1 = ::GlobalNamespace::VRequest__RequestJson_d__122_1<TData>;

using _RequestText_d__120 = ::GlobalNamespace::VRequest__RequestText_d__120;

template<typename TValue>
using _Request_d__92_1 = ::GlobalNamespace::VRequest__Request_d__92_1<TValue>;

using _WaitForTimeout_d__97 = ::GlobalNamespace::VRequest__WaitForTimeout_d__97;

using _WaitForTurn_d__5 = ::GlobalNamespace::VRequest__WaitForTurn_d__5;

using _WaitWhileRunning_d__102 = ::GlobalNamespace::VRequest__WaitWhileRunning_d__102;

using __c__DisplayClass104_0 = ::Meta::WitAi::Requests::VRequest___c__DisplayClass104_0;

using __c__DisplayClass110_0 = ::Meta::WitAi::Requests::VRequest___c__DisplayClass110_0;

using __c__DisplayClass112_0 = ::Meta::WitAi::Requests::VRequest___c__DisplayClass112_0;

using __c__DisplayClass113_0 = ::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0;

using __c__DisplayClass116_0 = ::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0;

using __c__DisplayClass120_0 = ::Meta::WitAi::Requests::VRequest___c__DisplayClass120_0;

using __c__DisplayClass121_0 = ::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0;

template<typename TData>
using __c__DisplayClass122_0_1 = ::Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>;

template<typename TData>
using __c__DisplayClass126_0_1 = ::Meta::WitAi::Requests::VRequest___c__DisplayClass126_0_1<TData>;

template<typename TValue>
using __c__DisplayClass92_0_1 = ::Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>;

 __declspec(property(get=get_Completion)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  Completion;

 __declspec(property(get=get_ContentType, put=set_ContentType)) ::StringW  ContentType;

 __declspec(property(get=get_DownloadProgress, put=set_DownloadProgress)) float_t  DownloadProgress;

 __declspec(property(get=get_Downloader, put=set_Downloader)) ::UnityEngine::Networking::DownloadHandler*  Downloader;

 __declspec(property(get=get_HasFirstResponse, put=set_HasFirstResponse)) bool  HasFirstResponse;

 __declspec(property(get=get_IsComplete, put=set_IsComplete)) bool  IsComplete;

 __declspec(property(get=get_IsDecoding, put=set_IsDecoding)) bool  IsDecoding;

 __declspec(property(get=get_IsPerforming)) bool  IsPerforming;

 __declspec(property(get=get_IsQueued, put=set_IsQueued)) bool  IsQueued;

 __declspec(property(get=get_IsRunning, put=set_IsRunning)) bool  IsRunning;

 __declspec(property(get=get_Logger)) ::Meta::Voice::Logging::IVLogger*  Logger;

/// @brief Field MaxConcurrentRequests, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MaxConcurrentRequests, put=setStaticF_MaxConcurrentRequests)) int32_t  MaxConcurrentRequests;

 __declspec(property(get=get_Method, put=set_Method)) ::Meta::WitAi::Requests::VRequestMethod  Method;

/// @brief Field OnDownloadProgress, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDownloadProgress, put=__cordl_internal_set_OnDownloadProgress)) ::Meta::WitAi::Requests::VRequestProgressDelegate*  OnDownloadProgress;

/// @brief Field OnFirstResponse, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFirstResponse, put=__cordl_internal_set_OnFirstResponse)) ::Meta::WitAi::Requests::VRequestResponseDelegate*  OnFirstResponse;

/// @brief Field OnUploadProgress, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnUploadProgress, put=__cordl_internal_set_OnUploadProgress)) ::Meta::WitAi::Requests::VRequestProgressDelegate*  OnUploadProgress;

 __declspec(property(get=get_ResponseCode, put=set_ResponseCode)) int32_t  ResponseCode;

 __declspec(property(get=get_ResponseError, put=set_ResponseError)) ::StringW  ResponseError;

 __declspec(property(get=get_TimeoutMs, put=set_TimeoutMs)) int32_t  TimeoutMs;

 __declspec(property(put=set_UploadProgress)) float_t  UploadProgress;

 __declspec(property(get=get_Uploader, put=set_Uploader)) ::UnityEngine::Networking::UploadHandler*  Uploader;

 __declspec(property(get=get_Url, put=set_Url)) ::StringW  Url;

 __declspec(property(get=get_UrlParameters, put=set_UrlParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  UrlParameters;

/// @brief Field <Completion>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__Completion_k__BackingField, put=__cordl_internal_set__Completion_k__BackingField)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  _Completion_k__BackingField;

/// @brief Field <ContentType>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__ContentType_k__BackingField, put=__cordl_internal_set__ContentType_k__BackingField)) ::StringW  _ContentType_k__BackingField;

/// @brief Field <DownloadProgress>k__BackingField, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__DownloadProgress_k__BackingField, put=__cordl_internal_set__DownloadProgress_k__BackingField)) float_t  _DownloadProgress_k__BackingField;

/// @brief Field <Downloader>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Downloader_k__BackingField, put=__cordl_internal_set__Downloader_k__BackingField)) ::UnityEngine::Networking::DownloadHandler*  _Downloader_k__BackingField;

/// @brief Field <HasFirstResponse>k__BackingField, offset 0x6b, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasFirstResponse_k__BackingField, put=__cordl_internal_set__HasFirstResponse_k__BackingField)) bool  _HasFirstResponse_k__BackingField;

/// @brief Field <IsComplete>k__BackingField, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsComplete_k__BackingField, put=__cordl_internal_set__IsComplete_k__BackingField)) bool  _IsComplete_k__BackingField;

/// @brief Field <IsDecoding>k__BackingField, offset 0x6a, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDecoding_k__BackingField, put=__cordl_internal_set__IsDecoding_k__BackingField)) bool  _IsDecoding_k__BackingField;

/// @brief Field <IsQueued>k__BackingField, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsQueued_k__BackingField, put=__cordl_internal_set__IsQueued_k__BackingField)) bool  _IsQueued_k__BackingField;

/// @brief Field <IsRunning>k__BackingField, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsRunning_k__BackingField, put=__cordl_internal_set__IsRunning_k__BackingField)) bool  _IsRunning_k__BackingField;

/// @brief Field <Logger>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logger_k__BackingField, put=__cordl_internal_set__Logger_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  _Logger_k__BackingField;

/// @brief Field <Method>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__Method_k__BackingField, put=__cordl_internal_set__Method_k__BackingField)) ::Meta::WitAi::Requests::VRequestMethod  _Method_k__BackingField;

/// @brief Field <ResponseCode>k__BackingField, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__ResponseCode_k__BackingField, put=__cordl_internal_set__ResponseCode_k__BackingField)) int32_t  _ResponseCode_k__BackingField;

/// @brief Field <ResponseError>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__ResponseError_k__BackingField, put=__cordl_internal_set__ResponseError_k__BackingField)) ::StringW  _ResponseError_k__BackingField;

/// @brief Field <TimeoutMs>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__TimeoutMs_k__BackingField, put=__cordl_internal_set__TimeoutMs_k__BackingField)) int32_t  _TimeoutMs_k__BackingField;

/// @brief Field <UploadProgress>k__BackingField, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__UploadProgress_k__BackingField, put=__cordl_internal_set__UploadProgress_k__BackingField)) float_t  _UploadProgress_k__BackingField;

/// @brief Field <Uploader>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Uploader_k__BackingField, put=__cordl_internal_set__Uploader_k__BackingField)) ::UnityEngine::Networking::UploadHandler*  _Uploader_k__BackingField;

/// @brief Field <UrlParameters>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__UrlParameters_k__BackingField, put=__cordl_internal_set__UrlParameters_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _UrlParameters_k__BackingField;

/// @brief Field <Url>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Url_k__BackingField, put=__cordl_internal_set__Url_k__BackingField)) ::StringW  _Url_k__BackingField;

/// @brief Field _activeRequests, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__activeRequests, put=setStaticF__activeRequests)) ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*  _activeRequests;

/// @brief Field _lastResponseReceivedTime, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastResponseReceivedTime, put=__cordl_internal_set__lastResponseReceivedTime)) ::System::DateTime  _lastResponseReceivedTime;

/// @brief Field _request, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__request, put=__cordl_internal_set__request)) ::UnityEngine::Networking::UnityWebRequest*  _request;

/// @brief Field _unityRequestComplete, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__unityRequestComplete, put=__cordl_internal_set__unityRequestComplete)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  _unityRequestComplete;

/// @brief Method Cancel, addr 0x9e88ad8, size 0x110, virtual true, abstract: false, final false
inline void Cancel() ;

/// @brief Method CreateRequest, addr 0x9e881fc, size 0x534, virtual true, abstract: false, final false
inline ::UnityEngine::Networking::UnityWebRequest* CreateRequest(::StringW  url, ::StringW  method, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.VRequest::<DecodeFile>d__112))]
/// @brief Method DecodeFile, addr 0x9e89218, size 0x11c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* DecodeFile(::UnityEngine::Networking::UnityWebRequest*  request) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.VRequest::<DecodeFileHeaders>d__110))]
/// @brief Method DecodeFileHeaders, addr 0x9e88fe0, size 0x11c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* DecodeFileHeaders(::UnityEngine::Networking::UnityWebRequest*  request) ;

/// @brief Method DecodeJson, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TData>
inline TData DecodeJson(::StringW  json) ;

/// @brief Method DecodeSuccess, addr 0x9e89470, size 0x68, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* DecodeSuccess(::UnityEngine::Networking::UnityWebRequest*  request) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.VRequest::<DecodeText>d__121))]
/// @brief Method DecodeText, addr 0x9e89840, size 0x11c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* DecodeText(::UnityEngine::Networking::UnityWebRequest*  request) ;

/// @brief Method Dispose, addr 0x9e88be8, size 0x254, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method EncodeText, addr 0x9e8995c, size 0x30, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> EncodeText(::StringW  text) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.VRequest::<GetDownloadedText>d__104))]
/// @brief Method GetDownloadedText, addr 0x9e889bc, size 0x11c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* GetDownloadedText(::UnityEngine::Networking::UnityWebRequest*  request) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.VRequest::<GetError>d__103))]
/// @brief Method GetError, addr 0x9e8889c, size 0x120, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Tuple_2<int32_t,::StringW>*>* GetError(::UnityEngine::Networking::UnityWebRequest*  request) ;

/// @brief Method GetHeaders, addr 0x9e88058, size 0x68, virtual true, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GetHeaders() ;

/// @brief Method GetLastResponseTime, addr 0x9e881f4, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime GetLastResponseTime() ;

/// @brief Method GetMethod, addr 0x9e87f9c, size 0xbc, virtual true, abstract: false, final false
inline ::StringW GetMethod() ;

/// @brief Method GetTmpDownloadPath, addr 0x9e894d8, size 0x4c, virtual false, abstract: false, final false
inline ::StringW GetTmpDownloadPath(::StringW  downloadPath) ;

/// @brief Method GetUri, addr 0x9e87b94, size 0x398, virtual true, abstract: false, final false
inline ::System::Uri* GetUri() ;

/// @brief Method HasUriSchema, addr 0x9e87f2c, size 0x70, virtual false, abstract: false, final false
static inline bool HasUriSchema(::StringW  url) ;

/// @brief Method IsJarPath, addr 0x9e896b4, size 0x70, virtual false, abstract: false, final false
static inline bool IsJarPath(::StringW  url) ;

/// @brief Method IsWebUrl, addr 0x9e89644, size 0x70, virtual false, abstract: false, final false
static inline bool IsWebUrl(::StringW  url) ;

/// @brief Method MarkRequestComplete, addr 0x9e88730, size 0x94, virtual false, abstract: false, final false
inline void MarkRequestComplete(::UnityEngine::AsyncOperation*  asyncOperation) ;

static inline ::Meta::WitAi::Requests::VRequest* New_ctor() ;

/// @brief Method RaiseFirstResponse, addr 0x9e88e3c, size 0x2c, virtual true, abstract: false, final false
inline void RaiseFirstResponse() ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.VRequest::<Request>d__92`1<TValue>))]
/// @brief Method Request, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename TValue>
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>* Request(::Meta::WitAi::Requests::VRequestDecodeDelegate_1<TValue>*  decoder) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.VRequest::<RequestFile>d__111))]
/// @brief Method RequestFile, addr 0x9e890fc, size 0x11c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<::ArrayW<uint8_t>>>* RequestFile(::StringW  url) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.VRequest::<RequestFileDownload>d__113))]
/// @brief Method RequestFileDownload, addr 0x9e89334, size 0x13c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>* RequestFileDownload(::StringW  url, ::StringW  downloadPath) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.VRequest::<RequestFileExists>d__116))]
/// @brief Method RequestFileExists, addr 0x9e89524, size 0x120, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>* RequestFileExists(::StringW  url) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.VRequest::<RequestFileHeaders>d__109))]
/// @brief Method RequestFileHeaders, addr 0x9e88ec0, size 0x120, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>>* RequestFileHeaders(::StringW  url) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.VRequest::<RequestJson>d__122`1<TData>))]
/// @brief Method RequestJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TData>
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TData>>* RequestJson(::System::Action_1<TData>*  onPartial) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.VRequest::<RequestJsonGet>d__124`1<TData>))]
/// @brief Method RequestJsonGet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TData>
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TData>>* RequestJsonGet(::System::Action_1<TData>*  onPartial) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.VRequest::<RequestJsonPost>d__125`1<TData>))]
/// @brief Method RequestJsonPost, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TData>
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TData>>* RequestJsonPost(::System::Action_1<TData>*  onPartial) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.VRequest::<RequestJsonPost>d__126`1<TData>))]
/// @brief Method RequestJsonPost, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TData>
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TData>>* RequestJsonPost(::ArrayW<uint8_t>  postData, ::System::Action_1<TData>*  onPartial) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.VRequest::<RequestJsonPost>d__127`1<TData>))]
/// @brief Method RequestJsonPost, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TData>
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TData>>* RequestJsonPost(::StringW  postText, ::System::Action_1<TData>*  onPartial) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.VRequest::<RequestText>d__120))]
/// @brief Method RequestText, addr 0x9e89724, size 0x11c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<::StringW>>* RequestText(::System::Action_1<::StringW>*  onPartial) ;

/// @brief Method Reset, addr 0x9e87b18, size 0x7c, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method UpdateDownloadProgress, addr 0x9e88e68, size 0x58, virtual true, abstract: false, final false
inline void UpdateDownloadProgress(float_t  progress) ;

/// @brief Method UpdateLastResponseTime, addr 0x9e88198, size 0x5c, virtual false, abstract: false, final false
inline void UpdateLastResponseTime() ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.VRequest::<WaitForTimeout>d__97))]
/// @brief Method WaitForTimeout, addr 0x9e880c0, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForTimeout() ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.VRequest::<WaitForTurn>d__5))]
/// @brief Method WaitForTurn, addr 0x9e877e0, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* WaitForTurn(::Meta::WitAi::Requests::VRequest*  request) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.VRequest::<WaitWhileRunning>d__102))]
/// @brief Method WaitWhileRunning, addr 0x9e887c4, size 0xd8, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitWhileRunning() ;

/// [CompilerGenerated]
/// @brief Method <Cancel>b__105_0, addr 0x9e89bcc, size 0x14, virtual false, abstract: false, final false
inline void _Cancel_b__105_0() ;

/// [CompilerGenerated]
/// @brief Method <Dispose>b__106_0, addr 0x9e89be0, size 0x78, virtual false, abstract: false, final false
inline void _Dispose_b__106_0() ;

/// [CompilerGenerated]
/// @brief Method <RequestFile>b__111_0, addr 0x9e89c58, size 0x60, virtual false, abstract: false, final false
inline void _RequestFile_b__111_0() ;

constexpr ::Meta::WitAi::Requests::VRequestProgressDelegate* const& __cordl_internal_get_OnDownloadProgress() const;

constexpr ::Meta::WitAi::Requests::VRequestProgressDelegate*& __cordl_internal_get_OnDownloadProgress() ;

constexpr ::Meta::WitAi::Requests::VRequestResponseDelegate* const& __cordl_internal_get_OnFirstResponse() const;

constexpr ::Meta::WitAi::Requests::VRequestResponseDelegate*& __cordl_internal_get_OnFirstResponse() ;

constexpr ::Meta::WitAi::Requests::VRequestProgressDelegate* const& __cordl_internal_get_OnUploadProgress() const;

constexpr ::Meta::WitAi::Requests::VRequestProgressDelegate*& __cordl_internal_get_OnUploadProgress() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get__Completion_k__BackingField() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__Completion_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ContentType_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ContentType_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__DownloadProgress_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DownloadProgress_k__BackingField() ;

constexpr ::UnityEngine::Networking::DownloadHandler* const& __cordl_internal_get__Downloader_k__BackingField() const;

constexpr ::UnityEngine::Networking::DownloadHandler*& __cordl_internal_get__Downloader_k__BackingField() ;

constexpr bool const& __cordl_internal_get__HasFirstResponse_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasFirstResponse_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsComplete_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsComplete_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsDecoding_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsDecoding_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsQueued_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsQueued_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsRunning_k__BackingField() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get__Logger_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get__Logger_k__BackingField() ;

constexpr ::Meta::WitAi::Requests::VRequestMethod const& __cordl_internal_get__Method_k__BackingField() const;

constexpr ::Meta::WitAi::Requests::VRequestMethod& __cordl_internal_get__Method_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__ResponseCode_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ResponseCode_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ResponseError_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ResponseError_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__TimeoutMs_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__TimeoutMs_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__UploadProgress_k__BackingField() const;

constexpr float_t& __cordl_internal_get__UploadProgress_k__BackingField() ;

constexpr ::UnityEngine::Networking::UploadHandler* const& __cordl_internal_get__Uploader_k__BackingField() const;

constexpr ::UnityEngine::Networking::UploadHandler*& __cordl_internal_get__Uploader_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__UrlParameters_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__UrlParameters_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Url_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Url_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__lastResponseReceivedTime() const;

constexpr ::System::DateTime& __cordl_internal_get__lastResponseReceivedTime() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get__unityRequestComplete() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__unityRequestComplete() ;

constexpr void __cordl_internal_set_OnDownloadProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value) ;

constexpr void __cordl_internal_set_OnFirstResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value) ;

constexpr void __cordl_internal_set_OnUploadProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value) ;

constexpr void __cordl_internal_set__Completion_k__BackingField(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr void __cordl_internal_set__ContentType_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__DownloadProgress_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Downloader_k__BackingField(::UnityEngine::Networking::DownloadHandler*  value) ;

constexpr void __cordl_internal_set__HasFirstResponse_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsComplete_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsDecoding_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsQueued_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

constexpr void __cordl_internal_set__Method_k__BackingField(::Meta::WitAi::Requests::VRequestMethod  value) ;

constexpr void __cordl_internal_set__ResponseCode_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ResponseError_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__TimeoutMs_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__UploadProgress_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Uploader_k__BackingField(::UnityEngine::Networking::UploadHandler*  value) ;

constexpr void __cordl_internal_set__UrlParameters_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__Url_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__lastResponseReceivedTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set__request(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__unityRequestComplete(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x9e8998c, size 0x1a0, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnDownloadProgress, addr 0x9e87918, size 0x9c, virtual false, abstract: false, final false
inline void add_OnDownloadProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value) ;

static inline int32_t getStaticF_MaxConcurrentRequests() ;

static inline ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* getStaticF__activeRequests() ;

/// [CompilerGenerated]
/// @brief Method get_Completion, addr 0x9e87ad8, size 0x8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* get_Completion() ;

/// [CompilerGenerated]
/// @brief Method get_ContentType, addr 0x9e878d8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ContentType() ;

/// [CompilerGenerated]
/// @brief Method get_DownloadProgress, addr 0x9e87b08, size 0x8, virtual false, abstract: false, final false
inline float_t get_DownloadProgress() ;

/// [CompilerGenerated]
/// @brief Method get_Downloader, addr 0x9e878f8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::DownloadHandler* get_Downloader() ;

/// [CompilerGenerated]
/// @brief Method get_HasFirstResponse, addr 0x9e87ab8, size 0x8, virtual false, abstract: false, final false
inline bool get_HasFirstResponse() ;

/// [CompilerGenerated]
/// @brief Method get_IsComplete, addr 0x9e87ac8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsComplete() ;

/// [CompilerGenerated]
/// @brief Method get_IsDecoding, addr 0x9e87a80, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDecoding() ;

/// @brief Method get_IsPerforming, addr 0x9e87a90, size 0x28, virtual false, abstract: false, final false
inline bool get_IsPerforming() ;

/// [CompilerGenerated]
/// @brief Method get_IsQueued, addr 0x9e87a60, size 0x8, virtual false, abstract: false, final false
inline bool get_IsQueued() ;

/// [CompilerGenerated]
/// @brief Method get_IsRunning, addr 0x9e87a70, size 0x8, virtual false, abstract: false, final false
inline bool get_IsRunning() ;

/// [CompilerGenerated]
/// @brief Method get_Logger, addr 0x9e877d8, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::IVLogger* get_Logger() ;

/// [CompilerGenerated]
/// @brief Method get_Method, addr 0x9e878e8, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Requests::VRequestMethod get_Method() ;

/// [CompilerGenerated]
/// @brief Method get_ResponseCode, addr 0x9e87ae0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ResponseCode() ;

/// [CompilerGenerated]
/// @brief Method get_ResponseError, addr 0x9e87af0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ResponseError() ;

/// [CompilerGenerated]
/// @brief Method get_TimeoutMs, addr 0x9e87a50, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TimeoutMs() ;

/// [CompilerGenerated]
/// @brief Method get_Uploader, addr 0x9e87908, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::UploadHandler* get_Uploader() ;

/// [CompilerGenerated]
/// @brief Method get_Url, addr 0x9e878b8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Url() ;

/// [CompilerGenerated]
/// @brief Method get_UrlParameters, addr 0x9e878c8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_UrlParameters() ;

/// [CompilerGenerated]
/// @brief Method remove_OnDownloadProgress, addr 0x9e879b4, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnDownloadProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value) ;

static inline void setStaticF_MaxConcurrentRequests(int32_t  value) ;

static inline void setStaticF__activeRequests(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ContentType, addr 0x9e878e0, size 0x8, virtual false, abstract: false, final false
inline void set_ContentType(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_DownloadProgress, addr 0x9e87b10, size 0x8, virtual false, abstract: false, final false
inline void set_DownloadProgress(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Downloader, addr 0x9e87900, size 0x8, virtual false, abstract: false, final false
inline void set_Downloader(::UnityEngine::Networking::DownloadHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method set_HasFirstResponse, addr 0x9e87ac0, size 0x8, virtual false, abstract: false, final false
inline void set_HasFirstResponse(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsComplete, addr 0x9e87ad0, size 0x8, virtual false, abstract: false, final false
inline void set_IsComplete(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsDecoding, addr 0x9e87a88, size 0x8, virtual false, abstract: false, final false
inline void set_IsDecoding(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsQueued, addr 0x9e87a68, size 0x8, virtual false, abstract: false, final false
inline void set_IsQueued(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsRunning, addr 0x9e87a78, size 0x8, virtual false, abstract: false, final false
inline void set_IsRunning(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Method, addr 0x9e878f0, size 0x8, virtual false, abstract: false, final false
inline void set_Method(::Meta::WitAi::Requests::VRequestMethod  value) ;

/// [CompilerGenerated]
/// @brief Method set_ResponseCode, addr 0x9e87ae8, size 0x8, virtual false, abstract: false, final false
inline void set_ResponseCode(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ResponseError, addr 0x9e87af8, size 0x8, virtual false, abstract: false, final false
inline void set_ResponseError(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_TimeoutMs, addr 0x9e87a58, size 0x8, virtual false, abstract: false, final false
inline void set_TimeoutMs(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_UploadProgress, addr 0x9e87b00, size 0x8, virtual false, abstract: false, final false
inline void set_UploadProgress(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Uploader, addr 0x9e87910, size 0x8, virtual false, abstract: false, final false
inline void set_Uploader(::UnityEngine::Networking::UploadHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Url, addr 0x9e878c0, size 0x8, virtual false, abstract: false, final false
inline void set_Url(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_UrlParameters, addr 0x9e878d0, size 0x8, virtual false, abstract: false, final false
inline void set_UrlParameters(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRequest(VRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRequest(VRequest const& ) = delete;

/// @brief Field FilePrepend offset 0xffffffff size 0x8
static constexpr ::ConstString  FilePrepend{u"file://"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25626};

/// [CompilerGenerated]
/// @brief Field <Logger>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ____Logger_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Url>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Url_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <UrlParameters>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____UrlParameters_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ContentType>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____ContentType_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Method>k__BackingField, offset: 0x30, size: 0x4, def value: None
 ::Meta::WitAi::Requests::VRequestMethod  ____Method_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Downloader>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::DownloadHandler*  ____Downloader_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Uploader>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Networking::UploadHandler*  ____Uploader_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnUploadProgress, offset: 0x48, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequestProgressDelegate*  ___OnUploadProgress;

/// [CompilerGenerated]
/// @brief Field OnDownloadProgress, offset: 0x50, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequestProgressDelegate*  ___OnDownloadProgress;

/// [CompilerGenerated]
/// @brief Field <TimeoutMs>k__BackingField, offset: 0x58, size: 0x4, def value: None
 int32_t  ____TimeoutMs_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnFirstResponse, offset: 0x60, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequestResponseDelegate*  ___OnFirstResponse;

/// [CompilerGenerated]
/// @brief Field <IsQueued>k__BackingField, offset: 0x68, size: 0x1, def value: None
 bool  ____IsQueued_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsRunning>k__BackingField, offset: 0x69, size: 0x1, def value: None
 bool  ____IsRunning_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsDecoding>k__BackingField, offset: 0x6a, size: 0x1, def value: None
 bool  ____IsDecoding_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <HasFirstResponse>k__BackingField, offset: 0x6b, size: 0x1, def value: None
 bool  ____HasFirstResponse_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsComplete>k__BackingField, offset: 0x6c, size: 0x1, def value: None
 bool  ____IsComplete_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Completion>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ____Completion_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ResponseCode>k__BackingField, offset: 0x78, size: 0x4, def value: None
 int32_t  ____ResponseCode_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ResponseError>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::StringW  ____ResponseError_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <UploadProgress>k__BackingField, offset: 0x88, size: 0x4, def value: None
 float_t  ____UploadProgress_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DownloadProgress>k__BackingField, offset: 0x8c, size: 0x4, def value: None
 float_t  ____DownloadProgress_k__BackingField;

/// @brief Field _request, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request;

/// @brief Field _unityRequestComplete, offset: 0x98, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ____unityRequestComplete;

/// @brief Field _lastResponseReceivedTime, offset: 0xa0, size: 0x8, def value: None
 ::System::DateTime  ____lastResponseReceivedTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ____Logger_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ____Url_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ____UrlParameters_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ____ContentType_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ____Method_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ____Downloader_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ____Uploader_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ___OnUploadProgress) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ___OnDownloadProgress) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ____TimeoutMs_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ___OnFirstResponse) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ____IsQueued_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ____IsRunning_k__BackingField) == 0x69, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ____IsDecoding_k__BackingField) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ____HasFirstResponse_k__BackingField) == 0x6b, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ____IsComplete_k__BackingField) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ____Completion_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ____ResponseCode_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ____ResponseError_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ____UploadProgress_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ____DownloadProgress_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ____request) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ____unityRequestComplete) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest, ____lastResponseReceivedTime) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::VRequest) == 0xa8, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Requests {
// cpp template
template<typename TValue>
// Is value type: false
// CS Name: Meta.WitAi.Requests.VRequest/<>c__DisplayClass92_0`1<TValue>
class CORDL_TYPE VRequest___c__DisplayClass92_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::WitAi::Requests::VRequest*  __4__this;

/// @brief Field headers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_headers, put=__cordl_internal_set_headers)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers;

/// @brief Field method, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_method, put=__cordl_internal_set_method)) ::StringW  method;

/// @brief Field url, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_url, put=__cordl_internal_set_url)) ::StringW  url;

static inline ::Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>* New_ctor() ;

/// @brief Method <Request>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Request_b__0() ;

constexpr ::Meta::WitAi::Requests::VRequest* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::WitAi::Requests::VRequest*& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_headers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_headers() ;

constexpr ::StringW const& __cordl_internal_get_method() const;

constexpr ::StringW& __cordl_internal_get_method() ;

constexpr ::StringW const& __cordl_internal_get_url() const;

constexpr ::StringW& __cordl_internal_get_url() ;

constexpr void __cordl_internal_set___4__this(::Meta::WitAi::Requests::VRequest*  value) ;

constexpr void __cordl_internal_set_headers(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_method(::StringW  value) ;

constexpr void __cordl_internal_set_url(::StringW  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRequest___c__DisplayClass92_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRequest___c__DisplayClass92_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRequest___c__DisplayClass92_0_1(VRequest___c__DisplayClass92_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRequest___c__DisplayClass92_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRequest___c__DisplayClass92_0_1(VRequest___c__DisplayClass92_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25606};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequest*  _____4__this;

/// @brief Field url, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___url;

/// @brief Field method, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___method;

/// @brief Field headers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___headers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Requests
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Requests {
// cpp template
template<typename TData>
// Is value type: false
// CS Name: Meta.WitAi.Requests.VRequest/<>c__DisplayClass126_0`1<TData>
class CORDL_TYPE VRequest___c__DisplayClass126_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::WitAi::Requests::VRequest*  __4__this;

/// @brief Field postData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_postData, put=__cordl_internal_set_postData)) ::ArrayW<uint8_t>  postData;

static inline ::Meta::WitAi::Requests::VRequest___c__DisplayClass126_0_1<TData>* New_ctor() ;

/// @brief Method <RequestJsonPost>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _RequestJsonPost_b__0() ;

constexpr ::Meta::WitAi::Requests::VRequest* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::WitAi::Requests::VRequest*& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_postData() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_postData() ;

constexpr void __cordl_internal_set___4__this(::Meta::WitAi::Requests::VRequest*  value) ;

constexpr void __cordl_internal_set_postData(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRequest___c__DisplayClass126_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRequest___c__DisplayClass126_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRequest___c__DisplayClass126_0_1(VRequest___c__DisplayClass126_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRequest___c__DisplayClass126_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRequest___c__DisplayClass126_0_1(VRequest___c__DisplayClass126_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25605};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequest*  _____4__this;

/// @brief Field postData, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___postData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Requests
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Requests {
// cpp template
template<typename TData>
// Is value type: false
// CS Name: Meta.WitAi.Requests.VRequest/<>c__DisplayClass122_0`1<TData>
class CORDL_TYPE VRequest___c__DisplayClass122_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::WitAi::Requests::VRequest*  __4__this;

/// @brief Field decoded, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_decoded, put=__cordl_internal_set_decoded)) bool  decoded;

/// @brief Field lastPartial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastPartial, put=__cordl_internal_set_lastPartial)) TData  lastPartial;

/// @brief Field onPartial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPartial, put=__cordl_internal_set_onPartial)) ::System::Action_1<TData>*  onPartial;

static inline ::Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>* New_ctor() ;

/// @brief Method <RequestJson>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _RequestJson_b__0(::StringW  partialText) ;

constexpr ::Meta::WitAi::Requests::VRequest* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::WitAi::Requests::VRequest*& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get_decoded() const;

constexpr bool& __cordl_internal_get_decoded() ;

constexpr TData const& __cordl_internal_get_lastPartial() const;

constexpr TData& __cordl_internal_get_lastPartial() ;

constexpr ::System::Action_1<TData>* const& __cordl_internal_get_onPartial() const;

constexpr ::System::Action_1<TData>*& __cordl_internal_get_onPartial() ;

constexpr void __cordl_internal_set___4__this(::Meta::WitAi::Requests::VRequest*  value) ;

constexpr void __cordl_internal_set_decoded(bool  value) ;

constexpr void __cordl_internal_set_lastPartial(TData  value) ;

constexpr void __cordl_internal_set_onPartial(::System::Action_1<TData>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRequest___c__DisplayClass122_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRequest___c__DisplayClass122_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRequest___c__DisplayClass122_0_1(VRequest___c__DisplayClass122_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRequest___c__DisplayClass122_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRequest___c__DisplayClass122_0_1(VRequest___c__DisplayClass122_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25604};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequest*  _____4__this;

/// @brief Field decoded, offset: 0x18, size: 0x1, def value: None
 bool  ___decoded;

/// @brief Field lastPartial, offset: 0x20, size: 0x8, def value: None
 TData  ___lastPartial;

/// @brief Field onPartial, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<TData>*  ___onPartial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Requests
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.VRequest/<>c__DisplayClass121_0
class CORDL_TYPE VRequest___c__DisplayClass121_0 : public ::System::Object {
public:
// Declarations
/// @brief Field request, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

/// @brief Field text, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::StringW  text;

static inline ::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0* New_ctor() ;

/// @brief Method <DecodeText>b__0, addr 0x9e8a168, size 0x3c, virtual false, abstract: false, final false
inline void _DecodeText_b__0() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr ::StringW const& __cordl_internal_get_text() const;

constexpr ::StringW& __cordl_internal_get_text() ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_text(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e8a160, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRequest___c__DisplayClass121_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRequest___c__DisplayClass121_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRequest___c__DisplayClass121_0(VRequest___c__DisplayClass121_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRequest___c__DisplayClass121_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRequest___c__DisplayClass121_0(VRequest___c__DisplayClass121_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25603};

/// @brief Field text, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___text;

/// @brief Field request, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0, ___text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0, ___request) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.VRequest/<>c__DisplayClass120_0
class CORDL_TYPE VRequest___c__DisplayClass120_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::WitAi::Requests::VRequest*  __4__this;

/// @brief Field onPartial, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPartial, put=__cordl_internal_set_onPartial)) ::System::Action_1<::StringW>*  onPartial;

static inline ::Meta::WitAi::Requests::VRequest___c__DisplayClass120_0* New_ctor() ;

/// @brief Method <RequestText>b__0, addr 0x9e8a044, size 0x11c, virtual false, abstract: false, final false
inline void _RequestText_b__0() ;

constexpr ::Meta::WitAi::Requests::VRequest* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::WitAi::Requests::VRequest*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_onPartial() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_onPartial() ;

constexpr void __cordl_internal_set___4__this(::Meta::WitAi::Requests::VRequest*  value) ;

constexpr void __cordl_internal_set_onPartial(::System::Action_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x9e8a03c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRequest___c__DisplayClass120_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRequest___c__DisplayClass120_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRequest___c__DisplayClass120_0(VRequest___c__DisplayClass120_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRequest___c__DisplayClass120_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRequest___c__DisplayClass120_0(VRequest___c__DisplayClass120_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25602};

/// @brief Field onPartial, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___onPartial;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequest*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::VRequest___c__DisplayClass120_0, ___onPartial) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest___c__DisplayClass120_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::VRequest___c__DisplayClass120_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.VRequest/<>c__DisplayClass116_0
class CORDL_TYPE VRequest___c__DisplayClass116_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::WitAi::Requests::VRequest*  __4__this;

/// @brief Field exists, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_exists, put=__cordl_internal_set_exists)) bool  exists;

static inline ::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0* New_ctor() ;

/// @brief Method <RequestFileExists>b__0, addr 0x9e8a010, size 0x2c, virtual false, abstract: false, final false
inline void _RequestFileExists_b__0() ;

constexpr ::Meta::WitAi::Requests::VRequest* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::WitAi::Requests::VRequest*& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get_exists() const;

constexpr bool& __cordl_internal_get_exists() ;

constexpr void __cordl_internal_set___4__this(::Meta::WitAi::Requests::VRequest*  value) ;

constexpr void __cordl_internal_set_exists(bool  value) ;

/// @brief Method .ctor, addr 0x9e8a008, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRequest___c__DisplayClass116_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRequest___c__DisplayClass116_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRequest___c__DisplayClass116_0(VRequest___c__DisplayClass116_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRequest___c__DisplayClass116_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRequest___c__DisplayClass116_0(VRequest___c__DisplayClass116_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25601};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequest*  _____4__this;

/// @brief Field exists, offset: 0x18, size: 0x1, def value: None
 bool  ___exists;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0, ___exists) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.VRequest/<>c__DisplayClass113_0
class CORDL_TYPE VRequest___c__DisplayClass113_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::WitAi::Requests::VRequest*  __4__this;

/// @brief Field downloadTempPath, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_downloadTempPath, put=__cordl_internal_set_downloadTempPath)) ::StringW  downloadTempPath;

static inline ::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0* New_ctor() ;

/// @brief Method <RequestFileDownload>b__0, addr 0x9e89f90, size 0x78, virtual false, abstract: false, final false
inline void _RequestFileDownload_b__0() ;

constexpr ::Meta::WitAi::Requests::VRequest* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::WitAi::Requests::VRequest*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_downloadTempPath() const;

constexpr ::StringW& __cordl_internal_get_downloadTempPath() ;

constexpr void __cordl_internal_set___4__this(::Meta::WitAi::Requests::VRequest*  value) ;

constexpr void __cordl_internal_set_downloadTempPath(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e89f88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRequest___c__DisplayClass113_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRequest___c__DisplayClass113_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRequest___c__DisplayClass113_0(VRequest___c__DisplayClass113_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRequest___c__DisplayClass113_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRequest___c__DisplayClass113_0(VRequest___c__DisplayClass113_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25600};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequest*  _____4__this;

/// @brief Field downloadTempPath, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___downloadTempPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0, ___downloadTempPath) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.VRequest/<>c__DisplayClass112_0
class CORDL_TYPE VRequest___c__DisplayClass112_0 : public ::System::Object {
public:
// Declarations
/// @brief Field data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::ArrayW<uint8_t>  data;

/// @brief Field request, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

static inline ::Meta::WitAi::Requests::VRequest___c__DisplayClass112_0* New_ctor() ;

/// @brief Method <DecodeFile>b__0, addr 0x9e89f4c, size 0x3c, virtual false, abstract: false, final false
inline void _DecodeFile_b__0() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_data() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_data() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set_data(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x9e89f44, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRequest___c__DisplayClass112_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRequest___c__DisplayClass112_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRequest___c__DisplayClass112_0(VRequest___c__DisplayClass112_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRequest___c__DisplayClass112_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRequest___c__DisplayClass112_0(VRequest___c__DisplayClass112_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25599};

/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___data;

/// @brief Field request, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::VRequest___c__DisplayClass112_0, ___data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest___c__DisplayClass112_0, ___request) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::VRequest___c__DisplayClass112_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.VRequest/<>c__DisplayClass110_0
class CORDL_TYPE VRequest___c__DisplayClass110_0 : public ::System::Object {
public:
// Declarations
/// @brief Field request, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

/// @brief Field results, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_results, put=__cordl_internal_set_results)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  results;

static inline ::Meta::WitAi::Requests::VRequest___c__DisplayClass110_0* New_ctor() ;

/// @brief Method <DecodeFileHeaders>b__0, addr 0x9e89f14, size 0x30, virtual false, abstract: false, final false
inline void _DecodeFileHeaders_b__0() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_results() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_results() ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_results(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x9e89f0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRequest___c__DisplayClass110_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRequest___c__DisplayClass110_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRequest___c__DisplayClass110_0(VRequest___c__DisplayClass110_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRequest___c__DisplayClass110_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRequest___c__DisplayClass110_0(VRequest___c__DisplayClass110_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25598};

/// @brief Field results, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___results;

/// @brief Field request, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::VRequest___c__DisplayClass110_0, ___results) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest___c__DisplayClass110_0, ___request) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::VRequest___c__DisplayClass110_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.VRequest/<>c__DisplayClass104_0
class CORDL_TYPE VRequest___c__DisplayClass104_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::WitAi::Requests::VRequest*  __4__this;

/// @brief Field request, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

/// @brief Field text, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::StringW  text;

static inline ::Meta::WitAi::Requests::VRequest___c__DisplayClass104_0* New_ctor() ;

/// @brief Method <GetDownloadedText>b__0, addr 0x9e89cc0, size 0x24c, virtual false, abstract: false, final false
inline void _GetDownloadedText_b__0() ;

constexpr ::Meta::WitAi::Requests::VRequest* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::WitAi::Requests::VRequest*& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr ::StringW const& __cordl_internal_get_text() const;

constexpr ::StringW& __cordl_internal_get_text() ;

constexpr void __cordl_internal_set___4__this(::Meta::WitAi::Requests::VRequest*  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_text(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e89cb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRequest___c__DisplayClass104_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRequest___c__DisplayClass104_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRequest___c__DisplayClass104_0(VRequest___c__DisplayClass104_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRequest___c__DisplayClass104_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRequest___c__DisplayClass104_0(VRequest___c__DisplayClass104_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25597};

/// @brief Field request, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

/// @brief Field text, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___text;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequest*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::VRequest___c__DisplayClass104_0, ___request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest___c__DisplayClass104_0, ___text) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VRequest___c__DisplayClass104_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::VRequest___c__DisplayClass104_0) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
