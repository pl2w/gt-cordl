#pragma once
// IWYU pragma private; include "Liv/Lck/Rendering/LckCompositionRenderPass.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "Liv/Lck/Rendering/zzzz__LckCompositionRenderPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionRenderPass.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckCompositionRenderPass::*)(::UnityEngine::Material*, ::UnityEngine::Texture*)>(&::Liv::Lck::Rendering::LckCompositionRenderPass::Setup)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9d3fb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionRenderPass*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionRenderPass.RecordRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckCompositionRenderPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::Liv::Lck::Rendering::LckCompositionRenderPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x9d3fbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionRenderPass*>(),
                    {::i2c::class_of<::Liv::Lck::Rendering::LckCompositionRenderPass*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionRenderPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckCompositionRenderPass::*)()>(&::Liv::Lck::Rendering::LckCompositionRenderPass::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d3f87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionRenderPass*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& Liv::Lck::Rendering::LckCompositionRenderPass::__cordl_internal_get__blitMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blitMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Liv::Lck::Rendering::LckCompositionRenderPass::__cordl_internal_get__blitMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blitMaterial;
}
constexpr void Liv::Lck::Rendering::LckCompositionRenderPass::__cordl_internal_set__blitMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blitMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& Liv::Lck::Rendering::LckCompositionRenderPass::__cordl_internal_get__overlayTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlayTexture;
}
constexpr ::UnityW<::UnityEngine::Texture> const& Liv::Lck::Rendering::LckCompositionRenderPass::__cordl_internal_get__overlayTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlayTexture;
}
constexpr void Liv::Lck::Rendering::LckCompositionRenderPass::__cordl_internal_set__overlayTexture(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overlayTexture = value;
}
inline void Liv::Lck::Rendering::LckCompositionRenderPass::setStaticF_OverlayTexID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "OverlayTexID", ::Liv::Lck::Rendering::LckCompositionRenderPass*>(std::forward<int32_t>(value));
}
inline int32_t Liv::Lck::Rendering::LckCompositionRenderPass::getStaticF_OverlayTexID()  {
return ::cordl_internals::getStaticField<int32_t, "OverlayTexID", ::Liv::Lck::Rendering::LckCompositionRenderPass*>();
}
inline void Liv::Lck::Rendering::LckCompositionRenderPass::Setup(::UnityEngine::Material*  mat, ::UnityEngine::Texture*  overlayTexture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionRenderPass*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat, overlayTexture);
}
inline void Liv::Lck::Rendering::LckCompositionRenderPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Rendering::LckCompositionRenderPass*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void Liv::Lck::Rendering::LckCompositionRenderPass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionRenderPass*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Rendering::LckCompositionRenderPass* Liv::Lck::Rendering::LckCompositionRenderPass::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Rendering::LckCompositionRenderPass*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Rendering::LckCompositionRenderPass::LckCompositionRenderPass()   {
}
