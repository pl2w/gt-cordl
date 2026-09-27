#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VoiceServiceRequestEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/zzzz__NLPRequestEvents_2_def.hpp"
CORDL_MODULE_EXPORT(VoiceServiceRequestEvents)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequestEvent;
}
// Forward declare root types
namespace Meta::WitAi::Requests {
class VoiceServiceRequestEvents;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Requests::VoiceServiceRequestEvents*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::VoiceServiceRequestEvents*, "Meta.WitAi.Requests", "VoiceServiceRequestEvents");
// Dependencies Meta.Voice.NLPRequestEvents`2<TUnityEvent, TResponseData>
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.VoiceServiceRequestEvents
class CORDL_TYPE VoiceServiceRequestEvents : public ::Meta::Voice::NLPRequestEvents_2<::Meta::WitAi::Requests::VoiceServiceRequestEvent*,::Meta::WitAi::Json::WitResponseNode*> {
public:
// Declarations
static inline ::Meta::WitAi::Requests::VoiceServiceRequestEvents* New_ctor() ;

/// @brief Method SetListeners, addr 0x9e90f80, size 0x620, virtual false, abstract: false, final false
inline void SetListeners(::Meta::WitAi::Requests::VoiceServiceRequestEvents*  events, bool  add) ;

/// @brief Method .ctor, addr 0x9e91d78, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceServiceRequestEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceServiceRequestEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceServiceRequestEvents(VoiceServiceRequestEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceServiceRequestEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceServiceRequestEvents(VoiceServiceRequestEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25643};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Requests::VoiceServiceRequestEvents) == 0xc0, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
