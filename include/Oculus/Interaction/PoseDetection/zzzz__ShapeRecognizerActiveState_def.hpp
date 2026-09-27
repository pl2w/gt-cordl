#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/ShapeRecognizerActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/PoseDetection/zzzz__ShapeRecognizer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ShapeRecognizerActiveState)
namespace GlobalNamespace {
struct ShapeRecognizerActiveState_FingerFeatureStateUsage;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::PoseDetection {
class IFingerFeatureStateProvider;
}
namespace Oculus::Interaction::PoseDetection {
class ShapeRecognizer;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class ShapeRecognizerActiveState;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*, "Oculus.Interaction.PoseDetection", "ShapeRecognizerActiveState");
// Dependencies Oculus.Interaction.PoseDetection.ShapeRecognizer, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState
class CORDL_TYPE ShapeRecognizerActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FingerFeatureStateUsage = ::GlobalNamespace::ShapeRecognizerActiveState_FingerFeatureStateUsage;

 __declspec(property(get=get_Active)) bool  Active;

/// @brief Field FingerFeatureStateProvider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_FingerFeatureStateProvider, put=__cordl_internal_set_FingerFeatureStateProvider)) ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  FingerFeatureStateProvider;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_Handedness)) ::Oculus::Interaction::Input::Handedness  Handedness;

 __declspec(property(get=get_Shapes)) ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>*  Shapes;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _allFingerStates, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__allFingerStates, put=__cordl_internal_set__allFingerStates)) ::System::Collections::Generic::List_1<::GlobalNamespace::ShapeRecognizerActiveState_FingerFeatureStateUsage>*  _allFingerStates;

/// @brief Field _fingerFeatureStateProvider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingerFeatureStateProvider, put=__cordl_internal_set__fingerFeatureStateProvider)) ::UnityW<::UnityEngine::Object>  _fingerFeatureStateProvider;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _nativeActive, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__nativeActive, put=__cordl_internal_set__nativeActive)) bool  _nativeActive;

/// @brief Field _shapes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__shapes, put=__cordl_internal_set__shapes)) ::ArrayW<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>  _shapes;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method Awake, addr 0xa4a5908, size 0xa0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method FlattenUsedFeatures, addr 0xa4a59d0, size 0x408, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::ShapeRecognizerActiveState_FingerFeatureStateUsage>* FlattenUsedFeatures() ;

/// @brief Method InitStateProvider, addr 0xa4a5dd8, size 0x1d8, virtual false, abstract: false, final false
inline void InitStateProvider() ;

/// @brief Method InjectAllShapeRecognizerActiveState, addr 0xa4a623c, size 0x3c, virtual false, abstract: false, final false
inline void InjectAllShapeRecognizerActiveState(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  fingerFeatureStateProvider, ::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer*>  shapes) ;

/// @brief Method InjectFingerFeatureStateProvider, addr 0xa4a6348, size 0xd0, virtual false, abstract: false, final false
inline void InjectFingerFeatureStateProvider(::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  fingerFeatureStateProvider) ;

/// @brief Method InjectHand, addr 0xa4a6278, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectShapes, addr 0xa4a6418, size 0x8, virtual false, abstract: false, final false
inline void InjectShapes(::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer*>  shapes) ;

static inline ::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState* New_ctor() ;

/// @brief Method Start, addr 0xa4a59a8, size 0x28, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider* const& __cordl_internal_get_FingerFeatureStateProvider() const;

constexpr ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*& __cordl_internal_get_FingerFeatureStateProvider() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ShapeRecognizerActiveState_FingerFeatureStateUsage>* const& __cordl_internal_get__allFingerStates() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ShapeRecognizerActiveState_FingerFeatureStateUsage>*& __cordl_internal_get__allFingerStates() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__fingerFeatureStateProvider() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__fingerFeatureStateProvider() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr bool const& __cordl_internal_get__nativeActive() const;

constexpr bool& __cordl_internal_get__nativeActive() ;

constexpr ::ArrayW<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>> const& __cordl_internal_get__shapes() const;

constexpr ::ArrayW<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>& __cordl_internal_get__shapes() ;

constexpr void __cordl_internal_set_FingerFeatureStateProvider(::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  value) ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__allFingerStates(::System::Collections::Generic::List_1<::GlobalNamespace::ShapeRecognizerActiveState_FingerFeatureStateUsage>*  value) ;

constexpr void __cordl_internal_set__fingerFeatureStateProvider(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__nativeActive(bool  value) ;

constexpr void __cordl_internal_set__shapes(::ArrayW<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>  value) ;

/// @brief Method .ctor, addr 0xa4a6420, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa4a5fb0, size 0x28c, virtual true, abstract: false, final true
inline bool get_Active() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa4a5850, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Method get_Handedness, addr 0xa4a5868, size 0xa0, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::Handedness get_Handedness() ;

/// @brief Method get_Shapes, addr 0xa4a5860, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>* get_Shapes() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa4a5858, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShapeRecognizerActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShapeRecognizerActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShapeRecognizerActiveState(ShapeRecognizerActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShapeRecognizerActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShapeRecognizerActiveState(ShapeRecognizerActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16156};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.PoseDetection.IFingerFeatureStateProvider), new[] {  })]
/// @brief Field _fingerFeatureStateProvider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____fingerFeatureStateProvider;

/// @brief Field FingerFeatureStateProvider, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  ___FingerFeatureStateProvider;

/// [SerializeField]
/// @brief Field _shapes, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>  ____shapes;

/// @brief Field _allFingerStates, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::ShapeRecognizerActiveState_FingerFeatureStateUsage>*  ____allFingerStates;

/// @brief Field _nativeActive, offset: 0x50, size: 0x1, def value: None
 bool  ____nativeActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState, ____fingerFeatureStateProvider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState, ___FingerFeatureStateProvider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState, ____shapes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState, ____allFingerStates) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState, ____nativeActive) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
