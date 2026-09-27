#pragma once
// IWYU pragma private; include "UnityEngine/Texture2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Texture2D)
namespace GlobalNamespace {
struct Texture2D_EXRFlags;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
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
struct BlittableArrayWrapper;
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
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct MipmapLimitDescriptor;
}
namespace UnityEngine {
struct Rect;
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
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Texture2D;
}
// Write type traits
MARK_REF_T(::UnityEngine::Texture2D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Texture2D*, "UnityEngine", "Texture2D");
// [NativeHeader("Runtime/Graphics/Texture2D.h")]
// [HelpURL("texture-type-default")]
// [ExcludeFromPreset]
// [NativeHeader("Runtime/Graphics/GeneratedTextures.h")]
// [UsedByNativeCode]
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Texture2D
class CORDL_TYPE Texture2D : public ::UnityEngine::Texture {
public:
// Declarations
using EXRFlags = ::GlobalNamespace::Texture2D_EXRFlags;

 __declspec(property(get=get_activeMipmapLimit)) int32_t  activeMipmapLimit;

 __declspec(property(get=get_calculatedMipmapLevel)) int32_t  calculatedMipmapLevel;

 __declspec(property(get=get_desiredMipmapLevel)) int32_t  desiredMipmapLevel;

 __declspec(property(get=get_format)) ::UnityEngine::TextureFormat  format;

 __declspec(property(get=get_ignoreMipmapLimit, put=set_ignoreMipmapLimit)) bool  ignoreMipmapLimit;

 __declspec(property(get=get_isPreProcessed)) bool  isPreProcessed;

 __declspec(property(get=get_isReadable)) bool  isReadable;

 __declspec(property(get=get_loadAllMips, put=set_loadAllMips)) bool  loadAllMips;

 __declspec(property(get=get_loadedMipmapLevel)) int32_t  loadedMipmapLevel;

 __declspec(property(get=get_loadingMipmapLevel)) int32_t  loadingMipmapLevel;

 __declspec(property(get=get_minimumMipmapLevel, put=set_minimumMipmapLevel)) int32_t  minimumMipmapLevel;

 __declspec(property(get=get_mipmapLimitGroup)) ::StringW  mipmapLimitGroup;

 __declspec(property(get=get_requestedMipmapLevel, put=set_requestedMipmapLevel)) int32_t  requestedMipmapLevel;

 __declspec(property(get=get_streamingMipmaps)) bool  streamingMipmaps;

 __declspec(property(get=get_streamingMipmapsPriority)) int32_t  streamingMipmapsPriority;

/// [NativeConditional("ENABLE_VIRTUALTEXTURING && UNITY_EDITOR")]
/// @brief [NativeName("VTOnly")]
 __declspec(property(get=get_vtOnly)) bool  vtOnly;

/// [ExcludeFromDocs]
/// @brief Method Apply, addr 0xb5b86e4, size 0xc, virtual false, abstract: false, final false
inline void Apply() ;

/// [ExcludeFromDocs]
/// @brief Method Apply, addr 0xb5b86dc, size 0x8, virtual false, abstract: false, final false
inline void Apply(bool  updateMipmaps) ;

/// @brief Method Apply, addr 0xb5b8678, size 0x64, virtual false, abstract: false, final false
inline void Apply(/* [DefaultValue("true")] */ bool  updateMipmaps, /* [DefaultValue("false")] */ bool  makeNoLongerReadable) ;

/// [NativeName("Apply")]
/// @brief Method ApplyImpl, addr 0xb5b48c0, size 0x90, virtual false, abstract: false, final false
inline void ApplyImpl(bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method ApplyImpl_Injected, addr 0xb5b4950, size 0x54, virtual false, abstract: false, final false
static inline void ApplyImpl_Injected(::System::IntPtr  _unity_self, bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// [FreeFunction(Name = "GetTextureStreamingManager().ClearMinimumMipmapLevel", HasExplicitThis = true)]
/// @brief Method ClearMinimumMipmapLevel, addr 0xb5b6604, size 0x78, virtual false, abstract: false, final false
inline void ClearMinimumMipmapLevel() ;

/// @brief Method ClearMinimumMipmapLevel_Injected, addr 0xb5b667c, size 0x3c, virtual false, abstract: false, final false
static inline void ClearMinimumMipmapLevel_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction(Name = "GetTextureStreamingManager().ClearRequestedMipmapLevel", HasExplicitThis = true)]
/// @brief Method ClearRequestedMipmapLevel, addr 0xb5b649c, size 0x78, virtual false, abstract: false, final false
inline void ClearRequestedMipmapLevel() ;

/// @brief Method ClearRequestedMipmapLevel_Injected, addr 0xb5b6514, size 0x3c, virtual false, abstract: false, final false
static inline void ClearRequestedMipmapLevel_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Compress, addr 0xb5b4358, size 0x80, virtual false, abstract: false, final false
inline void Compress(bool  highQuality) ;

/// @brief Method Compress_Injected, addr 0xb5b43d8, size 0x44, virtual false, abstract: false, final false
static inline void Compress_Injected(::System::IntPtr  _unity_self, bool  highQuality) ;

/// @brief Method CopyPixels, addr 0xb5b8ac4, size 0x80, virtual false, abstract: false, final false
inline void CopyPixels(::UnityEngine::Texture*  src) ;

/// @brief Method CopyPixels, addr 0xb5b8b44, size 0xa0, virtual false, abstract: false, final false
inline void CopyPixels(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  dstMip) ;

/// @brief Method CopyPixels, addr 0xb5b8be4, size 0xe8, virtual false, abstract: false, final false
inline void CopyPixels(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, int32_t  dstMip, int32_t  dstX, int32_t  dstY) ;

/// [FreeFunction(Name = "Texture2DScripting::CopyPixels", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method CopyPixels_Full, addr 0xb5b6e70, size 0xb4, virtual false, abstract: false, final false
inline void CopyPixels_Full(::UnityEngine::Texture*  src) ;

/// @brief Method CopyPixels_Full_Injected, addr 0xb5b6f24, size 0x44, virtual false, abstract: false, final false
static inline void CopyPixels_Full_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src) ;

/// [FreeFunction(Name = "Texture2DScripting::CopyPixels", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method CopyPixels_Region, addr 0xb5b70a8, size 0x114, virtual false, abstract: false, final false
inline void CopyPixels_Region(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, int32_t  dstMip, int32_t  dstX, int32_t  dstY) ;

/// @brief Method CopyPixels_Region_Injected, addr 0xb5b71bc, size 0xb0, virtual false, abstract: false, final false
static inline void CopyPixels_Region_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, int32_t  dstMip, int32_t  dstX, int32_t  dstY) ;

