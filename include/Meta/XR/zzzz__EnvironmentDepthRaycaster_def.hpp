#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentDepthRaycaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/EnvironmentDepth/zzzz__DepthFrameDesc_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentDepthRaycaster)
namespace GlobalNamespace {
struct EnvironmentDepthRaycaster___c__DisplayClass36_0;
}
namespace GlobalNamespace {
struct EnvironmentDepthRaycaster___c__DisplayClass39_0;
}
namespace Meta::XR::EnvironmentDepth {
class EnvironmentDepthManager;
}
namespace Meta::XR {
struct DepthRaycastResult;
}
namespace Meta::XR {
struct Eye;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR {
class EnvironmentDepthRaycaster;
}
// Write type traits
MARK_REF_T(::Meta::XR::EnvironmentDepthRaycaster*);
DEFINE_IL2CPP_CLASS(::Meta::XR::EnvironmentDepthRaycaster*, "Meta.XR", "EnvironmentDepthRaycaster");
// [AddComponentMenu("")]
// [DefaultExecutionOrder(-48)]
// Dependencies Meta.XR.EnvironmentDepth.DepthFrameDesc, System.Nullable`1<T>, Unity.Collections.NativeArray`1<T>, UnityEngine.Matrix4x4, UnityEngine.MonoBehaviour, UnityEngine.Plane, UnityEngine.Rendering.AsyncGPUReadbackRequest, UnityEngine.Vector4
namespace Meta::XR {
// Is value type: false
// CS Name: Meta.XR.EnvironmentDepthRaycaster
class CORDL_TYPE EnvironmentDepthRaycaster : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass36_0 = ::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass36_0;

using __c__DisplayClass39_0 = ::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass39_0;

/// @brief Field CopiedDepthTextureId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_CopiedDepthTextureId, put=setStaticF_CopiedDepthTextureId)) int32_t  CopiedDepthTextureId;

/// @brief Field EnvironmentDepthTextureId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_EnvironmentDepthTextureId, put=setStaticF_EnvironmentDepthTextureId)) int32_t  EnvironmentDepthTextureId;

/// @brief Field EnvironmentDepthTextureSizeId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_EnvironmentDepthTextureSizeId, put=setStaticF_EnvironmentDepthTextureSizeId)) int32_t  EnvironmentDepthTextureSizeId;

/// @brief Field EnvironmentDepthZBufferParamsId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_EnvironmentDepthZBufferParamsId, put=setStaticF_EnvironmentDepthZBufferParamsId)) int32_t  EnvironmentDepthZBufferParamsId;

/// @brief Field _EnvironmentDepthZBufferParams, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get__EnvironmentDepthZBufferParams, put=__cordl_internal_set__EnvironmentDepthZBufferParams)) ::UnityEngine::Vector4  _EnvironmentDepthZBufferParams;

/// @brief Field _camFrustumPlanes, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__camFrustumPlanes, put=__cordl_internal_set__camFrustumPlanes)) ::ArrayW<::ArrayW<::UnityEngine::Plane>>  _camFrustumPlanes;

/// @brief Field _computeBuffer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__computeBuffer, put=__cordl_internal_set__computeBuffer)) ::UnityEngine::ComputeBuffer*  _computeBuffer;

/// @brief Field _currentEyeIndex, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentEyeIndex, put=__cordl_internal_set__currentEyeIndex)) int32_t  _currentEyeIndex;

/// @brief Field _currentGpuReadbackRequest, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__currentGpuReadbackRequest, put=__cordl_internal_set__currentGpuReadbackRequest)) ::System::Nullable_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  _currentGpuReadbackRequest;

/// @brief Field _depthFrameDesc, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__depthFrameDesc, put=__cordl_internal_set__depthFrameDesc)) ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc>  _depthFrameDesc;

/// @brief Field _depthTexturePixels, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__depthTexturePixels, put=__cordl_internal_set__depthTexturePixels)) ::Unity::Collections::NativeArray_1<float_t>  _depthTexturePixels;

/// @brief Field _gpuRequestBuffer, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__gpuRequestBuffer, put=__cordl_internal_set__gpuRequestBuffer)) ::Unity::Collections::NativeArray_1<float_t>  _gpuRequestBuffer;

/// @brief Field _isDepthTextureAvailable, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDepthTextureAvailable, put=__cordl_internal_set__isDepthTextureAvailable)) bool  _isDepthTextureAvailable;

/// @brief Field _matrixV, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__matrixV, put=__cordl_internal_set__matrixV)) ::ArrayW<::UnityEngine::Matrix4x4>  _matrixV;

/// @brief Field _matrixVP, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__matrixVP, put=__cordl_internal_set__matrixVP)) ::ArrayW<::UnityEngine::Matrix4x4>  _matrixVP;

/// @brief Field _matrixVP_inv, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__matrixVP_inv, put=__cordl_internal_set__matrixVP_inv)) ::ArrayW<::UnityEngine::Matrix4x4>  _matrixVP_inv;

/// @brief Field _shader, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__shader, put=__cordl_internal_set__shader)) ::UnityW<::UnityEngine::ComputeShader>  _shader;

/// @brief Field _updatedDepthTexture, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__updatedDepthTexture, put=__cordl_internal_set__updatedDepthTexture)) ::UnityW<::UnityEngine::RenderTexture>  _updatedDepthTexture;

/// @brief Field _warmUpRaycast, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get__warmUpRaycast, put=__cordl_internal_set__warmUpRaycast)) bool  _warmUpRaycast;

/// @brief Field _worldToTrackingSpaceMatrix, offset 0xb0, size 0x40 
 __declspec(property(get=__cordl_internal_get__worldToTrackingSpaceMatrix, put=__cordl_internal_set__worldToTrackingSpaceMatrix)) ::UnityEngine::Matrix4x4  _worldToTrackingSpaceMatrix;

/// @brief Field _xrDisplay, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__xrDisplay, put=__cordl_internal_set__xrDisplay)) Il2CppObject*  _xrDisplay;

/// @brief Field depthManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_depthManager, put=__cordl_internal_set_depthManager)) ::UnityW<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager>  depthManager;

/// @brief Method Awake, addr 0x9f007e8, size 0x1ec, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClampRayOriginToCamFrustumPlanes, addr 0x9f022c0, size 0x29c, virtual false, abstract: false, final false
static inline bool ClampRayOriginToCamFrustumPlanes(::by_ref<::UnityEngine::Ray>  ray, ::ArrayW<::UnityEngine::Plane>  planes, ::by_ref<float_t>  maxDistance) ;

/// @brief Method ClosestPointOnFirstRay, addr 0x9f01c84, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClosestPointOnFirstRay(::UnityEngine::Vector3  ray1Pos, ::UnityEngine::Vector3  ray1Dir, ::UnityEngine::Vector3  ray2Pos, ::UnityEngine::Vector3  ray2Dir) ;

/// @brief Method CreateTextureCopyRequestIfNeeded, addr 0x9f00a00, size 0x2f4, virtual false, abstract: false, final false
inline void CreateTextureCopyRequestIfNeeded() ;

/// @brief Method InvalidateDepthTexture, addr 0x9f009dc, size 0x8, virtual false, abstract: false, final false
inline void InvalidateDepthTexture() ;

/// @brief Method IsInBounds, addr 0x9f01d34, size 0x14, virtual false, abstract: false, final false
static inline bool IsInBounds(::UnityEngine::Vector2Int  texCoord) ;

static inline ::Meta::XR::EnvironmentDepthRaycaster* New_ctor() ;

/// @brief Method OnDepthTextureUpdate, addr 0x9f009e4, size 0x1c, virtual false, abstract: false, final false
inline void OnDepthTextureUpdate(::UnityEngine::RenderTexture*  updatedDepthTexture) ;

/// @brief Method OnDestroy, addr 0x9f00cf4, size 0x144, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9f009d4, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method Raycast, addr 0x9efef10, size 0xe8, virtual false, abstract: false, final false
inline ::Meta::XR::DepthRaycastResult Raycast(::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  normal, ::by_ref<float_t>  normalConfidence, float_t  maxDistance, ::Meta::XR::Eye  eye, bool  allowOccludedRayOrigin) ;

/// @brief Method Raycast, addr 0x9efeff8, size 0x288, virtual false, abstract: false, final false
inline ::System::ValueTuple_3<::Meta::XR::DepthRaycastResult,::UnityEngine::Vector3,int32_t> Raycast(::UnityEngine::Ray  ray, float_t  maxDistance, ::Meta::XR::Eye  eye, bool  allowOccludedRayOrigin) ;

/// @brief Method RaycastInternal, addr 0x9f01d48, size 0x578, virtual false, abstract: false, final false
inline ::Meta::XR::DepthRaycastResult RaycastInternal(::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::Vector3>  position, float_t  maxDistance, int32_t  eyeIndex, bool  allowOccludedRayOrigin) ;

/// @brief Method ReconstructNormal, addr 0x9f01474, size 0x198, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ReconstructNormal(::UnityEngine::Vector2Int  texCoord) ;

/// @brief Method ReconstructNormalAtWorldPos, addr 0x9f01728, size 0x2f4, virtual false, abstract: false, final false
inline bool ReconstructNormalAtWorldPos(::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector3>  normal, ::by_ref<float_t>  normalConfidence) ;

/// @brief Method SampleDepthTexture, addr 0x9f01344, size 0x20, virtual false, abstract: false, final false
inline float_t SampleDepthTexture(::UnityEngine::Vector2Int  texCoord) ;

/// @brief Method Update, addr 0x9f0119c, size 0x98, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateTextureCopyRequest, addr 0x9f00e38, size 0x364, virtual false, abstract: false, final false
inline void UpdateTextureCopyRequest() ;

/// @brief Method WorldPosAtDepthTexCoord, addr 0x9f01364, size 0xb4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WorldPosAtDepthTexCoord(::UnityEngine::Vector2Int  texCoord) ;

/// @brief Method WorldPosToLinearDepth, addr 0x9f01418, size 0x5c, virtual false, abstract: false, final false
inline float_t WorldPosToLinearDepth(::UnityEngine::Vector3  worldPos) ;

/// @brief Method WorldPosToNonNormalizedTextureCoords, addr 0x9f01234, size 0x110, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2Int WorldPosToNonNormalizedTextureCoords(::UnityEngine::Vector3  worldPos) ;

/// [CompilerGenerated]
/// @brief Method <Raycast>g__GetRaycastResultForEye|39_0, addr 0x9f01a1c, size 0x268, virtual false, abstract: false, final false
inline ::System::ValueTuple_3<::Meta::XR::DepthRaycastResult,::UnityEngine::Vector3,int32_t> _Raycast_g__GetRaycastResultForEye_39_0(int32_t  index, ::by_ref<::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass39_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <ReconstructNormal>g__ClosestDerivativeToAdjacentExtrapolations|36_0, addr 0x9f0160c, size 0x11c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _ReconstructNormal_g__ClosestDerivativeToAdjacentExtrapolations_36_0(::UnityEngine::Vector2Int  axis, ::by_ref<::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass36_0>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get__EnvironmentDepthZBufferParams() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get__EnvironmentDepthZBufferParams() ;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Plane>> const& __cordl_internal_get__camFrustumPlanes() const;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Plane>>& __cordl_internal_get__camFrustumPlanes() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get__computeBuffer() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get__computeBuffer() ;

constexpr int32_t const& __cordl_internal_get__currentEyeIndex() const;

constexpr int32_t& __cordl_internal_get__currentEyeIndex() ;

constexpr ::System::Nullable_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> const& __cordl_internal_get__currentGpuReadbackRequest() const;

constexpr ::System::Nullable_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>& __cordl_internal_get__currentGpuReadbackRequest() ;

constexpr ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc> const& __cordl_internal_get__depthFrameDesc() const;

constexpr ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc>& __cordl_internal_get__depthFrameDesc() ;

constexpr ::Unity::Collections::NativeArray_1<float_t> const& __cordl_internal_get__depthTexturePixels() const;

constexpr ::Unity::Collections::NativeArray_1<float_t>& __cordl_internal_get__depthTexturePixels() ;

constexpr ::Unity::Collections::NativeArray_1<float_t> const& __cordl_internal_get__gpuRequestBuffer() const;

constexpr ::Unity::Collections::NativeArray_1<float_t>& __cordl_internal_get__gpuRequestBuffer() ;

constexpr bool const& __cordl_internal_get__isDepthTextureAvailable() const;

constexpr bool& __cordl_internal_get__isDepthTextureAvailable() ;

constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& __cordl_internal_get__matrixV() const;

constexpr ::ArrayW<::UnityEngine::Matrix4x4>& __cordl_internal_get__matrixV() ;

constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& __cordl_internal_get__matrixVP() const;

constexpr ::ArrayW<::UnityEngine::Matrix4x4>& __cordl_internal_get__matrixVP() ;

constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& __cordl_internal_get__matrixVP_inv() const;

constexpr ::ArrayW<::UnityEngine::Matrix4x4>& __cordl_internal_get__matrixVP_inv() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__shader() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__shader() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__updatedDepthTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__updatedDepthTexture() ;

constexpr bool const& __cordl_internal_get__warmUpRaycast() const;

constexpr bool& __cordl_internal_get__warmUpRaycast() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get__worldToTrackingSpaceMatrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get__worldToTrackingSpaceMatrix() ;

constexpr Il2CppObject* const& __cordl_internal_get__xrDisplay() const;

constexpr Il2CppObject*& __cordl_internal_get__xrDisplay() ;

constexpr ::UnityW<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager> const& __cordl_internal_get_depthManager() const;

constexpr ::UnityW<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager>& __cordl_internal_get_depthManager() ;

constexpr void __cordl_internal_set__EnvironmentDepthZBufferParams(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set__camFrustumPlanes(::ArrayW<::ArrayW<::UnityEngine::Plane>>  value) ;

constexpr void __cordl_internal_set__computeBuffer(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set__currentEyeIndex(int32_t  value) ;

constexpr void __cordl_internal_set__currentGpuReadbackRequest(::System::Nullable_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  value) ;

constexpr void __cordl_internal_set__depthFrameDesc(::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc>  value) ;

constexpr void __cordl_internal_set__depthTexturePixels(::Unity::Collections::NativeArray_1<float_t>  value) ;

constexpr void __cordl_internal_set__gpuRequestBuffer(::Unity::Collections::NativeArray_1<float_t>  value) ;

constexpr void __cordl_internal_set__isDepthTextureAvailable(bool  value) ;

constexpr void __cordl_internal_set__matrixV(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

constexpr void __cordl_internal_set__matrixVP(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

constexpr void __cordl_internal_set__matrixVP_inv(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

constexpr void __cordl_internal_set__shader(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__updatedDepthTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__warmUpRaycast(bool  value) ;

constexpr void __cordl_internal_set__worldToTrackingSpaceMatrix(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set__xrDisplay(Il2CppObject*  value) ;

constexpr void __cordl_internal_set_depthManager(::UnityW<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager>  value) ;

/// @brief Method .ctor, addr 0x9f0255c, size 0x1c4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_CopiedDepthTextureId() ;

static inline int32_t getStaticF_EnvironmentDepthTextureId() ;

static inline int32_t getStaticF_EnvironmentDepthTextureSizeId() ;

static inline int32_t getStaticF_EnvironmentDepthZBufferParamsId() ;

static inline void setStaticF_CopiedDepthTextureId(int32_t  value) ;

static inline void setStaticF_EnvironmentDepthTextureId(int32_t  value) ;

static inline void setStaticF_EnvironmentDepthTextureSizeId(int32_t  value) ;

static inline void setStaticF_EnvironmentDepthZBufferParamsId(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentDepthRaycaster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentDepthRaycaster", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentDepthRaycaster(EnvironmentDepthRaycaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentDepthRaycaster", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentDepthRaycaster(EnvironmentDepthRaycaster const& ) = delete;

/// @brief Field NumEyes offset 0xffffffff size 0x4
static constexpr int32_t  NumEyes{static_cast<int32_t>(0x2)};

/// @brief Field TextureSize offset 0xffffffff size 0x4
static constexpr int32_t  TextureSize{static_cast<int32_t>(0x80)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25752};

/// @brief Field _shader, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____shader;

/// @brief Field depthManager, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager>  ___depthManager;

/// @brief Field _computeBuffer, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ____computeBuffer;

/// @brief Field _depthTexturePixels, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<float_t>  ____depthTexturePixels;

/// @brief Field _gpuRequestBuffer, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<float_t>  ____gpuRequestBuffer;

/// @brief Field _isDepthTextureAvailable, offset: 0x58, size: 0x1, def value: None
 bool  ____isDepthTextureAvailable;

/// @brief Field _currentGpuReadbackRequest, offset: 0x60, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  ____currentGpuReadbackRequest;

/// @brief Field _updatedDepthTexture, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____updatedDepthTexture;

/// @brief Field _matrixVP, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Matrix4x4>  ____matrixVP;

/// @brief Field _matrixV, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Matrix4x4>  ____matrixV;

/// @brief Field _matrixVP_inv, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Matrix4x4>  ____matrixVP_inv;

/// @brief Field _camFrustumPlanes, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::UnityEngine::Plane>>  ____camFrustumPlanes;

/// @brief Field _EnvironmentDepthZBufferParams, offset: 0x98, size: 0x10, def value: None
 ::UnityEngine::Vector4  ____EnvironmentDepthZBufferParams;

/// @brief Field _depthFrameDesc, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc>  ____depthFrameDesc;

/// @brief Field _worldToTrackingSpaceMatrix, offset: 0xb0, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ____worldToTrackingSpaceMatrix;

/// @brief Field _warmUpRaycast, offset: 0xf0, size: 0x1, def value: None
 bool  ____warmUpRaycast;

/// @brief Field _currentEyeIndex, offset: 0xf4, size: 0x4, def value: None
 int32_t  ____currentEyeIndex;

/// @brief Field _xrDisplay, offset: 0xf8, size: 0x8, def value: None
 Il2CppObject*  ____xrDisplay;

/// @brief Size padding 0x108 - 0x100 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::EnvironmentDepthRaycaster, ____shader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepthRaycaster, ___depthManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepthRaycaster, ____computeBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepthRaycaster, ____depthTexturePixels) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepthRaycaster, ____gpuRequestBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepthRaycaster, ____isDepthTextureAvailable) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepthRaycaster, ____currentGpuReadbackRequest) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepthRaycaster, ____updatedDepthTexture) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepthRaycaster, ____matrixVP) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepthRaycaster, ____matrixV) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepthRaycaster, ____matrixVP_inv) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepthRaycaster, ____camFrustumPlanes) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepthRaycaster, ____EnvironmentDepthZBufferParams) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepthRaycaster, ____depthFrameDesc) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepthRaycaster, ____worldToTrackingSpaceMatrix) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepthRaycaster, ____warmUpRaycast) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepthRaycaster, ____currentEyeIndex) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepthRaycaster, ____xrDisplay) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::EnvironmentDepthRaycaster) == 0x108, "Size mismatch!");

} // namespace end def Meta::XR
