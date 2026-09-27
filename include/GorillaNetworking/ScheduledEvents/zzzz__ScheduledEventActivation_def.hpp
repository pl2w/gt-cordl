#pragma once
// IWYU pragma private; include "GorillaNetworking/ScheduledEvents/ScheduledEventActivation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventPhase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScheduledEventActivation)
namespace GorillaNetworking::ScheduledEvents {
class ScheduledEventActivation_ScheduledEventActivationTarget;
}
namespace GorillaNetworking::ScheduledEvents {
class ScheduledEventActivation__SubscribeWhenReady_d__6;
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
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaNetworking::ScheduledEvents {
class ScheduledEventActivation;
}
namespace GorillaNetworking::ScheduledEvents {
class ScheduledEventActivation_ScheduledEventActivationTarget;
}
namespace GorillaNetworking::ScheduledEvents {
class ScheduledEventActivation__SubscribeWhenReady_d__6;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation*);
MARK_REF_T(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget*);
MARK_REF_T(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation*, "GorillaNetworking.ScheduledEvents", "ScheduledEventActivation");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget*, "GorillaNetworking.ScheduledEvents", "ScheduledEventActivation/ScheduledEventActivationTarget");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6*, "GorillaNetworking.ScheduledEvents", "ScheduledEventActivation/<SubscribeWhenReady>d__6");
// Dependencies GorillaNetworking.ScheduledEvents.ScheduledEventActivation::ScheduledEventActivationTarget, GorillaNetworking.ScheduledEvents.ScheduledEventPhase, UnityEngine.MonoBehaviour
namespace GorillaNetworking::ScheduledEvents {
// Is value type: false
// CS Name: GorillaNetworking.ScheduledEvents.ScheduledEventActivation
class CORDL_TYPE ScheduledEventActivation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ScheduledEventActivationTarget = ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget;

using _SubscribeWhenReady_d__6 = ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6;

/// @brief Field currentPhase, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentPhase, put=__cordl_internal_set_currentPhase)) ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  currentPhase;

/// @brief Field currentSubphase, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSubphase, put=__cordl_internal_set_currentSubphase)) int32_t  currentSubphase;

/// @brief Field nodes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodes, put=__cordl_internal_set_nodes)) ::ArrayW<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget*>  nodes;

/// @brief Field subscribed, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_subscribed, put=__cordl_internal_set_subscribed)) bool  subscribed;

/// @brief Method ApplyAll, addr 0x5c9e3d0, size 0x60, virtual false, abstract: false, final false
inline void ApplyAll() ;

static inline ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation* New_ctor() ;

/// @brief Method OnDisable, addr 0x5c9e430, size 0x1a8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5c9df90, size 0xbc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPhaseChanged, addr 0x5c9e738, size 0x8, virtual false, abstract: false, final false
inline void OnPhaseChanged(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  phase) ;

/// @brief Method OnSubphaseChanged, addr 0x5c9e740, size 0x18, virtual false, abstract: false, final false
inline void OnSubphaseChanged(int32_t  subphase) ;

/// @brief Method Subscribe, addr 0x5c9e0b8, size 0x190, virtual false, abstract: false, final false
inline void Subscribe() ;

/// [IteratorStateMachine(typeof(GorillaNetworking.ScheduledEvents.ScheduledEventActivation::<SubscribeWhenReady>d__6))]
/// @brief Method SubscribeWhenReady, addr 0x5c9e04c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SubscribeWhenReady() ;

constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase const& __cordl_internal_get_currentPhase() const;

constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase& __cordl_internal_get_currentPhase() ;

constexpr int32_t const& __cordl_internal_get_currentSubphase() const;

constexpr int32_t& __cordl_internal_get_currentSubphase() ;

constexpr ::ArrayW<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget*> const& __cordl_internal_get_nodes() const;

constexpr ::ArrayW<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget*>& __cordl_internal_get_nodes() ;

constexpr bool const& __cordl_internal_get_subscribed() const;

constexpr bool& __cordl_internal_get_subscribed() ;

constexpr void __cordl_internal_set_currentPhase(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  value) ;

constexpr void __cordl_internal_set_currentSubphase(int32_t  value) ;

constexpr void __cordl_internal_set_nodes(::ArrayW<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget*>  value) ;

constexpr void __cordl_internal_set_subscribed(bool  value) ;

/// @brief Method .ctor, addr 0x5c9e848, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScheduledEventActivation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScheduledEventActivation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScheduledEventActivation(ScheduledEventActivation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScheduledEventActivation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScheduledEventActivation(ScheduledEventActivation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4403};

/// [SerializeField]
/// @brief Field nodes, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget*>  ___nodes;

/// @brief Field subscribed, offset: 0x28, size: 0x1, def value: None
 bool  ___subscribed;

/// @brief Field currentPhase, offset: 0x2c, size: 0x4, def value: None
 ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  ___currentPhase;

/// @brief Field currentSubphase, offset: 0x30, size: 0x4, def value: None
 int32_t  ___currentSubphase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation, ___nodes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation, ___subscribed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation, ___currentPhase) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation, ___currentSubphase) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation) == 0x38, "Size mismatch!");

} // namespace end def GorillaNetworking::ScheduledEvents
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking::ScheduledEvents {
// Is value type: false
// CS Name: GorillaNetworking.ScheduledEvents.ScheduledEventActivation/<SubscribeWhenReady>d__6
class CORDL_TYPE ScheduledEventActivation__SubscribeWhenReady_d__6 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c9e958, size 0xf8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c9ea50, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c9ea58, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c9ea90, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c9e954, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c9e248, size 0x28, virtual false, abstract: false, final false
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
constexpr ScheduledEventActivation__SubscribeWhenReady_d__6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScheduledEventActivation__SubscribeWhenReady_d__6", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScheduledEventActivation__SubscribeWhenReady_d__6(ScheduledEventActivation__SubscribeWhenReady_d__6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScheduledEventActivation__SubscribeWhenReady_d__6", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScheduledEventActivation__SubscribeWhenReady_d__6(ScheduledEventActivation__SubscribeWhenReady_d__6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4402};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6) == 0x28, "Size mismatch!");

} // namespace end def GorillaNetworking::ScheduledEvents
// Dependencies System.Object
namespace GorillaNetworking::ScheduledEvents {
// Is value type: false
// CS Name: GorillaNetworking.ScheduledEvents.ScheduledEventActivation/ScheduledEventActivationTarget
class CORDL_TYPE ScheduledEventActivation_ScheduledEventActivationTarget : public ::System::Object {
public:
// Declarations
/// @brief Field duringSubphases, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_duringSubphases, put=__cordl_internal_set_duringSubphases)) ::ArrayW<int32_t>  duringSubphases;

/// @brief Field enableAfter, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableAfter, put=__cordl_internal_set_enableAfter)) bool  enableAfter;

/// @brief Field enableBefore, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableBefore, put=__cordl_internal_set_enableBefore)) bool  enableBefore;

/// @brief Field enableDuring, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableDuring, put=__cordl_internal_set_enableDuring)) bool  enableDuring;

/// @brief Field enableIfNoEvent, offset 0x1b, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableIfNoEvent, put=__cordl_internal_set_enableIfNoEvent)) bool  enableIfNoEvent;

/// @brief Field gameObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObject, put=__cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Field onActivate, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onActivate, put=__cordl_internal_set_onActivate)) ::UnityEngine::Events::UnityEvent*  onActivate;

/// @brief Field onDeactivate, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDeactivate, put=__cordl_internal_set_onDeactivate)) ::UnityEngine::Events::UnityEvent*  onDeactivate;

/// @brief Method Apply, addr 0x5c9e758, size 0xf0, virtual false, abstract: false, final false
inline void Apply(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  phase, int32_t  subphase) ;

/// @brief Method IsActive, addr 0x5c9e8b0, size 0x9c, virtual false, abstract: false, final false
inline bool IsActive(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  phase, int32_t  subphase) ;

/// @brief Method MatchesPhase, addr 0x5c9e85c, size 0x54, virtual false, abstract: false, final false
inline bool MatchesPhase(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  phase) ;

static inline ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget* New_ctor() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_duringSubphases() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_duringSubphases() ;

constexpr bool const& __cordl_internal_get_enableAfter() const;

constexpr bool& __cordl_internal_get_enableAfter() ;

constexpr bool const& __cordl_internal_get_enableBefore() const;

constexpr bool& __cordl_internal_get_enableBefore() ;

constexpr bool const& __cordl_internal_get_enableDuring() const;

constexpr bool& __cordl_internal_get_enableDuring() ;

constexpr bool const& __cordl_internal_get_enableIfNoEvent() const;

constexpr bool& __cordl_internal_get_enableIfNoEvent() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onActivate() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onActivate() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onDeactivate() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onDeactivate() ;

constexpr void __cordl_internal_set_duringSubphases(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_enableAfter(bool  value) ;

constexpr void __cordl_internal_set_enableBefore(bool  value) ;

constexpr void __cordl_internal_set_enableDuring(bool  value) ;

constexpr void __cordl_internal_set_enableIfNoEvent(bool  value) ;

constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_onActivate(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onDeactivate(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x5c9e94c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScheduledEventActivation_ScheduledEventActivationTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScheduledEventActivation_ScheduledEventActivationTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScheduledEventActivation_ScheduledEventActivationTarget(ScheduledEventActivation_ScheduledEventActivationTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScheduledEventActivation_ScheduledEventActivationTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScheduledEventActivation_ScheduledEventActivationTarget(ScheduledEventActivation_ScheduledEventActivationTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4401};

/// [SerializeField]
/// @brief Field gameObject, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gameObject;

/// [SerializeField]
/// @brief Field enableBefore, offset: 0x18, size: 0x1, def value: None
 bool  ___enableBefore;

/// [SerializeField]
/// @brief Field enableDuring, offset: 0x19, size: 0x1, def value: None
 bool  ___enableDuring;

/// [SerializeField]
/// @brief Field enableAfter, offset: 0x1a, size: 0x1, def value: None
 bool  ___enableAfter;

/// [SerializeField]
/// @brief Field enableIfNoEvent, offset: 0x1b, size: 0x1, def value: None
 bool  ___enableIfNoEvent;

/// [Tooltip("Subphases (ScheduledEventManager.EventSubphase) in which this object is active during the event. Leave empty to be active for the entire During phase regardless of subphase.")]
/// [SerializeField]
/// @brief Field duringSubphases, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___duringSubphases;

/// [SerializeField]
/// @brief Field onActivate, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onActivate;

/// [SerializeField]
/// @brief Field onDeactivate, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onDeactivate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget, ___gameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget, ___enableBefore) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget, ___enableDuring) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget, ___enableAfter) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget, ___enableIfNoEvent) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget, ___duringSubphases) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget, ___onActivate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget, ___onDeactivate) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget) == 0x38, "Size mismatch!");

} // namespace end def GorillaNetworking::ScheduledEvents
