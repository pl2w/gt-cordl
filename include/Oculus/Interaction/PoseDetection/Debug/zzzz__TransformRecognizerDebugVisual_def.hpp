#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/TransformRecognizerDebugVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(TransformRecognizerDebugVisual)
namespace Oculus::Interaction::Input {
class Hand;
}
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureStateProvider;
}
namespace Oculus::Interaction::PoseDetection {
class TransformRecognizerActiveState;
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
class Renderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection::Debug {
class TransformRecognizerDebugVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::Debug::TransformRecognizerDebugVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Debug::TransformRecognizerDebugVisual*, "Oculus.Interaction.PoseDetection.Debug", "TransformRecognizerDebugVisual");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction::PoseDetection::Debug {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Debug.TransformRecognizerDebugVisual
class CORDL_TYPE TransformRecognizerDebugVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _activeColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__activeColor, put=__cordl_internal_set__activeColor)) ::UnityEngine::Color  _activeColor;

/// @brief Field _debugVisualParent, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugVisualParent, put=__cordl_internal_set__debugVisualParent)) ::UnityW<::UnityEngine::Transform>  _debugVisualParent;

/// @brief Field _featureDebugLocalScale, offset 0x7c, size 0xc 
 __declspec(property(get=__cordl_internal_get__featureDebugLocalScale, put=__cordl_internal_set__featureDebugLocalScale)) ::UnityEngine::Vector3  _featureDebugLocalScale;

/// @brief Field _featureSpacingVec, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get__featureSpacingVec, put=__cordl_internal_set__featureSpacingVec)) ::UnityEngine::Vector3  _featureSpacingVec;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::Oculus::Interaction::Input::Hand>  _hand;

/// @brief Field _lastActiveValue, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__lastActiveValue, put=__cordl_internal_set__lastActiveValue)) bool  _lastActiveValue;

/// @brief Field _material, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__material, put=__cordl_internal_set__material)) ::UnityW<::UnityEngine::Material>  _material;

/// @brief Field _normalColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__normalColor, put=__cordl_internal_set__normalColor)) ::UnityEngine::Color  _normalColor;

/// @brief Field _target, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::Renderer>  _target;

/// @brief Field _targetText, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetText, put=__cordl_internal_set__targetText)) ::UnityW<::TMPro::TextMeshPro>  _targetText;

/// @brief Field _transformFeatureDebugVisualPrefab, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformFeatureDebugVisualPrefab, put=__cordl_internal_set__transformFeatureDebugVisualPrefab)) ::UnityW<::UnityEngine::GameObject>  _transformFeatureDebugVisualPrefab;

/// @brief Field _transformFeatureStateProvider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformFeatureStateProvider, put=__cordl_internal_set__transformFeatureStateProvider)) ::UnityW<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider>  _transformFeatureStateProvider;

/// @brief Field _transformRecognizerActiveState, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformRecognizerActiveState, put=__cordl_internal_set__transformRecognizerActiveState)) ::UnityW<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState>  _transformRecognizerActiveState;

/// @brief Method AllActive, addr 0xa4b1c2c, size 0x14, virtual false, abstract: false, final false
inline bool AllActive() ;

/// @brief Method Awake, addr 0xa4b13e8, size 0x104, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Oculus::Interaction::PoseDetection::Debug::TransformRecognizerDebugVisual* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa4b1bd0, size 0x5c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0xa4b14ec, size 0x6e4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa4b1c40, size 0x84, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__activeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__activeColor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__debugVisualParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__debugVisualParent() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__featureDebugLocalScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__featureDebugLocalScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__featureSpacingVec() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__featureSpacingVec() ;

constexpr ::UnityW<::Oculus::Interaction::Input::Hand> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::Oculus::Interaction::Input::Hand>& __cordl_internal_get__hand() ;

constexpr bool const& __cordl_internal_get__lastActiveValue() const;

constexpr bool& __cordl_internal_get__lastActiveValue() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__normalColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__normalColor() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__target() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__targetText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__targetText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__transformFeatureDebugVisualPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__transformFeatureDebugVisualPrefab() ;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider> const& __cordl_internal_get__transformFeatureStateProvider() const;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider>& __cordl_internal_get__transformFeatureStateProvider() ;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState> const& __cordl_internal_get__transformRecognizerActiveState() const;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState>& __cordl_internal_get__transformRecognizerActiveState() ;

constexpr void __cordl_internal_set__activeColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__debugVisualParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__featureDebugLocalScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__featureSpacingVec(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::Oculus::Interaction::Input::Hand>  value) ;

constexpr void __cordl_internal_set__lastActiveValue(bool  value) ;

constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__targetText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__transformFeatureDebugVisualPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__transformFeatureStateProvider(::UnityW<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider>  value) ;

constexpr void __cordl_internal_set__transformRecognizerActiveState(::UnityW<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState>  value) ;

/// @brief Method .ctor, addr 0xa4b1cc4, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformRecognizerDebugVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformRecognizerDebugVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformRecognizerDebugVisual(TransformRecognizerDebugVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformRecognizerDebugVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformRecognizerDebugVisual(TransformRecognizerDebugVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16199};

/// [SerializeField]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Input::Hand>  ____hand;

/// [SerializeField]
/// @brief Field _transformFeatureStateProvider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider>  ____transformFeatureStateProvider;

/// [SerializeField]
/// @brief Field _transformRecognizerActiveState, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState>  ____transformRecognizerActiveState;

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
/// @brief Field _transformFeatureDebugVisualPrefab, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____transformFeatureDebugVisualPrefab;

/// [SerializeField]
/// @brief Field _debugVisualParent, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____debugVisualParent;

/// [SerializeField]
/// @brief Field _featureSpacingVec, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____featureSpacingVec;

/// [SerializeField]
/// @brief Field _featureDebugLocalScale, offset: 0x7c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____featureDebugLocalScale;

/// [SerializeField]
/// @brief Field _targetText, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____targetText;

/// @brief Field _material, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____material;

/// @brief Field _lastActiveValue, offset: 0x98, size: 0x1, def value: None
 bool  ____lastActiveValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformRecognizerDebugVisual, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformRecognizerDebugVisual, ____transformFeatureStateProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformRecognizerDebugVisual, ____transformRecognizerActiveState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformRecognizerDebugVisual, ____target) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformRecognizerDebugVisual, ____normalColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformRecognizerDebugVisual, ____activeColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformRecognizerDebugVisual, ____transformFeatureDebugVisualPrefab) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformRecognizerDebugVisual, ____debugVisualParent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformRecognizerDebugVisual, ____featureSpacingVec) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformRecognizerDebugVisual, ____featureDebugLocalScale) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformRecognizerDebugVisual, ____targetText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformRecognizerDebugVisual, ____material) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformRecognizerDebugVisual, ____lastActiveValue) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::Debug::TransformRecognizerDebugVisual) == 0xa0, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection::Debug
