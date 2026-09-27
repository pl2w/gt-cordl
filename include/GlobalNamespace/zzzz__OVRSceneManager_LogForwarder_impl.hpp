#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager_LogForwarder.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_LogForwarder_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager_LogForwarder.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager_LogForwarder::*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(&::GlobalNamespace::OVRSceneManager_LogForwarder::Log)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa63264c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager_LogForwarder>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager_LogForwarder.LogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager_LogForwarder::*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(&::GlobalNamespace::OVRSceneManager_LogForwarder::LogWarning)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa632048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager_LogForwarder>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager_LogForwarder.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager_LogForwarder::*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(&::GlobalNamespace::OVRSceneManager_LogForwarder::LogError)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa62ee9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager_LogForwarder>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSceneManager_LogForwarder::Log(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager_LogForwarder>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, context, message, gameObject);
}
inline void GlobalNamespace::OVRSceneManager_LogForwarder::LogWarning(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager_LogForwarder>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, context, message, gameObject);
}
inline void GlobalNamespace::OVRSceneManager_LogForwarder::LogError(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager_LogForwarder>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, context, message, gameObject);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager_LogForwarder::OVRSceneManager_LogForwarder()   {
}
