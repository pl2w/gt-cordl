#pragma once
// IWYU pragma private; include "Meta/WitAi/WitRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WitRequest)
namespace GlobalNamespace {
struct WitRequest__StartThreadedRequest_d__91;
}
namespace GlobalNamespace {
struct WitRequest__WaitForTimeout_d__94;
}
namespace GlobalNamespace {
struct WitRequest___HandleSend_b__89_0_d;
}
namespace Meta::Voice::Logging {
struct CorrelationID;
}
namespace Meta::Voice {
struct VoiceRequestState;
}
namespace Meta::WitAi::Configuration {
class WitRequestOptions;
}
namespace Meta::WitAi::Data::Configuration {
class WitConfiguration;
}
namespace Meta::WitAi::Data {
class AudioEncoding;
}
namespace Meta::WitAi::Interfaces {
class IAudioUploadHandler;
}
namespace Meta::WitAi::Interfaces {
class IDataUploadHandler;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequestEvents;
}
namespace Meta::WitAi {
class AudioDurationTracker;
}
namespace Meta::WitAi {
class WitRequest_OnCustomizeUriEvent;
}
namespace Meta::WitAi {
class WitRequest_OnProvideCustomHeadersEvent;
}
namespace Meta::WitAi {
class WitRequest_PreSendRequestDelegate;
}
namespace Meta::WitAi {
class WitRequest___c__DisplayClass101_0;
}
namespace Meta::WitAi {
class WitRequest___c__DisplayClass94_0;
}
namespace Meta::WitAi {
class WitRequest___c__DisplayClass95_0;
}
namespace Meta::WitAi {
class WitRequest___c__DisplayClass95_1;
}
namespace Meta::WitAi {
class WitRequest___c__DisplayClass97_0;
}
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
class WebException;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class Thread;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
struct DateTime;
}
namespace System {
class Exception;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class UriBuilder;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Meta::WitAi {
class WitRequest;
}
namespace Meta::WitAi {
class WitRequest_OnCustomizeUriEvent;
}
namespace Meta::WitAi {
class WitRequest_OnProvideCustomHeadersEvent;
}
namespace Meta::WitAi {
class WitRequest_PreSendRequestDelegate;
}
namespace Meta::WitAi {
class WitRequest___c__DisplayClass101_0;
}
namespace Meta::WitAi {
class WitRequest___c__DisplayClass94_0;
}
namespace Meta::WitAi {
class WitRequest___c__DisplayClass95_0;
}
namespace Meta::WitAi {
class WitRequest___c__DisplayClass95_1;
}
namespace Meta::WitAi {
class WitRequest___c__DisplayClass97_0;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::WitRequest*);
MARK_REF_T(::Meta::WitAi::WitRequest_OnCustomizeUriEvent*);
MARK_REF_T(::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent*);
MARK_REF_T(::Meta::WitAi::WitRequest_PreSendRequestDelegate*);
MARK_REF_T(::Meta::WitAi::WitRequest___c__DisplayClass101_0*);
MARK_REF_T(::Meta::WitAi::WitRequest___c__DisplayClass94_0*);
MARK_REF_T(::Meta::WitAi::WitRequest___c__DisplayClass95_0*);
MARK_REF_T(::Meta::WitAi::WitRequest___c__DisplayClass95_1*);
MARK_REF_T(::Meta::WitAi::WitRequest___c__DisplayClass97_0*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::WitRequest*, "Meta.WitAi", "WitRequest");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::WitRequest_OnCustomizeUriEvent*, "Meta.WitAi", "WitRequest/OnCustomizeUriEvent");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent*, "Meta.WitAi", "WitRequest/OnProvideCustomHeadersEvent");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::WitRequest_PreSendRequestDelegate*, "Meta.WitAi", "WitRequest/PreSendRequestDelegate");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::WitRequest___c__DisplayClass101_0*, "Meta.WitAi", "WitRequest/<>c__DisplayClass101_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::WitRequest___c__DisplayClass94_0*, "Meta.WitAi", "WitRequest/<>c__DisplayClass94_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::WitRequest___c__DisplayClass95_0*, "Meta.WitAi", "WitRequest/<>c__DisplayClass95_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::WitRequest___c__DisplayClass95_1*, "Meta.WitAi", "WitRequest/<>c__DisplayClass95_1");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::WitRequest___c__DisplayClass97_0*, "Meta.WitAi", "WitRequest/<>c__DisplayClass97_0");
// [LogCategory((Meta.Voice.Logging.LogCategory)7)]
// Dependencies Meta.WitAi.Requests.VoiceServiceRequest, System.DateTime
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.WitRequest
class CORDL_TYPE WitRequest : public ::Meta::WitAi::Requests::VoiceServiceRequest {
public:
// Declarations
using _StartThreadedRequest_d__91 = ::GlobalNamespace::WitRequest__StartThreadedRequest_d__91;

using _WaitForTimeout_d__94 = ::GlobalNamespace::WitRequest__WaitForTimeout_d__94;

using __HandleSend_b__89_0_d = ::GlobalNamespace::WitRequest___HandleSend_b__89_0_d;

using OnCustomizeUriEvent = ::Meta::WitAi::WitRequest_OnCustomizeUriEvent;

using OnProvideCustomHeadersEvent = ::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent;

using PreSendRequestDelegate = ::Meta::WitAi::WitRequest_PreSendRequestDelegate;

using __c__DisplayClass101_0 = ::Meta::WitAi::WitRequest___c__DisplayClass101_0;

using __c__DisplayClass94_0 = ::Meta::WitAi::WitRequest___c__DisplayClass94_0;

using __c__DisplayClass95_0 = ::Meta::WitAi::WitRequest___c__DisplayClass95_0;

using __c__DisplayClass95_1 = ::Meta::WitAi::WitRequest___c__DisplayClass95_1;

using __c__DisplayClass97_0 = ::Meta::WitAi::WitRequest___c__DisplayClass97_0;

