#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeAdjustmentVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ProbeAdjustmentVolume_Mode_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeAdjustmentVolume_RenderingLayerMaskOperation_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeAdjustmentVolume_Shape_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeAdjustmentVolume_Version_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeAdjustmentVolume)
namespace GlobalNamespace {
struct ProbeAdjustmentVolume_Mode;
}
namespace GlobalNamespace {
struct ProbeAdjustmentVolume_RenderingLayerMaskOperation;
}
namespace GlobalNamespace {
struct ProbeAdjustmentVolume_Shape;
}
namespace GlobalNamespace {
struct ProbeAdjustmentVolume_Version;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeAdjustmentVolume;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ProbeAdjustmentVolume*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ProbeAdjustmentVolume*, "UnityEngine.Rendering", "ProbeAdjustmentVolume");
// [ExecuteAlways]
// [AddComponentMenu("Rendering/Probe Adjustment Volume")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Rendering.ProbeAdjustmentVolume::Mode, UnityEngine.Rendering.ProbeAdjustmentVolume::RenderingLayerMaskOperation, UnityEngine.Rendering.ProbeAdjustmentVolume::Shape, UnityEngine.Rendering.ProbeAdjustmentVolume::Version, UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeAdjustmentVolume
class CORDL_TYPE ProbeAdjustmentVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Mode = ::GlobalNamespace::ProbeAdjustmentVolume_Mode;

using RenderingLayerMaskOperation = ::GlobalNamespace::ProbeAdjustmentVolume_RenderingLayerMaskOperation;

using Shape = ::GlobalNamespace::ProbeAdjustmentVolume_Shape;

using Version = ::GlobalNamespace::ProbeAdjustmentVolume_Version;

/// @brief Field directSampleCount, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_directSampleCount, put=__cordl_internal_set_directSampleCount)) int32_t  directSampleCount;

/// @brief Field geometryBias, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_geometryBias, put=__cordl_internal_set_geometryBias)) float_t  geometryBias;

/// @brief Field indirectSampleCount, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_indirectSampleCount, put=__cordl_internal_set_indirectSampleCount)) int32_t  indirectSampleCount;

/// @brief Field intensityScale, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_intensityScale, put=__cordl_internal_set_intensityScale)) float_t  intensityScale;

/// @brief Field invalidateProbes, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_invalidateProbes, put=__cordl_internal_set_invalidateProbes)) bool  invalidateProbes;

/// @brief Field maxBounces, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxBounces, put=__cordl_internal_set_maxBounces)) int32_t  maxBounces;

/// @brief Field mode, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::ProbeAdjustmentVolume_Mode  mode;

/// @brief Field overriddenDilationThreshold, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_overriddenDilationThreshold, put=__cordl_internal_set_overriddenDilationThreshold)) float_t  overriddenDilationThreshold;

/// @brief Field overrideDilationThreshold, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideDilationThreshold, put=__cordl_internal_set_overrideDilationThreshold)) bool  overrideDilationThreshold;

/// @brief Field radius, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) float_t  radius;

/// @brief Field rayOriginBias, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_rayOriginBias, put=__cordl_internal_set_rayOriginBias)) float_t  rayOriginBias;

/// @brief Field renderingLayerMask, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_renderingLayerMask, put=__cordl_internal_set_renderingLayerMask)) uint8_t  renderingLayerMask;

/// @brief Field renderingLayerMaskOperation, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_renderingLayerMaskOperation, put=__cordl_internal_set_renderingLayerMaskOperation)) ::GlobalNamespace::ProbeAdjustmentVolume_RenderingLayerMaskOperation  renderingLayerMaskOperation;

/// @brief Field sampleCountMultiplier, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sampleCountMultiplier, put=__cordl_internal_set_sampleCountMultiplier)) int32_t  sampleCountMultiplier;

/// @brief Field shape, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_shape, put=__cordl_internal_set_shape)) ::GlobalNamespace::ProbeAdjustmentVolume_Shape  shape;

/// @brief Field size, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) ::UnityEngine::Vector3  size;

/// @brief Field skyDirection, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get_skyDirection, put=__cordl_internal_set_skyDirection)) ::UnityEngine::Vector3  skyDirection;

