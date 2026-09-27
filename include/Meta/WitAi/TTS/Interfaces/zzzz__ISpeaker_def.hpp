#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Interfaces/ISpeaker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISpeaker)
// Forward declare root types
namespace Meta::WitAi::TTS::Interfaces {
class ISpeaker;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Interfaces::ISpeaker*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Interfaces::ISpeaker*, "Meta.WitAi.TTS.Interfaces", "ISpeaker");
// Dependencies 
namespace Meta::WitAi::TTS::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Interfaces.ISpeaker
class CORDL_TYPE ISpeaker {
public:
// Declarations
 __declspec(property(get=get_IsPaused)) bool  IsPaused;

 __declspec(property(get=get_IsSpeaking)) bool  IsSpeaking;

/// @brief Method get_IsPaused, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsPaused() ;

/// @brief Method get_IsSpeaking, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsSpeaking() ;

// Ctor Parameters [CppParam { name: "", ty: "ISpeaker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISpeaker(ISpeaker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29099};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::TTS::Interfaces
