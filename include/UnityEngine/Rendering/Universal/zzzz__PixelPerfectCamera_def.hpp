#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PixelPerfectCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__PixelPerfectCamera_CropFrame_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PixelPerfectCamera_GridSnapping_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PixelPerfectCamera_PixelPerfectFilterMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PixelPerfectCamera)
namespace GlobalNamespace {
struct PixelPerfectCamera_CropFrame;
}
namespace GlobalNamespace {
struct PixelPerfectCamera_GridSnapping;
}
namespace GlobalNamespace {
struct PixelPerfectCamera_PixelPerfectFilterMode;
}
namespace UnityEngine::Rendering::Universal {
class IPixelPerfectCamera;
}
namespace UnityEngine::Rendering::Universal {
class PixelPerfectCameraInternal;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class PixelPerfectCamera;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::PixelPerfectCamera*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PixelPerfectCamera*, "UnityEngine.Rendering.Universal", "PixelPerfectCamera");
// [ExecuteInEditMode]
// [DisallowMultipleComponent]
// [AddComponentMenu("Rendering/2D/Pixel Perfect Camera")]
// [RequireComponent(typeof(UnityEngine.Camera))]
// [MovedFrom(true, "UnityEngine.Experimental.Rendering.Universal", null, null)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.render-pipelines.universal@latest/index.html?subfolder=/manual/2d-pixelperfect.html%23properties")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Rendering.Universal.PixelPerfectCamera::CropFrame, UnityEngine.Rendering.Universal.PixelPerfectCamera::GridSnapping, UnityEngine.Rendering.Universal.PixelPerfectCamera::PixelPerfectFilterMode
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PixelPerfectCamera
class CORDL_TYPE PixelPerfectCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CropFrame = ::GlobalNamespace::PixelPerfectCamera_CropFrame;

using GridSnapping = ::GlobalNamespace::PixelPerfectCamera_GridSnapping;

using PixelPerfectFilterMode = ::GlobalNamespace::PixelPerfectCamera_PixelPerfectFilterMode;

 __declspec(property(get=get_assetsPPU, put=set_assetsPPU)) int32_t  assetsPPU;

 __declspec(property(get=get_cameraRTSize)) ::UnityEngine::Vector2Int  cameraRTSize;

 __declspec(property(get=get_cropFrame, put=set_cropFrame)) ::GlobalNamespace::PixelPerfectCamera_CropFrame  cropFrame;

/// @brief [Obsolete("Use cropFrame instead", false)]
 __declspec(property(get=get_cropFrameX, put=set_cropFrameX)) bool  cropFrameX;

/// @brief [Obsolete("Use cropFrame instead", false)]
 __declspec(property(get=get_cropFrameY, put=set_cropFrameY)) bool  cropFrameY;

 __declspec(property(get=get_finalBlitFilterMode)) ::UnityEngine::FilterMode  finalBlitFilterMode;

 __declspec(property(get=get_gridSnapping, put=set_gridSnapping)) ::GlobalNamespace::PixelPerfectCamera_GridSnapping  gridSnapping;

/// @brief Field m_AssetsPPU, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AssetsPPU, put=__cordl_internal_set_m_AssetsPPU)) int32_t  m_AssetsPPU;

/// @brief Field m_Camera, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Camera, put=__cordl_internal_set_m_Camera)) ::UnityW<::UnityEngine::Camera>  m_Camera;

/// @brief Field m_CinemachineCompatibilityMode, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CinemachineCompatibilityMode, put=__cordl_internal_set_m_CinemachineCompatibilityMode)) bool  m_CinemachineCompatibilityMode;

/// @brief Field m_CropFrame, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CropFrame, put=__cordl_internal_set_m_CropFrame)) ::GlobalNamespace::PixelPerfectCamera_CropFrame  m_CropFrame;

/// @brief Field m_FilterMode, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FilterMode, put=__cordl_internal_set_m_FilterMode)) ::GlobalNamespace::PixelPerfectCamera_PixelPerfectFilterMode  m_FilterMode;

