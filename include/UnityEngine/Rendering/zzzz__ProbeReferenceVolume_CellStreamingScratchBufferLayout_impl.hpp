#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeReferenceVolume_CellStreamingScratchBufferLayout.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeReferenceVolume_CellStreamingScratchBufferLayout_def.hpp"
// Ctor Parameters [CppParam { name: "_SharedDestChunksOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_L0L1rxOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_L1GryOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_L1BrzOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ValidityOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ProbeOcclusionOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SkyOcclusionOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SkyShadingDirectionOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_L2_0Offset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_L2_1Offset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_L2_2Offset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_L2_3Offset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_L0Size", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_L0ProbeSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_L1Size", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_L1ProbeSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ValiditySize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ValidityProbeSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ProbeOcclusionSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ProbeOcclusionProbeSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SkyOcclusionSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SkyOcclusionProbeSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SkyShadingDirectionSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SkyShadingDirectionProbeSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_L2Size", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_L2ProbeSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ProbeCountInChunkLine", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ProbeCountInChunkSlice", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout::ProbeReferenceVolume_CellStreamingScratchBufferLayout(int32_t  _SharedDestChunksOffset, int32_t  _L0L1rxOffset, int32_t  _L1GryOffset, int32_t  _L1BrzOffset, int32_t  _ValidityOffset, int32_t  _ProbeOcclusionOffset, int32_t  _SkyOcclusionOffset, int32_t  _SkyShadingDirectionOffset, int32_t  _L2_0Offset, int32_t  _L2_1Offset, int32_t  _L2_2Offset, int32_t  _L2_3Offset, int32_t  _L0Size, int32_t  _L0ProbeSize, int32_t  _L1Size, int32_t  _L1ProbeSize, int32_t  _ValiditySize, int32_t  _ValidityProbeSize, int32_t  _ProbeOcclusionSize, int32_t  _ProbeOcclusionProbeSize, int32_t  _SkyOcclusionSize, int32_t  _SkyOcclusionProbeSize, int32_t  _SkyShadingDirectionSize, int32_t  _SkyShadingDirectionProbeSize, int32_t  _L2Size, int32_t  _L2ProbeSize, int32_t  _ProbeCountInChunkLine, int32_t  _ProbeCountInChunkSlice) noexcept  {
this->_SharedDestChunksOffset = _SharedDestChunksOffset;
this->_L0L1rxOffset = _L0L1rxOffset;
this->_L1GryOffset = _L1GryOffset;
this->_L1BrzOffset = _L1BrzOffset;
this->_ValidityOffset = _ValidityOffset;
this->_ProbeOcclusionOffset = _ProbeOcclusionOffset;
this->_SkyOcclusionOffset = _SkyOcclusionOffset;
this->_SkyShadingDirectionOffset = _SkyShadingDirectionOffset;
this->_L2_0Offset = _L2_0Offset;
this->_L2_1Offset = _L2_1Offset;
this->_L2_2Offset = _L2_2Offset;
this->_L2_3Offset = _L2_3Offset;
this->_L0Size = _L0Size;
this->_L0ProbeSize = _L0ProbeSize;
this->_L1Size = _L1Size;
this->_L1ProbeSize = _L1ProbeSize;
this->_ValiditySize = _ValiditySize;
this->_ValidityProbeSize = _ValidityProbeSize;
this->_ProbeOcclusionSize = _ProbeOcclusionSize;
this->_ProbeOcclusionProbeSize = _ProbeOcclusionProbeSize;
this->_SkyOcclusionSize = _SkyOcclusionSize;
this->_SkyOcclusionProbeSize = _SkyOcclusionProbeSize;
this->_SkyShadingDirectionSize = _SkyShadingDirectionSize;
this->_SkyShadingDirectionProbeSize = _SkyShadingDirectionProbeSize;
this->_L2Size = _L2Size;
this->_L2ProbeSize = _L2ProbeSize;
this->_ProbeCountInChunkLine = _ProbeCountInChunkLine;
this->_ProbeCountInChunkSlice = _ProbeCountInChunkSlice;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProbeReferenceVolume_CellStreamingScratchBufferLayout::ProbeReferenceVolume_CellStreamingScratchBufferLayout()   {
}
