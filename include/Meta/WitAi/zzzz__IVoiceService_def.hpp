#pragma once
// IWYU pragma private; include "Meta/WitAi/IVoiceService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVoiceService)
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
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace Meta::WitAi {
class IVoiceService;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::IVoiceService*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::IVoiceService*, "Meta.WitAi", "IVoiceService");
// Dependencies 
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.IVoiceService
class CORDL_TYPE IVoiceService {
public:
// Declarations
 __declspec(property(get=get_IsRequestActive)) bool  IsRequestActive;

 __declspec(property(get=get_MicActive)) bool  MicActive;

 __declspec(property(get=get_Requests)) ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*  Requests;

 __declspec(property(get=get_TelemetryEvents, put=set_TelemetryEvents)) ::Meta::WitAi::Events::TelemetryEvents*  TelemetryEvents;

 __declspec(property(get=get_TranscriptionProvider, put=set_TranscriptionProvider)) ::Meta::WitAi::Interfaces::ITranscriptionProvider*  TranscriptionProvider;

 __declspec(property(get=get_VoiceEvents, put=set_VoiceEvents)) ::Meta::WitAi::Events::VoiceEvents*  VoiceEvents;

/// @brief Convert operator to "::Meta::WitAi::ITelemetryEventsProvider"
constexpr operator  ::Meta::WitAi::ITelemetryEventsProvider*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::IVoiceActivationHandler"
constexpr operator  ::Meta::WitAi::IVoiceActivationHandler*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::IVoiceEventProvider"
constexpr operator  ::Meta::WitAi::IVoiceEventProvider*() noexcept;

/// @brief Method CanActivateAudio, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool CanActivateAudio() ;

/// @brief Method CanSend, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool CanSend() ;

/// @brief Method get_IsRequestActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsRequestActive() ;

/// @brief Method get_MicActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_MicActive() ;

/// @brief Method get_Requests, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* get_Requests() ;

/// @brief Method get_TelemetryEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Events::TelemetryEvents* get_TelemetryEvents() ;

/// @brief Method get_TranscriptionProvider, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Interfaces::ITranscriptionProvider* get_TranscriptionProvider() ;

/// @brief Method get_VoiceEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Events::VoiceEvents* get_VoiceEvents() ;

/// @brief Convert to "::Meta::WitAi::ITelemetryEventsProvider"
constexpr ::Meta::WitAi::ITelemetryEventsProvider* i___Meta__WitAi__ITelemetryEventsProvider() noexcept;

/// @brief Convert to "::Meta::WitAi::IVoiceActivationHandler"
constexpr ::Meta::WitAi::IVoiceActivationHandler* i___Meta__WitAi__IVoiceActivationHandler() noexcept;

/// @brief Convert to "::Meta::WitAi::IVoiceEventProvider"
constexpr ::Meta::WitAi::IVoiceEventProvider* i___Meta__WitAi__IVoiceEventProvider() noexcept;

/// @brief Method set_TelemetryEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_TelemetryEvents(::Meta::WitAi::Events::TelemetryEvents*  value) ;

/// @brief Method set_TranscriptionProvider, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_TranscriptionProvider(::Meta::WitAi::Interfaces::ITranscriptionProvider*  value) ;

/// @brief Method set_VoiceEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_VoiceEvents(::Meta::WitAi::Events::VoiceEvents*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IVoiceService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVoiceService(IVoiceService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25546};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi
