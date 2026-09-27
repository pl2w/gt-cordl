#pragma once
// IWYU pragma private; include "UnityEngine/Texture2DArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Texture2DArray)
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
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct MipmapLimitDescriptor;
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
class Texture2DArray;
}
// Write type traits
MARK_REF_T(::UnityEngine::Texture2DArray*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Texture2DArray*, "UnityEngine", "Texture2DArray");
// [NativeHeader("Runtime/Graphics/Texture2DArray.h")]
// [ExcludeFromPreset]
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Texture2DArray
class CORDL_TYPE Texture2DArray : public ::UnityEngine::Texture {
public:
// Declarations
 __declspec(property(get=get_activeMipmapLimit)) int32_t  activeMipmapLimit;

 __declspec(property(get=get_depth)) int32_t  depth;

 __declspec(property(get=get_format)) ::UnityEngine::TextureFormat  format;

 __declspec(property(get=get_ignoreMipmapLimit, put=set_ignoreMipmapLimit)) bool  ignoreMipmapLimit;

 __declspec(property(get=get_isReadable)) bool  isReadable;

 __declspec(property(get=get_mipmapLimitGroup)) ::StringW  mipmapLimitGroup;

/// [ExcludeFromDocs]
/// @brief Method Apply, addr 0xb5be1ac, size 0xc, virtual false, abstract: false, final false
inline void Apply() ;

/// [ExcludeFromDocs]
/// @brief Method Apply, addr 0xb5be1a4, size 0x8, virtual false, abstract: false, final false
inline void Apply(bool  updateMipmaps) ;

/// @brief Method Apply, addr 0xb5be140, size 0x64, virtual false, abstract: false, final false
inline void Apply(/* [DefaultValue("true")] */ bool  updateMipmaps, /* [DefaultValue("false")] */ bool  makeNoLongerReadable) ;

/// [FreeFunction(Name = "Texture2DArrayScripting::Apply", HasExplicitThis = true)]
/// @brief Method ApplyImpl, addr 0xb5bca80, size 0x90, virtual false, abstract: false, final false
inline void ApplyImpl(bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method ApplyImpl_Injected, addr 0xb5bcb10, size 0x54, virtual false, abstract: false, final false
static inline void ApplyImpl_Injected(::System::IntPtr  _unity_self, bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method CopyPixels, addr 0xb5be1b8, size 0x80, virtual false, abstract: false, final false
inline void CopyPixels(::UnityEngine::Texture*  src) ;

/// @brief Method CopyPixels, addr 0xb5be238, size 0xb0, virtual false, abstract: false, final false
inline void CopyPixels(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  dstElement, int32_t  dstMip) ;

/// @brief Method CopyPixels, addr 0xb5be2e8, size 0xf8, virtual false, abstract: false, final false
inline void CopyPixels(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY) ;

/// [FreeFunction(Name = "Texture2DArrayScripting::CopyPixels", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method CopyPixels_Full, addr 0xb5bd2b4, size 0xb4, virtual false, abstract: false, final false
inline void CopyPixels_Full(::UnityEngine::Texture*  src) ;

/// @brief Method CopyPixels_Full_Injected, addr 0xb5bd368, size 0x44, virtual false, abstract: false, final false
static inline void CopyPixels_Full_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src) ;

/// [FreeFunction(Name = "Texture2DArrayScripting::CopyPixels", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method CopyPixels_Region, addr 0xb5bd504, size 0x11c, virtual false, abstract: false, final false
inline void CopyPixels_Region(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY) ;

/// @brief Method CopyPixels_Region_Injected, addr 0xb5bd620, size 0xc0, virtual false, abstract: false, final false
static inline void CopyPixels_Region_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY) ;

/// [FreeFunction(Name = "Texture2DArrayScripting::CopyPixels", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method CopyPixels_Slice, addr 0xb5bd3ac, size 0xe4, virtual false, abstract: false, final false
inline void CopyPixels_Slice(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  dstElement, int32_t  dstMip) ;

/// @brief Method CopyPixels_Slice_Injected, addr 0xb5bd490, size 0x74, virtual false, abstract: false, final false
static inline void CopyPixels_Slice_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  srcElement, int32_t  srcMip, int32_t  dstElement, int32_t  dstMip) ;

/// @brief Method GetImageData, addr 0xb5bd6e0, size 0x78, virtual false, abstract: false, final false
inline ::System::IntPtr GetImageData() ;

/// @brief Method GetImageData_Injected, addr 0xb5bd758, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetImageData_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> GetPixelData(int32_t  mipLevel, int32_t  element) ;

/// @brief Method GetPixels, addr 0xb5bcc48, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color> GetPixels(int32_t  arrayElement) ;

