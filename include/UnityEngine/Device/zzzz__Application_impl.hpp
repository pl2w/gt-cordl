#pragma once
// IWYU pragma private; include "UnityEngine/Device/Application.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Device/zzzz__Application_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Device::Application.get_identifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::Device::Application::get_identifier)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb6041b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Device::Application*>(),
                        {"get_identifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Device::Application.get_platform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RuntimePlatform (*)()>(&::UnityEngine::Device::Application::get_platform)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb604200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Device::Application*>(),
                        {"get_platform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Device::Application.OpenURL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::Device::Application::OpenURL)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb604250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Device::Application*>(),
                        {"OpenURL", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Device::Application::get_identifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Device::Application*>(),
                        {"get_identifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::UnityEngine::RuntimePlatform UnityEngine::Device::Application::get_platform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Device::Application*>(),
                        {"get_platform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RuntimePlatform>(nullptr, ___internal_method);
}
inline void UnityEngine::Device::Application::OpenURL(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Device::Application*>(),
                        {"OpenURL", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, url);
}
// Ctor Parameters []
constexpr ::UnityEngine::Device::Application::Application()   {
}
