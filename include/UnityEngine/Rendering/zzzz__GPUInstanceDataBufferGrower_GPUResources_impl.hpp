#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceDataBufferGrower_GPUResources.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBufferGrower_GPUResources_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerResources_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources.LoadShaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources::*)(::UnityEngine::Rendering::GPUResidentDrawerResources*)>(&::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources::LoadShaders)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb1fdcf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources>(),
                        {"LoadShaders", {}, {::i2c::type_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources.CreateResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources::*)()>(&::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources::CreateResources)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb1fda84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources>(),
                        {"CreateResources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources::*)()>(&::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources::Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb1fddac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources::LoadShaders(::UnityEngine::Rendering::GPUResidentDrawerResources*  resources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources>(),
                        {"LoadShaders", {}, {::i2c::type_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, resources);
}
inline void GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources::CreateResources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources>(),
                        {"CreateResources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "cs", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "kernelId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources::GPUInstanceDataBufferGrower_GPUResources(::UnityW<::UnityEngine::ComputeShader>  cs, int32_t  kernelId) noexcept  {
this->cs = cs;
this->kernelId = kernelId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources::GPUInstanceDataBufferGrower_GPUResources()   {
}
