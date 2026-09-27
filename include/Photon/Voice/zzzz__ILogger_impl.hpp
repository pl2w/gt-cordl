#pragma once
// IWYU pragma private; include "Photon/Voice/ILogger.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Voice::ILogger.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::ILogger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Photon::Voice::ILogger::LogError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::ILogger*>(),
                    {::i2c::class_of<::Photon::Voice::ILogger*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ILogger.LogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::ILogger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Photon::Voice::ILogger::LogWarning)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::ILogger*>(),
                    {::i2c::class_of<::Photon::Voice::ILogger*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ILogger.LogInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::ILogger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Photon::Voice::ILogger::LogInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::ILogger*>(),
                    {::i2c::class_of<::Photon::Voice::ILogger*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ILogger.LogDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::ILogger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Photon::Voice::ILogger::LogDebug)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::ILogger*>(),
                    {::i2c::class_of<::Photon::Voice::ILogger*>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Photon::Voice::ILogger::LogError(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ILogger*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fmt, args);
}
inline void Photon::Voice::ILogger::LogWarning(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ILogger*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fmt, args);
}
inline void Photon::Voice::ILogger::LogInfo(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ILogger*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fmt, args);
}
inline void Photon::Voice::ILogger::LogDebug(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ILogger*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fmt, args);
}
