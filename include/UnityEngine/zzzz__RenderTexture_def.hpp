#pragma once
// IWYU pragma private; include "UnityEngine/RenderTexture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTexture)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct ShadowSamplingMode;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
struct RenderBuffer;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct RenderTextureMemoryless;
}
namespace UnityEngine {
struct RenderTextureReadWrite;
}
namespace UnityEngine {
struct VRTextureUsage;
}
// Forward declare root types
namespace UnityEngine {
class RenderTexture;
}
// Write type traits
MARK_REF_T(::UnityEngine::RenderTexture*);
DEFINE_IL2CPP_CLASS(::UnityEngine::RenderTexture*, "UnityEngine", "RenderTexture");
// [NativeHeader("Runtime/Graphics/RenderTexture.h")]
// [NativeHeader("Runtime/Graphics/RenderBufferManager.h")]
// [NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
// [NativeHeader("Runtime/Camera/Camera.h")]
// [UsedByNativeCode]
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RenderTexture
class CORDL_TYPE RenderTexture : public ::UnityEngine::Texture {
public:
// Declarations
 __declspec(property(get=get_antiAliasing, put=set_antiAliasing)) int32_t  antiAliasing;

 __declspec(property(get=get_autoGenerateMips, put=set_autoGenerateMips)) bool  autoGenerateMips;

 __declspec(property(get=get_bindTextureMS)) bool  bindTextureMS;

 __declspec(property(get=get_colorBuffer)) ::UnityEngine::RenderBuffer  colorBuffer;

 __declspec(property(put=set_depth)) int32_t  depth;

 __declspec(property(get=get_depthBuffer)) ::UnityEngine::RenderBuffer  depthBuffer;

