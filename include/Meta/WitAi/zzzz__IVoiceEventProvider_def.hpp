#pragma once
// IWYU pragma private; include "Meta/WitAi/IVoiceEventProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVoiceEventProvider)
namespace Meta::WitAi::Events {
class VoiceEvents;
}
// Forward declare root types
namespace Meta::WitAi {
class IVoiceEventProvider;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::IVoiceEventProvider*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::IVoiceEventProvider*, "Meta.WitAi", "IVoiceEventProvider");
// Dependencies 
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.IVoiceEventProvider
class CORDL_TYPE IVoiceEventProvider {
public:
// Declarations
 __declspec(property(get=get_VoiceEvents)) ::Meta::WitAi::Events::VoiceEvents*  VoiceEvents;

/// @brief Method get_VoiceEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Events::VoiceEvents* get_VoiceEvents() ;

// Ctor Parameters [CppParam { name: "", ty: "IVoiceEventProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVoiceEventProvider(IVoiceEventProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25572};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi
