#pragma once
// IWYU pragma private; include "Oculus/Voice/Bindings/Android/VoiceSDKListenerBinding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceSDKListenerBinding)
namespace GlobalNamespace {
struct VoiceSDKListenerBinding_StoppedListeningReason;
}
namespace Meta::WitAi::Events {
class TelemetryEvents;
}
namespace Meta::WitAi::Events {
class VoiceEvents;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequest;
}
namespace Meta::WitAi {
class IVoiceService;
}
namespace Oculus::Voice::Bindings::Android {
class IVCBindingEvents;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Oculus::Voice::Bindings::Android {
class VoiceSDKListenerBinding;
}
// Write type traits
MARK_REF_T(::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*);
DEFINE_IL2CPP_CLASS(::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*, "Oculus.Voice.Bindings.Android", "VoiceSDKListenerBinding");
// Dependencies UnityEngine.AndroidJavaProxy
namespace Oculus::Voice::Bindings::Android {
// Is value type: false
// CS Name: Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding
class CORDL_TYPE VoiceSDKListenerBinding : public ::UnityEngine::AndroidJavaProxy {
public:
// Declarations
using StoppedListeningReason = ::GlobalNamespace::VoiceSDKListenerBinding_StoppedListeningReason;

 __declspec(property(get=get_TelemetryEvents)) ::Meta::WitAi::Events::TelemetryEvents*  TelemetryEvents;

