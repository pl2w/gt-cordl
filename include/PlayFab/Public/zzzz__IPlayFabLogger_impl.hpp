#pragma once
// IWYU pragma private; include "PlayFab/Public/IPlayFabLogger.hpp"
#include "PlayFab/Public/zzzz__IPlayFabLogger_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: ::PlayFab::Public::IPlayFabLogger.get_ip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPAddress* (::PlayFab::Public::IPlayFabLogger::*)()>(&::PlayFab::Public::IPlayFabLogger::get_ip)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(),
                    {::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::IPlayFabLogger.set_ip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::IPlayFabLogger::*)(::System::Net::IPAddress*)>(&::PlayFab::Public::IPlayFabLogger::set_ip)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(),
                    {::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::IPlayFabLogger.get_port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::PlayFab::Public::IPlayFabLogger::*)()>(&::PlayFab::Public::IPlayFabLogger::get_port)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(),
                    {::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::IPlayFabLogger.set_port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::IPlayFabLogger::*)(int32_t)>(&::PlayFab::Public::IPlayFabLogger::set_port)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(),
                    {::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::IPlayFabLogger.get_url
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayFab::Public::IPlayFabLogger::*)()>(&::PlayFab::Public::IPlayFabLogger::get_url)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(),
                    {::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::IPlayFabLogger.set_url
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::IPlayFabLogger::*)(::StringW)>(&::PlayFab::Public::IPlayFabLogger::set_url)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(),
                    {::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::IPlayFabLogger.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::IPlayFabLogger::*)()>(&::PlayFab::Public::IPlayFabLogger::OnEnable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(),
                    {::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::IPlayFabLogger.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::IPlayFabLogger::*)()>(&::PlayFab::Public::IPlayFabLogger::OnDisable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(),
                    {::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::IPlayFabLogger.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::IPlayFabLogger::*)()>(&::PlayFab::Public::IPlayFabLogger::OnDestroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(),
                    {::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(), 8}
                ));
    return ___internal_method;
  }
};
inline ::System::Net::IPAddress* PlayFab::Public::IPlayFabLogger::get_ip()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*>(this, ___internal_method);
}
inline void PlayFab::Public::IPlayFabLogger::set_ip(::System::Net::IPAddress*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t PlayFab::Public::IPlayFabLogger::get_port()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void PlayFab::Public::IPlayFabLogger::set_port(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW PlayFab::Public::IPlayFabLogger::get_url()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void PlayFab::Public::IPlayFabLogger::set_url(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void PlayFab::Public::IPlayFabLogger::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Public::IPlayFabLogger::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Public::IPlayFabLogger::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::IPlayFabLogger*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
