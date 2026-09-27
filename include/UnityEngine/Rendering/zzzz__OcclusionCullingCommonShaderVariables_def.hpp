#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionCullingCommonShaderVariables.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OcclusionCullingCommonShaderVariables)
namespace GlobalNamespace {
struct OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer;
}
namespace GlobalNamespace {
struct OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer;
}
namespace GlobalNamespace {
struct OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer;
}
namespace GlobalNamespace {
struct OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer;
}
namespace GlobalNamespace {
struct OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct InstanceOcclusionTestSubviewSettings;
}
namespace UnityEngine::Rendering {
struct OccluderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct OcclusionCullingCommonShaderVariables;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, "UnityEngine.Rendering", "OcclusionCullingCommonShaderVariables");
// [GenerateHLSL((UnityEngine.Rendering.PackingRules)0, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@04755ad51d99\\Runtime\\GPUDriven\\OcclusionCullingCommonShaderVariables.cs", needAccessors = false, generateCBuffer = true)]
// Dependencies UnityEngine.Rendering.OcclusionCullingCommonShaderVariables::<_FacingDirWorldSpace>e__FixedBuffer, UnityEngine.Rendering.OcclusionCullingCommonShaderVariables::<_OccluderMipBounds>e__FixedBuffer, UnityEngine.Rendering.OcclusionCullingCommonShaderVariables::<_RadialDirWorldSpace>e__FixedBuffer, UnityEngine.Rendering.OcclusionCullingCommonShaderVariables::<_ViewOriginWorldSpace>e__FixedBuffer, UnityEngine.Rendering.OcclusionCullingCommonShaderVariables::<_ViewProjMatrix>e__FixedBuffer, UnityEngine.Vector4
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OcclusionCullingCommonShaderVariables
struct CORDL_TYPE OcclusionCullingCommonShaderVariables {
public:
// Declarations
using __FacingDirWorldSpace_e__FixedBuffer = ::GlobalNamespace::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer;

using __OccluderMipBounds_e__FixedBuffer = ::GlobalNamespace::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer;

using __RadialDirWorldSpace_e__FixedBuffer = ::GlobalNamespace::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer;

using __ViewOriginWorldSpace_e__FixedBuffer = ::GlobalNamespace::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer;

using __ViewProjMatrix_e__FixedBuffer = ::GlobalNamespace::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer;

/// @brief Method .ctor, addr 0xb20dc04, size 0x334, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::OccluderContext>  occluderCtx, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings>  subviewSettings, bool  occlusionOverlayCountVisible, bool  overrideOcclusionTestToAlwaysPass) ;

// Ctor Parameters []
// @brief default ctor
constexpr OcclusionCullingCommonShaderVariables() ;

// Ctor Parameters [CppParam { name: "_OccluderMipBounds", ty: "::GlobalNamespace::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ViewProjMatrix", ty: "::GlobalNamespace::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ViewOriginWorldSpace", ty: "::GlobalNamespace::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_FacingDirWorldSpace", ty: "::GlobalNamespace::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_RadialDirWorldSpace", ty: "::GlobalNamespace::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DepthSizeInOccluderPixels", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_OccluderDepthPyramidSize", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_OccluderMipLayoutSizeX", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_OccluderMipLayoutSizeY", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_OcclusionTestDebugFlags", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_OcclusionCullingCommonPad0", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_OcclusionTestCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_OccluderSubviewIndices", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CullingSplitIndices", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CullingSplitMask", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OcclusionCullingCommonShaderVariables(::GlobalNamespace::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer  _OccluderMipBounds, ::GlobalNamespace::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer  _ViewProjMatrix, ::GlobalNamespace::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer  _ViewOriginWorldSpace, ::GlobalNamespace::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer  _FacingDirWorldSpace, ::GlobalNamespace::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer  _RadialDirWorldSpace, ::UnityEngine::Vector4  _DepthSizeInOccluderPixels, ::UnityEngine::Vector4  _OccluderDepthPyramidSize, uint32_t  _OccluderMipLayoutSizeX, uint32_t  _OccluderMipLayoutSizeY, uint32_t  _OcclusionTestDebugFlags, uint32_t  _OcclusionCullingCommonPad0, int32_t  _OcclusionTestCount, int32_t  _OccluderSubviewIndices, int32_t  _CullingSplitIndices, int32_t  _CullingSplitMask) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26716};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x360};

/// [FixedBuffer(typeof(System.UInt32), 32)]
/// [HLSLArray(8, typeof(UnityEngine.Rendering.ShaderGenUInt4))]
/// @brief Field _OccluderMipBounds, offset: 0x0, size: 0x80, def value: None
 ::GlobalNamespace::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer  _OccluderMipBounds;

/// [FixedBuffer(typeof(System.Single), 96)]
/// [HLSLArray(6, typeof(UnityEngine.Matrix4x4))]
/// @brief Field _ViewProjMatrix, offset: 0x80, size: 0x180, def value: None
 ::GlobalNamespace::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer  _ViewProjMatrix;

/// [FixedBuffer(typeof(System.Single), 24)]
/// [HLSLArray(6, typeof(UnityEngine.Vector4))]
/// @brief Field _ViewOriginWorldSpace, offset: 0x200, size: 0x60, def value: None
 ::GlobalNamespace::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer  _ViewOriginWorldSpace;

/// [FixedBuffer(typeof(System.Single), 24)]
/// [HLSLArray(6, typeof(UnityEngine.Vector4))]
/// @brief Field _FacingDirWorldSpace, offset: 0x260, size: 0x60, def value: None
 ::GlobalNamespace::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer  _FacingDirWorldSpace;

/// [FixedBuffer(typeof(System.Single), 24)]
/// [HLSLArray(6, typeof(UnityEngine.Vector4))]
/// @brief Field _RadialDirWorldSpace, offset: 0x2c0, size: 0x60, def value: None
 ::GlobalNamespace::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer  _RadialDirWorldSpace;

/// @brief Field _DepthSizeInOccluderPixels, offset: 0x320, size: 0x10, def value: None
 ::UnityEngine::Vector4  _DepthSizeInOccluderPixels;

/// @brief Field _OccluderDepthPyramidSize, offset: 0x330, size: 0x10, def value: None
 ::UnityEngine::Vector4  _OccluderDepthPyramidSize;

/// @brief Field _OccluderMipLayoutSizeX, offset: 0x340, size: 0x4, def value: None
 uint32_t  _OccluderMipLayoutSizeX;

/// @brief Field _OccluderMipLayoutSizeY, offset: 0x344, size: 0x4, def value: None
 uint32_t  _OccluderMipLayoutSizeY;

/// @brief Field _OcclusionTestDebugFlags, offset: 0x348, size: 0x4, def value: None
 uint32_t  _OcclusionTestDebugFlags;

/// @brief Field _OcclusionCullingCommonPad0, offset: 0x34c, size: 0x4, def value: None
 uint32_t  _OcclusionCullingCommonPad0;

/// @brief Field _OcclusionTestCount, offset: 0x350, size: 0x4, def value: None
 int32_t  _OcclusionTestCount;

/// @brief Field _OccluderSubviewIndices, offset: 0x354, size: 0x4, def value: None
 int32_t  _OccluderSubviewIndices;

/// @brief Field _CullingSplitIndices, offset: 0x358, size: 0x4, def value: None
 int32_t  _CullingSplitIndices;

/// @brief Field _CullingSplitMask, offset: 0x35c, size: 0x4, def value: None
 int32_t  _CullingSplitMask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _OccluderMipBounds) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _ViewProjMatrix) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _ViewOriginWorldSpace) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _FacingDirWorldSpace) == 0x260, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _RadialDirWorldSpace) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _DepthSizeInOccluderPixels) == 0x320, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _OccluderDepthPyramidSize) == 0x330, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _OccluderMipLayoutSizeX) == 0x340, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _OccluderMipLayoutSizeY) == 0x344, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _OcclusionTestDebugFlags) == 0x348, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _OcclusionCullingCommonPad0) == 0x34c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _OcclusionTestCount) == 0x350, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _OccluderSubviewIndices) == 0x354, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _CullingSplitIndices) == 0x358, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _CullingSplitMask) == 0x35c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables) == 0x360, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
