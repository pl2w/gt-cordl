#pragma once
// IWYU pragma private; include "UnityEngine/Camera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Camera)
namespace GlobalNamespace {
struct Camera_GateFitMode;
}
namespace GlobalNamespace {
struct Camera_MonoOrStereoscopicEye;
}
namespace GlobalNamespace {
struct Camera_SceneViewFilterMode;
}
namespace GlobalNamespace {
struct Camera_StereoscopicEye;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct OpaqueSortMode;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine {
struct CameraClearFlags;
}
namespace UnityEngine {
struct CameraType;
}
namespace UnityEngine {
class Camera_CameraCallback;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct DepthTextureMode;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct RenderingPath;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct StereoTargetEyeMask;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Camera_CameraCallback;
}
// Write type traits
MARK_REF_T(::UnityEngine::Camera*);
MARK_REF_T(::UnityEngine::Camera_CameraCallback*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Camera*, "UnityEngine", "Camera");
DEFINE_IL2CPP_CLASS(::UnityEngine::Camera_CameraCallback*, "UnityEngine", "Camera/CameraCallback");
// [RequireComponent(typeof(UnityEngine.Transform))]
// [NativeHeader("Runtime/GfxDevice/GfxDeviceTypes.h")]
// [UsedByNativeCode]
// [NativeHeader("Runtime/Camera/RenderManager.h")]
// [NativeHeader("Runtime/Graphics/RenderTexture.h")]
// [NativeHeader("Runtime/Graphics/CommandBuffer/RenderingCommandBuffer.h")]
// [NativeHeader("Runtime/Misc/GameObjectUtility.h")]
// [NativeHeader("Runtime/Camera/Camera.h")]
// [NativeHeader("Runtime/Shaders/Shader.h")]
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Camera
class CORDL_TYPE Camera : public ::UnityEngine::Behaviour {
public:
// Declarations
using GateFitMode = ::GlobalNamespace::Camera_GateFitMode;

using MonoOrStereoscopicEye = ::GlobalNamespace::Camera_MonoOrStereoscopicEye;

using SceneViewFilterMode = ::GlobalNamespace::Camera_SceneViewFilterMode;

using StereoscopicEye = ::GlobalNamespace::Camera_StereoscopicEye;

using CameraCallback = ::UnityEngine::Camera_CameraCallback;

 __declspec(property(get=get_allowDynamicResolution)) bool  allowDynamicResolution;

 __declspec(property(get=get_allowHDR, put=set_allowHDR)) bool  allowHDR;

 __declspec(property(get=get_allowMSAA, put=set_allowMSAA)) bool  allowMSAA;

 __declspec(property(get=get_anamorphism, put=set_anamorphism)) float_t  anamorphism;

 __declspec(property(get=get_aperture, put=set_aperture)) float_t  aperture;

 __declspec(property(get=get_aspect, put=set_aspect)) float_t  aspect;

 __declspec(property(get=get_backgroundColor, put=set_backgroundColor)) ::UnityEngine::Color  backgroundColor;

 __declspec(property(get=get_barrelClipping, put=set_barrelClipping)) float_t  barrelClipping;

 __declspec(property(get=get_bladeCount, put=set_bladeCount)) int32_t  bladeCount;

 __declspec(property(get=get_cameraToWorldMatrix)) ::UnityEngine::Matrix4x4  cameraToWorldMatrix;

 __declspec(property(get=get_cameraType)) ::UnityEngine::CameraType  cameraType;

 __declspec(property(get=get_clearFlags, put=set_clearFlags)) ::UnityEngine::CameraClearFlags  clearFlags;

 __declspec(property(get=get_cullingMask, put=set_cullingMask)) int32_t  cullingMask;

 __declspec(property(get=get_curvature, put=set_curvature)) ::UnityEngine::Vector2  curvature;

 __declspec(property(get=get_depth, put=set_depth)) float_t  depth;

 __declspec(property(get=get_depthTextureMode, put=set_depthTextureMode)) ::UnityEngine::DepthTextureMode  depthTextureMode;

 __declspec(property(get=get_eventMask)) int32_t  eventMask;

/// @brief [NativeProperty("Far")]
 __declspec(property(get=get_farClipPlane, put=set_farClipPlane)) float_t  farClipPlane;

/// @brief [NativeProperty("VerticalFieldOfView")]
 __declspec(property(get=get_fieldOfView, put=set_fieldOfView)) float_t  fieldOfView;

 __declspec(property(get=get_focalLength, put=set_focalLength)) float_t  focalLength;

 __declspec(property(get=get_focusDistance, put=set_focusDistance)) float_t  focusDistance;

/// @brief [NativeProperty("ForceIntoRT")]
 __declspec(property(put=set_forceIntoRenderTexture)) bool  forceIntoRenderTexture;

 __declspec(property(get=get_gateFit, put=set_gateFit)) ::GlobalNamespace::Camera_GateFitMode  gateFit;

 __declspec(property(get=get_iso, put=set_iso)) int32_t  iso;

 __declspec(property(get=get_lensShift, put=set_lensShift)) ::UnityEngine::Vector2  lensShift;

/// @brief Field m_NonSerializedVersion, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NonSerializedVersion, put=__cordl_internal_set_m_NonSerializedVersion)) uint32_t  m_NonSerializedVersion;

/// @brief [NativeProperty("Near")]
 __declspec(property(get=get_nearClipPlane, put=set_nearClipPlane)) float_t  nearClipPlane;

 __declspec(property(get=get_nonJitteredProjectionMatrix)) ::UnityEngine::Matrix4x4  nonJitteredProjectionMatrix;

/// @brief Field onPostRender, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onPostRender, put=setStaticF_onPostRender)) ::UnityEngine::Camera_CameraCallback*  onPostRender;

/// @brief Field onPreCull, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onPreCull, put=setStaticF_onPreCull)) ::UnityEngine::Camera_CameraCallback*  onPreCull;

/// @brief Field onPreRender, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onPreRender, put=setStaticF_onPreRender)) ::UnityEngine::Camera_CameraCallback*  onPreRender;

