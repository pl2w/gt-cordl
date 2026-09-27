#pragma once
// IWYU pragma private; include "Oculus/Voice/AppVoiceExperience.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/zzzz__VoiceService_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AppVoiceExperience)
namespace GlobalNamespace {
struct AppVoiceExperience__Activate_d__37;
}
namespace Meta::WitAi::Configuration {
class WitRequestOptions;
}
namespace Meta::WitAi::Configuration {
class WitRuntimeConfiguration;
}
namespace Meta::WitAi::Data::Configuration {
class WitConfiguration;
}
namespace Meta::WitAi::Interfaces {
class ITranscriptionProvider;
}
namespace Meta::WitAi::Interfaces {
class IWitConfigurationProvider;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequestEvents;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequest;
}
namespace Meta::WitAi {
class IVoiceService;
}
namespace Meta::WitAi {
class IWitRuntimeConfigProvider;
}
namespace Oculus::Voice::Core::Bindings::Interfaces {
class IVoiceSDKLogger;
}
namespace Oculus::Voice {
class AppVoiceExperience__RetryInit_d__47;
}
namespace Oculus::Voice {
class AppVoiceExperience___c__DisplayClass37_0;
}
namespace Oculus::Voice {
class AppVoiceExperience___c__DisplayClass37_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Oculus::Voice {
class AppVoiceExperience;
}
namespace Oculus::Voice {
class AppVoiceExperience__RetryInit_d__47;
}
namespace Oculus::Voice {
class AppVoiceExperience___c__DisplayClass37_0;
}
namespace Oculus::Voice {
class AppVoiceExperience___c__DisplayClass37_1;
}
// Write type traits
MARK_REF_T(::Oculus::Voice::AppVoiceExperience*);
MARK_REF_T(::Oculus::Voice::AppVoiceExperience__RetryInit_d__47*);
MARK_REF_T(::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0*);
MARK_REF_T(::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1*);
DEFINE_IL2CPP_CLASS(::Oculus::Voice::AppVoiceExperience*, "Oculus.Voice", "AppVoiceExperience");
DEFINE_IL2CPP_CLASS(::Oculus::Voice::AppVoiceExperience__RetryInit_d__47*, "Oculus.Voice", "AppVoiceExperience/<RetryInit>d__47");
DEFINE_IL2CPP_CLASS(::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0*, "Oculus.Voice", "AppVoiceExperience/<>c__DisplayClass37_0");
DEFINE_IL2CPP_CLASS(::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1*, "Oculus.Voice", "AppVoiceExperience/<>c__DisplayClass37_1");
// [HelpURL("https://developer.oculus.com/experimental/voice-sdk/tutorial-overview/")]
// Dependencies Meta.WitAi.VoiceService
namespace Oculus::Voice {
// Is value type: false
// CS Name: Oculus.Voice.AppVoiceExperience
class CORDL_TYPE AppVoiceExperience : public ::Meta::WitAi::VoiceService {
public:
// Declarations
using _Activate_d__37 = ::GlobalNamespace::AppVoiceExperience__Activate_d__37;

using _RetryInit_d__47 = ::Oculus::Voice::AppVoiceExperience__RetryInit_d__47;

using __c__DisplayClass37_0 = ::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0;

using __c__DisplayClass37_1 = ::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1;

 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_Configuration)) ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  Configuration;

 __declspec(property(get=get_EnableConsoleLogging)) bool  EnableConsoleLogging;

 __declspec(property(get=get_HasPlatformIntegrations)) bool  HasPlatformIntegrations;

 __declspec(property(get=get_Initialized)) bool  Initialized;

 __declspec(property(get=get_IsRequestActive)) bool  IsRequestActive;

 __declspec(property(get=get_MicActive)) bool  MicActive;

/// @brief Field OnInitialized, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnInitialized, put=__cordl_internal_set_OnInitialized)) ::System::Action*  OnInitialized;