 __declspec(property(get=get_AudioEncoding, put=set_AudioEncoding)) ::Meta::WitAi::Data::AudioEncoding*  AudioEncoding;

 __declspec(property(get=get_Command, put=set_Command)) ::StringW  Command;

 __declspec(property(get=get_Configuration, put=set_Configuration)) ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  Configuration;

 __declspec(property(get=get_DecodeRawResponses)) bool  DecodeRawResponses;

 __declspec(property(put=set_HasResponseStarted)) bool  HasResponseStarted;

 __declspec(property(get=get_IsInputStreamReady, put=set_IsInputStreamReady)) bool  IsInputStreamReady;

 __declspec(property(get=get_IsPost, put=set_IsPost)) bool  IsPost;

 __declspec(property(get=get_OnInputStreamReady, put=set_OnInputStreamReady)) ::System::Action*  OnInputStreamReady;

 __declspec(property(get=get_Path, put=set_Path)) ::StringW  Path;

 __declspec(property(get=get_TimeoutMs)) int32_t  TimeoutMs;

/// @brief Field <AudioEncoding>k__BackingField, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__AudioEncoding_k__BackingField, put=__cordl_internal_set__AudioEncoding_k__BackingField)) ::Meta::WitAi::Data::AudioEncoding*  _AudioEncoding_k__BackingField;

/// @brief Field <Command>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Command_k__BackingField, put=__cordl_internal_set__Command_k__BackingField)) ::StringW  _Command_k__BackingField;

/// @brief Field <Configuration>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__Configuration_k__BackingField, put=__cordl_internal_set__Configuration_k__BackingField)) ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  _Configuration_k__BackingField;

/// @brief Field <HasResponseStarted>k__BackingField, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasResponseStarted_k__BackingField, put=__cordl_internal_set__HasResponseStarted_k__BackingField)) bool  _HasResponseStarted_k__BackingField;

/// @brief Field <IsInputStreamReady>k__BackingField, offset 0xd9, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsInputStreamReady_k__BackingField, put=__cordl_internal_set__IsInputStreamReady_k__BackingField)) bool  _IsInputStreamReady_k__BackingField;

/// @brief Field <IsPost>k__BackingField, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPost_k__BackingField, put=__cordl_internal_set__IsPost_k__BackingField)) bool  _IsPost_k__BackingField;

/// @brief Field <OnInputStreamReady>k__BackingField, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnInputStreamReady_k__BackingField, put=__cordl_internal_set__OnInputStreamReady_k__BackingField)) ::System::Action*  _OnInputStreamReady_k__BackingField;

/// @brief Field _bytesWritten, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get__bytesWritten, put=__cordl_internal_set__bytesWritten)) int32_t  _bytesWritten;

/// @brief Field _canSetPath, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__canSetPath, put=__cordl_internal_set__canSetPath)) bool  _canSetPath;

/// @brief Field _initialized, offset 0x160, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _path, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__path, put=__cordl_internal_set__path)) ::StringW  _path;

/// @brief Field _request, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__request, put=__cordl_internal_set__request)) ::System::Net::HttpWebRequest*  _request;

/// @brief Field _requestStartTime, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__requestStartTime, put=__cordl_internal_set__requestStartTime)) ::System::DateTime  _requestStartTime;

/// @brief Field _requestThread, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__requestThread, put=__cordl_internal_set__requestThread)) ::System::Threading::Thread*  _requestThread;

/// @brief Field _streamLock, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__streamLock, put=__cordl_internal_set__streamLock)) ::System::Object*  _streamLock;

/// @brief Field _timeoutLastUpdate, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeoutLastUpdate, put=__cordl_internal_set__timeoutLastUpdate)) ::System::DateTime  _timeoutLastUpdate;

/// @brief Field _writeBuffer, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__writeBuffer, put=__cordl_internal_set__writeBuffer)) ::System::Collections::Concurrent::ConcurrentQueue_1<::ArrayW<uint8_t>>*  _writeBuffer;

/// @brief Field _writeStream, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__writeStream, put=__cordl_internal_set__writeStream)) ::System::IO::Stream*  _writeStream;

/// @brief Field audioDurationTracker, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioDurationTracker, put=__cordl_internal_set_audioDurationTracker)) ::Meta::WitAi::AudioDurationTracker*  audioDurationTracker;

/// @brief Field forcedHttpMethodType, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_forcedHttpMethodType, put=__cordl_internal_set_forcedHttpMethodType)) ::StringW  forcedHttpMethodType;

/// @brief Field onCustomizeUri, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCustomizeUri, put=__cordl_internal_set_onCustomizeUri)) ::Meta::WitAi::WitRequest_OnCustomizeUriEvent*  onCustomizeUri;

/// @brief Field onFullTranscription, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFullTranscription, put=__cordl_internal_set_onFullTranscription)) ::System::Action_1<::StringW>*  onFullTranscription;

/// @brief Field onInputStreamReady, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_onInputStreamReady, put=__cordl_internal_set_onInputStreamReady)) ::System::Action_1<::Meta::WitAi::WitRequest*>*  onInputStreamReady;

/// @brief Field onPartialResponse, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPartialResponse, put=__cordl_internal_set_onPartialResponse)) ::System::Action_1<::Meta::WitAi::WitRequest*>*  onPartialResponse;

/// @brief Field onPartialTranscription, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPartialTranscription, put=__cordl_internal_set_onPartialTranscription)) ::System::Action_1<::StringW>*  onPartialTranscription;

/// @brief Field onPreSendRequest, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onPreSendRequest, put=setStaticF_onPreSendRequest)) ::Meta::WitAi::WitRequest_PreSendRequestDelegate*  onPreSendRequest;

/// @brief Field onProvideCustomHeaders, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_onProvideCustomHeaders, put=__cordl_internal_set_onProvideCustomHeaders)) ::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent*  onProvideCustomHeaders;

/// @brief Field onRawResponse, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRawResponse, put=__cordl_internal_set_onRawResponse)) ::System::Action_1<::StringW>*  onRawResponse;

/// @brief Field onResponse, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_onResponse, put=__cordl_internal_set_onResponse)) ::System::Action_1<::Meta::WitAi::WitRequest*>*  onResponse;

/// @brief Field postContentType, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_postContentType, put=__cordl_internal_set_postContentType)) ::StringW  postContentType;

/// @brief Field postData, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_postData, put=__cordl_internal_set_postData)) ::ArrayW<uint8_t>  postData;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IAudioUploadHandler"
constexpr operator  ::Meta::WitAi::Interfaces::IAudioUploadHandler*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IDataUploadHandler"
constexpr operator  ::Meta::WitAi::Interfaces::IDataUploadHandler*() noexcept;

/// @brief Method CloseActiveStream, addr 0x9e7ba18, size 0x250, virtual false, abstract: false, final false
inline void CloseActiveStream() ;

/// @brief Method CloseRequestStream, addr 0x9e79ac0, size 0x84, virtual false, abstract: false, final false
inline void CloseRequestStream() ;

/// @brief Method GetHeaders, addr 0x9e79d30, size 0x284, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GetHeaders() ;

/// @brief Method GetLastUpdate, addr 0x9e7a418, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime GetLastUpdate() ;

/// @brief Method GetSendError, addr 0x9e79b44, size 0xfc, virtual true, abstract: false, final false
inline ::StringW GetSendError() ;

/// @brief Method GetUri, addr 0x9e79c40, size 0xf0, virtual false, abstract: false, final false
inline ::System::Uri* GetUri() ;

/// @brief Method HandleAudioActivation, addr 0x9e79a4c, size 0x14, virtual true, abstract: false, final false
inline void HandleAudioActivation() ;

/// @brief Method HandleAudioDeactivation, addr 0x9e79a60, size 0x60, virtual true, abstract: false, final false
inline void HandleAudioDeactivation() ;

/// @brief Method HandleCancel, addr 0x9e7bc68, size 0x40, virtual true, abstract: false, final false
inline void HandleCancel() ;

/// @brief Method HandleResponse, addr 0x9e7aa38, size 0x8f0, virtual false, abstract: false, final false
inline void HandleResponse(::System::IAsyncResult*  asyncResult) ;

/// @brief Method HandleSend, addr 0x9e79fb4, size 0x100, virtual true, abstract: false, final false
inline void HandleSend() ;

/// @brief Method HandleWriteStream, addr 0x9e7a4fc, size 0x318, virtual false, abstract: false, final false
inline void HandleWriteStream(::System::IAsyncResult*  ar) ;

/// @brief Method HasSentAudio, addr 0x9e7b9f8, size 0x20, virtual true, abstract: false, final false
inline bool HasSentAudio() ;

static inline ::Meta::WitAi::WitRequest* New_ctor(::Meta::WitAi::Data::Configuration::WitConfiguration*  newConfiguration, ::StringW  newPath, ::Meta::WitAi::Configuration::WitRequestOptions*  newOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  newEvents) ;

/// @brief Method OnComplete, addr 0x9e7bca8, size 0xb0, virtual true, abstract: false, final false
inline void OnComplete() ;

/// @brief Method OnFullTranscription, addr 0x9e7b8e4, size 0x90, virtual true, abstract: false, final false
inline void OnFullTranscription() ;

/// @brief Method OnInit, addr 0x9e79918, size 0x134, virtual true, abstract: false, final false
inline void OnInit() ;

/// @brief Method OnPartialResponse, addr 0x9e7b974, size 0x84, virtual true, abstract: false, final false
inline void OnPartialResponse(::Meta::WitAi::Json::WitResponseNode*  responseNode) ;

/// @brief Method OnPartialTranscription, addr 0x9e7b854, size 0x90, virtual true, abstract: false, final false
inline void OnPartialTranscription() ;

/// @brief Method OnRawResponse, addr 0x9e7b758, size 0xf4, virtual true, abstract: false, final false
inline void OnRawResponse(::StringW  rawResponse) ;

/// @brief Method ProcessStreamResponses, addr 0x9e7b330, size 0x2b8, virtual false, abstract: false, final false
inline ::StringW ProcessStreamResponses(::System::IO::Stream*  stream) ;

/// @brief Method ProcessStringResponse, addr 0x9e7b6d8, size 0x80, virtual false, abstract: false, final false
inline void ProcessStringResponse(::StringW  stringResponse) ;

/// @brief Method ProcessStringResponses, addr 0x9e7b5e8, size 0xf0, virtual false, abstract: false, final false
inline void ProcessStringResponses(::StringW  stringResponse) ;

/// @brief Method SetState, addr 0x9e798b4, size 0x64, virtual true, abstract: false, final false
inline void SetState(::Meta::Voice::VoiceRequestState  newState) ;

/// @brief Method SetupSend, addr 0x9e7a0b4, size 0x26c, virtual false, abstract: false, final false
inline void SetupSend(::by_ref<::System::Uri*>  uri, ::by_ref<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>  headers, ::Meta::Voice::Logging::CorrelationID  correlationID) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.WitRequest::<StartThreadedRequest>d__91))]
/// @brief Method StartThreadedRequest, addr 0x9e7a320, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* StartThreadedRequest(::Meta::Voice::Logging::CorrelationID  correlationID) ;

