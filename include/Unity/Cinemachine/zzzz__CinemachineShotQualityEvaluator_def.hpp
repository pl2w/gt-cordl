#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineShotQualityEvaluator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineExtension_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineShotQualityEvaluator_DistanceEvaluationSettings_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineShotQualityEvaluator)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace GlobalNamespace {
struct CinemachineShotQualityEvaluator_DistanceEvaluationSettings;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace Unity::Cinemachine {
class IShotQualityEvaluator;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineShotQualityEvaluator;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineShotQualityEvaluator*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineShotQualityEvaluator*, "Unity.Cinemachine", "CinemachineShotQualityEvaluator");
// [AddComponentMenu("Cinemachine/Procedural/Extensions/Cinemachine Shot Quality Evaluator")]
// [SaveDuringPlay]
// [ExecuteAlways]
// [DisallowMultipleComponent]
// [RequiredTarget((Unity.Cinemachine.RequiredTargetAttribute::RequiredTargets)1)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineShotQualityEvaluator.html")]
// Dependencies Unity.Cinemachine.CinemachineExtension, Unity.Cinemachine.CinemachineShotQualityEvaluator::DistanceEvaluationSettings, UnityEngine.LayerMask
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineShotQualityEvaluator
class CORDL_TYPE CinemachineShotQualityEvaluator : public ::Unity::Cinemachine::CinemachineExtension {
public:
// Declarations
using DistanceEvaluationSettings = ::GlobalNamespace::CinemachineShotQualityEvaluator_DistanceEvaluationSettings;

/// @brief Field CameraRadius, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_CameraRadius, put=__cordl_internal_set_CameraRadius)) float_t  CameraRadius;

/// @brief Field DistanceEvaluation, offset 0x48, size 0x14 
 __declspec(property(get=__cordl_internal_get_DistanceEvaluation, put=__cordl_internal_set_DistanceEvaluation)) ::GlobalNamespace::CinemachineShotQualityEvaluator_DistanceEvaluationSettings  DistanceEvaluation;

/// @brief Field IgnoreTag, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_IgnoreTag, put=__cordl_internal_set_IgnoreTag)) ::StringW  IgnoreTag;

/// @brief Field MinimumDistanceFromTarget, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinimumDistanceFromTarget, put=__cordl_internal_set_MinimumDistanceFromTarget)) float_t  MinimumDistanceFromTarget;

/// @brief Field OcclusionLayers, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_OcclusionLayers, put=__cordl_internal_set_OcclusionLayers)) ::UnityEngine::LayerMask  OcclusionLayers;

/// @brief Convert operator to "::Unity::Cinemachine::IShotQualityEvaluator"
constexpr operator  ::Unity::Cinemachine::IShotQualityEvaluator*() noexcept;

/// @brief Method IsTargetObscured, addr 0xae97b60, size 0x2ac, virtual false, abstract: false, final false
inline bool IsTargetObscured(::Unity::Cinemachine::CameraState  state) ;

static inline ::Unity::Cinemachine::CinemachineShotQualityEvaluator* New_ctor() ;

/// @brief Method OnValidate, addr 0xae97930, size 0x54, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PostPipelineStageCallback, addr 0xae979f4, size 0x16c, virtual true, abstract: false, final false
inline void PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method Reset, addr 0xae97984, size 0x5c, virtual false, abstract: false, final false
inline void Reset() ;

constexpr float_t const& __cordl_internal_get_CameraRadius() const;

constexpr float_t& __cordl_internal_get_CameraRadius() ;

constexpr ::GlobalNamespace::CinemachineShotQualityEvaluator_DistanceEvaluationSettings const& __cordl_internal_get_DistanceEvaluation() const;

constexpr ::GlobalNamespace::CinemachineShotQualityEvaluator_DistanceEvaluationSettings& __cordl_internal_get_DistanceEvaluation() ;

constexpr ::StringW const& __cordl_internal_get_IgnoreTag() const;

constexpr ::StringW& __cordl_internal_get_IgnoreTag() ;

constexpr float_t const& __cordl_internal_get_MinimumDistanceFromTarget() const;

constexpr float_t& __cordl_internal_get_MinimumDistanceFromTarget() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_OcclusionLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_OcclusionLayers() ;

constexpr void __cordl_internal_set_CameraRadius(float_t  value) ;

constexpr void __cordl_internal_set_DistanceEvaluation(::GlobalNamespace::CinemachineShotQualityEvaluator_DistanceEvaluationSettings  value) ;

constexpr void __cordl_internal_set_IgnoreTag(::StringW  value) ;

constexpr void __cordl_internal_set_MinimumDistanceFromTarget(float_t  value) ;

constexpr void __cordl_internal_set_OcclusionLayers(::UnityEngine::LayerMask  value) ;

/// @brief Method .ctor, addr 0xae97e0c, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Cinemachine::IShotQualityEvaluator"
constexpr ::Unity::Cinemachine::IShotQualityEvaluator* i___Unity__Cinemachine__IShotQualityEvaluator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineShotQualityEvaluator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineShotQualityEvaluator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineShotQualityEvaluator(CinemachineShotQualityEvaluator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineShotQualityEvaluator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineShotQualityEvaluator(CinemachineShotQualityEvaluator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22198};

/// [Tooltip("Objects on these layers will be detected")]
/// @brief Field OcclusionLayers, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___OcclusionLayers;

/// [TagField]
/// [Tooltip("Obstacles with this tag will be ignored.  It is a good idea to set this field to the target\'s tag")]
/// @brief Field IgnoreTag, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___IgnoreTag;

/// [Tooltip("Obstacles closer to the target than this will be ignored")]
/// @brief Field MinimumDistanceFromTarget, offset: 0x40, size: 0x4, def value: None
 float_t  ___MinimumDistanceFromTarget;

/// [Tooltip("Radius of the spherecast that will be done to check for occlusions.")]
/// @brief Field CameraRadius, offset: 0x44, size: 0x4, def value: None
 float_t  ___CameraRadius;

/// [FoldoutWithEnabledButton("Enabled")]
/// @brief Field DistanceEvaluation, offset: 0x48, size: 0x14, def value: None
 ::GlobalNamespace::CinemachineShotQualityEvaluator_DistanceEvaluationSettings  ___DistanceEvaluation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineShotQualityEvaluator, ___OcclusionLayers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineShotQualityEvaluator, ___IgnoreTag) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineShotQualityEvaluator, ___MinimumDistanceFromTarget) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineShotQualityEvaluator, ___CameraRadius) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineShotQualityEvaluator, ___DistanceEvaluation) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineShotQualityEvaluator) == 0x60, "Size mismatch!");

} // namespace end def Unity::Cinemachine