 __declspec(property(get=get_depthStencilFormat, put=set_depthStencilFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  depthStencilFormat;

 __declspec(property(get=get_descriptor)) ::UnityEngine::RenderTextureDescriptor  descriptor;

 __declspec(property(get=get_dimension, put=set_dimension)) ::UnityEngine::Rendering::TextureDimension  dimension;

 __declspec(property(put=set_enableRandomWrite)) bool  enableRandomWrite;

 __declspec(property(get=get_enableShadingRate)) bool  enableShadingRate;

 __declspec(property(get=get_format)) ::UnityEngine::RenderTextureFormat  format;

 __declspec(property(get=get_graphicsFormat, put=set_graphicsFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  graphicsFormat;

 __declspec(property(get=get_height, put=set_height)) int32_t  height;

/// @brief [NativeProperty("SRGBReadWrite")]
 __declspec(property(get=get_sRGB)) bool  sRGB;

 __declspec(property(get=get_useDynamicScale, put=set_useDynamicScale)) bool  useDynamicScale;

 __declspec(property(get=get_useDynamicScaleExplicit)) bool  useDynamicScaleExplicit;

/// @brief [NativeProperty("MipMap")]
 __declspec(property(get=get_useMipMap, put=set_useMipMap)) bool  useMipMap;

 __declspec(property(get=get_volumeDepth, put=set_volumeDepth)) int32_t  volumeDepth;

/// @brief [NativeProperty("VRUsage")]
 __declspec(property(get=get_vrUsage)) ::UnityEngine::VRTextureUsage  vrUsage;

 __declspec(property(get=get_width, put=set_width)) int32_t  width;

/// @brief Method ApplyDynamicScale, addr 0xb5c0ba8, size 0x78, virtual false, abstract: false, final false
inline void ApplyDynamicScale() ;

/// @brief Method ApplyDynamicScale_Injected, addr 0xb5c0c20, size 0x3c, virtual false, abstract: false, final false
static inline void ApplyDynamicScale_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Create, addr 0xb5c1190, size 0x78, virtual false, abstract: false, final false
inline bool Create() ;

/// @brief Method Create_Injected, addr 0xb5c1208, size 0x3c, virtual false, abstract: false, final false
static inline bool Create_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction("RenderTexture::GetActiveAsRenderTexture")]
/// @brief Method GetActive, addr 0xb5c0c5c, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetActive() ;

/// @brief Method GetActive_Injected, addr 0xb5c0cbc, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr GetActive_Injected() ;

/// [FreeFunction(Name = "RenderTextureScripting::GetColorBuffer", HasExplicitThis = true)]
/// @brief Method GetColorBuffer, addr 0xb5c0da4, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::RenderBuffer GetColorBuffer() ;

/// @brief Method GetColorBuffer_Injected, addr 0xb5c0e34, size 0x44, virtual false, abstract: false, final false
static inline void GetColorBuffer_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::RenderBuffer>  ret) ;

/// [NativeName("GetColorFormat")]
/// @brief Method GetColorFormat, addr 0xb5bfb98, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetColorFormat(bool  suppressWarnings) ;

/// @brief Method GetColorFormat_Injected, addr 0xb5bfc18, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetColorFormat_Injected(::System::IntPtr  _unity_self, bool  suppressWarnings) ;

/// @brief Method GetCompatibleFormat, addr 0xb5c2790, size 0x158, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::RenderTextureFormat  renderTextureFormat, ::UnityEngine::RenderTextureReadWrite  readWrite) ;

/// @brief Method GetDefaultColorFormat, addr 0xb5c1f94, size 0x1c, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDefaultColorFormat(::UnityEngine::Experimental::Rendering::DefaultFormat  format) ;

/// @brief Method GetDefaultDepthStencilFormat, addr 0xb5c1fb0, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDefaultDepthStencilFormat(::UnityEngine::Experimental::Rendering::DefaultFormat  format, int32_t  depth) ;

/// [FreeFunction(Name = "RenderTextureScripting::GetDepthBuffer", HasExplicitThis = true)]
/// @brief Method GetDepthBuffer, addr 0xb5c0e78, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::RenderBuffer GetDepthBuffer() ;

/// @brief Method GetDepthBuffer_Injected, addr 0xb5c0f08, size 0x44, virtual false, abstract: false, final false
static inline void GetDepthBuffer_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::RenderBuffer>  ret) ;

/// @brief Method GetDepthStencilFormatLegacy, addr 0xb5c239c, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t  depthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat  colorFormat) ;

/// @brief Method GetDepthStencilFormatLegacy, addr 0xb5c2b10, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t  depthBits, ::UnityEngine::Experimental::Rendering::DefaultFormat  format) ;

/// @brief Method GetDepthStencilFormatLegacy, addr 0xb5c28e8, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t  depthBits, ::UnityEngine::RenderTextureFormat  format, bool  disableFallback) ;

/// @brief Method GetDepthStencilFormatLegacy, addr 0xb5c2934, size 0x11c, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t  depthBits, bool  requestedShadowMap) ;

/// @brief Method GetDepthStencilFormatLegacy, addr 0xb5c2b1c, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t  depthBits, ::UnityEngine::Rendering::ShadowSamplingMode  shadowSamplingMode) ;

/// [NativeName("GetRenderTextureDesc")]
/// @brief Method GetDescriptor, addr 0xb5c00bc, size 0xb4, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureDescriptor GetDescriptor() ;

/// @brief Method GetDescriptor_Injected, addr 0xb5c1570, size 0x44, virtual false, abstract: false, final false
static inline void GetDescriptor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::RenderTextureDescriptor>  ret) ;

/// @brief Method GetNativeDepthBufferPtr, addr 0xb5c10dc, size 0x78, virtual false, abstract: false, final false
inline ::System::IntPtr GetNativeDepthBufferPtr() ;

/// @brief Method GetNativeDepthBufferPtr_Injected, addr 0xb5c1154, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetNativeDepthBufferPtr_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetShadowSamplingModeForFormat, addr 0xb5c2164, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ShadowSamplingMode GetShadowSamplingModeForFormat(::UnityEngine::Experimental::Rendering::DefaultFormat  format) ;

/// @brief Method GetShadowSamplingModeForFormat, addr 0xb5c2924, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ShadowSamplingMode GetShadowSamplingModeForFormat(::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method GetTemporary, addr 0xb5c2bac, size 0x44, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(::UnityEngine::RenderTextureDescriptor  desc) ;

/// [ExcludeFromDocs]
/// @brief Method GetTemporary, addr 0xb5c2f28, size 0x34, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height) ;

/// [ExcludeFromDocs]
/// @brief Method GetTemporary, addr 0xb5c2ef8, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height, int32_t  depthBuffer) ;

/// [ExcludeFromDocs]
/// @brief Method GetTemporary, addr 0xb5c2ecc, size 0x2c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::RenderTextureFormat  format) ;

/// [ExcludeFromDocs]
/// @brief Method GetTemporary, addr 0xb5c2ea4, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite) ;

/// [ExcludeFromDocs]
/// @brief Method GetTemporary, addr 0xb5c2e80, size 0x24, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite, int32_t  antiAliasing) ;

/// [ExcludeFromDocs]
/// @brief Method GetTemporary, addr 0xb5c2e60, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite, int32_t  antiAliasing, ::UnityEngine::RenderTextureMemoryless  memorylessMode) ;

/// [ExcludeFromDocs]
/// @brief Method GetTemporary, addr 0xb5c2e44, size 0x1c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite, int32_t  antiAliasing, ::UnityEngine::RenderTextureMemoryless  memorylessMode, ::UnityEngine::VRTextureUsage  vrUsage) ;

/// @brief Method GetTemporary, addr 0xb5c2da0, size 0xa4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height, /* [DefaultValue("0")] */ int32_t  depthBuffer, /* [DefaultValue("RenderTextureFormat.Default")] */ ::UnityEngine::RenderTextureFormat  format, /* [DefaultValue("RenderTextureReadWrite.Default")] */ ::UnityEngine::RenderTextureReadWrite  readWrite, /* [DefaultValue("1")] */ int32_t  antiAliasing, /* [DefaultValue("RenderTextureMemoryless.None")] */ ::UnityEngine::RenderTextureMemoryless  memorylessMode, /* [DefaultValue("VRTextureUsage.None")] */ ::UnityEngine::VRTextureUsage  vrUsage, /* [DefaultValue("false")] */ bool  useDynamicScale) ;

/// @brief Method GetTemporaryImpl, addr 0xb5c2c10, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporaryImpl(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  depthStencilFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat  colorFormat, int32_t  antiAliasing, ::UnityEngine::RenderTextureMemoryless  memorylessMode, ::UnityEngine::VRTextureUsage  vrUsage, bool  useDynamicScale, ::UnityEngine::Rendering::ShadowSamplingMode  shadowSamplingMode) ;

/// [FreeFunction("GetRenderBufferManager().GetTextures().GetTempBuffer")]
/// @brief Method GetTemporary_Internal, addr 0xb5c15b4, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary_Internal(::UnityEngine::RenderTextureDescriptor  desc) ;

/// @brief Method GetTemporary_Internal_Injected, addr 0xb5c1620, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetTemporary_Internal_Injected(::by_ref<::UnityEngine::RenderTextureDescriptor>  desc) ;

/// @brief Method Initialize, addr 0xb5c24e0, size 0x174, virtual false, abstract: false, final false
inline void Initialize(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite, int32_t  mipCount) ;

/// [FreeFunction("RenderTextureScripting::Create")]
/// @brief Method Internal_Create, addr 0xb5c1470, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_Create(/* [Writable] */ ::UnityEngine::RenderTexture*  rt) ;

/// @brief Method IsCreated, addr 0xb5c12f8, size 0x78, virtual false, abstract: false, final false
inline bool IsCreated() ;

/// @brief Method IsCreated_Injected, addr 0xb5c1370, size 0x3c, virtual false, abstract: false, final false
static inline bool IsCreated_Injected(::System::IntPtr  _unity_self) ;

/// @brief [RequiredByNativeCode]
static inline ::UnityEngine::RenderTexture* New_ctor() ;

static inline ::UnityEngine::RenderTexture* New_ctor(::UnityEngine::RenderTextureDescriptor  desc) ;

static inline ::UnityEngine::RenderTexture* New_ctor(::UnityEngine::RenderTexture*  textureToCopy) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat  depthStencilFormat) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat  depthStencilFormat, int32_t  mipCount) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, int32_t  depth) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::RenderTextureFormat  format) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::RenderTextureFormat  format, int32_t  mipCount) ;

