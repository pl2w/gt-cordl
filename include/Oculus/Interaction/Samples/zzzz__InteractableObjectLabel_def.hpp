#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/InteractableObjectLabel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Samples/zzzz__InteractableObjectLabel_LabelState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InteractableObjectLabel)
namespace GlobalNamespace {
struct InteractableObjectLabel_LabelState;
}
namespace Oculus::Interaction::UnityCanvas {
class CanvasRenderTexture;
}
namespace Oculus::Interaction {
class InteractableGroupView;
}
namespace Oculus::Interaction {
struct InteractableStateChangeArgs;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class InteractableObjectLabel;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::InteractableObjectLabel*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::InteractableObjectLabel*, "Oculus.Interaction.Samples", "InteractableObjectLabel");
// Dependencies Oculus.Interaction.Samples.InteractableObjectLabel::LabelState, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.InteractableObjectLabel
class CORDL_TYPE InteractableObjectLabel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LabelState = ::GlobalNamespace::InteractableObjectLabel_LabelState;

/// @brief Field _block, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__block, put=__cordl_internal_set__block)) ::UnityEngine::MaterialPropertyBlock*  _block;

/// @brief Field _currentAlpha, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentAlpha, put=__cordl_internal_set__currentAlpha)) float_t  _currentAlpha;

/// @brief Field _currentState, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentState, put=__cordl_internal_set__currentState)) ::GlobalNamespace::InteractableObjectLabel_LabelState  _currentState;

/// @brief Field _quadRenderer, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__quadRenderer, put=__cordl_internal_set__quadRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  _quadRenderer;

/// @brief Field _quadTransform, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__quadTransform, put=__cordl_internal_set__quadTransform)) ::UnityW<::UnityEngine::Transform>  _quadTransform;

/// @brief Field _startScale, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get__startScale, put=__cordl_internal_set__startScale)) ::UnityEngine::Vector3  _startScale;

/// @brief Field _startTime, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime, put=__cordl_internal_set__startTime)) float_t  _startTime;

/// @brief Field _started, offset 0xc4, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _targetAlpha, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetAlpha, put=__cordl_internal_set__targetAlpha)) float_t  _targetAlpha;

/// @brief Field alignmentThreshold, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_alignmentThreshold, put=__cordl_internal_set_alignmentThreshold)) float_t  alignmentThreshold;

/// @brief Field alphaAnimationSpeed, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_alphaAnimationSpeed, put=__cordl_internal_set_alphaAnimationSpeed)) float_t  alphaAnimationSpeed;

/// @brief Field canvasTexture, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_canvasTexture, put=__cordl_internal_set_canvasTexture)) ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture>  canvasTexture;

/// @brief Field canvasTransform, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_canvasTransform, put=__cordl_internal_set_canvasTransform)) ::UnityW<::UnityEngine::RectTransform>  canvasTransform;

/// @brief Field currentLabelPosition, offset 0xb8, size 0xc 
 __declspec(property(get=__cordl_internal_get_currentLabelPosition, put=__cordl_internal_set_currentLabelPosition)) ::UnityEngine::Vector3  currentLabelPosition;

/// @brief Field focusDelay, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_focusDelay, put=__cordl_internal_set_focusDelay)) float_t  focusDelay;

/// @brief Field group, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_group, put=__cordl_internal_set_group)) ::UnityW<::UnityEngine::CanvasGroup>  group;

/// @brief Field hideDelay, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_hideDelay, put=__cordl_internal_set_hideDelay)) float_t  hideDelay;

/// @brief Field interactableGroup, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactableGroup, put=__cordl_internal_set_interactableGroup)) ::UnityW<::Oculus::Interaction::InteractableGroupView>  interactableGroup;

/// @brief Field labelPositions, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_labelPositions, put=__cordl_internal_set_labelPositions)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  labelPositions;

/// @brief Field minScale, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_minScale, put=__cordl_internal_set_minScale)) float_t  minScale;

/// @brief Field playerHead, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerHead, put=__cordl_internal_set_playerHead)) ::UnityW<::UnityEngine::Transform>  playerHead;

/// @brief Field positionAnimationSpeed, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_positionAnimationSpeed, put=__cordl_internal_set_positionAnimationSpeed)) float_t  positionAnimationSpeed;

/// @brief Field quadMaterial, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_quadMaterial, put=__cordl_internal_set_quadMaterial)) ::UnityW<::UnityEngine::Material>  quadMaterial;

