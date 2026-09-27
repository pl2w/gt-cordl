#pragma once
// IWYU pragma private; include "Liv/Lck/LckHeadsetCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/zzzz__EyeSelection_def.hpp"
#include "Liv/Lck/zzzz__HeadsetCropMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckHeadsetCamera)
namespace Liv::Lck {
struct EyeSelection;
}
namespace Liv::Lck {
struct HeadsetCropMode;
}
namespace Liv::Lck {
class ILckCamera;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Liv::Lck {
class LckHeadsetCamera;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckHeadsetCamera*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckHeadsetCamera*, "Liv.Lck", "LckHeadsetCamera");
// Dependencies Liv.Lck.EyeSelection, Liv.Lck.HeadsetCropMode, UnityEngine.MonoBehaviour
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckHeadsetCamera
class CORDL_TYPE LckHeadsetCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ActiveTargetTexture, put=set_ActiveTargetTexture)) ::UnityW<::UnityEngine::RenderTexture>  ActiveTargetTexture;

 __declspec(property(get=get_CameraId)) ::StringW  CameraId;

 __declspec(property(get=get_CropMode, put=set_CropMode)) ::Liv::Lck::HeadsetCropMode  CropMode;

 __declspec(property(get=get_Eye, put=set_Eye)) ::Liv::Lck::EyeSelection  Eye;

/// @brief Field FlipYId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_FlipYId, put=setStaticF_FlipYId)) int32_t  FlipYId;

 __declspec(property(get=get_IsActive, put=set_IsActive)) bool  IsActive;

 __declspec(property(get=get_MaterialInstance)) ::UnityW<::UnityEngine::Material>  MaterialInstance;

/// @brief Field ScaleOffsetId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ScaleOffsetId, put=setStaticF_ScaleOffsetId)) int32_t  ScaleOffsetId;

/// @brief Field SliceIndexId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SliceIndexId, put=setStaticF_SliceIndexId)) int32_t  SliceIndexId;

 __declspec(property(get=get_UseTextureArrayBlit)) bool  UseTextureArrayBlit;

/// @brief Field <ActiveTargetTexture>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__ActiveTargetTexture_k__BackingField, put=__cordl_internal_set__ActiveTargetTexture_k__BackingField)) ::UnityW<::UnityEngine::RenderTexture>  _ActiveTargetTexture_k__BackingField;

/// @brief Field <IsActive>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsActive_k__BackingField, put=__cordl_internal_set__IsActive_k__BackingField)) bool  _IsActive_k__BackingField;

/// @brief Field _activeInstances, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__activeInstances, put=setStaticF__activeInstances)) ::System::Collections::Generic::List_1<::UnityW<::Liv::Lck::LckHeadsetCamera>>*  _activeInstances;

/// @brief Field _blitMaterial, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__blitMaterial, put=__cordl_internal_set__blitMaterial)) ::UnityW<::UnityEngine::Material>  _blitMaterial;

/// @brief Field _cachedCropMode, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedCropMode, put=__cordl_internal_set__cachedCropMode)) ::Liv::Lck::HeadsetCropMode  _cachedCropMode;

/// @brief Field _cachedDstH, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedDstH, put=__cordl_internal_set__cachedDstH)) int32_t  _cachedDstH;

/// @brief Field _cachedDstW, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedDstW, put=__cordl_internal_set__cachedDstW)) int32_t  _cachedDstW;

/// @brief Field _cachedSrcH, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedSrcH, put=__cordl_internal_set__cachedSrcH)) int32_t  _cachedSrcH;

/// @brief Field _cachedSrcW, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedSrcW, put=__cordl_internal_set__cachedSrcW)) int32_t  _cachedSrcW;

/// @brief Field _cameraId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraId, put=__cordl_internal_set__cameraId)) ::StringW  _cameraId;

/// @brief Field _captureInitialized, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get__captureInitialized, put=__cordl_internal_set__captureInitialized)) bool  _captureInitialized;

/// @brief Field _cmd, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__cmd, put=__cordl_internal_set__cmd)) ::UnityEngine::Rendering::CommandBuffer*  _cmd;

/// @brief Field _cropMode, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__cropMode, put=__cordl_internal_set__cropMode)) ::Liv::Lck::HeadsetCropMode  _cropMode;

/// @brief Field _eye, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__eye, put=__cordl_internal_set__eye)) ::Liv::Lck::EyeSelection  _eye;

/// @brief Field _flipY, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get__flipY, put=__cordl_internal_set__flipY)) bool  _flipY;

/// @brief Field _intermediateRT, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__intermediateRT, put=__cordl_internal_set__intermediateRT)) ::UnityW<::UnityEngine::RenderTexture>  _intermediateRT;

/// @brief Field _isMultiPass, offset 0x5b, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMultiPass, put=__cordl_internal_set__isMultiPass)) bool  _isMultiPass;

/// @brief Field _lastRenderFeatureCaptureFrame, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastRenderFeatureCaptureFrame, put=__cordl_internal_set__lastRenderFeatureCaptureFrame)) int32_t  _lastRenderFeatureCaptureFrame;

/// @brief Field _materialInstance, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialInstance, put=__cordl_internal_set__materialInstance)) ::UnityW<::UnityEngine::Material>  _materialInstance;

/// @brief Field _resolvedCamera, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__resolvedCamera, put=__cordl_internal_set__resolvedCamera)) ::UnityW<::UnityEngine::Camera>  _resolvedCamera;

/// @brief Field _stereoModeDetected, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__stereoModeDetected, put=__cordl_internal_set__stereoModeDetected)) bool  _stereoModeDetected;

/// @brief Field _useSRP, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__useSRP, put=__cordl_internal_set__useSRP)) bool  _useSRP;

/// @brief Field _useTextureArray, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__useTextureArray, put=__cordl_internal_set__useTextureArray)) bool  _useTextureArray;

/// @brief Field _xrCamera, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__xrCamera, put=__cordl_internal_set__xrCamera)) ::UnityW<::UnityEngine::Camera>  _xrCamera;

/// @brief Convert operator to "::Liv::Lck::ILckCamera"
constexpr operator  ::Liv::Lck::ILckCamera*() noexcept;

/// @brief Method ActivateCamera, addr 0x9ce2234, size 0x15c, virtual true, abstract: false, final true
inline void ActivateCamera(::UnityEngine::RenderTexture*  renderTexture) ;

/// @brief Method Awake, addr 0x9ce1a78, size 0x4a8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ComputeScaleOffset, addr 0x9ce3090, size 0x110, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 ComputeScaleOffset(int32_t  srcW, int32_t  srcH) ;

/// @brief Method DeactivateCamera, addr 0x9ce24f8, size 0x94, virtual true, abstract: false, final true
inline void DeactivateCamera() ;

/// @brief Method DetectStereoModeIfNeeded, addr 0x9ce24b4, size 0x44, virtual false, abstract: false, final false
inline void DetectStereoModeIfNeeded() ;

/// @brief Method GetCameraComponent, addr 0x9ce258c, size 0xc0, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Camera> GetCameraComponent() ;

/// @brief Method InitializeCapture, addr 0x9ce2390, size 0x124, virtual false, abstract: false, final false
inline void InitializeCapture() ;

/// @brief Method InvalidateScaleOffsetCache, addr 0x9ce1a50, size 0x8, virtual false, abstract: false, final false
inline void InvalidateScaleOffsetCache() ;

/// @brief Method IsTargetCamera, addr 0x9ce264c, size 0xe0, virtual false, abstract: false, final false
inline bool IsTargetCamera(::UnityEngine::Camera*  cam) ;

/// @brief Method MarkCapturedByRenderFeature, addr 0x9ce272c, size 0x1c, virtual false, abstract: false, final false
inline void MarkCapturedByRenderFeature() ;

static inline ::Liv::Lck::LckHeadsetCamera* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9ce1f20, size 0x288, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEndCameraRendering, addr 0x9ce2748, size 0x11c, virtual false, abstract: false, final false
inline void OnEndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  cam) ;

