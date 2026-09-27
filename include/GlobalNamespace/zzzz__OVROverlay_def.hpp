#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRManager_XRDevice_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_LayerTexture_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_OverlayShape_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_OverlayType_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_EyeTextureFormat_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_LayerDesc_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_TextureRectMatrixf_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVROverlay)
namespace GlobalNamespace {
class OVROverlay_ExternalSurfaceObjectCreated;
}
namespace GlobalNamespace {
struct OVROverlay_LayerTexture;
}
namespace GlobalNamespace {
struct OVROverlay_OverlayShape;
}
namespace GlobalNamespace {
struct OVROverlay_OverlayType;
}
namespace GlobalNamespace {
struct OVRPlugin_EyeTextureFormat;
}
namespace GlobalNamespace {
struct OVRPlugin_LayerDesc;
}
namespace GlobalNamespace {
struct OVRPlugin_LayerLayout;
}
namespace GlobalNamespace {
struct OVRPlugin_OverlayShape;
}
namespace GlobalNamespace {
struct OVRPlugin_Sizei;
}
namespace GlobalNamespace {
struct OVRPose;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class OVROverlay;
}
namespace GlobalNamespace {
class OVROverlay_ExternalSurfaceObjectCreated;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVROverlay*);
MARK_REF_T(::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVROverlay*, "", "OVROverlay");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated*, "", "OVROverlay/ExternalSurfaceObjectCreated");
// [ExecuteInEditMode]
// [HelpURL("https://developer.oculus.com/documentation/unity/unity-ovroverlay/")]
// Dependencies OVRManager::XRDevice, OVROverlay::LayerTexture, OVROverlay::OverlayShape, OVROverlay::OverlayType, OVRPlugin::EyeTextureFormat, OVRPlugin::LayerDesc, OVRPlugin::TextureRectMatrixf, System.IntPtr, System.Runtime.InteropServices.GCHandle, UnityEngine.Material, UnityEngine.MonoBehaviour, UnityEngine.Rect, UnityEngine.Texture, UnityEngine.Vector2, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVROverlay
class CORDL_TYPE OVROverlay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ExternalSurfaceObjectCreated = ::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated;

using LayerTexture = ::GlobalNamespace::OVROverlay_LayerTexture;

using OverlayShape = ::GlobalNamespace::OVROverlay_OverlayShape;

using OverlayType = ::GlobalNamespace::OVROverlay_OverlayType;

/// @brief Field OpenVRMouseScale, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get_OpenVRMouseScale, put=__cordl_internal_set_OpenVRMouseScale)) ::UnityEngine::Vector2  OpenVRMouseScale;

/// @brief Field OpenVROverlayHandle, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OpenVROverlayHandle, put=__cordl_internal_set_OpenVROverlayHandle)) uint64_t  OpenVROverlayHandle;

/// @brief Field OpenVRUVOffsetAndScale, offset 0x1f8, size 0x10 
 __declspec(property(get=__cordl_internal_get_OpenVRUVOffsetAndScale, put=__cordl_internal_set_OpenVRUVOffsetAndScale)) ::UnityEngine::Vector4  OpenVRUVOffsetAndScale;

/// @brief Field _blitMesh, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get__blitMesh, put=__cordl_internal_set__blitMesh)) ::UnityW<::UnityEngine::Mesh>  _blitMesh;

/// @brief Field _commandBuffer, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get__commandBuffer, put=__cordl_internal_set__commandBuffer)) ::UnityEngine::Rendering::CommandBuffer*  _commandBuffer;

/// @brief Field <isOverlayVisible>k__BackingField, offset 0x1e8, size 0x1 
 __declspec(property(get=__cordl_internal_get__isOverlayVisible_k__BackingField, put=__cordl_internal_set__isOverlayVisible_k__BackingField)) bool  _isOverlayVisible_k__BackingField;

/// @brief Field <layerId>k__BackingField, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get__layerId_k__BackingField, put=__cordl_internal_set__layerId_k__BackingField)) int32_t  _layerId_k__BackingField;

/// @brief Field <layerIndex>k__BackingField, offset 0x1b0, size 0x4 
 __declspec(property(get=__cordl_internal_get__layerIndex_k__BackingField, put=__cordl_internal_set__layerIndex_k__BackingField)) int32_t  _layerIndex_k__BackingField;

/// @brief Field _previewInEditor, offset 0x106, size 0x1 
 __declspec(property(get=__cordl_internal_get__previewInEditor, put=__cordl_internal_set__previewInEditor)) bool  _previewInEditor;

/// @brief Field _tempRenderTextureId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__tempRenderTextureId, put=setStaticF__tempRenderTextureId)) int32_t  _tempRenderTextureId;

/// @brief Field colorOffset, offset 0xc0, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorOffset, put=__cordl_internal_set_colorOffset)) ::UnityEngine::Vector4  colorOffset;

/// @brief Field colorScale, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorScale, put=__cordl_internal_set_colorScale)) ::UnityEngine::Vector4  colorScale;

/// @brief Field compositionDepth, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_compositionDepth, put=__cordl_internal_set_compositionDepth)) int32_t  compositionDepth;

/// @brief Field constructedOverlayXRDevice, offset 0x210, size 0x4 
 __declspec(property(get=__cordl_internal_get_constructedOverlayXRDevice, put=__cordl_internal_set_constructedOverlayXRDevice)) ::GlobalNamespace::OVRManager_XRDevice  constructedOverlayXRDevice;

/// @brief Field cubeMaterial, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cubeMaterial, put=setStaticF_cubeMaterial)) ::ArrayW<::UnityW<::UnityEngine::Material>>  cubeMaterial;

/// @brief Field currentOverlayShape, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentOverlayShape, put=__cordl_internal_set_currentOverlayShape)) ::GlobalNamespace::OVROverlay_OverlayShape  currentOverlayShape;

