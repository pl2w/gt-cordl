#pragma once
// IWYU pragma private; include "GorillaTagScripts/GorillaTimer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaTimer)
namespace GorillaTagScripts {
class GorillaTimer__DelayedReStartTimer_d__11;
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
namespace GorillaTagScripts {
class GorillaTimer;
}
namespace GorillaTagScripts {
class GorillaTimer__DelayedReStartTimer_d__11;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GorillaTimer*);
MARK_REF_T(::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GorillaTimer*, "GorillaTagScripts", "GorillaTimer");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11*, "GorillaTagScripts", "GorillaTimer/<DelayedReStartTimer>d__11");
// Dependencies Photon.Pun.MonoBehaviourPun
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.GorillaTimer
class CORDL_TYPE GorillaTimer : public ::Photon::Pun::MonoBehaviourPun {
public:
// Declarations
using _DelayedReStartTimer_d__11 = ::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11;

/// @brief Field onTimerStarted, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTimerStarted, put=__cordl_internal_set_onTimerStarted)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::GorillaTimer>>*  onTimerStarted;

/// @brief Field onTimerStopped, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTimerStopped, put=__cordl_internal_set_onTimerStopped)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::GorillaTimer>>*  onTimerStopped;

/// @brief Field passedTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_passedTime, put=__cordl_internal_set_passedTime)) float_t  passedTime;

/// @brief Field randTimeMax, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_randTimeMax, put=__cordl_internal_set_randTimeMax)) float_t  randTimeMax;

/// @brief Field randTimeMin, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_randTimeMin, put=__cordl_internal_set_randTimeMin)) float_t  randTimeMin;

/// @brief Field resetTimer, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_resetTimer, put=__cordl_internal_set_resetTimer)) bool  resetTimer;

/// @brief Field startTimer, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_startTimer, put=__cordl_internal_set_startTimer)) bool  startTimer;

/// @brief Field timerDuration, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_timerDuration, put=__cordl_internal_set_timerDuration)) float_t  timerDuration;

/// @brief Field useRandomDuration, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_useRandomDuration, put=__cordl_internal_set_useRandomDuration)) bool  useRandomDuration;

/// @brief Method Awake, addr 0x5bcab40, size 0x8, virtual false, abstract: false, final false
inline void Awake() ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.GorillaTimer::<DelayedReStartTimer>d__11))]
/// @brief Method DelayedReStartTimer, addr 0x5bcabb4, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DelayedReStartTimer(float_t  delayTime) ;

/// @brief Method GetPassedTime, addr 0x5bcad44, size 0x8, virtual false, abstract: false, final false
inline float_t GetPassedTime() ;

/// @brief Method GetRemainingTime, addr 0x5bcad54, size 0x10, virtual false, abstract: false, final false
inline float_t GetRemainingTime() ;

/// @brief Method InvokeUpdate, addr 0x5bcacf0, size 0x54, virtual false, abstract: false, final false
inline void InvokeUpdate() ;

static inline ::GorillaTagScripts::GorillaTimer* New_ctor() ;

/// @brief Method OnDisable, addr 0x5bcaf0c, size 0x54, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5bcad64, size 0x54, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ResetTimer, addr 0x5bcab48, size 0x8, virtual false, abstract: false, final false
inline void ResetTimer() ;

/// @brief Method RestartTimer, addr 0x5bcacb8, size 0x30, virtual false, abstract: false, final false
inline void RestartTimer() ;

/// @brief Method SetPassedTime, addr 0x5bcad4c, size 0x8, virtual false, abstract: false, final false
inline void SetPassedTime(float_t  time) ;

/// @brief Method SetTimerDuration, addr 0x5bcace8, size 0x8, virtual false, abstract: false, final false
inline void SetTimerDuration(float_t  timer) ;

/// @brief Method StartTimer, addr 0x5bcab50, size 0x64, virtual false, abstract: false, final false
inline void StartTimer() ;

/// @brief Method StopTimer, addr 0x5bcac58, size 0x60, virtual false, abstract: false, final false
inline void StopTimer() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::GorillaTimer>>* const& __cordl_internal_get_onTimerStarted() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::GorillaTimer>>*& __cordl_internal_get_onTimerStarted() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::GorillaTimer>>* const& __cordl_internal_get_onTimerStopped() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::GorillaTimer>>*& __cordl_internal_get_onTimerStopped() ;

constexpr float_t const& __cordl_internal_get_passedTime() const;