/// @brief Field m_GridSnapping, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_GridSnapping, put=__cordl_internal_set_m_GridSnapping)) ::GlobalNamespace::PixelPerfectCamera_GridSnapping  m_GridSnapping;

/// @brief Field m_Internal, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Internal, put=__cordl_internal_set_m_Internal)) ::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal*  m_Internal;

/// @brief Field m_RefResolutionX, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RefResolutionX, put=__cordl_internal_set_m_RefResolutionX)) int32_t  m_RefResolutionX;

/// @brief Field m_RefResolutionY, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RefResolutionY, put=__cordl_internal_set_m_RefResolutionY)) int32_t  m_RefResolutionY;

 __declspec(property(get=get_offscreenRTSize)) ::UnityEngine::Vector2Int  offscreenRTSize;

 __declspec(property(get=get_orthographicSize)) float_t  orthographicSize;

 __declspec(property(get=get_pixelRatio)) int32_t  pixelRatio;

/// @brief [Obsolete("Use gridSnapping instead", false)]
 __declspec(property(get=get_pixelSnapping, put=set_pixelSnapping)) bool  pixelSnapping;

 __declspec(property(get=get_refResolutionX, put=set_refResolutionX)) int32_t  refResolutionX;

 __declspec(property(get=get_refResolutionY, put=set_refResolutionY)) int32_t  refResolutionY;

 __declspec(property(get=get_requiresUpscalePass)) bool  requiresUpscalePass;

/// @brief [Obsolete("Use cropFrame instead", false)]
 __declspec(property(get=get_stretchFill, put=set_stretchFill)) bool  stretchFill;

/// @brief [Obsolete("Use gridSnapping instead", false)]
 __declspec(property(get=get_upscaleRT, put=set_upscaleRT)) bool  upscaleRT;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Convert operator to "::UnityEngine::Rendering::Universal::IPixelPerfectCamera"
constexpr operator  ::UnityEngine::Rendering::Universal::IPixelPerfectCamera*() noexcept;

/// @brief Method Awake, addr 0xb215730, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CorrectCinemachineOrthoSize, addr 0xb214f94, size 0x1c, virtual false, abstract: false, final false
inline float_t CorrectCinemachineOrthoSize(float_t  targetOrthoSize) ;

static inline ::UnityEngine::Rendering::Universal::PixelPerfectCamera* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xb2165b8, size 0x4, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb2165b4, size 0x4, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method OnBeginCameraRendering, addr 0xb2162ac, size 0xcc, virtual false, abstract: false, final false
inline void OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method OnDisable, addr 0xb2164c4, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb216404, size 0xc0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEndCameraRendering, addr 0xb216378, size 0x8c, virtual false, abstract: false, final false
inline void OnEndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method PixelSnap, addr 0xb2154b8, size 0x278, virtual false, abstract: false, final false
inline void PixelSnap() ;

/// @brief Method RoundToPixel, addr 0xb214ddc, size 0x1b8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 RoundToPixel(::UnityEngine::Vector3  position) ;

/// @brief Method UpdateCameraProperties, addr 0xb215828, size 0x94, virtual false, abstract: false, final false
inline void UpdateCameraProperties() ;

constexpr int32_t const& __cordl_internal_get_m_AssetsPPU() const;

constexpr int32_t& __cordl_internal_get_m_AssetsPPU() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_Camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_Camera() ;

constexpr bool const& __cordl_internal_get_m_CinemachineCompatibilityMode() const;

constexpr bool& __cordl_internal_get_m_CinemachineCompatibilityMode() ;

constexpr ::GlobalNamespace::PixelPerfectCamera_CropFrame const& __cordl_internal_get_m_CropFrame() const;

constexpr ::GlobalNamespace::PixelPerfectCamera_CropFrame& __cordl_internal_get_m_CropFrame() ;

constexpr ::GlobalNamespace::PixelPerfectCamera_PixelPerfectFilterMode const& __cordl_internal_get_m_FilterMode() const;