/// [FreeFunction(Name = "Texture2DScripting::CopyPixels", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method CopyPixels_Slice, addr 0xb5b6f68, size 0xd4, virtual false, abstract: false, final false
inline void CopyPixels_Slice(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  dstMip) ;

/// @brief Method CopyPixels_Slice_Injected, addr 0xb5b703c, size 0x6c, virtual false, abstract: false, final false
static inline void CopyPixels_Slice_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  srcElement, int32_t  srcMip, int32_t  dstMip) ;

/// @brief Method CreateExternalTexture, addr 0xb5b7ed8, size 0xf8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> CreateExternalTexture(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  format, bool  mipChain, bool  linear, ::System::IntPtr  nativeTex) ;

/// @brief Method GenerateAtlas, addr 0xb5b8888, size 0x1b0, virtual false, abstract: false, final false
static inline bool GenerateAtlas(::ArrayW<::UnityEngine::Vector2>  sizes, int32_t  padding, int32_t  atlasSize, ::System::Collections::Generic::List_1<::UnityEngine::Rect>*  results) ;

/// [FreeFunction("Texture2DScripting::GenerateAtlas")]
/// @brief Method GenerateAtlasImpl, addr 0xb5b5928, size 0x1c4, virtual false, abstract: false, final false
static inline void GenerateAtlasImpl(::ArrayW<::UnityEngine::Vector2>  sizes, int32_t  padding, int32_t  atlasSize, ::by_ref<::ArrayW<::UnityEngine::Rect>>  rect) ;

/// @brief Method GenerateAtlasImpl_Injected, addr 0xb5b5aec, size 0x5c, virtual false, abstract: false, final false
static inline void GenerateAtlasImpl_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  sizes, int32_t  padding, int32_t  atlasSize, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  rect) ;

/// @brief Method GetImageDataSize, addr 0xb5b5874, size 0x78, virtual false, abstract: false, final false
inline uint64_t GetImageDataSize() ;

/// @brief Method GetImageDataSize_Injected, addr 0xb5b58ec, size 0x3c, virtual false, abstract: false, final false
static inline uint64_t GetImageDataSize_Injected(::System::IntPtr  _unity_self) ;

/// [ExcludeFromDocs]
/// @brief Method GetPixel, addr 0xb5b8298, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixel(int32_t  x, int32_t  y) ;

/// @brief Method GetPixel, addr 0xb5b8304, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixel(int32_t  x, int32_t  y, /* [DefaultValue("0")] */ int32_t  mipLevel) ;

/// [ExcludeFromDocs]
/// @brief Method GetPixelBilinear, addr 0xb5b837c, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixelBilinear(float_t  u, float_t  v) ;

/// @brief Method GetPixelBilinear, addr 0xb5b83e4, size 0x74, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixelBilinear(float_t  u, float_t  v, /* [DefaultValue("0")] */ int32_t  mipLevel) ;

/// [NativeName("GetPixelBilinear")]
/// @brief Method GetPixelBilinearImpl, addr 0xb5b4cf4, size 0xc4, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixelBilinearImpl(int32_t  image, int32_t  mip, float_t  u, float_t  v) ;

