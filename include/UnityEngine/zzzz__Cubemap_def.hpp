#pragma once
// IWYU pragma private; include "UnityEngine/Cubemap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Cubemap)
namespace System {
class Array;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct TextureCreationFlags;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
struct TextureColorSpace;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine {
class Cubemap;
}
// Write type traits
MARK_REF_T(::UnityEngine::Cubemap*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Cubemap*, "UnityEngine", "Cubemap");
// [ExcludeFromPreset]
// [NativeHeader("Runtime/Graphics/CubemapTexture.h")]
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Cubemap
class CORDL_TYPE Cubemap : public ::UnityEngine::Texture {
public:
// Declarations
 __declspec(property(get=get_desiredMipmapLevel)) int32_t  desiredMipmapLevel;

 __declspec(property(get=get_format)) ::UnityEngine::TextureFormat  format;

 __declspec(property(get=get_isPreProcessed)) bool  isPreProcessed;

 __declspec(property(get=get_isReadable)) bool  isReadable;

 __declspec(property(get=get_loadAllMips, put=set_loadAllMips)) bool  loadAllMips;

 __declspec(property(get=get_loadedMipmapLevel)) int32_t  loadedMipmapLevel;

 __declspec(property(get=get_loadingMipmapLevel)) int32_t  loadingMipmapLevel;

 __declspec(property(get=get_requestedMipmapLevel, put=set_requestedMipmapLevel)) int32_t  requestedMipmapLevel;

 __declspec(property(get=get_streamingMipmaps)) bool  streamingMipmaps;

 __declspec(property(get=get_streamingMipmapsPriority)) int32_t  streamingMipmapsPriority;

/// [ExcludeFromDocs]
/// @brief Method Apply, addr 0xb5bb0b8, size 0xc, virtual false, abstract: false, final false
inline void Apply() ;

/// [ExcludeFromDocs]
/// @brief Method Apply, addr 0xb5bb0b0, size 0x8, virtual false, abstract: false, final false
inline void Apply(bool  updateMipmaps) ;

/// @brief Method Apply, addr 0xb5bb04c, size 0x64, virtual false, abstract: false, final false
inline void Apply(/* [DefaultValue("true")] */ bool  updateMipmaps, /* [DefaultValue("false")] */ bool  makeNoLongerReadable) ;

/// [FreeFunction(Name = "CubemapScripting::Apply", HasExplicitThis = true)]
/// @brief Method ApplyImpl, addr 0xb5b8f38, size 0x90, virtual false, abstract: false, final false
inline void ApplyImpl(bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method ApplyImpl_Injected, addr 0xb5b8fc8, size 0x54, virtual false, abstract: false, final false
static inline void ApplyImpl_Injected(::System::IntPtr  _unity_self, bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// [FreeFunction(Name = "GetTextureStreamingManager().ClearRequestedMipmapLevel", HasExplicitThis = true)]
/// @brief Method ClearRequestedMipmapLevel, addr 0xb5ba5d0, size 0x78, virtual false, abstract: false, final false
inline void ClearRequestedMipmapLevel() ;

/// @brief Method ClearRequestedMipmapLevel_Injected, addr 0xb5ba648, size 0x3c, virtual false, abstract: false, final false
static inline void ClearRequestedMipmapLevel_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method CopyPixels, addr 0xb5bb0c4, size 0x80, virtual false, abstract: false, final false
inline void CopyPixels(::UnityEngine::Texture*  src) ;

/// @brief Method CopyPixels, addr 0xb5bb144, size 0xb0, virtual false, abstract: false, final false
inline void CopyPixels(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, ::UnityEngine::CubemapFace  dstFace, int32_t  dstMip) ;

/// @brief Method CopyPixels, addr 0xb5bb1f4, size 0xf8, virtual false, abstract: false, final false
inline void CopyPixels(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, ::UnityEngine::CubemapFace  dstFace, int32_t  dstMip, int32_t  dstX, int32_t  dstY) ;

/// [FreeFunction(Name = "CubemapScripting::CopyPixels", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method CopyPixels_Full, addr 0xb5b99b8, size 0xb4, virtual false, abstract: false, final false
inline void CopyPixels_Full(::UnityEngine::Texture*  src) ;

/// @brief Method CopyPixels_Full_Injected, addr 0xb5b9a6c, size 0x44, virtual false, abstract: false, final false
static inline void CopyPixels_Full_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src) ;

/// [FreeFunction(Name = "CubemapScripting::CopyPixels", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method CopyPixels_Region, addr 0xb5b9c08, size 0x11c, virtual false, abstract: false, final false
inline void CopyPixels_Region(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, int32_t  dstFace, int32_t  dstMip, int32_t  dstX, int32_t  dstY) ;

/// @brief Method CopyPixels_Region_Injected, addr 0xb5b9d24, size 0xc0, virtual false, abstract: false, final false
static inline void CopyPixels_Region_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, int32_t  dstFace, int32_t  dstMip, int32_t  dstX, int32_t  dstY) ;

/// [FreeFunction(Name = "CubemapScripting::CopyPixels", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method CopyPixels_Slice, addr 0xb5b9ab0, size 0xe4, virtual false, abstract: false, final false
inline void CopyPixels_Slice(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  dstFace, int32_t  dstMip) ;

/// @brief Method CopyPixels_Slice_Injected, addr 0xb5b9b94, size 0x74, virtual false, abstract: false, final false
static inline void CopyPixels_Slice_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  srcElement, int32_t  srcMip, int32_t  dstFace, int32_t  dstMip) ;

/// @brief Method CreateExternalTexture, addr 0xb5bae10, size 0x104, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Cubemap> CreateExternalTexture(int32_t  width, ::UnityEngine::TextureFormat  format, bool  mipmap, ::System::IntPtr  nativeTex) ;

/// [ExcludeFromDocs]
/// @brief Method GetPixel, addr 0xb5bafc8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixel(::UnityEngine::CubemapFace  face, int32_t  x, int32_t  y) ;

/// @brief Method GetPixel, addr 0xb5bafd0, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixel(::UnityEngine::CubemapFace  face, int32_t  x, int32_t  y, /* [DefaultValue("0")] */ int32_t  mip) ;

/// @brief Method GetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> GetPixelData(int32_t  mipLevel, ::UnityEngine::CubemapFace  face) ;

/// [NativeName("GetPixel")]
/// @brief Method GetPixelImpl, addr 0xb5b92c8, size 0xc4, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixelImpl(int32_t  image, int32_t  mip, int32_t  x, int32_t  y) ;

/// @brief Method GetPixelImpl_Injected, addr 0xb5b938c, size 0x74, virtual false, abstract: false, final false
static inline void GetPixelImpl_Injected(::System::IntPtr  _unity_self, int32_t  image, int32_t  mip, int32_t  x, int32_t  y, ::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method GetPixels, addr 0xb5b95b0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color> GetPixels(::UnityEngine::CubemapFace  face) ;

/// [FreeFunction(Name = "CubemapScripting::GetPixels", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetPixels, addr 0xb5b94cc, size 0x90, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color> GetPixels(::UnityEngine::CubemapFace  face, int32_t  miplevel) ;

/// @brief Method GetPixels_Injected, addr 0xb5b955c, size 0x54, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Color> GetPixels_Injected(::System::IntPtr  _unity_self, ::UnityEngine::CubemapFace  face, int32_t  miplevel) ;

/// @brief Method GetWritableImageData, addr 0xb5b9de4, size 0x80, virtual false, abstract: false, final false
inline ::System::IntPtr GetWritableImageData(int32_t  frame) ;

/// @brief Method GetWritableImageData_Injected, addr 0xb5b9e64, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetWritableImageData_Injected(::System::IntPtr  _unity_self, int32_t  frame) ;

/// @brief Method Internal_Create, addr 0xb5b8e64, size 0xd4, virtual false, abstract: false, final false
static inline void Internal_Create(/* [Writable] */ ::UnityEngine::Cubemap*  mono, int32_t  ext, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex) ;

/// [FreeFunction("CubemapScripting::Create")]
/// @brief Method Internal_CreateImpl, addr 0xb5b8de0, size 0x84, virtual false, abstract: false, final false
static inline bool Internal_CreateImpl(/* [Writable] */ ::UnityEngine::Cubemap*  mono, int32_t  ext, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex) ;

/// [FreeFunction(Name = "GetTextureStreamingManager().IsRequestedMipmapLevelLoaded", HasExplicitThis = true)]
/// @brief Method IsRequestedMipmapLevelLoaded, addr 0xb5ba684, size 0x78, virtual false, abstract: false, final false
inline bool IsRequestedMipmapLevelLoaded() ;

/// @brief Method IsRequestedMipmapLevelLoaded_Injected, addr 0xb5ba6fc, size 0x3c, virtual false, abstract: false, final false
static inline bool IsRequestedMipmapLevelLoaded_Injected(::System::IntPtr  _unity_self) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

/// [ExcludeFromDocs]
/// @brief [RequiredByNativeCode]
static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::TextureFormat  format, int32_t  mipCount) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::TextureFormat  format, int32_t  mipCount, /* [DefaultValue("false")] */ bool  createUninitialized) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, /* [DefaultValue("false")] */ bool  createUninitialized) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, ::System::IntPtr  nativeTex, bool  createUninitialized) ;

/// [ExcludeFromDocs]
/// @brief Method SetPixel, addr 0xb5baf14, size 0x8, virtual false, abstract: false, final false
inline void SetPixel(::UnityEngine::CubemapFace  face, int32_t  x, int32_t  y, ::UnityEngine::Color  color) ;

/// @brief Method SetPixel, addr 0xb5baf1c, size 0xac, virtual false, abstract: false, final false
inline void SetPixel(::UnityEngine::CubemapFace  face, int32_t  x, int32_t  y, ::UnityEngine::Color  color, /* [DefaultValue("0")] */ int32_t  mip) ;

/// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetPixelData(::ArrayW<T>  data, int32_t  mipLevel, ::UnityEngine::CubemapFace  face, /* [DefaultValue("0")] */ int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetPixelData(::Unity::Collections::NativeArray_1<T>  data, int32_t  mipLevel, ::UnityEngine::CubemapFace  face, /* [DefaultValue("0")] */ int32_t  sourceDataStartIndex) ;

/// [FreeFunction(Name = "CubemapScripting::SetPixelData", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetPixelDataImpl, addr 0xb5b986c, size 0xc0, virtual false, abstract: false, final false
inline bool SetPixelDataImpl(::System::IntPtr  data, int32_t  mipLevel, int32_t  face, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex) ;

/// [FreeFunction(Name = "CubemapScripting::SetPixelDataArray", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetPixelDataImplArray, addr 0xb5b9728, size 0xc0, virtual false, abstract: false, final false
inline bool SetPixelDataImplArray(::System::Array*  data, int32_t  mipLevel, int32_t  face, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixelDataImplArray_Injected, addr 0xb5b97e8, size 0x84, virtual false, abstract: false, final false
static inline bool SetPixelDataImplArray_Injected(::System::IntPtr  _unity_self, ::System::Array*  data, int32_t  mipLevel, int32_t  face, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixelDataImpl_Injected, addr 0xb5b992c, size 0x84, virtual false, abstract: false, final false
static inline bool SetPixelDataImpl_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  data, int32_t  mipLevel, int32_t  face, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex) ;

/// [NativeName("SetPixel")]
/// @brief Method SetPixelImpl, addr 0xb5b9194, size 0xc0, virtual false, abstract: false, final false
inline void SetPixelImpl(int32_t  image, int32_t  mip, int32_t  x, int32_t  y, ::UnityEngine::Color  color) ;

/// @brief Method SetPixelImpl_Injected, addr 0xb5b9254, size 0x74, virtual false, abstract: false, final false
static inline void SetPixelImpl_Injected(::System::IntPtr  _unity_self, int32_t  image, int32_t  mip, int32_t  x, int32_t  y, ::by_ref<::UnityEngine::Color>  color) ;

/// @brief Method SetPixels, addr 0xb5b99b0, size 0x8, virtual false, abstract: false, final false
inline void SetPixels(::ArrayW<::UnityEngine::Color>  colors, ::UnityEngine::CubemapFace  face) ;

/// [FreeFunction(Name = "CubemapScripting::SetPixels", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetPixels, addr 0xb5b95b8, size 0x114, virtual false, abstract: false, final false
inline void SetPixels(::ArrayW<::UnityEngine::Color>  colors, ::UnityEngine::CubemapFace  face, int32_t  miplevel) ;

/// @brief Method SetPixels_Injected, addr 0xb5b96cc, size 0x5c, virtual false, abstract: false, final false
static inline void SetPixels_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colors, ::UnityEngine::CubemapFace  face, int32_t  miplevel) ;