constexpr float_t& __cordl_internal_get_passedTime() ;

constexpr float_t const& __cordl_internal_get_randTimeMax() const;

constexpr float_t& __cordl_internal_get_randTimeMax() ;

constexpr float_t const& __cordl_internal_get_randTimeMin() const;

constexpr float_t& __cordl_internal_get_randTimeMin() ;

constexpr bool const& __cordl_internal_get_resetTimer() const;

constexpr bool& __cordl_internal_get_resetTimer() ;

constexpr bool const& __cordl_internal_get_startTimer() const;

constexpr bool& __cordl_internal_get_startTimer() ;

constexpr float_t const& __cordl_internal_get_timerDuration() const;

constexpr float_t& __cordl_internal_get_timerDuration() ;

constexpr bool const& __cordl_internal_get_useRandomDuration() const;

constexpr bool& __cordl_internal_get_useRandomDuration() ;

constexpr void __cordl_internal_set_onTimerStarted(::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::GorillaTimer>>*  value) ;

constexpr void __cordl_internal_set_onTimerStopped(::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::GorillaTimer>>*  value) ;

constexpr void __cordl_internal_set_passedTime(float_t  value) ;

constexpr void __cordl_internal_set_randTimeMax(float_t  value) ;

constexpr void __cordl_internal_set_randTimeMin(float_t  value) ;

constexpr void __cordl_internal_set_resetTimer(bool  value) ;

constexpr void __cordl_internal_set_startTimer(bool  value) ;

constexpr void __cordl_internal_set_timerDuration(float_t  value) ;

constexpr void __cordl_internal_set_useRandomDuration(bool  value) ;

/// @brief Method .ctor, addr 0x5bcb060, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTimer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTimer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTimer(GorillaTimer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTimer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTimer(GorillaTimer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3992};

/// [SerializeField]
/// @brief Field timerDuration, offset: 0x28, size: 0x4, def value: None
 float_t  ___timerDuration;

/// [SerializeField]
/// @brief Field useRandomDuration, offset: 0x2c, size: 0x1, def value: None
 bool  ___useRandomDuration;

/// [SerializeField]
/// @brief Field randTimeMin, offset: 0x30, size: 0x4, def value: None
 float_t  ___randTimeMin;

/// [SerializeField]
/// @brief Field randTimeMax, offset: 0x34, size: 0x4, def value: None
 float_t  ___randTimeMax;

/// @brief Field passedTime, offset: 0x38, size: 0x4, def value: None
 float_t  ___passedTime;

/// @brief Field startTimer, offset: 0x3c, size: 0x1, def value: None
 bool  ___startTimer;

/// @brief Field resetTimer, offset: 0x3d, size: 0x1, def value: None
 bool  ___resetTimer;

/// @brief Field onTimerStarted, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::GorillaTimer>>*  ___onTimerStarted;

/// @brief Field onTimerStopped, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::GorillaTimer>>*  ___onTimerStopped;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GorillaTimer, ___timerDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaTimer, ___useRandomDuration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaTimer, ___randTimeMin) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaTimer, ___randTimeMax) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaTimer, ___passedTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaTimer, ___startTimer) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaTimer, ___resetTimer) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaTimer, ___onTimerStarted) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaTimer, ___onTimerStopped) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GorillaTimer) == 0x50, "Size mismatch!");

} // namespace end def GorillaTagScripts
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.GorillaTimer/<DelayedReStartTimer>d__11
class CORDL_TYPE GorillaTimer__DelayedReStartTimer_d__11 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::GorillaTimer>  __4__this;

/// @brief Field delayTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_delayTime, put=__cordl_internal_set_delayTime)) float_t  delayTime;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5bcb06c, size 0xb8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5bcb124, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5bcb12c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5bcb164, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5bcb068, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::GorillaTimer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::GorillaTimer>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get_delayTime() const;

constexpr float_t& __cordl_internal_get_delayTime() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::GorillaTimer>  value) ;

constexpr void __cordl_internal_set_delayTime(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5bcac30, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaTimer__DelayedReStartTimer_d__11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTimer__DelayedReStartTimer_d__11", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTimer__DelayedReStartTimer_d__11(GorillaTimer__DelayedReStartTimer_d__11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTimer__DelayedReStartTimer_d__11", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTimer__DelayedReStartTimer_d__11(GorillaTimer__DelayedReStartTimer_d__11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3991};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field delayTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___delayTime;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::GorillaTimer>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11, ___delayTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11, _____4__this) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts
