#pragma once
// IWYU pragma private; include "GlobalNamespace/GameAbilityEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GameAbilityEvents)
namespace GlobalNamespace {
class GameAbilityEvent;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class GameAbilityEvents;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameAbilityEvents*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameAbilityEvents*, "", "GameAbilityEvents");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameAbilityEvents
class CORDL_TYPE GameAbilityEvents : public ::System::Object {
public:
// Declarations
/// @brief Field events, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_events, put=__cordl_internal_set_events)) ::System::Collections::Generic::List_1<::GlobalNamespace::GameAbilityEvent*>*  events;

/// @brief Field startEvent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_startEvent, put=__cordl_internal_set_startEvent)) ::GlobalNamespace::GameAbilityEvent*  startEvent;

/// @brief Field stopEvent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_stopEvent, put=__cordl_internal_set_stopEvent)) ::GlobalNamespace::GameAbilityEvent*  stopEvent;

static inline ::GlobalNamespace::GameAbilityEvents* New_ctor() ;

/// @brief Method OnAbilityStart, addr 0x5866d84, size 0xb4, virtual false, abstract: false, final false
inline void OnAbilityStart(float_t  abilityTime, ::UnityEngine::AudioSource*  audioSource) ;

/// @brief Method OnAbilityStop, addr 0x5866e38, size 0xb4, virtual false, abstract: false, final false
inline void OnAbilityStop(float_t  abilityTime, ::UnityEngine::AudioSource*  audioSource) ;

/// @brief Method Reset, addr 0x5866cf8, size 0x8c, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method TryPlay, addr 0x5866eec, size 0x13c, virtual false, abstract: false, final false
inline void TryPlay(float_t  abilityTime, ::UnityEngine::AudioSource*  audioSource) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameAbilityEvent*>* const& __cordl_internal_get_events() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameAbilityEvent*>*& __cordl_internal_get_events() ;

constexpr ::GlobalNamespace::GameAbilityEvent* const& __cordl_internal_get_startEvent() const;

constexpr ::GlobalNamespace::GameAbilityEvent*& __cordl_internal_get_startEvent() ;

constexpr ::GlobalNamespace::GameAbilityEvent* const& __cordl_internal_get_stopEvent() const;

constexpr ::GlobalNamespace::GameAbilityEvent*& __cordl_internal_get_stopEvent() ;

constexpr void __cordl_internal_set_events(::System::Collections::Generic::List_1<::GlobalNamespace::GameAbilityEvent*>*  value) ;

constexpr void __cordl_internal_set_startEvent(::GlobalNamespace::GameAbilityEvent*  value) ;

constexpr void __cordl_internal_set_stopEvent(::GlobalNamespace::GameAbilityEvent*  value) ;

/// @brief Method .ctor, addr 0x5867028, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameAbilityEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameAbilityEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameAbilityEvents(GameAbilityEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameAbilityEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameAbilityEvents(GameAbilityEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1845};

/// @brief Field startEvent, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::GameAbilityEvent*  ___startEvent;

/// @brief Field stopEvent, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::GameAbilityEvent*  ___stopEvent;

/// @brief Field events, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GameAbilityEvent*>*  ___events;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameAbilityEvents, ___startEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAbilityEvents, ___stopEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAbilityEvents, ___events) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameAbilityEvents) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
