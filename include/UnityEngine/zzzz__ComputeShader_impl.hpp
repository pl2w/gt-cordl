#pragma once
// IWYU pragma private; include "UnityEngine/ComputeShader.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeywordSpace_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::ComputeShader.FindKernel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ComputeShader::*)(::StringW)>(&::UnityEngine::ComputeShader::FindKernel)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xb5eb5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"FindKernel", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.HasKernel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ComputeShader::*)(::StringW)>(&::UnityEngine::ComputeShader::HasKernel)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xb5eb7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"HasKernel", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.SetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ComputeShader::*)(int32_t, float_t)>(&::UnityEngine::ComputeShader::SetFloat)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb5eb970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.SetInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ComputeShader::*)(int32_t, int32_t)>(&::UnityEngine::ComputeShader::SetInt)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb5eba4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetInt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.SetVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ComputeShader::*)(int32_t, ::UnityEngine::Vector4)>(&::UnityEngine::ComputeShader::SetVector)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb5ebb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.SetIntArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ComputeShader::*)(int32_t, ::ArrayW<int32_t>)>(&::UnityEngine::ComputeShader::SetIntArray)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb5ebc0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetIntArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.SetTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ComputeShader::*)(int32_t, int32_t, ::UnityEngine::Texture*, int32_t)>(&::UnityEngine::ComputeShader::SetTexture)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb5ebd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetTexture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.Internal_SetBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ComputeShader::*)(int32_t, int32_t, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::ComputeShader::Internal_SetBuffer)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb5ebeec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"Internal_SetBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.Internal_SetGraphicsBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ComputeShader::*)(int32_t, int32_t, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::ComputeShader::Internal_SetGraphicsBuffer)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb5ec000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"Internal_SetGraphicsBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.SetBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ComputeShader::*)(int32_t, int32_t, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::ComputeShader::SetBuffer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb5ec114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.SetBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ComputeShader::*)(int32_t, int32_t, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::ComputeShader::SetBuffer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb5ec118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.SetConstantComputeBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ComputeShader::*)(int32_t, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(&::UnityEngine::ComputeShader::SetConstantComputeBuffer)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb5ec11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetConstantComputeBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.Dispatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ComputeShader::*)(int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::ComputeShader::Dispatch)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb5ec250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"Dispatch", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.get_keywordSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LocalKeywordSpace (::UnityEngine::ComputeShader::*)()>(&::UnityEngine::ComputeShader::get_keywordSpace)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb5ec35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"get_keywordSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.EnableKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ComputeShader::*)(::StringW)>(&::UnityEngine::ComputeShader::EnableKeyword)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb5ec420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"EnableKeyword", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.DisableKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ComputeShader::*)(::StringW)>(&::UnityEngine::ComputeShader::DisableKeyword)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb5ec5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"DisableKeyword", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.SetShaderKeywords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ComputeShader::*)(::ArrayW<::StringW>)>(&::UnityEngine::ComputeShader::SetShaderKeywords)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb5ec780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetShaderKeywords", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.set_shaderKeywords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ComputeShader::*)(::ArrayW<::StringW>)>(&::UnityEngine::ComputeShader::set_shaderKeywords)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb5ec83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"set_shaderKeywords", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ComputeShader::*)()>(&::UnityEngine::ComputeShader::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb5ec840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.SetVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ComputeShader::*)(::StringW, ::UnityEngine::Vector4)>(&::UnityEngine::ComputeShader::SetVector)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5ec898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetVector", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.SetInts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ComputeShader::*)(int32_t, ::ArrayW<int32_t>)>(&::UnityEngine::ComputeShader::SetInts)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb5ec8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetInts", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.SetTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ComputeShader::*)(int32_t, int32_t, ::UnityEngine::Texture*)>(&::UnityEngine::ComputeShader::SetTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5ec8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetTexture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.SetBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ComputeShader::*)(int32_t, ::StringW, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::ComputeShader::SetBuffer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5ec8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.SetConstantBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ComputeShader::*)(int32_t, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(&::UnityEngine::ComputeShader::SetConstantBuffer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb5ec934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetConstantBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.FindKernel_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::ComputeShader::FindKernel_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5eb76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"FindKernel_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.HasKernel_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::ComputeShader::HasKernel_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5eb92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"HasKernel_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.SetFloat_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, float_t)>(&::UnityEngine::ComputeShader::SetFloat_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5eb9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetFloat_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.SetInt_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::ComputeShader::SetInt_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5ebad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetInt_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.SetVector_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Vector4>)>(&::UnityEngine::ComputeShader::SetVector_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5ebbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetVector_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.SetIntArray_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::ComputeShader::SetIntArray_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5ebd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetIntArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.SetTexture_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, ::System::IntPtr, int32_t)>(&::UnityEngine::ComputeShader::SetTexture_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb5ebe80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetTexture_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.Internal_SetBuffer_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, ::System::IntPtr)>(&::UnityEngine::ComputeShader::Internal_SetBuffer_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb5ebfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"Internal_SetBuffer_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.Internal_SetGraphicsBuffer_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, ::System::IntPtr)>(&::UnityEngine::ComputeShader::Internal_SetGraphicsBuffer_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb5ec0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"Internal_SetGraphicsBuffer_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.SetConstantComputeBuffer_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::ComputeShader::SetConstantComputeBuffer_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb5ec1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetConstantComputeBuffer_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.Dispatch_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::ComputeShader::Dispatch_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb5ec2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"Dispatch_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.get_keywordSpace_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rendering::LocalKeywordSpace>)>(&::UnityEngine::ComputeShader::get_keywordSpace_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5ec3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"get_keywordSpace_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeywordSpace>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.EnableKeyword_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::ComputeShader::EnableKeyword_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5ec58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"EnableKeyword_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.DisableKeyword_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::ComputeShader::DisableKeyword_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5ec73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"DisableKeyword_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ComputeShader.SetShaderKeywords_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::ArrayW<::StringW>)>(&::UnityEngine::ComputeShader::SetShaderKeywords_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5ec7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetShaderKeywords_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::ComputeShader::FindKernel(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"FindKernel", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline bool UnityEngine::ComputeShader::HasKernel(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"HasKernel", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline void UnityEngine::ComputeShader::SetFloat(int32_t  nameID, float_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, val);
}
inline void UnityEngine::ComputeShader::SetInt(int32_t  nameID, int32_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetInt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, val);
}
inline void UnityEngine::ComputeShader::SetVector(int32_t  nameID, ::UnityEngine::Vector4  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, val);
}
inline void UnityEngine::ComputeShader::SetIntArray(int32_t  nameID, ::ArrayW<int32_t>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetIntArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, values);
}
inline void UnityEngine::ComputeShader::SetTexture(int32_t  kernelIndex, int32_t  nameID, /* [NotNull] */ ::UnityEngine::Texture*  texture, int32_t  mipLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetTexture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kernelIndex, nameID, texture, mipLevel);
}
inline void UnityEngine::ComputeShader::Internal_SetBuffer(int32_t  kernelIndex, int32_t  nameID, /* [NotNull] */ ::UnityEngine::ComputeBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"Internal_SetBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kernelIndex, nameID, buffer);
}
inline void UnityEngine::ComputeShader::Internal_SetGraphicsBuffer(int32_t  kernelIndex, int32_t  nameID, /* [NotNull] */ ::UnityEngine::GraphicsBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"Internal_SetGraphicsBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kernelIndex, nameID, buffer);
}
inline void UnityEngine::ComputeShader::SetBuffer(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kernelIndex, nameID, buffer);
}
inline void UnityEngine::ComputeShader::SetBuffer(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kernelIndex, nameID, buffer);
}
inline void UnityEngine::ComputeShader::SetConstantComputeBuffer(int32_t  nameID, /* [NotNull] */ ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetConstantComputeBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, buffer, offset, size);
}
inline void UnityEngine::ComputeShader::Dispatch(int32_t  kernelIndex, int32_t  threadGroupsX, int32_t  threadGroupsY, int32_t  threadGroupsZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"Dispatch", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kernelIndex, threadGroupsX, threadGroupsY, threadGroupsZ);
}
inline ::UnityEngine::Rendering::LocalKeywordSpace UnityEngine::ComputeShader::get_keywordSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"get_keywordSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeywordSpace>(this, ___internal_method);
}
inline void UnityEngine::ComputeShader::EnableKeyword(::StringW  keyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"EnableKeyword", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyword);
}
inline void UnityEngine::ComputeShader::DisableKeyword(::StringW  keyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"DisableKeyword", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyword);
}
inline void UnityEngine::ComputeShader::SetShaderKeywords(::ArrayW<::StringW>  names)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetShaderKeywords", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, names);
}
inline void UnityEngine::ComputeShader::set_shaderKeywords(::ArrayW<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"set_shaderKeywords", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ComputeShader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ComputeShader::SetVector(::StringW  name, ::UnityEngine::Vector4  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetVector", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, val);
}
inline void UnityEngine::ComputeShader::SetInts(int32_t  nameID, /* [ParamArray] */ ::ArrayW<int32_t>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetInts", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, values);
}
inline void UnityEngine::ComputeShader::SetTexture(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Texture*  texture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetTexture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kernelIndex, nameID, texture);
}
inline void UnityEngine::ComputeShader::SetBuffer(int32_t  kernelIndex, ::StringW  name, ::UnityEngine::ComputeBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kernelIndex, name, buffer);
}
inline void UnityEngine::ComputeShader::SetConstantBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetConstantBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, buffer, offset, size);
}
inline int32_t UnityEngine::ComputeShader::FindKernel_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"FindKernel_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, name);
}
inline bool UnityEngine::ComputeShader::HasKernel_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"HasKernel_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, name);
}
inline void UnityEngine::ComputeShader::SetFloat_Injected(::System::IntPtr  _unity_self, int32_t  nameID, float_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetFloat_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, nameID, val);
}
inline void UnityEngine::ComputeShader::SetInt_Injected(::System::IntPtr  _unity_self, int32_t  nameID, int32_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetInt_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, nameID, val);
}
inline void UnityEngine::ComputeShader::SetVector_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Vector4>  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetVector_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, nameID, val);
}
inline void UnityEngine::ComputeShader::SetIntArray_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetIntArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, nameID, values);
}
inline void UnityEngine::ComputeShader::SetTexture_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, int32_t  nameID, ::System::IntPtr  texture, int32_t  mipLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetTexture_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, kernelIndex, nameID, texture, mipLevel);
}
inline void UnityEngine::ComputeShader::Internal_SetBuffer_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, int32_t  nameID, ::System::IntPtr  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"Internal_SetBuffer_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, kernelIndex, nameID, buffer);
}
inline void UnityEngine::ComputeShader::Internal_SetGraphicsBuffer_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, int32_t  nameID, ::System::IntPtr  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"Internal_SetGraphicsBuffer_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, kernelIndex, nameID, buffer);
}
inline void UnityEngine::ComputeShader::SetConstantComputeBuffer_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::System::IntPtr  buffer, int32_t  offset, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetConstantComputeBuffer_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, nameID, buffer, offset, size);
}
inline void UnityEngine::ComputeShader::Dispatch_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, int32_t  threadGroupsX, int32_t  threadGroupsY, int32_t  threadGroupsZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"Dispatch_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, kernelIndex, threadGroupsX, threadGroupsY, threadGroupsZ);
}
inline void UnityEngine::ComputeShader::get_keywordSpace_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeywordSpace>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"get_keywordSpace_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeywordSpace>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ComputeShader::EnableKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"EnableKeyword_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, keyword);
}
inline void UnityEngine::ComputeShader::DisableKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"DisableKeyword_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, keyword);
}
inline void UnityEngine::ComputeShader::SetShaderKeywords_Injected(::System::IntPtr  _unity_self, ::ArrayW<::StringW>  names)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ComputeShader*>(),
                        {"SetShaderKeywords_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, names);
}
inline ::UnityEngine::ComputeShader* UnityEngine::ComputeShader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ComputeShader*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ComputeShader::ComputeShader()   {
}
