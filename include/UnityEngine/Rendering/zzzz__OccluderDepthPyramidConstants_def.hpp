#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OccluderDepthPyramidConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OccluderDepthPyramidConstants)
namespace GlobalNamespace {
struct OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer;
}
namespace GlobalNamespace {
struct OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer;
}
namespace GlobalNamespace {
struct OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer;
}
namespace GlobalNamespace {
struct OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct OccluderDepthPyramidConstants;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::OccluderDepthPyramidConstants);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::OccluderDepthPyramidConstants, "UnityEngine.Rendering", "OccluderDepthPyramidConstants");
// [GenerateHLSL((UnityEngine.Rendering.PackingRules)0, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@04755ad51d99\\Runtime\\GPUDriven\\OccluderDepthPyramidConstants.cs", needAccessors = false, generateCBuffer = true)]
// Dependencies UnityEngine.Rendering.OccluderDepthPyramidConstants::<_InvViewProjMatrix>e__FixedBuffer, UnityEngine.Rendering.OccluderDepthPyramidConstants::<_MipOffsetAndSize>e__FixedBuffer, UnityEngine.Rendering.OccluderDepthPyramidConstants::<_SilhouettePlanes>e__FixedBuffer, UnityEngine.Rendering.OccluderDepthPyramidConstants::<_SrcOffset>e__FixedBuffer
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OccluderDepthPyramidConstants
struct CORDL_TYPE OccluderDepthPyramidConstants {
public:
// Declarations
using __InvViewProjMatrix_e__FixedBuffer = ::GlobalNamespace::OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer;

using __MipOffsetAndSize_e__FixedBuffer = ::GlobalNamespace::OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer;

using __SilhouettePlanes_e__FixedBuffer = ::GlobalNamespace::OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer;

using __SrcOffset_e__FixedBuffer = ::GlobalNamespace::OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr OccluderDepthPyramidConstants() ;

// Ctor Parameters [CppParam { name: "_InvViewProjMatrix", ty: "::GlobalNamespace::OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SilhouettePlanes", ty: "::GlobalNamespace::OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SrcOffset", ty: "::GlobalNamespace::OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MipOffsetAndSize", ty: "::GlobalNamespace::OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_OccluderMipLayoutSizeX", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_OccluderMipLayoutSizeY", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_OccluderDepthPyramidPad0", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_OccluderDepthPyramidPad1", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SrcSliceIndices", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DstSubviewIndices", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MipCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SilhouettePlaneCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr OccluderDepthPyramidConstants(::GlobalNamespace::OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer  _InvViewProjMatrix, ::GlobalNamespace::OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer  _SilhouettePlanes, ::GlobalNamespace::OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer  _SrcOffset, ::GlobalNamespace::OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer  _MipOffsetAndSize, uint32_t  _OccluderMipLayoutSizeX, uint32_t  _OccluderMipLayoutSizeY, uint32_t  _OccluderDepthPyramidPad0, uint32_t  _OccluderDepthPyramidPad1, uint32_t  _SrcSliceIndices, uint32_t  _DstSubviewIndices, uint32_t  _MipCount, uint32_t  _SilhouettePlaneCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26699};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2b0};

/// [FixedBuffer(typeof(System.Single), 96)]
/// [HLSLArray(6, typeof(UnityEngine.Matrix4x4))]
/// @brief Field _InvViewProjMatrix, offset: 0x0, size: 0x180, def value: None
 ::GlobalNamespace::OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer  _InvViewProjMatrix;

/// [FixedBuffer(typeof(System.Single), 24)]
/// [HLSLArray(6, typeof(UnityEngine.Vector4))]
/// @brief Field _SilhouettePlanes, offset: 0x180, size: 0x60, def value: None
 ::GlobalNamespace::OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer  _SilhouettePlanes;

/// [FixedBuffer(typeof(System.UInt32), 24)]
/// [HLSLArray(6, typeof(UnityEngine.Rendering.ShaderGenUInt4))]
/// @brief Field _SrcOffset, offset: 0x1e0, size: 0x60, def value: None
 ::GlobalNamespace::OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer  _SrcOffset;

/// [FixedBuffer(typeof(System.UInt32), 20)]
/// [HLSLArray(5, typeof(UnityEngine.Rendering.ShaderGenUInt4))]
/// @brief Field _MipOffsetAndSize, offset: 0x240, size: 0x50, def value: None
 ::GlobalNamespace::OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer  _MipOffsetAndSize;

/// @brief Field _OccluderMipLayoutSizeX, offset: 0x290, size: 0x4, def value: None
 uint32_t  _OccluderMipLayoutSizeX;

/// @brief Field _OccluderMipLayoutSizeY, offset: 0x294, size: 0x4, def value: None
 uint32_t  _OccluderMipLayoutSizeY;

/// @brief Field _OccluderDepthPyramidPad0, offset: 0x298, size: 0x4, def value: None
 uint32_t  _OccluderDepthPyramidPad0;

/// @brief Field _OccluderDepthPyramidPad1, offset: 0x29c, size: 0x4, def value: None
 uint32_t  _OccluderDepthPyramidPad1;

/// @brief Field _SrcSliceIndices, offset: 0x2a0, size: 0x4, def value: None
 uint32_t  _SrcSliceIndices;

/// @brief Field _DstSubviewIndices, offset: 0x2a4, size: 0x4, def value: None
 uint32_t  _DstSubviewIndices;

/// @brief Field _MipCount, offset: 0x2a8, size: 0x4, def value: None
 uint32_t  _MipCount;

/// @brief Field _SilhouettePlaneCount, offset: 0x2ac, size: 0x4, def value: None
 uint32_t  _SilhouettePlaneCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _InvViewProjMatrix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _SilhouettePlanes) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _SrcOffset) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _MipOffsetAndSize) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _OccluderMipLayoutSizeX) == 0x290, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _OccluderMipLayoutSizeY) == 0x294, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _OccluderDepthPyramidPad0) == 0x298, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _OccluderDepthPyramidPad1) == 0x29c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _SrcSliceIndices) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _DstSubviewIndices) == 0x2a4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _MipCount) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _SilhouettePlaneCount) == 0x2ac, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::OccluderDepthPyramidConstants) == 0x2b0, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