/// @brief Method OnPostRenderBuiltIn, addr 0x9ce2b6c, size 0xf4, virtual false, abstract: false, final false
inline void OnPostRenderBuiltIn(::UnityEngine::Camera*  cam) ;

/// @brief Method PopulateCommandBuffer, addr 0x9ce28b4, size 0x2b8, virtual false, abstract: false, final false
inline void PopulateCommandBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Camera*  cam) ;

/// @brief Method PrepareIntermediateRT, addr 0x9ce2f2c, size 0x164, virtual false, abstract: false, final false
inline void PrepareIntermediateRT(::UnityEngine::Camera*  cam) ;

/// @brief Method ReleaseIntermediateRT, addr 0x9ce21a8, size 0x8c, virtual false, abstract: false, final false
inline void ReleaseIntermediateRT() ;

/// @brief Method ShouldCaptureEye, addr 0x9ce2864, size 0x50, virtual false, abstract: false, final false
inline bool ShouldCaptureEye(::UnityEngine::Camera*  cam) ;

/// @brief Method UpdateMaterialForCapture, addr 0x9ce2c90, size 0x174, virtual false, abstract: false, final false
inline void UpdateMaterialForCapture(::UnityEngine::Camera*  cam, bool  isSourceBackBuffer) ;

/// @brief Method UpdateScaleOffsetIfNeeded, addr 0x9ce2e04, size 0x128, virtual false, abstract: false, final false
inline void UpdateScaleOffsetIfNeeded(int32_t  srcW, int32_t  srcH) ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__ActiveTargetTexture_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__ActiveTargetTexture_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsActive_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsActive_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__blitMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__blitMaterial() ;

constexpr ::Liv::Lck::HeadsetCropMode const& __cordl_internal_get__cachedCropMode() const;

constexpr ::Liv::Lck::HeadsetCropMode& __cordl_internal_get__cachedCropMode() ;

constexpr int32_t const& __cordl_internal_get__cachedDstH() const;

constexpr int32_t& __cordl_internal_get__cachedDstH() ;

constexpr int32_t const& __cordl_internal_get__cachedDstW() const;

constexpr int32_t& __cordl_internal_get__cachedDstW() ;

constexpr int32_t const& __cordl_internal_get__cachedSrcH() const;

constexpr int32_t& __cordl_internal_get__cachedSrcH() ;

constexpr int32_t const& __cordl_internal_get__cachedSrcW() const;

constexpr int32_t& __cordl_internal_get__cachedSrcW() ;

constexpr ::StringW const& __cordl_internal_get__cameraId() const;

constexpr ::StringW& __cordl_internal_get__cameraId() ;

constexpr bool const& __cordl_internal_get__captureInitialized() const;

constexpr bool& __cordl_internal_get__captureInitialized() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get__cmd() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__cmd() ;

constexpr ::Liv::Lck::HeadsetCropMode const& __cordl_internal_get__cropMode() const;

constexpr ::Liv::Lck::HeadsetCropMode& __cordl_internal_get__cropMode() ;

constexpr ::Liv::Lck::EyeSelection const& __cordl_internal_get__eye() const;

constexpr ::Liv::Lck::EyeSelection& __cordl_internal_get__eye() ;

constexpr bool const& __cordl_internal_get__flipY() const;

constexpr bool& __cordl_internal_get__flipY() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__intermediateRT() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__intermediateRT() ;

constexpr bool const& __cordl_internal_get__isMultiPass() const;

constexpr bool& __cordl_internal_get__isMultiPass() ;

constexpr int32_t const& __cordl_internal_get__lastRenderFeatureCaptureFrame() const;

constexpr int32_t& __cordl_internal_get__lastRenderFeatureCaptureFrame() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__materialInstance() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__materialInstance() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__resolvedCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__resolvedCamera() ;

constexpr bool const& __cordl_internal_get__stereoModeDetected() const;

constexpr bool& __cordl_internal_get__stereoModeDetected() ;

