#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/HandShapeSkeletalDebugVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HandShapeSkeletalDebugVisual)
namespace GlobalNamespace {
template<typename <HandFinger>j__TPar,typename <FingerFeatures>j__TPar>
class __f__AnonymousType0_2;
}
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::PoseDetection::Debug {
class HandShapeSkeletalDebugVisual__AllFeatureStates_d__4;
}
namespace Oculus::Interaction::PoseDetection::Debug {
class HandShapeSkeletalDebugVisual___c;
}
namespace Oculus::Interaction::PoseDetection {
class ShapeRecognizerActiveState;
}
namespace Oculus::Interaction::PoseDetection {
class ShapeRecognizer_FingerFeatureConfig;
}
namespace Oculus::Interaction::PoseDetection {
class ShapeRecognizer;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Linq {
template<typename TKey,typename TElement>
class IGrouping_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection::Debug {
class HandShapeSkeletalDebugVisual;
}
namespace Oculus::Interaction::PoseDetection::Debug {
class HandShapeSkeletalDebugVisual__AllFeatureStates_d__4;
}
namespace Oculus::Interaction::PoseDetection::Debug {
class HandShapeSkeletalDebugVisual___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual*, "Oculus.Interaction.PoseDetection.Debug", "HandShapeSkeletalDebugVisual");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*, "Oculus.Interaction.PoseDetection.Debug", "HandShapeSkeletalDebugVisual/<AllFeatureStates>d__4");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*, "Oculus.Interaction.PoseDetection.Debug", "HandShapeSkeletalDebugVisual/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::PoseDetection::Debug {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Debug.HandShapeSkeletalDebugVisual
class CORDL_TYPE HandShapeSkeletalDebugVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _AllFeatureStates_d__4 = ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4;

using __c = ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c;

/// @brief Field _fingerFeatureDebugVisualPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingerFeatureDebugVisualPrefab, put=__cordl_internal_set__fingerFeatureDebugVisualPrefab)) ::UnityW<::UnityEngine::GameObject>  _fingerFeatureDebugVisualPrefab;

/// @brief Field _shapeRecognizerActiveState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__shapeRecognizerActiveState, put=__cordl_internal_set__shapeRecognizerActiveState)) ::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState>  _shapeRecognizerActiveState;

/// [IteratorStateMachine(typeof(Oculus.Interaction.PoseDetection.Debug.HandShapeSkeletalDebugVisual::<AllFeatureStates>d__4))]
/// @brief Method AllFeatureStates, addr 0xa4ae6ac, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>* AllFeatureStates() ;

/// @brief Method Awake, addr 0xa4ade20, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual* New_ctor() ;

/// @brief Method Start, addr 0xa4ade24, size 0x888, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__fingerFeatureDebugVisualPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__fingerFeatureDebugVisualPrefab() ;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState> const& __cordl_internal_get__shapeRecognizerActiveState() const;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState>& __cordl_internal_get__shapeRecognizerActiveState() ;

constexpr void __cordl_internal_set__fingerFeatureDebugVisualPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__shapeRecognizerActiveState(::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState>  value) ;

/// @brief Method .ctor, addr 0xa4ae760, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandShapeSkeletalDebugVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandShapeSkeletalDebugVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandShapeSkeletalDebugVisual(HandShapeSkeletalDebugVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandShapeSkeletalDebugVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandShapeSkeletalDebugVisual(HandShapeSkeletalDebugVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16193};

/// [SerializeField]
/// @brief Field _shapeRecognizerActiveState, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState>  ____shapeRecognizerActiveState;

/// [SerializeField]
/// @brief Field _fingerFeatureDebugVisualPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____fingerFeatureDebugVisualPrefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual, ____shapeRecognizerActiveState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual, ____fingerFeatureDebugVisualPrefab) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection::Debug
// [CompilerGenerated]
// Dependencies Oculus.Interaction.Input.HandFinger, System.Object, System.ValueTuple`2<T1, T2>
namespace Oculus::Interaction::PoseDetection::Debug {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Debug.HandShapeSkeletalDebugVisual/<AllFeatureStates>d__4
class CORDL_TYPE HandShapeSkeletalDebugVisual__AllFeatureStates_d__4 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator__Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList_Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig____get_Current)) ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>  System_Collections_Generic_IEnumerator__Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList_Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig____Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual>  __4__this;

/// @brief Field <>7__wrap1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>*  __7__wrap1;

/// @brief Field <>7__wrap2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*  __7__wrap2;