/// @brief Field quadMesh, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_quadMesh, put=__cordl_internal_set_quadMesh)) ::UnityW<::UnityEngine::Mesh>  quadMesh;

/// @brief Field viewTargets, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_viewTargets, put=__cordl_internal_set_viewTargets)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  viewTargets;

/// @brief Method CreateTextureQuad, addr 0xa437b3c, size 0x1bc, virtual false, abstract: false, final false
inline void CreateTextureQuad() ;

/// @brief Method FindHighestLabelPosition, addr 0xa4381dc, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 FindHighestLabelPosition() ;

/// @brief Method InteractableStateChange, addr 0xa4381ac, size 0x30, virtual false, abstract: false, final false
inline void InteractableStateChange(::Oculus::Interaction::InteractableStateChangeArgs  args) ;

/// @brief Method MaximizedDotView, addr 0xa437e38, size 0x29c, virtual false, abstract: false, final false
inline float_t MaximizedDotView() ;

static inline ::Oculus::Interaction::Samples::InteractableObjectLabel* New_ctor() ;

/// @brief Method OnDisable, addr 0xa437d88, size 0x90, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa437cf8, size 0x90, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetTargetAlpha, addr 0xa437e18, size 0x20, virtual false, abstract: false, final false
inline void SetTargetAlpha() ;

/// @brief Method Start, addr 0xa437a2c, size 0x110, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StateTransition, addr 0xa4380d4, size 0xd8, virtual false, abstract: false, final false
inline void StateTransition() ;

/// @brief Method Update, addr 0xa4385a4, size 0xf0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateLabelTransform, addr 0xa4382dc, size 0x2c8, virtual false, abstract: false, final false
inline void UpdateLabelTransform() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__block() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__block() ;

constexpr float_t const& __cordl_internal_get__currentAlpha() const;

constexpr float_t& __cordl_internal_get__currentAlpha() ;

constexpr ::GlobalNamespace::InteractableObjectLabel_LabelState const& __cordl_internal_get__currentState() const;

constexpr ::GlobalNamespace::InteractableObjectLabel_LabelState& __cordl_internal_get__currentState() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__quadRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__quadRenderer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__quadTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__quadTransform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startScale() ;

constexpr float_t const& __cordl_internal_get__startTime() const;

constexpr float_t& __cordl_internal_get__startTime() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr float_t const& __cordl_internal_get__targetAlpha() const;

constexpr float_t& __cordl_internal_get__targetAlpha() ;

constexpr float_t const& __cordl_internal_get_alignmentThreshold() const;

constexpr float_t& __cordl_internal_get_alignmentThreshold() ;

constexpr float_t const& __cordl_internal_get_alphaAnimationSpeed() const;

constexpr float_t& __cordl_internal_get_alphaAnimationSpeed() ;

constexpr ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture> const& __cordl_internal_get_canvasTexture() const;

constexpr ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture>& __cordl_internal_get_canvasTexture() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_canvasTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_canvasTransform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_currentLabelPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_currentLabelPosition() ;

constexpr float_t const& __cordl_internal_get_focusDelay() const;

constexpr float_t& __cordl_internal_get_focusDelay() ;

constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get_group() const;

constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get_group() ;

constexpr float_t const& __cordl_internal_get_hideDelay() const;

constexpr float_t& __cordl_internal_get_hideDelay() ;

constexpr ::UnityW<::Oculus::Interaction::InteractableGroupView> const& __cordl_internal_get_interactableGroup() const;

constexpr ::UnityW<::Oculus::Interaction::InteractableGroupView>& __cordl_internal_get_interactableGroup() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_labelPositions() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_labelPositions() ;

constexpr float_t const& __cordl_internal_get_minScale() const;

constexpr float_t& __cordl_internal_get_minScale() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_playerHead() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_playerHead() ;

constexpr float_t const& __cordl_internal_get_positionAnimationSpeed() const;

constexpr float_t& __cordl_internal_get_positionAnimationSpeed() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_quadMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_quadMaterial() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_quadMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_quadMesh() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_viewTargets() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_viewTargets() ;