/// @brief Field currentOverlayType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentOverlayType, put=__cordl_internal_set_currentOverlayType)) ::GlobalNamespace::OVROverlay_OverlayType  currentOverlayType;

/// @brief Field destRectLeft, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_destRectLeft, put=__cordl_internal_set_destRectLeft)) ::UnityEngine::Rect  destRectLeft;

/// @brief Field destRectRight, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_destRectRight, put=__cordl_internal_set_destRectRight)) ::UnityEngine::Rect  destRectRight;

/// @brief Field externalSurfaceHeight, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_externalSurfaceHeight, put=__cordl_internal_set_externalSurfaceHeight)) int32_t  externalSurfaceHeight;

/// @brief Field externalSurfaceObject, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_externalSurfaceObject, put=__cordl_internal_set_externalSurfaceObject)) ::System::IntPtr  externalSurfaceObject;

/// @brief Field externalSurfaceObjectCreated, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_externalSurfaceObjectCreated, put=__cordl_internal_set_externalSurfaceObjectCreated)) ::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated*  externalSurfaceObjectCreated;

/// @brief Field externalSurfaceWidth, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_externalSurfaceWidth, put=__cordl_internal_set_externalSurfaceWidth)) int32_t  externalSurfaceWidth;

/// @brief Field frameIndex, offset 0x1c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameIndex, put=__cordl_internal_set_frameIndex)) int32_t  frameIndex;

/// @brief Field hidden, offset 0xd2, size 0x1 
 __declspec(property(get=__cordl_internal_get_hidden, put=__cordl_internal_set_hidden)) bool  hidden;

/// @brief Field instances, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instances, put=setStaticF_instances)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVROverlay>>*  instances;

/// @brief Field invertTextureRects, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_invertTextureRects, put=__cordl_internal_set_invertTextureRects)) bool  invertTextureRects;

/// @brief Field isAlphaPremultiplied, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAlphaPremultiplied, put=__cordl_internal_set_isAlphaPremultiplied)) bool  isAlphaPremultiplied;

/// @brief Field isDynamic, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDynamic, put=__cordl_internal_set_isDynamic)) bool  isDynamic;

/// @brief Field isExternalSurface, offset 0xd3, size 0x1 
 __declspec(property(get=__cordl_internal_get_isExternalSurface, put=__cordl_internal_set_isExternalSurface)) bool  isExternalSurface;

 __declspec(property(get=get_isOverlayVisible, put=set_isOverlayVisible)) bool  isOverlayVisible;

/// @brief Field isOverridePending, offset 0x120, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOverridePending, put=__cordl_internal_set_isOverridePending)) bool  isOverridePending;

/// @brief Field isProtectedContent, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_isProtectedContent, put=__cordl_internal_set_isProtectedContent)) bool  isProtectedContent;

/// @brief Field layerCompositionDepth, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerCompositionDepth, put=__cordl_internal_set_layerCompositionDepth)) int32_t  layerCompositionDepth;

/// @brief Field layerDesc, offset 0x130, size 0x7c 
 __declspec(property(get=__cordl_internal_get_layerDesc, put=__cordl_internal_set_layerDesc)) ::GlobalNamespace::OVRPlugin_LayerDesc  layerDesc;

 __declspec(property(get=get_layerId, put=set_layerId)) int32_t  layerId;

/// @brief Field layerIdHandle, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_layerIdHandle, put=__cordl_internal_set_layerIdHandle)) ::System::Runtime::InteropServices::GCHandle  layerIdHandle;

/// @brief Field layerIdPtr, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_layerIdPtr, put=__cordl_internal_set_layerIdPtr)) ::System::IntPtr  layerIdPtr;

 __declspec(property(get=get_layerIndex, put=set_layerIndex)) int32_t  layerIndex;

/// @brief Field layerTextureFormat, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerTextureFormat, put=__cordl_internal_set_layerTextureFormat)) ::GlobalNamespace::OVRPlugin_EyeTextureFormat  layerTextureFormat;

/// @brief Field layerTextures, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_layerTextures, put=__cordl_internal_set_layerTextures)) ::ArrayW<::GlobalNamespace::OVROverlay_LayerTexture>  layerTextures;

 __declspec(property(get=get_layout)) ::GlobalNamespace::OVRPlugin_LayerLayout  layout;

/// @brief Field noDepthBufferTesting, offset 0xe4, size 0x1 
 __declspec(property(get=__cordl_internal_get_noDepthBufferTesting, put=__cordl_internal_set_noDepthBufferTesting)) bool  noDepthBufferTesting;

/// @brief Field overridePerLayerColorScaleAndOffset, offset 0xad, size 0x1 
 __declspec(property(get=__cordl_internal_get_overridePerLayerColorScaleAndOffset, put=__cordl_internal_set_overridePerLayerColorScaleAndOffset)) bool  overridePerLayerColorScaleAndOffset;

/// @brief Field overrideTextureRectMatrix, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideTextureRectMatrix, put=__cordl_internal_set_overrideTextureRectMatrix)) bool  overrideTextureRectMatrix;

/// @brief Field prevFrameIndex, offset 0x1cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_prevFrameIndex, put=__cordl_internal_set_prevFrameIndex)) int32_t  prevFrameIndex;

/// @brief Field prevOverlayShape, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_prevOverlayShape, put=__cordl_internal_set_prevOverlayShape)) ::GlobalNamespace::OVROverlay_OverlayShape  prevOverlayShape;

 __declspec(property(get=get_previewInEditor, put=set_previewInEditor)) bool  previewInEditor;

/// @brief Field rend, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rend, put=__cordl_internal_set_rend)) ::UnityW<::UnityEngine::Renderer>  rend;

/// @brief Field srcRectLeft, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_srcRectLeft, put=__cordl_internal_set_srcRectLeft)) ::UnityEngine::Rect  srcRectLeft;

/// @brief Field srcRectRight, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_srcRectRight, put=__cordl_internal_set_srcRectRight)) ::UnityEngine::Rect  srcRectRight;

