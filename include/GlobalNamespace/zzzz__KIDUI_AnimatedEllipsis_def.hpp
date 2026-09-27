#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_AnimatedEllipsis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(KIDUI_AnimatedEllipsis)
namespace GlobalNamespace {
class KIDUI_AnimatedEllipsis__EllipsisAnimation2_d__23;
}
namespace GlobalNamespace {
class KIDUI_AnimatedEllipsis__EllipsisAnimation_d__22;
}
namespace GlobalNamespace {
struct KIDUI_AnimatedEllipsis__StartAnimation_d__24;
}
namespace GlobalNamespace {
struct KIDUI_AnimatedEllipsis__StopAnimation_d__25;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
class Task;
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
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDUI_AnimatedEllipsis;
}
namespace GlobalNamespace {
class KIDUI_AnimatedEllipsis__EllipsisAnimation2_d__23;
}
namespace GlobalNamespace {
class KIDUI_AnimatedEllipsis__EllipsisAnimation_d__22;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUI_AnimatedEllipsis*);
MARK_REF_T(::GlobalNamespace::KIDUI_AnimatedEllipsis__EllipsisAnimation2_d__23*);
MARK_REF_T(::GlobalNamespace::KIDUI_AnimatedEllipsis__EllipsisAnimation_d__22*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_AnimatedEllipsis*, "", "KIDUI_AnimatedEllipsis");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_AnimatedEllipsis__EllipsisAnimation2_d__23*, "", "KIDUI_AnimatedEllipsis/<EllipsisAnimation2>d__23");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_AnimatedEllipsis__EllipsisAnimation_d__22*, "", "KIDUI_AnimatedEllipsis/<EllipsisAnimation>d__22");
// Dependencies System.ValueTuple`4<T1, T2, T3, T4>, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_AnimatedEllipsis
class CORDL_TYPE KIDUI_AnimatedEllipsis : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _EllipsisAnimation2_d__23 = ::GlobalNamespace::KIDUI_AnimatedEllipsis__EllipsisAnimation2_d__23;

using _EllipsisAnimation_d__22 = ::GlobalNamespace::KIDUI_AnimatedEllipsis__EllipsisAnimation_d__22;

using _StartAnimation_d__24 = ::GlobalNamespace::KIDUI_AnimatedEllipsis__StartAnimation_d__24;

using _StopAnimation_d__25 = ::GlobalNamespace::KIDUI_AnimatedEllipsis__StopAnimation_d__25;

/// @brief Field _animateOnStart, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__animateOnStart, put=__cordl_internal_set__animateOnStart)) bool  _animateOnStart;

/// @brief Field _animationCoroutine, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__animationCoroutine, put=__cordl_internal_set__animationCoroutine)) ::UnityEngine::Coroutine*  _animationCoroutine;

/// @brief Field _animationSpeedMultiplier, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__animationSpeedMultiplier, put=__cordl_internal_set__animationSpeedMultiplier)) float_t  _animationSpeedMultiplier;

/// @brief Field _ellipsisAnimationCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__ellipsisAnimationCurve, put=__cordl_internal_set__ellipsisAnimationCurve)) ::UnityEngine::AnimationCurve*  _ellipsisAnimationCurve;

/// @brief Field _ellipsisCount, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__ellipsisCount, put=__cordl_internal_set__ellipsisCount)) int32_t  _ellipsisCount;

/// @brief Field _ellipsisObjects, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__ellipsisObjects, put=__cordl_internal_set__ellipsisObjects)) ::ArrayW<::System::ValueTuple_4<::UnityW<::UnityEngine::GameObject>,float_t,float_t,float_t>>  _ellipsisObjects;

/// @brief Field _ellipsisPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__ellipsisPrefab, put=__cordl_internal_set__ellipsisPrefab)) ::UnityW<::UnityEngine::GameObject>  _ellipsisPrefab;

/// @brief Field _ellipsisRoot, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ellipsisRoot, put=__cordl_internal_set__ellipsisRoot)) ::UnityW<::UnityEngine::GameObject>  _ellipsisRoot;

/// @brief Field _ellipsisStartingValues, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ellipsisStartingValues, put=__cordl_internal_set__ellipsisStartingValues)) ::System::Collections::Generic::List_1<float_t>*  _ellipsisStartingValues;

/// @brief Field _endScale, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__endScale, put=__cordl_internal_set__endScale)) float_t  _endScale;