/// @brief Field <>l__initialThreadId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa4aea70, size 0x480, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.GetEnumerator, addr 0xa4af0f0, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>* System_Collections_Generic_IEnumerable__Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList_Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig____GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.get_Current, addr 0xa4af050, size 0xc, virtual true, abstract: false, final true
inline ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*> System_Collections_Generic_IEnumerator__Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList_Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig____get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xa4af194, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa4af05c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa4af094, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa4ae9c4, size 0xac, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*> const& __cordl_internal_get___2__current() const;

constexpr ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual>& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>* const& __cordl_internal_get___7__wrap1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>*& __cordl_internal_get___7__wrap1() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>* const& __cordl_internal_get___7__wrap2() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*& __cordl_internal_get___7__wrap2() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual>  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>*  value) ;

constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// @brief Method <>m__Finally1, addr 0xa4aefa0, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2, addr 0xa4aeef0, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally2() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa4ae72c, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>* i___System__Collections__Generic__IEnumerable_1___System__ValueTuple_2___Oculus__Interaction__Input__HandFinger___System__Collections__Generic__IReadOnlyList_1___Oculus__Interaction__PoseDetection__ShapeRecognizer_FingerFeatureConfig_____() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>* i___System__Collections__Generic__IEnumerator_1___System__ValueTuple_2___Oculus__Interaction__Input__HandFinger___System__Collections__Generic__IReadOnlyList_1___Oculus__Interaction__PoseDetection__ShapeRecognizer_FingerFeatureConfig_____() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandShapeSkeletalDebugVisual__AllFeatureStates_d__4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandShapeSkeletalDebugVisual__AllFeatureStates_d__4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandShapeSkeletalDebugVisual__AllFeatureStates_d__4(HandShapeSkeletalDebugVisual__AllFeatureStates_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandShapeSkeletalDebugVisual__AllFeatureStates_d__4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandShapeSkeletalDebugVisual__AllFeatureStates_d__4(HandShapeSkeletalDebugVisual__AllFeatureStates_d__4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16192};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual>  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>*  _____7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*  _____7__wrap2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4, _____7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4, _____7__wrap2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection::Debug
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection::Debug {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Debug.HandShapeSkeletalDebugVisual/<>c
class CORDL_TYPE HandShapeSkeletalDebugVisual___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::Oculus::Interaction::Input::HandFinger>*  __9__3_0;

/// @brief Field <>9__3_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_1, put=setStaticF___9__3_1)) ::System::Func_2<::System::Linq::IGrouping_2<::Oculus::Interaction::Input::HandFinger,::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*,::GlobalNamespace::__f__AnonymousType0_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>*>*  __9__3_1;

/// @brief Field <>9__3_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_2, put=setStaticF___9__3_2)) ::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>*  __9__3_2;

static inline ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c* New_ctor() ;

/// @brief Method <Start>b__3_0, addr 0xa4ae7d8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::HandFinger _Start_b__3_0(::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>  s) ;

/// @brief Method <Start>b__3_1, addr 0xa4ae7e0, size 0x1dc, virtual false, abstract: false, final false
inline ::GlobalNamespace::__f__AnonymousType0_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>* _Start_b__3_1(::System::Linq::IGrouping_2<::Oculus::Interaction::Input::HandFinger,::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*  group) ;

/// @brief Method <Start>b__3_2, addr 0xa4ae9bc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>* _Start_b__3_2(::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>  item) ;

/// @brief Method .ctor, addr 0xa4ae7d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c* getStaticF___9() ;

static inline ::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::Oculus::Interaction::Input::HandFinger>* getStaticF___9__3_0() ;

static inline ::System::Func_2<::System::Linq::IGrouping_2<::Oculus::Interaction::Input::HandFinger,::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*,::GlobalNamespace::__f__AnonymousType0_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>*>* getStaticF___9__3_1() ;

static inline ::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>* getStaticF___9__3_2() ;

static inline void setStaticF___9(::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*  value) ;

static inline void setStaticF___9__3_0(::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::Oculus::Interaction::Input::HandFinger>*  value) ;

static inline void setStaticF___9__3_1(::System::Func_2<::System::Linq::IGrouping_2<::Oculus::Interaction::Input::HandFinger,::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*,::GlobalNamespace::__f__AnonymousType0_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>*>*  value) ;

static inline void setStaticF___9__3_2(::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandShapeSkeletalDebugVisual___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandShapeSkeletalDebugVisual___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandShapeSkeletalDebugVisual___c(HandShapeSkeletalDebugVisual___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandShapeSkeletalDebugVisual___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandShapeSkeletalDebugVisual___c(HandShapeSkeletalDebugVisual___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16191};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection::Debug
