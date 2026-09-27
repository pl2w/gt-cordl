#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/VoiceEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Events/zzzz__SpeechEvents_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VoiceEvents)
namespace Meta::WitAi::Events {
class WitByteDataEvent;
}
namespace Meta::WitAi::Events {
class WitValidationEvent;
}
// Forward declare root types
namespace Meta::WitAi::Events {
class VoiceEvents;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Events::VoiceEvents*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Events::VoiceEvents*, "Meta.WitAi.Events", "VoiceEvents");
// Dependencies Meta.WitAi.Events.SpeechEvents
namespace Meta::WitAi::Events {
// Is value type: false
// CS Name: Meta.WitAi.Events.VoiceEvents
class CORDL_TYPE VoiceEvents : public ::Meta::WitAi::Events::SpeechEvents {
public:
// Declarations
 __declspec(property(get=get_OnByteDataReady)) ::Meta::WitAi::Events::WitByteDataEvent*  OnByteDataReady;

 __declspec(property(get=get_OnByteDataSent)) ::Meta::WitAi::Events::WitByteDataEvent*  OnByteDataSent;

 __declspec(property(get=get_OnValidatePartialResponse)) ::Meta::WitAi::Events::WitValidationEvent*  OnValidatePartialResponse;

/// @brief Field _onByteDataReady, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__onByteDataReady, put=__cordl_internal_set__onByteDataReady)) ::Meta::WitAi::Events::WitByteDataEvent*  _onByteDataReady;

/// @brief Field _onByteDataSent, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__onByteDataSent, put=__cordl_internal_set__onByteDataSent)) ::Meta::WitAi::Events::WitByteDataEvent*  _onByteDataSent;

/// @brief Field _onValidatePartialResponse, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__onValidatePartialResponse, put=__cordl_internal_set__onValidatePartialResponse)) ::Meta::WitAi::Events::WitValidationEvent*  _onValidatePartialResponse;

static inline ::Meta::WitAi::Events::VoiceEvents* New_ctor() ;

constexpr ::Meta::WitAi::Events::WitByteDataEvent* const& __cordl_internal_get__onByteDataReady() const;

constexpr ::Meta::WitAi::Events::WitByteDataEvent*& __cordl_internal_get__onByteDataReady() ;

constexpr ::Meta::WitAi::Events::WitByteDataEvent* const& __cordl_internal_get__onByteDataSent() const;

constexpr ::Meta::WitAi::Events::WitByteDataEvent*& __cordl_internal_get__onByteDataSent() ;

constexpr ::Meta::WitAi::Events::WitValidationEvent* const& __cordl_internal_get__onValidatePartialResponse() const;

constexpr ::Meta::WitAi::Events::WitValidationEvent*& __cordl_internal_get__onValidatePartialResponse() ;

constexpr void __cordl_internal_set__onByteDataReady(::Meta::WitAi::Events::WitByteDataEvent*  value) ;

constexpr void __cordl_internal_set__onByteDataSent(::Meta::WitAi::Events::WitByteDataEvent*  value) ;

constexpr void __cordl_internal_set__onValidatePartialResponse(::Meta::WitAi::Events::WitValidationEvent*  value) ;

/// @brief Method .ctor, addr 0x9e94fec, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OnByteDataReady, addr 0x9e94fd4, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Events::WitByteDataEvent* get_OnByteDataReady() ;

/// @brief Method get_OnByteDataSent, addr 0x9e94fdc, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Events::WitByteDataEvent* get_OnByteDataSent() ;

/// @brief Method get_OnValidatePartialResponse, addr 0x9e94fe4, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Events::WitValidationEvent* get_OnValidatePartialResponse() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceEvents(VoiceEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceEvents(VoiceEvents const& ) = delete;

/// @brief Field EVENT_CATEGORY_DATA_EVENTS offset 0xffffffff size 0x8
static constexpr ::ConstString  EVENT_CATEGORY_DATA_EVENTS{u"Data Events"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25673};

/// [EventCategory("Data Events")]
/// [FormerlySerializedAs("OnByteDataReady")]
/// [SerializeField]
/// [HideInInspector]
/// @brief Field _onByteDataReady, offset: 0xf0, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitByteDataEvent*  ____onByteDataReady;

/// [EventCategory("Data Events")]
/// [FormerlySerializedAs("OnByteDataSent")]
/// [SerializeField]
/// [HideInInspector]
/// @brief Field _onByteDataSent, offset: 0xf8, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitByteDataEvent*  ____onByteDataSent;

/// [EventCategory("Activation Response Events")]
/// [Tooltip("Called after an on partial response to validate data.  If data.validResponse is true, service will deactivate & use the partial data as final")]
/// [FormerlySerializedAs("OnValidatePartialResponse")]
/// [SerializeField]
/// @brief Field _onValidatePartialResponse, offset: 0x100, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitValidationEvent*  ____onValidatePartialResponse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Events::VoiceEvents, ____onByteDataReady) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::VoiceEvents, ____onByteDataSent) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::VoiceEvents, ____onValidatePartialResponse) == 0x100, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Events::VoiceEvents) == 0x108, "Size mismatch!");

} // namespace end def Meta::WitAi::Events
