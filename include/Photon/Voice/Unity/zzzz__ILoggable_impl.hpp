#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/ILoggable.hpp"
#include "Photon/Voice/Unity/zzzz__ILoggable_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceLogger_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::ILoggable.get_LogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::DebugLevel (::Photon::Voice::Unity::ILoggable::*)()>(&::Photon::Voice::Unity::ILoggable::get_LogLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::ILoggable*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::ILoggable*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::ILoggable.set_LogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::ILoggable::*)(::ExitGames::Client::Photon::DebugLevel)>(&::Photon::Voice::Unity::ILoggable::set_LogLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::ILoggable*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::ILoggable*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::ILoggable.get_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::Unity::VoiceLogger* (::Photon::Voice::Unity::ILoggable::*)()>(&::Photon::Voice::Unity::ILoggable::get_Logger)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::ILoggable*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::ILoggable*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::ExitGames::Client::Photon::DebugLevel Photon::Voice::Unity::ILoggable::get_LogLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::ILoggable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::DebugLevel>(this, ___internal_method);
}
inline void Photon::Voice::Unity::ILoggable::set_LogLevel(::ExitGames::Client::Photon::DebugLevel  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::ILoggable*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Photon::Voice::Unity::VoiceLogger* Photon::Voice::Unity::ILoggable::get_Logger()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::ILoggable*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::Unity::VoiceLogger*>(this, ___internal_method);
}
