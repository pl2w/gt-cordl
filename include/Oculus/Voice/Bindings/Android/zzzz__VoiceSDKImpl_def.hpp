#pragma once
// IWYU pragma private; include "Oculus/Voice/Bindings/Android/VoiceSDKImpl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Voice/Core/Bindings/Android/zzzz__BaseAndroidConnectionImpl_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VoiceSDKImpl)
namespace Meta::Voice {
struct NLPRequestInputType;
}
namespace Meta::WitAi::Configuration {
class WitRequestOptions;
}
namespace Meta::WitAi::Configuration {
class WitRuntimeConfiguration;
}
namespace Meta::WitAi::Events {
class TelemetryEvents;
}
namespace Meta::WitAi::Events {
class VoiceEvents;
}
namespace Meta::WitAi::Interfaces {
class ITranscriptionProvider;
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
namespace Oculus::Voice::Bindings::Android {
class IVCBindingEvents;
}
namespace Oculus::Voice::Bindings::Android {
class VoiceSDKBinding;
}
namespace Oculus::Voice::Bindings::Android {
class VoiceSDKListenerBinding;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Oculus::Voice::Bindings::Android {
class VoiceSDKImpl;
}
// Write type traits
MARK_REF_T(::Oculus::Voice::Bindings::Android::VoiceSDKImpl*);
DEFINE_IL2CPP_CLASS(::Oculus::Voice::Bindings::Android::VoiceSDKImpl*, "Oculus.Voice.Bindings.Android", "VoiceSDKImpl");
// Dependencies Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<T>
namespace Oculus::Voice::Bindings::Android {
// Is value type: false
// CS Name: Oculus.Voice.Bindings.Android.VoiceSDKImpl
class CORDL_TYPE VoiceSDKImpl : public ::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*> {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_IsRequestActive)) bool  IsRequestActive;

 __declspec(property(get=get_MicActive)) bool  MicActive;

/// @brief Field OnServiceNotAvailableEvent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnServiceNotAvailableEvent, put=__cordl_internal_set_OnServiceNotAvailableEvent)) ::System::Action*  OnServiceNotAvailableEvent;

 __declspec(property(get=get_PlatformSupportsWit)) bool  PlatformSupportsWit;

 __declspec(property(get=get_Requests)) ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*  Requests;

 __declspec(property(get=get_TelemetryEvents, put=set_TelemetryEvents)) ::Meta::WitAi::Events::TelemetryEvents*  TelemetryEvents;

 __declspec(property(get=get_TranscriptionProvider, put=set_TranscriptionProvider)) ::Meta::WitAi::Interfaces::ITranscriptionProvider*  TranscriptionProvider;