/// @brief Field skyOcclusionMaxBounces, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_skyOcclusionMaxBounces, put=__cordl_internal_set_skyOcclusionMaxBounces)) int32_t  skyOcclusionMaxBounces;

/// @brief Field skyOcclusionSampleCount, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_skyOcclusionSampleCount, put=__cordl_internal_set_skyOcclusionSampleCount)) int32_t  skyOcclusionSampleCount;

/// @brief Field skyShadingDirectionRotation, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get_skyShadingDirectionRotation, put=__cordl_internal_set_skyShadingDirectionRotation)) ::UnityEngine::Vector3  skyShadingDirectionRotation;

/// @brief Field version, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) ::GlobalNamespace::ProbeAdjustmentVolume_Version  version;

/// @brief Field virtualOffsetDistance, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_virtualOffsetDistance, put=__cordl_internal_set_virtualOffsetDistance)) float_t  virtualOffsetDistance;

/// @brief Field virtualOffsetRotation, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_virtualOffsetRotation, put=__cordl_internal_set_virtualOffsetRotation)) ::UnityEngine::Vector3  virtualOffsetRotation;

/// @brief Field virtualOffsetThreshold, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_virtualOffsetThreshold, put=__cordl_internal_set_virtualOffsetThreshold)) float_t  virtualOffsetThreshold;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

static inline ::UnityEngine::Rendering::ProbeAdjustmentVolume* New_ctor() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0xb157f3c, size 0x4c, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0xb157f24, size 0x18, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

constexpr int32_t const& __cordl_internal_get_directSampleCount() const;

constexpr int32_t& __cordl_internal_get_directSampleCount() ;

constexpr float_t const& __cordl_internal_get_geometryBias() const;

constexpr float_t& __cordl_internal_get_geometryBias() ;

constexpr int32_t const& __cordl_internal_get_indirectSampleCount() const;

constexpr int32_t& __cordl_internal_get_indirectSampleCount() ;

constexpr float_t const& __cordl_internal_get_intensityScale() const;

constexpr float_t& __cordl_internal_get_intensityScale() ;

constexpr bool const& __cordl_internal_get_invalidateProbes() const;

constexpr bool& __cordl_internal_get_invalidateProbes() ;

constexpr int32_t const& __cordl_internal_get_maxBounces() const;

constexpr int32_t& __cordl_internal_get_maxBounces() ;

constexpr ::GlobalNamespace::ProbeAdjustmentVolume_Mode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::ProbeAdjustmentVolume_Mode& __cordl_internal_get_mode() ;

constexpr float_t const& __cordl_internal_get_overriddenDilationThreshold() const;

constexpr float_t& __cordl_internal_get_overriddenDilationThreshold() ;

constexpr bool const& __cordl_internal_get_overrideDilationThreshold() const;

constexpr bool& __cordl_internal_get_overrideDilationThreshold() ;

constexpr float_t const& __cordl_internal_get_radius() const;

constexpr float_t& __cordl_internal_get_radius() ;

constexpr float_t const& __cordl_internal_get_rayOriginBias() const;

constexpr float_t& __cordl_internal_get_rayOriginBias() ;

constexpr uint8_t const& __cordl_internal_get_renderingLayerMask() const;

constexpr uint8_t& __cordl_internal_get_renderingLayerMask() ;

constexpr ::GlobalNamespace::ProbeAdjustmentVolume_RenderingLayerMaskOperation const& __cordl_internal_get_renderingLayerMaskOperation() const;

constexpr ::GlobalNamespace::ProbeAdjustmentVolume_RenderingLayerMaskOperation& __cordl_internal_get_renderingLayerMaskOperation() ;

constexpr int32_t const& __cordl_internal_get_sampleCountMultiplier() const;

constexpr int32_t& __cordl_internal_get_sampleCountMultiplier() ;

constexpr ::GlobalNamespace::ProbeAdjustmentVolume_Shape const& __cordl_internal_get_shape() const;

constexpr ::GlobalNamespace::ProbeAdjustmentVolume_Shape& __cordl_internal_get_shape() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_size() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_size() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_skyDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_skyDirection() ;

constexpr int32_t const& __cordl_internal_get_skyOcclusionMaxBounces() const;

constexpr int32_t& __cordl_internal_get_skyOcclusionMaxBounces() ;

