#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/ITranscriptionProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITranscriptionProvider)
namespace Meta::WitAi::Events {
class WitMicLevelChangedEvent;
}
namespace Meta::WitAi::Events {
class WitTranscriptionEvent;
}
// Forward declare root types
namespace Meta::WitAi::Interfaces {
class ITranscriptionProvider;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Interfaces::ITranscriptionProvider*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Interfaces::ITranscriptionProvider*, "Meta.WitAi.Interfaces", "ITranscriptionProvider");
// Dependencies 
namespace Meta::WitAi::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.Interfaces.ITranscriptionProvider
class CORDL_TYPE ITranscriptionProvider {
public:
// Declarations
 __declspec(property(get=get_OnFullTranscription)) ::Meta::WitAi::Events::WitTranscriptionEvent*  OnFullTranscription;

 __declspec(property(get=get_OnMicLevelChanged)) ::Meta::WitAi::Events::WitMicLevelChangedEvent*  OnMicLevelChanged;

 __declspec(property(get=get_OnPartialTranscription)) ::Meta::WitAi::Events::WitTranscriptionEvent*  OnPartialTranscription;

 __declspec(property(get=get_OverrideMicLevel)) bool  OverrideMicLevel;

/// @brief Method Activate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Activate() ;

/// @brief Method Deactivate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Deactivate() ;

/// @brief Method get_OnFullTranscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Events::WitTranscriptionEvent* get_OnFullTranscription() ;

/// @brief Method get_OnMicLevelChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Events::WitMicLevelChangedEvent* get_OnMicLevelChanged() ;

/// @brief Method get_OnPartialTranscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Events::WitTranscriptionEvent* get_OnPartialTranscription() ;

/// @brief Method get_OverrideMicLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_OverrideMicLevel() ;

// Ctor Parameters [CppParam { name: "", ty: "ITranscriptionProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITranscriptionProvider(ITranscriptionProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25664};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Interfaces
