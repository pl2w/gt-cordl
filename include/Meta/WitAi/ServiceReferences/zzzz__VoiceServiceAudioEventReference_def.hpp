#pragma once
// IWYU pragma private; include "Meta/WitAi/ServiceReferences/VoiceServiceAudioEventReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/ServiceReferences/zzzz__AudioInputServiceReference_def.hpp"
#include "Meta/WitAi/Utilities/zzzz__VoiceServiceReference_def.hpp"
CORDL_MODULE_EXPORT(VoiceServiceAudioEventReference)
namespace Meta::WitAi::Interfaces {
class IAudioInputEvents;
}
// Forward declare root types
namespace Meta::WitAi::ServiceReferences {
class VoiceServiceAudioEventReference;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference*, "Meta.WitAi.ServiceReferences", "VoiceServiceAudioEventReference");
// Dependencies Meta.WitAi.ServiceReferences.AudioInputServiceReference, Meta.WitAi.Utilities.VoiceServiceReference
namespace Meta::WitAi::ServiceReferences {
// Is value type: false
// CS Name: Meta.WitAi.ServiceReferences.VoiceServiceAudioEventReference
class CORDL_TYPE VoiceServiceAudioEventReference : public ::Meta::WitAi::ServiceReferences::AudioInputServiceReference {
public:
// Declarations
 __declspec(property(get=get_AudioEvents)) ::Meta::WitAi::Interfaces::IAudioInputEvents*  AudioEvents;

/// @brief Field _voiceServiceReference, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__voiceServiceReference, put=__cordl_internal_set__voiceServiceReference)) ::Meta::WitAi::Utilities::VoiceServiceReference  _voiceServiceReference;

static inline ::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference* New_ctor() ;

constexpr ::Meta::WitAi::Utilities::VoiceServiceReference const& __cordl_internal_get__voiceServiceReference() const;

constexpr ::Meta::WitAi::Utilities::VoiceServiceReference& __cordl_internal_get__voiceServiceReference() ;

constexpr void __cordl_internal_set__voiceServiceReference(::Meta::WitAi::Utilities::VoiceServiceReference  value) ;

/// @brief Method .ctor, addr 0x9e855f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AudioEvents, addr 0x9e855d4, size 0x20, virtual true, abstract: false, final false
inline ::Meta::WitAi::Interfaces::IAudioInputEvents* get_AudioEvents() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceServiceAudioEventReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceServiceAudioEventReference", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceServiceAudioEventReference(VoiceServiceAudioEventReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceServiceAudioEventReference", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceServiceAudioEventReference(VoiceServiceAudioEventReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25587};

/// [SerializeField]
/// @brief Field _voiceServiceReference, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Utilities::VoiceServiceReference  ____voiceServiceReference;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference, ____voiceServiceReference) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::ServiceReferences