 __declspec(property(get=get_RuntimeConfiguration, put=set_RuntimeConfiguration)) ::Meta::WitAi::Configuration::WitRuntimeConfiguration*  RuntimeConfiguration;

 __declspec(property(get=get_ShouldSendMicData)) bool  ShouldSendMicData;

 __declspec(property(get=get_TranscriptionProvider, put=set_TranscriptionProvider)) ::Meta::WitAi::Interfaces::ITranscriptionProvider*  TranscriptionProvider;

 __declspec(property(get=get_UsePlatformIntegrations, put=set_UsePlatformIntegrations)) bool  UsePlatformIntegrations;

/// @brief Field enableConsoleLogging, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableConsoleLogging, put=__cordl_internal_set_enableConsoleLogging)) bool  enableConsoleLogging;

/// @brief Field sendTranscriptionEventsForMessages, offset 0x7a, size 0x1 
 __declspec(property(get=__cordl_internal_get_sendTranscriptionEventsForMessages, put=__cordl_internal_set_sendTranscriptionEventsForMessages)) bool  sendTranscriptionEventsForMessages;

/// @brief Field usePlatformServices, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_usePlatformServices, put=__cordl_internal_set_usePlatformServices)) bool  usePlatformServices;

/// @brief Field voiceSDKLoggerImpl, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceSDKLoggerImpl, put=__cordl_internal_set_voiceSDKLoggerImpl)) ::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger*  voiceSDKLoggerImpl;

/// @brief Field voiceServiceImpl, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceServiceImpl, put=__cordl_internal_set_voiceServiceImpl)) ::Meta::WitAi::IVoiceService*  voiceServiceImpl;

/// @brief Field witRuntimeConfiguration, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_witRuntimeConfiguration, put=__cordl_internal_set_witRuntimeConfiguration)) ::Meta::WitAi::Configuration::WitRuntimeConfiguration*  witRuntimeConfiguration;

/// @brief Convert operator to "::Meta::WitAi::IWitRuntimeConfigProvider"
constexpr operator  ::Meta::WitAi::IWitRuntimeConfigProvider*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IWitConfigurationProvider"
constexpr operator  ::Meta::WitAi::Interfaces::IWitConfigurationProvider*() noexcept;

/// @brief Method Activate, addr 0xb945928, size 0x268, virtual true, abstract: false, final false
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Activate(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// [AsyncStateMachine(typeof(Oculus.Voice.AppVoiceExperience::<Activate>d__37))]
/// @brief Method Activate, addr 0xb945674, size 0x150, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* Activate(::StringW  text, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method ActivateImmediately, addr 0xb945b90, size 0x268, virtual true, abstract: false, final false
inline ::Meta::WitAi::Requests::VoiceServiceRequest* ActivateImmediately(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method CanActivateAudio, addr 0xb9457c4, size 0xc0, virtual true, abstract: false, final false
inline bool CanActivateAudio() ;

/// @brief Method CanSend, addr 0xb9455b4, size 0xc0, virtual true, abstract: false, final false
inline bool CanSend() ;

/// @brief Method Deactivate, addr 0xb945df8, size 0xac, virtual true, abstract: false, final false
inline void Deactivate() ;

/// @brief Method DeactivateAndAbortRequest, addr 0xb945ea4, size 0xac, virtual true, abstract: false, final false
inline void DeactivateAndAbortRequest() ;

/// @brief Method GetActivateAudioError, addr 0xb945884, size 0xa4, virtual true, abstract: false, final false
inline ::StringW GetActivateAudioError() ;

/// @brief Method InitVoiceSDK, addr 0xb944bc0, size 0x9f4, virtual false, abstract: false, final false
inline void InitVoiceSDK() ;

static inline ::Oculus::Voice::AppVoiceExperience* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0xb9468d8, size 0x4c, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  hasFocus) ;

/// @brief Method OnAudioDurationTrackerFinished, addr 0xb94769c, size 0x1b4, virtual false, abstract: false, final false
inline void OnAudioDurationTrackerFinished(int64_t  timestamp, double_t  audioDuration) ;

/// @brief Method OnDisable, addr 0xb946544, size 0x394, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb9461c0, size 0x2f0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnMicDataSent, addr 0xb9475dc, size 0xc0, virtual false, abstract: false, final false
inline void OnMicDataSent() ;

/// @brief Method OnMinimumWakeThresholdHit, addr 0xb9472dc, size 0xc0, virtual false, abstract: false, final false
inline void OnMinimumWakeThresholdHit() ;

/// @brief Method OnRequestComplete, addr 0xb947a34, size 0x208, virtual true, abstract: false, final false
inline void OnRequestComplete(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method OnRequestFullTranscription, addr 0xb9471f8, size 0xe4, virtual true, abstract: false, final false
inline void OnRequestFullTranscription(::Meta::WitAi::Requests::VoiceServiceRequest*  request, ::StringW  transcription) ;

/// @brief Method OnRequestInit, addr 0xb946924, size 0x4d0, virtual true, abstract: false, final false
inline void OnRequestInit(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method OnRequestPartialTranscription, addr 0xb947130, size 0xc8, virtual true, abstract: false, final false
inline void OnRequestPartialTranscription(::Meta::WitAi::Requests::VoiceServiceRequest*  request, ::StringW  transcription) ;

/// @brief Method OnRequestSend, addr 0xb946f9c, size 0x194, virtual true, abstract: false, final false
inline void OnRequestSend(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method OnRequestStartListening, addr 0xb946df4, size 0xd4, virtual true, abstract: false, final false
inline void OnRequestStartListening(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method OnRequestStopListening, addr 0xb946ec8, size 0xd4, virtual true, abstract: false, final false
inline void OnRequestStopListening(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method OnRequestSuccess, addr 0xb947850, size 0x1e4, virtual true, abstract: false, final false
inline void OnRequestSuccess(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method OnStoppedListeningDueToDeactivation, addr 0xb94751c, size 0xc0, virtual false, abstract: false, final false
inline void OnStoppedListeningDueToDeactivation() ;

/// @brief Method OnStoppedListeningDueToInactivity, addr 0xb94745c, size 0xc0, virtual false, abstract: false, final false
inline void OnStoppedListeningDueToInactivity() ;

/// @brief Method OnStoppedListeningDueToTimeout, addr 0xb94739c, size 0xc0, virtual false, abstract: false, final false
inline void OnStoppedListeningDueToTimeout() ;

/// [IteratorStateMachine(typeof(Oculus.Voice.AppVoiceExperience::<RetryInit>d__47))]
/// @brief Method RetryInit, addr 0xb9464b0, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RetryInit() ;

/// @brief Method RevertToWitUnity, addr 0xb946074, size 0x14c, virtual false, abstract: false, final false
inline void RevertToWitUnity() ;

/// [CompilerGenerated]
/// @brief Method <InitVoiceSDK>b__44_0, addr 0xb947c44, size 0x4, virtual false, abstract: false, final false
inline void _InitVoiceSDK_b__44_0() ;

constexpr ::System::Action* const& __cordl_internal_get_OnInitialized() const;

constexpr ::System::Action*& __cordl_internal_get_OnInitialized() ;

constexpr bool const& __cordl_internal_get_enableConsoleLogging() const;

constexpr bool& __cordl_internal_get_enableConsoleLogging() ;

constexpr bool const& __cordl_internal_get_sendTranscriptionEventsForMessages() const;

constexpr bool& __cordl_internal_get_sendTranscriptionEventsForMessages() ;

constexpr bool const& __cordl_internal_get_usePlatformServices() const;

constexpr bool& __cordl_internal_get_usePlatformServices() ;

constexpr ::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger* const& __cordl_internal_get_voiceSDKLoggerImpl() const;

constexpr ::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger*& __cordl_internal_get_voiceSDKLoggerImpl() ;

constexpr ::Meta::WitAi::IVoiceService* const& __cordl_internal_get_voiceServiceImpl() const;

constexpr ::Meta::WitAi::IVoiceService*& __cordl_internal_get_voiceServiceImpl() ;

constexpr ::Meta::WitAi::Configuration::WitRuntimeConfiguration* const& __cordl_internal_get_witRuntimeConfiguration() const;

constexpr ::Meta::WitAi::Configuration::WitRuntimeConfiguration*& __cordl_internal_get_witRuntimeConfiguration() ;

constexpr void __cordl_internal_set_OnInitialized(::System::Action*  value) ;

constexpr void __cordl_internal_set_enableConsoleLogging(bool  value) ;

constexpr void __cordl_internal_set_sendTranscriptionEventsForMessages(bool  value) ;

constexpr void __cordl_internal_set_usePlatformServices(bool  value) ;

constexpr void __cordl_internal_set_voiceSDKLoggerImpl(::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger*  value) ;

constexpr void __cordl_internal_set_voiceServiceImpl(::Meta::WitAi::IVoiceService*  value) ;

constexpr void __cordl_internal_set_witRuntimeConfiguration(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  value) ;

/// @brief Method .ctor, addr 0xb947c3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnInitialized, addr 0xb944514, size 0x9c, virtual false, abstract: false, final false
inline void add_OnInitialized(::System::Action*  value) ;

/// @brief Method get_Active, addr 0xb94464c, size 0xc4, virtual true, abstract: false, final false
inline bool get_Active() ;

/// @brief Method get_Configuration, addr 0xb9443e8, size 0x18, virtual true, abstract: false, final true
inline ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> get_Configuration() ;

/// @brief Method get_EnableConsoleLogging, addr 0xb944aac, size 0x8, virtual false, abstract: false, final false
inline bool get_EnableConsoleLogging() ;

/// @brief Method get_HasPlatformIntegrations, addr 0xb944a28, size 0x84, virtual false, abstract: false, final false
inline bool get_HasPlatformIntegrations() ;

/// @brief Method get_Initialized, addr 0xb944504, size 0x10, virtual false, abstract: false, final false
inline bool get_Initialized() ;

/// @brief Method get_IsRequestActive, addr 0xb944710, size 0xc4, virtual true, abstract: false, final false
inline bool get_IsRequestActive() ;

/// @brief Method get_MicActive, addr 0xb944938, size 0xb0, virtual true, abstract: false, final false
inline bool get_MicActive() ;

/// @brief Method get_PACKAGE_VERSION, addr 0xb944400, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW get_PACKAGE_VERSION() ;

/// @brief Method get_RuntimeConfiguration, addr 0xb944304, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Configuration::WitRuntimeConfiguration* get_RuntimeConfiguration() ;

/// @brief Method get_ShouldSendMicData, addr 0xb9449e8, size 0x40, virtual true, abstract: false, final false
inline bool get_ShouldSendMicData() ;

/// @brief Method get_TranscriptionProvider, addr 0xb9447d4, size 0xb0, virtual true, abstract: false, final false
inline ::Meta::WitAi::Interfaces::ITranscriptionProvider* get_TranscriptionProvider() ;

/// @brief Method get_UsePlatformIntegrations, addr 0xb944ab4, size 0x8, virtual true, abstract: false, final false
inline bool get_UsePlatformIntegrations() ;

/// @brief Convert to "::Meta::WitAi::IWitRuntimeConfigProvider"
constexpr ::Meta::WitAi::IWitRuntimeConfigProvider* i___Meta__WitAi__IWitRuntimeConfigProvider() noexcept;

/// @brief Convert to "::Meta::WitAi::Interfaces::IWitConfigurationProvider"
constexpr ::Meta::WitAi::Interfaces::IWitConfigurationProvider* i___Meta__WitAi__Interfaces__IWitConfigurationProvider() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnInitialized, addr 0xb9445b0, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnInitialized(::System::Action*  value) ;

/// @brief Method set_RuntimeConfiguration, addr 0xb94430c, size 0xdc, virtual false, abstract: false, final false
inline void set_RuntimeConfiguration(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  value) ;

/// @brief Method set_TranscriptionProvider, addr 0xb944884, size 0xb4, virtual true, abstract: false, final false
inline void set_TranscriptionProvider(::Meta::WitAi::Interfaces::ITranscriptionProvider*  value) ;

/// @brief Method set_UsePlatformIntegrations, addr 0xb944abc, size 0x104, virtual true, abstract: false, final false
inline void set_UsePlatformIntegrations(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppVoiceExperience() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppVoiceExperience", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AppVoiceExperience(AppVoiceExperience && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppVoiceExperience", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppVoiceExperience(AppVoiceExperience const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31692};

/// [SerializeField]
/// @brief Field witRuntimeConfiguration, offset: 0x70, size: 0x8, def value: None
 ::Meta::WitAi::Configuration::WitRuntimeConfiguration*  ___witRuntimeConfiguration;

/// [Tooltip("Uses platform services to access wit.ai instead of accessing wit directly from within the application.")]
/// [SerializeField]
/// @brief Field usePlatformServices, offset: 0x78, size: 0x1, def value: None
 bool  ___usePlatformServices;

/// [Tooltip("Enables logs related to the interaction to be displayed on console")]
/// [SerializeField]
/// @brief Field enableConsoleLogging, offset: 0x79, size: 0x1, def value: None
 bool  ___enableConsoleLogging;

/// [Tooltip("If true, the OnFullTranscriptionEvent events will be triggered when calling Activate(string)")]
/// [SerializeField]
/// @brief Field sendTranscriptionEventsForMessages, offset: 0x7a, size: 0x1, def value: None
 bool  ___sendTranscriptionEventsForMessages;

/// @brief Field voiceServiceImpl, offset: 0x80, size: 0x8, def value: None
 ::Meta::WitAi::IVoiceService*  ___voiceServiceImpl;

/// @brief Field voiceSDKLoggerImpl, offset: 0x88, size: 0x8, def value: None
 ::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger*  ___voiceSDKLoggerImpl;

/// [CompilerGenerated]
/// @brief Field OnInitialized, offset: 0x90, size: 0x8, def value: None
 ::System::Action*  ___OnInitialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Voice::AppVoiceExperience, ___witRuntimeConfiguration) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::AppVoiceExperience, ___usePlatformServices) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::AppVoiceExperience, ___enableConsoleLogging) == 0x79, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::AppVoiceExperience, ___sendTranscriptionEventsForMessages) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::AppVoiceExperience, ___voiceServiceImpl) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::AppVoiceExperience, ___voiceSDKLoggerImpl) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::AppVoiceExperience, ___OnInitialized) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Oculus::Voice::AppVoiceExperience) == 0x98, "Size mismatch!");

} // namespace end def Oculus::Voice
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Voice {
// Is value type: false
// CS Name: Oculus.Voice.AppVoiceExperience/<RetryInit>d__47
class CORDL_TYPE AppVoiceExperience__RetryInit_d__47 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Voice::AppVoiceExperience>  __4__this;

/// @brief Field <waitSeconds>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__waitSeconds_5__2, put=__cordl_internal_set__waitSeconds_5__2)) int32_t  _waitSeconds_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb94843c, size 0x174, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Voice::AppVoiceExperience__RetryInit_d__47* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xb9485b0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb9485b8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb9485f0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb948438, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Oculus::Voice::AppVoiceExperience> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Voice::AppVoiceExperience>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__waitSeconds_5__2() const;

constexpr int32_t& __cordl_internal_get__waitSeconds_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Voice::AppVoiceExperience>  value) ;