/// @brief Method GetPixelBilinearImpl_Injected, addr 0xb5b4db8, size 0x74, virtual false, abstract: false, final false
static inline void GetPixelBilinearImpl_Injected(::System::IntPtr  _unity_self, int32_t  image, int32_t  mip, float_t  u, float_t  v, ::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method GetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> GetPixelData(int32_t  mipLevel) ;

/// [NativeName("GetPixel")]
/// @brief Method GetPixelImpl, addr 0xb5b4bbc, size 0xc4, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixelImpl(int32_t  image, int32_t  mip, int32_t  x, int32_t  y) ;

/// @brief Method GetPixelImpl_Injected, addr 0xb5b4c80, size 0x74, virtual false, abstract: false, final false
static inline void GetPixelImpl_Injected(::System::IntPtr  _unity_self, int32_t  image, int32_t  mip, int32_t  x, int32_t  y, ::by_ref<::UnityEngine::Color>  ret) ;

/// [ExcludeFromDocs]
/// @brief Method GetPixels, addr 0xb5b8abc, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color> GetPixels() ;

/// @brief Method GetPixels, addr 0xb5b8a50, size 0x6c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color> GetPixels(/* [DefaultValue("0")] */ int32_t  miplevel) ;

/// [ExcludeFromDocs]
/// @brief Method GetPixels, addr 0xb5b6c74, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color> GetPixels(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight) ;

/// [FreeFunction("Texture2DScripting::GetPixels", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetPixels, addr 0xb5b6b50, size 0xb0, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color> GetPixels(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, /* [DefaultValue("0")] */ int32_t  miplevel) ;

/// [ExcludeFromDocs]
/// @brief Method GetPixels32, addr 0xb5b6d40, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color32> GetPixels32() ;

/// [FreeFunction("Texture2DScripting::GetPixels32", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetPixels32, addr 0xb5b6c7c, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color32> GetPixels32(/* [DefaultValue("0")] */ int32_t  miplevel) ;

/// @brief Method GetPixels32_Injected, addr 0xb5b6cfc, size 0x44, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Color32> GetPixels32_Injected(::System::IntPtr  _unity_self, /* [DefaultValue("0")] */ int32_t  miplevel) ;

/// @brief Method GetPixels_Injected, addr 0xb5b6c00, size 0x74, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Color> GetPixels_Injected(::System::IntPtr  _unity_self, int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, /* [DefaultValue("0")] */ int32_t  miplevel) ;

/// [FreeFunction("Texture2DScripting::GetRawTextureData", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetRawTextureData, addr 0xb5b6a9c, size 0x78, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetRawTextureData() ;

/// @brief Method GetRawTextureData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> GetRawTextureData() ;

/// @brief Method GetRawTextureData_Injected, addr 0xb5b6b14, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> GetRawTextureData_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetWritableImageData, addr 0xb5b57b0, size 0x80, virtual false, abstract: false, final false
inline ::System::IntPtr GetWritableImageData(int32_t  frame) ;

/// @brief Method GetWritableImageData_Injected, addr 0xb5b5830, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetWritableImageData_Injected(::System::IntPtr  _unity_self, int32_t  frame) ;

/// @brief Method IgnoreMipmapLimit, addr 0xb5b3c8c, size 0x78, virtual false, abstract: false, final false
inline bool IgnoreMipmapLimit() ;

/// @brief Method IgnoreMipmapLimit_Injected, addr 0xb5b3d04, size 0x3c, virtual false, abstract: false, final false
static inline bool IgnoreMipmapLimit_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Internal_Create, addr 0xb5b46e4, size 0x74, virtual false, abstract: false, final false
static inline void Internal_Create(/* [Writable] */ ::UnityEngine::Texture2D*  mono, int32_t  w, int32_t  h, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName) ;

/// [FreeFunction("Texture2DScripting::CreateEmpty")]
/// @brief Method Internal_CreateEmptyImpl, addr 0xb5b441c, size 0x3c, virtual false, abstract: false, final false
static inline bool Internal_CreateEmptyImpl(/* [Writable] */ ::UnityEngine::Texture2D*  mono) ;

/// [FreeFunction("Texture2DScripting::Create")]
/// @brief Method Internal_CreateImpl, addr 0xb5b4458, size 0x1e4, virtual false, abstract: false, final false
static inline bool Internal_CreateImpl(/* [Writable] */ ::UnityEngine::Texture2D*  mono, int32_t  w, int32_t  h, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName) ;

/// @brief Method Internal_CreateImpl_Injected, addr 0xb5b463c, size 0xa8, virtual false, abstract: false, final false
static inline bool Internal_CreateImpl_Injected(/* [Writable] */ ::UnityEngine::Texture2D*  mono, int32_t  w, int32_t  h, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex, bool  ignoreMipmapLimit, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  mipmapLimitGroupName) ;

/// [FreeFunction(Name = "GetTextureStreamingManager().IsRequestedMipmapLevelLoaded", HasExplicitThis = true)]
/// @brief Method IsRequestedMipmapLevelLoaded, addr 0xb5b6550, size 0x78, virtual false, abstract: false, final false
inline bool IsRequestedMipmapLevelLoaded() ;

/// @brief Method IsRequestedMipmapLevelLoaded_Injected, addr 0xb5b65c8, size 0x3c, virtual false, abstract: false, final false
static inline bool IsRequestedMipmapLevelLoaded_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method LoadRawTextureData, addr 0xb5b8570, size 0x108, virtual false, abstract: false, final false
inline void LoadRawTextureData(::ArrayW<uint8_t>  data) ;

/// @brief Method LoadRawTextureData, addr 0xb5b8458, size 0x118, virtual false, abstract: false, final false
inline void LoadRawTextureData(::System::IntPtr  data, int32_t  size) ;

/// @brief Method LoadRawTextureData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void LoadRawTextureData(::Unity::Collections::NativeArray_1<T>  data) ;

/// [FreeFunction(Name = "Texture2DScripting::LoadRawData", HasExplicitThis = true)]
/// @brief Method LoadRawTextureDataImpl, addr 0xb5b5340, size 0x90, virtual false, abstract: false, final false
inline bool LoadRawTextureDataImpl(::System::IntPtr  data, uint64_t  size) ;

/// [FreeFunction(Name = "Texture2DScripting::LoadRawData", HasExplicitThis = true)]
/// @brief Method LoadRawTextureDataImplArray, addr 0xb5b5424, size 0x100, virtual false, abstract: false, final false
inline bool LoadRawTextureDataImplArray(::ArrayW<uint8_t>  data) ;

/// @brief Method LoadRawTextureDataImplArray_Injected, addr 0xb5b5524, size 0x44, virtual false, abstract: false, final false
static inline bool LoadRawTextureDataImplArray_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  data) ;

