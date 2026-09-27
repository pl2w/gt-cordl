#pragma once
// IWYU pragma private; include "GorillaNetworking/ScheduledEvents/ScheduledEventControlledObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ScheduledEventControlledObject)
namespace GorillaNetworking::ScheduledEvents {
struct ScheduledEventPhase;
}
// Forward declare root types
namespace GorillaNetworking::ScheduledEvents {
class ScheduledEventControlledObject;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*, "GorillaNetworking.ScheduledEvents", "ScheduledEventControlledObject");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaNetworking::ScheduledEvents {
// Is value type: false
// CS Name: GorillaNetworking.ScheduledEvents.ScheduledEventControlledObject
class CORDL_TYPE ScheduledEventControlledObject : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field enableAfter, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableAfter, put=__cordl_internal_set_enableAfter)) bool  enableAfter;

/// @brief Field enableBefore, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableBefore, put=__cordl_internal_set_enableBefore)) bool  enableBefore;

/// @brief Field enableDuring, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableDuring, put=__cordl_internal_set_enableDuring)) bool  enableDuring;

/// @brief Field enableIfNoEvent, offset 0x23, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableIfNoEvent, put=__cordl_internal_set_enableIfNoEvent)) bool  enableIfNoEvent;

/// @brief Method MatchesPhase, addr 0x5c9ece8, size 0x54, virtual false, abstract: false, final false
inline bool MatchesPhase(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  phase) ;

static inline ::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5c9ebac, size 0xe4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x5c9ea98, size 0x60, virtual false, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get_enableAfter() const;

constexpr bool& __cordl_internal_get_enableAfter() ;

constexpr bool const& __cordl_internal_get_enableBefore() const;

constexpr bool& __cordl_internal_get_enableBefore() ;

constexpr bool const& __cordl_internal_get_enableDuring() const;

constexpr bool& __cordl_internal_get_enableDuring() ;

constexpr bool const& __cordl_internal_get_enableIfNoEvent() const;

constexpr bool& __cordl_internal_get_enableIfNoEvent() ;

constexpr void __cordl_internal_set_enableAfter(bool  value) ;

constexpr void __cordl_internal_set_enableBefore(bool  value) ;

constexpr void __cordl_internal_set_enableDuring(bool  value) ;

constexpr void __cordl_internal_set_enableIfNoEvent(bool  value) ;

/// @brief Method .ctor, addr 0x5c9ed3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScheduledEventControlledObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScheduledEventControlledObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScheduledEventControlledObject(ScheduledEventControlledObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScheduledEventControlledObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScheduledEventControlledObject(ScheduledEventControlledObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4404};

/// [Tooltip("Active while waiting for the event to start (also the default state during initial scene load / sync).")]
/// @brief Field enableBefore, offset: 0x20, size: 0x1, def value: None
 bool  ___enableBefore;

/// [Tooltip("Active while the event is playing in this room.")]
/// @brief Field enableDuring, offset: 0x21, size: 0x1, def value: None
 bool  ___enableDuring;

/// [Tooltip("Active after the event has finished in this room, or in post-event rooms where the player missed it.")]
/// @brief Field enableAfter, offset: 0x22, size: 0x1, def value: None
 bool  ___enableAfter;

/// [Tooltip("Active when no scheduled event is configured at all (manager has no titleDataKey). Use for the ordinary stage look.")]
/// @brief Field enableIfNoEvent, offset: 0x23, size: 0x1, def value: None
 bool  ___enableIfNoEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject, ___enableBefore) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject, ___enableDuring) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject, ___enableAfter) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject, ___enableIfNoEvent) == 0x23, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject) == 0x28, "Size mismatch!");

} // namespace end def GorillaNetworking::ScheduledEvents