 __declspec(property(get=get_opaqueSortMode)) ::UnityEngine::Rendering::OpaqueSortMode  opaqueSortMode;

 __declspec(property(get=get_orthographic, put=set_orthographic)) bool  orthographic;

 __declspec(property(get=get_orthographicSize, put=set_orthographicSize)) float_t  orthographicSize;

 __declspec(property(get=get_pixelHeight)) int32_t  pixelHeight;

/// @brief [NativeProperty("ScreenViewportRect")]
 __declspec(property(get=get_pixelRect, put=set_pixelRect)) ::UnityEngine::Rect  pixelRect;

 __declspec(property(get=get_pixelWidth)) int32_t  pixelWidth;

 __declspec(property(get=get_projectionMatrix, put=set_projectionMatrix)) ::UnityEngine::Matrix4x4  projectionMatrix;

/// @brief [NativeProperty("NormalizedViewportRect")]
 __declspec(property(get=get_rect, put=set_rect)) ::UnityEngine::Rect  rect;

 __declspec(property(put=set_renderingPath)) ::UnityEngine::RenderingPath  renderingPath;

 __declspec(property(get=get_scaledPixelHeight)) int32_t  scaledPixelHeight;

 __declspec(property(get=get_scaledPixelWidth)) int32_t  scaledPixelWidth;

/// @brief [NativeConditional("UNITY_EDITOR")]
 __declspec(property(get=get_sceneViewFilterMode)) ::GlobalNamespace::Camera_SceneViewFilterMode  sceneViewFilterMode;

 __declspec(property(get=get_sensorSize, put=set_sensorSize)) ::UnityEngine::Vector2  sensorSize;

 __declspec(property(get=get_shutterSpeed, put=set_shutterSpeed)) float_t  shutterSpeed;

 __declspec(property(get=get_stereoActiveEye)) ::GlobalNamespace::Camera_MonoOrStereoscopicEye  stereoActiveEye;

 __declspec(property(get=get_stereoEnabled)) bool  stereoEnabled;

 __declspec(property(get=get_stereoTargetEye, put=set_stereoTargetEye)) ::UnityEngine::StereoTargetEyeMask  stereoTargetEye;

/// @brief [NativeProperty("StereoTargetEye")]
 __declspec(property(get=get_stereoTargetEyeInternal, put=set_stereoTargetEyeInternal)) ::UnityEngine::StereoTargetEyeMask  stereoTargetEyeInternal;

 __declspec(property(get=get_targetDisplay)) int32_t  targetDisplay;

 __declspec(property(get=get_targetTexture, put=set_targetTexture)) ::UnityW<::UnityEngine::RenderTexture>  targetTexture;

 __declspec(property(get=get_usePhysicalProperties, put=set_usePhysicalProperties)) bool  usePhysicalProperties;

 __declspec(property(get=get_worldToCameraMatrix, put=set_worldToCameraMatrix)) ::UnityEngine::Matrix4x4  worldToCameraMatrix;

/// [RequiredByNativeCode]
/// @brief Method BumpNonSerializedVersion, addr 0xb56e4e4, size 0x1c, virtual false, abstract: false, final false
static inline void BumpNonSerializedVersion(::UnityEngine::Camera*  cam) ;

/// [FreeFunction("CameraScripting::CopyFrom", HasExplicitThis = true)]
/// @brief Method CopyFrom, addr 0xb56e2a8, size 0xb4, virtual false, abstract: false, final false
inline void CopyFrom(::UnityEngine::Camera*  other) ;

/// @brief Method CopyFrom_Injected, addr 0xb56e35c, size 0x44, virtual false, abstract: false, final false
static inline void CopyFrom_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  other) ;

/// [NativeName("FieldOfViewToFocalLength_Safe")]
/// @brief Method FieldOfViewToFocalLength, addr 0xb56d1d8, size 0x40, virtual false, abstract: false, final false
static inline float_t FieldOfViewToFocalLength(float_t  fieldOfView, float_t  sensorSize) ;

/// [RequiredByNativeCode]
/// @brief Method FireOnPostRender, addr 0xb56e478, size 0x6c, virtual false, abstract: false, final false
static inline void FireOnPostRender(::UnityEngine::Camera*  cam) ;

/// [RequiredByNativeCode]
/// @brief Method FireOnPreCull, addr 0xb56e3a0, size 0x6c, virtual false, abstract: false, final false
static inline void FireOnPreCull(::UnityEngine::Camera*  cam) ;

/// [RequiredByNativeCode]
/// @brief Method FireOnPreRender, addr 0xb56e40c, size 0x6c, virtual false, abstract: false, final false
static inline void FireOnPreRender(::UnityEngine::Camera*  cam) ;

/// [NativeName("FocalLengthToFieldOfView_Safe")]
/// @brief Method FocalLengthToFieldOfView, addr 0xb56d198, size 0x40, virtual false, abstract: false, final false
static inline float_t FocalLengthToFieldOfView(float_t  focalLength, float_t  sensorSize) ;

/// @brief Method GetAllCameras, addr 0xb56dda0, size 0xb4, virtual false, abstract: false, final false
static inline int32_t GetAllCameras(::ArrayW<::UnityEngine::Camera*>  cameras) ;

/// [FreeFunction("CameraScripting::GetAllCamerasCount")]
/// @brief Method GetAllCamerasCount, addr 0xb56dc24, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetAllCamerasCount() ;

/// [FreeFunction("CameraScripting::GetAllCameras")]
/// @brief Method GetAllCamerasImpl, addr 0xb56dc4c, size 0x78, virtual false, abstract: false, final false
static inline int32_t GetAllCamerasImpl(/* [NotNull] */ ::by_ref<::ArrayW<::UnityEngine::Camera*>>  cam) ;

/// @brief Method GetAllCamerasImpl_Injected, addr 0xb56dcc4, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetAllCamerasImpl_Injected(::by_ref<::ArrayW<::UnityEngine::Camera*>>  cam) ;

/// [NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderPipeline.bindings.h")]
/// [FreeFunction("ScriptableRenderPipeline_Bindings::GetCullingParameters_Internal")]
/// @brief Method GetCullingParameters_Internal, addr 0xb56e508, size 0xa4, virtual false, abstract: false, final false
static inline bool GetCullingParameters_Internal(::UnityEngine::Camera*  camera, bool  stereoAware, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>  cullingParameters, int32_t  managedCullingParametersSize) ;

/// @brief Method GetCullingParameters_Internal_Injected, addr 0xb56e5ac, size 0x5c, virtual false, abstract: false, final false
static inline bool GetCullingParameters_Internal_Injected(::System::IntPtr  camera, bool  stereoAware, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>  cullingParameters, int32_t  managedCullingParametersSize) ;

/// [NativeConditional("UNITY_EDITOR")]
/// @brief Method GetFilterMode, addr 0xb56de54, size 0x78, virtual false, abstract: false, final false
inline int32_t GetFilterMode() ;

/// @brief Method GetFilterMode_Injected, addr 0xb56decc, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetFilterMode_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction("CameraScripting::GetStereoProjectionMatrix", HasExplicitThis = true)]
/// @brief Method GetStereoProjectionMatrix, addr 0xb56d950, size 0xb8, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetStereoProjectionMatrix(::GlobalNamespace::Camera_StereoscopicEye  eye) ;

/// @brief Method GetStereoProjectionMatrix_Injected, addr 0xb56da08, size 0x54, virtual false, abstract: false, final false
static inline void GetStereoProjectionMatrix_Injected(::System::IntPtr  _unity_self, ::GlobalNamespace::Camera_StereoscopicEye  eye, ::by_ref<::UnityEngine::Matrix4x4>  ret) ;

/// [FreeFunction("CameraScripting::GetStereoViewMatrix", HasExplicitThis = true)]
/// @brief Method GetStereoViewMatrix, addr 0xb56d844, size 0xb8, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetStereoViewMatrix(::GlobalNamespace::Camera_StereoscopicEye  eye) ;

/// @brief Method GetStereoViewMatrix_Injected, addr 0xb56d8fc, size 0x54, virtual false, abstract: false, final false
static inline void GetStereoViewMatrix_Injected(::System::IntPtr  _unity_self, ::GlobalNamespace::Camera_StereoscopicEye  eye, ::by_ref<::UnityEngine::Matrix4x4>  ret) ;

static inline ::UnityEngine::Camera* New_ctor() ;

/// [FreeFunction("CameraScripting::Render", HasExplicitThis = true)]
/// @brief Method Render, addr 0xb56df0c, size 0x78, virtual false, abstract: false, final false
inline void Render() ;

/// [FreeFunction("CameraScripting::RenderWithShader", HasExplicitThis = true)]
/// @brief Method RenderWithShader, addr 0xb56dfc0, size 0x1dc, virtual false, abstract: false, final false
inline void RenderWithShader(::UnityEngine::Shader*  shader, ::StringW  replacementTag) ;

/// @brief Method RenderWithShader_Injected, addr 0xb56e19c, size 0x54, virtual false, abstract: false, final false
static inline void RenderWithShader_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  shader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  replacementTag) ;