/// @brief Field stageCount, offset 0x1ac, size 0x4 
 __declspec(property(get=__cordl_internal_get_stageCount, put=__cordl_internal_set_stageCount)) int32_t  stageCount;

/// @brief Field tex2DMaterial, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tex2DMaterial, put=setStaticF_tex2DMaterial)) ::UnityW<::UnityEngine::Material>  tex2DMaterial;

/// @brief Field texturePtrs, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_texturePtrs, put=__cordl_internal_set_texturePtrs)) ::ArrayW<::System::IntPtr>  texturePtrs;

/// @brief Field textureRectMatrix, offset 0x6c, size 0x40 
 __declspec(property(get=__cordl_internal_get_textureRectMatrix, put=__cordl_internal_set_textureRectMatrix)) ::GlobalNamespace::OVRPlugin_TextureRectMatrixf  textureRectMatrix;

/// @brief Field textures, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_textures, put=__cordl_internal_set_textures)) ::ArrayW<::UnityW<::UnityEngine::Texture>>  textures;

 __declspec(property(get=get_texturesPerStage)) int32_t  texturesPerStage;

/// @brief Field useAutomaticFiltering, offset 0x105, size 0x1 
 __declspec(property(get=__cordl_internal_get_useAutomaticFiltering, put=__cordl_internal_set_useAutomaticFiltering)) bool  useAutomaticFiltering;

/// @brief Field useBicubicFiltering, offset 0x101, size 0x1 
 __declspec(property(get=__cordl_internal_get_useBicubicFiltering, put=__cordl_internal_set_useBicubicFiltering)) bool  useBicubicFiltering;

/// @brief Field useEfficientSharpen, offset 0x104, size 0x1 
 __declspec(property(get=__cordl_internal_get_useEfficientSharpen, put=__cordl_internal_set_useEfficientSharpen)) bool  useEfficientSharpen;

/// @brief Field useEfficientSupersample, offset 0x103, size 0x1 
 __declspec(property(get=__cordl_internal_get_useEfficientSupersample, put=__cordl_internal_set_useEfficientSupersample)) bool  useEfficientSupersample;

/// @brief Field useExpensiveSharpen, offset 0xd1, size 0x1 
 __declspec(property(get=__cordl_internal_get_useExpensiveSharpen, put=__cordl_internal_set_useExpensiveSharpen)) bool  useExpensiveSharpen;

/// @brief Field useExpensiveSuperSample, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_useExpensiveSuperSample, put=__cordl_internal_set_useExpensiveSuperSample)) bool  useExpensiveSuperSample;

/// @brief Field useLegacyCubemapRotation, offset 0x102, size 0x1 
 __declspec(property(get=__cordl_internal_get_useLegacyCubemapRotation, put=__cordl_internal_set_useLegacyCubemapRotation)) bool  useLegacyCubemapRotation;

/// @brief Field xrDeviceConstructed, offset 0x214, size 0x1 
 __declspec(property(get=__cordl_internal_get_xrDeviceConstructed, put=__cordl_internal_set_xrDeviceConstructed)) bool  xrDeviceConstructed;

/// @brief Method Awake, addr 0xa5dec50, size 0x434, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BlitSubImage, addr 0xa5dd92c, size 0x490, virtual false, abstract: false, final false
inline void BlitSubImage(::UnityEngine::Texture*  src, int32_t  width, int32_t  height, ::UnityEngine::Material*  mat, ::UnityEngine::Rect  rect) ;

/// @brief Method ComputePoseAndScale, addr 0xa5df7ac, size 0x3d4, virtual false, abstract: false, final false
inline void ComputePoseAndScale(::by_ref<::GlobalNamespace::OVRPose>  pose, ::by_ref<::UnityEngine::Vector3>  scale, ::by_ref<bool>  overlay, ::by_ref<bool>  headLocked) ;

/// @brief Method ComputeSubmit, addr 0xa5dfb80, size 0x2b4, virtual false, abstract: false, final false
inline bool ComputeSubmit(::by_ref<::GlobalNamespace::OVRPose>  pose, ::by_ref<::UnityEngine::Vector3>  scale, ::by_ref<bool>  overlay, ::by_ref<bool>  headLocked) ;

/// @brief Method CreateLayer, addr 0xa5dc0f0, size 0x480, virtual false, abstract: false, final false
inline bool CreateLayer(int32_t  mipLevels, int32_t  sampleCount, ::GlobalNamespace::OVRPlugin_EyeTextureFormat  etFormat, int32_t  flags, ::GlobalNamespace::OVRPlugin_Sizei  size, ::GlobalNamespace::OVRPlugin_OverlayShape  shape) ;

/// @brief Method CreateLayerTextures, addr 0xa5dc570, size 0x50c, virtual false, abstract: false, final false
inline bool CreateLayerTextures(bool  useMipmaps, ::GlobalNamespace::OVRPlugin_Sizei  size, bool  isHdr) ;

/// @brief Method DestroyLayer, addr 0xa5dcbc0, size 0x27c, virtual false, abstract: false, final false
inline void DestroyLayer() ;

/// @brief Method DestroyLayerTextures, addr 0xa5dca7c, size 0x144, virtual false, abstract: false, final false
inline void DestroyLayerTextures() ;

/// @brief Method DisableImmediately, addr 0xa5df4d8, size 0x21c, virtual false, abstract: false, final false
inline void DisableImmediately() ;

/// @brief Method GetBlitRect, addr 0xa5dd850, size 0xdc, virtual false, abstract: false, final false
inline ::UnityEngine::Rect GetBlitRect(int32_t  eyeId, int32_t  width, int32_t  height, bool  invertRect) ;

/// @brief Method GetCurrentLayerDesc, addr 0xa5dd384, size 0x4cc, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_LayerDesc GetCurrentLayerDesc() ;

/// @brief Method HandleBeginCameraRendering, addr 0xa5e0748, size 0xb0, virtual false, abstract: false, final false
inline void HandleBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method HandlePreRender, addr 0xa5e0140, size 0xb0, virtual false, abstract: false, final false
inline void HandlePreRender(::UnityEngine::Camera*  camera) ;

/// @brief Method InitOVROverlay, addr 0xa5df2c0, size 0x190, virtual false, abstract: false, final false
inline void InitOVROverlay() ;

/// @brief Method IsPassthroughShape, addr 0xa5dc098, size 0x58, virtual false, abstract: false, final false
static inline bool IsPassthroughShape(::GlobalNamespace::OVROverlay_OverlayShape  shape) ;

/// @brief Method LatchLayerTextures, addr 0xa5dcfa4, size 0x3e0, virtual false, abstract: false, final false
inline bool LatchLayerTextures() ;

/// @brief Method NeedsTexturesForShape, addr 0xa5dc038, size 0x60, virtual false, abstract: false, final false
static inline bool NeedsTexturesForShape(::GlobalNamespace::OVROverlay_OverlayShape  shape) ;

static inline ::GlobalNamespace::OVROverlay* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa5df6f4, size 0xb8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xa5df450, size 0x88, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa5df124, size 0x19c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OpenVROverlayUpdate, addr 0xa5dfe34, size 0x30c, virtual false, abstract: false, final false
inline bool OpenVROverlayUpdate(::UnityEngine::Vector3  scale, ::GlobalNamespace::OVRPose  pose) ;

/// @brief Method OverrideOverlayTextureInfo, addr 0xa5dbe5c, size 0xc4, virtual false, abstract: false, final false
inline void OverrideOverlayTextureInfo(::UnityEngine::Texture*  srcTexture, ::System::IntPtr  nativePtr, ::UnityEngine::XR::XRNode  node) ;

/// @brief Method PopulateLayer, addr 0xa5dddbc, size 0xa24, virtual false, abstract: false, final false
inline bool PopulateLayer(int32_t  mipLevels, bool  isHdr, ::GlobalNamespace::OVRPlugin_Sizei  size, int32_t  sampleCount, int32_t  stage) ;

/// @brief Method ResetEditorPreview, addr 0xa5dec38, size 0x18, virtual false, abstract: false, final false
inline void ResetEditorPreview() ;

/// @brief Method SetPerLayerColorScaleAndOffset, addr 0xa5dcf90, size 0x14, virtual false, abstract: false, final false
inline void SetPerLayerColorScaleAndOffset(::UnityEngine::Vector4  scale, ::UnityEngine::Vector4  offset) ;

/// @brief Method SetSrcDestRects, addr 0xa5dce3c, size 0x28, virtual false, abstract: false, final false
inline void SetSrcDestRects(::UnityEngine::Rect  srcLeft, ::UnityEngine::Rect  srcRight, ::UnityEngine::Rect  destLeft, ::UnityEngine::Rect  destRight) ;

/// @brief Method SetupEditorPreview, addr 0xa5dbe58, size 0x4, virtual false, abstract: false, final false
inline void SetupEditorPreview() ;

/// @brief Method SubmitLayer, addr 0xa5de7e0, size 0x458, virtual false, abstract: false, final false
inline bool SubmitLayer(bool  overlay, bool  headLocked, bool  noDepthBufferTesting, ::GlobalNamespace::OVRPose  pose, ::UnityEngine::Vector3  scale, int32_t  frameIndex) ;

/// @brief Method TrySubmitLayer, addr 0xa5e01f0, size 0x558, virtual false, abstract: false, final false
inline bool TrySubmitLayer() ;

/// @brief Method UpdateTextureRectMatrix, addr 0xa5dce64, size 0x12c, virtual false, abstract: false, final false
inline void UpdateTextureRectMatrix() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_OpenVRMouseScale() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_OpenVRMouseScale() ;

constexpr uint64_t const& __cordl_internal_get_OpenVROverlayHandle() const;

constexpr uint64_t& __cordl_internal_get_OpenVROverlayHandle() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_OpenVRUVOffsetAndScale() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_OpenVRUVOffsetAndScale() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__blitMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__blitMesh() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get__commandBuffer() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__commandBuffer() ;

constexpr bool const& __cordl_internal_get__isOverlayVisible_k__BackingField() const;

constexpr bool& __cordl_internal_get__isOverlayVisible_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__layerId_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__layerId_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__layerIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__layerIndex_k__BackingField() ;

constexpr bool const& __cordl_internal_get__previewInEditor() const;

constexpr bool& __cordl_internal_get__previewInEditor() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_colorOffset() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_colorOffset() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_colorScale() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_colorScale() ;

constexpr int32_t const& __cordl_internal_get_compositionDepth() const;

constexpr int32_t& __cordl_internal_get_compositionDepth() ;

constexpr ::GlobalNamespace::OVRManager_XRDevice const& __cordl_internal_get_constructedOverlayXRDevice() const;

constexpr ::GlobalNamespace::OVRManager_XRDevice& __cordl_internal_get_constructedOverlayXRDevice() ;

constexpr ::GlobalNamespace::OVROverlay_OverlayShape const& __cordl_internal_get_currentOverlayShape() const;

constexpr ::GlobalNamespace::OVROverlay_OverlayShape& __cordl_internal_get_currentOverlayShape() ;

constexpr ::GlobalNamespace::OVROverlay_OverlayType const& __cordl_internal_get_currentOverlayType() const;

constexpr ::GlobalNamespace::OVROverlay_OverlayType& __cordl_internal_get_currentOverlayType() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_destRectLeft() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_destRectLeft() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_destRectRight() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_destRectRight() ;

constexpr int32_t const& __cordl_internal_get_externalSurfaceHeight() const;

constexpr int32_t& __cordl_internal_get_externalSurfaceHeight() ;

constexpr ::System::IntPtr const& __cordl_internal_get_externalSurfaceObject() const;