constexpr int32_t const& __cordl_internal_get_skyOcclusionSampleCount() const;

constexpr int32_t& __cordl_internal_get_skyOcclusionSampleCount() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_skyShadingDirectionRotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_skyShadingDirectionRotation() ;

constexpr ::GlobalNamespace::ProbeAdjustmentVolume_Version const& __cordl_internal_get_version() const;

constexpr ::GlobalNamespace::ProbeAdjustmentVolume_Version& __cordl_internal_get_version() ;

constexpr float_t const& __cordl_internal_get_virtualOffsetDistance() const;

constexpr float_t& __cordl_internal_get_virtualOffsetDistance() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_virtualOffsetRotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_virtualOffsetRotation() ;

constexpr float_t const& __cordl_internal_get_virtualOffsetThreshold() const;

constexpr float_t& __cordl_internal_get_virtualOffsetThreshold() ;

constexpr void __cordl_internal_set_directSampleCount(int32_t  value) ;

constexpr void __cordl_internal_set_geometryBias(float_t  value) ;

constexpr void __cordl_internal_set_indirectSampleCount(int32_t  value) ;

constexpr void __cordl_internal_set_intensityScale(float_t  value) ;

constexpr void __cordl_internal_set_invalidateProbes(bool  value) ;

constexpr void __cordl_internal_set_maxBounces(int32_t  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::ProbeAdjustmentVolume_Mode  value) ;

constexpr void __cordl_internal_set_overriddenDilationThreshold(float_t  value) ;

constexpr void __cordl_internal_set_overrideDilationThreshold(bool  value) ;

constexpr void __cordl_internal_set_radius(float_t  value) ;

constexpr void __cordl_internal_set_rayOriginBias(float_t  value) ;

constexpr void __cordl_internal_set_renderingLayerMask(uint8_t  value) ;

constexpr void __cordl_internal_set_renderingLayerMaskOperation(::GlobalNamespace::ProbeAdjustmentVolume_RenderingLayerMaskOperation  value) ;

constexpr void __cordl_internal_set_sampleCountMultiplier(int32_t  value) ;

constexpr void __cordl_internal_set_shape(::GlobalNamespace::ProbeAdjustmentVolume_Shape  value) ;