constexpr void __cordl_internal_set__block(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__currentAlpha(float_t  value) ;

constexpr void __cordl_internal_set__currentState(::GlobalNamespace::InteractableObjectLabel_LabelState  value) ;

constexpr void __cordl_internal_set__quadRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__quadTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__startScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__startTime(float_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__targetAlpha(float_t  value) ;

constexpr void __cordl_internal_set_alignmentThreshold(float_t  value) ;

constexpr void __cordl_internal_set_alphaAnimationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_canvasTexture(::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture>  value) ;

constexpr void __cordl_internal_set_canvasTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_currentLabelPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_focusDelay(float_t  value) ;

constexpr void __cordl_internal_set_group(::UnityW<::UnityEngine::CanvasGroup>  value) ;

constexpr void __cordl_internal_set_hideDelay(float_t  value) ;

constexpr void __cordl_internal_set_interactableGroup(::UnityW<::Oculus::Interaction::InteractableGroupView>  value) ;

constexpr void __cordl_internal_set_labelPositions(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_minScale(float_t  value) ;

constexpr void __cordl_internal_set_playerHead(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_positionAnimationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_quadMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_quadMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_viewTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

/// @brief Method .ctor, addr 0xa438694, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractableObjectLabel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractableObjectLabel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractableObjectLabel(InteractableObjectLabel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractableObjectLabel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractableObjectLabel(InteractableObjectLabel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28304};

/// [Tooltip("The positions of these transforms are used to check if the user is facing the object")]
/// @brief Field viewTargets, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___viewTargets;

/// [Tooltip("The possible positions for the label, the component always selected the one that has the highest y position component")]
/// @brief Field labelPositions, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___labelPositions;

/// [Tooltip("The position between the left and right cameras")]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)1)]
/// @brief Field playerHead, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___playerHead;

/// [Tooltip("This group should contain all the interactions in the object, and when one is triggered the label is hidden")]
/// @brief Field interactableGroup, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::InteractableGroupView>  ___interactableGroup;

/// @brief Field _startScale, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startScale;

/// [Space(10)]
/// [Tooltip("Canvas group at the root of the label canvas, used to make the canvas completely transparent")]
/// @brief Field group, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CanvasGroup>  ___group;

/// @brief Field alphaAnimationSpeed, offset: 0x58, size: 0x4, def value: None
 float_t  ___alphaAnimationSpeed;

/// @brief Field focusDelay, offset: 0x5c, size: 0x4, def value: None
 float_t  ___focusDelay;

/// @brief Field hideDelay, offset: 0x60, size: 0x4, def value: None
 float_t  ___hideDelay;

/// @brief Field alignmentThreshold, offset: 0x64, size: 0x4, def value: None
 float_t  ___alignmentThreshold;

/// @brief Field minScale, offset: 0x68, size: 0x4, def value: None
 float_t  ___minScale;

/// @brief Field positionAnimationSpeed, offset: 0x6c, size: 0x4, def value: None
 float_t  ___positionAnimationSpeed;

/// [Space(10)]
/// @brief Field quadMesh, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___quadMesh;

/// @brief Field quadMaterial, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___quadMaterial;

/// @brief Field canvasTransform, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___canvasTransform;

/// @brief Field canvasTexture, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture>  ___canvasTexture;

/// @brief Field _currentState, offset: 0x90, size: 0x4, def value: None
 ::GlobalNamespace::InteractableObjectLabel_LabelState  ____currentState;

/// @brief Field _targetAlpha, offset: 0x94, size: 0x4, def value: None
 float_t  ____targetAlpha;

/// @brief Field _currentAlpha, offset: 0x98, size: 0x4, def value: None
 float_t  ____currentAlpha;

/// @brief Field _startTime, offset: 0x9c, size: 0x4, def value: None
 float_t  ____startTime;

/// @brief Field _block, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____block;

/// @brief Field _quadTransform, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____quadTransform;

/// @brief Field _quadRenderer, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____quadRenderer;

/// @brief Field currentLabelPosition, offset: 0xb8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___currentLabelPosition;

/// @brief Field _started, offset: 0xc4, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ___viewTargets) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ___labelPositions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ___playerHead) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ___interactableGroup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ____startScale) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ___group) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ___alphaAnimationSpeed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ___focusDelay) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ___hideDelay) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ___alignmentThreshold) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ___minScale) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ___positionAnimationSpeed) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ___quadMesh) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ___quadMaterial) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ___canvasTransform) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ___canvasTexture) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ____currentState) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ____targetAlpha) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ____currentAlpha) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ____startTime) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ____block) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ____quadTransform) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ____quadRenderer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ___currentLabelPosition) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::InteractableObjectLabel, ____started) == 0xc4, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::InteractableObjectLabel) == 0xc8, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
