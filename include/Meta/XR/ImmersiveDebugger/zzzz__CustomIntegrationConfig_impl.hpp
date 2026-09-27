#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/CustomIntegrationConfig.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__CustomIntegrationConfig_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__CustomIntegrationConfig_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__ICustomIntegrationConfig_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig.add_GetCameraHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*)>(&::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::add_GetCameraHandler)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9ee6a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(),
                        {"add_GetCameraHandler", {}, {::i2c::type_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig.remove_GetCameraHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*)>(&::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::remove_GetCameraHandler)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9ee6acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(),
                        {"remove_GetCameraHandler", {}, {::i2c::type_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig.SetupAllConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*)>(&::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::SetupAllConfig)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9ee6b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(),
                        {"SetupAllConfig", {}, {::i2c::type_of<::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig.ClearAllConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*)>(&::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::ClearAllConfig)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9ee6ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(),
                        {"ClearAllConfig", {}, {::i2c::type_of<::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig.GetCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (*)()>(&::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::GetCamera)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9ee6db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(),
                        {"GetCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::setStaticF_GetCameraHandler(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*, "GetCameraHandler", ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(std::forward<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>(value));
}
inline ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate* Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::getStaticF_GetCameraHandler()  {
return ::cordl_internals::getStaticField<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*, "GetCameraHandler", ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>();
}
inline void Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::add_GetCameraHandler(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(),
                        {"add_GetCameraHandler", {}, {::i2c::type_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::remove_GetCameraHandler(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(),
                        {"remove_GetCameraHandler", {}, {::i2c::type_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::SetupAllConfig(::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*  customConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(),
                        {"SetupAllConfig", {}, {::i2c::type_of<::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, customConfig);
}
inline void Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::ClearAllConfig(::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*  customConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(),
                        {"ClearAllConfig", {}, {::i2c::type_of<::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, customConfig);
}
inline ::UnityW<::UnityEngine::Camera> Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::GetCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(),
                        {"GetCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::CustomIntegrationConfig()   {
}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9ee6c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::*)()>(&::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9ee6e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>(),
                    {::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityW<::UnityEngine::Camera> Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate* Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::CustomIntegrationConfig_GetCameraDelegate()   {
}