constexpr ::System::IntPtr& __cordl_internal_get_externalSurfaceObject() ;

constexpr ::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated* const& __cordl_internal_get_externalSurfaceObjectCreated() const;

constexpr ::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated*& __cordl_internal_get_externalSurfaceObjectCreated() ;

constexpr int32_t const& __cordl_internal_get_externalSurfaceWidth() const;

constexpr int32_t& __cordl_internal_get_externalSurfaceWidth() ;

constexpr int32_t const& __cordl_internal_get_frameIndex() const;

constexpr int32_t& __cordl_internal_get_frameIndex() ;

constexpr bool const& __cordl_internal_get_hidden() const;

constexpr bool& __cordl_internal_get_hidden() ;

constexpr bool const& __cordl_internal_get_invertTextureRects() const;

constexpr bool& __cordl_internal_get_invertTextureRects() ;

constexpr bool const& __cordl_internal_get_isAlphaPremultiplied() const;

constexpr bool& __cordl_internal_get_isAlphaPremultiplied() ;

constexpr bool const& __cordl_internal_get_isDynamic() const;

constexpr bool& __cordl_internal_get_isDynamic() ;

constexpr bool const& __cordl_internal_get_isExternalSurface() const;

constexpr bool& __cordl_internal_get_isExternalSurface() ;

constexpr bool const& __cordl_internal_get_isOverridePending() const;

constexpr bool& __cordl_internal_get_isOverridePending() ;

constexpr bool const& __cordl_internal_get_isProtectedContent() const;

constexpr bool& __cordl_internal_get_isProtectedContent() ;

constexpr int32_t const& __cordl_internal_get_layerCompositionDepth() const;

constexpr int32_t& __cordl_internal_get_layerCompositionDepth() ;

constexpr ::GlobalNamespace::OVRPlugin_LayerDesc const& __cordl_internal_get_layerDesc() const;

constexpr ::GlobalNamespace::OVRPlugin_LayerDesc& __cordl_internal_get_layerDesc() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_layerIdHandle() const;

constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_layerIdHandle() ;

constexpr ::System::IntPtr const& __cordl_internal_get_layerIdPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_layerIdPtr() ;

constexpr ::GlobalNamespace::OVRPlugin_EyeTextureFormat const& __cordl_internal_get_layerTextureFormat() const;

constexpr ::GlobalNamespace::OVRPlugin_EyeTextureFormat& __cordl_internal_get_layerTextureFormat() ;

constexpr ::ArrayW<::GlobalNamespace::OVROverlay_LayerTexture> const& __cordl_internal_get_layerTextures() const;

constexpr ::ArrayW<::GlobalNamespace::OVROverlay_LayerTexture>& __cordl_internal_get_layerTextures() ;

constexpr bool const& __cordl_internal_get_noDepthBufferTesting() const;

constexpr bool& __cordl_internal_get_noDepthBufferTesting() ;

constexpr bool const& __cordl_internal_get_overridePerLayerColorScaleAndOffset() const;

constexpr bool& __cordl_internal_get_overridePerLayerColorScaleAndOffset() ;

constexpr bool const& __cordl_internal_get_overrideTextureRectMatrix() const;

constexpr bool& __cordl_internal_get_overrideTextureRectMatrix() ;

constexpr int32_t const& __cordl_internal_get_prevFrameIndex() const;

constexpr int32_t& __cordl_internal_get_prevFrameIndex() ;

constexpr ::GlobalNamespace::OVROverlay_OverlayShape const& __cordl_internal_get_prevOverlayShape() const;

constexpr ::GlobalNamespace::OVROverlay_OverlayShape& __cordl_internal_get_prevOverlayShape() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_rend() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_rend() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_srcRectLeft() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_srcRectLeft() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_srcRectRight() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_srcRectRight() ;

constexpr int32_t const& __cordl_internal_get_stageCount() const;

constexpr int32_t& __cordl_internal_get_stageCount() ;

constexpr ::ArrayW<::System::IntPtr> const& __cordl_internal_get_texturePtrs() const;

constexpr ::ArrayW<::System::IntPtr>& __cordl_internal_get_texturePtrs() ;

constexpr ::GlobalNamespace::OVRPlugin_TextureRectMatrixf const& __cordl_internal_get_textureRectMatrix() const;

constexpr ::GlobalNamespace::OVRPlugin_TextureRectMatrixf& __cordl_internal_get_textureRectMatrix() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture>> const& __cordl_internal_get_textures() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture>>& __cordl_internal_get_textures() ;

constexpr bool const& __cordl_internal_get_useAutomaticFiltering() const;

constexpr bool& __cordl_internal_get_useAutomaticFiltering() ;

constexpr bool const& __cordl_internal_get_useBicubicFiltering() const;

constexpr bool& __cordl_internal_get_useBicubicFiltering() ;

constexpr bool const& __cordl_internal_get_useEfficientSharpen() const;

constexpr bool& __cordl_internal_get_useEfficientSharpen() ;

constexpr bool const& __cordl_internal_get_useEfficientSupersample() const;

constexpr bool& __cordl_internal_get_useEfficientSupersample() ;

constexpr bool const& __cordl_internal_get_useExpensiveSharpen() const;

constexpr bool& __cordl_internal_get_useExpensiveSharpen() ;

constexpr bool const& __cordl_internal_get_useExpensiveSuperSample() const;

constexpr bool& __cordl_internal_get_useExpensiveSuperSample() ;

constexpr bool const& __cordl_internal_get_useLegacyCubemapRotation() const;

constexpr bool& __cordl_internal_get_useLegacyCubemapRotation() ;

constexpr bool const& __cordl_internal_get_xrDeviceConstructed() const;

constexpr bool& __cordl_internal_get_xrDeviceConstructed() ;

