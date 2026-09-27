#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/TTSEventContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/Data/zzzz__ITTSEvent_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TTSEventContainer)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi::TTS::Data {
class ITTSEvent;
}
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Data {
class TTSEventContainer;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Data::TTSEventContainer*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Data::TTSEventContainer*, "Meta.WitAi.TTS.Data", "TTSEventContainer");
// Dependencies Meta.WitAi.TTS.Data.ITTSEvent, System.Object
namespace Meta::WitAi::TTS::Data {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Data.TTSEventContainer
class CORDL_TYPE TTSEventContainer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Events)) ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*  Events;

/// @brief Field OnEventAdded, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEventAdded, put=__cordl_internal_set_OnEventAdded)) ::System::Action_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*  OnEventAdded;

/// @brief Field OnEventJsonAdded, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEventJsonAdded, put=__cordl_internal_set_OnEventJsonAdded)) ::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*  OnEventJsonAdded;

/// @brief Field _events, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::System::Collections::Concurrent::ConcurrentQueue_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*  _events;

/// @brief Method AddEvent, addr 0x9e69234, size 0xac, virtual false, abstract: false, final false
inline bool AddEvent(::Meta::WitAi::Json::WitResponseNode*  eventNode) ;

/// @brief Method AddEvents, addr 0x9e68f98, size 0x29c, virtual false, abstract: false, final false
inline void AddEvents(::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>*  events) ;

/// @brief Method DecodeEvent, addr 0x9e692e0, size 0x38c, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Data::ITTSEvent* DecodeEvent(::Meta::WitAi::Json::WitResponseNode*  eventNode) ;

/// @brief Method GetClosestEvents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEvent>
requires(::cordl_internals::type_constraint<TEvent, ::Meta::WitAi::TTS::Data::ITTSEvent*>)
inline void GetClosestEvents(int32_t  sample, ::by_ref<int32_t>  previousEventIndex, ::by_ref<TEvent>  previousEvent, ::by_ref<TEvent>  nextEvent) ;

static inline ::Meta::WitAi::TTS::Data::TTSEventContainer* New_ctor() ;

constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::ITTSEvent*>* const& __cordl_internal_get_OnEventAdded() const;

constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*& __cordl_internal_get_OnEventAdded() ;

constexpr ::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>* const& __cordl_internal_get_OnEventJsonAdded() const;

constexpr ::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*& __cordl_internal_get_OnEventJsonAdded() ;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Meta::WitAi::TTS::Data::ITTSEvent*>* const& __cordl_internal_get__events() const;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*& __cordl_internal_get__events() ;

constexpr void __cordl_internal_set_OnEventAdded(::System::Action_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*  value) ;

constexpr void __cordl_internal_set_OnEventJsonAdded(::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*  value) ;

constexpr void __cordl_internal_set__events(::System::Collections::Concurrent::ConcurrentQueue_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*  value) ;

/// @brief Method .ctor, addr 0x9e68d94, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnEventAdded, addr 0x9e68e38, size 0xb0, virtual false, abstract: false, final false
inline void add_OnEventAdded(::System::Action_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnEventJsonAdded, addr 0x9e67554, size 0xb0, virtual false, abstract: false, final false
inline void add_OnEventJsonAdded(::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*  value) ;

/// @brief Method get_Events, addr 0x9e68e30, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::TTS::Data::ITTSEvent*>* get_Events() ;

/// [CompilerGenerated]
/// @brief Method remove_OnEventAdded, addr 0x9e68ee8, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnEventAdded(::System::Action_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnEventJsonAdded, addr 0x9e67f98, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnEventJsonAdded(::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSEventContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSEventContainer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSEventContainer(TTSEventContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSEventContainer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSEventContainer(TTSEventContainer const& ) = delete;

/// @brief Field EVENT_ACTION_TYPE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  EVENT_ACTION_TYPE_KEY{u"ACTION"};

/// @brief Field EVENT_EMOTE_TYPE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  EVENT_EMOTE_TYPE_KEY{u"EMOTE"};

/// @brief Field EVENT_PHONEME_TYPE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  EVENT_PHONEME_TYPE_KEY{u"PHONE"};

/// @brief Field EVENT_TYPE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  EVENT_TYPE_KEY{u"type"};

/// @brief Field EVENT_VISEME_TYPE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  EVENT_VISEME_TYPE_KEY{u"VISEME"};

/// @brief Field EVENT_WORD_TYPE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  EVENT_WORD_TYPE_KEY{u"WORD"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29193};

/// @brief Field _events, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentQueue_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*  ____events;

/// [CompilerGenerated]
/// @brief Field OnEventJsonAdded, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*  ___OnEventJsonAdded;

/// [CompilerGenerated]
/// @brief Field OnEventAdded, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*  ___OnEventAdded;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSEventContainer, ____events) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSEventContainer, ___OnEventJsonAdded) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSEventContainer, ___OnEventAdded) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Data::TTSEventContainer) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Data