/// @brief Method LoadRawTextureDataImpl_Injected, addr 0xb5b53d0, size 0x54, virtual false, abstract: false, final false
static inline bool LoadRawTextureDataImpl_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  data, uint64_t  size) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// [Obsolete("Please provide mipmap limit information using a MipmapLimitDescriptor argument", false)]
/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, int32_t  mipCount, ::StringW  mipmapLimitGroupName, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::System::IntPtr  nativeTex, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// [ExcludeFromDocs]
/// @brief [Obsolete("Please provide mipmap limit information using a MipmapLimitDescriptor argument", false)]
static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount, ::StringW  mipmapLimitGroupName, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, ::System::IntPtr  nativeTex, bool  createUninitialized, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat  textureFormat, /* [DefaultValue("true")] */ bool  mipChain, /* [DefaultValue("false")] */ bool  linear) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat  textureFormat, /* [DefaultValue("true")] */ bool  mipChain, /* [DefaultValue("false")] */ bool  linear, /* [DefaultValue("false")] */ bool  createUninitialized) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat  textureFormat, /* [DefaultValue("-1")] */ int32_t  mipCount, /* [DefaultValue("false")] */ bool  linear) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat  textureFormat, /* [DefaultValue("-1")] */ int32_t  mipCount, /* [DefaultValue("false")] */ bool  linear, /* [DefaultValue("false")] */ bool  createUninitialized) ;

/// @brief [Obsolete("Please provide mipmap limit information using a MipmapLimitDescriptor argument", false)]
static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat  textureFormat, /* [DefaultValue("-1")] */ int32_t  mipCount, /* [DefaultValue("false")] */ bool  linear, /* [DefaultValue("false")] */ bool  createUninitialized, /* [DefaultValue("true")] */ bool  ignoreMipmapLimit, /* [DefaultValue("null")] */ ::StringW  mipmapLimitGroupName) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat  textureFormat, /* [DefaultValue("-1")] */ int32_t  mipCount, /* [DefaultValue("false")] */ bool  linear, /* [DefaultValue("false")] */ bool  createUninitialized, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// @brief Method PackTextures, addr 0xb5b6e64, size 0xc, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Rect> PackTextures(::ArrayW<::UnityEngine::Texture2D*>  textures, int32_t  padding) ;

/// @brief Method PackTextures, addr 0xb5b6e5c, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Rect> PackTextures(::ArrayW<::UnityEngine::Texture2D*>  textures, int32_t  padding, int32_t  maximumAtlasSize) ;

/// [FreeFunction("Texture2DScripting::PackTextures", HasExplicitThis = true)]
/// @brief Method PackTextures, addr 0xb5b6d48, size 0xa8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Rect> PackTextures(::ArrayW<::UnityEngine::Texture2D*>  textures, int32_t  padding, int32_t  maximumAtlasSize, bool  makeNoLongerReadable) ;

/// @brief Method PackTextures_Injected, addr 0xb5b6df0, size 0x6c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Rect> PackTextures_Injected(::System::IntPtr  _unity_self, ::ArrayW<::UnityEngine::Texture2D*>  textures, int32_t  padding, int32_t  maximumAtlasSize, bool  makeNoLongerReadable) ;

/// [ExcludeFromDocs]
/// @brief Method ReadPixels, addr 0xb5b8880, size 0x8, virtual false, abstract: false, final false
inline void ReadPixels(::UnityEngine::Rect  source, int32_t  destX, int32_t  destY) ;

/// @brief Method ReadPixels, addr 0xb5b87e0, size 0xa0, virtual false, abstract: false, final false
inline void ReadPixels(::UnityEngine::Rect  source, int32_t  destX, int32_t  destY, /* [DefaultValue("true")] */ bool  recalculateMipMaps) ;

/// [FreeFunction(Name = "Texture2DScripting::ReadPixels", HasExplicitThis = true)]
/// @brief Method ReadPixelsImpl, addr 0xb5b5054, size 0xb0, virtual false, abstract: false, final false
inline void ReadPixelsImpl(::UnityEngine::Rect  source, int32_t  destX, int32_t  destY, bool  recalculateMipMaps) ;

/// @brief Method ReadPixelsImpl_Injected, addr 0xb5b5104, size 0x6c, virtual false, abstract: false, final false
static inline void ReadPixelsImpl_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  source, int32_t  destX, int32_t  destY, bool  recalculateMipMaps) ;

/// @brief Method Reinitialize, addr 0xb5b86f0, size 0x64, virtual false, abstract: false, final false
inline bool Reinitialize(int32_t  width, int32_t  height) ;

/// @brief Method Reinitialize, addr 0xb5b8758, size 0x7c, virtual false, abstract: false, final false
inline bool Reinitialize(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, bool  hasMipMap) ;

/// @brief Method Reinitialize, addr 0xb5b8754, size 0x4, virtual false, abstract: false, final false
inline bool Reinitialize(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  format, bool  hasMipMap) ;

/// [NativeName("Reinitialize")]
/// @brief Method ReinitializeImpl, addr 0xb5b49a4, size 0x90, virtual false, abstract: false, final false
inline bool ReinitializeImpl(int32_t  width, int32_t  height) ;

/// @brief Method ReinitializeImpl_Injected, addr 0xb5b4a34, size 0x54, virtual false, abstract: false, final false
static inline bool ReinitializeImpl_Injected(::System::IntPtr  _unity_self, int32_t  width, int32_t  height) ;

