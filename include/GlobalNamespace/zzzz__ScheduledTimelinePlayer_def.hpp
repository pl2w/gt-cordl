#pragma once
// IWYU pragma private; include "GlobalNamespace/ScheduledTimelinePlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScheduledTimelinePlayer)
namespace UnityEngine::Playables {
class PlayableDirector;
}
// Forward declare root types
namespace GlobalNamespace {
class ScheduledTimelinePlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ScheduledTimelinePlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScheduledTimelinePlayer*, "", "ScheduledTimelinePlayer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScheduledTimelinePlayer
class CORDL_TYPE ScheduledTimelinePlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field eventHour, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_eventHour, put=__cordl_internal_set_eventHour)) int32_t  eventHour;

/// @brief Field scheduledEventID, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_scheduledEventID, put=__cordl_internal_set_scheduledEventID)) int32_t  scheduledEventID;

/// @brief Field timeline, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeline, put=__cordl_internal_set_timeline)) ::UnityW<::UnityEngine::Playables::PlayableDirector>  timeline;

/// @brief Method HandleScheduledEvent, addr 0x5e06718, size 0x18, virtual false, abstract: false, final false
inline void HandleScheduledEvent() ;

static inline ::GlobalNamespace::ScheduledTimelinePlayer* New_ctor() ;

/// @brief Method OnDisable, addr 0x5e066bc, size 0x5c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5e06608, size 0xb4, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr int32_t const& __cordl_internal_get_eventHour() const;

constexpr int32_t& __cordl_internal_get_eventHour() ;

constexpr int32_t const& __cordl_internal_get_scheduledEventID() const;

constexpr int32_t& __cordl_internal_get_scheduledEventID() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get_timeline() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get_timeline() ;

constexpr void __cordl_internal_set_eventHour(int32_t  value) ;

constexpr void __cordl_internal_set_scheduledEventID(int32_t  value) ;

constexpr void __cordl_internal_set_timeline(::UnityW<::UnityEngine::Playables::PlayableDirector>  value) ;

/// @brief Method .ctor, addr 0x5e06730, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScheduledTimelinePlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScheduledTimelinePlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScheduledTimelinePlayer(ScheduledTimelinePlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScheduledTimelinePlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScheduledTimelinePlayer(ScheduledTimelinePlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{528};

/// @brief Field timeline, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableDirector>  ___timeline;

/// @brief Field eventHour, offset: 0x28, size: 0x4, def value: None
 int32_t  ___eventHour;

/// @brief Field scheduledEventID, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___scheduledEventID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScheduledTimelinePlayer, ___timeline) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScheduledTimelinePlayer, ___eventHour) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScheduledTimelinePlayer, ___scheduledEventID) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScheduledTimelinePlayer) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
