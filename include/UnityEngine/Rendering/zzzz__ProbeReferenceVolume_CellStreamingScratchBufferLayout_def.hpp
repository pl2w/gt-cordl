#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeReferenceVolume_CellStreamingScratchBufferLayout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeReferenceVolume_CellStreamingScratchBufferLayout)
// Forward declare root types
namespace GlobalNamespace {
struct ProbeReferenceVolume_CellStreamingScratchBufferLayout;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, "UnityEngine.Rendering", "ProbeReferenceVolume/CellStreamingScratchBufferLayout");
// [GenerateHLSL((UnityEngine.Rendering.PackingRules)0, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@04755ad51d99\\Runtime\\Lighting\\ProbeVolume\\ProbeReferenceVolume.Streaming.cs", needAccessors = false, generateCBuffer = true)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/CellStreamingScratchBufferLayout
struct CORDL_TYPE ProbeReferenceVolume_CellStreamingScratchBufferLayout {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ProbeReferenceVolume_CellStreamingScratchBufferLayout() ;

// Ctor Parameters [CppParam { name: "_SharedDestChunksOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_L0L1rxOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_L1GryOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_L1BrzOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ValidityOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ProbeOcclusionOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SkyOcclusionOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SkyShadingDirectionOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_L2_0Offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_L2_1Offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_L2_2Offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_L2_3Offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_L0Size", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_L0ProbeSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_L1Size", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_L1ProbeSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ValiditySize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ValidityProbeSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ProbeOcclusionSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ProbeOcclusionProbeSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SkyOcclusionSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SkyOcclusionProbeSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SkyShadingDirectionSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SkyShadingDirectionProbeSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_L2Size", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_L2ProbeSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ProbeCountInChunkLine", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ProbeCountInChunkSlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProbeReferenceVolume_CellStreamingScratchBufferLayout(int32_t  _SharedDestChunksOffset, int32_t  _L0L1rxOffset, int32_t  _L1GryOffset, int32_t  _L1BrzOffset, int32_t  _ValidityOffset, int32_t  _ProbeOcclusionOffset, int32_t  _SkyOcclusionOffset, int32_t  _SkyShadingDirectionOffset, int32_t  _L2_0Offset, int32_t  _L2_1Offset, int32_t  _L2_2Offset, int32_t  _L2_3Offset, int32_t  _L0Size, int32_t  _L0ProbeSize, int32_t  _L1Size, int32_t  _L1ProbeSize, int32_t  _ValiditySize, int32_t  _ValidityProbeSize, int32_t  _ProbeOcclusionSize, int32_t  _ProbeOcclusionProbeSize, int32_t  _SkyOcclusionSize, int32_t  _SkyOcclusionProbeSize, int32_t  _SkyShadingDirectionSize, int32_t  _SkyShadingDirectionProbeSize, int32_t  _L2Size, int32_t  _L2ProbeSize, int32_t  _ProbeCountInChunkLine, int32_t  _ProbeCountInChunkSlice) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16825};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field _SharedDestChunksOffset, offset: 0x0, size: 0x4, def value: None
 int32_t  _SharedDestChunksOffset;

/// @brief Field _L0L1rxOffset, offset: 0x4, size: 0x4, def value: None
 int32_t  _L0L1rxOffset;

/// @brief Field _L1GryOffset, offset: 0x8, size: 0x4, def value: None
 int32_t  _L1GryOffset;

/// @brief Field _L1BrzOffset, offset: 0xc, size: 0x4, def value: None
 int32_t  _L1BrzOffset;

/// @brief Field _ValidityOffset, offset: 0x10, size: 0x4, def value: None
 int32_t  _ValidityOffset;

/// @brief Field _ProbeOcclusionOffset, offset: 0x14, size: 0x4, def value: None
 int32_t  _ProbeOcclusionOffset;

/// @brief Field _SkyOcclusionOffset, offset: 0x18, size: 0x4, def value: None
 int32_t  _SkyOcclusionOffset;

/// @brief Field _SkyShadingDirectionOffset, offset: 0x1c, size: 0x4, def value: None
 int32_t  _SkyShadingDirectionOffset;

/// @brief Field _L2_0Offset, offset: 0x20, size: 0x4, def value: None
 int32_t  _L2_0Offset;

/// @brief Field _L2_1Offset, offset: 0x24, size: 0x4, def value: None
 int32_t  _L2_1Offset;

/// @brief Field _L2_2Offset, offset: 0x28, size: 0x4, def value: None
 int32_t  _L2_2Offset;

/// @brief Field _L2_3Offset, offset: 0x2c, size: 0x4, def value: None
 int32_t  _L2_3Offset;

/// @brief Field _L0Size, offset: 0x30, size: 0x4, def value: None
 int32_t  _L0Size;

/// @brief Field _L0ProbeSize, offset: 0x34, size: 0x4, def value: None
 int32_t  _L0ProbeSize;

/// @brief Field _L1Size, offset: 0x38, size: 0x4, def value: None
 int32_t  _L1Size;

/// @brief Field _L1ProbeSize, offset: 0x3c, size: 0x4, def value: None
 int32_t  _L1ProbeSize;

/// @brief Field _ValiditySize, offset: 0x40, size: 0x4, def value: None
 int32_t  _ValiditySize;

/// @brief Field _ValidityProbeSize, offset: 0x44, size: 0x4, def value: None
 int32_t  _ValidityProbeSize;

/// @brief Field _ProbeOcclusionSize, offset: 0x48, size: 0x4, def value: None
 int32_t  _ProbeOcclusionSize;

/// @brief Field _ProbeOcclusionProbeSize, offset: 0x4c, size: 0x4, def value: None
 int32_t  _ProbeOcclusionProbeSize;

/// @brief Field _SkyOcclusionSize, offset: 0x50, size: 0x4, def value: None
 int32_t  _SkyOcclusionSize;

/// @brief Field _SkyOcclusionProbeSize, offset: 0x54, size: 0x4, def value: None
 int32_t  _SkyOcclusionProbeSize;

/// @brief Field _SkyShadingDirectionSize, offset: 0x58, size: 0x4, def value: None
 int32_t  _SkyShadingDirectionSize;

/// @brief Field _SkyShadingDirectionProbeSize, offset: 0x5c, size: 0x4, def value: None
 int32_t  _SkyShadingDirectionProbeSize;

/// @brief Field _L2Size, offset: 0x60, size: 0x4, def value: None
 int32_t  _L2Size;

/// @brief Field _L2ProbeSize, offset: 0x64, size: 0x4, def value: None
 int32_t  _L2ProbeSize;

/// @brief Field _ProbeCountInChunkLine, offset: 0x68, size: 0x4, def value: None
 int32_t  _ProbeCountInChunkLine;

/// @brief Field _ProbeCountInChunkSlice, offset: 0x6c, size: 0x4, def value: None
 int32_t  _ProbeCountInChunkSlice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _SharedDestChunksOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L0L1rxOffset) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L1GryOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L1BrzOffset) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _ValidityOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _ProbeOcclusionOffset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _SkyOcclusionOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _SkyShadingDirectionOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L2_0Offset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L2_1Offset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L2_2Offset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L2_3Offset) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L0Size) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L0ProbeSize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L1Size) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L1ProbeSize) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _ValiditySize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _ValidityProbeSize) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _ProbeOcclusionSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _ProbeOcclusionProbeSize) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _SkyOcclusionSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _SkyOcclusionProbeSize) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _SkyShadingDirectionSize) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _SkyShadingDirectionProbeSize) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L2Size) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L2ProbeSize) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _ProbeCountInChunkLine) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _ProbeCountInChunkSlice) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
