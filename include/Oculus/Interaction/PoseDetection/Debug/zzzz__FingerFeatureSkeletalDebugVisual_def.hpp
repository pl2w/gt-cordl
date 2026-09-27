#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/FingerFeatureSkeletalDebugVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FingerFeatureSkeletalDebugVisual)
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureStateProvider;
}
namespace Oculus::Interaction::PoseDetection {
class ShapeRecognizer_FingerFeatureConfig;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine {
class LineRenderer;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection::Debug {
class FingerFeatureSkeletalDebugVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual*, "Oculus.Interaction.PoseDetection.Debug", "FingerFeatureSkeletalDebugVisual");
// Dependencies Oculus.Interaction.Input.HandFinger, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::PoseDetection::Debug {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Debug.FingerFeatureSkeletalDebugVisual
class CORDL_TYPE FingerFeatureSkeletalDebugVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _activeColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__activeColor, put=__cordl_internal_set__activeColor)) ::UnityEngine::Color  _activeColor;

/// @brief Field _finger, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__finger, put=__cordl_internal_set__finger)) ::Oculus::Interaction::Input::HandFinger  _finger;

/// @brief Field _fingerFeatureConfig, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingerFeatureConfig, put=__cordl_internal_set__fingerFeatureConfig)) ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  _fingerFeatureConfig;

/// @brief Field _fingerFeatureStateProvider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingerFeatureStateProvider, put=__cordl_internal_set__fingerFeatureStateProvider)) ::UnityW<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider>  _fingerFeatureStateProvider;

/// @brief Field _hand, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::Oculus::Interaction::Input::IHand*  _hand;

/// @brief Field _initialized, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _initializedPositions, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__initializedPositions, put=__cordl_internal_set__initializedPositions)) bool  _initializedPositions;

/// @brief Field _jointsCovered, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointsCovered, put=__cordl_internal_set__jointsCovered)) ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Input::HandJointId>*  _jointsCovered;

/// @brief Field _lastFeatureActiveValue, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__lastFeatureActiveValue, put=__cordl_internal_set__lastFeatureActiveValue)) bool  _lastFeatureActiveValue;

/// @brief Field _lineRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__lineRenderer, put=__cordl_internal_set__lineRenderer)) ::UnityW<::UnityEngine::LineRenderer>  _lineRenderer;

/// @brief Field _lineWidth, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__lineWidth, put=__cordl_internal_set__lineWidth)) float_t  _lineWidth;

/// @brief Field _normalColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__normalColor, put=__cordl_internal_set__normalColor)) ::UnityEngine::Color  _normalColor;

/// @brief Method Awake, addr 0xa4abe84, size 0x8, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Initialize, addr 0xa4abf48, size 0xbc, virtual false, abstract: false, final false
inline void Initialize(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  fingerFeatureConfig) ;

static inline ::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual* New_ctor() ;

/// @brief Method ToggleLineRendererEnableState, addr 0xa4ac0e4, size 0x5c, virtual false, abstract: false, final false
inline void ToggleLineRendererEnableState(bool  enableState) ;

/// @brief Method Update, addr 0xa4ac004, size 0xe0, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateDebugSkeletonLineRendererJoints, addr 0xa4ac140, size 0x2f0, virtual false, abstract: false, final false
inline void UpdateDebugSkeletonLineRendererJoints() ;

/// @brief Method UpdateFeatureActiveValue, addr 0xa4ac430, size 0x98, virtual false, abstract: false, final false
inline void UpdateFeatureActiveValue() ;

/// @brief Method UpdateFeatureActiveValueAndVisual, addr 0xa4abe8c, size 0xbc, virtual false, abstract: false, final false
inline void UpdateFeatureActiveValueAndVisual(bool  newValue) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__activeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__activeColor() ;

constexpr ::Oculus::Interaction::Input::HandFinger const& __cordl_internal_get__finger() const;

constexpr ::Oculus::Interaction::Input::HandFinger& __cordl_internal_get__finger() ;

constexpr ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig* const& __cordl_internal_get__fingerFeatureConfig() const;

constexpr ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*& __cordl_internal_get__fingerFeatureConfig() ;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider> const& __cordl_internal_get__fingerFeatureStateProvider() const;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider>& __cordl_internal_get__fingerFeatureStateProvider() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__hand() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__hand() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr bool const& __cordl_internal_get__initializedPositions() const;

constexpr bool& __cordl_internal_get__initializedPositions() ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Input::HandJointId>* const& __cordl_internal_get__jointsCovered() const;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Input::HandJointId>*& __cordl_internal_get__jointsCovered() ;

constexpr bool const& __cordl_internal_get__lastFeatureActiveValue() const;

constexpr bool& __cordl_internal_get__lastFeatureActiveValue() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get__lineRenderer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get__lineRenderer() ;

constexpr float_t const& __cordl_internal_get__lineWidth() const;

constexpr float_t& __cordl_internal_get__lineWidth() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__normalColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__normalColor() ;

constexpr void __cordl_internal_set__activeColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__finger(::Oculus::Interaction::Input::HandFinger  value) ;

constexpr void __cordl_internal_set__fingerFeatureConfig(::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  value) ;

constexpr void __cordl_internal_set__fingerFeatureStateProvider(::UnityW<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider>  value) ;

constexpr void __cordl_internal_set__hand(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__initializedPositions(bool  value) ;

constexpr void __cordl_internal_set__jointsCovered(::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Input::HandJointId>*  value) ;

constexpr void __cordl_internal_set__lastFeatureActiveValue(bool  value) ;

constexpr void __cordl_internal_set__lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set__lineWidth(float_t  value) ;

constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0xa4ac4c8, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFeatureSkeletalDebugVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureSkeletalDebugVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFeatureSkeletalDebugVisual(FingerFeatureSkeletalDebugVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureSkeletalDebugVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFeatureSkeletalDebugVisual(FingerFeatureSkeletalDebugVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16187};

/// [SerializeField]
/// @brief Field _fingerFeatureStateProvider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider>  ____fingerFeatureStateProvider;

/// [SerializeField]
/// @brief Field _lineRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ____lineRenderer;

/// [SerializeField]
/// @brief Field _normalColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____normalColor;

/// [SerializeField]
/// @brief Field _activeColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____activeColor;

/// [SerializeField]
/// @brief Field _lineWidth, offset: 0x50, size: 0x4, def value: None
 float_t  ____lineWidth;

/// @brief Field _hand, offset: 0x58, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____hand;

/// @brief Field _lastFeatureActiveValue, offset: 0x60, size: 0x1, def value: None
 bool  ____lastFeatureActiveValue;

/// @brief Field _jointsCovered, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Input::HandJointId>*  ____jointsCovered;

/// @brief Field _finger, offset: 0x70, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandFinger  ____finger;

/// @brief Field _fingerFeatureConfig, offset: 0x78, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  ____fingerFeatureConfig;

/// @brief Field _initializedPositions, offset: 0x80, size: 0x1, def value: None
 bool  ____initializedPositions;

/// @brief Field _initialized, offset: 0x81, size: 0x1, def value: None
 bool  ____initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual, ____fingerFeatureStateProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual, ____lineRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual, ____normalColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual, ____activeColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual, ____lineWidth) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual, ____hand) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual, ____lastFeatureActiveValue) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual, ____jointsCovered) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual, ____finger) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual, ____fingerFeatureConfig) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual, ____initializedPositions) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual, ____initialized) == 0x81, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual) == 0x88, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection::Debug
