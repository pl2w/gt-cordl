#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/ArcAffordanceController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ArcAffordanceController)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class ArcAffordanceController;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::ArcAffordanceController*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::ArcAffordanceController*, "Oculus.Interaction.Samples", "ArcAffordanceController");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector4
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.ArcAffordanceController
class CORDL_TYPE ArcAffordanceController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _animator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__animator, put=__cordl_internal_set__animator)) ::UnityW<::UnityEngine::Animator>  _animator;

/// @brief Field _bottomBone, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__bottomBone, put=__cordl_internal_set__bottomBone)) ::UnityW<::UnityEngine::Transform>  _bottomBone;

/// @brief Field _distanceToCurvatureCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__distanceToCurvatureCurve, put=__cordl_internal_set__distanceToCurvatureCurve)) ::UnityEngine::AnimationCurve*  _distanceToCurvatureCurve;

/// @brief Field _endPositions, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__endPositions, put=__cordl_internal_set__endPositions)) ::ArrayW<::UnityEngine::Vector4>  _endPositions;

/// @brief Field _pivot, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__pivot, put=__cordl_internal_set__pivot)) ::UnityW<::UnityEngine::Transform>  _pivot;

/// @brief Field _renderer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  _renderer;

/// @brief Field _topBone, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__topBone, put=__cordl_internal_set__topBone)) ::UnityW<::UnityEngine::Transform>  _topBone;

static inline ::Oculus::Interaction::Samples::ArcAffordanceController* New_ctor() ;

/// @brief Method Start, addr 0xa43a600, size 0x88, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa43a688, size 0x248, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animator() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__bottomBone() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__bottomBone() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__distanceToCurvatureCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__distanceToCurvatureCurve() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get__endPositions() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get__endPositions() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__pivot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__pivot() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get__renderer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__topBone() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__topBone() ;

constexpr void __cordl_internal_set__animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set__bottomBone(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__distanceToCurvatureCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__endPositions(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set__pivot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set__topBone(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa43a8d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArcAffordanceController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArcAffordanceController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArcAffordanceController(ArcAffordanceController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArcAffordanceController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArcAffordanceController(ArcAffordanceController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28312};

/// [SerializeField]
/// [Tooltip("The animator controlling the curvature of the affordance")]
/// @brief Field _animator, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ____animator;

/// [SerializeField]
/// [Tooltip("The transform from which world-space distance will be calculated; intuitively, \'the center of the arc\'s circle\'")]
/// @brief Field _pivot, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____pivot;

/// [SerializeField]
/// [Tooltip("The function converting distance (from the pivot, a world-space observation) into curvature (an animation parameter)")]
/// @brief Field _distanceToCurvatureCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____distanceToCurvatureCurve;

/// [SerializeField]
/// [Tooltip("The renderer for the arc affordance, on which transparency values must be set.")]
/// @brief Field _renderer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ____renderer;

/// [SerializeField]
/// [Tooltip("The bone at the \'top\' end of the arc\'s armature")]
/// @brief Field _topBone, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____topBone;

/// [SerializeField]
/// [Tooltip("The bone at the \'bottom\' end of the arc\'s armature")]
/// @brief Field _bottomBone, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____bottomBone;

/// @brief Field _endPositions, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ____endPositions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::ArcAffordanceController, ____animator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ArcAffordanceController, ____pivot) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ArcAffordanceController, ____distanceToCurvatureCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ArcAffordanceController, ____renderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ArcAffordanceController, ____topBone) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ArcAffordanceController, ____bottomBone) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ArcAffordanceController, ____endPositions) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::ArcAffordanceController) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