/// @brief Method Render_Injected, addr 0xb56df84, size 0x3c, virtual false, abstract: false, final false
static inline void Render_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method ResetProjectionMatrix, addr 0xb56cb44, size 0x78, virtual false, abstract: false, final false
inline void ResetProjectionMatrix() ;

/// @brief Method ResetProjectionMatrix_Injected, addr 0xb56cbbc, size 0x3c, virtual false, abstract: false, final false
static inline void ResetProjectionMatrix_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method ResetWorldToCameraMatrix, addr 0xb56ca90, size 0x78, virtual false, abstract: false, final false
inline void ResetWorldToCameraMatrix() ;

/// @brief Method ResetWorldToCameraMatrix_Injected, addr 0xb56cb08, size 0x3c, virtual false, abstract: false, final false
static inline void ResetWorldToCameraMatrix_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method ScreenPointToRay, addr 0xb56d020, size 0xb8, virtual false, abstract: false, final false
inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector2  pos, ::GlobalNamespace::Camera_MonoOrStereoscopicEye  eye) ;

/// @brief Method ScreenPointToRay, addr 0xb56d164, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector3  pos) ;

/// @brief Method ScreenPointToRay, addr 0xb56d134, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector3  pos, ::GlobalNamespace::Camera_MonoOrStereoscopicEye  eye) ;

/// @brief Method ScreenPointToRay_Injected, addr 0xb56d0d8, size 0x5c, virtual false, abstract: false, final false
static inline void ScreenPointToRay_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  pos, ::GlobalNamespace::Camera_MonoOrStereoscopicEye  eye, ::by_ref<::UnityEngine::Ray>  ret) ;

/// @brief Method ScreenToViewportPoint, addr 0xb56cf28, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ScreenToViewportPoint(::UnityEngine::Vector3  position) ;

/// @brief Method ScreenToViewportPoint_Injected, addr 0xb56cfcc, size 0x54, virtual false, abstract: false, final false
static inline void ScreenToViewportPoint_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method ScreenToWorldPoint, addr 0xb56cf20, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ScreenToWorldPoint(::UnityEngine::Vector3  position) ;

/// @brief Method ScreenToWorldPoint, addr 0xb56ce08, size 0xac, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ScreenToWorldPoint(::UnityEngine::Vector3  position, ::GlobalNamespace::Camera_MonoOrStereoscopicEye  eye) ;

/// @brief Method ScreenToWorldPoint_Injected, addr 0xb56ceb4, size 0x5c, virtual false, abstract: false, final false
static inline void ScreenToWorldPoint_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  position, ::GlobalNamespace::Camera_MonoOrStereoscopicEye  eye, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method SetStereoProjectionMatrix, addr 0xb56da5c, size 0x90, virtual false, abstract: false, final false
inline void SetStereoProjectionMatrix(::GlobalNamespace::Camera_StereoscopicEye  eye, ::UnityEngine::Matrix4x4  matrix) ;

