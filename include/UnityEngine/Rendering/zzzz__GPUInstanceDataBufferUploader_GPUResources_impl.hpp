#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceDataBufferUploader_GPUResources.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBufferUploader_GPUResources_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerResources_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources.LoadShaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources::*)(::UnityEngine::Rendering::GPUResidentDrawerResources*)>(&::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources::LoadShaders)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb1fd3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources>(),
                        {"LoadShaders", {}, {::i2c::type_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources.CreateResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources::*)(int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources::CreateResources)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xb1fcd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources>(),
                        {"CreateResources", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources::*)()>(&::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb1fd45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources::LoadShaders(::UnityEngine::Rendering::GPUResidentDrawerResources*  resources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources>(),
                        {"LoadShaders", {}, {::i2c::type_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, resources);
}
inline void GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources::CreateResources(int32_t  newInstanceCount, int32_t  sizePerInstance, int32_t  newComponentCounts, int32_t  validComponentIndicesCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources>(),
                        {"CreateResources", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newInstanceCount, sizePerInstance, newComponentCounts, validComponentIndicesCount);
}
inline void GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "instanceData", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instanceIndices", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inputComponentOffsets", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "validComponentIndices", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cs", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "kernelId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InstanceDataByteSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InstanceCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ComponentCounts", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ValidComponentIndicesCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources::GPUInstanceDataBufferUploader_GPUResources(::UnityEngine::ComputeBuffer*  instanceData, ::UnityEngine::ComputeBuffer*  instanceIndices, ::UnityEngine::ComputeBuffer*  inputComponentOffsets, ::UnityEngine::ComputeBuffer*  validComponentIndices, ::UnityW<::UnityEngine::ComputeShader>  cs, int32_t  kernelId, int32_t  m_InstanceDataByteSize, int32_t  m_InstanceCount, int32_t  m_ComponentCounts, int32_t  m_ValidComponentIndicesCount) noexcept  {
this->instanceData = instanceData;
this->instanceIndices = instanceIndices;
this->inputComponentOffsets = inputComponentOffsets;
this->validComponentIndices = validComponentIndices;
this->cs = cs;
this->kernelId = kernelId;
this->m_InstanceDataByteSize = m_InstanceDataByteSize;
this->m_InstanceCount = m_InstanceCount;
this->m_ComponentCounts = m_ComponentCounts;
this->m_ValidComponentIndicesCount = m_ValidComponentIndicesCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources::GPUInstanceDataBufferUploader_GPUResources()   {
}