/// [FreeFunction(Name = "Texture2DArrayScripting::GetPixels", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetPixels, addr 0xb5bcb64, size 0x90, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color> GetPixels(int32_t  arrayElement, int32_t  miplevel) ;

/// @brief Method GetPixels32, addr 0xb5bcfbc, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color32> GetPixels32(int32_t  arrayElement) ;

/// [FreeFunction(Name = "Texture2DArrayScripting::GetPixels32", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetPixels32, addr 0xb5bced8, size 0x90, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color32> GetPixels32(int32_t  arrayElement, int32_t  miplevel) ;

/// @brief Method GetPixels32_Injected, addr 0xb5bcf68, size 0x54, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Color32> GetPixels32_Injected(::System::IntPtr  _unity_self, int32_t  arrayElement, int32_t  miplevel) ;

/// @brief Method GetPixels_Injected, addr 0xb5bcbf4, size 0x54, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Color> GetPixels_Injected(::System::IntPtr  _unity_self, int32_t  arrayElement, int32_t  miplevel) ;

/// @brief Method IgnoreMipmapLimit, addr 0xb5bc330, size 0x78, virtual false, abstract: false, final false
inline bool IgnoreMipmapLimit() ;

/// @brief Method IgnoreMipmapLimit_Injected, addr 0xb5bc3a8, size 0x3c, virtual false, abstract: false, final false
static inline bool IgnoreMipmapLimit_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Internal_Create, addr 0xb5bca0c, size 0x74, virtual false, abstract: false, final false
static inline void Internal_Create(/* [Writable] */ ::UnityEngine::Texture2DArray*  mono, int32_t  w, int32_t  h, int32_t  d, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName) ;

/// [FreeFunction("Texture2DArrayScripting::Create")]
/// @brief Method Internal_CreateImpl, addr 0xb5bc780, size 0x1e4, virtual false, abstract: false, final false
static inline bool Internal_CreateImpl(/* [Writable] */ ::UnityEngine::Texture2DArray*  mono, int32_t  w, int32_t  h, int32_t  d, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName) ;

/// @brief Method Internal_CreateImpl_Injected, addr 0xb5bc964, size 0xa8, virtual false, abstract: false, final false
static inline bool Internal_CreateImpl_Injected(/* [Writable] */ ::UnityEngine::Texture2DArray*  mono, int32_t  w, int32_t  h, int32_t  d, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, bool  ignoreMipmapLimit, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  mipmapLimitGroupName) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// @brief [RequiredByNativeCode]
static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, /* [DefaultValue("false")] */ bool  linear) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, /* [DefaultValue("false")] */ bool  linear, /* [DefaultValue("false")] */ bool  createUninitialized) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// @brief Method SetIgnoreMipmapLimitAndReload, addr 0xb5bc3e4, size 0x80, virtual false, abstract: false, final false
inline void SetIgnoreMipmapLimitAndReload(bool  value) ;

