#pragma once
// IWYU pragma private; include "GlobalNamespace/LckCameraEvents.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LckCameraEvents_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckCameraEvents.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckCameraEvents::*)()>(&::GlobalNamespace::LckCameraEvents::OnEnable)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x56c5604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCameraEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckCameraEvents.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckCameraEvents::*)()>(&::GlobalNamespace::LckCameraEvents::OnDisable)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x56c56c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCameraEvents*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckCameraEvents.RenderPipelineManagerOnbeginCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckCameraEvents::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::GlobalNamespace::LckCameraEvents::RenderPipelineManagerOnbeginCameraRendering)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x56c577c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCameraEvents*>(),
                        {"RenderPipelineManagerOnbeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckCameraEvents.RenderPipelineManagerOnendCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckCameraEvents::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::GlobalNamespace::LckCameraEvents::RenderPipelineManagerOnendCameraRendering)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x56c580c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCameraEvents*>(),
                        {"RenderPipelineManagerOnendCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckCameraEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckCameraEvents::*)()>(&::GlobalNamespace::LckCameraEvents::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c589c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCameraEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::LckCameraEvents::__cordl_internal_get__camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::LckCameraEvents::__cordl_internal_get__camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camera;
}
constexpr void GlobalNamespace::LckCameraEvents::__cordl_internal_set__camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____camera = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::LckCameraEvents::__cordl_internal_get_onPreRender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPreRender;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::LckCameraEvents::__cordl_internal_get_onPreRender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPreRender;
}
constexpr void GlobalNamespace::LckCameraEvents::__cordl_internal_set_onPreRender(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPreRender = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::LckCameraEvents::__cordl_internal_get_onPostRender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPostRender;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::LckCameraEvents::__cordl_internal_get_onPostRender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPostRender;
}
constexpr void GlobalNamespace::LckCameraEvents::__cordl_internal_set_onPostRender(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPostRender = value;
}
inline void GlobalNamespace::LckCameraEvents::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCameraEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckCameraEvents::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCameraEvents*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckCameraEvents::RenderPipelineManagerOnbeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  scriptableRenderContext, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCameraEvents*>(),
                        {"RenderPipelineManagerOnbeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scriptableRenderContext, camera);
}
inline void GlobalNamespace::LckCameraEvents::RenderPipelineManagerOnendCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  scriptableRenderContext, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCameraEvents*>(),
                        {"RenderPipelineManagerOnendCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scriptableRenderContext, camera);
}
inline void GlobalNamespace::LckCameraEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCameraEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LckCameraEvents* GlobalNamespace::LckCameraEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LckCameraEvents*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckCameraEvents::LckCameraEvents()   {
}
