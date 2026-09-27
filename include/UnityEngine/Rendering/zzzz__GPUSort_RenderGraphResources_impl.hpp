#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUSort_RenderGraphResources.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUSort_RenderGraphResources_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GPUSort_RenderGraphResources.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GPUSort_RenderGraphResources (*)(int32_t, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder)>(&::GlobalNamespace::GPUSort_RenderGraphResources::Create)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb195aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUSort_RenderGraphResources>(),
                        {"Create", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::GPUSort_RenderGraphResources GlobalNamespace::GPUSort_RenderGraphResources::Create(int32_t  count, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUSort_RenderGraphResources>(),
                        {"Create", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GPUSort_RenderGraphResources>(nullptr, ___internal_method, count, renderGraph, builder);
}
// Ctor Parameters [CppParam { name: "sortBufferKeys", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sortBufferValues", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GPUSort_RenderGraphResources::GPUSort_RenderGraphResources(::UnityEngine::Rendering::RenderGraphModule::BufferHandle  sortBufferKeys, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  sortBufferValues) noexcept  {
this->sortBufferKeys = sortBufferKeys;
this->sortBufferValues = sortBufferValues;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GPUSort_RenderGraphResources::GPUSort_RenderGraphResources()   {
}