/// @brief Method ToString, addr 0x9e7973c, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// [AsyncStateMachine(typeof(Meta.WitAi.WitRequest::<WaitForTimeout>d__94))]
/// @brief Method WaitForTimeout, addr 0x9e7a420, size 0xdc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForTimeout() ;

/// @brief Method WaitingForPost, addr 0x9e7aa04, size 0x34, virtual false, abstract: false, final false
inline bool WaitingForPost() ;

/// @brief Method Write, addr 0x9e7a824, size 0x1e0, virtual true, abstract: false, final true
inline void Write(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  length) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.WitRequest::<<HandleSend>b__89_0>d))]
/// [CompilerGenerated]
/// @brief Method <HandleSend>b__89_0, addr 0x9e7bd58, size 0xa8, virtual false, abstract: false, final false
inline void _HandleSend_b__89_0() ;

/// [CompilerGenerated]
/// @brief Method <HandleWriteStream>b__95_0, addr 0x9e7be58, size 0x44, virtual false, abstract: false, final false
inline void _HandleWriteStream_b__95_0() ;

/// [CompilerGenerated]
/// @brief Method <StartThreadedRequest>b__91_0, addr 0x9e7be00, size 0x58, virtual false, abstract: false, final false
inline void _StartThreadedRequest_b__91_0() ;