 __declspec(property(get=get_VoiceEvents, put=set_VoiceEvents)) ::Meta::WitAi::Events::VoiceEvents*  VoiceEvents;

/// @brief Field <Requests>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Requests_k__BackingField, put=__cordl_internal_set__Requests_k__BackingField)) ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*  _Requests_k__BackingField;

/// @brief Field <TranscriptionProvider>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__TranscriptionProvider_k__BackingField, put=__cordl_internal_set__TranscriptionProvider_k__BackingField)) ::Meta::WitAi::Interfaces::ITranscriptionProvider*  _TranscriptionProvider_k__BackingField;

/// @brief Field _baseVoiceService, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseVoiceService, put=__cordl_internal_set__baseVoiceService)) ::Meta::WitAi::IVoiceService*  _baseVoiceService;

/// @brief Field _isActive, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__isActive, put=__cordl_internal_set__isActive)) bool  _isActive;

/// @brief Field _isServiceAvailable, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__isServiceAvailable, put=__cordl_internal_set__isServiceAvailable)) bool  _isServiceAvailable;

/// @brief Field eventBinding, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_eventBinding, put=__cordl_internal_set_eventBinding)) ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*  eventBinding;

/// @brief Convert operator to "::Meta::WitAi::ITelemetryEventsProvider"
constexpr operator  ::Meta::WitAi::ITelemetryEventsProvider*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::IVoiceActivationHandler"
constexpr operator  ::Meta::WitAi::IVoiceActivationHandler*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::IVoiceEventProvider"
constexpr operator  ::Meta::WitAi::IVoiceEventProvider*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::IVoiceService"
constexpr operator  ::Meta::WitAi::IVoiceService*() noexcept;

/// @brief Convert operator to "::Oculus::Voice::Bindings::Android::IVCBindingEvents"
constexpr operator  ::Oculus::Voice::Bindings::Android::IVCBindingEvents*() noexcept;

/// @brief Method Activate, addr 0xb94c970, size 0x128, virtual true, abstract: false, final true
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Activate(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method Activate, addr 0xb94c754, size 0x164, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* Activate(::StringW  text, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method ActivateImmediately, addr 0xb94ca98, size 0x128, virtual true, abstract: false, final true
inline ::Meta::WitAi::Requests::VoiceServiceRequest* ActivateImmediately(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method CanActivateAudio, addr 0xb94c378, size 0x8, virtual true, abstract: false, final true
inline bool CanActivateAudio() ;

/// @brief Method CanSend, addr 0xb94c380, size 0x8, virtual true, abstract: false, final true
inline bool CanSend() ;

/// @brief Method Connect, addr 0xb94c388, size 0x1bc, virtual true, abstract: false, final false
inline void Connect(::StringW  version) ;

/// @brief Method Deactivate, addr 0xb94cbc0, size 0x174, virtual true, abstract: false, final true
inline void Deactivate() ;

/// @brief Method DeactivateAndAbortRequest, addr 0xb94cd34, size 0x18c, virtual true, abstract: false, final true
inline void DeactivateAndAbortRequest() ;

/// @brief Method Disconnect, addr 0xb94c688, size 0xc4, virtual true, abstract: false, final false
inline void Disconnect() ;

/// @brief Method GetRequest, addr 0xb94c8b8, size 0xb8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Requests::VoiceServiceRequest* GetRequest(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents, ::Meta::Voice::NLPRequestInputType  inputType, bool  audioImmediate) ;

static inline ::Oculus::Voice::Bindings::Android::VoiceSDKImpl* New_ctor(::Meta::WitAi::IVoiceService*  baseVoiceService) ;

/// @brief Method OnServiceNotAvailable, addr 0xb94cec0, size 0x24, virtual true, abstract: false, final true
inline void OnServiceNotAvailable(::StringW  error, ::StringW  message) ;

/// @brief Method OnStoppedListening, addr 0xb94c74c, size 0x8, virtual false, abstract: false, final false
inline void OnStoppedListening() ;

/// @brief Method SetRuntimeConfiguration, addr 0xb946028, size 0x14, virtual true, abstract: false, final true
inline void SetRuntimeConfiguration(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  configuration) ;

constexpr ::System::Action* const& __cordl_internal_get_OnServiceNotAvailableEvent() const;

constexpr ::System::Action*& __cordl_internal_get_OnServiceNotAvailableEvent() ;

constexpr ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* const& __cordl_internal_get__Requests_k__BackingField() const;

constexpr ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*& __cordl_internal_get__Requests_k__BackingField() ;

constexpr ::Meta::WitAi::Interfaces::ITranscriptionProvider* const& __cordl_internal_get__TranscriptionProvider_k__BackingField() const;

constexpr ::Meta::WitAi::Interfaces::ITranscriptionProvider*& __cordl_internal_get__TranscriptionProvider_k__BackingField() ;

constexpr ::Meta::WitAi::IVoiceService* const& __cordl_internal_get__baseVoiceService() const;

constexpr ::Meta::WitAi::IVoiceService*& __cordl_internal_get__baseVoiceService() ;

constexpr bool const& __cordl_internal_get__isActive() const;

constexpr bool& __cordl_internal_get__isActive() ;

constexpr bool const& __cordl_internal_get__isServiceAvailable() const;

constexpr bool& __cordl_internal_get__isServiceAvailable() ;

constexpr ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding* const& __cordl_internal_get_eventBinding() const;

constexpr ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*& __cordl_internal_get_eventBinding() ;

constexpr void __cordl_internal_set_OnServiceNotAvailableEvent(::System::Action*  value) ;

constexpr void __cordl_internal_set__Requests_k__BackingField(::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*  value) ;

constexpr void __cordl_internal_set__TranscriptionProvider_k__BackingField(::Meta::WitAi::Interfaces::ITranscriptionProvider*  value) ;

constexpr void __cordl_internal_set__baseVoiceService(::Meta::WitAi::IVoiceService*  value) ;

constexpr void __cordl_internal_set__isActive(bool  value) ;

constexpr void __cordl_internal_set__isServiceAvailable(bool  value) ;

constexpr void __cordl_internal_set_eventBinding(::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*  value) ;

/// @brief Method .ctor, addr 0xb945f50, size 0xd8, virtual false, abstract: false, final false
inline void _ctor(::Meta::WitAi::IVoiceService*  baseVoiceService) ;

/// @brief Method get_Active, addr 0xb94c300, size 0x38, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Method get_IsRequestActive, addr 0xb94c338, size 0x14, virtual true, abstract: false, final true
inline bool get_IsRequestActive() ;

/// @brief Method get_MicActive, addr 0xb94c34c, size 0x14, virtual true, abstract: false, final true
inline bool get_MicActive() ;

/// @brief Method get_PlatformSupportsWit, addr 0xb94603c, size 0x38, virtual true, abstract: false, final true
inline bool get_PlatformSupportsWit() ;

/// [CompilerGenerated]
/// @brief Method get_Requests, addr 0xb94c360, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* get_Requests() ;

/// @brief Method get_TelemetryEvents, addr 0xb94d034, size 0xa4, virtual true, abstract: false, final true
inline ::Meta::WitAi::Events::TelemetryEvents* get_TelemetryEvents() ;

/// [CompilerGenerated]
/// @brief Method get_TranscriptionProvider, addr 0xb94c368, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Interfaces::ITranscriptionProvider* get_TranscriptionProvider() ;

/// @brief Method get_VoiceEvents, addr 0xb94cee4, size 0xa4, virtual true, abstract: false, final true
inline ::Meta::WitAi::Events::VoiceEvents* get_VoiceEvents() ;

/// @brief Convert to "::Meta::WitAi::ITelemetryEventsProvider"
constexpr ::Meta::WitAi::ITelemetryEventsProvider* i___Meta__WitAi__ITelemetryEventsProvider() noexcept;

/// @brief Convert to "::Meta::WitAi::IVoiceActivationHandler"
constexpr ::Meta::WitAi::IVoiceActivationHandler* i___Meta__WitAi__IVoiceActivationHandler() noexcept;

/// @brief Convert to "::Meta::WitAi::IVoiceEventProvider"
constexpr ::Meta::WitAi::IVoiceEventProvider* i___Meta__WitAi__IVoiceEventProvider() noexcept;

/// @brief Convert to "::Meta::WitAi::IVoiceService"
constexpr ::Meta::WitAi::IVoiceService* i___Meta__WitAi__IVoiceService() noexcept;

/// @brief Convert to "::Oculus::Voice::Bindings::Android::IVCBindingEvents"
constexpr ::Oculus::Voice::Bindings::Android::IVCBindingEvents* i___Oculus__Voice__Bindings__Android__IVCBindingEvents() noexcept;

/// @brief Method set_TelemetryEvents, addr 0xb94d0d8, size 0xac, virtual true, abstract: false, final true
inline void set_TelemetryEvents(::Meta::WitAi::Events::TelemetryEvents*  value) ;

/// [CompilerGenerated]
/// @brief Method set_TranscriptionProvider, addr 0xb94c370, size 0x8, virtual true, abstract: false, final true
inline void set_TranscriptionProvider(::Meta::WitAi::Interfaces::ITranscriptionProvider*  value) ;

/// @brief Method set_VoiceEvents, addr 0xb94cf88, size 0xac, virtual true, abstract: false, final true
inline void set_VoiceEvents(::Meta::WitAi::Events::VoiceEvents*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceSDKImpl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKImpl", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceSDKImpl(VoiceSDKImpl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKImpl", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceSDKImpl(VoiceSDKImpl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31701};

/// @brief Field _isServiceAvailable, offset: 0x28, size: 0x1, def value: None
 bool  ____isServiceAvailable;

/// @brief Field OnServiceNotAvailableEvent, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___OnServiceNotAvailableEvent;

/// @brief Field _baseVoiceService, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::IVoiceService*  ____baseVoiceService;

/// @brief Field _isActive, offset: 0x40, size: 0x1, def value: None
 bool  ____isActive;

/// @brief Field eventBinding, offset: 0x48, size: 0x8, def value: None
 ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*  ___eventBinding;

/// [CompilerGenerated]
/// @brief Field <Requests>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*  ____Requests_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TranscriptionProvider>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::Meta::WitAi::Interfaces::ITranscriptionProvider*  ____TranscriptionProvider_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Voice::Bindings::Android::VoiceSDKImpl, ____isServiceAvailable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Bindings::Android::VoiceSDKImpl, ___OnServiceNotAvailableEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Bindings::Android::VoiceSDKImpl, ____baseVoiceService) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Bindings::Android::VoiceSDKImpl, ____isActive) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Bindings::Android::VoiceSDKImpl, ___eventBinding) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Bindings::Android::VoiceSDKImpl, ____Requests_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Bindings::Android::VoiceSDKImpl, ____TranscriptionProvider_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Oculus::Voice::Bindings::Android::VoiceSDKImpl) == 0x60, "Size mismatch!");

} // namespace end def Oculus::Voice::Bindings::Android
