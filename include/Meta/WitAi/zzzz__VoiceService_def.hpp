#pragma once
// IWYU pragma private; include "Meta/WitAi/VoiceService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/zzzz__BaseSpeechService_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VoiceService)
namespace GlobalNamespace {
struct VoiceService__InitializeConduit_d__59;
}
namespace GlobalNamespace {
struct __c__DisplayClass39_0_VoiceService___Activate_b__0_d;
}
namespace Meta::Conduit {
class IConduitDispatcher;
}
namespace Meta::Conduit {
class IInstanceResolver;
}
namespace Meta::Conduit {
class IParameterProvider;
}
namespace Meta::WitAi::Configuration {
class WitRequestOptions;
}
namespace Meta::WitAi::Data::Configuration {
class WitConfiguration;
}
namespace Meta::WitAi::Data::Intents {
class WitIntentData;
}
namespace Meta::WitAi::Data {
class VoiceSession;
}
namespace Meta::WitAi::Events {
class SpeechEvents;
}
namespace Meta::WitAi::Events {
class TelemetryEvents;
}
namespace Meta::WitAi::Events {
class VoiceEvents;
}
namespace Meta::WitAi::Interfaces {
class IAudioEventProvider;
}
namespace Meta::WitAi::Interfaces {
class IAudioInputEvents;
}
namespace Meta::WitAi::Interfaces {
class ITranscriptionEvent;
}
namespace Meta::WitAi::Interfaces {
class ITranscriptionProvider;
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
class ITelemetryEventsProvider;
}
namespace Meta::WitAi {
class IVoiceActivationHandler;
}
namespace Meta::WitAi {
class IVoiceEventProvider;
}
namespace Meta::WitAi {
class IVoiceService;
}
namespace Meta::WitAi {
class RegisteredMatchIntent;
}
namespace Meta::WitAi {
class VoiceService___c__DisplayClass39_0;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::WitAi {
class VoiceService;
}
namespace Meta::WitAi {
class VoiceService___c__DisplayClass39_0;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::VoiceService*);
MARK_REF_T(::Meta::WitAi::VoiceService___c__DisplayClass39_0*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::VoiceService*, "Meta.WitAi", "VoiceService");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::VoiceService___c__DisplayClass39_0*, "Meta.WitAi", "VoiceService/<>c__DisplayClass39_0");
// Dependencies Meta.WitAi.BaseSpeechService
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.VoiceService
class CORDL_TYPE VoiceService : public ::Meta::WitAi::BaseSpeechService {
public:
// Declarations
using _InitializeConduit_d__59 = ::GlobalNamespace::VoiceService__InitializeConduit_d__59;

using __c__DisplayClass39_0 = ::Meta::WitAi::VoiceService___c__DisplayClass39_0;

 __declspec(property(get=get_AudioEvents)) ::Meta::WitAi::Interfaces::IAudioInputEvents*  AudioEvents;

 __declspec(property(get=get_ConduitDispatcher, put=set_ConduitDispatcher)) ::Meta::Conduit::IConduitDispatcher*  ConduitDispatcher;

 __declspec(property(get=get_IsRequestActive)) bool  IsRequestActive;

 __declspec(property(get=get_MicActive)) bool  MicActive;

 __declspec(property(get=get_ShouldSendMicData)) bool  ShouldSendMicData;

 __declspec(property(get=get_TelemetryEvents, put=set_TelemetryEvents)) ::Meta::WitAi::Events::TelemetryEvents*  TelemetryEvents;

 __declspec(property(get=get_TranscriptionEvents)) ::Meta::WitAi::Interfaces::ITranscriptionEvent*  TranscriptionEvents;

 __declspec(property(get=get_TranscriptionProvider, put=set_TranscriptionProvider)) ::Meta::WitAi::Interfaces::ITranscriptionProvider*  TranscriptionProvider;

 __declspec(property(get=get_UseConduit)) bool  UseConduit;

 __declspec(property(get=get_UseIntentAttributes)) bool  UseIntentAttributes;

