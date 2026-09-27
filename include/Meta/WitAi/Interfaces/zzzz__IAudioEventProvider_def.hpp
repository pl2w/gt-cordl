#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/IAudioEventProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAudioEventProvider)
namespace Meta::WitAi::Interfaces {
class IAudioInputEvents;
}
// Forward declare root types
namespace Meta::WitAi::Interfaces {
class IAudioEventProvider;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Interfaces::IAudioEventProvider*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Interfaces::IAudioEventProvider*, "Meta.WitAi.Interfaces", "IAudioEventProvider");
// Dependencies 
namespace Meta::WitAi::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.Interfaces.IAudioEventProvider
class CORDL_TYPE IAudioEventProvider {
public:
// Declarations
 __declspec(property(get=get_AudioEvents)) ::Meta::WitAi::Interfaces::IAudioInputEvents*  AudioEvents;

/// @brief Method get_AudioEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Interfaces::IAudioInputEvents* get_AudioEvents() ;

// Ctor Parameters [CppParam { name: "", ty: "IAudioEventProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioEventProvider(IAudioEventProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25657};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Interfaces
