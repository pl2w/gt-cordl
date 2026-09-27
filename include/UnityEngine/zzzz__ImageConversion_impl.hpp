#pragma once
// IWYU pragma private; include "UnityEngine/ImageConversion.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ImageConversion_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/zzzz__Texture2D_EXRFlags_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::ImageConversion.EncodeToPNG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Texture2D*)>(&::UnityEngine::ImageConversion::EncodeToPNG)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xb639c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"EncodeToPNG", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.EncodeToJPG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Texture2D*, int32_t)>(&::UnityEngine::ImageConversion::EncodeToJPG)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xb639dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"EncodeToJPG", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.EncodeToJPG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Texture2D*)>(&::UnityEngine::ImageConversion::EncodeToJPG)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb639f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"EncodeToJPG", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.LoadImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Texture2D*, ::System::ReadOnlySpan_1<uint8_t>, bool)>(&::UnityEngine::ImageConversion::LoadImage)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb639f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"LoadImage", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.LoadImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Texture2D*, ::ArrayW<uint8_t>, bool)>(&::UnityEngine::ImageConversion::LoadImage)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb63a0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"LoadImage", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.LoadImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Texture2D*, ::ArrayW<uint8_t>)>(&::UnityEngine::ImageConversion::LoadImage)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb63a160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"LoadImage", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.UnsafeEncodeNativeArrayToTGA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(void*, ::by_ref<int32_t>, ::UnityEngine::Experimental::Rendering::GraphicsFormat, uint32_t, uint32_t, uint32_t)>(&::UnityEngine::ImageConversion::UnsafeEncodeNativeArrayToTGA)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb63a1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"UnsafeEncodeNativeArrayToTGA", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.UnsafeEncodeNativeArrayToPNG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(void*, ::by_ref<int32_t>, ::UnityEngine::Experimental::Rendering::GraphicsFormat, uint32_t, uint32_t, uint32_t)>(&::UnityEngine::ImageConversion::UnsafeEncodeNativeArrayToPNG)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb63a230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"UnsafeEncodeNativeArrayToPNG", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.UnsafeEncodeNativeArrayToJPG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(void*, ::by_ref<int32_t>, ::UnityEngine::Experimental::Rendering::GraphicsFormat, uint32_t, uint32_t, uint32_t, int32_t)>(&::UnityEngine::ImageConversion::UnsafeEncodeNativeArrayToJPG)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb63a2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"UnsafeEncodeNativeArrayToJPG", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.UnsafeEncodeNativeArrayToEXR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(void*, ::by_ref<int32_t>, ::UnityEngine::Experimental::Rendering::GraphicsFormat, uint32_t, uint32_t, uint32_t, ::GlobalNamespace::Texture2D_EXRFlags)>(&::UnityEngine::ImageConversion::UnsafeEncodeNativeArrayToEXR)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb63a328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"UnsafeEncodeNativeArrayToEXR", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::GlobalNamespace::Texture2D_EXRFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.EncodeToPNG_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::ImageConversion::EncodeToPNG_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb639d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"EncodeToPNG_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.EncodeToJPG_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::ImageConversion::EncodeToJPG_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb639f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"EncodeToJPG_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.LoadImage_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, bool)>(&::UnityEngine::ImageConversion::LoadImage_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb63a0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"LoadImage_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> UnityEngine::ImageConversion::EncodeToPNG(::UnityEngine::Texture2D*  tex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"EncodeToPNG", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, tex);
}
inline ::ArrayW<uint8_t> UnityEngine::ImageConversion::EncodeToJPG(::UnityEngine::Texture2D*  tex, int32_t  quality)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"EncodeToJPG", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, tex, quality);
}
inline ::ArrayW<uint8_t> UnityEngine::ImageConversion::EncodeToJPG(::UnityEngine::Texture2D*  tex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"EncodeToJPG", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, tex);
}
inline bool UnityEngine::ImageConversion::LoadImage(/* [NotNull] */ ::UnityEngine::Texture2D*  tex, ::System::ReadOnlySpan_1<uint8_t>  data, bool  markNonReadable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"LoadImage", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tex, data, markNonReadable);
}
inline bool UnityEngine::ImageConversion::LoadImage(::UnityEngine::Texture2D*  tex, ::ArrayW<uint8_t>  data, bool  markNonReadable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"LoadImage", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tex, data, markNonReadable);
}
inline bool UnityEngine::ImageConversion::LoadImage(::UnityEngine::Texture2D*  tex, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"LoadImage", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tex, data);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::ImageConversion::EncodeNativeArrayToTGA(::Unity::Collections::NativeArray_1<T>  input, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, uint32_t  width, uint32_t  height, uint32_t  rowBytes)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                    {"EncodeNativeArrayToTGA", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(nullptr, ___internal_method, input, format, width, height, rowBytes);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::ImageConversion::EncodeNativeArrayToPNG(::Unity::Collections::NativeArray_1<T>  input, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, uint32_t  width, uint32_t  height, uint32_t  rowBytes)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                    {"EncodeNativeArrayToPNG", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(nullptr, ___internal_method, input, format, width, height, rowBytes);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::ImageConversion::EncodeNativeArrayToJPG(::Unity::Collections::NativeArray_1<T>  input, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, uint32_t  width, uint32_t  height, uint32_t  rowBytes, int32_t  quality)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                    {"EncodeNativeArrayToJPG", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(nullptr, ___internal_method, input, format, width, height, rowBytes, quality);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::ImageConversion::EncodeNativeArrayToEXR(::Unity::Collections::NativeArray_1<T>  input, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, uint32_t  width, uint32_t  height, uint32_t  rowBytes, ::GlobalNamespace::Texture2D_EXRFlags  flags)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                    {"EncodeNativeArrayToEXR", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::GlobalNamespace::Texture2D_EXRFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(nullptr, ___internal_method, input, format, width, height, rowBytes, flags);
}
inline void* UnityEngine::ImageConversion::UnsafeEncodeNativeArrayToTGA(void*  array, ::by_ref<int32_t>  sizeInBytes, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, uint32_t  width, uint32_t  height, uint32_t  rowBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"UnsafeEncodeNativeArrayToTGA", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, array, sizeInBytes, format, width, height, rowBytes);
}
inline void* UnityEngine::ImageConversion::UnsafeEncodeNativeArrayToPNG(void*  array, ::by_ref<int32_t>  sizeInBytes, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, uint32_t  width, uint32_t  height, uint32_t  rowBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"UnsafeEncodeNativeArrayToPNG", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, array, sizeInBytes, format, width, height, rowBytes);
}
inline void* UnityEngine::ImageConversion::UnsafeEncodeNativeArrayToJPG(void*  array, ::by_ref<int32_t>  sizeInBytes, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, uint32_t  width, uint32_t  height, uint32_t  rowBytes, int32_t  quality)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"UnsafeEncodeNativeArrayToJPG", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, array, sizeInBytes, format, width, height, rowBytes, quality);
}
inline void* UnityEngine::ImageConversion::UnsafeEncodeNativeArrayToEXR(void*  array, ::by_ref<int32_t>  sizeInBytes, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, uint32_t  width, uint32_t  height, uint32_t  rowBytes, ::GlobalNamespace::Texture2D_EXRFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"UnsafeEncodeNativeArrayToEXR", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::GlobalNamespace::Texture2D_EXRFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, array, sizeInBytes, format, width, height, rowBytes, flags);
}
inline void UnityEngine::ImageConversion::EncodeToPNG_Injected(::System::IntPtr  tex, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"EncodeToPNG_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tex, ret);
}
inline void UnityEngine::ImageConversion::EncodeToJPG_Injected(::System::IntPtr  tex, int32_t  quality, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"EncodeToJPG_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tex, quality, ret);
}
inline bool UnityEngine::ImageConversion::LoadImage_Injected(::System::IntPtr  tex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  data, bool  markNonReadable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                        {"LoadImage_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tex, data, markNonReadable);
}
// Ctor Parameters []
constexpr ::UnityEngine::ImageConversion::ImageConversion()   {
}