/// @brief Method SetStereoProjectionMatrix_Injected, addr 0xb56daec, size 0x54, virtual false, abstract: false, final false
static inline void SetStereoProjectionMatrix_Injected(::System::IntPtr  _unity_self, ::GlobalNamespace::Camera_StereoscopicEye  eye, ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method SetStereoViewMatrix, addr 0xb56db40, size 0x90, virtual false, abstract: false, final false
inline void SetStereoViewMatrix(::GlobalNamespace::Camera_StereoscopicEye  eye, ::UnityEngine::Matrix4x4  matrix) ;

/// @brief Method SetStereoViewMatrix_Injected, addr 0xb56dbd0, size 0x54, virtual false, abstract: false, final false
static inline void SetStereoViewMatrix_Injected(::System::IntPtr  _unity_self, ::GlobalNamespace::Camera_StereoscopicEye  eye, ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// [FreeFunction("CameraScripting::SetupCurrent")]
/// @brief Method SetupCurrent, addr 0xb56e1f0, size 0x7c, virtual false, abstract: false, final false
static inline void SetupCurrent(::UnityEngine::Camera*  cur) ;

/// @brief Method SetupCurrent_Injected, addr 0xb56e26c, size 0x3c, virtual false, abstract: false, final false
static inline void SetupCurrent_Injected(::System::IntPtr  cur) ;

/// @brief Method TryGetCullingParameters, addr 0xb56e500, size 0x8, virtual false, abstract: false, final false
inline bool TryGetCullingParameters(bool  stereoAware, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>  cullingParameters) ;

/// @brief Method VerticalToHorizontalFieldOfView, addr 0xb56d218, size 0x40, virtual false, abstract: false, final false
static inline float_t VerticalToHorizontalFieldOfView(float_t  verticalFieldOfView, float_t  aspectRatio) ;

/// @brief Method WorldToScreenPoint, addr 0xb56cf10, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WorldToScreenPoint(::UnityEngine::Vector3  position) ;

/// @brief Method WorldToScreenPoint, addr 0xb56cbf8, size 0xac, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WorldToScreenPoint(::UnityEngine::Vector3  position, ::GlobalNamespace::Camera_MonoOrStereoscopicEye  eye) ;

/// @brief Method WorldToScreenPoint_Injected, addr 0xb56cca4, size 0x5c, virtual false, abstract: false, final false
static inline void WorldToScreenPoint_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  position, ::GlobalNamespace::Camera_MonoOrStereoscopicEye  eye, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method WorldToViewportPoint, addr 0xb56cf18, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WorldToViewportPoint(::UnityEngine::Vector3  position) ;

/// @brief Method WorldToViewportPoint, addr 0xb56cd00, size 0xac, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WorldToViewportPoint(::UnityEngine::Vector3  position, ::GlobalNamespace::Camera_MonoOrStereoscopicEye  eye) ;

/// @brief Method WorldToViewportPoint_Injected, addr 0xb56cdac, size 0x5c, virtual false, abstract: false, final false
static inline void WorldToViewportPoint_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  position, ::GlobalNamespace::Camera_MonoOrStereoscopicEye  eye, ::by_ref<::UnityEngine::Vector3>  ret) ;

constexpr uint32_t const& __cordl_internal_get_m_NonSerializedVersion() const;

constexpr uint32_t& __cordl_internal_get_m_NonSerializedVersion() ;

constexpr void __cordl_internal_set_m_NonSerializedVersion(uint32_t  value) ;

/// @brief Method .ctor, addr 0xb5690dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Camera_CameraCallback* getStaticF_onPostRender() ;

static inline ::UnityEngine::Camera_CameraCallback* getStaticF_onPreCull() ;

static inline ::UnityEngine::Camera_CameraCallback* getStaticF_onPreRender() ;

/// @brief Method get_allCameras, addr 0xb56dd28, size 0x78, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Camera>> get_allCameras() ;

/// @brief Method get_allCamerasCount, addr 0xb56dd00, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_allCamerasCount() ;

/// @brief Method get_allowDynamicResolution, addr 0xb569930, size 0x78, virtual false, abstract: false, final false
inline bool get_allowDynamicResolution() ;

/// @brief Method get_allowDynamicResolution_Injected, addr 0xb5699a8, size 0x3c, virtual false, abstract: false, final false
static inline bool get_allowDynamicResolution_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_allowHDR, addr 0xb569640, size 0x78, virtual false, abstract: false, final false
inline bool get_allowHDR() ;

/// @brief Method get_allowHDR_Injected, addr 0xb5696b8, size 0x3c, virtual false, abstract: false, final false
static inline bool get_allowHDR_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_allowMSAA, addr 0xb5697b8, size 0x78, virtual false, abstract: false, final false
inline bool get_allowMSAA() ;

/// @brief Method get_allowMSAA_Injected, addr 0xb569830, size 0x3c, virtual false, abstract: false, final false
static inline bool get_allowMSAA_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_anamorphism, addr 0xb56b68c, size 0x78, virtual false, abstract: false, final false
inline float_t get_anamorphism() ;

/// @brief Method get_anamorphism_Injected, addr 0xb56b704, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_anamorphism_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_aperture, addr 0xb56ad60, size 0x78, virtual false, abstract: false, final false
inline float_t get_aperture() ;

/// @brief Method get_aperture_Injected, addr 0xb56add8, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_aperture_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_aspect, addr 0xb569fe4, size 0x78, virtual false, abstract: false, final false
inline float_t get_aspect() ;

/// @brief Method get_aspect_Injected, addr 0xb56a05c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_aspect_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_backgroundColor, addr 0xb56a44c, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_backgroundColor() ;

/// @brief Method get_backgroundColor_Injected, addr 0xb56a4e0, size 0x44, virtual false, abstract: false, final false
static inline void get_backgroundColor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_barrelClipping, addr 0xb56b504, size 0x78, virtual false, abstract: false, final false
inline float_t get_barrelClipping() ;

/// @brief Method get_barrelClipping_Injected, addr 0xb56b57c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_barrelClipping_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_bladeCount, addr 0xb56b1f8, size 0x78, virtual false, abstract: false, final false
inline int32_t get_bladeCount() ;

/// @brief Method get_bladeCount_Injected, addr 0xb56b270, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_bladeCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_cameraToWorldMatrix, addr 0xb56c558, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_cameraToWorldMatrix() ;

/// @brief Method get_cameraToWorldMatrix_Injected, addr 0xb56c600, size 0x44, virtual false, abstract: false, final false
static inline void get_cameraToWorldMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method get_cameraType, addr 0xb56a398, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::CameraType get_cameraType() ;

/// @brief Method get_cameraType_Injected, addr 0xb56a410, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::CameraType get_cameraType_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_clearFlags, addr 0xb56a5f8, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::CameraClearFlags get_clearFlags() ;

/// @brief Method get_clearFlags_Injected, addr 0xb56a670, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::CameraClearFlags get_clearFlags_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_cullingMask, addr 0xb56a16c, size 0x78, virtual false, abstract: false, final false
inline int32_t get_cullingMask() ;

/// @brief Method get_cullingMask_Injected, addr 0xb56a1e4, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_cullingMask_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_current, addr 0xb56d2e0, size 0x4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Camera> get_current() ;

/// [FreeFunction("GetCurrentCameraPPtr")]
/// @brief Method get_currentInternal, addr 0xb56d2e4, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Camera> get_currentInternal() ;

/// @brief Method get_currentInternal_Injected, addr 0xb56d344, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr get_currentInternal_Injected() ;

/// @brief Method get_curvature, addr 0xb56b370, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_curvature() ;

/// @brief Method get_curvature_Injected, addr 0xb56b3f8, size 0x44, virtual false, abstract: false, final false
static inline void get_curvature_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_depth, addr 0xb569e5c, size 0x78, virtual false, abstract: false, final false
inline float_t get_depth() ;

/// @brief Method get_depthTextureMode, addr 0xb56a770, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::DepthTextureMode get_depthTextureMode() ;

/// @brief Method get_depthTextureMode_Injected, addr 0xb56a7e8, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::DepthTextureMode get_depthTextureMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_depth_Injected, addr 0xb569ed4, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_depth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_eventMask, addr 0xb56a2e4, size 0x78, virtual false, abstract: false, final false
inline int32_t get_eventMask() ;

/// @brief Method get_eventMask_Injected, addr 0xb56a35c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_eventMask_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_farClipPlane, addr 0xb56926c, size 0x78, virtual false, abstract: false, final false
inline float_t get_farClipPlane() ;

/// @brief Method get_farClipPlane_Injected, addr 0xb5692e4, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_farClipPlane_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_fieldOfView, addr 0xb5693f4, size 0x78, virtual false, abstract: false, final false
inline float_t get_fieldOfView() ;

/// @brief Method get_fieldOfView_Injected, addr 0xb56946c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_fieldOfView_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_focalLength, addr 0xb56b070, size 0x78, virtual false, abstract: false, final false
inline float_t get_focalLength() ;

/// @brief Method get_focalLength_Injected, addr 0xb56b0e8, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_focalLength_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_focusDistance, addr 0xb56aee8, size 0x78, virtual false, abstract: false, final false
inline float_t get_focusDistance() ;

/// @brief Method get_focusDistance_Injected, addr 0xb56af60, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_focusDistance_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_gateFit, addr 0xb56bb3c, size 0x78, virtual false, abstract: false, final false
inline ::GlobalNamespace::Camera_GateFitMode get_gateFit() ;

/// @brief Method get_gateFit_Injected, addr 0xb56bbb4, size 0x3c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Camera_GateFitMode get_gateFit_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_iso, addr 0xb56aa60, size 0x78, virtual false, abstract: false, final false
inline int32_t get_iso() ;

/// @brief Method get_iso_Injected, addr 0xb56aad8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_iso_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_lensShift, addr 0xb56b9a8, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_lensShift() ;

/// @brief Method get_lensShift_Injected, addr 0xb56ba30, size 0x44, virtual false, abstract: false, final false
static inline void get_lensShift_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// [FreeFunction("FindMainCamera")]
/// @brief Method get_main, addr 0xb56d258, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Camera> get_main() ;

/// @brief Method get_main_Injected, addr 0xb56d2b8, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr get_main_Injected() ;

/// @brief Method get_nearClipPlane, addr 0xb5690e4, size 0x78, virtual false, abstract: false, final false
inline float_t get_nearClipPlane() ;

/// @brief Method get_nearClipPlane_Injected, addr 0xb56915c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_nearClipPlane_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_nonJitteredProjectionMatrix, addr 0xb56c9a4, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_nonJitteredProjectionMatrix() ;

/// @brief Method get_nonJitteredProjectionMatrix_Injected, addr 0xb56ca4c, size 0x44, virtual false, abstract: false, final false
static inline void get_nonJitteredProjectionMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method get_opaqueSortMode, addr 0xb569da8, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::OpaqueSortMode get_opaqueSortMode() ;

/// @brief Method get_opaqueSortMode_Injected, addr 0xb569e20, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::OpaqueSortMode get_opaqueSortMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_orthographic, addr 0xb569c30, size 0x78, virtual false, abstract: false, final false
inline bool get_orthographic() ;

/// @brief Method get_orthographicSize, addr 0xb569aa8, size 0x78, virtual false, abstract: false, final false
inline float_t get_orthographicSize() ;

/// @brief Method get_orthographicSize_Injected, addr 0xb569b20, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_orthographicSize_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_orthographic_Injected, addr 0xb569ca8, size 0x3c, virtual false, abstract: false, final false
static inline bool get_orthographic_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction("CameraScripting::GetPixelHeight", HasExplicitThis = true)]
/// @brief Method get_pixelHeight, addr 0xb56c0c0, size 0x78, virtual false, abstract: false, final false
inline int32_t get_pixelHeight() ;

