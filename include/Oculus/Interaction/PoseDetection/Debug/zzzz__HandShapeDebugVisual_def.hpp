#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/HandShapeDebugVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HandShapeDebugVisual)
namespace GlobalNamespace {
template<typename <HandFinger>j__TPar,typename <FingerFeatures>j__TPar>
class __f__AnonymousType0_2;
}
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::PoseDetection::Debug {
class HandShapeDebugVisual__AllFeatureStates_d__16;
}
namespace Oculus::Interaction::PoseDetection::Debug {
class HandShapeDebugVisual___c;
}
namespace Oculus::Interaction::PoseDetection {
class IFingerFeatureStateProvider;
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
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection::Debug {
class HandShapeDebugVisual;
}
namespace Oculus::Interaction::PoseDetection::Debug {
class HandShapeDebugVisual__AllFeatureStates_d__16;
}
namespace Oculus::Interaction::PoseDetection::Debug {
class HandShapeDebugVisual___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual__AllFeatureStates_d__16*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual*, "Oculus.Interaction.PoseDetection.Debug", "HandShapeDebugVisual");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual__AllFeatureStates_d__16*, "Oculus.Interaction.PoseDetection.Debug", "HandShapeDebugVisual/<AllFeatureStates>d__16");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual___c*, "Oculus.Interaction.PoseDetection.Debug", "HandShapeDebugVisual/<>c");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction::PoseDetection::Debug {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Debug.HandShapeDebugVisual
class CORDL_TYPE HandShapeDebugVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _AllFeatureStates_d__16 = ::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual__AllFeatureStates_d__16;

using __c = ::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual___c;

/// @brief Field FingerFeatureStateProvider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_FingerFeatureStateProvider, put=__cordl_internal_set_FingerFeatureStateProvider)) ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  FingerFeatureStateProvider;

/// @brief Field _activeColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__activeColor, put=__cordl_internal_set__activeColor)) ::UnityEngine::Color  _activeColor;

/// @brief Field _fingerFeatureDebugLocalScale, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get__fingerFeatureDebugLocalScale, put=__cordl_internal_set__fingerFeatureDebugLocalScale)) ::UnityEngine::Vector3  _fingerFeatureDebugLocalScale;

/// @brief Field _fingerFeatureDebugVisualPrefab, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingerFeatureDebugVisualPrefab, put=__cordl_internal_set__fingerFeatureDebugVisualPrefab)) ::UnityW<::UnityEngine::GameObject>  _fingerFeatureDebugVisualPrefab;

/// @brief Field _fingerFeatureParent, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingerFeatureParent, put=__cordl_internal_set__fingerFeatureParent)) ::UnityW<::UnityEngine::Transform>  _fingerFeatureParent;

/// @brief Field _fingerFeatureSpacingVec, offset 0x7c, size 0xc 
 __declspec(property(get=__cordl_internal_get__fingerFeatureSpacingVec, put=__cordl_internal_set__fingerFeatureSpacingVec)) ::UnityEngine::Vector3  _fingerFeatureSpacingVec;

/// @brief Field _fingerFeatureStateProvider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingerFeatureStateProvider, put=__cordl_internal_set__fingerFeatureStateProvider)) ::UnityW<::UnityEngine::Object>  _fingerFeatureStateProvider;

/// @brief Field _fingerSpacingVec, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get__fingerSpacingVec, put=__cordl_internal_set__fingerSpacingVec)) ::UnityEngine::Vector3  _fingerSpacingVec;

/// @brief Field _lastActiveValue, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__lastActiveValue, put=__cordl_internal_set__lastActiveValue)) bool  _lastActiveValue;

/// @brief Field _material, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__material, put=__cordl_internal_set__material)) ::UnityW<::UnityEngine::Material>  _material;

/// @brief Field _normalColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__normalColor, put=__cordl_internal_set__normalColor)) ::UnityEngine::Color  _normalColor;

/// @brief Field _shapeRecognizerActiveState, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__shapeRecognizerActiveState, put=__cordl_internal_set__shapeRecognizerActiveState)) ::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState>  _shapeRecognizerActiveState;

/// @brief Field _target, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::Renderer>  _target;

/// @brief Field _targetText, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetText, put=__cordl_internal_set__targetText)) ::UnityW<::TMPro::TextMeshPro>  _targetText;

/// [IteratorStateMachine(typeof(Oculus.Interaction.PoseDetection.Debug.HandShapeDebugVisual::<AllFeatureStates>d__16))]
/// @brief Method AllFeatureStates, addr 0xa4ad21c, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>* AllFeatureStates() ;

/// @brief Method Awake, addr 0xa4ac4f0, size 0x154, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa4ad2d0, size 0x5c, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0xa4ac644, size 0xbd8, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa4ad32c, size 0x88, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider* const& __cordl_internal_get_FingerFeatureStateProvider() const;

constexpr ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*& __cordl_internal_get_FingerFeatureStateProvider() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__activeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__activeColor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__fingerFeatureDebugLocalScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__fingerFeatureDebugLocalScale() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__fingerFeatureDebugVisualPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__fingerFeatureDebugVisualPrefab() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__fingerFeatureParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__fingerFeatureParent() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__fingerFeatureSpacingVec() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__fingerFeatureSpacingVec() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__fingerFeatureStateProvider() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__fingerFeatureStateProvider() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__fingerSpacingVec() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__fingerSpacingVec() ;

constexpr bool const& __cordl_internal_get__lastActiveValue() const;

constexpr bool& __cordl_internal_get__lastActiveValue() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__normalColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__normalColor() ;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState> const& __cordl_internal_get__shapeRecognizerActiveState() const;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState>& __cordl_internal_get__shapeRecognizerActiveState() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__target() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__targetText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__targetText() ;

constexpr void __cordl_internal_set_FingerFeatureStateProvider(::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  value) ;

constexpr void __cordl_internal_set__activeColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__fingerFeatureDebugLocalScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__fingerFeatureDebugVisualPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__fingerFeatureParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__fingerFeatureSpacingVec(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__fingerFeatureStateProvider(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__fingerSpacingVec(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__lastActiveValue(bool  value) ;

constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__shapeRecognizerActiveState(::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState>  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__targetText(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0xa4ad3b4, size 0x3c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandShapeDebugVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandShapeDebugVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandShapeDebugVisual(HandShapeDebugVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandShapeDebugVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandShapeDebugVisual(HandShapeDebugVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16190};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.PoseDetection.IFingerFeatureStateProvider), new[] {  })]
/// @brief Field _fingerFeatureStateProvider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____fingerFeatureStateProvider;

/// @brief Field FingerFeatureStateProvider, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  ___FingerFeatureStateProvider;

/// [SerializeField]
/// @brief Field _shapeRecognizerActiveState, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState>  ____shapeRecognizerActiveState;

/// [SerializeField]
/// @brief Field _target, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____target;

/// [SerializeField]
/// @brief Field _normalColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____normalColor;

/// [SerializeField]
/// @brief Field _activeColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ____activeColor;

/// [SerializeField]
/// @brief Field _fingerFeatureDebugVisualPrefab, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____fingerFeatureDebugVisualPrefab;

/// [SerializeField]
/// @brief Field _fingerFeatureParent, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____fingerFeatureParent;

/// [SerializeField]
/// @brief Field _fingerSpacingVec, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____fingerSpacingVec;

/// [SerializeField]
/// @brief Field _fingerFeatureSpacingVec, offset: 0x7c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____fingerFeatureSpacingVec;

/// [SerializeField]
/// @brief Field _fingerFeatureDebugLocalScale, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____fingerFeatureDebugLocalScale;

/// [SerializeField]
/// @brief Field _targetText, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____targetText;

/// @brief Field _material, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____material;

/// @brief Field _lastActiveValue, offset: 0xa8, size: 0x1, def value: None
 bool  ____lastActiveValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual, ____fingerFeatureStateProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual, ___FingerFeatureStateProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual, ____shapeRecognizerActiveState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual, ____target) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual, ____normalColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual, ____activeColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual, ____fingerFeatureDebugVisualPrefab) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual, ____fingerFeatureParent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual, ____fingerSpacingVec) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual, ____fingerFeatureSpacingVec) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual, ____fingerFeatureDebugLocalScale) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual, ____targetText) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual, ____material) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual, ____lastActiveValue) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual) == 0xb0, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection::Debug