/// @brief Field _intermediaryScale, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__intermediaryScale, put=__cordl_internal_set__intermediaryScale)) float_t  _intermediaryScale;

/// @brief Field _nextChange, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__nextChange, put=__cordl_internal_set__nextChange)) float_t  _nextChange;

/// @brief Field _pauseBetweenCycles, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__pauseBetweenCycles, put=__cordl_internal_set__pauseBetweenCycles)) float_t  _pauseBetweenCycles;

/// @brief Field _pauseBetweenScale, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__pauseBetweenScale, put=__cordl_internal_set__pauseBetweenScale)) float_t  _pauseBetweenScale;

/// @brief Field _runAnimation, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get__runAnimation, put=__cordl_internal_set__runAnimation)) bool  _runAnimation;

/// @brief Field _scaleDuration, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__scaleDuration, put=__cordl_internal_set__scaleDuration)) float_t  _scaleDuration;

/// @brief Field _shouldLerp, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldLerp, put=__cordl_internal_set__shouldLerp)) bool  _shouldLerp;

/// @brief Field _startingScale, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__startingScale, put=__cordl_internal_set__startingScale)) float_t  _startingScale;

/// @brief Method Awake, addr 0x5a507c4, size 0x10, virtual false, abstract: false, final false
inline void Awake() ;

/// [IteratorStateMachine(typeof(KIDUI_AnimatedEllipsis::<EllipsisAnimation>d__22))]
/// @brief Method EllipsisAnimation, addr 0x5a50ae0, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* EllipsisAnimation() ;

/// [IteratorStateMachine(typeof(KIDUI_AnimatedEllipsis::<EllipsisAnimation2>d__23))]
/// @brief Method EllipsisAnimation2, addr 0x5a50b74, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* EllipsisAnimation2() ;

/// @brief Method LerpLoop, addr 0x5a50ce0, size 0x74, virtual false, abstract: false, final false
inline float_t LerpLoop(float_t  start, float_t  end, float_t  time, float_t  offsetTime, float_t  duration) ;

static inline ::GlobalNamespace::KIDUI_AnimatedEllipsis* New_ctor() ;

/// @brief Method OnDisable, addr 0x5a50a04, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method SetupEllipsis, addr 0x5a507d4, size 0x22c, virtual false, abstract: false, final false
inline void SetupEllipsis() ;

/// @brief Method Start, addr 0x5a50a00, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// [AsyncStateMachine(typeof(KIDUI_AnimatedEllipsis::<StartAnimation>d__24))]
/// @brief Method StartAnimation, addr 0x5a50c08, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* StartAnimation() ;

/// [AsyncStateMachine(typeof(KIDUI_AnimatedEllipsis::<StopAnimation>d__25))]
/// @brief Method StopAnimation, addr 0x5a50a08, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* StopAnimation() ;

constexpr bool const& __cordl_internal_get__animateOnStart() const;

constexpr bool& __cordl_internal_get__animateOnStart() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__animationCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__animationCoroutine() ;

constexpr float_t const& __cordl_internal_get__animationSpeedMultiplier() const;

constexpr float_t& __cordl_internal_get__animationSpeedMultiplier() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__ellipsisAnimationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__ellipsisAnimationCurve() ;

constexpr int32_t const& __cordl_internal_get__ellipsisCount() const;

constexpr int32_t& __cordl_internal_get__ellipsisCount() ;

constexpr ::ArrayW<::System::ValueTuple_4<::UnityW<::UnityEngine::GameObject>,float_t,float_t,float_t>> const& __cordl_internal_get__ellipsisObjects() const;

constexpr ::ArrayW<::System::ValueTuple_4<::UnityW<::UnityEngine::GameObject>,float_t,float_t,float_t>>& __cordl_internal_get__ellipsisObjects() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__ellipsisPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__ellipsisPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__ellipsisRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__ellipsisRoot() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get__ellipsisStartingValues() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get__ellipsisStartingValues() ;

constexpr float_t const& __cordl_internal_get__endScale() const;

constexpr float_t& __cordl_internal_get__endScale() ;

constexpr float_t const& __cordl_internal_get__intermediaryScale() const;

constexpr float_t& __cordl_internal_get__intermediaryScale() ;

constexpr float_t const& __cordl_internal_get__nextChange() const;