/// @brief Method get_pixelHeight_Injected, addr 0xb56c138, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_pixelHeight_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_pixelRect, addr 0xb56be60, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_pixelRect() ;

/// @brief Method get_pixelRect_Injected, addr 0xb56bef4, size 0x44, virtual false, abstract: false, final false
static inline void get_pixelRect_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  ret) ;

/// [FreeFunction("CameraScripting::GetPixelWidth", HasExplicitThis = true)]
/// @brief Method get_pixelWidth, addr 0xb56c00c, size 0x78, virtual false, abstract: false, final false
inline int32_t get_pixelWidth() ;

/// @brief Method get_pixelWidth_Injected, addr 0xb56c084, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_pixelWidth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_projectionMatrix, addr 0xb56c7f4, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_projectionMatrix() ;

/// @brief Method get_projectionMatrix_Injected, addr 0xb56c89c, size 0x44, virtual false, abstract: false, final false
static inline void get_projectionMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method get_rect, addr 0xb56bcb4, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_rect() ;

/// @brief Method get_rect_Injected, addr 0xb56bd48, size 0x44, virtual false, abstract: false, final false
static inline void get_rect_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  ret) ;

/// [FreeFunction("CameraScripting::GetScaledPixelHeight", HasExplicitThis = true)]
/// @brief Method get_scaledPixelHeight, addr 0xb56c228, size 0x78, virtual false, abstract: false, final false
inline int32_t get_scaledPixelHeight() ;