/// [CompilerGenerated]
/// @brief Method <Write>b__96_0, addr 0x9e7be9c, size 0x54, virtual false, abstract: false, final false
inline void _Write_b__96_0() ;

constexpr ::Meta::WitAi::Data::AudioEncoding* const& __cordl_internal_get__AudioEncoding_k__BackingField() const;

constexpr ::Meta::WitAi::Data::AudioEncoding*& __cordl_internal_get__AudioEncoding_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Command_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Command_k__BackingField() ;

constexpr ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> const& __cordl_internal_get__Configuration_k__BackingField() const;

constexpr ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>& __cordl_internal_get__Configuration_k__BackingField() ;

constexpr bool const& __cordl_internal_get__HasResponseStarted_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasResponseStarted_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsInputStreamReady_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsInputStreamReady_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsPost_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsPost_k__BackingField() ;

constexpr ::System::Action* const& __cordl_internal_get__OnInputStreamReady_k__BackingField() const;

constexpr ::System::Action*& __cordl_internal_get__OnInputStreamReady_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__bytesWritten() const;

constexpr int32_t& __cordl_internal_get__bytesWritten() ;

constexpr bool const& __cordl_internal_get__canSetPath() const;

constexpr bool& __cordl_internal_get__canSetPath() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr ::StringW const& __cordl_internal_get__path() const;

constexpr ::StringW& __cordl_internal_get__path() ;

constexpr ::System::Net::HttpWebRequest* const& __cordl_internal_get__request() const;

constexpr ::System::Net::HttpWebRequest*& __cordl_internal_get__request() ;

constexpr ::System::DateTime const& __cordl_internal_get__requestStartTime() const;

constexpr ::System::DateTime& __cordl_internal_get__requestStartTime() ;

constexpr ::System::Threading::Thread* const& __cordl_internal_get__requestThread() const;

constexpr ::System::Threading::Thread*& __cordl_internal_get__requestThread() ;

constexpr ::System::Object* const& __cordl_internal_get__streamLock() const;

constexpr ::System::Object*& __cordl_internal_get__streamLock() ;

constexpr ::System::DateTime const& __cordl_internal_get__timeoutLastUpdate() const;

constexpr ::System::DateTime& __cordl_internal_get__timeoutLastUpdate() ;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::ArrayW<uint8_t>>* const& __cordl_internal_get__writeBuffer() const;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::ArrayW<uint8_t>>*& __cordl_internal_get__writeBuffer() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__writeStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__writeStream() ;

constexpr ::Meta::WitAi::AudioDurationTracker* const& __cordl_internal_get_audioDurationTracker() const;

constexpr ::Meta::WitAi::AudioDurationTracker*& __cordl_internal_get_audioDurationTracker() ;

constexpr ::StringW const& __cordl_internal_get_forcedHttpMethodType() const;

constexpr ::StringW& __cordl_internal_get_forcedHttpMethodType() ;

constexpr ::Meta::WitAi::WitRequest_OnCustomizeUriEvent* const& __cordl_internal_get_onCustomizeUri() const;

constexpr ::Meta::WitAi::WitRequest_OnCustomizeUriEvent*& __cordl_internal_get_onCustomizeUri() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_onFullTranscription() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_onFullTranscription() ;

constexpr ::System::Action_1<::Meta::WitAi::WitRequest*>* const& __cordl_internal_get_onInputStreamReady() const;

constexpr ::System::Action_1<::Meta::WitAi::WitRequest*>*& __cordl_internal_get_onInputStreamReady() ;

constexpr ::System::Action_1<::Meta::WitAi::WitRequest*>* const& __cordl_internal_get_onPartialResponse() const;

constexpr ::System::Action_1<::Meta::WitAi::WitRequest*>*& __cordl_internal_get_onPartialResponse() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_onPartialTranscription() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_onPartialTranscription() ;