/// @brief Method SmoothEdges, addr 0xb5b94c4, size 0x8, virtual false, abstract: false, final false
inline void SmoothEdges() ;

/// [NativeName("FixupEdges")]
/// @brief Method SmoothEdges, addr 0xb5b9400, size 0x80, virtual false, abstract: false, final false
inline void SmoothEdges(/* [DefaultValue("1")] */ int32_t  smoothRegionWidthInPixels) ;

/// @brief Method SmoothEdges_Injected, addr 0xb5b9480, size 0x44, virtual false, abstract: false, final false
static inline void SmoothEdges_Injected(::System::IntPtr  _unity_self, /* [DefaultValue("1")] */ int32_t  smoothRegionWidthInPixels) ;

/// [FreeFunction("CubemapScripting::UpdateExternalTexture", HasExplicitThis = true)]
/// @brief Method UpdateExternalTexture, addr 0xb5b901c, size 0x80, virtual false, abstract: false, final false
inline void UpdateExternalTexture(::System::IntPtr  nativeTexture) ;

/// @brief Method UpdateExternalTexture_Injected, addr 0xb5b909c, size 0x44, virtual false, abstract: false, final false
static inline void UpdateExternalTexture_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  nativeTexture) ;

/// @brief Method ValidateFormat, addr 0xb5ba808, size 0x128, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  width) ;

/// @brief Method ValidateFormat, addr 0xb5ba738, size 0xd0, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::TextureFormat  format, int32_t  width) ;

/// @brief Method ValidateIsNotCrunched, addr 0xb5bab1c, size 0x54, virtual false, abstract: false, final false
static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5ba930, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5ba9f4, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

/// [ExcludeFromDocs]
/// [RequiredByNativeCode]
/// @brief Method .ctor, addr 0xb5ba96c, size 0x88, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5baa40, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0xb5badf8, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::TextureFormat  format, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0xb5bae04, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::TextureFormat  format, int32_t  mipCount, /* [DefaultValue("false")] */ bool  createUninitialized) ;

/// @brief Method .ctor, addr 0xb5baccc, size 0x90, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

/// @brief Method .ctor, addr 0xb5bad5c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, /* [DefaultValue("false")] */ bool  createUninitialized) ;

/// @brief Method .ctor, addr 0xb5bab70, size 0x15c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, ::System::IntPtr  nativeTex, bool  createUninitialized) ;

/// [FreeFunction(Name = "GetTextureStreamingManager().GetDesiredMipmapLevel", HasExplicitThis = true)]
/// @brief Method get_desiredMipmapLevel, addr 0xb5ba3b4, size 0x78, virtual false, abstract: false, final false
inline int32_t get_desiredMipmapLevel() ;

/// @brief Method get_desiredMipmapLevel_Injected, addr 0xb5ba42c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_desiredMipmapLevel_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("GetTextureFormat")]
/// @brief Method get_format, addr 0xb5b8d2c, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::TextureFormat get_format() ;