static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, int32_t  depth, /* [DefaultValue("RenderTextureFormat.Default")] */ ::UnityEngine::RenderTextureFormat  format, /* [DefaultValue("RenderTextureReadWrite.Default")] */ ::UnityEngine::RenderTextureReadWrite  readWrite) ;

/// @brief Method Release, addr 0xb5c1244, size 0x78, virtual false, abstract: false, final false
inline void Release() ;

/// [FreeFunction("GetRenderBufferManager().GetTextures().ReleaseTempBuffer")]
/// @brief Method ReleaseTemporary, addr 0xb5c165c, size 0x7c, virtual false, abstract: false, final false
static inline void ReleaseTemporary(::UnityEngine::RenderTexture*  temp) ;

/// @brief Method ReleaseTemporary_Injected, addr 0xb5c16d8, size 0x3c, virtual false, abstract: false, final false
static inline void ReleaseTemporary_Injected(::System::IntPtr  temp) ;

/// @brief Method Release_Injected, addr 0xb5c12bc, size 0x3c, virtual false, abstract: false, final false
static inline void Release_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction("RenderTextureScripting::SetActive")]
/// @brief Method SetActive, addr 0xb5c0ce4, size 0x7c, virtual false, abstract: false, final false
static inline void SetActive(::UnityEngine::RenderTexture*  rt) ;

