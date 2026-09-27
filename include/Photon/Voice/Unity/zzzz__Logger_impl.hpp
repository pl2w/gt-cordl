#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/Logger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/Unity/zzzz__Logger_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::Logger.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Logger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Photon::Voice::Unity::Logger::LogError)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa75ab34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Logger*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Logger.LogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Logger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Photon::Voice::Unity::Logger::LogWarning)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa75ab9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Logger*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Logger.LogInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Logger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Photon::Voice::Unity::Logger::LogInfo)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa75ac04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Logger*>(),
                        {"LogInfo", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Logger.LogDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Logger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Photon::Voice::Unity::Logger::LogDebug)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa75ac6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Logger*>(),
                        {"LogDebug", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Logger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Logger::*)()>(&::Photon::Voice::Unity::Logger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75acd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Logger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::Unity::Logger::LogError(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Logger*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fmt, args);
}
inline void Photon::Voice::Unity::Logger::LogWarning(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Logger*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fmt, args);
}
inline void Photon::Voice::Unity::Logger::LogInfo(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Logger*>(),
                        {"LogInfo", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fmt, args);
}
inline void Photon::Voice::Unity::Logger::LogDebug(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Logger*>(),
                        {"LogDebug", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fmt, args);
}
inline void Photon::Voice::Unity::Logger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Logger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::Logger* Photon::Voice::Unity::Logger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::Logger*>());
}
/// @brief Convert operator to "::Photon::Voice::ILogger"
constexpr  Photon::Voice::Unity::Logger::operator ::Photon::Voice::ILogger*() noexcept {
return static_cast<::Photon::Voice::ILogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::ILogger"
constexpr ::Photon::Voice::ILogger* Photon::Voice::Unity::Logger::i___Photon__Voice__ILogger() noexcept {
return static_cast<::Photon::Voice::ILogger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::Logger::Logger()   {
}