// [CompilerGenerated]
// Dependencies Oculus.Interaction.Input.HandFinger, System.Object, System.ValueTuple`2<T1, T2>
namespace Oculus::Interaction::PoseDetection::Debug {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Debug.HandShapeDebugVisual/<AllFeatureStates>d__16
class CORDL_TYPE HandShapeDebugVisual__AllFeatureStates_d__16 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator__Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList_Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig____get_Current)) ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>  System_Collections_Generic_IEnumerator__Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList_Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig____Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual>  __4__this;

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

/// @brief Method MoveNext, addr 0xa4ad6f8, size 0x480, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual__AllFeatureStates_d__16* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.GetEnumerator, addr 0xa4add78, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>* System_Collections_Generic_IEnumerable__Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList_Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig____GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.get_Current, addr 0xa4adcd8, size 0xc, virtual true, abstract: false, final true
inline ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*> System_Collections_Generic_IEnumerator__Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList_Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig____get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xa4ade1c, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa4adce4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa4add1c, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa4ad64c, size 0xac, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*> const& __cordl_internal_get___2__current() const;

constexpr ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual>& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>* const& __cordl_internal_get___7__wrap1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>*& __cordl_internal_get___7__wrap1() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>* const& __cordl_internal_get___7__wrap2() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*& __cordl_internal_get___7__wrap2() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual>  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>*  value) ;

constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// @brief Method <>m__Finally1, addr 0xa4adc28, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2, addr 0xa4adb78, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally2() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa4ad29c, size 0x34, virtual false, abstract: false, final false
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
constexpr HandShapeDebugVisual__AllFeatureStates_d__16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandShapeDebugVisual__AllFeatureStates_d__16", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandShapeDebugVisual__AllFeatureStates_d__16(HandShapeDebugVisual__AllFeatureStates_d__16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandShapeDebugVisual__AllFeatureStates_d__16", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandShapeDebugVisual__AllFeatureStates_d__16(HandShapeDebugVisual__AllFeatureStates_d__16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16189};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual>  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>*  _____7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*  _____7__wrap2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual__AllFeatureStates_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual__AllFeatureStates_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual__AllFeatureStates_d__16, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual__AllFeatureStates_d__16, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual__AllFeatureStates_d__16, _____7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual__AllFeatureStates_d__16, _____7__wrap2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual__AllFeatureStates_d__16) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection::Debug
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection::Debug {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Debug.HandShapeDebugVisual/<>c
class CORDL_TYPE HandShapeDebugVisual___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual___c*  __9;

/// @brief Field <>9__15_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_0, put=setStaticF___9__15_0)) ::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::Oculus::Interaction::Input::HandFinger>*  __9__15_0;

/// @brief Field <>9__15_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_1, put=setStaticF___9__15_1)) ::System::Func_2<::System::Linq::IGrouping_2<::Oculus::Interaction::Input::HandFinger,::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*,::GlobalNamespace::__f__AnonymousType0_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>*>*  __9__15_1;

/// @brief Field <>9__15_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_2, put=setStaticF___9__15_2)) ::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>*  __9__15_2;

static inline ::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual___c* New_ctor() ;

/// @brief Method <Start>b__15_0, addr 0xa4ad460, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::HandFinger _Start_b__15_0(::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>  s) ;

/// @brief Method <Start>b__15_1, addr 0xa4ad468, size 0x1dc, virtual false, abstract: false, final false
inline ::GlobalNamespace::__f__AnonymousType0_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>* _Start_b__15_1(::System::Linq::IGrouping_2<::Oculus::Interaction::Input::HandFinger,::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*  group) ;

/// @brief Method <Start>b__15_2, addr 0xa4ad644, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>* _Start_b__15_2(::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>  item) ;

/// @brief Method .ctor, addr 0xa4ad458, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual___c* getStaticF___9() ;

static inline ::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::Oculus::Interaction::Input::HandFinger>* getStaticF___9__15_0() ;

static inline ::System::Func_2<::System::Linq::IGrouping_2<::Oculus::Interaction::Input::HandFinger,::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*,::GlobalNamespace::__f__AnonymousType0_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>*>* getStaticF___9__15_1() ;

static inline ::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>* getStaticF___9__15_2() ;

static inline void setStaticF___9(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual___c*  value) ;

static inline void setStaticF___9__15_0(::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::Oculus::Interaction::Input::HandFinger>*  value) ;

static inline void setStaticF___9__15_1(::System::Func_2<::System::Linq::IGrouping_2<::Oculus::Interaction::Input::HandFinger,::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*,::GlobalNamespace::__f__AnonymousType0_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>*>*  value) ;

static inline void setStaticF___9__15_2(::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandShapeDebugVisual___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandShapeDebugVisual___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandShapeDebugVisual___c(HandShapeDebugVisual___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandShapeDebugVisual___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandShapeDebugVisual___c(HandShapeDebugVisual___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16188};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::Debug::HandShapeDebugVisual___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection::Debug
