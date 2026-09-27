#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderPipeline_ContextRenderingScope.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderPipeline_ContextRenderingScope_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*)>(&::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb2bcca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope::*)()>(&::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope::Dispose)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb2c6918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope::setStaticF_beginContextRenderingSampler(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "beginContextRenderingSampler", ::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope::getStaticF_beginContextRenderingSampler()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "beginContextRenderingSampler", ::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope>();
}
inline void GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope::setStaticF_endContextRenderingSampler(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "endContextRenderingSampler", ::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope::getStaticF_endContextRenderingSampler()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "endContextRenderingSampler", ::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope>();
}
inline void GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope::_ctor(::UnityEngine::Rendering::ScriptableRenderContext  context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  cameras)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, context, cameras);
}
inline void GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Context", ty: "::UnityEngine::Rendering::ScriptableRenderContext", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Cameras", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope::UniversalRenderPipeline_ContextRenderingScope(::UnityEngine::Rendering::ScriptableRenderContext  m_Context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  m_Cameras) noexcept  {
this->m_Context = m_Context;
this->m_Cameras = m_Cameras;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope::UniversalRenderPipeline_ContextRenderingScope()   {
}
