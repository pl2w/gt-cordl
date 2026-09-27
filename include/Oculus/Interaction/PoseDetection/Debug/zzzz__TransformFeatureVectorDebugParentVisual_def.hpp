#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/TransformFeatureVectorDebugParentVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TransformFeatureVectorDebugParentVisual)
namespace Oculus::Interaction::PoseDetection {
struct TransformFeature;
}
namespace Oculus::Interaction::PoseDetection {
class TransformRecognizerActiveState;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection::Debug {
class TransformFeatureVectorDebugParentVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual*, "Oculus.Interaction.PoseDetection.Debug", "TransformFeatureVectorDebugParentVisual");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::PoseDetection::Debug {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Debug.TransformFeatureVectorDebugParentVisual
class CORDL_TYPE TransformFeatureVectorDebugParentVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _transformRecognizerActiveState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformRecognizerActiveState, put=__cordl_internal_set__transformRecognizerActiveState)) ::UnityW<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState>  _transformRecognizerActiveState;

/// @brief Field _vectorVisualPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__vectorVisualPrefab, put=__cordl_internal_set__vectorVisualPrefab)) ::UnityW<::UnityEngine::GameObject>  _vectorVisualPrefab;

/// @brief Method Awake, addr 0xa4b0c64, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateVectorDebugView, addr 0xa4b0f4c, size 0x18c, virtual false, abstract: false, final false
inline void CreateVectorDebugView(::Oculus::Interaction::PoseDetection::TransformFeature  feature, bool  trackingHandVector) ;

/// @brief Method GetTransformFeatureVectorAndWristPos, addr 0xa4b0c4c, size 0x18, virtual false, abstract: false, final false
inline void GetTransformFeatureVectorAndWristPos(::Oculus::Interaction::PoseDetection::TransformFeature  feature, bool  isHandVector, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  featureVec, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  wristPos) ;

static inline ::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual* New_ctor() ;

/// @brief Method Start, addr 0xa4b0c68, size 0x2e4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState> const& __cordl_internal_get__transformRecognizerActiveState() const;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState>& __cordl_internal_get__transformRecognizerActiveState() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__vectorVisualPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__vectorVisualPrefab() ;

constexpr void __cordl_internal_set__transformRecognizerActiveState(::UnityW<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState>  value) ;

constexpr void __cordl_internal_set__vectorVisualPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0xa4b11b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformFeatureVectorDebugParentVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureVectorDebugParentVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformFeatureVectorDebugParentVisual(TransformFeatureVectorDebugParentVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureVectorDebugParentVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformFeatureVectorDebugParentVisual(TransformFeatureVectorDebugParentVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16197};

/// [SerializeField]
/// @brief Field _transformRecognizerActiveState, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState>  ____transformRecognizerActiveState;

/// [SerializeField]
/// @brief Field _vectorVisualPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____vectorVisualPrefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual, ____transformRecognizerActiveState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual, ____vectorVisualPrefab) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection::Debug
