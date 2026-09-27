#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUPrefixSum_RenderGraphResources.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUPrefixSum_RenderGraphResources_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GPUPrefixSum_RenderGraphResources.get_output
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::GlobalNamespace::GPUPrefixSum_RenderGraphResources::*)()>(&::GlobalNamespace::GPUPrefixSum_RenderGraphResources::get_output)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb1947b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUPrefixSum_RenderGraphResources>(),
                        {"get_output", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GPUPrefixSum_RenderGraphResources.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GPUPrefixSum_RenderGraphResources (*)(int32_t, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder, bool)>(&::GlobalNamespace::GPUPrefixSum_RenderGraphResources::Create)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb1947c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUPrefixSum_RenderGraphResources>(),
                        {"Create", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GPUPrefixSum_RenderGraphResources.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GPUPrefixSum_RenderGraphResources::*)(int32_t, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder, bool)>(&::GlobalNamespace::GPUPrefixSum_RenderGraphResources::Initialize)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0xb194824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUPrefixSum_RenderGraphResources>(),
                        {"Initialize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle GlobalNamespace::GPUPrefixSum_RenderGraphResources::get_output()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUPrefixSum_RenderGraphResources>(),
                        {"get_output", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(*this, ___internal_method);
}
inline ::GlobalNamespace::GPUPrefixSum_RenderGraphResources GlobalNamespace::GPUPrefixSum_RenderGraphResources::Create(int32_t  newMaxElementCount, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder  builder, bool  outputIsTemp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUPrefixSum_RenderGraphResources>(),
                        {"Create", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GPUPrefixSum_RenderGraphResources>(nullptr, ___internal_method, newMaxElementCount, renderGraph, builder, outputIsTemp);
}
inline void GlobalNamespace::GPUPrefixSum_RenderGraphResources::Initialize(int32_t  newMaxElementCount, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder  builder, bool  outputIsTemp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUPrefixSum_RenderGraphResources>(),
                        {"Initialize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newMaxElementCount, renderGraph, builder, outputIsTemp);
}
// Ctor Parameters [CppParam { name: "alignedElementCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxBufferCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxLevelCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prefixBuffer0", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prefixBuffer1", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "totalLevelCountBuffer", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "levelOffsetBuffer", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "indirectDispatchArgsBuffer", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GPUPrefixSum_RenderGraphResources::GPUPrefixSum_RenderGraphResources(int32_t  alignedElementCount, int32_t  maxBufferCount, int32_t  maxLevelCount, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  prefixBuffer0, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  prefixBuffer1, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  totalLevelCountBuffer, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  levelOffsetBuffer, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  indirectDispatchArgsBuffer) noexcept  {
this->alignedElementCount = alignedElementCount;
this->maxBufferCount = maxBufferCount;
this->maxLevelCount = maxLevelCount;
this->prefixBuffer0 = prefixBuffer0;
this->prefixBuffer1 = prefixBuffer1;
this->totalLevelCountBuffer = totalLevelCountBuffer;
this->levelOffsetBuffer = levelOffsetBuffer;
this->indirectDispatchArgsBuffer = indirectDispatchArgsBuffer;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GPUPrefixSum_RenderGraphResources::GPUPrefixSum_RenderGraphResources()   {
}