/// @brief Method get_format_Injected, addr 0xb5b8da4, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::TextureFormat get_format_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isPreProcessed, addr 0xb5b9ea8, size 0x78, virtual false, abstract: false, final false
inline bool get_isPreProcessed() ;

/// @brief Method get_isPreProcessed_Injected, addr 0xb5b9f20, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isPreProcessed_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isReadable, addr 0xb5b90e0, size 0x78, virtual true, abstract: false, final false
inline bool get_isReadable() ;

/// @brief Method get_isReadable_Injected, addr 0xb5b9158, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isReadable_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction(Name = "GetTextureStreamingManager().GetLoadAllMips", HasExplicitThis = true)]
/// @brief Method get_loadAllMips, addr 0xb5ba23c, size 0x78, virtual false, abstract: false, final false
inline bool get_loadAllMips() ;

/// @brief Method get_loadAllMips_Injected, addr 0xb5ba2b4, size 0x3c, virtual false, abstract: false, final false
static inline bool get_loadAllMips_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction(Name = "GetTextureStreamingManager().GetLoadedMipmapLevel", HasExplicitThis = true)]
/// @brief Method get_loadedMipmapLevel, addr 0xb5ba51c, size 0x78, virtual false, abstract: false, final false
inline int32_t get_loadedMipmapLevel() ;

/// @brief Method get_loadedMipmapLevel_Injected, addr 0xb5ba594, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_loadedMipmapLevel_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction(Name = "GetTextureStreamingManager().GetLoadingMipmapLevel", HasExplicitThis = true)]
/// @brief Method get_loadingMipmapLevel, addr 0xb5ba468, size 0x78, virtual false, abstract: false, final false
inline int32_t get_loadingMipmapLevel() ;

/// @brief Method get_loadingMipmapLevel_Injected, addr 0xb5ba4e0, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_loadingMipmapLevel_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction(Name = "GetTextureStreamingManager().GetRequestedMipmapLevel", HasExplicitThis = true)]
/// @brief Method get_requestedMipmapLevel, addr 0xb5ba0c4, size 0x78, virtual false, abstract: false, final false
inline int32_t get_requestedMipmapLevel() ;

/// @brief Method get_requestedMipmapLevel_Injected, addr 0xb5ba13c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_requestedMipmapLevel_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_streamingMipmaps, addr 0xb5b9f5c, size 0x78, virtual false, abstract: false, final false
inline bool get_streamingMipmaps() ;

/// @brief Method get_streamingMipmapsPriority, addr 0xb5ba010, size 0x78, virtual false, abstract: false, final false
inline int32_t get_streamingMipmapsPriority() ;

/// @brief Method get_streamingMipmapsPriority_Injected, addr 0xb5ba088, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_streamingMipmapsPriority_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_streamingMipmaps_Injected, addr 0xb5b9fd4, size 0x3c, virtual false, abstract: false, final false
static inline bool get_streamingMipmaps_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction(Name = "GetTextureStreamingManager().SetLoadAllMips", HasExplicitThis = true)]
/// @brief Method set_loadAllMips, addr 0xb5ba2f0, size 0x80, virtual false, abstract: false, final false
inline void set_loadAllMips(bool  value) ;

/// @brief Method set_loadAllMips_Injected, addr 0xb5ba370, size 0x44, virtual false, abstract: false, final false
static inline void set_loadAllMips_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// [FreeFunction(Name = "GetTextureStreamingManager().SetRequestedMipmapLevel", HasExplicitThis = true)]
/// @brief Method set_requestedMipmapLevel, addr 0xb5ba178, size 0x80, virtual false, abstract: false, final false
inline void set_requestedMipmapLevel(int32_t  value) ;

/// @brief Method set_requestedMipmapLevel_Injected, addr 0xb5ba1f8, size 0x44, virtual false, abstract: false, final false
static inline void set_requestedMipmapLevel_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Cubemap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Cubemap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Cubemap(Cubemap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Cubemap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Cubemap(Cubemap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14953};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Cubemap) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
