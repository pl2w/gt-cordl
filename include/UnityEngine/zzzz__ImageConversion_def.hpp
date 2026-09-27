#pragma once
// IWYU pragma private; include "UnityEngine/ImageConversion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ImageConversion)
namespace GlobalNamespace {
struct Texture2D_EXRFlags;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
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
struct GraphicsFormat;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine {
class ImageConversion;
}
// Write type traits
MARK_REF_T(::UnityEngine::ImageConversion*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ImageConversion*, "UnityEngine", "ImageConversion");
// [Extension]
// [NativeHeader("Modules/ImageConversion/ScriptBindings/ImageConversion.bindings.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ImageConversion
class CORDL_TYPE ImageConversion : public ::System::Object {
public:
// Declarations
/// @brief Method EncodeNativeArrayToEXR, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Unity::Collections::NativeArray_1<uint8_t> EncodeNativeArrayToEXR(::Unity::Collections::NativeArray_1<T>  input, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, uint32_t  width, uint32_t  height, uint32_t  rowBytes, ::GlobalNamespace::Texture2D_EXRFlags  flags) ;

/// @brief Method EncodeNativeArrayToJPG, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Unity::Collections::NativeArray_1<uint8_t> EncodeNativeArrayToJPG(::Unity::Collections::NativeArray_1<T>  input, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, uint32_t  width, uint32_t  height, uint32_t  rowBytes, int32_t  quality) ;

/// @brief Method EncodeNativeArrayToPNG, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Unity::Collections::NativeArray_1<uint8_t> EncodeNativeArrayToPNG(::Unity::Collections::NativeArray_1<T>  input, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, uint32_t  width, uint32_t  height, uint32_t  rowBytes) ;

/// @brief Method EncodeNativeArrayToTGA, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Unity::Collections::NativeArray_1<uint8_t> EncodeNativeArrayToTGA(::Unity::Collections::NativeArray_1<T>  input, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, uint32_t  width, uint32_t  height, uint32_t  rowBytes) ;

/// [Extension]
/// @brief Method EncodeToJPG, addr 0xb639f74, size 0x8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> EncodeToJPG(::UnityEngine::Texture2D*  tex) ;

/// [Extension]
/// [NativeMethod(Name = "ImageConversionBindings::EncodeToJPG", IsFreeFunction = true, ThrowsException = true)]
/// @brief Method EncodeToJPG, addr 0xb639dc8, size 0x158, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> EncodeToJPG(::UnityEngine::Texture2D*  tex, int32_t  quality) ;

/// @brief Method EncodeToJPG_Injected, addr 0xb639f20, size 0x54, virtual false, abstract: false, final false
static inline void EncodeToJPG_Injected(::System::IntPtr  tex, int32_t  quality, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// [Extension]
/// [NativeMethod(Name = "ImageConversionBindings::EncodeToPNG", IsFreeFunction = true, ThrowsException = true)]
/// @brief Method EncodeToPNG, addr 0xb639c40, size 0x144, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> EncodeToPNG(::UnityEngine::Texture2D*  tex) ;

/// @brief Method EncodeToPNG_Injected, addr 0xb639d84, size 0x44, virtual false, abstract: false, final false
static inline void EncodeToPNG_Injected(::System::IntPtr  tex, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// [Extension]
/// @brief Method LoadImage, addr 0xb63a160, size 0x5c, virtual false, abstract: false, final false
static inline bool LoadImage(::UnityEngine::Texture2D*  tex, ::ArrayW<uint8_t>  data) ;

/// [Extension]
/// @brief Method LoadImage, addr 0xb63a0f8, size 0x68, virtual false, abstract: false, final false
static inline bool LoadImage(::UnityEngine::Texture2D*  tex, ::ArrayW<uint8_t>  data, bool  markNonReadable) ;

/// [Extension]
/// [NativeMethod(Name = "ImageConversionBindings::LoadImage", IsFreeFunction = true)]
/// @brief Method LoadImage, addr 0xb639f7c, size 0x128, virtual false, abstract: false, final false
static inline bool LoadImage(/* [NotNull] */ ::UnityEngine::Texture2D*  tex, ::System::ReadOnlySpan_1<uint8_t>  data, bool  markNonReadable) ;

/// @brief Method LoadImage_Injected, addr 0xb63a0a4, size 0x54, virtual false, abstract: false, final false
static inline bool LoadImage_Injected(::System::IntPtr  tex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  data, bool  markNonReadable) ;

/// [FreeFunction("ImageConversionBindings::UnsafeEncodeNativeArrayToEXR", true)]
/// @brief Method UnsafeEncodeNativeArrayToEXR, addr 0xb63a328, size 0x84, virtual false, abstract: false, final false
static inline void* UnsafeEncodeNativeArrayToEXR(void*  array, ::by_ref<int32_t>  sizeInBytes, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, uint32_t  width, uint32_t  height, uint32_t  rowBytes, ::GlobalNamespace::Texture2D_EXRFlags  flags) ;

/// [FreeFunction("ImageConversionBindings::UnsafeEncodeNativeArrayToJPG", true)]
/// @brief Method UnsafeEncodeNativeArrayToJPG, addr 0xb63a2a4, size 0x84, virtual false, abstract: false, final false
static inline void* UnsafeEncodeNativeArrayToJPG(void*  array, ::by_ref<int32_t>  sizeInBytes, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, uint32_t  width, uint32_t  height, uint32_t  rowBytes, int32_t  quality) ;

/// [FreeFunction("ImageConversionBindings::UnsafeEncodeNativeArrayToPNG", true)]
/// @brief Method UnsafeEncodeNativeArrayToPNG, addr 0xb63a230, size 0x74, virtual false, abstract: false, final false
static inline void* UnsafeEncodeNativeArrayToPNG(void*  array, ::by_ref<int32_t>  sizeInBytes, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, uint32_t  width, uint32_t  height, uint32_t  rowBytes) ;

/// [FreeFunction("ImageConversionBindings::UnsafeEncodeNativeArrayToTGA", true)]
/// @brief Method UnsafeEncodeNativeArrayToTGA, addr 0xb63a1bc, size 0x74, virtual false, abstract: false, final false
static inline void* UnsafeEncodeNativeArrayToTGA(void*  array, ::by_ref<int32_t>  sizeInBytes, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, uint32_t  width, uint32_t  height, uint32_t  rowBytes) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImageConversion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImageConversion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ImageConversion(ImageConversion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImageConversion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImageConversion(ImageConversion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32851};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ImageConversion) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
