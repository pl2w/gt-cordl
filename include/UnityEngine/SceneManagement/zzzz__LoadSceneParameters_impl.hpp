#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/LoadSceneParameters.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__LocalPhysicsMode_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LocalPhysicsMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::SceneManagement::LoadSceneParameters.get_loadSceneMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::LoadSceneMode (::UnityEngine::SceneManagement::LoadSceneParameters::*)()>(&::UnityEngine::SceneManagement::LoadSceneParameters::get_loadSceneMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5fe4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                        {"get_loadSceneMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::LoadSceneParameters.set_loadSceneMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SceneManagement::LoadSceneParameters::*)(::UnityEngine::SceneManagement::LoadSceneMode)>(&::UnityEngine::SceneManagement::LoadSceneParameters::set_loadSceneMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5fe4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                        {"set_loadSceneMode", {}, {::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::LoadSceneParameters.get_localPhysicsMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::LocalPhysicsMode (::UnityEngine::SceneManagement::LoadSceneParameters::*)()>(&::UnityEngine::SceneManagement::LoadSceneParameters::get_localPhysicsMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5fe4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                        {"get_localPhysicsMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::LoadSceneParameters.set_localPhysicsMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SceneManagement::LoadSceneParameters::*)(::UnityEngine::SceneManagement::LocalPhysicsMode)>(&::UnityEngine::SceneManagement::LoadSceneParameters::set_localPhysicsMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5fe4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                        {"set_localPhysicsMode", {}, {::i2c::type_of<::UnityEngine::SceneManagement::LocalPhysicsMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::LoadSceneParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SceneManagement::LoadSceneParameters::*)(::UnityEngine::SceneManagement::LoadSceneMode)>(&::UnityEngine::SceneManagement::LoadSceneParameters::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5fde18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::LoadSceneParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SceneManagement::LoadSceneParameters::*)(::UnityEngine::SceneManagement::LoadSceneMode, ::UnityEngine::SceneManagement::LocalPhysicsMode)>(&::UnityEngine::SceneManagement::LoadSceneParameters::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5fe4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::UnityEngine::SceneManagement::LocalPhysicsMode>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::SceneManagement::LoadSceneMode UnityEngine::SceneManagement::LoadSceneParameters::get_loadSceneMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                        {"get_loadSceneMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::LoadSceneMode>(*this, ___internal_method);
}
inline void UnityEngine::SceneManagement::LoadSceneParameters::set_loadSceneMode(::UnityEngine::SceneManagement::LoadSceneMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                        {"set_loadSceneMode", {}, {::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::SceneManagement::LocalPhysicsMode UnityEngine::SceneManagement::LoadSceneParameters::get_localPhysicsMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                        {"get_localPhysicsMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::LocalPhysicsMode>(*this, ___internal_method);
}
inline void UnityEngine::SceneManagement::LoadSceneParameters::set_localPhysicsMode(::UnityEngine::SceneManagement::LocalPhysicsMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                        {"set_localPhysicsMode", {}, {::i2c::type_of<::UnityEngine::SceneManagement::LocalPhysicsMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::SceneManagement::LoadSceneParameters::_ctor(::UnityEngine::SceneManagement::LoadSceneMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mode);
}
inline void UnityEngine::SceneManagement::LoadSceneParameters::_ctor(::UnityEngine::SceneManagement::LoadSceneMode  mode, ::UnityEngine::SceneManagement::LocalPhysicsMode  physicsMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::UnityEngine::SceneManagement::LocalPhysicsMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mode, physicsMode);
}
// Ctor Parameters [CppParam { name: "m_LoadSceneMode", ty: "::UnityEngine::SceneManagement::LoadSceneMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LocalPhysicsMode", ty: "::UnityEngine::SceneManagement::LocalPhysicsMode", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::SceneManagement::LoadSceneParameters::LoadSceneParameters(::UnityEngine::SceneManagement::LoadSceneMode  m_LoadSceneMode, ::UnityEngine::SceneManagement::LocalPhysicsMode  m_LocalPhysicsMode) noexcept  {
this->m_LoadSceneMode = m_LoadSceneMode;
this->m_LocalPhysicsMode = m_LocalPhysicsMode;
}
// Ctor Parameters []
constexpr ::UnityEngine::SceneManagement::LoadSceneParameters::LoadSceneParameters()   {
}
