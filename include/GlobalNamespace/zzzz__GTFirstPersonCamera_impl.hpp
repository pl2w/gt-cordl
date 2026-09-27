#pragma once
// IWYU pragma private; include "GlobalNamespace/GTFirstPersonCamera.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GTFirstPersonCamera_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTFirstPersonCamera.get_camera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (*)()>(&::GlobalNamespace::GTFirstPersonCamera::get_camera)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5693f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFirstPersonCamera*>(),
                        {"get_camera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFirstPersonCamera.set_camera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*)>(&::GlobalNamespace::GTFirstPersonCamera::set_camera)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5693f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFirstPersonCamera*>(),
                        {"set_camera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFirstPersonCamera.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTFirstPersonCamera::*)()>(&::GlobalNamespace::GTFirstPersonCamera::Awake)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5693fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFirstPersonCamera*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFirstPersonCamera._OnPreRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTFirstPersonCamera::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::GlobalNamespace::GTFirstPersonCamera::_OnPreRender)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5694160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFirstPersonCamera*>(),
                        {"_OnPreRender", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFirstPersonCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTFirstPersonCamera::*)()>(&::GlobalNamespace::GTFirstPersonCamera::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5694238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFirstPersonCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GTFirstPersonCamera::setStaticF__camera_k__BackingField(::UnityW<::UnityEngine::Camera>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Camera>, "<camera>k__BackingField", ::GlobalNamespace::GTFirstPersonCamera*>(std::forward<::UnityW<::UnityEngine::Camera>>(value));
}
inline ::UnityW<::UnityEngine::Camera> GlobalNamespace::GTFirstPersonCamera::getStaticF__camera_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Camera>, "<camera>k__BackingField", ::GlobalNamespace::GTFirstPersonCamera*>();
}
inline void GlobalNamespace::GTFirstPersonCamera::setStaticF_OnPreRenderEvent(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnPreRenderEvent", ::GlobalNamespace::GTFirstPersonCamera*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::GTFirstPersonCamera::getStaticF_OnPreRenderEvent()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnPreRenderEvent", ::GlobalNamespace::GTFirstPersonCamera*>();
}
inline ::UnityW<::UnityEngine::Camera> GlobalNamespace::GTFirstPersonCamera::get_camera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFirstPersonCamera*>(),
                        {"get_camera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GTFirstPersonCamera::set_camera(::UnityEngine::Camera*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFirstPersonCamera*>(),
                        {"set_camera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GTFirstPersonCamera::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFirstPersonCamera*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTFirstPersonCamera::_OnPreRender(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFirstPersonCamera*>(),
                        {"_OnPreRender", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, cam);
}
inline void GlobalNamespace::GTFirstPersonCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFirstPersonCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GTFirstPersonCamera* GlobalNamespace::GTFirstPersonCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTFirstPersonCamera*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTFirstPersonCamera::GTFirstPersonCamera()   {
}