constexpr ::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent* const& __cordl_internal_get_onProvideCustomHeaders() const;

constexpr ::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent*& __cordl_internal_get_onProvideCustomHeaders() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_onRawResponse() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_onRawResponse() ;

constexpr ::System::Action_1<::Meta::WitAi::WitRequest*>* const& __cordl_internal_get_onResponse() const;

constexpr ::System::Action_1<::Meta::WitAi::WitRequest*>*& __cordl_internal_get_onResponse() ;

constexpr ::StringW const& __cordl_internal_get_postContentType() const;

constexpr ::StringW& __cordl_internal_get_postContentType() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_postData() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_postData() ;

constexpr void __cordl_internal_set__AudioEncoding_k__BackingField(::Meta::WitAi::Data::AudioEncoding*  value) ;

constexpr void __cordl_internal_set__Command_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Configuration_k__BackingField(::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  value) ;

constexpr void __cordl_internal_set__HasResponseStarted_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsInputStreamReady_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsPost_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__OnInputStreamReady_k__BackingField(::System::Action*  value) ;

constexpr void __cordl_internal_set__bytesWritten(int32_t  value) ;

constexpr void __cordl_internal_set__canSetPath(bool  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__path(::StringW  value) ;

constexpr void __cordl_internal_set__request(::System::Net::HttpWebRequest*  value) ;

constexpr void __cordl_internal_set__requestStartTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set__requestThread(::System::Threading::Thread*  value) ;

constexpr void __cordl_internal_set__streamLock(::System::Object*  value) ;

constexpr void __cordl_internal_set__timeoutLastUpdate(::System::DateTime  value) ;

constexpr void __cordl_internal_set__writeBuffer(::System::Collections::Concurrent::ConcurrentQueue_1<::ArrayW<uint8_t>>*  value) ;

constexpr void __cordl_internal_set__writeStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set_audioDurationTracker(::Meta::WitAi::AudioDurationTracker*  value) ;

constexpr void __cordl_internal_set_forcedHttpMethodType(::StringW  value) ;

constexpr void __cordl_internal_set_onCustomizeUri(::Meta::WitAi::WitRequest_OnCustomizeUriEvent*  value) ;

constexpr void __cordl_internal_set_onFullTranscription(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_onInputStreamReady(::System::Action_1<::Meta::WitAi::WitRequest*>*  value) ;

constexpr void __cordl_internal_set_onPartialResponse(::System::Action_1<::Meta::WitAi::WitRequest*>*  value) ;

constexpr void __cordl_internal_set_onPartialTranscription(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_onProvideCustomHeaders(::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent*  value) ;

constexpr void __cordl_internal_set_onRawResponse(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_onResponse(::System::Action_1<::Meta::WitAi::WitRequest*>*  value) ;

constexpr void __cordl_internal_set_postContentType(::StringW  value) ;

constexpr void __cordl_internal_set_postData(::ArrayW<uint8_t>  value) ;

/// [CompilerGenerated]
/// [DebuggerHidden]
/// @brief Method <>n__0, addr 0x9e7bef0, size 0x58, virtual false, abstract: false, final false
inline void __n__0(::StringW  rawResponse) ;

/// @brief Method .ctor, addr 0x9e7975c, size 0x158, virtual false, abstract: false, final false
inline void _ctor(::Meta::WitAi::Data::Configuration::WitConfiguration*  newConfiguration, ::StringW  newPath, ::Meta::WitAi::Configuration::WitRequestOptions*  newOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  newEvents) ;

static inline ::Meta::WitAi::WitRequest_PreSendRequestDelegate* getStaticF_onPreSendRequest() ;

/// [CompilerGenerated]
/// @brief Method get_AudioEncoding, addr 0x9e79580, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Data::AudioEncoding* get_AudioEncoding() ;

/// [CompilerGenerated]
/// @brief Method get_Command, addr 0x9e796fc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Command() ;

/// [CompilerGenerated]
/// @brief Method get_Configuration, addr 0x9e79528, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> get_Configuration() ;

/// @brief Method get_DecodeRawResponses, addr 0x9e7971c, size 0x8, virtual true, abstract: false, final false
inline bool get_DecodeRawResponses() ;

/// [CompilerGenerated]
/// @brief Method get_IsInputStreamReady, addr 0x9e7972c, size 0x8, virtual true, abstract: false, final true
inline bool get_IsInputStreamReady() ;

/// [CompilerGenerated]
/// @brief Method get_IsPost, addr 0x9e7970c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsPost() ;

/// [CompilerGenerated]
/// @brief Method get_OnInputStreamReady, addr 0x9e79744, size 0x8, virtual true, abstract: false, final true
inline ::System::Action* get_OnInputStreamReady() ;

/// @brief Method get_Path, addr 0x9e79590, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Path() ;

/// @brief Method get_TimeoutMs, addr 0x9e79538, size 0x48, virtual false, abstract: false, final false
inline int32_t get_TimeoutMs() ;

/// @brief Convert to "::Meta::WitAi::Interfaces::IAudioUploadHandler"
constexpr ::Meta::WitAi::Interfaces::IAudioUploadHandler* i___Meta__WitAi__Interfaces__IAudioUploadHandler() noexcept;

/// @brief Convert to "::Meta::WitAi::Interfaces::IDataUploadHandler"
constexpr ::Meta::WitAi::Interfaces::IDataUploadHandler* i___Meta__WitAi__Interfaces__IDataUploadHandler() noexcept;

static inline void setStaticF_onPreSendRequest(::Meta::WitAi::WitRequest_PreSendRequestDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method set_AudioEncoding, addr 0x9e79588, size 0x8, virtual true, abstract: false, final true
inline void set_AudioEncoding(::Meta::WitAi::Data::AudioEncoding*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Command, addr 0x9e79704, size 0x8, virtual false, abstract: false, final false
inline void set_Command(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Configuration, addr 0x9e79530, size 0x8, virtual false, abstract: false, final false
inline void set_Configuration(::Meta::WitAi::Data::Configuration::WitConfiguration*  value) ;

/// [CompilerGenerated]
/// @brief Method set_HasResponseStarted, addr 0x9e79724, size 0x8, virtual false, abstract: false, final false
inline void set_HasResponseStarted(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsInputStreamReady, addr 0x9e79734, size 0x8, virtual false, abstract: false, final false
inline void set_IsInputStreamReady(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsPost, addr 0x9e79714, size 0x8, virtual false, abstract: false, final false
inline void set_IsPost(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_OnInputStreamReady, addr 0x9e7974c, size 0x10, virtual true, abstract: false, final true
inline void set_OnInputStreamReady(::System::Action*  value) ;

/// @brief Method set_Path, addr 0x9e79598, size 0x164, virtual false, abstract: false, final false
inline void set_Path(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitRequest(WitRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitRequest(WitRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25560};

/// [CompilerGenerated]
/// @brief Field <Configuration>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  ____Configuration_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AudioEncoding>k__BackingField, offset: 0x98, size: 0x8, def value: None
 ::Meta::WitAi::Data::AudioEncoding*  ____AudioEncoding_k__BackingField;

/// @brief Field _path, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ____path;

/// @brief Field _canSetPath, offset: 0xa8, size: 0x1, def value: None
 bool  ____canSetPath;

/// [CompilerGenerated]
/// @brief Field <Command>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ____Command_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsPost>k__BackingField, offset: 0xb8, size: 0x1, def value: None
 bool  ____IsPost_k__BackingField;

/// @brief Field postData, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___postData;

/// @brief Field postContentType, offset: 0xc8, size: 0x8, def value: None
 ::StringW  ___postContentType;

/// @brief Field forcedHttpMethodType, offset: 0xd0, size: 0x8, def value: None
 ::StringW  ___forcedHttpMethodType;

/// [CompilerGenerated]
/// @brief Field <HasResponseStarted>k__BackingField, offset: 0xd8, size: 0x1, def value: None
 bool  ____HasResponseStarted_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsInputStreamReady>k__BackingField, offset: 0xd9, size: 0x1, def value: None
 bool  ____IsInputStreamReady_k__BackingField;

/// @brief Field audioDurationTracker, offset: 0xe0, size: 0x8, def value: None
 ::Meta::WitAi::AudioDurationTracker*  ___audioDurationTracker;

/// @brief Field _request, offset: 0xe8, size: 0x8, def value: None
 ::System::Net::HttpWebRequest*  ____request;

/// @brief Field _writeStream, offset: 0xf0, size: 0x8, def value: None
 ::System::IO::Stream*  ____writeStream;

/// @brief Field _streamLock, offset: 0xf8, size: 0x8, def value: None
 ::System::Object*  ____streamLock;

/// @brief Field _bytesWritten, offset: 0x100, size: 0x4, def value: None
 int32_t  ____bytesWritten;

/// @brief Field _requestStartTime, offset: 0x108, size: 0x8, def value: None
 ::System::DateTime  ____requestStartTime;

/// @brief Field _writeBuffer, offset: 0x110, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentQueue_1<::ArrayW<uint8_t>>*  ____writeBuffer;

/// [CompilerGenerated]
/// @brief Field onProvideCustomHeaders, offset: 0x118, size: 0x8, def value: None
 ::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent*  ___onProvideCustomHeaders;

/// [CompilerGenerated]
/// @brief Field onInputStreamReady, offset: 0x120, size: 0x8, def value: None
 ::System::Action_1<::Meta::WitAi::WitRequest*>*  ___onInputStreamReady;

/// [CompilerGenerated]
/// @brief Field <OnInputStreamReady>k__BackingField, offset: 0x128, size: 0x8, def value: None
 ::System::Action*  ____OnInputStreamReady_k__BackingField;

/// [Obsolete("Deprecated for Events.OnRawResponse")]
/// @brief Field onRawResponse, offset: 0x130, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___onRawResponse;

/// [Obsolete("Deprecated for WitVRequest.OnProvideCustomUri")]
/// @brief Field onCustomizeUri, offset: 0x138, size: 0x8, def value: None
 ::Meta::WitAi::WitRequest_OnCustomizeUriEvent*  ___onCustomizeUri;

/// [CompilerGenerated]
/// @brief Field onPartialTranscription, offset: 0x140, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___onPartialTranscription;

/// [CompilerGenerated]
/// @brief Field onFullTranscription, offset: 0x148, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___onFullTranscription;

/// [CompilerGenerated]
/// @brief Field onPartialResponse, offset: 0x150, size: 0x8, def value: None
 ::System::Action_1<::Meta::WitAi::WitRequest*>*  ___onPartialResponse;

/// [CompilerGenerated]
/// @brief Field onResponse, offset: 0x158, size: 0x8, def value: None
 ::System::Action_1<::Meta::WitAi::WitRequest*>*  ___onResponse;

/// @brief Field _initialized, offset: 0x160, size: 0x1, def value: None
 bool  ____initialized;

/// @brief Field _requestThread, offset: 0x168, size: 0x8, def value: None
 ::System::Threading::Thread*  ____requestThread;

/// @brief Field _timeoutLastUpdate, offset: 0x170, size: 0x8, def value: None
 ::System::DateTime  ____timeoutLastUpdate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::WitRequest, ____Configuration_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ____AudioEncoding_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ____path) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ____canSetPath) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ____Command_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ____IsPost_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ___postData) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ___postContentType) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ___forcedHttpMethodType) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ____HasResponseStarted_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ____IsInputStreamReady_k__BackingField) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ___audioDurationTracker) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ____request) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ____writeStream) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ____streamLock) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ____bytesWritten) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ____requestStartTime) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ____writeBuffer) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ___onProvideCustomHeaders) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ___onInputStreamReady) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ____OnInputStreamReady_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ___onRawResponse) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ___onCustomizeUri) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ___onPartialTranscription) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ___onFullTranscription) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ___onPartialResponse) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ___onResponse) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ____initialized) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ____requestThread) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest, ____timeoutLastUpdate) == 0x170, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::WitRequest) == 0x178, "Size mismatch!");

} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.WitRequest/<>c__DisplayClass97_0
class CORDL_TYPE WitRequest___c__DisplayClass97_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::WitAi::WitRequest*  __4__this;

