#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/AnimatedSnapTurnVisuals.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatedSnapTurnVisuals)
namespace Oculus::Interaction::Locomotion {
class AnimatedSnapTurnVisuals__AnimationRoutine_d__25;
}
namespace Oculus::Interaction::Locomotion {
class AnimatedSnapTurnVisuals___c;
}
namespace Oculus::Interaction::Locomotion {
class ILocomotionEventBroadcaster;
}
namespace Oculus::Interaction::Locomotion {
struct LocomotionEvent;
}
namespace Oculus::Interaction::Locomotion {
class TurnArrowVisuals;
}
namespace Oculus::Interaction {
class ITimeConsumer;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class AnimatedSnapTurnVisuals;
}
namespace Oculus::Interaction::Locomotion {
class AnimatedSnapTurnVisuals__AnimationRoutine_d__25;
}
namespace Oculus::Interaction::Locomotion {
class AnimatedSnapTurnVisuals___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*);
MARK_REF_T(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25*);
MARK_REF_T(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*, "Oculus.Interaction.Locomotion", "AnimatedSnapTurnVisuals");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25*, "Oculus.Interaction.Locomotion", "AnimatedSnapTurnVisuals/<AnimationRoutine>d__25");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c*, "Oculus.Interaction.Locomotion", "AnimatedSnapTurnVisuals/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.AnimatedSnapTurnVisuals
class CORDL_TYPE AnimatedSnapTurnVisuals : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _AnimationRoutine_d__25 = ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25;

using __c = ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c;

 __declspec(property(get=get_Animation, put=set_Animation)) ::UnityEngine::AnimationCurve*  Animation;

 __declspec(property(get=get_HighlightOffset, put=set_HighlightOffset)) float_t  HighlightOffset;

 __declspec(property(get=get_LocomotionEventBroadcaster, put=set_LocomotionEventBroadcaster)) ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*  LocomotionEventBroadcaster;

/// @brief Field <LocomotionEventBroadcaster>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__LocomotionEventBroadcaster_k__BackingField, put=__cordl_internal_set__LocomotionEventBroadcaster_k__BackingField)) ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*  _LocomotionEventBroadcaster_k__BackingField;

/// @brief Field _animation, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__animation, put=__cordl_internal_set__animation)) ::UnityEngine::AnimationCurve*  _animation;

/// @brief Field _animationRoutine, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__animationRoutine, put=__cordl_internal_set__animationRoutine)) ::UnityEngine::Coroutine*  _animationRoutine;

/// @brief Field _highlightOffset, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__highlightOffset, put=__cordl_internal_set__highlightOffset)) float_t  _highlightOffset;

/// @brief Field _locomotionEventBroadcaster, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__locomotionEventBroadcaster, put=__cordl_internal_set__locomotionEventBroadcaster)) ::UnityW<::UnityEngine::Object>  _locomotionEventBroadcaster;

/// @brief Field _progressValue, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__progressValue, put=__cordl_internal_set__progressValue)) float_t  _progressValue;

/// @brief Field _started, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _timeProvider, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeProvider, put=__cordl_internal_set__timeProvider)) ::System::Func_1<float_t>*  _timeProvider;

/// @brief Field _visuals, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__visuals, put=__cordl_internal_set__visuals)) ::UnityW<::Oculus::Interaction::Locomotion::TurnArrowVisuals>  _visuals;

/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr operator  ::Oculus::Interaction::ITimeConsumer*() noexcept;

/// [IteratorStateMachine(typeof(Oculus.Interaction.Locomotion.AnimatedSnapTurnVisuals::<AnimationRoutine>d__25))]
/// @brief Method AnimationRoutine, addr 0xa4d22a0, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* AnimationRoutine(float_t  direction) ;

/// @brief Method Awake, addr 0xa4d1ee0, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleLocomotionPerformed, addr 0xa4d2198, size 0xc4, virtual false, abstract: false, final false
inline void HandleLocomotionPerformed(::Oculus::Interaction::Locomotion::LocomotionEvent  ev) ;

/// @brief Method InjectAllAnimatedSnapTurnVisuals, addr 0xa4d2344, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllAnimatedSnapTurnVisuals(::Oculus::Interaction::Locomotion::TurnArrowVisuals*  visuals, ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*  locomotionEventBroadcaster) ;

