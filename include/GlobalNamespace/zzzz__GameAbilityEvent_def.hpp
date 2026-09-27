#pragma once
// IWYU pragma private; include "GlobalNamespace/GameAbilityEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GameAbilityEvent)
namespace GlobalNamespace {
class AbilitySound;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class GameAbilityEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameAbilityEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameAbilityEvent*, "", "GameAbilityEvent");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameAbilityEvent
class CORDL_TYPE GameAbilityEvent : public ::System::Object {
public:
// Declarations
/// @brief Field played, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_played, put=__cordl_internal_set_played)) bool  played;

/// @brief Field sound, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sound, put=__cordl_internal_set_sound)) ::GlobalNamespace::AbilitySound*  sound;

/// @brief Field time, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_time, put=__cordl_internal_set_time)) float_t  time;

/// @brief Field triggerEvent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerEvent, put=__cordl_internal_set_triggerEvent)) ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>*  triggerEvent;

static inline ::GlobalNamespace::GameAbilityEvent* New_ctor() ;

/// @brief Method Reset, addr 0x5866bdc, size 0x8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method TryPlay, addr 0x5866be4, size 0x10c, virtual false, abstract: false, final false
inline void TryPlay(float_t  abilityTime, ::UnityEngine::AudioSource*  audioSource) ;

constexpr bool const& __cordl_internal_get_played() const;

constexpr bool& __cordl_internal_get_played() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_sound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_sound() ;

constexpr float_t const& __cordl_internal_get_time() const;

constexpr float_t& __cordl_internal_get_time() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* const& __cordl_internal_get_triggerEvent() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>*& __cordl_internal_get_triggerEvent() ;

constexpr void __cordl_internal_set_played(bool  value) ;

constexpr void __cordl_internal_set_sound(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_time(float_t  value) ;

constexpr void __cordl_internal_set_triggerEvent(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>*  value) ;

/// @brief Method .ctor, addr 0x5866cf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameAbilityEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameAbilityEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameAbilityEvent(GameAbilityEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameAbilityEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameAbilityEvent(GameAbilityEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1844};

/// @brief Field time, offset: 0x10, size: 0x4, def value: None
 float_t  ___time;

/// @brief Field sound, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___sound;

/// @brief Field triggerEvent, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>*  ___triggerEvent;

/// @brief Field played, offset: 0x28, size: 0x1, def value: None
 bool  ___played;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameAbilityEvent, ___time) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAbilityEvent, ___sound) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAbilityEvent, ___triggerEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameAbilityEvent, ___played) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameAbilityEvent) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