/// @brief Method get_scaledPixelHeight_Injected, addr 0xb56c2a0, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_scaledPixelHeight_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction("CameraScripting::GetScaledPixelWidth", HasExplicitThis = true)]
/// @brief Method get_scaledPixelWidth, addr 0xb56c174, size 0x78, virtual false, abstract: false, final false
inline int32_t get_scaledPixelWidth() ;

/// @brief Method get_scaledPixelWidth_Injected, addr 0xb56c1ec, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_scaledPixelWidth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_sceneViewFilterMode, addr 0xb56df08, size 0x4, virtual false, abstract: false, final false
inline ::GlobalNamespace::Camera_SceneViewFilterMode get_sceneViewFilterMode() ;

/// @brief Method get_sensorSize, addr 0xb56b814, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_sensorSize() ;

/// @brief Method get_sensorSize_Injected, addr 0xb56b89c, size 0x44, virtual false, abstract: false, final false
static inline void get_sensorSize_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_shutterSpeed, addr 0xb56abd8, size 0x78, virtual false, abstract: false, final false
inline float_t get_shutterSpeed() ;

/// @brief Method get_shutterSpeed_Injected, addr 0xb56ac50, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_shutterSpeed_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction("CameraScripting::GetStereoActiveEye", HasExplicitThis = true)]
/// @brief Method get_stereoActiveEye, addr 0xb56d790, size 0x78, virtual false, abstract: false, final false
inline ::GlobalNamespace::Camera_MonoOrStereoscopicEye get_stereoActiveEye() ;

/// @brief Method get_stereoActiveEye_Injected, addr 0xb56d808, size 0x3c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Camera_MonoOrStereoscopicEye get_stereoActiveEye_Injected(::System::IntPtr  _unity_self) ;

/// [NativeMethod("GetStereoEnabledForBuiltInOrSRP")]
/// @brief Method get_stereoEnabled, addr 0xb56d36c, size 0x78, virtual false, abstract: false, final false
inline bool get_stereoEnabled() ;

/// @brief Method get_stereoEnabled_Injected, addr 0xb56d3e4, size 0x3c, virtual false, abstract: false, final false
static inline bool get_stereoEnabled_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_stereoTargetEye, addr 0xb56d420, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::StereoTargetEyeMask get_stereoTargetEye() ;

/// @brief Method get_stereoTargetEyeInternal, addr 0xb56d424, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::StereoTargetEyeMask get_stereoTargetEyeInternal() ;

/// @brief Method get_stereoTargetEyeInternal_Injected, addr 0xb56d710, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::StereoTargetEyeMask get_stereoTargetEyeInternal_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_targetDisplay, addr 0xb56c4a4, size 0x78, virtual false, abstract: false, final false
inline int32_t get_targetDisplay() ;

/// @brief Method get_targetDisplay_Injected, addr 0xb56c51c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_targetDisplay_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_targetTexture, addr 0xb56c2dc, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_targetTexture() ;

/// @brief Method get_targetTexture_Injected, addr 0xb56c370, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_targetTexture_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_usePhysicalProperties, addr 0xb56a8e8, size 0x78, virtual false, abstract: false, final false
inline bool get_usePhysicalProperties() ;

/// @brief Method get_usePhysicalProperties_Injected, addr 0xb56a960, size 0x3c, virtual false, abstract: false, final false
static inline bool get_usePhysicalProperties_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_worldToCameraMatrix, addr 0xb56c644, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_worldToCameraMatrix() ;

/// @brief Method get_worldToCameraMatrix_Injected, addr 0xb56c6ec, size 0x44, virtual false, abstract: false, final false
static inline void get_worldToCameraMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  ret) ;

static inline void setStaticF_onPostRender(::UnityEngine::Camera_CameraCallback*  value) ;

static inline void setStaticF_onPreCull(::UnityEngine::Camera_CameraCallback*  value) ;

static inline void setStaticF_onPreRender(::UnityEngine::Camera_CameraCallback*  value) ;

/// @brief Method set_allowHDR, addr 0xb5696f4, size 0x80, virtual false, abstract: false, final false
inline void set_allowHDR(bool  value) ;

/// @brief Method set_allowHDR_Injected, addr 0xb569774, size 0x44, virtual false, abstract: false, final false
static inline void set_allowHDR_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_allowMSAA, addr 0xb56986c, size 0x80, virtual false, abstract: false, final false
inline void set_allowMSAA(bool  value) ;

/// @brief Method set_allowMSAA_Injected, addr 0xb5698ec, size 0x44, virtual false, abstract: false, final false
static inline void set_allowMSAA_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_anamorphism, addr 0xb56b740, size 0x88, virtual false, abstract: false, final false
inline void set_anamorphism(float_t  value) ;

