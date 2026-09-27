#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/FingerFeatureDebugVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FingerFeatureDebugVisual)
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::PoseDetection {
class IFingerFeatureStateProvider;
}
namespace Oculus::Interaction::PoseDetection {
class ShapeRecognizer_FingerFeatureConfig;
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
class FingerFeatureDebugVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual*, "Oculus.Interaction.PoseDetection.Debug", "FingerFeatureDebugVisual");
// Dependencies Oculus.Interaction.Input.HandFinger, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::PoseDetection::Debug {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Debug.FingerFeatureDebugVisual
class CORDL_TYPE FingerFeatureDebugVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _activeColor, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__activeColor, put=__cordl_internal_set__activeColor)) ::UnityEngine::Color  _activeColor;

/// @brief Field _featureConfig, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureConfig, put=__cordl_internal_set__featureConfig)) ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  _featureConfig;

/// @brief Field _fingerFeatureState, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingerFeatureState, put=__cordl_internal_set__fingerFeatureState)) ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  _fingerFeatureState;

/// @brief Field _handFinger, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__handFinger, put=__cordl_internal_set__handFinger)) ::Oculus::Interaction::Input::HandFinger  _handFinger;

/// @brief Field _initialized, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _lastActiveValue, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__lastActiveValue, put=__cordl_internal_set__lastActiveValue)) bool  _lastActiveValue;

/// @brief Field _material, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__material, put=__cordl_internal_set__material)) ::UnityW<::UnityEngine::Material>  _material;

/// @brief Field _normalColor, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__normalColor, put=__cordl_internal_set__normalColor)) ::UnityEngine::Color  _normalColor;

/// @brief Field _target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::Renderer>  _target;

/// @brief Field _targetText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetText, put=__cordl_internal_set__targetText)) ::UnityW<::TMPro::TextMeshPro>  _targetText;

/// @brief Method Awake, addr 0xa4ab810, size 0x88, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Initialize, addr 0xa4ab8f4, size 0x40, virtual false, abstract: false, final false
inline void Initialize(::Oculus::Interaction::Input::HandFinger  handFinger, ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  config, ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  fingerFeatureState) ;

static inline ::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa4ab898, size 0x5c, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Update, addr 0xa4ab934, size 0x530, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__activeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__activeColor() ;

constexpr ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig* const& __cordl_internal_get__featureConfig() const;

constexpr ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*& __cordl_internal_get__featureConfig() ;

constexpr ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider* const& __cordl_internal_get__fingerFeatureState() const;

constexpr ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*& __cordl_internal_get__fingerFeatureState() ;

constexpr ::Oculus::Interaction::Input::HandFinger const& __cordl_internal_get__handFinger() const;

constexpr ::Oculus::Interaction::Input::HandFinger& __cordl_internal_get__handFinger() ;

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

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__targetText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__targetText() ;

constexpr void __cordl_internal_set__activeColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__featureConfig(::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  value) ;

constexpr void __cordl_internal_set__fingerFeatureState(::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  value) ;

constexpr void __cordl_internal_set__handFinger(::Oculus::Interaction::Input::HandFinger  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__lastActiveValue(bool  value) ;

constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__targetText(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0xa4abe64, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFeatureDebugVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureDebugVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFeatureDebugVisual(FingerFeatureDebugVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureDebugVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFeatureDebugVisual(FingerFeatureDebugVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16186};

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

/// @brief Field _fingerFeatureState, offset: 0x50, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  ____fingerFeatureState;

/// @brief Field _material, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____material;

/// @brief Field _lastActiveValue, offset: 0x60, size: 0x1, def value: None
 bool  ____lastActiveValue;

/// @brief Field _handFinger, offset: 0x64, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandFinger  ____handFinger;

/// @brief Field _featureConfig, offset: 0x68, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  ____featureConfig;

/// @brief Field _initialized, offset: 0x70, size: 0x1, def value: None
 bool  ____initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual, ____target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual, ____normalColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual, ____activeColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual, ____targetText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual, ____fingerFeatureState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual, ____material) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual, ____lastActiveValue) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual, ____handFinger) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual, ____featureConfig) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual, ____initialized) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual) == 0x78, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection::Debug