constexpr void __cordl_internal_set__waitSeconds_5__2(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb94651c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppVoiceExperience__RetryInit_d__47() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppVoiceExperience__RetryInit_d__47", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AppVoiceExperience__RetryInit_d__47(AppVoiceExperience__RetryInit_d__47 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppVoiceExperience__RetryInit_d__47", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppVoiceExperience__RetryInit_d__47(AppVoiceExperience__RetryInit_d__47 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31691};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Voice::AppVoiceExperience>  _____4__this;

/// @brief Field <waitSeconds>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____waitSeconds_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Voice::AppVoiceExperience__RetryInit_d__47, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::AppVoiceExperience__RetryInit_d__47, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::AppVoiceExperience__RetryInit_d__47, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::AppVoiceExperience__RetryInit_d__47, ____waitSeconds_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Voice::AppVoiceExperience__RetryInit_d__47) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Voice
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Voice {
// Is value type: false
// CS Name: Oculus.Voice.AppVoiceExperience/<>c__DisplayClass37_1
class CORDL_TYPE AppVoiceExperience___c__DisplayClass37_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0*  CS$__8__locals1;

/// @brief Field request, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::Meta::WitAi::Requests::VoiceServiceRequest*  request;

static inline ::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1* New_ctor() ;

/// @brief Method <Activate>b__1, addr 0xb947ce8, size 0xd0, virtual false, abstract: false, final false
inline void _Activate_b__1(::Meta::WitAi::Requests::VoiceServiceRequest*  r) ;

constexpr ::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::Meta::WitAi::Requests::VoiceServiceRequest* const& __cordl_internal_get_request() const;

constexpr ::Meta::WitAi::Requests::VoiceServiceRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0*  value) ;

constexpr void __cordl_internal_set_request(::Meta::WitAi::Requests::VoiceServiceRequest*  value) ;

/// @brief Method .ctor, addr 0xb947ce0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppVoiceExperience___c__DisplayClass37_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppVoiceExperience___c__DisplayClass37_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AppVoiceExperience___c__DisplayClass37_1(AppVoiceExperience___c__DisplayClass37_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppVoiceExperience___c__DisplayClass37_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppVoiceExperience___c__DisplayClass37_1(AppVoiceExperience___c__DisplayClass37_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31689};

/// @brief Field request, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VoiceServiceRequest*  ___request;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1, ___request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Voice
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Voice {
// Is value type: false
// CS Name: Oculus.Voice.AppVoiceExperience/<>c__DisplayClass37_0
class CORDL_TYPE AppVoiceExperience___c__DisplayClass37_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Voice::AppVoiceExperience>  __4__this;

/// @brief Field text, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::StringW  text;

static inline ::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0* New_ctor() ;

/// @brief Method <Activate>b__0, addr 0xb947c50, size 0x90, virtual false, abstract: false, final false
inline void _Activate_b__0(::Meta::WitAi::Json::WitResponseNode*  r) ;

constexpr ::UnityW<::Oculus::Voice::AppVoiceExperience> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Voice::AppVoiceExperience>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_text() const;

constexpr ::StringW& __cordl_internal_get_text() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Voice::AppVoiceExperience>  value) ;

constexpr void __cordl_internal_set_text(::StringW  value) ;

/// @brief Method .ctor, addr 0xb947c48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppVoiceExperience___c__DisplayClass37_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppVoiceExperience___c__DisplayClass37_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AppVoiceExperience___c__DisplayClass37_0(AppVoiceExperience___c__DisplayClass37_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppVoiceExperience___c__DisplayClass37_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppVoiceExperience___c__DisplayClass37_0(AppVoiceExperience___c__DisplayClass37_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31688};

/// @brief Field text, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___text;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Oculus::Voice::AppVoiceExperience>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0, ___text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Voice