constexpr void __cordl_internal_set_size(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_skyDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_skyOcclusionMaxBounces(int32_t  value) ;

constexpr void __cordl_internal_set_skyOcclusionSampleCount(int32_t  value) ;

constexpr void __cordl_internal_set_skyShadingDirectionRotation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_version(::GlobalNamespace::ProbeAdjustmentVolume_Version  value) ;

constexpr void __cordl_internal_set_virtualOffsetDistance(float_t  value) ;

constexpr void __cordl_internal_set_virtualOffsetRotation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_virtualOffsetThreshold(float_t  value) ;

/// @brief Method .ctor, addr 0xb153980, size 0xc8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProbeAdjustmentVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProbeAdjustmentVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProbeAdjustmentVolume(ProbeAdjustmentVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProbeAdjustmentVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProbeAdjustmentVolume(ProbeAdjustmentVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16797};

/// [Tooltip("Select the shape used for this Probe Adjustment Volume.")]
/// @brief Field shape, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::ProbeAdjustmentVolume_Shape  ___shape;

/// [Min(0)]
/// [Tooltip("Modify the size of this Probe Adjustment Volume. This is unaffected by the GameObject\'s Transform\'s Scale property.")]
/// @brief Field size, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___size;

/// [Min(0)]
/// [Tooltip("Modify the radius of this Probe Adjustment Volume. This is unaffected by the GameObject\'s Transform\'s Scale property.")]
/// @brief Field radius, offset: 0x30, size: 0x4, def value: None
 float_t  ___radius;

/// @brief Field mode, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::ProbeAdjustmentVolume_Mode  ___mode;

/// [Range(0.0001, 2)]
/// [Tooltip("A multiplier applied to the intensity of probes covered by this Probe Adjustment Volume.")]
/// @brief Field intensityScale, offset: 0x38, size: 0x4, def value: None
 float_t  ___intensityScale;

/// [Range(0, 0.95)]
/// @brief Field overriddenDilationThreshold, offset: 0x3c, size: 0x4, def value: None
 float_t  ___overriddenDilationThreshold;

/// @brief Field virtualOffsetRotation, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___virtualOffsetRotation;

/// [Min(0)]
/// @brief Field virtualOffsetDistance, offset: 0x4c, size: 0x4, def value: None
 float_t  ___virtualOffsetDistance;

/// [Range(0, 1)]
/// [Tooltip("Determines how far Unity pushes a probe out of geometry after a ray hit.")]
/// @brief Field geometryBias, offset: 0x50, size: 0x4, def value: None
 float_t  ___geometryBias;

/// [Range(0, 0.95)]
/// @brief Field virtualOffsetThreshold, offset: 0x54, size: 0x4, def value: None
 float_t  ___virtualOffsetThreshold;

/// [Range(-0.05, 0)]
/// [Tooltip("Distance from the probe position used to determine the origin of the sampling ray.")]
/// @brief Field rayOriginBias, offset: 0x58, size: 0x4, def value: None
 float_t  ___rayOriginBias;

/// [Tooltip("The direction for sampling the ambient probe in worldspace when using the Sky Visibility feature.")]
/// @brief Field skyDirection, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___skyDirection;

/// @brief Field skyShadingDirectionRotation, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___skyShadingDirectionRotation;

/// [Logarithmic(1, 1024)]
/// [Tooltip("Number of samples for direct lighting computations.")]
/// @brief Field directSampleCount, offset: 0x74, size: 0x4, def value: None
 int32_t  ___directSampleCount;

/// [Logarithmic(1, 8192)]
/// [Tooltip("Number of samples for indirect lighting computations. This includes environment samples.")]
/// @brief Field indirectSampleCount, offset: 0x78, size: 0x4, def value: None
 int32_t  ___indirectSampleCount;

/// [Min(0)]
/// [Tooltip("Multiplier for the number of samples specified above.")]
/// @brief Field sampleCountMultiplier, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___sampleCountMultiplier;

/// [Min(0)]
/// [Tooltip("Maximum number of bounces for indirect lighting.")]
/// @brief Field maxBounces, offset: 0x80, size: 0x4, def value: None
 int32_t  ___maxBounces;

/// [Logarithmic(1, 8192)]
/// @brief Field skyOcclusionSampleCount, offset: 0x84, size: 0x4, def value: None
 int32_t  ___skyOcclusionSampleCount;

/// [Range(0, 5)]
/// @brief Field skyOcclusionMaxBounces, offset: 0x88, size: 0x4, def value: None
 int32_t  ___skyOcclusionMaxBounces;

/// @brief Field renderingLayerMaskOperation, offset: 0x8c, size: 0x4, def value: None
 ::GlobalNamespace::ProbeAdjustmentVolume_RenderingLayerMaskOperation  ___renderingLayerMaskOperation;

/// @brief Field renderingLayerMask, offset: 0x90, size: 0x1, def value: None
 uint8_t  ___renderingLayerMask;

/// [SerializeField]
/// @brief Field version, offset: 0x94, size: 0x4, def value: None
 ::GlobalNamespace::ProbeAdjustmentVolume_Version  ___version;

/// [Obsolete("This field is only kept for migration purpose. Use mode instead. #from(2023.1)")]
/// @brief Field invalidateProbes, offset: 0x98, size: 0x1, def value: None
 bool  ___invalidateProbes;

/// [Obsolete("This field is only kept for migration purpose. Use mode instead. #from(2023.1)")]
/// @brief Field overrideDilationThreshold, offset: 0x99, size: 0x1, def value: None
 bool  ___overrideDilationThreshold;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___shape) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___size) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___radius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___mode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___intensityScale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___overriddenDilationThreshold) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___virtualOffsetRotation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___virtualOffsetDistance) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___geometryBias) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___virtualOffsetThreshold) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___rayOriginBias) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___skyDirection) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___skyShadingDirectionRotation) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___directSampleCount) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___indirectSampleCount) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___sampleCountMultiplier) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___maxBounces) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___skyOcclusionSampleCount) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___skyOcclusionMaxBounces) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___renderingLayerMaskOperation) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___renderingLayerMask) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___version) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___invalidateProbes) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___overrideDilationThreshold) == 0x99, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::ProbeAdjustmentVolume) == 0xa0, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