/// @brief Method InjectLocomotionEventBroadcaster, addr 0xa4d2370, size 0xcc, virtual false, abstract: false, final false
inline void InjectLocomotionEventBroadcaster(::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*  locomotionEventBroadcaster) ;

/// @brief Method InjectVisuals, addr 0xa4d243c, size 0x8, virtual false, abstract: false, final false
inline void InjectVisuals(::Oculus::Interaction::Locomotion::TurnArrowVisuals*  visuals) ;

static inline ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4d2098, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4d1f64, size 0x110, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetTimeProvider, addr 0xa4d1ed8, size 0x8, virtual true, abstract: false, final true
inline void SetTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method Start, addr 0xa4d1f38, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method StopAnimation, addr 0xa4d225c, size 0x44, virtual false, abstract: false, final false
inline void StopAnimation() ;

constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* const& __cordl_internal_get__LocomotionEventBroadcaster_k__BackingField() const;

constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*& __cordl_internal_get__LocomotionEventBroadcaster_k__BackingField() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__animation() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__animation() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__animationRoutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__animationRoutine() ;

constexpr float_t const& __cordl_internal_get__highlightOffset() const;

constexpr float_t& __cordl_internal_get__highlightOffset() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__locomotionEventBroadcaster() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__locomotionEventBroadcaster() ;

constexpr float_t const& __cordl_internal_get__progressValue() const;

constexpr float_t& __cordl_internal_get__progressValue() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__timeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__timeProvider() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::TurnArrowVisuals> const& __cordl_internal_get__visuals() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::TurnArrowVisuals>& __cordl_internal_get__visuals() ;

constexpr void __cordl_internal_set__LocomotionEventBroadcaster_k__BackingField(::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*  value) ;