/// @brief Field error, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_error, put=__cordl_internal_set_error)) ::StringW  error;

/// @brief Field statusCode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_statusCode, put=__cordl_internal_set_statusCode)) int32_t  statusCode;

static inline ::Meta::WitAi::WitRequest___c__DisplayClass97_0* New_ctor() ;

/// @brief Method <HandleResponse>b__0, addr 0x9e7c54c, size 0x108, virtual false, abstract: false, final false
inline void _HandleResponse_b__0() ;

constexpr ::Meta::WitAi::WitRequest* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::WitAi::WitRequest*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_error() const;

constexpr ::StringW& __cordl_internal_get_error() ;

constexpr int32_t const& __cordl_internal_get_statusCode() const;

constexpr int32_t& __cordl_internal_get_statusCode() ;

constexpr void __cordl_internal_set___4__this(::Meta::WitAi::WitRequest*  value) ;

constexpr void __cordl_internal_set_error(::StringW  value) ;

constexpr void __cordl_internal_set_statusCode(int32_t  value) ;

/// @brief Method .ctor, addr 0x9e7b328, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitRequest___c__DisplayClass97_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitRequest___c__DisplayClass97_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitRequest___c__DisplayClass97_0(WitRequest___c__DisplayClass97_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitRequest___c__DisplayClass97_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitRequest___c__DisplayClass97_0(WitRequest___c__DisplayClass97_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25557};

