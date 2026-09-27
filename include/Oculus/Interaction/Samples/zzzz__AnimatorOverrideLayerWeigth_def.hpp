#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/AnimatorOverrideLayerWeigth.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatorOverrideLayerWeigth)
namespace Oculus::Interaction::Samples {
class AnimatorOverrideLayerWeigth__LayerTransition_d__19;
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
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class AnimatorOverrideLayerWeigth;
}
namespace Oculus::Interaction::Samples {
class AnimatorOverrideLayerWeigth__LayerTransition_d__19;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth*);
MARK_REF_T(::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth__LayerTransition_d__19*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth*, "Oculus.Interaction.Samples", "AnimatorOverrideLayerWeigth");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth__LayerTransition_d__19*, "Oculus.Interaction.Samples", "AnimatorOverrideLayerWeigth/<LayerTransition>d__19");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.AnimatorOverrideLayerWeigth
class CORDL_TYPE AnimatorOverrideLayerWeigth : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _LayerTransition_d__19 = ::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth__LayerTransition_d__19;

 __declspec(property(get=get_TransitionCurve, put=set_TransitionCurve)) ::UnityEngine::AnimationCurve*  TransitionCurve;

 __declspec(property(get=get_TransitionDuration, put=set_TransitionDuration)) float_t  TransitionDuration;

/// @brief Field _animator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__animator, put=__cordl_internal_set__animator)) ::UnityW<::UnityEngine::Animator>  _animator;

/// @brief Field _layerIndex, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__layerIndex, put=__cordl_internal_set__layerIndex)) int32_t  _layerIndex;

/// @brief Field _layerIsActive, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__layerIsActive, put=__cordl_internal_set__layerIsActive)) bool  _layerIsActive;

/// @brief Field _overrideLayer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__overrideLayer, put=__cordl_internal_set__overrideLayer)) ::StringW  _overrideLayer;

/// @brief Field _started, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _toggle, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggle, put=__cordl_internal_set__toggle)) ::UnityW<::UnityEngine::UI::Toggle>  _toggle;

/// @brief Field _transitionCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__transitionCurve, put=__cordl_internal_set__transitionCurve)) ::UnityEngine::AnimationCurve*  _transitionCurve;

/// @brief Field _transitionDuration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__transitionDuration, put=__cordl_internal_set__transitionDuration)) float_t  _transitionDuration;

/// @brief Method InjectAllAnimatorOverrideLayerWeigth, addr 0xa4370f0, size 0x30, virtual false, abstract: false, final false
inline void InjectAllAnimatorOverrideLayerWeigth(::UnityEngine::Animator*  animator, ::StringW  overrideLayer) ;

/// @brief Method InjectAnimator, addr 0xa437120, size 0x8, virtual false, abstract: false, final false
inline void InjectAnimator(::UnityEngine::Animator*  animator) ;

/// @brief Method InjectOptionalToggle, addr 0xa437130, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalToggle(::UnityEngine::UI::Toggle*  toggle) ;

/// @brief Method InjectOverrideLayer, addr 0xa437128, size 0x8, virtual false, abstract: false, final false
inline void InjectOverrideLayer(::StringW  overrideLayer) ;

/// [IteratorStateMachine(typeof(Oculus.Interaction.Samples.AnimatorOverrideLayerWeigth::<LayerTransition>d__19))]
/// @brief Method LayerTransition, addr 0xa43703c, size 0x8c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* LayerTransition(int32_t  layerIndex, float_t  targetWeight) ;

static inline ::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth* New_ctor() ;

/// @brief Method OnDisable, addr 0xa436f48, size 0xf4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa436d90, size 0x128, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Reset, addr 0xa436cb4, size 0x90, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SetOverrideLayerActive, addr 0xa436eb8, size 0x90, virtual false, abstract: false, final false
inline void SetOverrideLayerActive(bool  active) ;

/// @brief Method Start, addr 0xa436d44, size 0x4c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animator() ;

constexpr int32_t const& __cordl_internal_get__layerIndex() const;

constexpr int32_t& __cordl_internal_get__layerIndex() ;

constexpr bool const& __cordl_internal_get__layerIsActive() const;

constexpr bool& __cordl_internal_get__layerIsActive() ;

constexpr ::StringW const& __cordl_internal_get__overrideLayer() const;

constexpr ::StringW& __cordl_internal_get__overrideLayer() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__toggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__toggle() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__transitionCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__transitionCurve() ;

constexpr float_t const& __cordl_internal_get__transitionDuration() const;

constexpr float_t& __cordl_internal_get__transitionDuration() ;

constexpr void __cordl_internal_set__animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set__layerIndex(int32_t  value) ;

constexpr void __cordl_internal_set__layerIsActive(bool  value) ;

