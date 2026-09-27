#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousPropertyTimeline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyTimeline_TimelineEndBehavior_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ContinuousPropertyTimeline)
namespace GlobalNamespace {
struct ContinuousPropertyTimeline_TimelineEndBehavior;
}
namespace GlobalNamespace {
struct ContinuousPropertyTimeline_TimelineEvent;
}
namespace GlobalNamespace {
template<typename T>
class FlagEvents_1;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag::Cosmetics {
class ContinuousPropertyArray;
}
namespace GorillaTag {
class ISpawnable;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class ContinuousPropertyTimeline;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::ContinuousPropertyTimeline*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::ContinuousPropertyTimeline*, "GorillaTag.Cosmetics", "ContinuousPropertyTimeline");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, GorillaTag.Cosmetics.ContinuousPropertyTimeline::TimelineEndBehavior, UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.ContinuousPropertyTimeline
class CORDL_TYPE ContinuousPropertyTimeline : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TimelineEndBehavior = ::GlobalNamespace::ContinuousPropertyTimeline_TimelineEndBehavior;

using TimelineEvent = ::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent;

 __declspec(property(get=get_CosmeticSelectedSide, put=set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  CosmeticSelectedSide;

 __declspec(property(get=get_IsBackward, put=set_IsBackward)) bool  IsBackward;

/// @brief Field IsForward, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsForward, put=__cordl_internal_set_IsForward)) bool  IsForward;

 __declspec(property(get=get_IsPaused, put=set_IsPaused)) bool  IsPaused;

/// @brief Field IsPlaying, offset 0x4d, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsPlaying, put=__cordl_internal_set_IsPlaying)) bool  IsPlaying;

 __declspec(property(get=get_IsSpawned, put=set_IsSpawned)) bool  IsSpawned;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <CosmeticSelectedSide>k__BackingField, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _CosmeticSelectedSide_k__BackingField;

/// @brief Field <IsSpawned>k__BackingField, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpawned_k__BackingField, put=__cordl_internal_set__IsSpawned_k__BackingField)) bool  _IsSpawned_k__BackingField;

/// @brief Field <TickRunning>k__BackingField, offset 0x4e, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field backwardDeltaMult, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_backwardDeltaMult, put=__cordl_internal_set_backwardDeltaMult)) float_t  backwardDeltaMult;

/// @brief Field backwardDuration, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_backwardDuration, put=__cordl_internal_set_backwardDuration)) float_t  backwardDuration;

/// @brief Field continuousProperties, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuousProperties, put=__cordl_internal_set_continuousProperties)) ::GorillaTag::Cosmetics::ContinuousPropertyArray*  continuousProperties;

/// @brief Field durationSeconds, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_durationSeconds, put=__cordl_internal_set_durationSeconds)) float_t  durationSeconds;

/// @brief Field endBehavior, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_endBehavior, put=__cordl_internal_set_endBehavior)) ::GlobalNamespace::ContinuousPropertyTimeline_TimelineEndBehavior  endBehavior;

/// @brief Field events, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_events, put=__cordl_internal_set_events)) ::GlobalNamespace::FlagEvents_1<::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent>*  events;

/// @brief Field inverseDuration, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_inverseDuration, put=__cordl_internal_set_inverseDuration)) float_t  inverseDuration;

/// @brief Field myRig, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field separateBackwardDuration, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_separateBackwardDuration, put=__cordl_internal_set_separateBackwardDuration)) bool  separateBackwardDuration;

/// @brief Field startPlaying, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_startPlaying, put=__cordl_internal_set_startPlaying)) bool  startPlaying;

/// @brief Field time, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_time, put=__cordl_internal_set_time)) float_t  time;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method Awake, addr 0x5d85940, size 0xc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InBetween, addr 0x5d85bcc, size 0xb0, virtual false, abstract: false, final false
inline void InBetween() ;

static inline ::GorillaTag::Cosmetics::ContinuousPropertyTimeline* New_ctor() ;

/// @brief Method OnDespawn, addr 0x5d85d40, size 0x4, virtual true, abstract: false, final true
inline void OnDespawn() ;

/// @brief Method OnDisable, addr 0x5d85ad0, size 0xfc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d8594c, size 0x184, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnReachedBeginning, addr 0x5d855c4, size 0x174, virtual false, abstract: false, final false
inline void OnReachedBeginning() ;

/// @brief Method OnReachedEnd, addr 0x5d8575c, size 0x174, virtual false, abstract: false, final false
inline void OnReachedEnd() ;

/// @brief Method OnSpawn, addr 0x5d85d38, size 0x8, virtual true, abstract: false, final true
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method Tick, addr 0x5d85c8c, size 0x8c, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method TimelinePause, addr 0x5d854fc, size 0x70, virtual false, abstract: false, final false
inline void TimelinePause() ;

/// @brief Method TimelinePlay, addr 0x5d85488, size 0x74, virtual false, abstract: false, final false
inline void TimelinePlay() ;

/// @brief Method TimelinePlayBackward, addr 0x5d85598, size 0x8, virtual false, abstract: false, final false
inline void TimelinePlayBackward() ;

/// @brief Method TimelinePlayForward, addr 0x5d8558c, size 0xc, virtual false, abstract: false, final false
inline void TimelinePlayForward() ;

/// @brief Method TimelinePlayFromBeginning, addr 0x5d855a0, size 0x24, virtual false, abstract: false, final false
inline void TimelinePlayFromBeginning() ;

/// @brief Method TimelinePlayFromEnd, addr 0x5d85738, size 0x24, virtual false, abstract: false, final false
inline void TimelinePlayFromEnd() ;

/// @brief Method TimelineScrubToFraction, addr 0x5d858fc, size 0xc, virtual false, abstract: false, final false
inline void TimelineScrubToFraction(float_t  f) ;

/// @brief Method TimelineScrubToTime, addr 0x5d858d0, size 0x2c, virtual false, abstract: false, final false
inline void TimelineScrubToTime(float_t  t) ;

/// @brief Method TimelineSetBackwardDuration, addr 0x5d85924, size 0x1c, virtual false, abstract: false, final false
inline void TimelineSetBackwardDuration(float_t  d) ;

/// @brief Method TimelineSetDuration, addr 0x5d85908, size 0x1c, virtual false, abstract: false, final false
inline void TimelineSetDuration(float_t  d) ;

/// @brief Method TimelineToggleDirection, addr 0x5d8556c, size 0x10, virtual false, abstract: false, final false
inline void TimelineToggleDirection() ;

/// @brief Method TimelineTogglePlay, addr 0x5d8557c, size 0x10, virtual false, abstract: false, final false
inline void TimelineTogglePlay() ;

constexpr bool const& __cordl_internal_get_IsForward() const;

constexpr bool& __cordl_internal_get_IsForward() ;

constexpr bool const& __cordl_internal_get_IsPlaying() const;

constexpr bool& __cordl_internal_get_IsPlaying() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpawned_k__BackingField() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_backwardDeltaMult() const;

constexpr float_t& __cordl_internal_get_backwardDeltaMult() ;

constexpr float_t const& __cordl_internal_get_backwardDuration() const;

constexpr float_t& __cordl_internal_get_backwardDuration() ;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& __cordl_internal_get_continuousProperties() const;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& __cordl_internal_get_continuousProperties() ;

constexpr float_t const& __cordl_internal_get_durationSeconds() const;

constexpr float_t& __cordl_internal_get_durationSeconds() ;

constexpr ::GlobalNamespace::ContinuousPropertyTimeline_TimelineEndBehavior const& __cordl_internal_get_endBehavior() const;

constexpr ::GlobalNamespace::ContinuousPropertyTimeline_TimelineEndBehavior& __cordl_internal_get_endBehavior() ;

constexpr ::GlobalNamespace::FlagEvents_1<::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent>* const& __cordl_internal_get_events() const;

constexpr ::GlobalNamespace::FlagEvents_1<::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent>*& __cordl_internal_get_events() ;

constexpr float_t const& __cordl_internal_get_inverseDuration() const;

constexpr float_t& __cordl_internal_get_inverseDuration() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr bool const& __cordl_internal_get_separateBackwardDuration() const;

constexpr bool& __cordl_internal_get_separateBackwardDuration() ;

constexpr bool const& __cordl_internal_get_startPlaying() const;

constexpr bool& __cordl_internal_get_startPlaying() ;

constexpr float_t const& __cordl_internal_get_time() const;

constexpr float_t& __cordl_internal_get_time() ;

constexpr void __cordl_internal_set_IsForward(bool  value) ;

constexpr void __cordl_internal_set_IsPlaying(bool  value) ;

constexpr void __cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_backwardDeltaMult(float_t  value) ;

constexpr void __cordl_internal_set_backwardDuration(float_t  value) ;

constexpr void __cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value) ;

constexpr void __cordl_internal_set_durationSeconds(float_t  value) ;

constexpr void __cordl_internal_set_endBehavior(::GlobalNamespace::ContinuousPropertyTimeline_TimelineEndBehavior  value) ;

constexpr void __cordl_internal_set_events(::GlobalNamespace::FlagEvents_1<::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent>*  value) ;

constexpr void __cordl_internal_set_inverseDuration(float_t  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_separateBackwardDuration(bool  value) ;

constexpr void __cordl_internal_set_startPlaying(bool  value) ;

constexpr void __cordl_internal_set_time(float_t  value) ;

/// @brief Method .ctor, addr 0x5d85d44, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CosmeticSelectedSide, addr 0x5d85d28, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() ;

/// @brief Method get_IsBackward, addr 0x5d85450, size 0x10, virtual false, abstract: false, final false
inline bool get_IsBackward() ;

/// @brief Method get_IsPaused, addr 0x5d8546c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsPaused() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpawned, addr 0x5d85d18, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5d85c7c, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CosmeticSelectedSide, addr 0x5d85d30, size 0x8, virtual true, abstract: false, final true
inline void set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// @brief Method set_IsBackward, addr 0x5d85460, size 0xc, virtual false, abstract: false, final false
inline void set_IsBackward(bool  value) ;

/// @brief Method set_IsPaused, addr 0x5d8547c, size 0xc, virtual false, abstract: false, final false
inline void set_IsPaused(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSpawned, addr 0x5d85d20, size 0x8, virtual true, abstract: false, final true
inline void set_IsSpawned(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5d85c84, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContinuousPropertyTimeline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContinuousPropertyTimeline", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuousPropertyTimeline(ContinuousPropertyTimeline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuousPropertyTimeline", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuousPropertyTimeline(ContinuousPropertyTimeline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4898};

/// [SerializeField]
/// @brief Field durationSeconds, offset: 0x20, size: 0x4, def value: None
 float_t  ___durationSeconds;

/// [SerializeField]
/// @brief Field backwardDuration, offset: 0x24, size: 0x4, def value: None
 float_t  ___backwardDuration;

/// [Tooltip("If true, the the timeline can move at a different speed when playing backwards.")]
/// [SerializeField]
/// @brief Field separateBackwardDuration, offset: 0x28, size: 0x1, def value: None
 bool  ___separateBackwardDuration;

/// [Tooltip("When this object is enabled for the first time, should it immediately start playing from the beginning?")]
/// [SerializeField]
/// @brief Field startPlaying, offset: 0x29, size: 0x1, def value: None
 bool  ___startPlaying;

/// [Tooltip("Determine what happens when the timeline reaches the end (or beginning while playing backwards).")]
/// [SerializeField]
/// @brief Field endBehavior, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::ContinuousPropertyTimeline_TimelineEndBehavior  ___endBehavior;

/// [SerializeField]
/// @brief Field continuousProperties, offset: 0x30, size: 0x8, def value: None
 ::GorillaTag::Cosmetics::ContinuousPropertyArray*  ___continuousProperties;

/// [SerializeField]
/// @brief Field events, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::FlagEvents_1<::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent>*  ___events;

/// @brief Field time, offset: 0x40, size: 0x4, def value: None
 float_t  ___time;

/// @brief Field inverseDuration, offset: 0x44, size: 0x4, def value: None
 float_t  ___inverseDuration;

/// @brief Field backwardDeltaMult, offset: 0x48, size: 0x4, def value: None
 float_t  ___backwardDeltaMult;

/// @brief Field IsForward, offset: 0x4c, size: 0x1, def value: None
 bool  ___IsForward;

/// @brief Field IsPlaying, offset: 0x4d, size: 0x1, def value: None
 bool  ___IsPlaying;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x4e, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// @brief Field myRig, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// [CompilerGenerated]
/// @brief Field <IsSpawned>k__BackingField, offset: 0x58, size: 0x1, def value: None
 bool  ____IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CosmeticSelectedSide>k__BackingField, offset: 0x5c, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyTimeline, ___durationSeconds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyTimeline, ___backwardDuration) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyTimeline, ___separateBackwardDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyTimeline, ___startPlaying) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyTimeline, ___endBehavior) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyTimeline, ___continuousProperties) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyTimeline, ___events) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyTimeline, ___time) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyTimeline, ___inverseDuration) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyTimeline, ___backwardDeltaMult) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyTimeline, ___IsForward) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyTimeline, ___IsPlaying) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyTimeline, ____TickRunning_k__BackingField) == 0x4e, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyTimeline, ___myRig) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyTimeline, ____IsSpawned_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyTimeline, ____CosmeticSelectedSide_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::ContinuousPropertyTimeline) == 0x60, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