constexpr void __cordl_internal_set_OpenVRMouseScale(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_OpenVROverlayHandle(uint64_t  value) ;

constexpr void __cordl_internal_set_OpenVRUVOffsetAndScale(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set__blitMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__commandBuffer(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set__isOverlayVisible_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__layerId_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__layerIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__previewInEditor(bool  value) ;

constexpr void __cordl_internal_set_colorOffset(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_colorScale(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_compositionDepth(int32_t  value) ;

constexpr void __cordl_internal_set_constructedOverlayXRDevice(::GlobalNamespace::OVRManager_XRDevice  value) ;

constexpr void __cordl_internal_set_currentOverlayShape(::GlobalNamespace::OVROverlay_OverlayShape  value) ;

constexpr void __cordl_internal_set_currentOverlayType(::GlobalNamespace::OVROverlay_OverlayType  value) ;

constexpr void __cordl_internal_set_destRectLeft(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_destRectRight(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_externalSurfaceHeight(int32_t  value) ;

constexpr void __cordl_internal_set_externalSurfaceObject(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_externalSurfaceObjectCreated(::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated*  value) ;

constexpr void __cordl_internal_set_externalSurfaceWidth(int32_t  value) ;

constexpr void __cordl_internal_set_frameIndex(int32_t  value) ;

constexpr void __cordl_internal_set_hidden(bool  value) ;

constexpr void __cordl_internal_set_invertTextureRects(bool  value) ;

constexpr void __cordl_internal_set_isAlphaPremultiplied(bool  value) ;

constexpr void __cordl_internal_set_isDynamic(bool  value) ;

constexpr void __cordl_internal_set_isExternalSurface(bool  value) ;

constexpr void __cordl_internal_set_isOverridePending(bool  value) ;

constexpr void __cordl_internal_set_isProtectedContent(bool  value) ;

constexpr void __cordl_internal_set_layerCompositionDepth(int32_t  value) ;

constexpr void __cordl_internal_set_layerDesc(::GlobalNamespace::OVRPlugin_LayerDesc  value) ;

constexpr void __cordl_internal_set_layerIdHandle(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr void __cordl_internal_set_layerIdPtr(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_layerTextureFormat(::GlobalNamespace::OVRPlugin_EyeTextureFormat  value) ;

constexpr void __cordl_internal_set_layerTextures(::ArrayW<::GlobalNamespace::OVROverlay_LayerTexture>  value) ;

constexpr void __cordl_internal_set_noDepthBufferTesting(bool  value) ;

constexpr void __cordl_internal_set_overridePerLayerColorScaleAndOffset(bool  value) ;

constexpr void __cordl_internal_set_overrideTextureRectMatrix(bool  value) ;

constexpr void __cordl_internal_set_prevFrameIndex(int32_t  value) ;

constexpr void __cordl_internal_set_prevOverlayShape(::GlobalNamespace::OVROverlay_OverlayShape  value) ;

constexpr void __cordl_internal_set_rend(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_srcRectLeft(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_srcRectRight(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_stageCount(int32_t  value) ;

constexpr void __cordl_internal_set_texturePtrs(::ArrayW<::System::IntPtr>  value) ;

constexpr void __cordl_internal_set_textureRectMatrix(::GlobalNamespace::OVRPlugin_TextureRectMatrixf  value) ;

constexpr void __cordl_internal_set_textures(::ArrayW<::UnityW<::UnityEngine::Texture>>  value) ;

constexpr void __cordl_internal_set_useAutomaticFiltering(bool  value) ;

constexpr void __cordl_internal_set_useBicubicFiltering(bool  value) ;

constexpr void __cordl_internal_set_useEfficientSharpen(bool  value) ;

constexpr void __cordl_internal_set_useEfficientSupersample(bool  value) ;

constexpr void __cordl_internal_set_useExpensiveSharpen(bool  value) ;

constexpr void __cordl_internal_set_useExpensiveSuperSample(bool  value) ;

constexpr void __cordl_internal_set_useLegacyCubemapRotation(bool  value) ;

constexpr void __cordl_internal_set_xrDeviceConstructed(bool  value) ;

/// @brief Method .ctor, addr 0xa5e07f8, size 0x1c8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__tempRenderTextureId() ;

static inline ::ArrayW<::UnityW<::UnityEngine::Material>> getStaticF_cubeMaterial() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVROverlay>>* getStaticF_instances() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_tex2DMaterial() ;

/// @brief Method get_OpenVROverlayKey, addr 0xa5df084, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW get_OpenVROverlayKey() ;

/// [CompilerGenerated]
/// @brief Method get_isOverlayVisible, addr 0xa5dc00c, size 0x8, virtual false, abstract: false, final false
inline bool get_isOverlayVisible() ;

/// [CompilerGenerated]
/// @brief Method get_layerId, addr 0xa5dbf20, size 0x8, virtual false, abstract: false, final false
inline int32_t get_layerId() ;

/// [CompilerGenerated]
/// @brief Method get_layerIndex, addr 0xa5dbffc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_layerIndex() ;

/// @brief Method get_layout, addr 0xa5dbf30, size 0xcc, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_LayerLayout get_layout() ;

/// @brief Method get_previewInEditor, addr 0xa5dbe38, size 0x8, virtual false, abstract: false, final false
inline bool get_previewInEditor() ;

/// @brief Method get_texturesPerStage, addr 0xa5dc01c, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_texturesPerStage() ;

static inline void setStaticF__tempRenderTextureId(int32_t  value) ;

static inline void setStaticF_cubeMaterial(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

static inline void setStaticF_instances(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVROverlay>>*  value) ;

static inline void setStaticF_tex2DMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// [CompilerGenerated]
/// @brief Method set_isOverlayVisible, addr 0xa5dc014, size 0x8, virtual false, abstract: false, final false
inline void set_isOverlayVisible(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_layerId, addr 0xa5dbf28, size 0x8, virtual false, abstract: false, final false
inline void set_layerId(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_layerIndex, addr 0xa5dc004, size 0x8, virtual false, abstract: false, final false
inline void set_layerIndex(int32_t  value) ;

/// @brief Method set_previewInEditor, addr 0xa5dbe40, size 0x18, virtual false, abstract: false, final false
inline void set_previewInEditor(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVROverlay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVROverlay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVROverlay(OVROverlay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVROverlay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVROverlay(OVROverlay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12007};

/// [Tooltip("Specify overlay\'s type")]
/// @brief Field currentOverlayType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVROverlay_OverlayType  ___currentOverlayType;

/// [Tooltip("If true, the texture\'s content is copied to the compositor each frame.")]
/// @brief Field isDynamic, offset: 0x24, size: 0x1, def value: None
 bool  ___isDynamic;

/// [Tooltip("If true, the layer would be used to present protected content (e.g. HDCP), the content won\'t be shown in screenshots or recordings.")]
/// @brief Field isProtectedContent, offset: 0x25, size: 0x1, def value: None
 bool  ___isProtectedContent;

/// @brief Field srcRectLeft, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Rect  ___srcRectLeft;

/// @brief Field srcRectRight, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Rect  ___srcRectRight;

/// @brief Field destRectLeft, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Rect  ___destRectLeft;

/// @brief Field destRectRight, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Rect  ___destRectRight;

/// @brief Field invertTextureRects, offset: 0x68, size: 0x1, def value: None
 bool  ___invertTextureRects;

/// @brief Field textureRectMatrix, offset: 0x6c, size: 0x40, def value: None
 ::GlobalNamespace::OVRPlugin_TextureRectMatrixf  ___textureRectMatrix;

/// @brief Field overrideTextureRectMatrix, offset: 0xac, size: 0x1, def value: None
 bool  ___overrideTextureRectMatrix;

/// @brief Field overridePerLayerColorScaleAndOffset, offset: 0xad, size: 0x1, def value: None
 bool  ___overridePerLayerColorScaleAndOffset;

/// @brief Field colorScale, offset: 0xb0, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___colorScale;

/// @brief Field colorOffset, offset: 0xc0, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___colorOffset;

/// @brief Field useExpensiveSuperSample, offset: 0xd0, size: 0x1, def value: None
 bool  ___useExpensiveSuperSample;

/// @brief Field useExpensiveSharpen, offset: 0xd1, size: 0x1, def value: None
 bool  ___useExpensiveSharpen;

/// @brief Field hidden, offset: 0xd2, size: 0x1, def value: None
 bool  ___hidden;

/// [Tooltip("If true, the layer will be created as an external surface. externalSurfaceObject contains the Surface object. It\'s effective only on Android.")]
/// @brief Field isExternalSurface, offset: 0xd3, size: 0x1, def value: None
 bool  ___isExternalSurface;

/// [Tooltip("The width which will be used to create the external surface. It\'s effective only on Android.")]
/// @brief Field externalSurfaceWidth, offset: 0xd4, size: 0x4, def value: None
 int32_t  ___externalSurfaceWidth;

/// [Tooltip("The height which will be used to create the external surface. It\'s effective only on Android.")]
/// @brief Field externalSurfaceHeight, offset: 0xd8, size: 0x4, def value: None
 int32_t  ___externalSurfaceHeight;

/// [Tooltip("The compositionDepth defines the order of the OVROverlays in composition. The overlay/underlay with smaller compositionDepth would be composited in the front of the overlay/underlay with larger compositionDepth.")]
/// @brief Field compositionDepth, offset: 0xdc, size: 0x4, def value: None
 int32_t  ___compositionDepth;

/// @brief Field layerCompositionDepth, offset: 0xe0, size: 0x4, def value: None
 int32_t  ___layerCompositionDepth;

/// [Tooltip("The noDepthBufferTesting will stop layer\'s depth buffer compositing even if the engine has \"Shared Depth Buffer\" enabled. The layer\'s ordering will be used instead which is determined by it\'s composition depth and overlay/underlay type.")]
/// @brief Field noDepthBufferTesting, offset: 0xe4, size: 0x1, def value: None
 bool  ___noDepthBufferTesting;

/// @brief Field layerTextureFormat, offset: 0xe8, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_EyeTextureFormat  ___layerTextureFormat;

/// [Tooltip("Specify overlay\'s shape")]
/// @brief Field currentOverlayShape, offset: 0xec, size: 0x4, def value: None
 ::GlobalNamespace::OVROverlay_OverlayShape  ___currentOverlayShape;

/// @brief Field prevOverlayShape, offset: 0xf0, size: 0x4, def value: None
 ::GlobalNamespace::OVROverlay_OverlayShape  ___prevOverlayShape;

/// [Tooltip("The left- and right-eye Textures to show in the layer.")]
/// @brief Field textures, offset: 0xf8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Texture>>  ___textures;

/// [Tooltip("When checked, the texture is treated as if the alpha was already premultiplied")]
/// @brief Field isAlphaPremultiplied, offset: 0x100, size: 0x1, def value: None
 bool  ___isAlphaPremultiplied;

/// [Tooltip("When checked, the layer will use bicubic filtering")]
/// @brief Field useBicubicFiltering, offset: 0x101, size: 0x1, def value: None
 bool  ___useBicubicFiltering;

/// [Tooltip("When checked, the cubemap will retain the legacy rotation which was rotated 180 degrees around the Y axis comapred to Unity\'s definition of cubemaps. This setting will be deprecated in the near future, therefore it is recommended to fix the cubemap texture instead.")]
/// @brief Field useLegacyCubemapRotation, offset: 0x102, size: 0x1, def value: None
 bool  ___useLegacyCubemapRotation;

/// [Tooltip("When checked, the layer will use efficient super sampling")]
/// @brief Field useEfficientSupersample, offset: 0x103, size: 0x1, def value: None
 bool  ___useEfficientSupersample;

/// [Tooltip("When checked, the layer will use efficient sharpen.")]
/// @brief Field useEfficientSharpen, offset: 0x104, size: 0x1, def value: None
 bool  ___useEfficientSharpen;

/// [Tooltip("When checked, The runtime automatically chooses the appropriate sharpening or super sampling filter")]
/// @brief Field useAutomaticFiltering, offset: 0x105, size: 0x1, def value: None
 bool  ___useAutomaticFiltering;

/// [SerializeField]
/// @brief Field _previewInEditor, offset: 0x106, size: 0x1, def value: None
 bool  ____previewInEditor;

/// @brief Field texturePtrs, offset: 0x108, size: 0x8, def value: None
 ::ArrayW<::System::IntPtr>  ___texturePtrs;

/// @brief Field externalSurfaceObject, offset: 0x110, size: 0x8, def value: None
 ::System::IntPtr  ___externalSurfaceObject;

/// @brief Field externalSurfaceObjectCreated, offset: 0x118, size: 0x8, def value: None
 ::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated*  ___externalSurfaceObjectCreated;

/// @brief Field isOverridePending, offset: 0x120, size: 0x1, def value: None
 bool  ___isOverridePending;

/// [CompilerGenerated]
/// @brief Field <layerId>k__BackingField, offset: 0x124, size: 0x4, def value: None
 int32_t  ____layerId_k__BackingField;

/// @brief Field layerTextures, offset: 0x128, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVROverlay_LayerTexture>  ___layerTextures;

/// @brief Field layerDesc, offset: 0x130, size: 0x7c, def value: None
 ::GlobalNamespace::OVRPlugin_LayerDesc  ___layerDesc;

/// @brief Field stageCount, offset: 0x1ac, size: 0x4, def value: None
 int32_t  ___stageCount;

/// [CompilerGenerated]
/// @brief Field <layerIndex>k__BackingField, offset: 0x1b0, size: 0x4, def value: None
 int32_t  ____layerIndex_k__BackingField;

/// @brief Field layerIdHandle, offset: 0x1b8, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  ___layerIdHandle;

/// @brief Field layerIdPtr, offset: 0x1c0, size: 0x8, def value: None
 ::System::IntPtr  ___layerIdPtr;

/// @brief Field frameIndex, offset: 0x1c8, size: 0x4, def value: None
 int32_t  ___frameIndex;

/// @brief Field prevFrameIndex, offset: 0x1cc, size: 0x4, def value: None
 int32_t  ___prevFrameIndex;

/// @brief Field rend, offset: 0x1d0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___rend;

/// @brief Field _commandBuffer, offset: 0x1d8, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ____commandBuffer;

/// @brief Field _blitMesh, offset: 0x1e0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____blitMesh;

/// [CompilerGenerated]
/// @brief Field <isOverlayVisible>k__BackingField, offset: 0x1e8, size: 0x1, def value: None
 bool  ____isOverlayVisible_k__BackingField;

/// @brief Field OpenVROverlayHandle, offset: 0x1f0, size: 0x8, def value: None
 uint64_t  ___OpenVROverlayHandle;

/// @brief Field OpenVRUVOffsetAndScale, offset: 0x1f8, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___OpenVRUVOffsetAndScale;

/// @brief Field OpenVRMouseScale, offset: 0x208, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___OpenVRMouseScale;

/// @brief Field constructedOverlayXRDevice, offset: 0x210, size: 0x4, def value: None
 ::GlobalNamespace::OVRManager_XRDevice  ___constructedOverlayXRDevice;

/// @brief Field xrDeviceConstructed, offset: 0x214, size: 0x1, def value: None
 bool  ___xrDeviceConstructed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVROverlay, ___currentOverlayType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___isDynamic) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___isProtectedContent) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___srcRectLeft) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___srcRectRight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___destRectLeft) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___destRectRight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___invertTextureRects) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___textureRectMatrix) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___overrideTextureRectMatrix) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___overridePerLayerColorScaleAndOffset) == 0xad, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___colorScale) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___colorOffset) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___useExpensiveSuperSample) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___useExpensiveSharpen) == 0xd1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___hidden) == 0xd2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___isExternalSurface) == 0xd3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___externalSurfaceWidth) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___externalSurfaceHeight) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___compositionDepth) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___layerCompositionDepth) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___noDepthBufferTesting) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___layerTextureFormat) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___currentOverlayShape) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___prevOverlayShape) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___textures) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___isAlphaPremultiplied) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___useBicubicFiltering) == 0x101, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___useLegacyCubemapRotation) == 0x102, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___useEfficientSupersample) == 0x103, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___useEfficientSharpen) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___useAutomaticFiltering) == 0x105, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ____previewInEditor) == 0x106, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___texturePtrs) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___externalSurfaceObject) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___externalSurfaceObjectCreated) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___isOverridePending) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ____layerId_k__BackingField) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___layerTextures) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___layerDesc) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___stageCount) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ____layerIndex_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___layerIdHandle) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___layerIdPtr) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___frameIndex) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___prevFrameIndex) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___rend) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ____commandBuffer) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ____blitMesh) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ____isOverlayVisible_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___OpenVROverlayHandle) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___OpenVRUVOffsetAndScale) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___OpenVRMouseScale) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___constructedOverlayXRDevice) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___xrDeviceConstructed) == 0x214, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVROverlay) == 0x218, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVROverlay/ExternalSurfaceObjectCreated
class CORDL_TYPE OVROverlay_ExternalSurfaceObjectCreated : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa600038, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa600054, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa600024, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa5fff88, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVROverlay_ExternalSurfaceObjectCreated() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVROverlay_ExternalSurfaceObjectCreated", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVROverlay_ExternalSurfaceObjectCreated(OVROverlay_ExternalSurfaceObjectCreated && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVROverlay_ExternalSurfaceObjectCreated", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVROverlay_ExternalSurfaceObjectCreated(OVROverlay_ExternalSurfaceObjectCreated const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12005};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