 __declspec(property(get=get_VoiceEvents)) ::Meta::WitAi::Events::VoiceEvents*  VoiceEvents;

/// @brief Field _bindingEvents, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__bindingEvents, put=__cordl_internal_set__bindingEvents)) ::Oculus::Voice::Bindings::Android::IVCBindingEvents*  _bindingEvents;

/// @brief Field _voiceService, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__voiceService, put=__cordl_internal_set__voiceService)) ::Meta::WitAi::IVoiceService*  _voiceService;

/// @brief Method GetRequest, addr 0xb94d5f4, size 0x238, virtual false, abstract: false, final false
inline ::Meta::WitAi::Requests::VoiceServiceRequest* GetRequest(::StringW  requestId) ;

/// @brief Method NativeTimestampToDateTime, addr 0xb94e13c, size 0x9c, virtual false, abstract: false, final false
inline ::System::DateTime NativeTimestampToDateTime(int64_t  javaTimestamp) ;

static inline ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding* New_ctor(::Meta::WitAi::IVoiceService*  voiceService, ::Oculus::Voice::Bindings::Android::IVCBindingEvents*  bindingEvents) ;

constexpr ::Oculus::Voice::Bindings::Android::IVCBindingEvents* const& __cordl_internal_get__bindingEvents() const;

constexpr ::Oculus::Voice::Bindings::Android::IVCBindingEvents*& __cordl_internal_get__bindingEvents() ;

constexpr ::Meta::WitAi::IVoiceService* const& __cordl_internal_get__voiceService() const;

constexpr ::Meta::WitAi::IVoiceService*& __cordl_internal_get__voiceService() ;

constexpr void __cordl_internal_set__bindingEvents(::Oculus::Voice::Bindings::Android::IVCBindingEvents*  value) ;

constexpr void __cordl_internal_set__voiceService(::Meta::WitAi::IVoiceService*  value) ;

/// @brief Method .ctor, addr 0xb94c544, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Meta::WitAi::IVoiceService*  voiceService, ::Oculus::Voice::Bindings::Android::IVCBindingEvents*  bindingEvents) ;

/// @brief Method get_TelemetryEvents, addr 0xb94d550, size 0xa4, virtual false, abstract: false, final false
inline ::Meta::WitAi::Events::TelemetryEvents* get_TelemetryEvents() ;

/// @brief Method get_VoiceEvents, addr 0xb94c5e4, size 0xa4, virtual false, abstract: false, final false
inline ::Meta::WitAi::Events::VoiceEvents* get_VoiceEvents() ;

/// @brief Method onAborted, addr 0xb94dcc4, size 0x8, virtual false, abstract: false, final false
inline void onAborted() ;

/// @brief Method onAborted, addr 0xb94dc30, size 0x94, virtual false, abstract: false, final false
inline void onAborted(::StringW  requestId) ;

/// @brief Method onAudioDurationTrackerFinished, addr 0xb94e054, size 0xe8, virtual false, abstract: false, final false
inline void onAudioDurationTrackerFinished(int64_t  timestamp, double_t  duration) ;

/// @brief Method onError, addr 0xb94dd74, size 0x8, virtual false, abstract: false, final false
inline void onError(::StringW  error, ::StringW  message, ::StringW  errorBody) ;

/// @brief Method onError, addr 0xb94dccc, size 0xa8, virtual false, abstract: false, final false
inline void onError(::StringW  error, ::StringW  message, ::StringW  errorBody, ::StringW  requestId) ;

/// @brief Method onFullTranscription, addr 0xb94db74, size 0x8, virtual false, abstract: false, final false
inline void onFullTranscription(::StringW  transcription) ;

/// @brief Method onFullTranscription, addr 0xb94dac8, size 0xac, virtual false, abstract: false, final false
inline void onFullTranscription(::StringW  transcription, ::StringW  requestId) ;

/// @brief Method onMicDataSent, addr 0xb94dedc, size 0x4, virtual false, abstract: false, final false
inline void onMicDataSent() ;

/// @brief Method onMicDataSent, addr 0xb94deb0, size 0x2c, virtual false, abstract: false, final false
inline void onMicDataSent(::StringW  requestId) ;

/// @brief Method onMicLevelChanged, addr 0xb94deac, size 0x4, virtual false, abstract: false, final false
inline void onMicLevelChanged(float_t  level) ;

/// @brief Method onMicLevelChanged, addr 0xb94de30, size 0x7c, virtual false, abstract: false, final false
inline void onMicLevelChanged(float_t  level, ::StringW  requestId) ;

/// @brief Method onMinimumWakeThresholdHit, addr 0xb94df0c, size 0x4, virtual false, abstract: false, final false
inline void onMinimumWakeThresholdHit() ;

/// @brief Method onMinimumWakeThresholdHit, addr 0xb94dee0, size 0x2c, virtual false, abstract: false, final false
inline void onMinimumWakeThresholdHit(::StringW  requestId) ;

/// @brief Method onPartialResponse, addr 0xb94dc28, size 0x8, virtual false, abstract: false, final false
inline void onPartialResponse(::StringW  responseJson) ;

/// @brief Method onPartialResponse, addr 0xb94db7c, size 0xac, virtual false, abstract: false, final false
inline void onPartialResponse(::StringW  responseJson, ::StringW  requestId) ;

/// @brief Method onPartialTranscription, addr 0xb94dac0, size 0x8, virtual false, abstract: false, final false
inline void onPartialTranscription(::StringW  transcription) ;

/// @brief Method onPartialTranscription, addr 0xb94da14, size 0xac, virtual false, abstract: false, final false
inline void onPartialTranscription(::StringW  transcription, ::StringW  requestId) ;

/// @brief Method onRequestCompleted, addr 0xb94df14, size 0x4, virtual false, abstract: false, final false
inline void onRequestCompleted() ;

/// @brief Method onRequestCompleted, addr 0xb94df10, size 0x4, virtual false, abstract: false, final false
inline void onRequestCompleted(::StringW  requestId) ;

/// @brief Method onRequestCreated, addr 0xb94da0c, size 0x8, virtual false, abstract: false, final false
inline void onRequestCreated() ;

/// @brief Method onRequestCreated, addr 0xb94d980, size 0x8c, virtual false, abstract: false, final false
inline void onRequestCreated(::StringW  requestId) ;

/// @brief Method onResponse, addr 0xb94de28, size 0x8, virtual false, abstract: false, final false
inline void onResponse(::StringW  responseJson) ;

/// @brief Method onResponse, addr 0xb94dd7c, size 0xac, virtual false, abstract: false, final false
inline void onResponse(::StringW  responseJson, ::StringW  requestId) ;

/// @brief Method onServiceNotAvailable, addr 0xb94df18, size 0x13c, virtual false, abstract: false, final false
inline void onServiceNotAvailable(::StringW  error, ::StringW  message) ;

/// @brief Method onStartListening, addr 0xb94d858, size 0x4, virtual false, abstract: false, final false
inline void onStartListening() ;

/// @brief Method onStartListening, addr 0xb94d82c, size 0x2c, virtual false, abstract: false, final false
inline void onStartListening(::StringW  requestId) ;

/// @brief Method onStoppedListening, addr 0xb94d978, size 0x8, virtual false, abstract: false, final false
inline void onStoppedListening(int32_t  reason) ;

/// @brief Method onStoppedListening, addr 0xb94d85c, size 0x11c, virtual false, abstract: false, final false
inline void onStoppedListening(int32_t  reason, ::StringW  requestId) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceSDKListenerBinding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKListenerBinding", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceSDKListenerBinding(VoiceSDKListenerBinding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKListenerBinding", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceSDKListenerBinding(VoiceSDKListenerBinding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31704};

/// @brief Field _voiceService, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::IVoiceService*  ____voiceService;

/// @brief Field _bindingEvents, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Voice::Bindings::Android::IVCBindingEvents*  ____bindingEvents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding, ____voiceService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding, ____bindingEvents) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Voice::Bindings::Android
