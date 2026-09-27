#pragma once
// IWYU pragma private; include "GlobalNamespace/TimeOfDayEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TimeEvent_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TimeOfDayEvent)
namespace GlobalNamespace {
class BetterDayNightManager;
}
// Forward declare root types
namespace GlobalNamespace {
class TimeOfDayEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TimeOfDayEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimeOfDayEvent*, "", "TimeOfDayEvent");
// Dependencies TimeEvent
namespace GlobalNamespace {
// Is value type: false
// CS Name: TimeOfDayEvent
class CORDL_TYPE TimeOfDayEvent : public ::GlobalNamespace::TimeEvent {
public:
// Declarations
/// @brief Field _currentSeconds, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentSeconds, put=__cordl_internal_set__currentSeconds)) double_t  _currentSeconds;

/// @brief Field _currentTime, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentTime, put=__cordl_internal_set__currentTime)) float_t  _currentTime;

/// @brief Field _dayNightManager, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__dayNightManager, put=__cordl_internal_set__dayNightManager)) ::UnityW<::GlobalNamespace::BetterDayNightManager>  _dayNightManager;

/// @brief Field _elapsed, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__elapsed, put=__cordl_internal_set__elapsed)) float_t  _elapsed;

/// @brief Field _timeEnd, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeEnd, put=__cordl_internal_set__timeEnd)) float_t  _timeEnd;

/// @brief Field _timeStart, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeStart, put=__cordl_internal_set__timeStart)) float_t  _timeStart;

/// @brief Field _totalSecondsInRange, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__totalSecondsInRange, put=__cordl_internal_set__totalSecondsInRange)) double_t  _totalSecondsInRange;

 __declspec(property(get=get_currentTime)) float_t  currentTime;

 __declspec(property(get=get_isOngoing)) bool  isOngoing;

 __declspec(property(get=get_timeEnd, put=set_timeEnd)) float_t  timeEnd;

 __declspec(property(get=get_timeStart, put=set_timeStart)) float_t  timeStart;

static inline ::GlobalNamespace::TimeOfDayEvent* New_ctor() ;

/// @brief Method Start, addr 0x5b239c4, size 0x184, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5b23b48, size 0x4c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateTime, addr 0x5b23b94, size 0x160, virtual false, abstract: false, final false
inline void UpdateTime() ;

constexpr double_t const& __cordl_internal_get__currentSeconds() const;

constexpr double_t& __cordl_internal_get__currentSeconds() ;

constexpr float_t const& __cordl_internal_get__currentTime() const;

constexpr float_t& __cordl_internal_get__currentTime() ;

constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager> const& __cordl_internal_get__dayNightManager() const;

constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager>& __cordl_internal_get__dayNightManager() ;

constexpr float_t const& __cordl_internal_get__elapsed() const;

constexpr float_t& __cordl_internal_get__elapsed() ;

constexpr float_t const& __cordl_internal_get__timeEnd() const;

constexpr float_t& __cordl_internal_get__timeEnd() ;

constexpr float_t const& __cordl_internal_get__timeStart() const;

constexpr float_t& __cordl_internal_get__timeStart() ;

constexpr double_t const& __cordl_internal_get__totalSecondsInRange() const;

constexpr double_t& __cordl_internal_get__totalSecondsInRange() ;

constexpr void __cordl_internal_set__currentSeconds(double_t  value) ;

constexpr void __cordl_internal_set__currentTime(float_t  value) ;

constexpr void __cordl_internal_set__dayNightManager(::UnityW<::GlobalNamespace::BetterDayNightManager>  value) ;

constexpr void __cordl_internal_set__elapsed(float_t  value) ;

constexpr void __cordl_internal_set__timeEnd(float_t  value) ;

constexpr void __cordl_internal_set__timeStart(float_t  value) ;

constexpr void __cordl_internal_set__totalSecondsInRange(double_t  value) ;

/// @brief Method .ctor, addr 0x5b23d70, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_currentTime, addr 0x5b23964, size 0x8, virtual false, abstract: false, final false
inline float_t get_currentTime() ;

/// @brief Method get_isOngoing, addr 0x5b239bc, size 0x8, virtual false, abstract: false, final false
inline bool get_isOngoing() ;

/// @brief Method get_timeEnd, addr 0x5b23994, size 0x8, virtual false, abstract: false, final false
inline float_t get_timeEnd() ;

/// @brief Method get_timeStart, addr 0x5b2396c, size 0x8, virtual false, abstract: false, final false
inline float_t get_timeStart() ;

/// @brief Method op_Implicit, addr 0x5b23cf4, size 0x7c, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::GlobalNamespace::TimeOfDayEvent*  ev) ;

/// @brief Method set_timeEnd, addr 0x5b2399c, size 0x20, virtual false, abstract: false, final false
inline void set_timeEnd(float_t  value) ;

/// @brief Method set_timeStart, addr 0x5b23974, size 0x20, virtual false, abstract: false, final false
inline void set_timeStart(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeOfDayEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeOfDayEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeOfDayEvent(TimeOfDayEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeOfDayEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeOfDayEvent(TimeOfDayEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3620};

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _timeStart, offset: 0x34, size: 0x4, def value: None
 float_t  ____timeStart;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _timeEnd, offset: 0x38, size: 0x4, def value: None
 float_t  ____timeEnd;

/// [SerializeField]
/// @brief Field _currentTime, offset: 0x3c, size: 0x4, def value: None
 float_t  ____currentTime;

/// [Space]
/// [SerializeField]
/// @brief Field _currentSeconds, offset: 0x40, size: 0x8, def value: None
 double_t  ____currentSeconds;

/// [SerializeField]
/// @brief Field _totalSecondsInRange, offset: 0x48, size: 0x8, def value: None
 double_t  ____totalSecondsInRange;

/// @brief Field _elapsed, offset: 0x50, size: 0x4, def value: None
 float_t  ____elapsed;

/// [SerializeField]
/// @brief Field _dayNightManager, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BetterDayNightManager>  ____dayNightManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeOfDayEvent, ____timeStart) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayEvent, ____timeEnd) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayEvent, ____currentTime) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayEvent, ____currentSeconds) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayEvent, ____totalSecondsInRange) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayEvent, ____elapsed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayEvent, ____dayNightManager) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimeOfDayEvent) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