/// @brief Method set_anamorphism_Injected, addr 0xb56b7c8, size 0x4c, virtual false, abstract: false, final false
static inline void set_anamorphism_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_aperture, addr 0xb56ae14, size 0x88, virtual false, abstract: false, final false
inline void set_aperture(float_t  value) ;

/// @brief Method set_aperture_Injected, addr 0xb56ae9c, size 0x4c, virtual false, abstract: false, final false
static inline void set_aperture_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_aspect, addr 0xb56a098, size 0x88, virtual false, abstract: false, final false
inline void set_aspect(float_t  value) ;

/// @brief Method set_aspect_Injected, addr 0xb56a120, size 0x4c, virtual false, abstract: false, final false
static inline void set_aspect_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_backgroundColor, addr 0xb56a524, size 0x90, virtual false, abstract: false, final false
inline void set_backgroundColor(::UnityEngine::Color  value) ;

/// @brief Method set_backgroundColor_Injected, addr 0xb56a5b4, size 0x44, virtual false, abstract: false, final false
static inline void set_backgroundColor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_barrelClipping, addr 0xb56b5b8, size 0x88, virtual false, abstract: false, final false
inline void set_barrelClipping(float_t  value) ;

/// @brief Method set_barrelClipping_Injected, addr 0xb56b640, size 0x4c, virtual false, abstract: false, final false
static inline void set_barrelClipping_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_bladeCount, addr 0xb56b2ac, size 0x80, virtual false, abstract: false, final false
inline void set_bladeCount(int32_t  value) ;

/// @brief Method set_bladeCount_Injected, addr 0xb56b32c, size 0x44, virtual false, abstract: false, final false
static inline void set_bladeCount_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_clearFlags, addr 0xb56a6ac, size 0x80, virtual false, abstract: false, final false
inline void set_clearFlags(::UnityEngine::CameraClearFlags  value) ;

/// @brief Method set_clearFlags_Injected, addr 0xb56a72c, size 0x44, virtual false, abstract: false, final false
static inline void set_clearFlags_Injected(::System::IntPtr  _unity_self, ::UnityEngine::CameraClearFlags  value) ;

/// @brief Method set_cullingMask, addr 0xb56a220, size 0x80, virtual false, abstract: false, final false
inline void set_cullingMask(int32_t  value) ;

/// @brief Method set_cullingMask_Injected, addr 0xb56a2a0, size 0x44, virtual false, abstract: false, final false
static inline void set_cullingMask_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_curvature, addr 0xb56b43c, size 0x84, virtual false, abstract: false, final false
inline void set_curvature(::UnityEngine::Vector2  value) ;

/// @brief Method set_curvature_Injected, addr 0xb56b4c0, size 0x44, virtual false, abstract: false, final false
static inline void set_curvature_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_depth, addr 0xb569f10, size 0x88, virtual false, abstract: false, final false
inline void set_depth(float_t  value) ;

/// @brief Method set_depthTextureMode, addr 0xb56a824, size 0x80, virtual false, abstract: false, final false
inline void set_depthTextureMode(::UnityEngine::DepthTextureMode  value) ;

/// @brief Method set_depthTextureMode_Injected, addr 0xb56a8a4, size 0x44, virtual false, abstract: false, final false
static inline void set_depthTextureMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::DepthTextureMode  value) ;

/// @brief Method set_depth_Injected, addr 0xb569f98, size 0x4c, virtual false, abstract: false, final false
static inline void set_depth_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_farClipPlane, addr 0xb569320, size 0x88, virtual false, abstract: false, final false
inline void set_farClipPlane(float_t  value) ;

/// @brief Method set_farClipPlane_Injected, addr 0xb5693a8, size 0x4c, virtual false, abstract: false, final false
static inline void set_farClipPlane_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_fieldOfView, addr 0xb5694a8, size 0x88, virtual false, abstract: false, final false
inline void set_fieldOfView(float_t  value) ;

/// @brief Method set_fieldOfView_Injected, addr 0xb569530, size 0x4c, virtual false, abstract: false, final false
static inline void set_fieldOfView_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_focalLength, addr 0xb56b124, size 0x88, virtual false, abstract: false, final false
inline void set_focalLength(float_t  value) ;

/// @brief Method set_focalLength_Injected, addr 0xb56b1ac, size 0x4c, virtual false, abstract: false, final false
static inline void set_focalLength_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_focusDistance, addr 0xb56af9c, size 0x88, virtual false, abstract: false, final false
inline void set_focusDistance(float_t  value) ;

/// @brief Method set_focusDistance_Injected, addr 0xb56b024, size 0x4c, virtual false, abstract: false, final false
static inline void set_focusDistance_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_forceIntoRenderTexture, addr 0xb5699e4, size 0x80, virtual false, abstract: false, final false
inline void set_forceIntoRenderTexture(bool  value) ;

/// @brief Method set_forceIntoRenderTexture_Injected, addr 0xb569a64, size 0x44, virtual false, abstract: false, final false
static inline void set_forceIntoRenderTexture_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_gateFit, addr 0xb56bbf0, size 0x80, virtual false, abstract: false, final false
inline void set_gateFit(::GlobalNamespace::Camera_GateFitMode  value) ;

/// @brief Method set_gateFit_Injected, addr 0xb56bc70, size 0x44, virtual false, abstract: false, final false
static inline void set_gateFit_Injected(::System::IntPtr  _unity_self, ::GlobalNamespace::Camera_GateFitMode  value) ;

/// @brief Method set_iso, addr 0xb56ab14, size 0x80, virtual false, abstract: false, final false
inline void set_iso(int32_t  value) ;

/// @brief Method set_iso_Injected, addr 0xb56ab94, size 0x44, virtual false, abstract: false, final false
static inline void set_iso_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_lensShift, addr 0xb56ba74, size 0x84, virtual false, abstract: false, final false
inline void set_lensShift(::UnityEngine::Vector2  value) ;

/// @brief Method set_lensShift_Injected, addr 0xb56baf8, size 0x44, virtual false, abstract: false, final false
static inline void set_lensShift_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_nearClipPlane, addr 0xb569198, size 0x88, virtual false, abstract: false, final false
inline void set_nearClipPlane(float_t  value) ;

