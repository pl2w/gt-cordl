#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Interfaces/ITTSEventPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ITTSEventPlayer)
namespace Meta::WitAi::TTS::Data {
class TTSEventContainer;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Interfaces {
class ITTSEventPlayer;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*, "Meta.WitAi.TTS.Interfaces", "ITTSEventPlayer");
// Dependencies 
namespace Meta::WitAi::TTS::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Interfaces.ITTSEventPlayer
class CORDL_TYPE ITTSEventPlayer {
public:
// Declarations
 __declspec(property(get=get_CurrentEvents)) ::Meta::WitAi::TTS::Data::TTSEventContainer*  CurrentEvents;

 __declspec(property(get=get_ElapsedSamples)) int32_t  ElapsedSamples;

 __declspec(property(get=get_TotalSamples)) int32_t  TotalSamples;

/// @brief Method get_CurrentEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::TTS::Data::TTSEventContainer* get_CurrentEvents() ;

/// @brief Method get_ElapsedSamples, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_ElapsedSamples() ;

/// @brief Method get_TotalSamples, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_TotalSamples() ;

// Ctor Parameters [CppParam { name: "", ty: "ITTSEventPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITTSEventPlayer(ITTSEventPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29104};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::TTS::Interfaces