constexpr bool const& __cordl_internal_get__useSRP() const;

constexpr bool& __cordl_internal_get__useSRP() ;

constexpr bool const& __cordl_internal_get__useTextureArray() const;

constexpr bool& __cordl_internal_get__useTextureArray() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__xrCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__xrCamera() ;

constexpr void __cordl_internal_set__ActiveTargetTexture_k__BackingField(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__IsActive_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__blitMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__cachedCropMode(::Liv::Lck::HeadsetCropMode  value) ;

constexpr void __cordl_internal_set__cachedDstH(int32_t  value) ;

constexpr void __cordl_internal_set__cachedDstW(int32_t  value) ;

constexpr void __cordl_internal_set__cachedSrcH(int32_t  value) ;

constexpr void __cordl_internal_set__cachedSrcW(int32_t  value) ;

constexpr void __cordl_internal_set__cameraId(::StringW  value) ;

constexpr void __cordl_internal_set__captureInitialized(bool  value) ;

constexpr void __cordl_internal_set__cmd(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set__cropMode(::Liv::Lck::HeadsetCropMode  value) ;

constexpr void __cordl_internal_set__eye(::Liv::Lck::EyeSelection  value) ;

constexpr void __cordl_internal_set__flipY(bool  value) ;

constexpr void __cordl_internal_set__intermediateRT(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__isMultiPass(bool  value) ;

constexpr void __cordl_internal_set__lastRenderFeatureCaptureFrame(int32_t  value) ;

constexpr void __cordl_internal_set__materialInstance(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__resolvedCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__stereoModeDetected(bool  value) ;

constexpr void __cordl_internal_set__useSRP(bool  value) ;

constexpr void __cordl_internal_set__useTextureArray(bool  value) ;

constexpr void __cordl_internal_set__xrCamera(::UnityW<::UnityEngine::Camera>  value) ;

/// @brief Method .ctor, addr 0x9ce31a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_FlipYId() ;

static inline int32_t getStaticF_ScaleOffsetId() ;

static inline int32_t getStaticF_SliceIndexId() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::Liv::Lck::LckHeadsetCamera>>* getStaticF__activeInstances() ;

/// [CompilerGenerated]
/// @brief Method get_ActiveTargetTexture, addr 0x9ce1a68, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_ActiveTargetTexture() ;

/// @brief Method get_CameraId, addr 0x9ce195c, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_CameraId() ;

/// @brief Method get_CropMode, addr 0x9ce1a3c, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::HeadsetCropMode get_CropMode() ;

/// @brief Method get_Eye, addr 0x9ce1964, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::EyeSelection get_Eye() ;

/// [CompilerGenerated]
/// @brief Method get_IsActive, addr 0x9ce1a58, size 0x8, virtual false, abstract: false, final false
inline bool get_IsActive() ;

/// @brief Method get_MaterialInstance, addr 0x9ce2c60, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_MaterialInstance() ;

/// @brief Method get_UseTextureArrayBlit, addr 0x9ce2c68, size 0x28, virtual false, abstract: false, final false
inline bool get_UseTextureArrayBlit() ;

/// @brief Convert to "::Liv::Lck::ILckCamera"
constexpr ::Liv::Lck::ILckCamera* i___Liv__Lck__ILckCamera() noexcept;

static inline void setStaticF_FlipYId(int32_t  value) ;

static inline void setStaticF_ScaleOffsetId(int32_t  value) ;

static inline void setStaticF_SliceIndexId(int32_t  value) ;

static inline void setStaticF__activeInstances(::System::Collections::Generic::List_1<::UnityW<::Liv::Lck::LckHeadsetCamera>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ActiveTargetTexture, addr 0x9ce1a70, size 0x8, virtual false, abstract: false, final false
inline void set_ActiveTargetTexture(::UnityEngine::RenderTexture*  value) ;

/// @brief Method set_CropMode, addr 0x9ce1a44, size 0xc, virtual false, abstract: false, final false
inline void set_CropMode(::Liv::Lck::HeadsetCropMode  value) ;

/// @brief Method set_Eye, addr 0x9ce196c, size 0xd0, virtual false, abstract: false, final false
inline void set_Eye(::Liv::Lck::EyeSelection  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsActive, addr 0x9ce1a60, size 0x8, virtual false, abstract: false, final false
inline void set_IsActive(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckHeadsetCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckHeadsetCamera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckHeadsetCamera(LckHeadsetCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckHeadsetCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckHeadsetCamera(LckHeadsetCamera const& ) = delete;

/// @brief Field CmdBufferName offset 0xffffffff size 0x8
static constexpr ::ConstString  CmdBufferName{u"LCK Headset Capture"};

/// @brief Field LegacyBlitPassIndex offset 0xffffffff size 0x4
static constexpr int32_t  LegacyBlitPassIndex{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24732};

/// [SerializeField]
/// @brief Field _cameraId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____cameraId;

/// [SerializeField]
/// @brief Field _xrCamera, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____xrCamera;

/// [SerializeField]
/// @brief Field _eye, offset: 0x30, size: 0x4, def value: None
 ::Liv::Lck::EyeSelection  ____eye;

/// [SerializeField]
/// @brief Field _cropMode, offset: 0x34, size: 0x4, def value: None
 ::Liv::Lck::HeadsetCropMode  ____cropMode;

/// [SerializeField]
/// @brief Field _blitMaterial, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____blitMaterial;

/// [CompilerGenerated]
/// @brief Field <IsActive>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____IsActive_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ActiveTargetTexture>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____ActiveTargetTexture_k__BackingField;

/// @brief Field _intermediateRT, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____intermediateRT;

/// @brief Field _useTextureArray, offset: 0x58, size: 0x1, def value: None
 bool  ____useTextureArray;

/// @brief Field _useSRP, offset: 0x59, size: 0x1, def value: None
 bool  ____useSRP;

/// @brief Field _flipY, offset: 0x5a, size: 0x1, def value: None
 bool  ____flipY;

/// @brief Field _isMultiPass, offset: 0x5b, size: 0x1, def value: None
 bool  ____isMultiPass;

/// @brief Field _stereoModeDetected, offset: 0x5c, size: 0x1, def value: None
 bool  ____stereoModeDetected;

/// @brief Field _captureInitialized, offset: 0x5d, size: 0x1, def value: None
 bool  ____captureInitialized;

/// @brief Field _resolvedCamera, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____resolvedCamera;

/// @brief Field _lastRenderFeatureCaptureFrame, offset: 0x68, size: 0x4, def value: None
 int32_t  ____lastRenderFeatureCaptureFrame;

/// @brief Field _cmd, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ____cmd;

/// @brief Field _materialInstance, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____materialInstance;

/// @brief Field _cachedSrcW, offset: 0x80, size: 0x4, def value: None
 int32_t  ____cachedSrcW;

/// @brief Field _cachedSrcH, offset: 0x84, size: 0x4, def value: None
 int32_t  ____cachedSrcH;

/// @brief Field _cachedDstW, offset: 0x88, size: 0x4, def value: None
 int32_t  ____cachedDstW;

/// @brief Field _cachedDstH, offset: 0x8c, size: 0x4, def value: None
 int32_t  ____cachedDstH;

/// @brief Field _cachedCropMode, offset: 0x90, size: 0x4, def value: None
 ::Liv::Lck::HeadsetCropMode  ____cachedCropMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____cameraId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____xrCamera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____eye) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____cropMode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____blitMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____IsActive_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____ActiveTargetTexture_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____intermediateRT) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____useTextureArray) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____useSRP) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____flipY) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____isMultiPass) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____stereoModeDetected) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____captureInitialized) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____resolvedCamera) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____lastRenderFeatureCaptureFrame) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____cmd) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____materialInstance) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____cachedSrcW) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____cachedSrcH) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____cachedDstW) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____cachedDstH) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHeadsetCamera, ____cachedCropMode) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckHeadsetCamera) == 0x98, "Size mismatch!");

} // namespace end def Liv::Lck
