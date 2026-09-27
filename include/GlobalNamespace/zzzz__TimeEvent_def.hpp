#pragma once
// IWYU pragma private; include "GlobalNamespace/TimeEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TimeEvent)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class TimeEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TimeEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimeEvent*, "", "TimeEvent");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TimeEvent
class CORDL_TYPE TimeEvent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _ongoing, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__ongoing, put=__cordl_internal_set__ongoing)) bool  _ongoing;

/// @brief Field onEventStart, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEventStart, put=__cordl_internal_set_onEventStart)) ::UnityEngine::Events::UnityEvent*  onEventStart;

/// @brief Field onEventStop, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEventStop, put=__cordl_internal_set_onEventStop)) ::UnityEngine::Events::UnityEvent*  onEventStop;

static inline ::GlobalNamespace::TimeEvent* New_ctor() ;

/// @brief Method StartEvent, addr 0x5b23910, size 0x20, virtual false, abstract: false, final false
inline void StartEvent() ;

/// @brief Method StopEvent, addr 0x5b23930, size 0x1c, virtual false, abstract: false, final false
inline void StopEvent() ;

constexpr bool const& __cordl_internal_get__ongoing() const;

constexpr bool& __cordl_internal_get__ongoing() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onEventStart() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onEventStart() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onEventStop() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onEventStop() ;

constexpr void __cordl_internal_set__ongoing(bool  value) ;

constexpr void __cordl_internal_set_onEventStart(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onEventStop(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x5b2395c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeEvent(TimeEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeEvent(TimeEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3619};

/// @brief Field onEventStart, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onEventStart;

/// @brief Field onEventStop, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onEventStop;

/// [SerializeField]
/// @brief Field _ongoing, offset: 0x30, size: 0x1, def value: None
 bool  ____ongoing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeEvent, ___onEventStart) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeEvent, ___onEventStop) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeEvent, ____ongoing) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimeEvent) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