/// [FreeFunction(Name = "Texture2DScripting::ReinitializeWithFormat", HasExplicitThis = true)]
/// @brief Method ReinitializeWithFormatImpl, addr 0xb5b4e2c, size 0xa8, virtual false, abstract: false, final false
inline bool ReinitializeWithFormatImpl(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, bool  hasMipMap) ;

/// @brief Method ReinitializeWithFormatImpl_Injected, addr 0xb5b4ed4, size 0x6c, virtual false, abstract: false, final false
static inline bool ReinitializeWithFormatImpl_Injected(::System::IntPtr  _unity_self, int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, bool  hasMipMap) ;

/// [FreeFunction(Name = "Texture2DScripting::ReinitializeWithTextureFormat", HasExplicitThis = true)]
/// @brief Method ReinitializeWithTextureFormatImpl, addr 0xb5b4f40, size 0xa8, virtual false, abstract: false, final false
inline bool ReinitializeWithTextureFormatImpl(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  hasMipMap) ;

/// @brief Method ReinitializeWithTextureFormatImpl_Injected, addr 0xb5b4fe8, size 0x6c, virtual false, abstract: false, final false
static inline bool ReinitializeWithTextureFormatImpl_Injected(::System::IntPtr  _unity_self, int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  hasMipMap) ;

/// [Obsolete("Texture2D.Resize(int, int) has been deprecated because it actually reinitializes the texture. Use Texture2D.Reinitialize(int, int) instead (UnityUpgradable) -> Reinitialize([*] System.Int32, [*] System.Int32)", false)]
/// @brief Method Resize, addr 0xb5b87d4, size 0x4, virtual false, abstract: false, final false
inline bool Resize(int32_t  width, int32_t  height) ;

/// [Obsolete("Texture2D.Resize(int, int, GraphicsFormat, bool) has been deprecated because it actually reinitializes the texture. Use Texture2D.Reinitialize(int, int, GraphicsFormat, bool) instead (UnityUpgradable) -> Reinitialize([*] System.Int32, [*] System.Int32, UnityEngine.Experimental.Rendering.GraphicsFormat, [*] System.Boolean)", false)]
/// @brief Method Resize, addr 0xb5b87dc, size 0x4, virtual false, abstract: false, final false
inline bool Resize(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, bool  hasMipMap) ;

/// [Obsolete("Texture2D.Resize(int, int, TextureFormat, bool) has been deprecated because it actually reinitializes the texture. Use Texture2D.Reinitialize(int, int, TextureFormat, bool) instead (UnityUpgradable) -> Reinitialize([*] System.Int32, [*] System.Int32, UnityEngine.TextureFormat, [*] System.Boolean)", false)]
/// @brief Method Resize, addr 0xb5b87d8, size 0x4, virtual false, abstract: false, final false
inline bool Resize(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  format, bool  hasMipMap) ;

/// [FreeFunction("Texture2DScripting::SetAllPixels32", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetAllPixels32, addr 0xb5b677c, size 0x10c, virtual false, abstract: false, final false
inline void SetAllPixels32(::ArrayW<::UnityEngine::Color32>  colors, int32_t  miplevel) ;

/// @brief Method SetAllPixels32_Injected, addr 0xb5b6888, size 0x54, virtual false, abstract: false, final false
static inline void SetAllPixels32_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colors, int32_t  miplevel) ;

/// [FreeFunction("Texture2DScripting::SetBlockOfPixels32", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetBlockOfPixels32, addr 0xb5b68dc, size 0x13c, virtual false, abstract: false, final false
inline void SetBlockOfPixels32(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, ::ArrayW<::UnityEngine::Color32>  colors, int32_t  miplevel) ;

/// @brief Method SetBlockOfPixels32_Injected, addr 0xb5b6a18, size 0x84, virtual false, abstract: false, final false
static inline void SetBlockOfPixels32_Injected(::System::IntPtr  _unity_self, int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colors, int32_t  miplevel) ;

/// @brief Method SetIgnoreMipmapLimitAndReload, addr 0xb5b3d40, size 0x80, virtual false, abstract: false, final false
inline void SetIgnoreMipmapLimitAndReload(bool  value) ;

/// @brief Method SetIgnoreMipmapLimitAndReload_Injected, addr 0xb5b3dc0, size 0x44, virtual false, abstract: false, final false
static inline void SetIgnoreMipmapLimitAndReload_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// [ExcludeFromDocs]
/// @brief Method SetPixel, addr 0xb5b7fd0, size 0x9c, virtual false, abstract: false, final false
inline void SetPixel(int32_t  x, int32_t  y, ::UnityEngine::Color  color) ;

/// @brief Method SetPixel, addr 0xb5b806c, size 0xa8, virtual false, abstract: false, final false
inline void SetPixel(int32_t  x, int32_t  y, ::UnityEngine::Color  color, /* [DefaultValue("0")] */ int32_t  mipLevel) ;

/// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetPixelData(::ArrayW<T>  data, int32_t  mipLevel, /* [DefaultValue("0")] */ int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetPixelData(::Unity::Collections::NativeArray_1<T>  data, int32_t  mipLevel, /* [DefaultValue("0")] */ int32_t  sourceDataStartIndex) ;

/// [FreeFunction(Name = "Texture2DScripting::SetPixelData", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetPixelDataImpl, addr 0xb5b568c, size 0xb0, virtual false, abstract: false, final false
inline bool SetPixelDataImpl(::System::IntPtr  data, int32_t  mipLevel, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex) ;

