#pragma once
// IWYU pragma private; include "Liv/Lck/Rendering/LckHeadsetCaptureRenderPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "Liv/Lck/Rendering/zzzz__LckHeadsetCaptureRenderPass_def.hpp"
#include "Liv/Lck/Rendering/zzzz__LckHeadsetCaptureRenderPass_def.hpp"
#include "Liv/Lck/zzzz__LckHeadsetCamera_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::*)(::Liv::Lck::LckHeadsetCamera*, ::UnityEngine::Camera*)>(&::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::Setup)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d407fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*>(),
                        {"Setup", {}, {::i2c::type_of<::Liv::Lck::LckHeadsetCamera*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass.RecordRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x6ac;
  constexpr static std::size_t addrs = 0x9d40834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*>(),
                    {::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::Execute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d40ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*>(),
                    {::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::*)()>(&::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::Dispose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9d4057c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::*)()>(&::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d40514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Liv::Lck::LckHeadsetCamera>& Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::__cordl_internal_get__headsetCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headsetCamera;
}
constexpr ::UnityW<::Liv::Lck::LckHeadsetCamera> const& Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::__cordl_internal_get__headsetCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headsetCamera;
}
constexpr void Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::__cordl_internal_set__headsetCamera(::UnityW<::Liv::Lck::LckHeadsetCamera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headsetCamera = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::__cordl_internal_get__camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::__cordl_internal_get__camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camera;
}
constexpr void Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::__cordl_internal_set__camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____camera = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::__cordl_internal_get__cachedTargetHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTargetHandle;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::__cordl_internal_get__cachedTargetHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTargetHandle;
}
constexpr void Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::__cordl_internal_set__cachedTargetHandle(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedTargetHandle = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::__cordl_internal_get__cachedTargetRT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTargetRT;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::__cordl_internal_get__cachedTargetRT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTargetRT;
}
constexpr void Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::__cordl_internal_set__cachedTargetRT(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedTargetRT = value;
}
inline void Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::setStaticF_BlitTextureId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "BlitTextureId", ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*>(std::forward<int32_t>(value));
}
inline int32_t Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::getStaticF_BlitTextureId()  {
return ::cordl_internals::getStaticField<int32_t, "BlitTextureId", ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*>();
}
inline void Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::Setup(::Liv::Lck::LckHeadsetCamera*  headsetCamera, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*>(),
                        {"Setup", {}, {::i2c::type_of<::Liv::Lck::LckHeadsetCamera*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headsetCamera, camera);
}
inline void Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass* Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass::LckHeadsetCaptureRenderPass()   {
}
//  Writing Method size for method: ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c::*)()>(&::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d40fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c._RecordRenderGraph_b__10_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c::*)(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(&::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c::_RecordRenderGraph_b__10_0)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x9d40fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c*>(),
                        {"<RecordRenderGraph>b__10_0", {}, {::i2c::type_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c::setStaticF___9(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c*, "<>9", ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c*>(std::forward<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c*>(value));
}
inline ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c* Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c*, "<>9", ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c*>();
}
inline void Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c::setStaticF___9__10_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__10_0", ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c::getStaticF___9__10_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__10_0", ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c*>();
}
inline void Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c::_RecordRenderGraph_b__10_0(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c*>(),
                        {"<RecordRenderGraph>b__10_0", {}, {::i2c::type_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c* Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c::LckHeadsetCaptureRenderPass___c()   {
}
//  Writing Method size for method: ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData::*)()>(&::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d40f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData::__cordl_internal_get_Source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Source;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData::__cordl_internal_get_Source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Source;
}
constexpr void Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData::__cordl_internal_set_Source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Source = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData::__cordl_internal_get_Destination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Destination;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData::__cordl_internal_get_Destination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Destination;
}
constexpr void Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData::__cordl_internal_set_Destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Destination = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData::__cordl_internal_get_Material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Material;
}
constexpr ::UnityW<::UnityEngine::Material> const& Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData::__cordl_internal_get_Material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Material;
}
constexpr void Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData::__cordl_internal_set_Material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Material = value;
}
inline void Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData* Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData::LckHeadsetCaptureRenderPass_PassData()   {
}