/// @brief Method SetActive_Injected, addr 0xb5c0d60, size 0x3c, virtual false, abstract: false, final false
static inline void SetActive_Injected(::System::IntPtr  rt) ;

/// [NativeName("SetColorFormat")]
/// @brief Method SetColorFormat, addr 0xb5bfc5c, size 0x80, virtual false, abstract: false, final false
inline void SetColorFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

/// @brief Method SetColorFormat_Injected, addr 0xb5bfcdc, size 0x44, virtual false, abstract: false, final false
static inline void SetColorFormat_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

/// @brief Method SetMipMapCount, addr 0xb5c0f4c, size 0x80, virtual false, abstract: false, final false
inline void SetMipMapCount(int32_t  count) ;

/// @brief Method SetMipMapCount_Injected, addr 0xb5c0fcc, size 0x44, virtual false, abstract: false, final false
static inline void SetMipMapCount_Injected(::System::IntPtr  _unity_self, int32_t  count) ;

/// [NativeName("SetRenderTextureDescFromScript")]
/// @brief Method SetRenderTextureDescriptor, addr 0xb5c14ac, size 0x80, virtual false, abstract: false, final false
inline void SetRenderTextureDescriptor(::UnityEngine::RenderTextureDescriptor  desc) ;

/// @brief Method SetRenderTextureDescriptor_Injected, addr 0xb5c152c, size 0x44, virtual false, abstract: false, final false
static inline void SetRenderTextureDescriptor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::RenderTextureDescriptor>  desc) ;

/// @brief Method SetSRGBReadWrite, addr 0xb5c13ac, size 0x80, virtual false, abstract: false, final false
inline void SetSRGBReadWrite(bool  srgb) ;

/// @brief Method SetSRGBReadWrite_Injected, addr 0xb5c142c, size 0x44, virtual false, abstract: false, final false
static inline void SetSRGBReadWrite_Injected(::System::IntPtr  _unity_self, bool  srgb) ;

/// @brief Method SetShadowSamplingMode, addr 0xb5c1010, size 0x80, virtual false, abstract: false, final false
inline void SetShadowSamplingMode(::UnityEngine::Rendering::ShadowSamplingMode  samplingMode) ;

/// @brief Method SetShadowSamplingMode_Injected, addr 0xb5c1090, size 0x44, virtual false, abstract: false, final false
static inline void SetShadowSamplingMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::ShadowSamplingMode  samplingMode) ;

/// @brief Method ValidateRenderTextureDesc, addr 0xb5c18f4, size 0x3c8, virtual false, abstract: false, final false
static inline void ValidateRenderTextureDesc(::by_ref<::UnityEngine::RenderTextureDescriptor>  desc) ;

/// @brief Method WarnAboutFallbackTo16BitsDepth, addr 0xb5c2a50, size 0xc0, virtual false, abstract: false, final false
static inline void WarnAboutFallbackTo16BitsDepth(::UnityEngine::RenderTextureFormat  format) ;

/// [RequiredByNativeCode]
/// @brief Method .ctor, addr 0xb5c17d8, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb5c1830, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::RenderTextureDescriptor  desc) ;

/// @brief Method .ctor, addr 0xb5c1cbc, size 0x168, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::RenderTexture*  textureToCopy) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5c23a4, size 0x90, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat  depthStencilFormat) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5c1fd8, size 0x18c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat  depthStencilFormat, int32_t  mipCount) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5c2788, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5c1e60, size 0x134, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5c2174, size 0x90, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5c2204, size 0x198, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5c2654, size 0x90, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::RenderTextureFormat  format) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5c26e4, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::RenderTextureFormat  format, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0xb5c2434, size 0xac, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, /* [DefaultValue("RenderTextureFormat.Default")] */ ::UnityEngine::RenderTextureFormat  format, /* [DefaultValue("RenderTextureReadWrite.Default")] */ ::UnityEngine::RenderTextureReadWrite  readWrite) ;