constexpr float_t& __cordl_internal_get__nextChange() ;

constexpr float_t const& __cordl_internal_get__pauseBetweenCycles() const;

constexpr float_t& __cordl_internal_get__pauseBetweenCycles() ;

constexpr float_t const& __cordl_internal_get__pauseBetweenScale() const;

constexpr float_t& __cordl_internal_get__pauseBetweenScale() ;

constexpr bool const& __cordl_internal_get__runAnimation() const;

constexpr bool& __cordl_internal_get__runAnimation() ;

constexpr float_t const& __cordl_internal_get__scaleDuration() const;

constexpr float_t& __cordl_internal_get__scaleDuration() ;

constexpr bool const& __cordl_internal_get__shouldLerp() const;

constexpr bool& __cordl_internal_get__shouldLerp() ;

constexpr float_t const& __cordl_internal_get__startingScale() const;

constexpr float_t& __cordl_internal_get__startingScale() ;

constexpr void __cordl_internal_set__animateOnStart(bool  value) ;

constexpr void __cordl_internal_set__animationCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__animationSpeedMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__ellipsisAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__ellipsisCount(int32_t  value) ;

constexpr void __cordl_internal_set__ellipsisObjects(::ArrayW<::System::ValueTuple_4<::UnityW<::UnityEngine::GameObject>,float_t,float_t,float_t>>  value) ;

constexpr void __cordl_internal_set__ellipsisPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__ellipsisRoot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__ellipsisStartingValues(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set__endScale(float_t  value) ;

constexpr void __cordl_internal_set__intermediaryScale(float_t  value) ;

constexpr void __cordl_internal_set__nextChange(float_t  value) ;

constexpr void __cordl_internal_set__pauseBetweenCycles(float_t  value) ;

constexpr void __cordl_internal_set__pauseBetweenScale(float_t  value) ;

constexpr void __cordl_internal_set__runAnimation(bool  value) ;

constexpr void __cordl_internal_set__scaleDuration(float_t  value) ;

constexpr void __cordl_internal_set__shouldLerp(bool  value) ;

constexpr void __cordl_internal_set__startingScale(float_t  value) ;

/// @brief Method .ctor, addr 0x5a50d54, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_AnimatedEllipsis() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_AnimatedEllipsis", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_AnimatedEllipsis(KIDUI_AnimatedEllipsis && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_AnimatedEllipsis", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_AnimatedEllipsis(KIDUI_AnimatedEllipsis const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3016};

/// [Header("Ellipsis Spawning")]
/// [SerializeField]
/// @brief Field _animateOnStart, offset: 0x20, size: 0x1, def value: None
 bool  ____animateOnStart;

/// [SerializeField]
/// @brief Field _ellipsisCount, offset: 0x24, size: 0x4, def value: None
 int32_t  ____ellipsisCount;

/// [SerializeField]
/// @brief Field _ellipsisPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____ellipsisPrefab;

/// [SerializeField]
/// @brief Field _ellipsisRoot, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____ellipsisRoot;

/// [SerializeField]
/// @brief Field _ellipsisStartingValues, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ____ellipsisStartingValues;

/// [Header("Animation Settings")]
/// [SerializeField]
/// @brief Field _shouldLerp, offset: 0x40, size: 0x1, def value: None
 bool  ____shouldLerp;

/// [SerializeField]
/// @brief Field _ellipsisAnimationCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____ellipsisAnimationCurve;

/// [SerializeField]
/// @brief Field _animationSpeedMultiplier, offset: 0x50, size: 0x4, def value: None
 float_t  ____animationSpeedMultiplier;

/// [SerializeField]
/// @brief Field _startingScale, offset: 0x54, size: 0x4, def value: None
 float_t  ____startingScale;

/// [SerializeField]
/// @brief Field _intermediaryScale, offset: 0x58, size: 0x4, def value: None
 float_t  ____intermediaryScale;

/// [SerializeField]
/// @brief Field _endScale, offset: 0x5c, size: 0x4, def value: None
 float_t  ____endScale;

/// [SerializeField]
/// @brief Field _scaleDuration, offset: 0x60, size: 0x4, def value: None
 float_t  ____scaleDuration;

/// [SerializeField]
/// @brief Field _pauseBetweenScale, offset: 0x64, size: 0x4, def value: None
 float_t  ____pauseBetweenScale;

/// [SerializeField]
/// @brief Field _pauseBetweenCycles, offset: 0x68, size: 0x4, def value: None
 float_t  ____pauseBetweenCycles;

/// @brief Field _runAnimation, offset: 0x6c, size: 0x1, def value: None
 bool  ____runAnimation;

/// @brief Field _nextChange, offset: 0x70, size: 0x4, def value: None
 float_t  ____nextChange;

/// [TupleElementNames(new[] { "ellipsis", "startingScale", "currentScale", "lerpT" })]
/// @brief Field _ellipsisObjects, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::System::ValueTuple_4<::UnityW<::UnityEngine::GameObject>,float_t,float_t,float_t>>  ____ellipsisObjects;

/// @brief Field _animationCoroutine, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____animationCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis, ____animateOnStart) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis, ____ellipsisCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis, ____ellipsisPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis, ____ellipsisRoot) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis, ____ellipsisStartingValues) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis, ____shouldLerp) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis, ____ellipsisAnimationCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis, ____animationSpeedMultiplier) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis, ____startingScale) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis, ____intermediaryScale) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis, ____endScale) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis, ____scaleDuration) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis, ____pauseBetweenScale) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis, ____pauseBetweenCycles) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis, ____runAnimation) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis, ____nextChange) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis, ____ellipsisObjects) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis, ____animationCoroutine) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_AnimatedEllipsis) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_AnimatedEllipsis/<EllipsisAnimation>d__22
class CORDL_TYPE KIDUI_AnimatedEllipsis__EllipsisAnimation_d__22 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>  __4__this;

/// @brief Field <currIndex>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__currIndex_5__2, put=__cordl_internal_set__currIndex_5__2)) int32_t  _currIndex_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5a50f8c, size 0x1dc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::KIDUI_AnimatedEllipsis__EllipsisAnimation_d__22* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5a51168, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5a51170, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5a511a8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5a50f88, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__currIndex_5__2() const;

constexpr int32_t& __cordl_internal_get__currIndex_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>  value) ;

