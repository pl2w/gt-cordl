#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRCompositor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRCompositor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CVRCompositor)
namespace OVR::OpenVR {
struct Compositor_CumulativeStats;
}
namespace OVR::OpenVR {
struct Compositor_FrameTiming;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct EVRCompositorError;
}
namespace OVR::OpenVR {
struct EVRCompositorTimingMode;
}
namespace OVR::OpenVR {
struct EVREye;
}
namespace OVR::OpenVR {
struct EVRSubmitFlags;
}
namespace OVR::OpenVR {
struct HmdColor_t;
}
namespace OVR::OpenVR {
struct Texture_t;
}
namespace OVR::OpenVR {
struct TrackedDevicePose_t;
}
namespace OVR::OpenVR {
struct VRTextureBounds_t;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRCompositor;
}
// Write type traits
MARK_REF_T(::OVR::OpenVR::CVRCompositor*);
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::CVRCompositor*, "OVR.OpenVR", "CVRCompositor");
// Dependencies OVR.OpenVR.IVRCompositor, System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRCompositor
class CORDL_TYPE CVRCompositor : public ::System::Object {
public:
// Declarations
/// @brief Field FnTable, offset 0x10, size 0x158 
 __declspec(property(get=__cordl_internal_get_FnTable, put=__cordl_internal_set_FnTable)) ::OVR::OpenVR::IVRCompositor  FnTable;

/// @brief Method CanRenderScene, addr 0xa5ace90, size 0x20, virtual false, abstract: false, final false
inline bool CanRenderScene() ;

/// @brief Method ClearLastSubmittedFrame, addr 0xa5acc38, size 0x20, virtual false, abstract: false, final false
inline void ClearLastSubmittedFrame() ;

/// @brief Method ClearSkyboxOverride, addr 0xa5acdb0, size 0x20, virtual false, abstract: false, final false
inline void ClearSkyboxOverride() ;

/// @brief Method CompositorBringToFront, addr 0xa5acdd0, size 0x20, virtual false, abstract: false, final false
inline void CompositorBringToFront() ;

/// @brief Method CompositorDumpImages, addr 0xa5acf10, size 0x20, virtual false, abstract: false, final false
inline void CompositorDumpImages() ;

/// @brief Method CompositorGoToBack, addr 0xa5acdf0, size 0x20, virtual false, abstract: false, final false
inline void CompositorGoToBack() ;

/// @brief Method CompositorQuit, addr 0xa5ace10, size 0x20, virtual false, abstract: false, final false
inline void CompositorQuit() ;

/// @brief Method FadeGrid, addr 0xa5acd40, size 0x24, virtual false, abstract: false, final false
inline void FadeGrid(float_t  fSeconds, bool  bFadeIn) ;

/// @brief Method FadeToColor, addr 0xa5accf8, size 0x24, virtual false, abstract: false, final false
inline void FadeToColor(float_t  fSeconds, float_t  fRed, float_t  fGreen, float_t  fBlue, float_t  fAlpha, bool  bBackground) ;

/// @brief Method ForceInterleavedReprojectionOn, addr 0xa5acf50, size 0x24, virtual false, abstract: false, final false
inline void ForceInterleavedReprojectionOn(bool  bOverride) ;

/// @brief Method ForceReconnectProcess, addr 0xa5acf74, size 0x20, virtual false, abstract: false, final false
inline void ForceReconnectProcess() ;

/// @brief Method GetCumulativeStats, addr 0xa5accd8, size 0x20, virtual false, abstract: false, final false
inline void GetCumulativeStats(::by_ref<::OVR::OpenVR::Compositor_CumulativeStats>  pStats, uint32_t  nStatsSizeInBytes) ;

/// @brief Method GetCurrentFadeColor, addr 0xa5acd1c, size 0x24, virtual false, abstract: false, final false
inline ::OVR::OpenVR::HmdColor_t GetCurrentFadeColor(bool  bBackground) ;

/// @brief Method GetCurrentGridAlpha, addr 0xa5acd64, size 0x20, virtual false, abstract: false, final false
inline float_t GetCurrentGridAlpha() ;

/// @brief Method GetCurrentSceneFocusProcess, addr 0xa5ace50, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetCurrentSceneFocusProcess() ;

/// @brief Method GetFrameTimeRemaining, addr 0xa5accb8, size 0x20, virtual false, abstract: false, final false
inline float_t GetFrameTimeRemaining() ;

/// @brief Method GetFrameTiming, addr 0xa5acc78, size 0x20, virtual false, abstract: false, final false
inline bool GetFrameTiming(::by_ref<::OVR::OpenVR::Compositor_FrameTiming>  pTiming, uint32_t  unFramesAgo) ;

/// @brief Method GetFrameTimings, addr 0xa5acc98, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetFrameTimings(::by_ref<::OVR::OpenVR::Compositor_FrameTiming>  pTiming, uint32_t  nFrames) ;

/// @brief Method GetLastFrameRenderer, addr 0xa5ace70, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetLastFrameRenderer() ;

/// @brief Method GetLastPoseForTrackedDeviceIndex, addr 0xa5acbf8, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRCompositorError GetLastPoseForTrackedDeviceIndex(uint32_t  unDeviceIndex, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>  pOutputPose, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>  pOutputGamePose) ;

/// @brief Method GetLastPoses, addr 0xa5acbc0, size 0x38, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRCompositorError GetLastPoses(::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>  pRenderPoseArray, ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>  pGamePoseArray) ;

/// @brief Method GetMirrorTextureD3D11, addr 0xa5acfb8, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRCompositorError GetMirrorTextureD3D11(::OVR::OpenVR::EVREye  eEye, ::System::IntPtr  pD3D11DeviceOrResource, ::by_ref<::System::IntPtr>  ppD3D11ShaderResourceView) ;

/// @brief Method GetMirrorTextureGL, addr 0xa5acff8, size 0x24, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRCompositorError GetMirrorTextureGL(::OVR::OpenVR::EVREye  eEye, ::by_ref<uint32_t>  pglTextureId, ::System::IntPtr  pglSharedTextureHandle) ;

/// @brief Method GetTrackingSpace, addr 0xa5acb68, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::ETrackingUniverseOrigin GetTrackingSpace() ;

/// @brief Method GetVulkanDeviceExtensionsRequired, addr 0xa5ad09c, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetVulkanDeviceExtensionsRequired(::System::IntPtr  pPhysicalDevice, ::System::Text::StringBuilder*  pchValue, uint32_t  unBufferSize) ;

/// @brief Method GetVulkanInstanceExtensionsRequired, addr 0xa5ad07c, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetVulkanInstanceExtensionsRequired(::System::Text::StringBuilder*  pchValue, uint32_t  unBufferSize) ;

/// @brief Method HideMirrorWindow, addr 0xa5aced0, size 0x20, virtual false, abstract: false, final false
inline void HideMirrorWindow() ;

/// @brief Method IsFullscreen, addr 0xa5ace30, size 0x20, virtual false, abstract: false, final false
inline bool IsFullscreen() ;

/// @brief Method IsMirrorWindowVisible, addr 0xa5acef0, size 0x20, virtual false, abstract: false, final false
inline bool IsMirrorWindowVisible() ;

/// @brief Method LockGLSharedTextureForAccess, addr 0xa5ad03c, size 0x20, virtual false, abstract: false, final false
inline void LockGLSharedTextureForAccess(::System::IntPtr  glSharedTextureHandle) ;

static inline ::OVR::OpenVR::CVRCompositor* New_ctor(::System::IntPtr  pInterface) ;

/// @brief Method PostPresentHandoff, addr 0xa5acc58, size 0x20, virtual false, abstract: false, final false
inline void PostPresentHandoff() ;

/// @brief Method ReleaseMirrorTextureD3D11, addr 0xa5acfd8, size 0x20, virtual false, abstract: false, final false
inline void ReleaseMirrorTextureD3D11(::System::IntPtr  pD3D11ShaderResourceView) ;

/// @brief Method ReleaseSharedGLTexture, addr 0xa5ad01c, size 0x20, virtual false, abstract: false, final false
inline bool ReleaseSharedGLTexture(uint32_t  glTextureId, ::System::IntPtr  glSharedTextureHandle) ;

/// @brief Method SetExplicitTimingMode, addr 0xa5ad0bc, size 0x20, virtual false, abstract: false, final false
inline void SetExplicitTimingMode(::OVR::OpenVR::EVRCompositorTimingMode  eTimingMode) ;

/// @brief Method SetSkyboxOverride, addr 0xa5acd84, size 0x2c, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRCompositorError SetSkyboxOverride(::ArrayW<::OVR::OpenVR::Texture_t>  pTextures) ;

/// @brief Method SetTrackingSpace, addr 0xa5acb48, size 0x20, virtual false, abstract: false, final false
inline void SetTrackingSpace(::OVR::OpenVR::ETrackingUniverseOrigin  eOrigin) ;

/// @brief Method ShouldAppRenderWithLowResources, addr 0xa5acf30, size 0x20, virtual false, abstract: false, final false
inline bool ShouldAppRenderWithLowResources() ;

/// @brief Method ShowMirrorWindow, addr 0xa5aceb0, size 0x20, virtual false, abstract: false, final false
inline void ShowMirrorWindow() ;

/// @brief Method Submit, addr 0xa5acc18, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRCompositorError Submit(::OVR::OpenVR::EVREye  eEye, ::by_ref<::OVR::OpenVR::Texture_t>  pTexture, ::by_ref<::OVR::OpenVR::VRTextureBounds_t>  pBounds, ::OVR::OpenVR::EVRSubmitFlags  nSubmitFlags) ;

/// @brief Method SubmitExplicitTimingData, addr 0xa5ad0dc, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRCompositorError SubmitExplicitTimingData() ;

/// @brief Method SuspendRendering, addr 0xa5acf94, size 0x24, virtual false, abstract: false, final false
inline void SuspendRendering(bool  bSuspend) ;

/// @brief Method UnlockGLSharedTextureForAccess, addr 0xa5ad05c, size 0x20, virtual false, abstract: false, final false
inline void UnlockGLSharedTextureForAccess(::System::IntPtr  glSharedTextureHandle) ;

/// @brief Method WaitGetPoses, addr 0xa5acb88, size 0x38, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRCompositorError WaitGetPoses(::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>  pRenderPoseArray, ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>  pGamePoseArray) ;

constexpr ::OVR::OpenVR::IVRCompositor const& __cordl_internal_get_FnTable() const;

constexpr ::OVR::OpenVR::IVRCompositor& __cordl_internal_get_FnTable() ;

constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRCompositor  value) ;

/// @brief Method .ctor, addr 0xa5aca38, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  pInterface) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CVRCompositor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CVRCompositor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CVRCompositor(CVRCompositor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CVRCompositor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CVRCompositor(CVRCompositor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13108};

/// @brief Field FnTable, offset: 0x10, size: 0x158, def value: None
 ::OVR::OpenVR::IVRCompositor  ___FnTable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::CVRCompositor, ___FnTable) == 0x10, "Offset mismatch!");

static_assert(sizeof(::OVR::OpenVR::CVRCompositor) == 0x168, "Size mismatch!");

} // namespace end def OVR::OpenVR
