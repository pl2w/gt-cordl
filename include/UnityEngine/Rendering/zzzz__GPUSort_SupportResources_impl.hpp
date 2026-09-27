#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUSort_SupportResources.hpp"
#include "UnityEngine/Rendering/zzzz__GPUSort_SupportResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUSort_RenderGraphResources_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GPUSort_SupportResources.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GPUSort_SupportResources (*)(::GlobalNamespace::GPUSort_RenderGraphResources)>(&::GlobalNamespace::GPUSort_SupportResources::Load)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb195bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUSort_SupportResources>(),
                        {"Load", {}, {::i2c::type_of<::GlobalNamespace::GPUSort_RenderGraphResources>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GPUSort_SupportResources.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GPUSort_SupportResources::*)()>(&::GlobalNamespace::GPUSort_SupportResources::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb195c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUSort_SupportResources>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::GPUSort_SupportResources GlobalNamespace::GPUSort_SupportResources::Load(::GlobalNamespace::GPUSort_RenderGraphResources  renderGraphResources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUSort_SupportResources>(),
                        {"Load", {}, {::i2c::type_of<::GlobalNamespace::GPUSort_RenderGraphResources>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GPUSort_SupportResources>(nullptr, ___internal_method, renderGraphResources);
}
inline void GlobalNamespace::GPUSort_SupportResources::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUSort_SupportResources>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "sortBufferKeys", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sortBufferValues", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GPUSort_SupportResources::GPUSort_SupportResources(::UnityEngine::GraphicsBuffer*  sortBufferKeys, ::UnityEngine::GraphicsBuffer*  sortBufferValues) noexcept  {
this->sortBufferKeys = sortBufferKeys;
this->sortBufferValues = sortBufferValues;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GPUSort_SupportResources::GPUSort_SupportResources()   {
}
