#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OccluderDepthPyramidConstants.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderDepthPyramidConstants_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "_InvViewProjMatrix", ty: "::GlobalNamespace::OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SilhouettePlanes", ty: "::GlobalNamespace::OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SrcOffset", ty: "::GlobalNamespace::OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_MipOffsetAndSize", ty: "::GlobalNamespace::OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_OccluderMipLayoutSizeX", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_OccluderMipLayoutSizeY", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_OccluderDepthPyramidPad0", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_OccluderDepthPyramidPad1", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SrcSliceIndices", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DstSubviewIndices", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_MipCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SilhouettePlaneCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::OccluderDepthPyramidConstants::OccluderDepthPyramidConstants(::GlobalNamespace::OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer  _InvViewProjMatrix, ::GlobalNamespace::OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer  _SilhouettePlanes, ::GlobalNamespace::OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer  _SrcOffset, ::GlobalNamespace::OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer  _MipOffsetAndSize, uint32_t  _OccluderMipLayoutSizeX, uint32_t  _OccluderMipLayoutSizeY, uint32_t  _OccluderDepthPyramidPad0, uint32_t  _OccluderDepthPyramidPad1, uint32_t  _SrcSliceIndices, uint32_t  _DstSubviewIndices, uint32_t  _MipCount, uint32_t  _SilhouettePlaneCount) noexcept  {
this->_InvViewProjMatrix = _InvViewProjMatrix;
this->_SilhouettePlanes = _SilhouettePlanes;
this->_SrcOffset = _SrcOffset;
this->_MipOffsetAndSize = _MipOffsetAndSize;
this->_OccluderMipLayoutSizeX = _OccluderMipLayoutSizeX;
this->_OccluderMipLayoutSizeY = _OccluderMipLayoutSizeY;
this->_OccluderDepthPyramidPad0 = _OccluderDepthPyramidPad0;
this->_OccluderDepthPyramidPad1 = _OccluderDepthPyramidPad1;
this->_SrcSliceIndices = _SrcSliceIndices;
this->_DstSubviewIndices = _DstSubviewIndices;
this->_MipCount = _MipCount;
this->_SilhouettePlaneCount = _SilhouettePlaneCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OccluderDepthPyramidConstants::OccluderDepthPyramidConstants()   {
}
