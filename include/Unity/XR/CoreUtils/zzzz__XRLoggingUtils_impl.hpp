#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/XRLoggingUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__XRLoggingUtils_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::XRLoggingUtils.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::Object*)>(&::Unity::XR::CoreUtils::XRLoggingUtils::Log)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb3facc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XRLoggingUtils*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XRLoggingUtils.LogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::Object*)>(&::Unity::XR::CoreUtils::XRLoggingUtils::LogWarning)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb3fad74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XRLoggingUtils*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XRLoggingUtils.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::Object*)>(&::Unity::XR::CoreUtils::XRLoggingUtils::LogError)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb3fae20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XRLoggingUtils*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XRLoggingUtils.LogException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*, ::UnityEngine::Object*)>(&::Unity::XR::CoreUtils::XRLoggingUtils::LogException)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb3faecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XRLoggingUtils*>(),
                        {"LogException", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::XRLoggingUtils::setStaticF_k_DontLogAnything(bool  value)  {
::cordl_internals::setStaticField<bool, "k_DontLogAnything", ::Unity::XR::CoreUtils::XRLoggingUtils*>(std::forward<bool>(value));
}
inline bool Unity::XR::CoreUtils::XRLoggingUtils::getStaticF_k_DontLogAnything()  {
return ::cordl_internals::getStaticField<bool, "k_DontLogAnything", ::Unity::XR::CoreUtils::XRLoggingUtils*>();
}
inline void Unity::XR::CoreUtils::XRLoggingUtils::Log(::StringW  message, ::UnityEngine::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XRLoggingUtils*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, context);
}
inline void Unity::XR::CoreUtils::XRLoggingUtils::LogWarning(::StringW  message, ::UnityEngine::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XRLoggingUtils*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, context);
}
inline void Unity::XR::CoreUtils::XRLoggingUtils::LogError(::StringW  message, ::UnityEngine::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XRLoggingUtils*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, context);
}
inline void Unity::XR::CoreUtils::XRLoggingUtils::LogException(::System::Exception*  exception, ::UnityEngine::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XRLoggingUtils*>(),
                        {"LogException", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, exception, context);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::XRLoggingUtils::XRLoggingUtils()   {
}
