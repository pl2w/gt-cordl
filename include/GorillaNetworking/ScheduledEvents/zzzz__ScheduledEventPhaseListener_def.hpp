#pragma once
// IWYU pragma private; include "GorillaNetworking/ScheduledEvents/ScheduledEventPhaseListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScheduledEventPhaseListener)
namespace GorillaNetworking::ScheduledEvents {
class ScheduledEventPhaseListener__OnEnableDefered_d__5;
}
namespace GorillaNetworking::ScheduledEvents {
struct ScheduledEventPhase;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace GorillaNetworking::ScheduledEvents {
class ScheduledEventPhaseListener;
}
namespace GorillaNetworking::ScheduledEvents {
class ScheduledEventPhaseListener__OnEnableDefered_d__5;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener*);
MARK_REF_T(::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener*, "GorillaNetworking.ScheduledEvents", "ScheduledEventPhaseListener");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5*, "GorillaNetworking.ScheduledEvents", "ScheduledEventPhaseListener/<OnEnableDefered>d__5");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaNetworking::ScheduledEvents {
// Is value type: false
// CS Name: GorillaNetworking.ScheduledEvents.ScheduledEventPhaseListener
class CORDL_TYPE ScheduledEventPhaseListener : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _OnEnableDefered_d__5 = ::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5;

/// @brief Field _onAfter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__onAfter, put=__cordl_internal_set__onAfter)) ::UnityEngine::Events::UnityEvent_1<float_t>*  _onAfter;

/// @brief Field _onBefore, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__onBefore, put=__cordl_internal_set__onBefore)) ::UnityEngine::Events::UnityEvent_1<float_t>*  _onBefore;

/// @brief Field _onDuring, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__onDuring, put=__cordl_internal_set__onDuring)) ::UnityEngine::Events::UnityEvent_1<float_t>*  _onDuring;

/// @brief Field _onNoEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__onNoEvent, put=__cordl_internal_set__onNoEvent)) ::UnityEngine::Events::UnityEvent_1<float_t>*  _onNoEvent;

/// @brief Method DebugStartCountdown, addr 0x5ca25e4, size 0x4c, virtual false, abstract: false, final false
inline void DebugStartCountdown() ;

static inline ::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener* New_ctor() ;

/// @brief Method OnDisable, addr 0x5ca2524, size 0xc0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5ca2254, size 0x150, virtual false, abstract: false, final false
inline void OnEnable() ;

/// [IteratorStateMachine(typeof(GorillaNetworking.ScheduledEvents.ScheduledEventPhaseListener::<OnEnableDefered>d__5))]
/// @brief Method OnEnableDefered, addr 0x5ca23a4, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* OnEnableDefered() ;

/// @brief Method OnPhaseChange, addr 0x5ca2438, size 0xec, virtual false, abstract: false, final false
inline void OnPhaseChange(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  phase) ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get__onAfter() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get__onAfter() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get__onBefore() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get__onBefore() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get__onDuring() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get__onDuring() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get__onNoEvent() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get__onNoEvent() ;

constexpr void __cordl_internal_set__onAfter(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

constexpr void __cordl_internal_set__onBefore(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

constexpr void __cordl_internal_set__onDuring(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

constexpr void __cordl_internal_set__onNoEvent(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0x5ca2630, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScheduledEventPhaseListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScheduledEventPhaseListener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScheduledEventPhaseListener(ScheduledEventPhaseListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScheduledEventPhaseListener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScheduledEventPhaseListener(ScheduledEventPhaseListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4413};

/// [SerializeField]
/// @brief Field _onBefore, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ____onBefore;

/// [SerializeField]
/// @brief Field _onDuring, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ____onDuring;

/// [SerializeField]
/// @brief Field _onAfter, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ____onAfter;

/// [SerializeField]
/// @brief Field _onNoEvent, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ____onNoEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener, ____onBefore) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener, ____onDuring) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener, ____onAfter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener, ____onNoEvent) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener) == 0x40, "Size mismatch!");

} // namespace end def GorillaNetworking::ScheduledEvents
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking::ScheduledEvents {
// Is value type: false
// CS Name: GorillaNetworking.ScheduledEvents.ScheduledEventPhaseListener/<OnEnableDefered>d__5
class CORDL_TYPE ScheduledEventPhaseListener__OnEnableDefered_d__5 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5ca263c, size 0xe8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5ca2724, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ca272c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ca2764, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5ca2638, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5ca2410, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScheduledEventPhaseListener__OnEnableDefered_d__5() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScheduledEventPhaseListener__OnEnableDefered_d__5", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScheduledEventPhaseListener__OnEnableDefered_d__5(ScheduledEventPhaseListener__OnEnableDefered_d__5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScheduledEventPhaseListener__OnEnableDefered_d__5", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScheduledEventPhaseListener__OnEnableDefered_d__5(ScheduledEventPhaseListener__OnEnableDefered_d__5 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4412};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5) == 0x28, "Size mismatch!");

} // namespace end def GorillaNetworking::ScheduledEvents
