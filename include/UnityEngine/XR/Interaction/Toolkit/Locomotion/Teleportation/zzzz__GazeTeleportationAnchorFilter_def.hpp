#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/GazeTeleportationAnchorFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GazeTeleportationAnchorFilter)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class ITeleportationVolumeAnchorFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportationMultiAnchorVolume;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class GazeTeleportationAnchorFilter;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation", "GazeTeleportationAnchorFilter");
// [CreateAssetMenu(fileName = "GazeTeleportationAnchorFilter", menuName = "XR/Locomotion/Gaze Teleportation Anchor Filter")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.GazeTeleportationAnchorFilter.html")]
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.GazeTeleportationAnchorFilter
class CORDL_TYPE GazeTeleportationAnchorFilter : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_distanceWeightCurve, put=set_distanceWeightCurve)) ::UnityEngine::AnimationCurve*  distanceWeightCurve;

 __declspec(property(get=get_enableDistanceWeighting, put=set_enableDistanceWeighting)) bool  enableDistanceWeighting;

 __declspec(property(get=get_gazeAngleScoreCurve, put=set_gazeAngleScoreCurve)) ::UnityEngine::AnimationCurve*  gazeAngleScoreCurve;

/// @brief Field m_AnchorWeights, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AnchorWeights, put=__cordl_internal_set_m_AnchorWeights)) ::ArrayW<float_t>  m_AnchorWeights;

/// @brief Field m_DistanceWeightCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DistanceWeightCurve, put=__cordl_internal_set_m_DistanceWeightCurve)) ::UnityEngine::AnimationCurve*  m_DistanceWeightCurve;

/// @brief Field m_EnableDistanceWeighting, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableDistanceWeighting, put=__cordl_internal_set_m_EnableDistanceWeighting)) bool  m_EnableDistanceWeighting;

/// @brief Field m_GazeAngleScoreCurve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GazeAngleScoreCurve, put=__cordl_internal_set_m_GazeAngleScoreCurve)) ::UnityEngine::AnimationCurve*  m_GazeAngleScoreCurve;

/// @brief Field m_MaxGazeAngle, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxGazeAngle, put=__cordl_internal_set_m_MaxGazeAngle)) float_t  m_MaxGazeAngle;

 __declspec(property(get=get_maxGazeAngle, put=set_maxGazeAngle)) float_t  maxGazeAngle;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*() noexcept;

/// @brief Method GetDestinationAnchorIndex, addr 0xb44d95c, size 0x438, virtual true, abstract: false, final true
inline int32_t GetDestinationAnchorIndex(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*  teleportationVolume) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter* New_ctor() ;

/// @brief Method Reset, addr 0xb44d6a0, size 0x2bc, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_AnchorWeights() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_AnchorWeights() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_m_DistanceWeightCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_DistanceWeightCurve() ;

constexpr bool const& __cordl_internal_get_m_EnableDistanceWeighting() const;

constexpr bool& __cordl_internal_get_m_EnableDistanceWeighting() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_m_GazeAngleScoreCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_GazeAngleScoreCurve() ;

constexpr float_t const& __cordl_internal_get_m_MaxGazeAngle() const;

constexpr float_t& __cordl_internal_get_m_MaxGazeAngle() ;

constexpr void __cordl_internal_set_m_AnchorWeights(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_DistanceWeightCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_m_EnableDistanceWeighting(bool  value) ;

constexpr void __cordl_internal_set_m_GazeAngleScoreCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_m_MaxGazeAngle(float_t  value) ;

/// @brief Method .ctor, addr 0xb44dd94, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_distanceWeightCurve, addr 0xb44d690, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_distanceWeightCurve() ;

/// @brief Method get_enableDistanceWeighting, addr 0xb44d680, size 0x8, virtual false, abstract: false, final false
inline bool get_enableDistanceWeighting() ;

/// @brief Method get_gazeAngleScoreCurve, addr 0xb44d670, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_gazeAngleScoreCurve() ;

/// @brief Method get_maxGazeAngle, addr 0xb44d660, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxGazeAngle() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter* i___UnityEngine__XR__Interaction__Toolkit__Locomotion__Teleportation__ITeleportationVolumeAnchorFilter() noexcept;

/// @brief Method set_distanceWeightCurve, addr 0xb44d698, size 0x8, virtual false, abstract: false, final false
inline void set_distanceWeightCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_enableDistanceWeighting, addr 0xb44d688, size 0x8, virtual false, abstract: false, final false
inline void set_enableDistanceWeighting(bool  value) ;

/// @brief Method set_gazeAngleScoreCurve, addr 0xb44d678, size 0x8, virtual false, abstract: false, final false
inline void set_gazeAngleScoreCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_maxGazeAngle, addr 0xb44d668, size 0x8, virtual false, abstract: false, final false
inline void set_maxGazeAngle(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GazeTeleportationAnchorFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GazeTeleportationAnchorFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GazeTeleportationAnchorFilter(GazeTeleportationAnchorFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GazeTeleportationAnchorFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GazeTeleportationAnchorFilter(GazeTeleportationAnchorFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11358};

/// [SerializeField]
/// [Range(0, 180)]
/// [Tooltip("The maximum angle (in degrees) between the camera forward and the direction from the camera to an anchor for the anchor to be considered a valid destination.")]
/// @brief Field m_MaxGazeAngle, offset: 0x18, size: 0x4, def value: None
 float_t  ___m_MaxGazeAngle;

/// [SerializeField]
/// [Tooltip("The curve used to score an anchor by its angle from the camera forward. The X axis is the normalized angle, where 0 is 0 degrees and 1 is the Max Gaze Angle. The Y axis is the score, where a higher value means a better destination.")]
/// @brief Field m_GazeAngleScoreCurve, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___m_GazeAngleScoreCurve;

/// [SerializeField]
/// [Tooltip("Whether to weight an anchor\'s score by its distance from the user.")]
/// @brief Field m_EnableDistanceWeighting, offset: 0x28, size: 0x1, def value: None
 bool  ___m_EnableDistanceWeighting;

/// [SerializeField]
/// [Tooltip("The curve used to weight an anchor\'s score by its distance from the user. The X axis is the normalized distance, where 0 is the closest anchor and 1 is the furthest anchor. The Y axis is the weight.")]
/// @brief Field m_DistanceWeightCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___m_DistanceWeightCurve;

/// @brief Field m_AnchorWeights, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_AnchorWeights;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter, ___m_MaxGazeAngle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter, ___m_GazeAngleScoreCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter, ___m_EnableDistanceWeighting) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter, ___m_DistanceWeightCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter, ___m_AnchorWeights) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation
