#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerTimeEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ServerTimeEvent_EventTime_def.hpp"
#include "GlobalNamespace/zzzz__TimeEvent_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ServerTimeEvent)
namespace GlobalNamespace {
struct ServerTimeEvent_EventTime;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ServerTimeEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ServerTimeEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ServerTimeEvent*, "", "ServerTimeEvent");
// Dependencies ServerTimeEvent::EventTime, TimeEvent
namespace GlobalNamespace {
// Is value type: false
// CS Name: ServerTimeEvent
class CORDL_TYPE ServerTimeEvent : public ::GlobalNamespace::TimeEvent {
public:
// Declarations
using EventTime = ::GlobalNamespace::ServerTimeEvent_EventTime;

/// @brief Field eventTimes, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_eventTimes, put=__cordl_internal_set_eventTimes)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ServerTimeEvent_EventTime>*  eventTimes;

/// @brief Field lastQueryTime, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastQueryTime, put=__cordl_internal_set_lastQueryTime)) float_t  lastQueryTime;

/// @brief Field queryTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_queryTime, put=__cordl_internal_set_queryTime)) float_t  queryTime;

/// @brief Field times, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_times, put=__cordl_internal_set_times)) ::ArrayW<::GlobalNamespace::ServerTimeEvent_EventTime>  times;

/// @brief Method Awake, addr 0x5b2369c, size 0x84, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ServerTimeEvent* New_ctor() ;

/// @brief Method Update, addr 0x5b23720, size 0x1e8, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ServerTimeEvent_EventTime>* const& __cordl_internal_get_eventTimes() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ServerTimeEvent_EventTime>*& __cordl_internal_get_eventTimes() ;

constexpr float_t const& __cordl_internal_get_lastQueryTime() const;

constexpr float_t& __cordl_internal_get_lastQueryTime() ;

constexpr float_t const& __cordl_internal_get_queryTime() const;

constexpr float_t& __cordl_internal_get_queryTime() ;

constexpr ::ArrayW<::GlobalNamespace::ServerTimeEvent_EventTime> const& __cordl_internal_get_times() const;

constexpr ::ArrayW<::GlobalNamespace::ServerTimeEvent_EventTime>& __cordl_internal_get_times() ;

constexpr void __cordl_internal_set_eventTimes(::System::Collections::Generic::HashSet_1<::GlobalNamespace::ServerTimeEvent_EventTime>*  value) ;

constexpr void __cordl_internal_set_lastQueryTime(float_t  value) ;

constexpr void __cordl_internal_set_queryTime(float_t  value) ;

constexpr void __cordl_internal_set_times(::ArrayW<::GlobalNamespace::ServerTimeEvent_EventTime>  value) ;

/// @brief Method .ctor, addr 0x5b2394c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerTimeEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerTimeEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerTimeEvent(ServerTimeEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerTimeEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerTimeEvent(ServerTimeEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3618};

/// [SerializeField]
/// @brief Field times, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ServerTimeEvent_EventTime>  ___times;

/// [SerializeField]
/// @brief Field queryTime, offset: 0x40, size: 0x4, def value: None
 float_t  ___queryTime;

/// @brief Field lastQueryTime, offset: 0x44, size: 0x4, def value: None
 float_t  ___lastQueryTime;

/// @brief Field eventTimes, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ServerTimeEvent_EventTime>*  ___eventTimes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ServerTimeEvent, ___times) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerTimeEvent, ___queryTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerTimeEvent, ___lastQueryTime) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerTimeEvent, ___eventTimes) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ServerTimeEvent) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
