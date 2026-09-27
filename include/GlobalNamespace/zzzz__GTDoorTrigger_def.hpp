#pragma once
// IWYU pragma private; include "GlobalNamespace/GTDoorTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTDoorTrigger)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class GTDoorTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTDoorTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTDoorTrigger*, "", "GTDoorTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTDoorTrigger
class CORDL_TYPE GTDoorTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field TriggeredEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_TriggeredEvent, put=__cordl_internal_set_TriggeredEvent)) ::UnityEngine::Events::UnityEvent*  TriggeredEvent;

 __declspec(property(get=get_TriggeredThisFrame)) bool  TriggeredThisFrame;

/// @brief Field lastTriggeredFrame, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTriggeredFrame, put=__cordl_internal_set_lastTriggeredFrame)) int32_t  lastTriggeredFrame;

 __declspec(property(get=get_overlapCount)) int32_t  overlapCount;

/// @brief Field overlappingColliders, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlappingColliders, put=__cordl_internal_set_overlappingColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  overlappingColliders;

/// @brief Field timeline, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeline, put=__cordl_internal_set_timeline)) ::UnityW<::UnityEngine::Playables::PlayableDirector>  timeline;

static inline ::GlobalNamespace::GTDoorTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5678430, size 0x19c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x56785cc, size 0x58, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method ValidateOverlappingColliders, addr 0x5677c44, size 0x150, virtual false, abstract: false, final false
inline void ValidateOverlappingColliders() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_TriggeredEvent() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_TriggeredEvent() ;

constexpr int32_t const& __cordl_internal_get_lastTriggeredFrame() const;

constexpr int32_t& __cordl_internal_get_lastTriggeredFrame() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_overlappingColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_overlappingColliders() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get_timeline() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get_timeline() ;

constexpr void __cordl_internal_set_TriggeredEvent(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_lastTriggeredFrame(int32_t  value) ;

constexpr void __cordl_internal_set_overlappingColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_timeline(::UnityW<::UnityEngine::Playables::PlayableDirector>  value) ;

/// @brief Method .ctor, addr 0x5678624, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TriggeredThisFrame, addr 0x5678410, size 0x20, virtual false, abstract: false, final false
inline bool get_TriggeredThisFrame() ;

/// @brief Method get_overlapCount, addr 0x5677d94, size 0x48, virtual false, abstract: false, final false
inline int32_t get_overlapCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTDoorTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTDoorTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTDoorTrigger(GTDoorTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTDoorTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTDoorTrigger(GTDoorTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{845};

/// [Tooltip("Optional timeline to play to animate the thing getting activated, play sound, particles, etc...")]
/// @brief Field timeline, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableDirector>  ___timeline;

/// @brief Field lastTriggeredFrame, offset: 0x28, size: 0x4, def value: None
 int32_t  ___lastTriggeredFrame;

/// @brief Field overlappingColliders, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___overlappingColliders;

/// @brief Field TriggeredEvent, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___TriggeredEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTDoorTrigger, ___timeline) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDoorTrigger, ___lastTriggeredFrame) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDoorTrigger, ___overlappingColliders) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDoorTrigger, ___TriggeredEvent) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTDoorTrigger) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
