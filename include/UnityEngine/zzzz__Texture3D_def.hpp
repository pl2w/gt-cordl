#pragma once
// IWYU pragma private; include "UnityEngine/Texture3D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Texture3D)
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
struct TextureColorSpace;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine {
class Texture3D;
}
// Write type traits
MARK_REF_T(::UnityEngine::Texture3D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Texture3D*, "UnityEngine", "Texture3D");
// [ExcludeFromPreset]
// [NativeHeader("Runtime/Graphics/Texture3D.h")]
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Texture3D
class CORDL_TYPE Texture3D : public ::UnityEngine::Texture {
public:
// Declarations
 __declspec(property(get=get_depth)) int32_t  depth;

 __declspec(property(get=get_isReadable)) bool  isReadable;

/// [ExcludeFromDocs]
/// @brief Method Apply, addr 0xb5bc0e8, size 0xc, virtual false, abstract: false, final false
inline void Apply() ;

/// [ExcludeFromDocs]
/// @brief Method Apply, addr 0xb5bc0e0, size 0x8, virtual false, abstract: false, final false
inline void Apply(bool  updateMipmaps) ;

/// @brief Method Apply, addr 0xb5bc07c, size 0x64, virtual false, abstract: false, final false
inline void Apply(/* [DefaultValue("true")] */ bool  updateMipmaps, /* [DefaultValue("false")] */ bool  makeNoLongerReadable) ;

/// [FreeFunction(Name = "Texture3DScripting::Apply", HasExplicitThis = true)]
/// @brief Method ApplyImpl, addr 0xb5bb718, size 0x90, virtual false, abstract: false, final false
inline void ApplyImpl(bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method ApplyImpl_Injected, addr 0xb5bb7a8, size 0x54, virtual false, abstract: false, final false
static inline void ApplyImpl_Injected(::System::IntPtr  _unity_self, bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method GetImageData, addr 0xb5bb95c, size 0x78, virtual false, abstract: false, final false
inline ::System::IntPtr GetImageData() ;

/// @brief Method GetImageData_Injected, addr 0xb5bb9d4, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetImageData_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> GetPixelData(int32_t  mipLevel) ;

/// @brief Method Internal_Create, addr 0xb5bb624, size 0xf4, virtual false, abstract: false, final false
static inline void Internal_Create(/* [Writable] */ ::UnityEngine::Texture3D*  mono, int32_t  w, int32_t  h, int32_t  d, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex) ;

/// [FreeFunction("Texture3DScripting::Create")]
/// @brief Method Internal_CreateImpl, addr 0xb5bb588, size 0x9c, virtual false, abstract: false, final false
static inline bool Internal_CreateImpl(/* [Writable] */ ::UnityEngine::Texture3D*  mono, int32_t  w, int32_t  h, int32_t  d, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Texture3D* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Texture3D* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

/// [RequiredByNativeCode]
/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Texture3D* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Texture3D* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, /* [DefaultValue("Texture.GenerateAllMips")] */ int32_t  mipCount) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Texture3D* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

static inline ::UnityEngine::Texture3D* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, /* [DefaultValue("false")] */ bool  createUninitialized) ;

static inline ::UnityEngine::Texture3D* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, /* [DefaultValue("IntPtr.Zero")] */ ::System::IntPtr  nativeTex) ;

/// @brief [ExcludeFromDocs]
static inline ::UnityEngine::Texture3D* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount) ;

static inline ::UnityEngine::Texture3D* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, /* [DefaultValue("IntPtr.Zero")] */ ::System::IntPtr  nativeTex) ;

static inline ::UnityEngine::Texture3D* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, /* [DefaultValue("IntPtr.Zero")] */ ::System::IntPtr  nativeTex, /* [DefaultValue("false")] */ bool  createUninitialized) ;

/// @brief Method SetPixel, addr 0xb5bc0f4, size 0xac, virtual false, abstract: false, final false
inline void SetPixel(int32_t  x, int32_t  y, int32_t  z, ::UnityEngine::Color  color, /* [DefaultValue("0")] */ int32_t  mipLevel) ;

/// [NativeName("SetPixel")]
/// @brief Method SetPixelImpl, addr 0xb5bb454, size 0xc0, virtual false, abstract: false, final false
inline void SetPixelImpl(int32_t  mip, int32_t  x, int32_t  y, int32_t  z, ::UnityEngine::Color  color) ;

/// @brief Method SetPixelImpl_Injected, addr 0xb5bb514, size 0x74, virtual false, abstract: false, final false
static inline void SetPixelImpl_Injected(::System::IntPtr  _unity_self, int32_t  mip, int32_t  x, int32_t  y, int32_t  z, ::by_ref<::UnityEngine::Color>  color) ;

/// [FreeFunction(Name = "Texture3DScripting::SetPixels", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetPixels, addr 0xb5bb7fc, size 0x10c, virtual false, abstract: false, final false
inline void SetPixels(::ArrayW<::UnityEngine::Color>  colors, int32_t  miplevel) ;

/// @brief Method SetPixels_Injected, addr 0xb5bb908, size 0x54, virtual false, abstract: false, final false
static inline void SetPixels_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colors, int32_t  miplevel) ;

/// @brief Method ValidateIsNotCrunched, addr 0xb5bbc54, size 0x54, virtual false, abstract: false, final false
static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5bba10, size 0x54, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5bbb04, size 0x64, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

/// [RequiredByNativeCode]
/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5bba64, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5bbb68, size 0xec, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, /* [DefaultValue("Texture.GenerateAllMips")] */ int32_t  mipCount) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5bbe48, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

/// @brief Method .ctor, addr 0xb5bbefc, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, /* [DefaultValue("false")] */ bool  createUninitialized) ;

/// @brief Method .ctor, addr 0xb5bbfbc, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, /* [DefaultValue("IntPtr.Zero")] */ ::System::IntPtr  nativeTex) ;

/// [ExcludeFromDocs]
/// @brief Method .ctor, addr 0xb5bbca8, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0xb5bbcc8, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, /* [DefaultValue("IntPtr.Zero")] */ ::System::IntPtr  nativeTex) ;

/// @brief Method .ctor, addr 0xb5bbce4, size 0x164, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, /* [DefaultValue("IntPtr.Zero")] */ ::System::IntPtr  nativeTex, /* [DefaultValue("false")] */ bool  createUninitialized) ;

/// [NativeName("GetTextureLayerCount")]
/// @brief Method get_depth, addr 0xb5bb2ec, size 0x78, virtual false, abstract: false, final false
inline int32_t get_depth() ;

/// @brief Method get_depth_Injected, addr 0xb5bb364, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_depth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isReadable, addr 0xb5bb3a0, size 0x78, virtual true, abstract: false, final false
inline bool get_isReadable() ;

/// @brief Method get_isReadable_Injected, addr 0xb5bb418, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isReadable_Injected(::System::IntPtr  _unity_self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Texture3D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Texture3D", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Texture3D(Texture3D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Texture3D", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Texture3D(Texture3D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14954};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Texture3D) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
