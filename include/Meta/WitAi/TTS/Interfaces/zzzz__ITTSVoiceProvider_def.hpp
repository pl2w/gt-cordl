#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Interfaces/ITTSVoiceProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ITTSVoiceProvider)
namespace Meta::WitAi::TTS::Data {
class TTSVoiceSettings;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Interfaces {
class ITTSVoiceProvider;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider*, "Meta.WitAi.TTS.Interfaces", "ITTSVoiceProvider");
// Dependencies 
namespace Meta::WitAi::TTS::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider
class CORDL_TYPE ITTSVoiceProvider {
public:
// Declarations
 __declspec(property(get=get_PresetVoiceSettings)) ::ArrayW<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>  PresetVoiceSettings;

 __declspec(property(get=get_VoiceDefaultSettings)) ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  VoiceDefaultSettings;

/// @brief Method get_PresetVoiceSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<::Meta::WitAi::TTS::Data::TTSVoiceSettings*> get_PresetVoiceSettings() ;

/// @brief Method get_VoiceDefaultSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::TTS::Data::TTSVoiceSettings* get_VoiceDefaultSettings() ;

// Ctor Parameters [CppParam { name: "", ty: "ITTSVoiceProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITTSVoiceProvider(ITTSVoiceProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29107};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::TTS::Interfaces