constexpr void __cordl_internal_set__animation(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__animationRoutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__highlightOffset(float_t  value) ;

constexpr void __cordl_internal_set__locomotionEventBroadcaster(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__progressValue(float_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value) ;

constexpr void __cordl_internal_set__visuals(::UnityW<::Oculus::Interaction::Locomotion::TurnArrowVisuals>  value) ;

/// @brief Method .ctor, addr 0xa4d2444, size 0xfc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Animation, addr 0xa4d1eb8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_Animation() ;

/// @brief Method get_HighlightOffset, addr 0xa4d1ec8, size 0x8, virtual false, abstract: false, final false
inline float_t get_HighlightOffset() ;

/// [CompilerGenerated]
/// @brief Method get_LocomotionEventBroadcaster, addr 0xa4d1ea8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* get_LocomotionEventBroadcaster() ;

/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* i___Oculus__Interaction__ITimeConsumer() noexcept;

/// @brief Method set_Animation, addr 0xa4d1ec0, size 0x8, virtual false, abstract: false, final false
inline void set_Animation(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_HighlightOffset, addr 0xa4d1ed0, size 0x8, virtual false, abstract: false, final false
inline void set_HighlightOffset(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_LocomotionEventBroadcaster, addr 0xa4d1eb0, size 0x8, virtual false, abstract: false, final false
inline void set_LocomotionEventBroadcaster(::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatedSnapTurnVisuals() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatedSnapTurnVisuals", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatedSnapTurnVisuals(AnimatedSnapTurnVisuals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedSnapTurnVisuals", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatedSnapTurnVisuals(AnimatedSnapTurnVisuals const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16294};

/// [SerializeField]
/// @brief Field _visuals, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::TurnArrowVisuals>  ____visuals;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Locomotion.ILocomotionEventBroadcaster), new[] {  })]
/// @brief Field _locomotionEventBroadcaster, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____locomotionEventBroadcaster;

/// [CompilerGenerated]
/// @brief Field <LocomotionEventBroadcaster>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*  ____LocomotionEventBroadcaster_k__BackingField;

/// [SerializeField]
/// @brief Field _animation, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____animation;

/// [SerializeField]
/// @brief Field _highlightOffset, offset: 0x40, size: 0x4, def value: None
 float_t  ____highlightOffset;

/// @brief Field _timeProvider, offset: 0x48, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____timeProvider;

/// @brief Field _progressValue, offset: 0x50, size: 0x4, def value: None
 float_t  ____progressValue;

/// @brief Field _animationRoutine, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____animationRoutine;

/// @brief Field _started, offset: 0x60, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals, ____visuals) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals, ____locomotionEventBroadcaster) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals, ____LocomotionEventBroadcaster_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals, ____animation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals, ____highlightOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals, ____timeProvider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals, ____progressValue) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals, ____animationRoutine) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals, ____started) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.AnimatedSnapTurnVisuals/<AnimationRoutine>d__25
class CORDL_TYPE AnimatedSnapTurnVisuals__AnimationRoutine_d__25 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals>  __4__this;

/// @brief Field <ellapsedTime>5__4, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__ellapsedTime_5__4, put=__cordl_internal_set__ellapsedTime_5__4)) float_t  _ellapsedTime_5__4;

/// @brief Field <startTime>5__3, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime_5__3, put=__cordl_internal_set__startTime_5__3)) float_t  _startTime_5__3;

/// @brief Field <totalTime>5__2, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__totalTime_5__2, put=__cordl_internal_set__totalTime_5__2)) float_t  _totalTime_5__2;

/// @brief Field direction, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_direction, put=__cordl_internal_set_direction)) float_t  direction;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa4d25bc, size 0x19c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa4d2758, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa4d2760, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa4d2798, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa4d25b8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__ellapsedTime_5__4() const;

constexpr float_t& __cordl_internal_get__ellapsedTime_5__4() ;

constexpr float_t const& __cordl_internal_get__startTime_5__3() const;

constexpr float_t& __cordl_internal_get__startTime_5__3() ;

constexpr float_t const& __cordl_internal_get__totalTime_5__2() const;

constexpr float_t& __cordl_internal_get__totalTime_5__2() ;

constexpr float_t const& __cordl_internal_get_direction() const;

constexpr float_t& __cordl_internal_get_direction() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals>  value) ;

constexpr void __cordl_internal_set__ellapsedTime_5__4(float_t  value) ;

constexpr void __cordl_internal_set__startTime_5__3(float_t  value) ;

constexpr void __cordl_internal_set__totalTime_5__2(float_t  value) ;

constexpr void __cordl_internal_set_direction(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa4d231c, size 0x28, virtual false, abstract: false, final false
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
constexpr AnimatedSnapTurnVisuals__AnimationRoutine_d__25() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatedSnapTurnVisuals__AnimationRoutine_d__25", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatedSnapTurnVisuals__AnimationRoutine_d__25(AnimatedSnapTurnVisuals__AnimationRoutine_d__25 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedSnapTurnVisuals__AnimationRoutine_d__25", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatedSnapTurnVisuals__AnimationRoutine_d__25(AnimatedSnapTurnVisuals__AnimationRoutine_d__25 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16293};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals>  _____4__this;

/// @brief Field direction, offset: 0x28, size: 0x4, def value: None
 float_t  ___direction;

/// @brief Field <totalTime>5__2, offset: 0x2c, size: 0x4, def value: None
 float_t  ____totalTime_5__2;

/// @brief Field <startTime>5__3, offset: 0x30, size: 0x4, def value: None
 float_t  ____startTime_5__3;

/// @brief Field <ellapsedTime>5__4, offset: 0x34, size: 0x4, def value: None
 float_t  ____ellapsedTime_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25, ___direction) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25, ____totalTime_5__2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25, ____startTime_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25, ____ellapsedTime_5__4) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.AnimatedSnapTurnVisuals/<>c
class CORDL_TYPE AnimatedSnapTurnVisuals___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c*  __9;

/// @brief Field <>9__29_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__29_0, put=setStaticF___9__29_0)) ::System::Func_1<float_t>*  __9__29_0;

static inline ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c* New_ctor() ;

/// @brief Method <.ctor>b__29_0, addr 0xa4d25b0, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__29_0() ;

/// @brief Method .ctor, addr 0xa4d25a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c* getStaticF___9() ;

static inline ::System::Func_1<float_t>* getStaticF___9__29_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c*  value) ;

static inline void setStaticF___9__29_0(::System::Func_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatedSnapTurnVisuals___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatedSnapTurnVisuals___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatedSnapTurnVisuals___c(AnimatedSnapTurnVisuals___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedSnapTurnVisuals___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatedSnapTurnVisuals___c(AnimatedSnapTurnVisuals___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16292};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