constexpr ::GlobalNamespace::PixelPerfectCamera_PixelPerfectFilterMode& __cordl_internal_get_m_FilterMode() ;

constexpr ::GlobalNamespace::PixelPerfectCamera_GridSnapping const& __cordl_internal_get_m_GridSnapping() const;

constexpr ::GlobalNamespace::PixelPerfectCamera_GridSnapping& __cordl_internal_get_m_GridSnapping() ;

constexpr ::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal* const& __cordl_internal_get_m_Internal() const;

constexpr ::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal*& __cordl_internal_get_m_Internal() ;

constexpr int32_t const& __cordl_internal_get_m_RefResolutionX() const;

constexpr int32_t& __cordl_internal_get_m_RefResolutionX() ;

constexpr int32_t const& __cordl_internal_get_m_RefResolutionY() const;

constexpr int32_t& __cordl_internal_get_m_RefResolutionY() ;

constexpr void __cordl_internal_set_m_AssetsPPU(int32_t  value) ;

constexpr void __cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_m_CinemachineCompatibilityMode(bool  value) ;

constexpr void __cordl_internal_set_m_CropFrame(::GlobalNamespace::PixelPerfectCamera_CropFrame  value) ;

constexpr void __cordl_internal_set_m_FilterMode(::GlobalNamespace::PixelPerfectCamera_PixelPerfectFilterMode  value) ;

constexpr void __cordl_internal_set_m_GridSnapping(::GlobalNamespace::PixelPerfectCamera_GridSnapping  value) ;

constexpr void __cordl_internal_set_m_Internal(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal*  value) ;

constexpr void __cordl_internal_set_m_RefResolutionX(int32_t  value) ;

constexpr void __cordl_internal_set_m_RefResolutionY(int32_t  value) ;

/// @brief Method .ctor, addr 0xb2165bc, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_assetsPPU, addr 0xb214bc8, size 0x8, virtual true, abstract: false, final true
inline int32_t get_assetsPPU() ;

/// @brief Method get_cameraRTSize, addr 0xb2153f0, size 0xc8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2Int get_cameraRTSize() ;

/// @brief Method get_cropFrame, addr 0xb214b90, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::PixelPerfectCamera_CropFrame get_cropFrame() ;

/// @brief Method get_cropFrameX, addr 0xb214c8c, size 0x1c, virtual true, abstract: false, final true
inline bool get_cropFrameX() ;

/// @brief Method get_cropFrameY, addr 0xb214cf4, size 0x14, virtual true, abstract: false, final true
inline bool get_cropFrameY() ;

/// @brief Method get_finalBlitFilterMode, addr 0xb2153c8, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::FilterMode get_finalBlitFilterMode() ;

/// @brief Method get_gridSnapping, addr 0xb214ba0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::PixelPerfectCamera_GridSnapping get_gridSnapping() ;

/// @brief Method get_offscreenRTSize, addr 0xb2153d8, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2Int get_offscreenRTSize() ;

/// @brief Method get_orthographicSize, addr 0xb214bb0, size 0x18, virtual false, abstract: false, final false
inline float_t get_orthographicSize() ;

/// @brief Method get_pixelRatio, addr 0xb214d70, size 0x54, virtual false, abstract: false, final false
inline int32_t get_pixelRatio() ;

/// @brief Method get_pixelSnapping, addr 0xb214c64, size 0x10, virtual true, abstract: false, final true
inline bool get_pixelSnapping() ;

/// @brief Method get_refResolutionX, addr 0xb214bec, size 0x8, virtual true, abstract: false, final true
inline int32_t get_refResolutionX() ;

/// @brief Method get_refResolutionY, addr 0xb214c10, size 0x8, virtual true, abstract: false, final true
inline int32_t get_refResolutionY() ;

/// @brief Method get_requiresUpscalePass, addr 0xb214dc4, size 0x18, virtual false, abstract: false, final false
inline bool get_requiresUpscalePass() ;

/// @brief Method get_stretchFill, addr 0xb214d4c, size 0x10, virtual true, abstract: false, final true
inline bool get_stretchFill() ;