/// @brief Field statusCode, offset: 0x10, size: 0x4, def value: None
 int32_t  ___statusCode;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::WitRequest*  _____4__this;

/// @brief Field error, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::WitRequest___c__DisplayClass97_0, ___statusCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest___c__DisplayClass97_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest___c__DisplayClass97_0, ___error) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::WitRequest___c__DisplayClass97_0) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.WitRequest/<>c__DisplayClass95_1
class CORDL_TYPE WitRequest___c__DisplayClass95_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::WitAi::WitRequest*  __4__this;

/// @brief Field e, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_e, put=__cordl_internal_set_e)) ::System::Exception*  e;

static inline ::Meta::WitAi::WitRequest___c__DisplayClass95_1* New_ctor() ;

/// @brief Method <HandleWriteStream>b__2, addr 0x9e7c504, size 0x48, virtual false, abstract: false, final false
inline void _HandleWriteStream_b__2() ;

constexpr ::Meta::WitAi::WitRequest* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::WitAi::WitRequest*& __cordl_internal_get___4__this() ;

constexpr ::System::Exception* const& __cordl_internal_get_e() const;

constexpr ::System::Exception*& __cordl_internal_get_e() ;

constexpr void __cordl_internal_set___4__this(::Meta::WitAi::WitRequest*  value) ;

constexpr void __cordl_internal_set_e(::System::Exception*  value) ;

/// @brief Method .ctor, addr 0x9e7a81c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitRequest___c__DisplayClass95_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitRequest___c__DisplayClass95_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitRequest___c__DisplayClass95_1(WitRequest___c__DisplayClass95_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitRequest___c__DisplayClass95_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitRequest___c__DisplayClass95_1(WitRequest___c__DisplayClass95_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25556};

/// @brief Field e, offset: 0x10, size: 0x8, def value: None
 ::System::Exception*  ___e;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::WitRequest*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::WitRequest___c__DisplayClass95_1, ___e) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest___c__DisplayClass95_1, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::WitRequest___c__DisplayClass95_1) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.WitRequest/<>c__DisplayClass95_0
class CORDL_TYPE WitRequest___c__DisplayClass95_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::WitAi::WitRequest*  __4__this;

/// @brief Field e, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_e, put=__cordl_internal_set_e)) ::System::Net::WebException*  e;

static inline ::Meta::WitAi::WitRequest___c__DisplayClass95_0* New_ctor() ;

/// @brief Method <HandleWriteStream>b__1, addr 0x9e7c4b0, size 0x54, virtual false, abstract: false, final false
inline void _HandleWriteStream_b__1() ;

constexpr ::Meta::WitAi::WitRequest* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::WitAi::WitRequest*& __cordl_internal_get___4__this() ;

constexpr ::System::Net::WebException* const& __cordl_internal_get_e() const;

constexpr ::System::Net::WebException*& __cordl_internal_get_e() ;

constexpr void __cordl_internal_set___4__this(::Meta::WitAi::WitRequest*  value) ;

constexpr void __cordl_internal_set_e(::System::Net::WebException*  value) ;