/// [FreeFunction(Name = "Texture2DScripting::SetPixelDataArray", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetPixelDataImplArray, addr 0xb5b5568, size 0xb0, virtual false, abstract: false, final false
inline bool SetPixelDataImplArray(::System::Array*  data, int32_t  mipLevel, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixelDataImplArray_Injected, addr 0xb5b5618, size 0x74, virtual false, abstract: false, final false
static inline bool SetPixelDataImplArray_Injected(::System::IntPtr  _unity_self, ::System::Array*  data, int32_t  mipLevel, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixelDataImpl_Injected, addr 0xb5b573c, size 0x74, virtual false, abstract: false, final false
static inline bool SetPixelDataImpl_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  data, int32_t  mipLevel, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex) ;

/// [NativeName("SetPixel")]
/// @brief Method SetPixelImpl, addr 0xb5b4a88, size 0xc0, virtual false, abstract: false, final false
inline void SetPixelImpl(int32_t  image, int32_t  mip, int32_t  x, int32_t  y, ::UnityEngine::Color  color) ;

/// @brief Method SetPixelImpl_Injected, addr 0xb5b4b48, size 0x74, virtual false, abstract: false, final false
static inline void SetPixelImpl_Injected(::System::IntPtr  _unity_self, int32_t  image, int32_t  mip, int32_t  x, int32_t  y, ::by_ref<::UnityEngine::Color>  color) ;

/// [ExcludeFromDocs]
/// @brief Method SetPixels, addr 0xb5b823c, size 0x5c, virtual false, abstract: false, final false
inline void SetPixels(::ArrayW<::UnityEngine::Color>  colors) ;

/// @brief Method SetPixels, addr 0xb5b81c0, size 0x7c, virtual false, abstract: false, final false
inline void SetPixels(::ArrayW<::UnityEngine::Color>  colors, /* [DefaultValue("0")] */ int32_t  miplevel) ;

/// [ExcludeFromDocs]
/// @brief Method SetPixels, addr 0xb5b81b8, size 0x8, virtual false, abstract: false, final false
inline void SetPixels(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, ::ArrayW<::UnityEngine::Color>  colors) ;

/// @brief Method SetPixels, addr 0xb5b8114, size 0xa4, virtual false, abstract: false, final false
inline void SetPixels(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, ::ArrayW<::UnityEngine::Color>  colors, /* [DefaultValue("0")] */ int32_t  miplevel) ;

/// [ExcludeFromDocs]
/// @brief Method SetPixels32, addr 0xb5b8a3c, size 0x8, virtual false, abstract: false, final false
inline void SetPixels32(::ArrayW<::UnityEngine::Color32>  colors) ;

/// @brief Method SetPixels32, addr 0xb5b8a38, size 0x4, virtual false, abstract: false, final false
inline void SetPixels32(::ArrayW<::UnityEngine::Color32>  colors, /* [DefaultValue("0")] */ int32_t  miplevel) ;

/// [ExcludeFromDocs]
/// @brief Method SetPixels32, addr 0xb5b8a48, size 0x8, virtual false, abstract: false, final false
inline void SetPixels32(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, ::ArrayW<::UnityEngine::Color32>  colors) ;

/// @brief Method SetPixels32, addr 0xb5b8a44, size 0x4, virtual false, abstract: false, final false
inline void SetPixels32(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, ::ArrayW<::UnityEngine::Color32>  colors, /* [DefaultValue("0")] */ int32_t  miplevel) ;

/// [FreeFunction(Name = "Texture2DScripting::SetPixels", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetPixelsImpl, addr 0xb5b5170, size 0x144, virtual false, abstract: false, final false
inline void SetPixelsImpl(int32_t  x, int32_t  y, int32_t  w, int32_t  h, ::ArrayW<::UnityEngine::Color>  pixel, int32_t  miplevel, int32_t  frame) ;

/// @brief Method SetPixelsImpl_Injected, addr 0xb5b52b4, size 0x8c, virtual false, abstract: false, final false
static inline void SetPixelsImpl_Injected(::System::IntPtr  _unity_self, int32_t  x, int32_t  y, int32_t  w, int32_t  h, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  pixel, int32_t  miplevel, int32_t  frame) ;

/// [FreeFunction("Texture2DScripting::UpdateExternalTexture", HasExplicitThis = true)]
/// @brief Method UpdateExternalTexture, addr 0xb5b66b8, size 0x80, virtual false, abstract: false, final false
inline void UpdateExternalTexture(::System::IntPtr  nativeTex) ;

/// @brief Method UpdateExternalTexture_Injected, addr 0xb5b6738, size 0x44, virtual false, abstract: false, final false
static inline void UpdateExternalTexture_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  nativeTex) ;

/// @brief Method ValidateFormat, addr 0xb5b7348, size 0x134, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  width, int32_t  height) ;

/// @brief Method ValidateFormat, addr 0xb5b726c, size 0xdc, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::TextureFormat  format, int32_t  width, int32_t  height) ;

/// @brief Method .ctor, addr 0xb5b7d94, size 0x144, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5b7590, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5b7680, size 0x68, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5b777c, size 0x78, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// [Obsolete("Please provide mipmap limit information using a MipmapLimitDescriptor argument", false)]
/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5b76e8, size 0x94, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, int32_t  mipCount, ::StringW  mipmapLimitGroupName, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5b75dc, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0xb5b747c, size 0x114, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::System::IntPtr  nativeTex, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5b77f4, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5b78a4, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// [ExcludeFromDocs]
/// [Obsolete("Please provide mipmap limit information using a MipmapLimitDescriptor argument", false)]
/// @brief Method .ctor, addr 0xb5b7820, size 0x84, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount, ::StringW  mipmapLimitGroupName, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0xb5b7ce0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

