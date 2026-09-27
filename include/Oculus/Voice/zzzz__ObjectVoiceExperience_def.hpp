#pragma once
// IWYU pragma private; include "Oculus/Voice/ObjectVoiceExperience.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ObjectVoiceExperience)
namespace Meta::WitAi::Events {
class VoiceEvents;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequestEvents;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequest;
}
namespace Oculus::Voice {
class AppVoiceExperience;
}
// Forward declare root types
namespace Oculus::Voice {
class ObjectVoiceExperience;
}
// Write type traits
MARK_REF_T(::Oculus::Voice::ObjectVoiceExperience*);
DEFINE_IL2CPP_CLASS(::Oculus::Voice::ObjectVoiceExperience*, "Oculus.Voice", "ObjectVoiceExperience");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Voice {
// Is value type: false
// CS Name: Oculus.Voice.ObjectVoiceExperience
class CORDL_TYPE ObjectVoiceExperience : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _activation, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__activation, put=__cordl_internal_set__activation)) ::Meta::WitAi::Requests::VoiceServiceRequest*  _activation;

/// @brief Field _events, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  _events;

/// @brief Field _voice, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__voice, put=__cordl_internal_set__voice)) ::UnityW<::Oculus::Voice::AppVoiceExperience>  _voice;

/// @brief Field _voiceEvents, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__voiceEvents, put=__cordl_internal_set__voiceEvents)) ::Meta::WitAi::Events::VoiceEvents*  _voiceEvents;

/// @brief Method Activate, addr 0xb94996c, size 0x100, virtual false, abstract: false, final false
inline void Activate() ;

/// @brief Method Deactivate, addr 0xb949a6c, size 0x5c, virtual false, abstract: false, final false
inline void Deactivate() ;

/// @brief Method HandleAudioActivation, addr 0xb949668, size 0x60, virtual false, abstract: false, final false
inline void HandleAudioActivation(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method HandleAudioDeactivation, addr 0xb949608, size 0x60, virtual false, abstract: false, final false
inline void HandleAudioDeactivation(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method HandleAudioInputStateChange, addr 0xb949308, size 0x60, virtual false, abstract: false, final false
inline void HandleAudioInputStateChange(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method HandleCancel, addr 0xb9498d0, size 0x9c, virtual false, abstract: false, final false
inline void HandleCancel(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method HandleComplete, addr 0xb949848, size 0x88, virtual false, abstract: false, final false
inline void HandleComplete(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method HandleDownloadProgressChange, addr 0xb9493c8, size 0x60, virtual false, abstract: false, final false
inline void HandleDownloadProgressChange(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method HandleFailed, addr 0xb9497e8, size 0x60, virtual false, abstract: false, final false
inline void HandleFailed(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method HandleFullTranscription, addr 0xb949548, size 0x60, virtual false, abstract: false, final false
inline void HandleFullTranscription(::StringW  transcription) ;

/// @brief Method HandleInit, addr 0xb949788, size 0x60, virtual false, abstract: false, final false
inline void HandleInit(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method HandlePartialTranscription, addr 0xb9495a8, size 0x60, virtual false, abstract: false, final false
inline void HandlePartialTranscription(::StringW  transcription) ;

/// @brief Method HandleSend, addr 0xb949728, size 0x60, virtual false, abstract: false, final false
inline void HandleSend(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method HandleStartListening, addr 0xb949488, size 0x60, virtual false, abstract: false, final false
inline void HandleStartListening(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method HandleStateChange, addr 0xb9494e8, size 0x60, virtual false, abstract: false, final false
inline void HandleStateChange(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method HandleStopListening, addr 0xb949428, size 0x60, virtual false, abstract: false, final false
inline void HandleStopListening(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method HandleSuccess, addr 0xb9496c8, size 0x60, virtual false, abstract: false, final false
inline void HandleSuccess(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method HandleUploadProgressChange, addr 0xb949368, size 0x60, virtual false, abstract: false, final false
inline void HandleUploadProgressChange(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

static inline ::Oculus::Voice::ObjectVoiceExperience* New_ctor() ;

/// @brief Method OnDisable, addr 0xb948cbc, size 0x64c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb9485f8, size 0x6c4, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::Meta::WitAi::Requests::VoiceServiceRequest* const& __cordl_internal_get__activation() const;

constexpr ::Meta::WitAi::Requests::VoiceServiceRequest*& __cordl_internal_get__activation() ;

constexpr ::Meta::WitAi::Requests::VoiceServiceRequestEvents* const& __cordl_internal_get__events() const;

constexpr ::Meta::WitAi::Requests::VoiceServiceRequestEvents*& __cordl_internal_get__events() ;

constexpr ::UnityW<::Oculus::Voice::AppVoiceExperience> const& __cordl_internal_get__voice() const;

constexpr ::UnityW<::Oculus::Voice::AppVoiceExperience>& __cordl_internal_get__voice() ;

constexpr ::Meta::WitAi::Events::VoiceEvents* const& __cordl_internal_get__voiceEvents() const;

constexpr ::Meta::WitAi::Events::VoiceEvents*& __cordl_internal_get__voiceEvents() ;

constexpr void __cordl_internal_set__activation(::Meta::WitAi::Requests::VoiceServiceRequest*  value) ;

constexpr void __cordl_internal_set__events(::Meta::WitAi::Requests::VoiceServiceRequestEvents*  value) ;

constexpr void __cordl_internal_set__voice(::UnityW<::Oculus::Voice::AppVoiceExperience>  value) ;

constexpr void __cordl_internal_set__voiceEvents(::Meta::WitAi::Events::VoiceEvents*  value) ;

/// @brief Method .ctor, addr 0xb949ac8, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectVoiceExperience() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectVoiceExperience", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectVoiceExperience(ObjectVoiceExperience && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectVoiceExperience", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectVoiceExperience(ObjectVoiceExperience const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31693};

/// [FormerlySerializedAs("voiceEvents")]
/// [SerializeField]
/// @brief Field _voiceEvents, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Events::VoiceEvents*  ____voiceEvents;

/// @brief Field _voice, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Oculus::Voice::AppVoiceExperience>  ____voice;

/// @brief Field _activation, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VoiceServiceRequest*  ____activation;

/// @brief Field _events, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  ____events;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Voice::ObjectVoiceExperience, ____voiceEvents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::ObjectVoiceExperience, ____voice) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::ObjectVoiceExperience, ____activation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::ObjectVoiceExperience, ____events) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Voice::ObjectVoiceExperience) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Voice
