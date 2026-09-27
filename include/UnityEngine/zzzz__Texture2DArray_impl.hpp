#pragma once
// IWYU pragma private; include "UnityEngine/Texture2DArray.hpp"
#include "UnityEngine/zzzz__Texture_impl.hpp"
#include "UnityEngine/zzzz__Texture2DArray_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__DefaultFormat_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__TextureCreationFlags_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MipmapLimitDescriptor_def.hpp"
#include "UnityEngine/zzzz__TextureColorSpace_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Texture2DArray.get_allSlices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Texture2DArray::get_allSlices)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb5bc1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_allSlices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.get_depth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Texture2DArray::*)()>(&::UnityEngine::Texture2DArray::get_depth)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb5bc1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_depth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.get_format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextureFormat (::UnityEngine::Texture2DArray::*)()>(&::UnityEngine::Texture2DArray::get_format)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb5bc27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_format", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.IgnoreMipmapLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2DArray::*)()>(&::UnityEngine::Texture2DArray::IgnoreMipmapLimit)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb5bc330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"IgnoreMipmapLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.SetIgnoreMipmapLimitAndReload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(bool)>(&::UnityEngine::Texture2DArray::SetIgnoreMipmapLimitAndReload)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb5bc3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetIgnoreMipmapLimitAndReload", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.get_mipmapLimitGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Texture2DArray::*)()>(&::UnityEngine::Texture2DArray::get_mipmapLimitGroup)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb5bc4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_mipmapLimitGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.get_activeMipmapLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Texture2DArray::*)()>(&::UnityEngine::Texture2DArray::get_activeMipmapLimit)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb5bc618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_activeMipmapLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.get_isReadable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2DArray::*)()>(&::UnityEngine::Texture2DArray::get_isReadable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb5bc6cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                    {::i2c::class_of<::UnityEngine::Texture2DArray*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.Internal_CreateImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Texture2DArray*, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::TextureColorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, bool, ::StringW)>(&::UnityEngine::Texture2DArray::Internal_CreateImpl)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xb5bc780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Internal_CreateImpl", {}, {::i2c::type_of<::UnityEngine::Texture2DArray*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.Internal_Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture2DArray*, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::TextureColorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, bool, ::StringW)>(&::UnityEngine::Texture2DArray::Internal_Create)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb5bca0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Internal_Create", {}, {::i2c::type_of<::UnityEngine::Texture2DArray*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.ApplyImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(bool, bool)>(&::UnityEngine::Texture2DArray::ApplyImpl)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb5bca80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"ApplyImpl", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.GetPixels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (::UnityEngine::Texture2DArray::*)(int32_t, int32_t)>(&::UnityEngine::Texture2DArray::GetPixels)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb5bcb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"GetPixels", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.GetPixels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (::UnityEngine::Texture2DArray::*)(int32_t)>(&::UnityEngine::Texture2DArray::GetPixels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5bcc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"GetPixels", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.SetPixelDataImplArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2DArray::*)(::System::Array*, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::SetPixelDataImplArray)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb5bcc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixelDataImplArray", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.SetPixelDataImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2DArray::*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::SetPixelDataImpl)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb5bcd94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixelDataImpl", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.GetPixels32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color32> (::UnityEngine::Texture2DArray::*)(int32_t, int32_t)>(&::UnityEngine::Texture2DArray::GetPixels32)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb5bced8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"GetPixels32", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.GetPixels32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color32> (::UnityEngine::Texture2DArray::*)(int32_t)>(&::UnityEngine::Texture2DArray::GetPixels32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5bcfbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"GetPixels32", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.SetPixels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(::ArrayW<::UnityEngine::Color>, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::SetPixels)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb5bcfc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixels", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.SetPixels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(::ArrayW<::UnityEngine::Color>, int32_t)>(&::UnityEngine::Texture2DArray::SetPixels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5bd134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixels", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.SetPixels32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(::ArrayW<::UnityEngine::Color32>, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::SetPixels32)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb5bd13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixels32", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color32>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.SetPixels32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(::ArrayW<::UnityEngine::Color32>, int32_t)>(&::UnityEngine::Texture2DArray::SetPixels32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5bd2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixels32", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color32>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.CopyPixels_Full
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(::UnityEngine::Texture*)>(&::UnityEngine::Texture2DArray::CopyPixels_Full)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb5bd2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"CopyPixels_Full", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.CopyPixels_Slice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::CopyPixels_Slice)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb5bd3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"CopyPixels_Slice", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.CopyPixels_Region
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::CopyPixels_Region)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb5bd504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"CopyPixels_Region", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.GetImageData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::Texture2DArray::*)()>(&::UnityEngine::Texture2DArray::GetImageData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb5bd6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"GetImageData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.ValidateFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2DArray::*)(::UnityEngine::TextureFormat, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::ValidateFormat)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb5bd794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"ValidateFormat", {}, {::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.ValidateFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2DArray::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::ValidateFormat)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb5bd870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"ValidateFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::DefaultFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5bd9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::DefaultFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, int32_t)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb5bdaa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::DefaultFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, int32_t, ::UnityEngine::MipmapLimitDescriptor)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb5bdb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb5bd9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, int32_t)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb5bdb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, int32_t, ::UnityEngine::MipmapLimitDescriptor)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb5bdbac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::TextureFormat, int32_t, bool, bool, ::UnityEngine::MipmapLimitDescriptor)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xb5bdd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::TextureFormat, int32_t, bool, bool)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb5bdec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::TextureFormat, int32_t, bool)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb5bdedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::TextureFormat, bool, bool, bool)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb5bdefc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::TextureFormat, bool, bool)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb5bdfc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::TextureFormat, bool)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb5be088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(bool, bool)>(&::UnityEngine::Texture2DArray::Apply)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb5be140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Apply", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(bool)>(&::UnityEngine::Texture2DArray::Apply)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5be1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Apply", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)()>(&::UnityEngine::Texture2DArray::Apply)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb5be1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Apply", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.CopyPixels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(::UnityEngine::Texture*)>(&::UnityEngine::Texture2DArray::CopyPixels)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb5be1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"CopyPixels", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.CopyPixels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::CopyPixels)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb5be238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"CopyPixels", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.CopyPixels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::CopyPixels)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb5be2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"CopyPixels", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.get_ignoreMipmapLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2DArray::*)()>(&::UnityEngine::Texture2DArray::get_ignoreMipmapLimit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb5be3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_ignoreMipmapLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.set_ignoreMipmapLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(bool)>(&::UnityEngine::Texture2DArray::set_ignoreMipmapLimit)> {
  constexpr static std::size_t size = 0x84c;
  constexpr static std::size_t addrs = 0xb5be3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"set_ignoreMipmapLimit", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.ValidateIsNotCrunched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Texture2DArray::ValidateIsNotCrunched)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5bdcc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"ValidateIsNotCrunched", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.get_depth_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Texture2DArray::get_depth_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5bc240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_depth_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.get_format_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextureFormat (*)(::System::IntPtr)>(&::UnityEngine::Texture2DArray::get_format_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5bc2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_format_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.IgnoreMipmapLimit_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Texture2DArray::IgnoreMipmapLimit_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5bc3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"IgnoreMipmapLimit_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.SetIgnoreMipmapLimitAndReload_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Texture2DArray::SetIgnoreMipmapLimitAndReload_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5bc464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetIgnoreMipmapLimitAndReload_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.get_mipmapLimitGroup_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Texture2DArray::get_mipmapLimitGroup_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5bc5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_mipmapLimitGroup_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.get_activeMipmapLimit_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Texture2DArray::get_activeMipmapLimit_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5bc690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_activeMipmapLimit_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.get_isReadable_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Texture2DArray::get_isReadable_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5bc744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_isReadable_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.Internal_CreateImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Texture2DArray*, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::TextureColorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, bool, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Texture2DArray::Internal_CreateImpl_Injected)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb5bc964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Internal_CreateImpl_Injected", {}, {::i2c::type_of<::UnityEngine::Texture2DArray*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.ApplyImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool, bool)>(&::UnityEngine::Texture2DArray::ApplyImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5bcb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"ApplyImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.GetPixels_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (*)(::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::GetPixels_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5bcbf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"GetPixels_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.SetPixelDataImplArray_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::Array*, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::SetPixelDataImplArray_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb5bcd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixelDataImplArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.SetPixelDataImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::SetPixelDataImpl_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb5bce54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixelDataImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.GetPixels32_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color32> (*)(::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::GetPixels32_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5bcf68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"GetPixels32_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.SetPixels_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::SetPixels_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb5bd0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixels_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.SetPixels32_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::SetPixels32_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb5bd250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixels32_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.CopyPixels_Full_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Texture2DArray::CopyPixels_Full_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5bd368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"CopyPixels_Full_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.CopyPixels_Slice_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::CopyPixels_Slice_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb5bd490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"CopyPixels_Slice_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.CopyPixels_Region_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::CopyPixels_Region_Injected)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb5bd620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"CopyPixels_Region_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.GetImageData_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Texture2DArray::GetImageData_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5bd758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"GetImageData_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Texture2DArray::get_allSlices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_allSlices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Texture2DArray::get_depth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_depth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::TextureFormat UnityEngine::Texture2DArray::get_format()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_format", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextureFormat>(this, ___internal_method);
}
inline bool UnityEngine::Texture2DArray::IgnoreMipmapLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"IgnoreMipmapLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Texture2DArray::SetIgnoreMipmapLimitAndReload(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetIgnoreMipmapLimitAndReload", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Texture2DArray::get_mipmapLimitGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_mipmapLimitGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t UnityEngine::Texture2DArray::get_activeMipmapLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_activeMipmapLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Texture2DArray::get_isReadable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Texture2DArray*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Texture2DArray::Internal_CreateImpl(/* [Writable] */ ::UnityEngine::Texture2DArray*  mono, int32_t  w, int32_t  h, int32_t  d, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Internal_CreateImpl", {}, {::i2c::type_of<::UnityEngine::Texture2DArray*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mono, w, h, d, mipCount, format, colorSpace, flags, ignoreMipmapLimit, mipmapLimitGroupName);
}
inline void UnityEngine::Texture2DArray::Internal_Create(/* [Writable] */ ::UnityEngine::Texture2DArray*  mono, int32_t  w, int32_t  h, int32_t  d, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Internal_Create", {}, {::i2c::type_of<::UnityEngine::Texture2DArray*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mono, w, h, d, mipCount, format, colorSpace, flags, ignoreMipmapLimit, mipmapLimitGroupName);
}
inline void UnityEngine::Texture2DArray::ApplyImpl(bool  updateMipmaps, bool  makeNoLongerReadable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"ApplyImpl", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMipmaps, makeNoLongerReadable);
}
inline ::ArrayW<::UnityEngine::Color> UnityEngine::Texture2DArray::GetPixels(int32_t  arrayElement, int32_t  miplevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"GetPixels", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(this, ___internal_method, arrayElement, miplevel);
}
inline ::ArrayW<::UnityEngine::Color> UnityEngine::Texture2DArray::GetPixels(int32_t  arrayElement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"GetPixels", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(this, ___internal_method, arrayElement);
}
inline bool UnityEngine::Texture2DArray::SetPixelDataImplArray(::System::Array*  data, int32_t  mipLevel, int32_t  element, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixelDataImplArray", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, mipLevel, element, elementSize, dataArraySize, sourceDataStartIndex);
}
inline bool UnityEngine::Texture2DArray::SetPixelDataImpl(::System::IntPtr  data, int32_t  mipLevel, int32_t  element, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixelDataImpl", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, mipLevel, element, elementSize, dataArraySize, sourceDataStartIndex);
}
inline ::ArrayW<::UnityEngine::Color32> UnityEngine::Texture2DArray::GetPixels32(int32_t  arrayElement, int32_t  miplevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"GetPixels32", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color32>>(this, ___internal_method, arrayElement, miplevel);
}
inline ::ArrayW<::UnityEngine::Color32> UnityEngine::Texture2DArray::GetPixels32(int32_t  arrayElement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"GetPixels32", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color32>>(this, ___internal_method, arrayElement);
}
inline void UnityEngine::Texture2DArray::SetPixels(::ArrayW<::UnityEngine::Color>  colors, int32_t  arrayElement, int32_t  miplevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixels", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors, arrayElement, miplevel);
}
inline void UnityEngine::Texture2DArray::SetPixels(::ArrayW<::UnityEngine::Color>  colors, int32_t  arrayElement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixels", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors, arrayElement);
}
inline void UnityEngine::Texture2DArray::SetPixels32(::ArrayW<::UnityEngine::Color32>  colors, int32_t  arrayElement, int32_t  miplevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixels32", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color32>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors, arrayElement, miplevel);
}
inline void UnityEngine::Texture2DArray::SetPixels32(::ArrayW<::UnityEngine::Color32>  colors, int32_t  arrayElement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixels32", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color32>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors, arrayElement);
}
inline void UnityEngine::Texture2DArray::CopyPixels_Full(::UnityEngine::Texture*  src)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"CopyPixels_Full", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src);
}
inline void UnityEngine::Texture2DArray::CopyPixels_Slice(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  dstElement, int32_t  dstMip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"CopyPixels_Slice", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, srcElement, srcMip, dstElement, dstMip);
}
inline void UnityEngine::Texture2DArray::CopyPixels_Region(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"CopyPixels_Region", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dstElement, dstMip, dstX, dstY);
}
inline ::System::IntPtr UnityEngine::Texture2DArray::GetImageData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"GetImageData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline bool UnityEngine::Texture2DArray::ValidateFormat(::UnityEngine::TextureFormat  format, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"ValidateFormat", {}, {::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, format, width, height);
}
inline bool UnityEngine::Texture2DArray::ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"ValidateFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, format, width, height);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format, flags);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format, flags, mipCount);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format, flags, mipCount, mipmapLimitDescriptor);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format, flags);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format, flags, mipCount);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format, flags, mipCount, mipmapLimitDescriptor);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, textureFormat, mipCount, linear, createUninitialized, mipmapLimitDescriptor);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, textureFormat, mipCount, linear, createUninitialized);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, textureFormat, mipCount, linear);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, /* [DefaultValue("false")] */ bool  linear, /* [DefaultValue("false")] */ bool  createUninitialized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, textureFormat, mipChain, linear, createUninitialized);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, /* [DefaultValue("false")] */ bool  linear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, textureFormat, mipChain, linear);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, textureFormat, mipChain);
}
inline void UnityEngine::Texture2DArray::Apply(/* [DefaultValue("true")] */ bool  updateMipmaps, /* [DefaultValue("false")] */ bool  makeNoLongerReadable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Apply", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMipmaps, makeNoLongerReadable);
}
inline void UnityEngine::Texture2DArray::Apply(bool  updateMipmaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Apply", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMipmaps);
}
inline void UnityEngine::Texture2DArray::Apply()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Apply", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Texture2DArray::SetPixelData(::ArrayW<T>  data, int32_t  mipLevel, int32_t  element, /* [DefaultValue("0")] */ int32_t  sourceDataStartIndex)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                    {"SetPixelData", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, mipLevel, element, sourceDataStartIndex);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Texture2DArray::SetPixelData(::Unity::Collections::NativeArray_1<T>  data, int32_t  mipLevel, int32_t  element, /* [DefaultValue("0")] */ int32_t  sourceDataStartIndex)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                    {"SetPixelData", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, mipLevel, element, sourceDataStartIndex);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> UnityEngine::Texture2DArray::GetPixelData(int32_t  mipLevel, int32_t  element)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                    {"GetPixelData", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(this, ___internal_method, mipLevel, element);
}
inline void UnityEngine::Texture2DArray::CopyPixels(::UnityEngine::Texture*  src)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"CopyPixels", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src);
}
inline void UnityEngine::Texture2DArray::CopyPixels(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  dstElement, int32_t  dstMip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"CopyPixels", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, srcElement, srcMip, dstElement, dstMip);
}
inline void UnityEngine::Texture2DArray::CopyPixels(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"CopyPixels", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dstElement, dstMip, dstX, dstY);
}
inline bool UnityEngine::Texture2DArray::get_ignoreMipmapLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_ignoreMipmapLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Texture2DArray::set_ignoreMipmapLimit(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"set_ignoreMipmapLimit", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Texture2DArray::ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"ValidateIsNotCrunched", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, flags);
}
inline int32_t UnityEngine::Texture2DArray::get_depth_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_depth_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::TextureFormat UnityEngine::Texture2DArray::get_format_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_format_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextureFormat>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Texture2DArray::IgnoreMipmapLimit_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"IgnoreMipmapLimit_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Texture2DArray::SetIgnoreMipmapLimitAndReload_Injected(::System::IntPtr  _unity_self, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetIgnoreMipmapLimitAndReload_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Texture2DArray::get_mipmapLimitGroup_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_mipmapLimitGroup_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline int32_t UnityEngine::Texture2DArray::get_activeMipmapLimit_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_activeMipmapLimit_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Texture2DArray::get_isReadable_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_isReadable_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Texture2DArray::Internal_CreateImpl_Injected(/* [Writable] */ ::UnityEngine::Texture2DArray*  mono, int32_t  w, int32_t  h, int32_t  d, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, bool  ignoreMipmapLimit, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  mipmapLimitGroupName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Internal_CreateImpl_Injected", {}, {::i2c::type_of<::UnityEngine::Texture2DArray*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mono, w, h, d, mipCount, format, colorSpace, flags, ignoreMipmapLimit, mipmapLimitGroupName);
}
inline void UnityEngine::Texture2DArray::ApplyImpl_Injected(::System::IntPtr  _unity_self, bool  updateMipmaps, bool  makeNoLongerReadable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"ApplyImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, updateMipmaps, makeNoLongerReadable);
}
inline ::ArrayW<::UnityEngine::Color> UnityEngine::Texture2DArray::GetPixels_Injected(::System::IntPtr  _unity_self, int32_t  arrayElement, int32_t  miplevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"GetPixels_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(nullptr, ___internal_method, _unity_self, arrayElement, miplevel);
}
inline bool UnityEngine::Texture2DArray::SetPixelDataImplArray_Injected(::System::IntPtr  _unity_self, ::System::Array*  data, int32_t  mipLevel, int32_t  element, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixelDataImplArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, data, mipLevel, element, elementSize, dataArraySize, sourceDataStartIndex);
}
inline bool UnityEngine::Texture2DArray::SetPixelDataImpl_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  data, int32_t  mipLevel, int32_t  element, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixelDataImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, data, mipLevel, element, elementSize, dataArraySize, sourceDataStartIndex);
}
inline ::ArrayW<::UnityEngine::Color32> UnityEngine::Texture2DArray::GetPixels32_Injected(::System::IntPtr  _unity_self, int32_t  arrayElement, int32_t  miplevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"GetPixels32_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color32>>(nullptr, ___internal_method, _unity_self, arrayElement, miplevel);
}
inline void UnityEngine::Texture2DArray::SetPixels_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colors, int32_t  arrayElement, int32_t  miplevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixels_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, colors, arrayElement, miplevel);
}
inline void UnityEngine::Texture2DArray::SetPixels32_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colors, int32_t  arrayElement, int32_t  miplevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixels32_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, colors, arrayElement, miplevel);
}
inline void UnityEngine::Texture2DArray::CopyPixels_Full_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"CopyPixels_Full_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, src);
}
inline void UnityEngine::Texture2DArray::CopyPixels_Slice_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  srcElement, int32_t  srcMip, int32_t  dstElement, int32_t  dstMip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"CopyPixels_Slice_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, src, srcElement, srcMip, dstElement, dstMip);
}
inline void UnityEngine::Texture2DArray::CopyPixels_Region_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"CopyPixels_Region_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dstElement, dstMip, dstX, dstY);
}
inline ::System::IntPtr UnityEngine::Texture2DArray::GetImageData_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"GetImageData_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, format, flags));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, format, flags, mipCount));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, format, flags, mipCount, mipmapLimitDescriptor));
}
/// @brief [RequiredByNativeCode]
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, format, flags));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, format, flags, mipCount));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, format, flags, mipCount, mipmapLimitDescriptor));
}
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, textureFormat, mipCount, linear, createUninitialized, mipmapLimitDescriptor));
}
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, textureFormat, mipCount, linear, createUninitialized));
}
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, textureFormat, mipCount, linear));
}
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, /* [DefaultValue("false")] */ bool  linear, /* [DefaultValue("false")] */ bool  createUninitialized)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, textureFormat, mipChain, linear, createUninitialized));
}
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, /* [DefaultValue("false")] */ bool  linear)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, textureFormat, mipChain, linear));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, textureFormat, mipChain));
}
// Ctor Parameters []
constexpr ::UnityEngine::Texture2DArray::Texture2DArray()   {
}
