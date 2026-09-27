#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/TransformFeatureDebugVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TransformFeatureDebugVisual)
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureConfig;
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
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection::Debug {
class TransformFeatureDebugVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual*, "Oculus.Interaction.PoseDetection.Debug", "TransformFeatureDebugVisual");
// Dependencies Oculus.Interaction.Input.Handedness, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::PoseDetection::Debug {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Debug.TransformFeatureDebugVisual
class CORDL_TYPE TransformFeatureDebugVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _activeColor, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__activeColor, put=__cordl_internal_set__activeColor)) ::UnityEngine::Color  _activeColor;

/// @brief Field _handedness, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__handedness, put=__cordl_internal_set__handedness)) ::Oculus::Interaction::Input::Handedness  _handedness;

/// @brief Field _initialized, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _lastActiveValue, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__lastActiveValue, put=__cordl_internal_set__lastActiveValue)) bool  _lastActiveValue;

/// @brief Field _material, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__material, put=__cordl_internal_set__material)) ::UnityW<::UnityEngine::Material>  _material;

/// @brief Field _normalColor, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__normalColor, put=__cordl_internal_set__normalColor)) ::UnityEngine::Color  _normalColor;

/// @brief Field _target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::Renderer>  _target;

/// @brief Field _targetConfig, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetConfig, put=__cordl_internal_set__targetConfig)) ::Oculus::Interaction::PoseDetection::TransformFeatureConfig*  _targetConfig;

/// @brief Field _targetText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetText, put=__cordl_internal_set__targetText)) ::UnityW<::TMPro::TextMeshPro>  _targetText;

/// @brief Field _transformFeatureStateProvider, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformFeatureStateProvider, put=__cordl_internal_set__transformFeatureStateProvider)) ::UnityW<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider>  _transformFeatureStateProvider;

/// @brief Field _transformRecognizerActiveState, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformRecognizerActiveState, put=__cordl_internal_set__transformRecognizerActiveState)) ::UnityW<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState>  _transformRecognizerActiveState;

/// @brief Method Awake, addr 0xa4b0740, size 0x88, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Initialize, addr 0xa4b0824, size 0x54, virtual false, abstract: false, final false
inline void Initialize(::Oculus::Interaction::Input::Handedness  handedness, ::Oculus::Interaction::PoseDetection::TransformFeatureConfig*  targetConfig, ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*  transformFeatureStateProvider, ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*  transformActiveState) ;

static inline ::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa4b07c8, size 0x5c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Update, addr 0xa4b0878, size 0x3b4, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__activeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__activeColor() ;

constexpr ::Oculus::Interaction::Input::Handedness const& __cordl_internal_get__handedness() const;

constexpr ::Oculus::Interaction::Input::Handedness& __cordl_internal_get__handedness() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr bool const& __cordl_internal_get__lastActiveValue() const;

constexpr bool& __cordl_internal_get__lastActiveValue() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__normalColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__normalColor() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__target() ;

constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureConfig* const& __cordl_internal_get__targetConfig() const;

constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureConfig*& __cordl_internal_get__targetConfig() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__targetText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__targetText() ;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider> const& __cordl_internal_get__transformFeatureStateProvider() const;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider>& __cordl_internal_get__transformFeatureStateProvider() ;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState> const& __cordl_internal_get__transformRecognizerActiveState() const;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState>& __cordl_internal_get__transformRecognizerActiveState() ;

constexpr void __cordl_internal_set__activeColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__handedness(::Oculus::Interaction::Input::Handedness  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__lastActiveValue(bool  value) ;

constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__targetConfig(::Oculus::Interaction::PoseDetection::TransformFeatureConfig*  value) ;

constexpr void __cordl_internal_set__targetText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__transformFeatureStateProvider(::UnityW<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider>  value) ;

constexpr void __cordl_internal_set__transformRecognizerActiveState(::UnityW<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState>  value) ;

/// @brief Method .ctor, addr 0xa4b0c2c, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformFeatureDebugVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureDebugVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformFeatureDebugVisual(TransformFeatureDebugVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureDebugVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformFeatureDebugVisual(TransformFeatureDebugVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16196};

/// [SerializeField]
/// @brief Field _target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____target;

/// [SerializeField]
/// @brief Field _normalColor, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ____normalColor;

/// [SerializeField]
/// @brief Field _activeColor, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ____activeColor;

/// [SerializeField]
/// @brief Field _targetText, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____targetText;

/// @brief Field _transformFeatureStateProvider, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider>  ____transformFeatureStateProvider;

/// @brief Field _transformRecognizerActiveState, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState>  ____transformRecognizerActiveState;

/// @brief Field _material, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____material;

/// @brief Field _lastActiveValue, offset: 0x68, size: 0x1, def value: None
 bool  ____lastActiveValue;

/// @brief Field _targetConfig, offset: 0x70, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::TransformFeatureConfig*  ____targetConfig;

/// @brief Field _initialized, offset: 0x78, size: 0x1, def value: None
 bool  ____initialized;

/// @brief Field _handedness, offset: 0x7c, size: 0x4, def value: None
 ::Oculus::Interaction::Input::Handedness  ____handedness;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual, ____target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual, ____normalColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual, ____activeColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual, ____targetText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual, ____transformFeatureStateProvider) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual, ____transformRecognizerActiveState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual, ____material) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual, ____lastActiveValue) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual, ____targetConfig) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual, ____initialized) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual, ____handedness) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection::Debug