/// @brief Method .ctor, addr 0x9e7a814, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitRequest___c__DisplayClass95_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitRequest___c__DisplayClass95_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitRequest___c__DisplayClass95_0(WitRequest___c__DisplayClass95_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitRequest___c__DisplayClass95_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitRequest___c__DisplayClass95_0(WitRequest___c__DisplayClass95_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25555};

/// @brief Field e, offset: 0x10, size: 0x8, def value: None
 ::System::Net::WebException*  ___e;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::WitRequest*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::WitRequest___c__DisplayClass95_0, ___e) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest___c__DisplayClass95_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::WitRequest___c__DisplayClass95_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.WitRequest/<>c__DisplayClass94_0
class CORDL_TYPE WitRequest___c__DisplayClass94_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::WitAi::WitRequest*  __4__this;

/// @brief Field error, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_error, put=__cordl_internal_set_error)) ::StringW  error;

static inline ::Meta::WitAi::WitRequest___c__DisplayClass94_0* New_ctor() ;

/// @brief Method <WaitForTimeout>b__0, addr 0x9e7c484, size 0x2c, virtual false, abstract: false, final false
inline void _WaitForTimeout_b__0() ;

constexpr ::Meta::WitAi::WitRequest* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::WitAi::WitRequest*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_error() const;

constexpr ::StringW& __cordl_internal_get_error() ;

constexpr void __cordl_internal_set___4__this(::Meta::WitAi::WitRequest*  value) ;

constexpr void __cordl_internal_set_error(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e7c47c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitRequest___c__DisplayClass94_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitRequest___c__DisplayClass94_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitRequest___c__DisplayClass94_0(WitRequest___c__DisplayClass94_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitRequest___c__DisplayClass94_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitRequest___c__DisplayClass94_0(WitRequest___c__DisplayClass94_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25554};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::WitRequest*  _____4__this;

/// @brief Field error, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::WitRequest___c__DisplayClass94_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest___c__DisplayClass94_0, ___error) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::WitRequest___c__DisplayClass94_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.WitRequest/<>c__DisplayClass101_0
class CORDL_TYPE WitRequest___c__DisplayClass101_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::WitAi::WitRequest*  __4__this;

/// @brief Field rawResponse, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_rawResponse, put=__cordl_internal_set_rawResponse)) ::StringW  rawResponse;

static inline ::Meta::WitAi::WitRequest___c__DisplayClass101_0* New_ctor() ;

/// @brief Method <OnRawResponse>b__0, addr 0x9e7c430, size 0x4c, virtual false, abstract: false, final false
inline void _OnRawResponse_b__0() ;

constexpr ::Meta::WitAi::WitRequest* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::WitAi::WitRequest*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_rawResponse() const;

constexpr ::StringW& __cordl_internal_get_rawResponse() ;

constexpr void __cordl_internal_set___4__this(::Meta::WitAi::WitRequest*  value) ;

constexpr void __cordl_internal_set_rawResponse(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e7b84c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitRequest___c__DisplayClass101_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitRequest___c__DisplayClass101_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitRequest___c__DisplayClass101_0(WitRequest___c__DisplayClass101_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitRequest___c__DisplayClass101_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitRequest___c__DisplayClass101_0(WitRequest___c__DisplayClass101_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25553};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::WitRequest*  _____4__this;

/// @brief Field rawResponse, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___rawResponse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::WitRequest___c__DisplayClass101_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitRequest___c__DisplayClass101_0, ___rawResponse) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::WitRequest___c__DisplayClass101_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi
// Dependencies System.MulticastDelegate
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.WitRequest/PreSendRequestDelegate
class CORDL_TYPE WitRequest_PreSendRequestDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x9e7c1c8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::System::Uri*>  src_uri, ::by_ref<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>  headers) ;

static inline ::Meta::WitAi::WitRequest_PreSendRequestDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9e7c114, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitRequest_PreSendRequestDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitRequest_PreSendRequestDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitRequest_PreSendRequestDelegate(WitRequest_PreSendRequestDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitRequest_PreSendRequestDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitRequest_PreSendRequestDelegate(WitRequest_PreSendRequestDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25551};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::WitRequest_PreSendRequestDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::WitAi
// Dependencies System.MulticastDelegate
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.WitRequest/OnCustomizeUriEvent
class CORDL_TYPE WitRequest_OnCustomizeUriEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x9e7c100, size 0x14, virtual true, abstract: false, final false
inline ::System::Uri* Invoke(::System::UriBuilder*  uriBuilder) ;

static inline ::Meta::WitAi::WitRequest_OnCustomizeUriEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9e7bff8, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitRequest_OnCustomizeUriEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitRequest_OnCustomizeUriEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitRequest_OnCustomizeUriEvent(WitRequest_OnCustomizeUriEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitRequest_OnCustomizeUriEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitRequest_OnCustomizeUriEvent(WitRequest_OnCustomizeUriEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25550};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::WitRequest_OnCustomizeUriEvent) == 0x80, "Size mismatch!");

} // namespace end def Meta::WitAi
// Dependencies System.MulticastDelegate
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent
class CORDL_TYPE WitRequest_OnProvideCustomHeadersEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x9e7bfe4, size 0x14, virtual true, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Invoke() ;

static inline ::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9e7bf48, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitRequest_OnProvideCustomHeadersEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitRequest_OnProvideCustomHeadersEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitRequest_OnProvideCustomHeadersEvent(WitRequest_OnProvideCustomHeadersEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitRequest_OnProvideCustomHeadersEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitRequest_OnProvideCustomHeadersEvent(WitRequest_OnProvideCustomHeadersEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25549};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent) == 0x80, "Size mismatch!");

} // namespace end def Meta::WitAi