/// @brief Method get_upscaleRT, addr 0xb214c34, size 0x10, virtual true, abstract: false, final true
inline bool get_upscaleRT() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Convert to "::UnityEngine::Rendering::Universal::IPixelPerfectCamera"
constexpr ::UnityEngine::Rendering::Universal::IPixelPerfectCamera* i___UnityEngine__Rendering__Universal__IPixelPerfectCamera() noexcept;

/// @brief Method set_assetsPPU, addr 0xb214bd0, size 0x1c, virtual true, abstract: false, final true
inline void set_assetsPPU(int32_t  value) ;

/// @brief Method set_cropFrame, addr 0xb214b98, size 0x8, virtual false, abstract: false, final false
inline void set_cropFrame(::GlobalNamespace::PixelPerfectCamera_CropFrame  value) ;

/// @brief Method set_cropFrameX, addr 0xb214ca8, size 0x4c, virtual true, abstract: false, final true
inline void set_cropFrameX(bool  value) ;

/// @brief Method set_cropFrameY, addr 0xb214d08, size 0x44, virtual true, abstract: false, final true
inline void set_cropFrameY(bool  value) ;

/// @brief Method set_gridSnapping, addr 0xb214ba8, size 0x8, virtual false, abstract: false, final false
inline void set_gridSnapping(::GlobalNamespace::PixelPerfectCamera_GridSnapping  value) ;

/// @brief Method set_pixelSnapping, addr 0xb214c74, size 0x18, virtual true, abstract: false, final true
inline void set_pixelSnapping(bool  value) ;

/// @brief Method set_refResolutionX, addr 0xb214bf4, size 0x1c, virtual true, abstract: false, final true
inline void set_refResolutionX(int32_t  value) ;

/// @brief Method set_refResolutionY, addr 0xb214c18, size 0x1c, virtual true, abstract: false, final true
inline void set_refResolutionY(int32_t  value) ;

/// @brief Method set_stretchFill, addr 0xb214d5c, size 0x14, virtual true, abstract: false, final true
inline void set_stretchFill(bool  value) ;

/// @brief Method set_upscaleRT, addr 0xb214c44, size 0x20, virtual true, abstract: false, final true
inline void set_upscaleRT(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PixelPerfectCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PixelPerfectCamera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PixelPerfectCamera(PixelPerfectCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PixelPerfectCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PixelPerfectCamera(PixelPerfectCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32906};

/// [SerializeField]
/// @brief Field m_AssetsPPU, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_AssetsPPU;

/// [SerializeField]
/// @brief Field m_RefResolutionX, offset: 0x24, size: 0x4, def value: None
 int32_t  ___m_RefResolutionX;

/// [SerializeField]
/// @brief Field m_RefResolutionY, offset: 0x28, size: 0x4, def value: None
 int32_t  ___m_RefResolutionY;

/// [SerializeField]
/// @brief Field m_CropFrame, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::PixelPerfectCamera_CropFrame  ___m_CropFrame;

/// [SerializeField]
/// @brief Field m_GridSnapping, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::PixelPerfectCamera_GridSnapping  ___m_GridSnapping;

/// [SerializeField]
/// @brief Field m_FilterMode, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::PixelPerfectCamera_PixelPerfectFilterMode  ___m_FilterMode;

/// @brief Field m_Camera, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___m_Camera;

/// @brief Field m_Internal, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal*  ___m_Internal;

/// @brief Field m_CinemachineCompatibilityMode, offset: 0x48, size: 0x1, def value: None
 bool  ___m_CinemachineCompatibilityMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCamera, ___m_AssetsPPU) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCamera, ___m_RefResolutionX) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCamera, ___m_RefResolutionY) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCamera, ___m_CropFrame) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCamera, ___m_GridSnapping) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCamera, ___m_FilterMode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCamera, ___m_Camera) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCamera, ___m_Internal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCamera, ___m_CinemachineCompatibilityMode) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PixelPerfectCamera) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
