#pragma once
// IWYU pragma private; include "Drawing/AlineURPRenderPassFeature.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "Drawing/zzzz__AlineURPRenderPassFeature_def.hpp"
#include "Drawing/zzzz__AlineURPRenderPassFeature_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::Drawing::AlineURPRenderPassFeature.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::AlineURPRenderPassFeature::*)()>(&::Drawing::AlineURPRenderPassFeature::Create)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x55a79ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::AlineURPRenderPassFeature*>(),
                    {::i2c::class_of<::Drawing::AlineURPRenderPassFeature*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::AlineURPRenderPassFeature.AddRenderPasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::AlineURPRenderPassFeature::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::Drawing::AlineURPRenderPassFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x55a7b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::AlineURPRenderPassFeature*>(),
                    {::i2c::class_of<::Drawing::AlineURPRenderPassFeature*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::AlineURPRenderPassFeature.AddRenderPasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::AlineURPRenderPassFeature::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*)>(&::Drawing::AlineURPRenderPassFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x55a7b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::AlineURPRenderPassFeature*>(),
                        {"AddRenderPasses", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::AlineURPRenderPassFeature._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::AlineURPRenderPassFeature::*)()>(&::Drawing::AlineURPRenderPassFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55a7b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::AlineURPRenderPassFeature*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*& Drawing::AlineURPRenderPassFeature::__cordl_internal_get_m_ScriptablePass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScriptablePass;
}
constexpr ::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass* const& Drawing::AlineURPRenderPassFeature::__cordl_internal_get_m_ScriptablePass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScriptablePass;
}
constexpr void Drawing::AlineURPRenderPassFeature::__cordl_internal_set_m_ScriptablePass(::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScriptablePass = value;
}
inline void Drawing::AlineURPRenderPassFeature::Create()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::AlineURPRenderPassFeature*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::AlineURPRenderPassFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::AlineURPRenderPassFeature*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline void Drawing::AlineURPRenderPassFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::AlineURPRenderPassFeature*>(),
                        {"AddRenderPasses", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer);
}
inline void Drawing::AlineURPRenderPassFeature::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::AlineURPRenderPassFeature*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Drawing::AlineURPRenderPassFeature* Drawing::AlineURPRenderPassFeature::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::AlineURPRenderPassFeature*>());
}
// Ctor Parameters []
constexpr ::Drawing::AlineURPRenderPassFeature::AlineURPRenderPassFeature()   {
}
//  Writing Method size for method: ::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass.Configure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor)>(&::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass::Configure)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55a7b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*>(),
                    {::i2c::class_of<::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass::Execute)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x55a7b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*>(),
                    {::i2c::class_of<::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass::*)()>(&::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x55a7a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass.RecordRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x55a7be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*>(),
                    {::i2c::class_of<::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass.FrameCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass::FrameCleanup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55a811c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*>(),
                    {::i2c::class_of<::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*>(), 5}
                ));
    return ___internal_method;
  }
};
inline void Drawing::AlineURPRenderPassFeature_AlineURPRenderPass::Configure(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTextureDescriptor  cameraTextureDescriptor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cameraTextureDescriptor);
}
inline void Drawing::AlineURPRenderPassFeature_AlineURPRenderPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void Drawing::AlineURPRenderPassFeature_AlineURPRenderPass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::AlineURPRenderPassFeature_AlineURPRenderPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void Drawing::AlineURPRenderPassFeature_AlineURPRenderPass::FrameCleanup(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline ::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass* Drawing::AlineURPRenderPassFeature_AlineURPRenderPass::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*>());
}
// Ctor Parameters []
constexpr ::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass::AlineURPRenderPassFeature_AlineURPRenderPass()   {
}
//  Writing Method size for method: ::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0::*)()>(&::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55a8114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0._RecordRenderGraph_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0::*)(::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0::_RecordRenderGraph_b__0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55a8128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0*>(),
                        {"<RecordRenderGraph>b__0", {}, {::i2c::type_of<::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0::__cordl_internal_get_allowDisablingWireframe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowDisablingWireframe;
}
constexpr bool const& Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0::__cordl_internal_get_allowDisablingWireframe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowDisablingWireframe;
}
constexpr void Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0::__cordl_internal_set_allowDisablingWireframe(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowDisablingWireframe = value;
}
inline void Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0::_RecordRenderGraph_b__0(::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0*>(),
                        {"<RecordRenderGraph>b__0", {}, {::i2c::type_of<::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0* Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0()   {
}
//  Writing Method size for method: ::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData::*)()>(&::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55a8120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData::__cordl_internal_get_camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData::__cordl_internal_get_camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___camera;
}
constexpr void Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData::__cordl_internal_set_camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___camera = value;
}
inline void Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData* Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData*>());
}
// Ctor Parameters []
constexpr ::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData::AlineURPRenderPass_AlineURPRenderPassFeature_PassData()   {
}
