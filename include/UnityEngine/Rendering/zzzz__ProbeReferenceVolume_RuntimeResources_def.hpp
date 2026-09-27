#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeReferenceVolume_RuntimeResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ProbeReferenceVolume_RuntimeResources)
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
struct ProbeReferenceVolume_RuntimeResources;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeReferenceVolume_RuntimeResources);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeReferenceVolume_RuntimeResources, "UnityEngine.Rendering", "ProbeReferenceVolume/RuntimeResources");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/RuntimeResources
struct CORDL_TYPE ProbeReferenceVolume_RuntimeResources {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ProbeReferenceVolume_RuntimeResources() ;

// Ctor Parameters [CppParam { name: "index", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cellIndices", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "L0_L1rx", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "L1_G_ry", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "L1_B_rz", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "L2_0", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "L2_1", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "L2_2", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "L2_3", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "ProbeOcclusion", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Validity", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "SkyOcclusionL0L1", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "SkyShadingDirectionIndices", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "SkyPrecomputedDirections", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "QualityLeakReductionData", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None, comment: None }]
constexpr ProbeReferenceVolume_RuntimeResources(::UnityEngine::ComputeBuffer*  index, ::UnityEngine::ComputeBuffer*  cellIndices, ::UnityW<::UnityEngine::RenderTexture>  L0_L1rx, ::UnityW<::UnityEngine::RenderTexture>  L1_G_ry, ::UnityW<::UnityEngine::RenderTexture>  L1_B_rz, ::UnityW<::UnityEngine::RenderTexture>  L2_0, ::UnityW<::UnityEngine::RenderTexture>  L2_1, ::UnityW<::UnityEngine::RenderTexture>  L2_2, ::UnityW<::UnityEngine::RenderTexture>  L2_3, ::UnityW<::UnityEngine::RenderTexture>  ProbeOcclusion, ::UnityW<::UnityEngine::RenderTexture>  Validity, ::UnityW<::UnityEngine::RenderTexture>  SkyOcclusionL0L1, ::UnityW<::UnityEngine::RenderTexture>  SkyShadingDirectionIndices, ::UnityEngine::ComputeBuffer*  SkyPrecomputedDirections, ::UnityEngine::ComputeBuffer*  QualityLeakReductionData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16820};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field index, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  index;

/// @brief Field cellIndices, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  cellIndices;

/// @brief Field L0_L1rx, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  L0_L1rx;

/// @brief Field L1_G_ry, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  L1_G_ry;

/// @brief Field L1_B_rz, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  L1_B_rz;

/// @brief Field L2_0, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  L2_0;

/// @brief Field L2_1, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  L2_1;

/// @brief Field L2_2, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  L2_2;

/// @brief Field L2_3, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  L2_3;

/// @brief Field ProbeOcclusion, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ProbeOcclusion;

/// @brief Field Validity, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  Validity;

/// @brief Field SkyOcclusionL0L1, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  SkyOcclusionL0L1;

/// @brief Field SkyShadingDirectionIndices, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  SkyShadingDirectionIndices;

/// @brief Field SkyPrecomputedDirections, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  SkyPrecomputedDirections;

/// @brief Field QualityLeakReductionData, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  QualityLeakReductionData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_RuntimeResources, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_RuntimeResources, cellIndices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_RuntimeResources, L0_L1rx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_RuntimeResources, L1_G_ry) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_RuntimeResources, L1_B_rz) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_RuntimeResources, L2_0) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_RuntimeResources, L2_1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_RuntimeResources, L2_2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_RuntimeResources, L2_3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_RuntimeResources, ProbeOcclusion) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_RuntimeResources, Validity) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_RuntimeResources, SkyOcclusionL0L1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_RuntimeResources, SkyShadingDirectionIndices) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_RuntimeResources, SkyPrecomputedDirections) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_RuntimeResources, QualityLeakReductionData) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeReferenceVolume_RuntimeResources) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
