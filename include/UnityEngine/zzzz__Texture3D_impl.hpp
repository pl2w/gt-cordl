#pragma once
// IWYU pragma private; include "UnityEngine/Texture3D.hpp"
#include "UnityEngine/zzzz__Texture_impl.hpp"
#include "UnityEngine/zzzz__Texture3D_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__DefaultFormat_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__TextureCreationFlags_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__TextureColorSpace_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
//  Writing Method size for method: ::UnityEngine::Texture3D.get_depth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Texture3D::*)()>(&::UnityEngine::Texture3D::get_depth)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb5bb2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"get_depth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D.get_isReadable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture3D::*)()>(&::UnityEngine::Texture3D::get_isReadable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb5bb3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Texture3D*>(),
                    {::i2c::class_of<::UnityEngine::Texture3D*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D.SetPixelImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture3D::*)(int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Color)>(&::UnityEngine::Texture3D::SetPixelImpl)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb5bb454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"SetPixelImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D.Internal_CreateImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Texture3D*, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::TextureColorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::IntPtr)>(&::UnityEngine::Texture3D::Internal_CreateImpl)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb5bb588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"Internal_CreateImpl", {}, {::i2c::type_of<::UnityEngine::Texture3D*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D.Internal_Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture3D*, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::TextureColorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::IntPtr)>(&::UnityEngine::Texture3D::Internal_Create)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb5bb624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"Internal_Create", {}, {::i2c::type_of<::UnityEngine::Texture3D*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D.ApplyImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture3D::*)(bool, bool)>(&::UnityEngine::Texture3D::ApplyImpl)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb5bb718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"ApplyImpl", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D.SetPixels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture3D::*)(::ArrayW<::UnityEngine::Color>, int32_t)>(&::UnityEngine::Texture3D::SetPixels)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb5bb7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"SetPixels", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D.GetImageData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::Texture3D::*)()>(&::UnityEngine::Texture3D::GetImageData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb5bb95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"GetImageData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture3D::*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::DefaultFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Texture3D::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5bba10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture3D::*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::DefaultFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, int32_t)>(&::UnityEngine::Texture3D::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb5bbb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture3D::*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Texture3D::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb5bba64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture3D::*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, int32_t)>(&::UnityEngine::Texture3D::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb5bbb68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture3D::*)(int32_t, int32_t, int32_t, ::UnityEngine::TextureFormat, int32_t)>(&::UnityEngine::Texture3D::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb5bbca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture3D::*)(int32_t, int32_t, int32_t, ::UnityEngine::TextureFormat, int32_t, ::System::IntPtr)>(&::UnityEngine::Texture3D::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb5bbcc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture3D::*)(int32_t, int32_t, int32_t, ::UnityEngine::TextureFormat, int32_t, ::System::IntPtr, bool)>(&::UnityEngine::Texture3D::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xb5bbce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture3D::*)(int32_t, int32_t, int32_t, ::UnityEngine::TextureFormat, bool)>(&::UnityEngine::Texture3D::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb5bbe48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture3D::*)(int32_t, int32_t, int32_t, ::UnityEngine::TextureFormat, bool, bool)>(&::UnityEngine::Texture3D::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb5bbefc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture3D::*)(int32_t, int32_t, int32_t, ::UnityEngine::TextureFormat, bool, ::System::IntPtr)>(&::UnityEngine::Texture3D::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb5bbfbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture3D::*)(bool, bool)>(&::UnityEngine::Texture3D::Apply)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb5bc07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"Apply", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture3D::*)(bool)>(&::UnityEngine::Texture3D::Apply)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5bc0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"Apply", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture3D::*)()>(&::UnityEngine::Texture3D::Apply)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb5bc0e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"Apply", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D.SetPixel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture3D::*)(int32_t, int32_t, int32_t, ::UnityEngine::Color, int32_t)>(&::UnityEngine::Texture3D::SetPixel)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb5bc0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"SetPixel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D.ValidateIsNotCrunched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Texture3D::ValidateIsNotCrunched)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5bbc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"ValidateIsNotCrunched", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D.get_depth_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Texture3D::get_depth_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5bb364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"get_depth_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D.get_isReadable_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Texture3D::get_isReadable_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5bb418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"get_isReadable_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D.SetPixelImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t, ::by_ref<::UnityEngine::Color>)>(&::UnityEngine::Texture3D::SetPixelImpl_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb5bb514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"SetPixelImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D.ApplyImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool, bool)>(&::UnityEngine::Texture3D::ApplyImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5bb7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"ApplyImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D.SetPixels_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t)>(&::UnityEngine::Texture3D::SetPixels_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5bb908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"SetPixels_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture3D.GetImageData_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Texture3D::GetImageData_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5bb9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"GetImageData_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Texture3D::get_depth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"get_depth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Texture3D::get_isReadable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Texture3D*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Texture3D::SetPixelImpl(int32_t  mip, int32_t  x, int32_t  y, int32_t  z, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"SetPixelImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mip, x, y, z, color);
}
inline bool UnityEngine::Texture3D::Internal_CreateImpl(/* [Writable] */ ::UnityEngine::Texture3D*  mono, int32_t  w, int32_t  h, int32_t  d, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"Internal_CreateImpl", {}, {::i2c::type_of<::UnityEngine::Texture3D*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mono, w, h, d, mipCount, format, colorSpace, flags, nativeTex);
}
inline void UnityEngine::Texture3D::Internal_Create(/* [Writable] */ ::UnityEngine::Texture3D*  mono, int32_t  w, int32_t  h, int32_t  d, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"Internal_Create", {}, {::i2c::type_of<::UnityEngine::Texture3D*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mono, w, h, d, mipCount, format, colorSpace, flags, nativeTex);
}
inline void UnityEngine::Texture3D::ApplyImpl(bool  updateMipmaps, bool  makeNoLongerReadable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"ApplyImpl", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMipmaps, makeNoLongerReadable);
}
inline void UnityEngine::Texture3D::SetPixels(::ArrayW<::UnityEngine::Color>  colors, int32_t  miplevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"SetPixels", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors, miplevel);
}
inline ::System::IntPtr UnityEngine::Texture3D::GetImageData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"GetImageData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline void UnityEngine::Texture3D::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format, flags);
}
inline void UnityEngine::Texture3D::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format, flags, mipCount);
}
inline void UnityEngine::Texture3D::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format, flags);
}
inline void UnityEngine::Texture3D::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, /* [DefaultValue("Texture.GenerateAllMips")] */ int32_t  mipCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format, flags, mipCount);
}
inline void UnityEngine::Texture3D::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, textureFormat, mipCount);
}
inline void UnityEngine::Texture3D::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, /* [DefaultValue("IntPtr.Zero")] */ ::System::IntPtr  nativeTex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, textureFormat, mipCount, nativeTex);
}
inline void UnityEngine::Texture3D::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, /* [DefaultValue("IntPtr.Zero")] */ ::System::IntPtr  nativeTex, /* [DefaultValue("false")] */ bool  createUninitialized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, textureFormat, mipCount, nativeTex, createUninitialized);
}
inline void UnityEngine::Texture3D::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, textureFormat, mipChain);
}
inline void UnityEngine::Texture3D::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, /* [DefaultValue("false")] */ bool  createUninitialized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, textureFormat, mipChain, createUninitialized);
}
inline void UnityEngine::Texture3D::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, /* [DefaultValue("IntPtr.Zero")] */ ::System::IntPtr  nativeTex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, textureFormat, mipChain, nativeTex);
}
inline void UnityEngine::Texture3D::Apply(/* [DefaultValue("true")] */ bool  updateMipmaps, /* [DefaultValue("false")] */ bool  makeNoLongerReadable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"Apply", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMipmaps, makeNoLongerReadable);
}
inline void UnityEngine::Texture3D::Apply(bool  updateMipmaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"Apply", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMipmaps);
}
inline void UnityEngine::Texture3D::Apply()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"Apply", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Texture3D::SetPixel(int32_t  x, int32_t  y, int32_t  z, ::UnityEngine::Color  color, /* [DefaultValue("0")] */ int32_t  mipLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"SetPixel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, z, color, mipLevel);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> UnityEngine::Texture3D::GetPixelData(int32_t  mipLevel)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Texture3D*>(),
                    {"GetPixelData", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(this, ___internal_method, mipLevel);
}
inline void UnityEngine::Texture3D::ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"ValidateIsNotCrunched", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, flags);
}
inline int32_t UnityEngine::Texture3D::get_depth_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"get_depth_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Texture3D::get_isReadable_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"get_isReadable_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Texture3D::SetPixelImpl_Injected(::System::IntPtr  _unity_self, int32_t  mip, int32_t  x, int32_t  y, int32_t  z, ::by_ref<::UnityEngine::Color>  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"SetPixelImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, mip, x, y, z, color);
}
inline void UnityEngine::Texture3D::ApplyImpl_Injected(::System::IntPtr  _unity_self, bool  updateMipmaps, bool  makeNoLongerReadable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"ApplyImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, updateMipmaps, makeNoLongerReadable);
}
inline void UnityEngine::Texture3D::SetPixels_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colors, int32_t  miplevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"SetPixels_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, colors, miplevel);
}
inline ::System::IntPtr UnityEngine::Texture3D::GetImageData_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture3D*>(),
                        {"GetImageData_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::Texture3D* UnityEngine::Texture3D::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture3D*>(width, height, depth, format, flags));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::Texture3D* UnityEngine::Texture3D::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture3D*>(width, height, depth, format, flags, mipCount));
}
/// [RequiredByNativeCode]
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::Texture3D* UnityEngine::Texture3D::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture3D*>(width, height, depth, format, flags));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::Texture3D* UnityEngine::Texture3D::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, /* [DefaultValue("Texture.GenerateAllMips")] */ int32_t  mipCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture3D*>(width, height, depth, format, flags, mipCount));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::Texture3D* UnityEngine::Texture3D::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture3D*>(width, height, depth, textureFormat, mipCount));
}
inline ::UnityEngine::Texture3D* UnityEngine::Texture3D::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, /* [DefaultValue("IntPtr.Zero")] */ ::System::IntPtr  nativeTex)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture3D*>(width, height, depth, textureFormat, mipCount, nativeTex));
}
inline ::UnityEngine::Texture3D* UnityEngine::Texture3D::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, /* [DefaultValue("IntPtr.Zero")] */ ::System::IntPtr  nativeTex, /* [DefaultValue("false")] */ bool  createUninitialized)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture3D*>(width, height, depth, textureFormat, mipCount, nativeTex, createUninitialized));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::Texture3D* UnityEngine::Texture3D::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture3D*>(width, height, depth, textureFormat, mipChain));
}
inline ::UnityEngine::Texture3D* UnityEngine::Texture3D::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, /* [DefaultValue("false")] */ bool  createUninitialized)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture3D*>(width, height, depth, textureFormat, mipChain, createUninitialized));
}
inline ::UnityEngine::Texture3D* UnityEngine::Texture3D::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, /* [DefaultValue("IntPtr.Zero")] */ ::System::IntPtr  nativeTex)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture3D*>(width, height, depth, textureFormat, mipChain, nativeTex));
}
// Ctor Parameters []
constexpr ::UnityEngine::Texture3D::Texture3D()   {
}