/// @brief Method set_nearClipPlane_Injected, addr 0xb569220, size 0x4c, virtual false, abstract: false, final false
static inline void set_nearClipPlane_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_orthographic, addr 0xb569ce4, size 0x80, virtual false, abstract: false, final false
inline void set_orthographic(bool  value) ;

/// @brief Method set_orthographicSize, addr 0xb569b5c, size 0x88, virtual false, abstract: false, final false
inline void set_orthographicSize(float_t  value) ;

/// @brief Method set_orthographicSize_Injected, addr 0xb569be4, size 0x4c, virtual false, abstract: false, final false
static inline void set_orthographicSize_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_orthographic_Injected, addr 0xb569d64, size 0x44, virtual false, abstract: false, final false
static inline void set_orthographic_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_pixelRect, addr 0xb56bf38, size 0x90, virtual false, abstract: false, final false
inline void set_pixelRect(::UnityEngine::Rect  value) ;

/// @brief Method set_pixelRect_Injected, addr 0xb56bfc8, size 0x44, virtual false, abstract: false, final false
static inline void set_pixelRect_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  value) ;

/// @brief Method set_projectionMatrix, addr 0xb56c8e0, size 0x80, virtual false, abstract: false, final false
inline void set_projectionMatrix(::UnityEngine::Matrix4x4  value) ;

/// @brief Method set_projectionMatrix_Injected, addr 0xb56c960, size 0x44, virtual false, abstract: false, final false
static inline void set_projectionMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  value) ;

/// @brief Method set_rect, addr 0xb56bd8c, size 0x90, virtual false, abstract: false, final false
inline void set_rect(::UnityEngine::Rect  value) ;

/// @brief Method set_rect_Injected, addr 0xb56be1c, size 0x44, virtual false, abstract: false, final false
static inline void set_rect_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  value) ;

/// @brief Method set_renderingPath, addr 0xb56957c, size 0x80, virtual false, abstract: false, final false
inline void set_renderingPath(::UnityEngine::RenderingPath  value) ;

/// @brief Method set_renderingPath_Injected, addr 0xb5695fc, size 0x44, virtual false, abstract: false, final false
static inline void set_renderingPath_Injected(::System::IntPtr  _unity_self, ::UnityEngine::RenderingPath  value) ;

/// @brief Method set_sensorSize, addr 0xb56b8e0, size 0x84, virtual false, abstract: false, final false
inline void set_sensorSize(::UnityEngine::Vector2  value) ;

/// @brief Method set_sensorSize_Injected, addr 0xb56b964, size 0x44, virtual false, abstract: false, final false
static inline void set_sensorSize_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_shutterSpeed, addr 0xb56ac8c, size 0x88, virtual false, abstract: false, final false
inline void set_shutterSpeed(float_t  value) ;

/// @brief Method set_shutterSpeed_Injected, addr 0xb56ad14, size 0x4c, virtual false, abstract: false, final false
static inline void set_shutterSpeed_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_stereoTargetEye, addr 0xb56d49c, size 0xec, virtual false, abstract: false, final false
inline void set_stereoTargetEye(::UnityEngine::StereoTargetEyeMask  value) ;

/// @brief Method set_stereoTargetEyeInternal, addr 0xb56d690, size 0x80, virtual false, abstract: false, final false
inline void set_stereoTargetEyeInternal(::UnityEngine::StereoTargetEyeMask  value) ;

/// @brief Method set_stereoTargetEyeInternal_Injected, addr 0xb56d74c, size 0x44, virtual false, abstract: false, final false
static inline void set_stereoTargetEyeInternal_Injected(::System::IntPtr  _unity_self, ::UnityEngine::StereoTargetEyeMask  value) ;

/// @brief Method set_targetTexture, addr 0xb56c3ac, size 0xb4, virtual false, abstract: false, final false
inline void set_targetTexture(::UnityEngine::RenderTexture*  value) ;

/// @brief Method set_targetTexture_Injected, addr 0xb56c460, size 0x44, virtual false, abstract: false, final false
static inline void set_targetTexture_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_usePhysicalProperties, addr 0xb56a99c, size 0x80, virtual false, abstract: false, final false
inline void set_usePhysicalProperties(bool  value) ;

/// @brief Method set_usePhysicalProperties_Injected, addr 0xb56aa1c, size 0x44, virtual false, abstract: false, final false
static inline void set_usePhysicalProperties_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_worldToCameraMatrix, addr 0xb56c730, size 0x80, virtual false, abstract: false, final false
inline void set_worldToCameraMatrix(::UnityEngine::Matrix4x4  value) ;

/// @brief Method set_worldToCameraMatrix_Injected, addr 0xb56c7b0, size 0x44, virtual false, abstract: false, final false
static inline void set_worldToCameraMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Camera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Camera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Camera(Camera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Camera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Camera(Camera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14815};

/// @brief Field kMaxAperture offset 0xffffffff size 0x4
static constexpr float_t  kMaxAperture{static_cast<float_t>(32.0f)};

/// @brief Field kMaxBladeCount offset 0xffffffff size 0x4
static constexpr int32_t  kMaxBladeCount{static_cast<int32_t>(0xb)};

/// @brief Field kMinAperture offset 0xffffffff size 0x4
static constexpr float_t  kMinAperture{static_cast<float_t>(0.7f)};

/// @brief Field kMinBladeCount offset 0xffffffff size 0x4
static constexpr int32_t  kMinBladeCount{static_cast<int32_t>(0x3)};

/// @brief Field m_NonSerializedVersion, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___m_NonSerializedVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera, ___m_NonSerializedVersion) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Camera) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Camera/CameraCallback
class CORDL_TYPE Camera_CameraCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb56e6b8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Camera*  cam) ;

static inline ::UnityEngine::Camera_CameraCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb56e608, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Camera_CameraCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Camera_CameraCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Camera_CameraCallback(Camera_CameraCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Camera_CameraCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Camera_CameraCallback(Camera_CameraCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14814};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Camera_CameraCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
