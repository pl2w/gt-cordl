#pragma once
// IWYU pragma private; include "UnityEngine/MaterialPropertyBlock.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTextureSubElement_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.GetFloatImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::MaterialPropertyBlock::*)(int32_t)>(&::UnityEngine::MaterialPropertyBlock::GetFloatImpl)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb587c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"GetFloatImpl", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.GetColorImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::MaterialPropertyBlock::*)(int32_t)>(&::UnityEngine::MaterialPropertyBlock::GetColorImpl)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb587cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"GetColorImpl", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetIntImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, int32_t)>(&::UnityEngine::MaterialPropertyBlock::SetIntImpl)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb587db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetIntImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetFloatImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, float_t)>(&::UnityEngine::MaterialPropertyBlock::SetFloatImpl)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb587e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetFloatImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetVectorImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::UnityEngine::Vector4)>(&::UnityEngine::MaterialPropertyBlock::SetVectorImpl)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb587f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetVectorImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetColorImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::UnityEngine::Color)>(&::UnityEngine::MaterialPropertyBlock::SetColorImpl)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb587ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetColorImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetMatrixImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::UnityEngine::Matrix4x4)>(&::UnityEngine::MaterialPropertyBlock::SetMatrixImpl)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb5880b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetMatrixImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetTextureImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::UnityEngine::Texture*)>(&::UnityEngine::MaterialPropertyBlock::SetTextureImpl)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb588174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetTextureImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetRenderTextureImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement)>(&::UnityEngine::MaterialPropertyBlock::SetRenderTextureImpl)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb5882b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetRenderTextureImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetBufferImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::MaterialPropertyBlock::SetBufferImpl)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb5883fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetBufferImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetGraphicsBufferImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::MaterialPropertyBlock::SetGraphicsBufferImpl)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb5884c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetGraphicsBufferImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetConstantBufferImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(&::UnityEngine::MaterialPropertyBlock::SetConstantBufferImpl)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb588584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetConstantBufferImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetFloatArrayImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::ArrayW<float_t>, int32_t)>(&::UnityEngine::MaterialPropertyBlock::SetFloatArrayImpl)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb588678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetFloatArrayImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetVectorArrayImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::ArrayW<::UnityEngine::Vector4>, int32_t)>(&::UnityEngine::MaterialPropertyBlock::SetVectorArrayImpl)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb5887dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetVectorArrayImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetMatrixArrayImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::ArrayW<::UnityEngine::Matrix4x4>, int32_t)>(&::UnityEngine::MaterialPropertyBlock::SetMatrixArrayImpl)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb588940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetMatrixArrayImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.CreateImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::MaterialPropertyBlock::CreateImpl)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb588aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"CreateImpl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.DestroyImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::MaterialPropertyBlock::DestroyImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb588acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"DestroyImpl", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(bool)>(&::UnityEngine::MaterialPropertyBlock::Clear)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb588b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"Clear", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)()>(&::UnityEngine::MaterialPropertyBlock::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb588ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetFloatArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::ArrayW<float_t>, int32_t)>(&::UnityEngine::MaterialPropertyBlock::SetFloatArray)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb588bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetFloatArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetVectorArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::ArrayW<::UnityEngine::Vector4>, int32_t)>(&::UnityEngine::MaterialPropertyBlock::SetVectorArray)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb588c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetVectorArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetMatrixArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::ArrayW<::UnityEngine::Matrix4x4>, int32_t)>(&::UnityEngine::MaterialPropertyBlock::SetMatrixArray)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb588d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetMatrixArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)()>(&::UnityEngine::MaterialPropertyBlock::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb588de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)()>(&::UnityEngine::MaterialPropertyBlock::Finalize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb588e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                    {::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)()>(&::UnityEngine::MaterialPropertyBlock::Dispose)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb588ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(::StringW, int32_t)>(&::UnityEngine::MaterialPropertyBlock::SetInt)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb588f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetInt", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, int32_t)>(&::UnityEngine::MaterialPropertyBlock::SetInt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5890dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetInt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(::StringW, float_t)>(&::UnityEngine::MaterialPropertyBlock::SetFloat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb5890e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetFloat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, float_t)>(&::UnityEngine::MaterialPropertyBlock::SetFloat)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb589114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(::StringW, int32_t)>(&::UnityEngine::MaterialPropertyBlock::SetInteger)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb589118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetInteger", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, int32_t)>(&::UnityEngine::MaterialPropertyBlock::SetInteger)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb589148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetInteger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(::StringW, ::UnityEngine::Vector4)>(&::UnityEngine::MaterialPropertyBlock::SetVector)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb58914c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetVector", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::UnityEngine::Vector4)>(&::UnityEngine::MaterialPropertyBlock::SetVector)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb58919c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(::StringW, ::UnityEngine::Color)>(&::UnityEngine::MaterialPropertyBlock::SetColor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb5891a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetColor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::UnityEngine::Color)>(&::UnityEngine::MaterialPropertyBlock::SetColor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb5891f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetColor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(::StringW, ::UnityEngine::Matrix4x4)>(&::UnityEngine::MaterialPropertyBlock::SetMatrix)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb5891f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetMatrix", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::UnityEngine::Matrix4x4)>(&::UnityEngine::MaterialPropertyBlock::SetMatrix)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb589240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetMatrix", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(::StringW, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::MaterialPropertyBlock::SetBuffer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb58926c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetBuffer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::MaterialPropertyBlock::SetBuffer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb58929c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(::StringW, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::MaterialPropertyBlock::SetBuffer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb5892a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetBuffer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::MaterialPropertyBlock::SetBuffer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb5892d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(::StringW, ::UnityEngine::Texture*)>(&::UnityEngine::MaterialPropertyBlock::SetTexture)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb5892d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetTexture", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::UnityEngine::Texture*)>(&::UnityEngine::MaterialPropertyBlock::SetTexture)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb589304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetTexture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement)>(&::UnityEngine::MaterialPropertyBlock::SetTexture)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb589308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetTexture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetConstantBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(&::UnityEngine::MaterialPropertyBlock::SetConstantBuffer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb58930c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetConstantBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetFloatArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(::StringW, ::System::Collections::Generic::List_1<float_t>*)>(&::UnityEngine::MaterialPropertyBlock::SetFloatArray)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb589310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetFloatArray", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetFloatArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(::StringW, ::ArrayW<float_t>)>(&::UnityEngine::MaterialPropertyBlock::SetFloatArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5893b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetFloatArray", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetFloatArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::ArrayW<float_t>)>(&::UnityEngine::MaterialPropertyBlock::SetFloatArray)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb5893f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetFloatArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetVectorArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(::StringW, ::ArrayW<::UnityEngine::Vector4>)>(&::UnityEngine::MaterialPropertyBlock::SetVectorArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb589408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetVectorArray", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetVectorArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(int32_t, ::ArrayW<::UnityEngine::Vector4>)>(&::UnityEngine::MaterialPropertyBlock::SetVectorArray)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb589444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetVectorArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetMatrixArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MaterialPropertyBlock::*)(::StringW, ::ArrayW<::UnityEngine::Matrix4x4>)>(&::UnityEngine::MaterialPropertyBlock::SetMatrixArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb589458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetMatrixArray", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.GetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::MaterialPropertyBlock::*)(int32_t)>(&::UnityEngine::MaterialPropertyBlock::GetFloat)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb589494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"GetFloat", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.GetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::MaterialPropertyBlock::*)(int32_t)>(&::UnityEngine::MaterialPropertyBlock::GetColor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb589498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"GetColor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.GetFloatImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::MaterialPropertyBlock::GetFloatImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb587cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"GetFloatImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.GetColorImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Color>)>(&::UnityEngine::MaterialPropertyBlock::GetColorImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb587d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"GetColorImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetIntImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::MaterialPropertyBlock::SetIntImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb587e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetIntImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetFloatImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, float_t)>(&::UnityEngine::MaterialPropertyBlock::SetFloatImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb587edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetFloatImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetVectorImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Vector4>)>(&::UnityEngine::MaterialPropertyBlock::SetVectorImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb587fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetVectorImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetColorImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Color>)>(&::UnityEngine::MaterialPropertyBlock::SetColorImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb588064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetColorImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetMatrixImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::MaterialPropertyBlock::SetMatrixImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb588120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetMatrixImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetTextureImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::System::IntPtr)>(&::UnityEngine::MaterialPropertyBlock::SetTextureImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb58825c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetTextureImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetRenderTextureImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::System::IntPtr, ::UnityEngine::Rendering::RenderTextureSubElement)>(&::UnityEngine::MaterialPropertyBlock::SetRenderTextureImpl_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb5883a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetRenderTextureImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetBufferImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::System::IntPtr)>(&::UnityEngine::MaterialPropertyBlock::SetBufferImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb58846c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetBufferImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetGraphicsBufferImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::System::IntPtr)>(&::UnityEngine::MaterialPropertyBlock::SetGraphicsBufferImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb588530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetGraphicsBufferImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetConstantBufferImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::MaterialPropertyBlock::SetConstantBufferImpl_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb58860c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetConstantBufferImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetFloatArrayImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t)>(&::UnityEngine::MaterialPropertyBlock::SetFloatArrayImpl_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb588780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetFloatArrayImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetVectorArrayImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t)>(&::UnityEngine::MaterialPropertyBlock::SetVectorArrayImpl_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb5888e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetVectorArrayImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.SetMatrixArrayImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t)>(&::UnityEngine::MaterialPropertyBlock::SetMatrixArrayImpl_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb588a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetMatrixArrayImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock.Clear_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::MaterialPropertyBlock::Clear_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb588b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"Clear_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::MaterialPropertyBlock::__cordl_internal_get_m_Ptr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::MaterialPropertyBlock::__cordl_internal_get_m_Ptr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr void UnityEngine::MaterialPropertyBlock::__cordl_internal_set_m_Ptr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Ptr = value;
}
inline float_t UnityEngine::MaterialPropertyBlock::GetFloatImpl(int32_t  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"GetFloatImpl", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, name);
}
inline ::UnityEngine::Color UnityEngine::MaterialPropertyBlock::GetColorImpl(int32_t  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"GetColorImpl", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, name);
}
inline void UnityEngine::MaterialPropertyBlock::SetIntImpl(int32_t  name, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetIntImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetFloatImpl(int32_t  name, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetFloatImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetVectorImpl(int32_t  name, ::UnityEngine::Vector4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetVectorImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetColorImpl(int32_t  name, ::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetColorImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetMatrixImpl(int32_t  name, ::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetMatrixImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetTextureImpl(int32_t  name, /* [NotNull] */ ::UnityEngine::Texture*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetTextureImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetRenderTextureImpl(int32_t  name, /* [NotNull] */ ::UnityEngine::RenderTexture*  value, ::UnityEngine::Rendering::RenderTextureSubElement  element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetRenderTextureImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value, element);
}
inline void UnityEngine::MaterialPropertyBlock::SetBufferImpl(int32_t  name, ::UnityEngine::ComputeBuffer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetBufferImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetGraphicsBufferImpl(int32_t  name, ::UnityEngine::GraphicsBuffer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetGraphicsBufferImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetConstantBufferImpl(int32_t  name, ::UnityEngine::ComputeBuffer*  value, int32_t  offset, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetConstantBufferImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value, offset, size);
}
inline void UnityEngine::MaterialPropertyBlock::SetFloatArrayImpl(int32_t  name, ::ArrayW<float_t>  values, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetFloatArrayImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, values, count);
}
inline void UnityEngine::MaterialPropertyBlock::SetVectorArrayImpl(int32_t  name, ::ArrayW<::UnityEngine::Vector4>  values, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetVectorArrayImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, values, count);
}
inline void UnityEngine::MaterialPropertyBlock::SetMatrixArrayImpl(int32_t  name, ::ArrayW<::UnityEngine::Matrix4x4>  values, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetMatrixArrayImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, values, count);
}
inline ::System::IntPtr UnityEngine::MaterialPropertyBlock::CreateImpl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"CreateImpl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::MaterialPropertyBlock::DestroyImpl(::System::IntPtr  mpb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"DestroyImpl", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mpb);
}
inline void UnityEngine::MaterialPropertyBlock::Clear(bool  keepMemory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"Clear", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keepMemory);
}
inline void UnityEngine::MaterialPropertyBlock::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::MaterialPropertyBlock::SetFloatArray(int32_t  name, ::ArrayW<float_t>  values, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetFloatArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, values, count);
}
inline void UnityEngine::MaterialPropertyBlock::SetVectorArray(int32_t  name, ::ArrayW<::UnityEngine::Vector4>  values, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetVectorArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, values, count);
}
inline void UnityEngine::MaterialPropertyBlock::SetMatrixArray(int32_t  name, ::ArrayW<::UnityEngine::Matrix4x4>  values, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetMatrixArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, values, count);
}
inline void UnityEngine::MaterialPropertyBlock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::MaterialPropertyBlock::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::MaterialPropertyBlock::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::MaterialPropertyBlock::SetInt(::StringW  name, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetInt", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetInt(int32_t  nameID, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetInt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetFloat(::StringW  name, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetFloat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetFloat(int32_t  nameID, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetInteger(::StringW  name, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetInteger", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetInteger(int32_t  nameID, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetInteger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetVector(::StringW  name, ::UnityEngine::Vector4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetVector", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetVector(int32_t  nameID, ::UnityEngine::Vector4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetColor(::StringW  name, ::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetColor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetColor(int32_t  nameID, ::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetColor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetMatrix(::StringW  name, ::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetMatrix", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetMatrix(int32_t  nameID, ::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetMatrix", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetBuffer(::StringW  name, ::UnityEngine::ComputeBuffer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetBuffer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetBuffer(::StringW  name, ::UnityEngine::GraphicsBuffer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetBuffer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetBuffer(int32_t  nameID, ::UnityEngine::GraphicsBuffer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetTexture(::StringW  name, ::UnityEngine::Texture*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetTexture", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetTexture(int32_t  nameID, ::UnityEngine::Texture*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetTexture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetTexture(int32_t  nameID, ::UnityEngine::RenderTexture*  value, ::UnityEngine::Rendering::RenderTextureSubElement  element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetTexture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value, element);
}
inline void UnityEngine::MaterialPropertyBlock::SetConstantBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  value, int32_t  offset, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetConstantBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value, offset, size);
}
inline void UnityEngine::MaterialPropertyBlock::SetFloatArray(::StringW  name, ::System::Collections::Generic::List_1<float_t>*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetFloatArray", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, values);
}
inline void UnityEngine::MaterialPropertyBlock::SetFloatArray(::StringW  name, ::ArrayW<float_t>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetFloatArray", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, values);
}
inline void UnityEngine::MaterialPropertyBlock::SetFloatArray(int32_t  nameID, ::ArrayW<float_t>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetFloatArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, values);
}
inline void UnityEngine::MaterialPropertyBlock::SetVectorArray(::StringW  name, ::ArrayW<::UnityEngine::Vector4>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetVectorArray", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, values);
}
inline void UnityEngine::MaterialPropertyBlock::SetVectorArray(int32_t  nameID, ::ArrayW<::UnityEngine::Vector4>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetVectorArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, values);
}
inline void UnityEngine::MaterialPropertyBlock::SetMatrixArray(::StringW  name, ::ArrayW<::UnityEngine::Matrix4x4>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetMatrixArray", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, values);
}
inline float_t UnityEngine::MaterialPropertyBlock::GetFloat(int32_t  nameID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"GetFloat", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, nameID);
}
inline ::UnityEngine::Color UnityEngine::MaterialPropertyBlock::GetColor(int32_t  nameID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"GetColor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, nameID);
}
inline float_t UnityEngine::MaterialPropertyBlock::GetFloatImpl_Injected(::System::IntPtr  _unity_self, int32_t  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"GetFloatImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self, name);
}
inline void UnityEngine::MaterialPropertyBlock::GetColorImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Color>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"GetColorImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, ret);
}
inline void UnityEngine::MaterialPropertyBlock::SetIntImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetIntImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetFloatImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetFloatImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetVectorImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Vector4>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetVectorImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetColorImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Color>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetColorImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetMatrixImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Matrix4x4>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetMatrixImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetTextureImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetTextureImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetRenderTextureImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::System::IntPtr  value, ::UnityEngine::Rendering::RenderTextureSubElement  element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetRenderTextureImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, value, element);
}
inline void UnityEngine::MaterialPropertyBlock::SetBufferImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetBufferImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetGraphicsBufferImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetGraphicsBufferImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, value);
}
inline void UnityEngine::MaterialPropertyBlock::SetConstantBufferImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::System::IntPtr  value, int32_t  offset, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetConstantBufferImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, value, offset, size);
}
inline void UnityEngine::MaterialPropertyBlock::SetFloatArrayImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetFloatArrayImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, values, count);
}
inline void UnityEngine::MaterialPropertyBlock::SetVectorArrayImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetVectorArrayImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, values, count);
}
inline void UnityEngine::MaterialPropertyBlock::SetMatrixArrayImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"SetMatrixArrayImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, values, count);
}
inline void UnityEngine::MaterialPropertyBlock::Clear_Injected(::System::IntPtr  _unity_self, bool  keepMemory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock*>(),
                        {"Clear_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, keepMemory);
}
inline ::UnityEngine::MaterialPropertyBlock* UnityEngine::MaterialPropertyBlock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::MaterialPropertyBlock*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::MaterialPropertyBlock::MaterialPropertyBlock()   {
}
//  Writing Method size for method: ::UnityEngine::MaterialPropertyBlock_BindingsMarshaller.ConvertToNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::MaterialPropertyBlock_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb58949c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::MaterialPropertyBlock_BindingsMarshaller::ConvertToNative(::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MaterialPropertyBlock_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, materialPropertyBlock);
}
// Ctor Parameters []
constexpr ::UnityEngine::MaterialPropertyBlock_BindingsMarshaller::MaterialPropertyBlock_BindingsMarshaller()   {
}