 __declspec(property(get=get_UsePlatformIntegrations, put=set_UsePlatformIntegrations)) bool  UsePlatformIntegrations;

 __declspec(property(get=get_VoiceEvents, put=set_VoiceEvents)) ::Meta::WitAi::Events::VoiceEvents*  VoiceEvents;

 __declspec(property(get=get_WitConfiguration, put=set_WitConfiguration)) ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  WitConfiguration;

/// @brief Field <ConduitDispatcher>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__ConduitDispatcher_k__BackingField, put=__cordl_internal_set__ConduitDispatcher_k__BackingField)) ::Meta::Conduit::IConduitDispatcher*  _ConduitDispatcher_k__BackingField;

/// @brief Field _conduitParameterProvider, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__conduitParameterProvider, put=__cordl_internal_set__conduitParameterProvider)) ::Meta::Conduit::IParameterProvider*  _conduitParameterProvider;

/// @brief Field _waitingForFirstPartialAudio, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__waitingForFirstPartialAudio, put=__cordl_internal_set__waitingForFirstPartialAudio)) bool  _waitingForFirstPartialAudio;

/// @brief Field _witConfiguration, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__witConfiguration, put=__cordl_internal_set__witConfiguration)) ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  _witConfiguration;

/// @brief Field events, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_events, put=__cordl_internal_set_events)) ::Meta::WitAi::Events::VoiceEvents*  events;

/// @brief Field telemetryEvents, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_telemetryEvents, put=__cordl_internal_set_telemetryEvents)) ::Meta::WitAi::Events::TelemetryEvents*  telemetryEvents;

/// @brief Convert operator to "::Meta::Conduit::IInstanceResolver"
constexpr operator  ::Meta::Conduit::IInstanceResolver*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::ITelemetryEventsProvider"
constexpr operator  ::Meta::WitAi::ITelemetryEventsProvider*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::IVoiceActivationHandler"
constexpr operator  ::Meta::WitAi::IVoiceActivationHandler*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::IVoiceEventProvider"
constexpr operator  ::Meta::WitAi::IVoiceEventProvider*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::IVoiceService"
constexpr operator  ::Meta::WitAi::IVoiceService*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IAudioEventProvider"
constexpr operator  ::Meta::WitAi::Interfaces::IAudioEventProvider*() noexcept;

/// @brief Method Activate, addr 0x9e75dd0, size 0xe8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Activate(::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method Activate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Activate(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method Activate, addr 0x9e75b9c, size 0xf0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* Activate(::StringW  text, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method Activate, addr 0x9e75b1c, size 0x80, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* Activate(::StringW  text, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions) ;

/// @brief Method Activate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* Activate(::StringW  text, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method Activate, addr 0x9e75c8c, size 0xcc, virtual false, abstract: false, final false
inline void Activate() ;

/// @brief Method Activate, addr 0x9e75d58, size 0x78, virtual false, abstract: false, final false
inline void Activate(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions) ;

/// @brief Method Activate, addr 0x9e759f0, size 0x124, virtual false, abstract: false, final false
inline void Activate(::StringW  text) ;

/// @brief Method ActivateImmediately, addr 0x9e75ffc, size 0xe8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Requests::VoiceServiceRequest* ActivateImmediately(::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method ActivateImmediately, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Requests::VoiceServiceRequest* ActivateImmediately(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method ActivateImmediately, addr 0x9e75eb8, size 0xcc, virtual false, abstract: false, final false
inline void ActivateImmediately() ;

/// @brief Method ActivateImmediately, addr 0x9e75f84, size 0x78, virtual false, abstract: false, final false
inline void ActivateImmediately(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions) ;

/// @brief Method Awake, addr 0x9e7654c, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ExecuteRegisteredMatch, addr 0x9e77060, size 0x548, virtual false, abstract: false, final false
inline void ExecuteRegisteredMatch(::Meta::WitAi::RegisteredMatchIntent*  registeredMethod, ::Meta::WitAi::Data::Intents::WitIntentData*  intent, ::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method GetObjectsOfType, addr 0x9e764f0, size 0x5c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* GetObjectsOfType(::System::Type*  type) ;

/// @brief Method GetSpeechEvents, addr 0x9e756ec, size 0x10, virtual true, abstract: false, final false
inline ::Meta::WitAi::Events::SpeechEvents* GetSpeechEvents() ;

/// @brief Method GetVoiceSession, addr 0x9e76444, size 0x90, virtual false, abstract: false, final false
inline ::Meta::WitAi::Data::VoiceSession* GetVoiceSession(::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method HandleIntent, addr 0x9e76cf8, size 0x368, virtual false, abstract: false, final false
inline void HandleIntent(::Meta::WitAi::Data::Intents::WitIntentData*  intent, ::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method HandleIntents, addr 0x9e76b40, size 0x7c, virtual false, abstract: false, final false
inline void HandleIntents(::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method HandleResponse, addr 0x9e76b3c, size 0x4, virtual true, abstract: false, final false
inline void HandleResponse(::Meta::WitAi::Json::WitResponseNode*  response) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.VoiceService::<InitializeConduit>d__59))]
/// @brief Method InitializeConduit, addr 0x9e76880, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* InitializeConduit() ;

/// @brief Method InitializeEventListeners, addr 0x9e76550, size 0x140, virtual false, abstract: false, final false
inline void InitializeEventListeners() ;

static inline ::Meta::WitAi::VoiceService* New_ctor() ;

/// @brief Method OnDisable, addr 0x9e76958, size 0x19c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e76690, size 0x1f0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnFinalTranscription, addr 0x9e76af4, size 0x48, virtual true, abstract: false, final false
inline void OnFinalTranscription(::StringW  transcription) ;

/// @brief Method OnRequestPartialResponse, addr 0x9e760e4, size 0x10c, virtual true, abstract: false, final false
inline void OnRequestPartialResponse(::Meta::WitAi::Requests::VoiceServiceRequest*  request, ::Meta::WitAi::Json::WitResponseNode*  responseNode) ;

/// @brief Method OnRequestSend, addr 0x9e761f0, size 0xc, virtual true, abstract: false, final false
inline void OnRequestSend(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method OnValidateEarly, addr 0x9e761fc, size 0x248, virtual true, abstract: false, final false
inline void OnValidateEarly(::Meta::WitAi::Requests::VoiceServiceRequest*  request, ::Meta::WitAi::Json::WitResponseNode*  responseNode) ;

constexpr ::Meta::Conduit::IConduitDispatcher* const& __cordl_internal_get__ConduitDispatcher_k__BackingField() const;

constexpr ::Meta::Conduit::IConduitDispatcher*& __cordl_internal_get__ConduitDispatcher_k__BackingField() ;

constexpr ::Meta::Conduit::IParameterProvider* const& __cordl_internal_get__conduitParameterProvider() const;

constexpr ::Meta::Conduit::IParameterProvider*& __cordl_internal_get__conduitParameterProvider() ;

constexpr bool const& __cordl_internal_get__waitingForFirstPartialAudio() const;

constexpr bool& __cordl_internal_get__waitingForFirstPartialAudio() ;

constexpr ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> const& __cordl_internal_get__witConfiguration() const;

constexpr ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>& __cordl_internal_get__witConfiguration() ;

constexpr ::Meta::WitAi::Events::VoiceEvents* const& __cordl_internal_get_events() const;

constexpr ::Meta::WitAi::Events::VoiceEvents*& __cordl_internal_get_events() ;

constexpr ::Meta::WitAi::Events::TelemetryEvents* const& __cordl_internal_get_telemetryEvents() const;

constexpr ::Meta::WitAi::Events::TelemetryEvents*& __cordl_internal_get_telemetryEvents() ;

constexpr void __cordl_internal_set__ConduitDispatcher_k__BackingField(::Meta::Conduit::IConduitDispatcher*  value) ;

constexpr void __cordl_internal_set__conduitParameterProvider(::Meta::Conduit::IParameterProvider*  value) ;

constexpr void __cordl_internal_set__waitingForFirstPartialAudio(bool  value) ;

constexpr void __cordl_internal_set__witConfiguration(::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  value) ;

constexpr void __cordl_internal_set_events(::Meta::WitAi::Events::VoiceEvents*  value) ;

constexpr void __cordl_internal_set_telemetryEvents(::Meta::WitAi::Events::TelemetryEvents*  value) ;

/// @brief Method .ctor, addr 0x9e7572c, size 0x2c4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AudioEvents, addr 0x9e7570c, size 0x10, virtual true, abstract: false, final true
inline ::Meta::WitAi::Interfaces::IAudioInputEvents* get_AudioEvents() ;

/// [CompilerGenerated]
/// @brief Method get_ConduitDispatcher, addr 0x9e75678, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Conduit::IConduitDispatcher* get_ConduitDispatcher() ;

/// @brief Method get_IsRequestActive, addr 0x9e75688, size 0x54, virtual true, abstract: false, final false
inline bool get_IsRequestActive() ;

/// @brief Method get_MicActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_MicActive() ;

/// @brief Method get_ShouldSendMicData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_ShouldSendMicData() ;

/// @brief Method get_TelemetryEvents, addr 0x9e756fc, size 0x8, virtual true, abstract: false, final false
inline ::Meta::WitAi::Events::TelemetryEvents* get_TelemetryEvents() ;

/// @brief Method get_TranscriptionEvents, addr 0x9e7571c, size 0x10, virtual false, abstract: false, final false
inline ::Meta::WitAi::Interfaces::ITranscriptionEvent* get_TranscriptionEvents() ;

/// @brief Method get_TranscriptionProvider, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Interfaces::ITranscriptionProvider* get_TranscriptionProvider() ;

/// @brief Method get_UseConduit, addr 0x9e755f4, size 0x3c, virtual false, abstract: false, final false
inline bool get_UseConduit() ;

/// @brief Method get_UseIntentAttributes, addr 0x9e7543c, size 0x94, virtual false, abstract: false, final false
inline bool get_UseIntentAttributes() ;

/// @brief Method get_UsePlatformIntegrations, addr 0x9e75630, size 0x8, virtual true, abstract: false, final false
inline bool get_UsePlatformIntegrations() ;

/// @brief Method get_VoiceEvents, addr 0x9e756dc, size 0x8, virtual true, abstract: false, final false
inline ::Meta::WitAi::Events::VoiceEvents* get_VoiceEvents() ;

/// @brief Method get_WitConfiguration, addr 0x9e754d0, size 0x124, virtual false, abstract: false, final false
inline ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> get_WitConfiguration() ;

/// @brief Convert to "::Meta::Conduit::IInstanceResolver"
constexpr ::Meta::Conduit::IInstanceResolver* i___Meta__Conduit__IInstanceResolver() noexcept;

/// @brief Convert to "::Meta::WitAi::ITelemetryEventsProvider"
constexpr ::Meta::WitAi::ITelemetryEventsProvider* i___Meta__WitAi__ITelemetryEventsProvider() noexcept;

/// @brief Convert to "::Meta::WitAi::IVoiceActivationHandler"
constexpr ::Meta::WitAi::IVoiceActivationHandler* i___Meta__WitAi__IVoiceActivationHandler() noexcept;

/// @brief Convert to "::Meta::WitAi::IVoiceEventProvider"
constexpr ::Meta::WitAi::IVoiceEventProvider* i___Meta__WitAi__IVoiceEventProvider() noexcept;

/// @brief Convert to "::Meta::WitAi::IVoiceService"
constexpr ::Meta::WitAi::IVoiceService* i___Meta__WitAi__IVoiceService() noexcept;

/// @brief Convert to "::Meta::WitAi::Interfaces::IAudioEventProvider"
constexpr ::Meta::WitAi::Interfaces::IAudioEventProvider* i___Meta__WitAi__Interfaces__IAudioEventProvider() noexcept;

/// [CompilerGenerated]
/// @brief Method set_ConduitDispatcher, addr 0x9e75680, size 0x8, virtual false, abstract: false, final false
inline void set_ConduitDispatcher(::Meta::Conduit::IConduitDispatcher*  value) ;

/// @brief Method set_TelemetryEvents, addr 0x9e75704, size 0x8, virtual true, abstract: false, final false
inline void set_TelemetryEvents(::Meta::WitAi::Events::TelemetryEvents*  value) ;

/// @brief Method set_TranscriptionProvider, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_TranscriptionProvider(::Meta::WitAi::Interfaces::ITranscriptionProvider*  value) ;

/// @brief Method set_UsePlatformIntegrations, addr 0x9e75638, size 0x38, virtual true, abstract: false, final false
inline void set_UsePlatformIntegrations(bool  value) ;

/// @brief Method set_VoiceEvents, addr 0x9e756e4, size 0x8, virtual true, abstract: false, final false
inline void set_VoiceEvents(::Meta::WitAi::Events::VoiceEvents*  value) ;

/// @brief Method set_WitConfiguration, addr 0x9e75670, size 0x8, virtual false, abstract: false, final false
inline void set_WitConfiguration(::Meta::WitAi::Data::Configuration::WitConfiguration*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceService", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceService(VoiceService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceService(VoiceService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25545};

/// @brief Field _witConfiguration, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  ____witConfiguration;

/// @brief Field _conduitParameterProvider, offset: 0x48, size: 0x8, def value: None
 ::Meta::Conduit::IParameterProvider*  ____conduitParameterProvider;

/// [Tooltip("Events that will fire before, during and after an activation")]
/// [SerializeField]
/// @brief Field events, offset: 0x50, size: 0x8, def value: None
 ::Meta::WitAi::Events::VoiceEvents*  ___events;

/// @brief Field telemetryEvents, offset: 0x58, size: 0x8, def value: None
 ::Meta::WitAi::Events::TelemetryEvents*  ___telemetryEvents;

/// [CompilerGenerated]
/// @brief Field <ConduitDispatcher>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::Meta::Conduit::IConduitDispatcher*  ____ConduitDispatcher_k__BackingField;

/// @brief Field _waitingForFirstPartialAudio, offset: 0x68, size: 0x1, def value: None
 bool  ____waitingForFirstPartialAudio;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::VoiceService, ____witConfiguration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::VoiceService, ____conduitParameterProvider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::VoiceService, ___events) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::VoiceService, ___telemetryEvents) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::VoiceService, ____ConduitDispatcher_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::VoiceService, ____waitingForFirstPartialAudio) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::VoiceService) == 0x70, "Size mismatch!");

} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.VoiceService/<>c__DisplayClass39_0
class CORDL_TYPE VoiceService___c__DisplayClass39_0 : public ::System::Object {
public:
// Declarations
using __Activate_b__0_d = ::GlobalNamespace::__c__DisplayClass39_0_VoiceService___Activate_b__0_d;

/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::VoiceService>  __4__this;

/// @brief Field text, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::StringW  text;

static inline ::Meta::WitAi::VoiceService___c__DisplayClass39_0* New_ctor() ;

/// [AsyncStateMachine(typeof(Meta.WitAi.VoiceService::<>c__DisplayClass39_0::<<Activate>b__0>d))]
/// @brief Method <Activate>b__0, addr 0x9e775a8, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* _Activate_b__0() ;

constexpr ::UnityW<::Meta::WitAi::VoiceService> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::VoiceService>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_text() const;

constexpr ::StringW& __cordl_internal_get_text() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::VoiceService>  value) ;

constexpr void __cordl_internal_set_text(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e75b14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceService___c__DisplayClass39_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceService___c__DisplayClass39_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceService___c__DisplayClass39_0(VoiceService___c__DisplayClass39_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceService___c__DisplayClass39_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceService___c__DisplayClass39_0(VoiceService___c__DisplayClass39_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25543};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::VoiceService>  _____4__this;

/// @brief Field text, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___text;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::VoiceService___c__DisplayClass39_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::VoiceService___c__DisplayClass39_0, ___text) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::VoiceService___c__DisplayClass39_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi
