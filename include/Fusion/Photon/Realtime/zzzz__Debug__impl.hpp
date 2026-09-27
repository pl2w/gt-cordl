#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Debug_.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__Debug__def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::Debug_.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Fusion::Photon::Realtime::Debug_::Log)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f4b31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Debug_*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Debug_.LogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Fusion::Photon::Realtime::Debug_::LogWarning)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f4b390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Debug_*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Debug_.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Fusion::Photon::Realtime::Debug_::LogError)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f4b3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Debug_*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Debug_.LogException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*)>(&::Fusion::Photon::Realtime::Debug_::LogException)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f4b460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Debug_*>(),
                        {"LogException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Photon::Realtime::Debug_::Log(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Debug_*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void Fusion::Photon::Realtime::Debug_::LogWarning(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Debug_*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void Fusion::Photon::Realtime::Debug_::LogError(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Debug_*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void Fusion::Photon::Realtime::Debug_::LogException(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Debug_*>(),
                        {"LogException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ex);
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::Debug_::Debug_()   {
}