constexpr void __cordl_internal_set__overrideLayer(::StringW  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__transitionCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__transitionDuration(float_t  value) ;

/// @brief Method .ctor, addr 0xa437138, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TransitionCurve, addr 0xa436ca4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_TransitionCurve() ;

/// @brief Method get_TransitionDuration, addr 0xa436c94, size 0x8, virtual false, abstract: false, final false
inline float_t get_TransitionDuration() ;

/// @brief Method set_TransitionCurve, addr 0xa436cac, size 0x8, virtual false, abstract: false, final false
inline void set_TransitionCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_TransitionDuration, addr 0xa436c9c, size 0x8, virtual false, abstract: false, final false
inline void set_TransitionDuration(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatorOverrideLayerWeigth() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatorOverrideLayerWeigth", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatorOverrideLayerWeigth(AnimatorOverrideLayerWeigth && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorOverrideLayerWeigth", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatorOverrideLayerWeigth(AnimatorOverrideLayerWeigth const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28298};

/// [SerializeField]
/// [FormerlySerializedAs("animator")]
/// @brief Field _animator, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ____animator;

/// [SerializeField]
/// [FormerlySerializedAs("overrideLayer")]
/// @brief Field _overrideLayer, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____overrideLayer;

/// [SerializeField]
/// [FormerlySerializedAs("transitionDuration")]
/// @brief Field _transitionDuration, offset: 0x30, size: 0x4, def value: None
 float_t  ____transitionDuration;

/// [SerializeField]
/// [FormerlySerializedAs("transitionCurve")]
/// @brief Field _transitionCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____transitionCurve;

/// [Space]
/// [SerializeField]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)2)]
/// [Tooltip("If provided, the animation layer will be syncronized with the isOn state of the toggle")]
/// @brief Field _toggle, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____toggle;

/// @brief Field _layerIsActive, offset: 0x48, size: 0x1, def value: None
 bool  ____layerIsActive;

/// @brief Field _layerIndex, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____layerIndex;

/// @brief Field _started, offset: 0x50, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth, ____animator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth, ____overrideLayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth, ____transitionDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth, ____transitionCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth, ____toggle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth, ____layerIsActive) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth, ____layerIndex) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth, ____started) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.AnimatorOverrideLayerWeigth/<LayerTransition>d__19
class CORDL_TYPE AnimatorOverrideLayerWeigth__LayerTransition_d__19 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth>  __4__this;

/// @brief Field <startTime>5__2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime_5__2, put=__cordl_internal_set__startTime_5__2)) float_t  _startTime_5__2;

/// @brief Field <startWeight>5__3, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__startWeight_5__3, put=__cordl_internal_set__startWeight_5__3)) float_t  _startWeight_5__3;

/// @brief Field layerIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerIndex, put=__cordl_internal_set_layerIndex)) int32_t  layerIndex;

/// @brief Field targetWeight, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetWeight, put=__cordl_internal_set_targetWeight)) float_t  targetWeight;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa4371d0, size 0x128, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth__LayerTransition_d__19* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa4372f8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa437300, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa437338, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa4371cc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__startTime_5__2() const;

constexpr float_t& __cordl_internal_get__startTime_5__2() ;

constexpr float_t const& __cordl_internal_get__startWeight_5__3() const;

constexpr float_t& __cordl_internal_get__startWeight_5__3() ;

constexpr int32_t const& __cordl_internal_get_layerIndex() const;

constexpr int32_t& __cordl_internal_get_layerIndex() ;

constexpr float_t const& __cordl_internal_get_targetWeight() const;

constexpr float_t& __cordl_internal_get_targetWeight() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth>  value) ;

constexpr void __cordl_internal_set__startTime_5__2(float_t  value) ;

constexpr void __cordl_internal_set__startWeight_5__3(float_t  value) ;

constexpr void __cordl_internal_set_layerIndex(int32_t  value) ;

constexpr void __cordl_internal_set_targetWeight(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa4370c8, size 0x28, virtual false, abstract: false, final false
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
constexpr AnimatorOverrideLayerWeigth__LayerTransition_d__19() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatorOverrideLayerWeigth__LayerTransition_d__19", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatorOverrideLayerWeigth__LayerTransition_d__19(AnimatorOverrideLayerWeigth__LayerTransition_d__19 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorOverrideLayerWeigth__LayerTransition_d__19", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatorOverrideLayerWeigth__LayerTransition_d__19(AnimatorOverrideLayerWeigth__LayerTransition_d__19 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28297};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth>  _____4__this;

/// @brief Field layerIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___layerIndex;

/// @brief Field targetWeight, offset: 0x2c, size: 0x4, def value: None
 float_t  ___targetWeight;

/// @brief Field <startTime>5__2, offset: 0x30, size: 0x4, def value: None
 float_t  ____startTime_5__2;

/// @brief Field <startWeight>5__3, offset: 0x34, size: 0x4, def value: None
 float_t  ____startWeight_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth__LayerTransition_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth__LayerTransition_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth__LayerTransition_d__19, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth__LayerTransition_d__19, ___layerIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth__LayerTransition_d__19, ___targetWeight) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth__LayerTransition_d__19, ____startTime_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth__LayerTransition_d__19, ____startWeight_5__3) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::AnimatorOverrideLayerWeigth__LayerTransition_d__19) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
