#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderPipeline_CameraRenderingScope.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderPipeline_CameraRenderingScope_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb2be980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope::*)()>(&::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope::Dispose)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb2c6758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope::setStaticF_beginCameraRenderingSampler(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "beginCameraRenderingSampler", ::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope::getStaticF_beginCameraRenderingSampler()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "beginCameraRenderingSampler", ::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope>();
}
inline void GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope::setStaticF_endCameraRenderingSampler(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "endCameraRenderingSampler", ::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope::getStaticF_endCameraRenderingSampler()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "endCameraRenderingSampler", ::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope>();
}
inline void GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope::_ctor(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, context, camera);
}
inline void GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Context", ty: "::UnityEngine::Rendering::ScriptableRenderContext", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Camera", ty: "::UnityW<::UnityEngine::Camera>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope::UniversalRenderPipeline_CameraRenderingScope(::UnityEngine::Rendering::ScriptableRenderContext  m_Context, ::UnityW<::UnityEngine::Camera>  m_Camera) noexcept  {
this->m_Context = m_Context;
this->m_Camera = m_Camera;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope::UniversalRenderPipeline_CameraRenderingScope()   {
}