constexpr void __cordl_internal_set__currIndex_5__2(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5a50b4c, size 0x28, virtual false, abstract: false, final false
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
constexpr KIDUI_AnimatedEllipsis__EllipsisAnimation_d__22() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_AnimatedEllipsis__EllipsisAnimation_d__22", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_AnimatedEllipsis__EllipsisAnimation_d__22(KIDUI_AnimatedEllipsis__EllipsisAnimation_d__22 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_AnimatedEllipsis__EllipsisAnimation_d__22", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_AnimatedEllipsis__EllipsisAnimation_d__22(KIDUI_AnimatedEllipsis__EllipsisAnimation_d__22 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3013};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>  _____4__this;

/// @brief Field <currIndex>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____currIndex_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis__EllipsisAnimation_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis__EllipsisAnimation_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis__EllipsisAnimation_d__22, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis__EllipsisAnimation_d__22, ____currIndex_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_AnimatedEllipsis__EllipsisAnimation_d__22) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_AnimatedEllipsis/<EllipsisAnimation2>d__23
class CORDL_TYPE KIDUI_AnimatedEllipsis__EllipsisAnimation2_d__23 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>  __4__this;

/// @brief Field <time>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5a50e0c, size 0x134, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::KIDUI_AnimatedEllipsis__EllipsisAnimation2_d__23* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5a50f40, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5a50f48, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5a50f80, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5a50e08, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5a50be0, size 0x28, virtual false, abstract: false, final false
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
constexpr KIDUI_AnimatedEllipsis__EllipsisAnimation2_d__23() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_AnimatedEllipsis__EllipsisAnimation2_d__23", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_AnimatedEllipsis__EllipsisAnimation2_d__23(KIDUI_AnimatedEllipsis__EllipsisAnimation2_d__23 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_AnimatedEllipsis__EllipsisAnimation2_d__23", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_AnimatedEllipsis__EllipsisAnimation2_d__23(KIDUI_AnimatedEllipsis__EllipsisAnimation2_d__23 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3012};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>  _____4__this;

/// @brief Field <time>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____time_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis__EllipsisAnimation2_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis__EllipsisAnimation2_d__23, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis__EllipsisAnimation2_d__23, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AnimatedEllipsis__EllipsisAnimation2_d__23, ____time_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_AnimatedEllipsis__EllipsisAnimation2_d__23) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