/// @brief Method .ctor, addr 0xb5b78d4, size 0x1a4, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, ::System::IntPtr  nativeTex, bool  createUninitialized, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// @brief Method .ctor, addr 0xb5b7b64, size 0xb8, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat  textureFormat, /* [DefaultValue("true")] */ bool  mipChain, /* [DefaultValue("false")] */ bool  linear) ;

/// @brief Method .ctor, addr 0xb5b7c1c, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat  textureFormat, /* [DefaultValue("true")] */ bool  mipChain, /* [DefaultValue("false")] */ bool  linear, /* [DefaultValue("false")] */ bool  createUninitialized) ;

/// @brief Method .ctor, addr 0xb5b7a78, size 0x24, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat  textureFormat, /* [DefaultValue("-1")] */ int32_t  mipCount, /* [DefaultValue("false")] */ bool  linear) ;

/// @brief Method .ctor, addr 0xb5b7a9c, size 0x24, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat  textureFormat, /* [DefaultValue("-1")] */ int32_t  mipCount, /* [DefaultValue("false")] */ bool  linear, /* [DefaultValue("false")] */ bool  createUninitialized) ;

/// [Obsolete("Please provide mipmap limit information using a MipmapLimitDescriptor argument", false)]
/// @brief Method .ctor, addr 0xb5b7ad4, size 0x90, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat  textureFormat, /* [DefaultValue("-1")] */ int32_t  mipCount, /* [DefaultValue("false")] */ bool  linear, /* [DefaultValue("false")] */ bool  createUninitialized, /* [DefaultValue("true")] */ bool  ignoreMipmapLimit, /* [DefaultValue("null")] */ ::StringW  mipmapLimitGroupName) ;

/// @brief Method .ctor, addr 0xb5b7ac0, size 0x14, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat  textureFormat, /* [DefaultValue("-1")] */ int32_t  mipCount, /* [DefaultValue("false")] */ bool  linear, /* [DefaultValue("false")] */ bool  createUninitialized, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// [NativeName("GetMipmapLimit")]
/// @brief Method get_activeMipmapLimit, addr 0xb5b3f74, size 0x78, virtual false, abstract: false, final false
inline int32_t get_activeMipmapLimit() ;

/// @brief Method get_activeMipmapLimit_Injected, addr 0xb5b3fec, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_activeMipmapLimit_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_blackTexture, addr 0xb5b40b0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_blackTexture() ;

/// @brief Method get_blackTexture_Injected, addr 0xb5b4110, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr get_blackTexture_Injected() ;

/// [FreeFunction(Name = "GetTextureStreamingManager().GetCalculatedMipmapLevel", HasExplicitThis = true)]
/// @brief Method get_calculatedMipmapLevel, addr 0xb5b61cc, size 0x78, virtual false, abstract: false, final false
inline int32_t get_calculatedMipmapLevel() ;

/// @brief Method get_calculatedMipmapLevel_Injected, addr 0xb5b6244, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_calculatedMipmapLevel_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction(Name = "GetTextureStreamingManager().GetDesiredMipmapLevel", HasExplicitThis = true)]
/// @brief Method get_desiredMipmapLevel, addr 0xb5b6280, size 0x78, virtual false, abstract: false, final false
inline int32_t get_desiredMipmapLevel() ;

/// @brief Method get_desiredMipmapLevel_Injected, addr 0xb5b62f8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_desiredMipmapLevel_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("GetTextureFormat")]
/// @brief Method get_format, addr 0xb5b3bd8, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::TextureFormat get_format() ;

/// @brief Method get_format_Injected, addr 0xb5b3c50, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::TextureFormat get_format_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_grayTexture, addr 0xb5b41c0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_grayTexture() ;

/// @brief Method get_grayTexture_Injected, addr 0xb5b4220, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr get_grayTexture_Injected() ;

/// @brief Method get_ignoreMipmapLimit, addr 0xb5b8ccc, size 0x4, virtual false, abstract: false, final false
inline bool get_ignoreMipmapLimit() ;

/// @brief Method get_isPreProcessed, addr 0xb5b5b48, size 0x78, virtual false, abstract: false, final false
inline bool get_isPreProcessed() ;

/// @brief Method get_isPreProcessed_Injected, addr 0xb5b5bc0, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isPreProcessed_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isReadable, addr 0xb5b4758, size 0x78, virtual true, abstract: false, final false
inline bool get_isReadable() ;

/// @brief Method get_isReadable_Injected, addr 0xb5b47d0, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isReadable_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_linearGrayTexture, addr 0xb5b4248, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_linearGrayTexture() ;

/// @brief Method get_linearGrayTexture_Injected, addr 0xb5b42a8, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr get_linearGrayTexture_Injected() ;

/// [FreeFunction(Name = "GetTextureStreamingManager().GetLoadAllMips", HasExplicitThis = true)]
/// @brief Method get_loadAllMips, addr 0xb5b6054, size 0x78, virtual false, abstract: false, final false
inline bool get_loadAllMips() ;

/// @brief Method get_loadAllMips_Injected, addr 0xb5b60cc, size 0x3c, virtual false, abstract: false, final false
static inline bool get_loadAllMips_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction(Name = "GetTextureStreamingManager().GetLoadedMipmapLevel", HasExplicitThis = true)]
/// @brief Method get_loadedMipmapLevel, addr 0xb5b63e8, size 0x78, virtual false, abstract: false, final false
inline int32_t get_loadedMipmapLevel() ;