/// @brief Method get_active, addr 0xb5c0d9c, size 0x4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> get_active() ;

/// @brief Method get_antiAliasing, addr 0xb5c05d8, size 0x78, virtual false, abstract: false, final false
inline int32_t get_antiAliasing() ;

/// @brief Method get_antiAliasing_Injected, addr 0xb5c0650, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_antiAliasing_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_autoGenerateMips, addr 0xb5c02e8, size 0x78, virtual false, abstract: false, final false
inline bool get_autoGenerateMips() ;

/// @brief Method get_autoGenerateMips_Injected, addr 0xb5c0360, size 0x3c, virtual false, abstract: false, final false
static inline bool get_autoGenerateMips_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_bindTextureMS, addr 0xb5c0750, size 0x78, virtual false, abstract: false, final false
inline bool get_bindTextureMS() ;

/// @brief Method get_bindTextureMS_Injected, addr 0xb5c07c8, size 0x3c, virtual false, abstract: false, final false
static inline bool get_bindTextureMS_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_colorBuffer, addr 0xb5c10d4, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::RenderBuffer get_colorBuffer() ;

/// @brief Method get_depthBuffer, addr 0xb5c10d8, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::RenderBuffer get_depthBuffer() ;

/// @brief Method get_depthStencilFormat, addr 0xb5c0170, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_depthStencilFormat() ;

/// @brief Method get_depthStencilFormat_Injected, addr 0xb5c01e8, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_depthStencilFormat_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_descriptor, addr 0xb5c1e24, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureDescriptor get_descriptor() ;

/// @brief Method get_dimension, addr 0xb5bfa20, size 0x78, virtual true, abstract: false, final false
inline ::UnityEngine::Rendering::TextureDimension get_dimension() ;

/// @brief Method get_dimension_Injected, addr 0xb5bfa98, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::TextureDimension get_dimension_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_enableShadingRate, addr 0xb5c0af4, size 0x78, virtual false, abstract: false, final false
inline bool get_enableShadingRate() ;

/// @brief Method get_enableShadingRate_Injected, addr 0xb5c0b6c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_enableShadingRate_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_format, addr 0xb5c000c, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureFormat get_format() ;

/// @brief Method get_graphicsFormat, addr 0xb5bfd20, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat() ;

/// @brief Method get_height, addr 0xb5bf8a8, size 0x78, virtual true, abstract: false, final false
inline int32_t get_height() ;

/// @brief Method get_height_Injected, addr 0xb5bf920, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_height_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_sRGB, addr 0xb5bfea4, size 0x78, virtual false, abstract: false, final false
inline bool get_sRGB() ;

/// @brief Method get_sRGB_Injected, addr 0xb5bff1c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_sRGB_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_useDynamicScale, addr 0xb5c08c8, size 0x78, virtual false, abstract: false, final false
inline bool get_useDynamicScale() ;

/// @brief Method get_useDynamicScaleExplicit, addr 0xb5c0a40, size 0x78, virtual false, abstract: false, final false
inline bool get_useDynamicScaleExplicit() ;

/// @brief Method get_useDynamicScaleExplicit_Injected, addr 0xb5c0ab8, size 0x3c, virtual false, abstract: false, final false
static inline bool get_useDynamicScaleExplicit_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_useDynamicScale_Injected, addr 0xb5c0940, size 0x3c, virtual false, abstract: false, final false
static inline bool get_useDynamicScale_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_useMipMap, addr 0xb5bfd2c, size 0x78, virtual false, abstract: false, final false
inline bool get_useMipMap() ;

/// @brief Method get_useMipMap_Injected, addr 0xb5bfda4, size 0x3c, virtual false, abstract: false, final false
static inline bool get_useMipMap_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_volumeDepth, addr 0xb5c0460, size 0x78, virtual false, abstract: false, final false
inline int32_t get_volumeDepth() ;

/// @brief Method get_volumeDepth_Injected, addr 0xb5c04d8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_volumeDepth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_vrUsage, addr 0xb5bff58, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::VRTextureUsage get_vrUsage() ;