/// @brief Method SetIgnoreMipmapLimitAndReload_Injected, addr 0xb5bc464, size 0x44, virtual false, abstract: false, final false
static inline void SetIgnoreMipmapLimitAndReload_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetPixelData(::ArrayW<T>  data, int32_t  mipLevel, int32_t  element, /* [DefaultValue("0")] */ int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetPixelData(::Unity::Collections::NativeArray_1<T>  data, int32_t  mipLevel, int32_t  element, /* [DefaultValue("0")] */ int32_t  sourceDataStartIndex) ;

/// [FreeFunction(Name = "Texture2DArrayScripting::SetPixelData", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetPixelDataImpl, addr 0xb5bcd94, size 0xc0, virtual false, abstract: false, final false
inline bool SetPixelDataImpl(::System::IntPtr  data, int32_t  mipLevel, int32_t  element, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex) ;

/// [FreeFunction(Name = "Texture2DArrayScripting::SetPixelDataArray", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetPixelDataImplArray, addr 0xb5bcc50, size 0xc0, virtual false, abstract: false, final false
inline bool SetPixelDataImplArray(::System::Array*  data, int32_t  mipLevel, int32_t  element, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixelDataImplArray_Injected, addr 0xb5bcd10, size 0x84, virtual false, abstract: false, final false
static inline bool SetPixelDataImplArray_Injected(::System::IntPtr  _unity_self, ::System::Array*  data, int32_t  mipLevel, int32_t  element, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixelDataImpl_Injected, addr 0xb5bce54, size 0x84, virtual false, abstract: false, final false
static inline bool SetPixelDataImpl_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  data, int32_t  mipLevel, int32_t  element, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixels, addr 0xb5bd134, size 0x8, virtual false, abstract: false, final false
inline void SetPixels(::ArrayW<::UnityEngine::Color>  colors, int32_t  arrayElement) ;

/// [FreeFunction(Name = "Texture2DArrayScripting::SetPixels", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetPixels, addr 0xb5bcfc4, size 0x114, virtual false, abstract: false, final false
inline void SetPixels(::ArrayW<::UnityEngine::Color>  colors, int32_t  arrayElement, int32_t  miplevel) ;

/// @brief Method SetPixels32, addr 0xb5bd2ac, size 0x8, virtual false, abstract: false, final false
inline void SetPixels32(::ArrayW<::UnityEngine::Color32>  colors, int32_t  arrayElement) ;

/// [FreeFunction(Name = "Texture2DArrayScripting::SetPixels32", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetPixels32, addr 0xb5bd13c, size 0x114, virtual false, abstract: false, final false
inline void SetPixels32(::ArrayW<::UnityEngine::Color32>  colors, int32_t  arrayElement, int32_t  miplevel) ;

/// @brief Method SetPixels32_Injected, addr 0xb5bd250, size 0x5c, virtual false, abstract: false, final false
static inline void SetPixels32_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colors, int32_t  arrayElement, int32_t  miplevel) ;

/// @brief Method SetPixels_Injected, addr 0xb5bd0d8, size 0x5c, virtual false, abstract: false, final false
static inline void SetPixels_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colors, int32_t  arrayElement, int32_t  miplevel) ;

/// @brief Method ValidateFormat, addr 0xb5bd870, size 0x134, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  width, int32_t  height) ;

/// @brief Method ValidateFormat, addr 0xb5bd794, size 0xdc, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::TextureFormat  format, int32_t  width, int32_t  height) ;

/// @brief Method ValidateIsNotCrunched, addr 0xb5bdcc4, size 0x54, virtual false, abstract: false, final false
static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5bd9a4, size 0x54, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5bdaa8, size 0x74, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5bdb38, size 0x74, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// [RequiredByNativeCode]
/// @brief Method .ctor, addr 0xb5bd9f8, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5bdb1c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5bdbac, size 0x118, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5be088, size 0xb8, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

/// @brief Method .ctor, addr 0xb5bdfc4, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, /* [DefaultValue("false")] */ bool  linear) ;

/// @brief Method .ctor, addr 0xb5bdefc, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, /* [DefaultValue("false")] */ bool  linear, /* [DefaultValue("false")] */ bool  createUninitialized) ;

/// @brief Method .ctor, addr 0xb5bdedc, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear) ;

/// @brief Method .ctor, addr 0xb5bdec0, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized) ;

/// @brief Method .ctor, addr 0xb5bdd18, size 0x1a8, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// [NativeName("GetMipmapLimit")]
/// @brief Method get_activeMipmapLimit, addr 0xb5bc618, size 0x78, virtual false, abstract: false, final false
inline int32_t get_activeMipmapLimit() ;

/// @brief Method get_activeMipmapLimit_Injected, addr 0xb5bc690, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_activeMipmapLimit_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("GetAllTextureLayersIdentifier")]
/// @brief Method get_allSlices, addr 0xb5bc1a0, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_allSlices() ;

/// [NativeName("GetTextureLayerCount")]
/// @brief Method get_depth, addr 0xb5bc1c8, size 0x78, virtual false, abstract: false, final false
inline int32_t get_depth() ;

/// @brief Method get_depth_Injected, addr 0xb5bc240, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_depth_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("GetTextureFormat")]
/// @brief Method get_format, addr 0xb5bc27c, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::TextureFormat get_format() ;

/// @brief Method get_format_Injected, addr 0xb5bc2f4, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::TextureFormat get_format_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_ignoreMipmapLimit, addr 0xb5be3e0, size 0x4, virtual false, abstract: false, final false
inline bool get_ignoreMipmapLimit() ;

/// @brief Method get_isReadable, addr 0xb5bc6cc, size 0x78, virtual true, abstract: false, final false
inline bool get_isReadable() ;

/// @brief Method get_isReadable_Injected, addr 0xb5bc744, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isReadable_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("GetMipmapLimitGroupName")]
/// @brief Method get_mipmapLimitGroup, addr 0xb5bc4a8, size 0x12c, virtual false, abstract: false, final false
inline ::StringW get_mipmapLimitGroup() ;

/// @brief Method get_mipmapLimitGroup_Injected, addr 0xb5bc5d4, size 0x44, virtual false, abstract: false, final false
static inline void get_mipmapLimitGroup_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method set_ignoreMipmapLimit, addr 0xb5be3e4, size 0x84c, virtual false, abstract: false, final false
inline void set_ignoreMipmapLimit(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Texture2DArray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Texture2DArray", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Texture2DArray(Texture2DArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Texture2DArray", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Texture2DArray(Texture2DArray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14955};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Texture2DArray) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