/// @brief Method get_loadedMipmapLevel_Injected, addr 0xb5b6460, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_loadedMipmapLevel_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction(Name = "GetTextureStreamingManager().GetLoadingMipmapLevel", HasExplicitThis = true)]
/// @brief Method get_loadingMipmapLevel, addr 0xb5b6334, size 0x78, virtual false, abstract: false, final false
inline int32_t get_loadingMipmapLevel() ;

/// @brief Method get_loadingMipmapLevel_Injected, addr 0xb5b63ac, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_loadingMipmapLevel_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction(Name = "GetTextureStreamingManager().GetMinimumMipmapLevel", HasExplicitThis = true)]
/// @brief Method get_minimumMipmapLevel, addr 0xb5b5edc, size 0x78, virtual false, abstract: false, final false
inline int32_t get_minimumMipmapLevel() ;

/// @brief Method get_minimumMipmapLevel_Injected, addr 0xb5b5f54, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_minimumMipmapLevel_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("GetMipmapLimitGroupName")]
/// @brief Method get_mipmapLimitGroup, addr 0xb5b3e04, size 0x12c, virtual false, abstract: false, final false
inline ::StringW get_mipmapLimitGroup() ;

/// @brief Method get_mipmapLimitGroup_Injected, addr 0xb5b3f30, size 0x44, virtual false, abstract: false, final false
static inline void get_mipmapLimitGroup_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method get_normalTexture, addr 0xb5b42d0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_normalTexture() ;

/// @brief Method get_normalTexture_Injected, addr 0xb5b4330, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr get_normalTexture_Injected() ;

/// @brief Method get_redTexture, addr 0xb5b4138, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_redTexture() ;

/// @brief Method get_redTexture_Injected, addr 0xb5b4198, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr get_redTexture_Injected() ;

/// [FreeFunction(Name = "GetTextureStreamingManager().GetRequestedMipmapLevel", HasExplicitThis = true)]
/// @brief Method get_requestedMipmapLevel, addr 0xb5b5d64, size 0x78, virtual false, abstract: false, final false
inline int32_t get_requestedMipmapLevel() ;

/// @brief Method get_requestedMipmapLevel_Injected, addr 0xb5b5ddc, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_requestedMipmapLevel_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_streamingMipmaps, addr 0xb5b5bfc, size 0x78, virtual false, abstract: false, final false
inline bool get_streamingMipmaps() ;

/// @brief Method get_streamingMipmapsPriority, addr 0xb5b5cb0, size 0x78, virtual false, abstract: false, final false
inline int32_t get_streamingMipmapsPriority() ;

/// @brief Method get_streamingMipmapsPriority_Injected, addr 0xb5b5d28, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_streamingMipmapsPriority_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_streamingMipmaps_Injected, addr 0xb5b5c74, size 0x3c, virtual false, abstract: false, final false
static inline bool get_streamingMipmaps_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_vtOnly, addr 0xb5b480c, size 0x78, virtual false, abstract: false, final false
inline bool get_vtOnly() ;

/// @brief Method get_vtOnly_Injected, addr 0xb5b4884, size 0x3c, virtual false, abstract: false, final false
static inline bool get_vtOnly_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_whiteTexture, addr 0xb5b4028, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_whiteTexture() ;

/// @brief Method get_whiteTexture_Injected, addr 0xb5b4088, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr get_whiteTexture_Injected() ;

/// @brief Method set_ignoreMipmapLimit, addr 0xb5b8cd0, size 0x5c, virtual false, abstract: false, final false
inline void set_ignoreMipmapLimit(bool  value) ;

/// [FreeFunction(Name = "GetTextureStreamingManager().SetLoadAllMips", HasExplicitThis = true)]
/// @brief Method set_loadAllMips, addr 0xb5b6108, size 0x80, virtual false, abstract: false, final false
inline void set_loadAllMips(bool  value) ;

/// @brief Method set_loadAllMips_Injected, addr 0xb5b6188, size 0x44, virtual false, abstract: false, final false
static inline void set_loadAllMips_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// [FreeFunction(Name = "GetTextureStreamingManager().SetMinimumMipmapLevel", HasExplicitThis = true)]
/// @brief Method set_minimumMipmapLevel, addr 0xb5b5f90, size 0x80, virtual false, abstract: false, final false
inline void set_minimumMipmapLevel(int32_t  value) ;

/// @brief Method set_minimumMipmapLevel_Injected, addr 0xb5b6010, size 0x44, virtual false, abstract: false, final false
static inline void set_minimumMipmapLevel_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// [FreeFunction(Name = "GetTextureStreamingManager().SetRequestedMipmapLevel", HasExplicitThis = true)]
/// @brief Method set_requestedMipmapLevel, addr 0xb5b5e18, size 0x80, virtual false, abstract: false, final false
inline void set_requestedMipmapLevel(int32_t  value) ;

/// @brief Method set_requestedMipmapLevel_Injected, addr 0xb5b5e98, size 0x44, virtual false, abstract: false, final false
static inline void set_requestedMipmapLevel_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Texture2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Texture2D", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Texture2D(Texture2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Texture2D", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Texture2D(Texture2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14952};

/// @brief Field streamingMipmapsPriorityMax offset 0xffffffff size 0x4
static constexpr int32_t  streamingMipmapsPriorityMax{static_cast<int32_t>(0x7f)};

/// @brief Field streamingMipmapsPriorityMin offset 0xffffffff size 0x4
static constexpr int32_t  streamingMipmapsPriorityMin{static_cast<int32_t>(0xffffff80)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Texture2D) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