/// @brief Method get_vrUsage_Injected, addr 0xb5bffd0, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::VRTextureUsage get_vrUsage_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_width, addr 0xb5bf730, size 0x78, virtual true, abstract: false, final false
inline int32_t get_width() ;

/// @brief Method get_width_Injected, addr 0xb5bf7a8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_width_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_active, addr 0xb5c0da0, size 0x4, virtual false, abstract: false, final false
static inline void set_active(::UnityEngine::RenderTexture*  value) ;

/// @brief Method set_antiAliasing, addr 0xb5c068c, size 0x80, virtual false, abstract: false, final false
inline void set_antiAliasing(int32_t  value) ;

/// @brief Method set_antiAliasing_Injected, addr 0xb5c070c, size 0x44, virtual false, abstract: false, final false
static inline void set_antiAliasing_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_autoGenerateMips, addr 0xb5c039c, size 0x80, virtual false, abstract: false, final false
inline void set_autoGenerateMips(bool  value) ;

/// @brief Method set_autoGenerateMips_Injected, addr 0xb5c041c, size 0x44, virtual false, abstract: false, final false
static inline void set_autoGenerateMips_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// [FreeFunction("RenderTextureScripting::SetDepth", HasExplicitThis = true)]
/// @brief Method set_depth, addr 0xb5c1714, size 0x80, virtual false, abstract: false, final false
inline void set_depth(int32_t  value) ;

/// @brief Method set_depthStencilFormat, addr 0xb5c0224, size 0x80, virtual false, abstract: false, final false
inline void set_depthStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value) ;

/// @brief Method set_depthStencilFormat_Injected, addr 0xb5c02a4, size 0x44, virtual false, abstract: false, final false
static inline void set_depthStencilFormat_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Experimental::Rendering::GraphicsFormat  value) ;

/// @brief Method set_depth_Injected, addr 0xb5c1794, size 0x44, virtual false, abstract: false, final false
static inline void set_depth_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_dimension, addr 0xb5bfad4, size 0x80, virtual true, abstract: false, final false
inline void set_dimension(::UnityEngine::Rendering::TextureDimension  value) ;

/// @brief Method set_dimension_Injected, addr 0xb5bfb54, size 0x44, virtual false, abstract: false, final false
static inline void set_dimension_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::TextureDimension  value) ;

/// @brief Method set_enableRandomWrite, addr 0xb5c0804, size 0x80, virtual false, abstract: false, final false
inline void set_enableRandomWrite(bool  value) ;

/// @brief Method set_enableRandomWrite_Injected, addr 0xb5c0884, size 0x44, virtual false, abstract: false, final false
static inline void set_enableRandomWrite_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_graphicsFormat, addr 0xb5bfd28, size 0x4, virtual false, abstract: false, final false
inline void set_graphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value) ;

/// @brief Method set_height, addr 0xb5bf95c, size 0x80, virtual true, abstract: false, final false
inline void set_height(int32_t  value) ;

/// @brief Method set_height_Injected, addr 0xb5bf9dc, size 0x44, virtual false, abstract: false, final false
static inline void set_height_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_useDynamicScale, addr 0xb5c097c, size 0x80, virtual false, abstract: false, final false
inline void set_useDynamicScale(bool  value) ;

/// @brief Method set_useDynamicScale_Injected, addr 0xb5c09fc, size 0x44, virtual false, abstract: false, final false
static inline void set_useDynamicScale_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_useMipMap, addr 0xb5bfde0, size 0x80, virtual false, abstract: false, final false
inline void set_useMipMap(bool  value) ;

/// @brief Method set_useMipMap_Injected, addr 0xb5bfe60, size 0x44, virtual false, abstract: false, final false
static inline void set_useMipMap_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_volumeDepth, addr 0xb5c0514, size 0x80, virtual false, abstract: false, final false
inline void set_volumeDepth(int32_t  value) ;

/// @brief Method set_volumeDepth_Injected, addr 0xb5c0594, size 0x44, virtual false, abstract: false, final false
static inline void set_volumeDepth_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_width, addr 0xb5bf7e4, size 0x80, virtual true, abstract: false, final false
inline void set_width(int32_t  value) ;

/// @brief Method set_width_Injected, addr 0xb5bf864, size 0x44, virtual false, abstract: false, final false
static inline void set_width_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderTexture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderTexture", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderTexture(RenderTexture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderTexture", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderTexture(RenderTexture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14957};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::RenderTexture) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
