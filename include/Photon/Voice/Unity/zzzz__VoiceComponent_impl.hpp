#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/VoiceComponent.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceComponent_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "Photon/Voice/Unity/zzzz__ILoggableDependent_def.hpp"
#include "Photon/Voice/Unity/zzzz__ILoggable_def.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceLogger_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceComponent.get_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::Unity::VoiceLogger* (::Photon::Voice::Unity::VoiceComponent::*)()>(&::Photon::Voice::Unity::VoiceComponent::get_Logger)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa766774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceComponent*>(),
                        {"get_Logger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceComponent.set_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceComponent::*)(::Photon::Voice::Unity::VoiceLogger*)>(&::Photon::Voice::Unity::VoiceComponent::set_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa773cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceComponent*>(),
                        {"set_Logger", {}, {::i2c::type_of<::Photon::Voice::Unity::VoiceLogger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceComponent.get_LogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::DebugLevel (::Photon::Voice::Unity::VoiceComponent::*)()>(&::Photon::Voice::Unity::VoiceComponent::get_LogLevel)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa773ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceComponent*>(),
                        {"get_LogLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceComponent.set_LogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceComponent::*)(::ExitGames::Client::Photon::DebugLevel)>(&::Photon::Voice::Unity::VoiceComponent::set_LogLevel)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa76c6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceComponent*>(),
                        {"set_LogLevel", {}, {::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceComponent.get_IgnoreGlobalLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::VoiceComponent::*)()>(&::Photon::Voice::Unity::VoiceComponent::get_IgnoreGlobalLogLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa773d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceComponent*>(),
                        {"get_IgnoreGlobalLogLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceComponent.set_IgnoreGlobalLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceComponent::*)(bool)>(&::Photon::Voice::Unity::VoiceComponent::set_IgnoreGlobalLogLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa773d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceComponent*>(),
                        {"set_IgnoreGlobalLogLevel", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceComponent.get_CurrentPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Photon::Voice::Unity::VoiceComponent::get_CurrentPlatform)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa766864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceComponent*>(),
                        {"get_CurrentPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceComponent.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceComponent::*)()>(&::Photon::Voice::Unity::VoiceComponent::Awake)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa765a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::VoiceComponent*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::VoiceComponent*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceComponent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceComponent::*)()>(&::Photon::Voice::Unity::VoiceComponent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa76740c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceComponent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Voice::Unity::VoiceLogger*& Photon::Voice::Unity::VoiceComponent::__cordl_internal_get_logger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr ::Photon::Voice::Unity::VoiceLogger* const& Photon::Voice::Unity::VoiceComponent::__cordl_internal_get_logger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr void Photon::Voice::Unity::VoiceComponent::__cordl_internal_set_logger(::Photon::Voice::Unity::VoiceLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logger = value;
}
constexpr ::ExitGames::Client::Photon::DebugLevel& Photon::Voice::Unity::VoiceComponent::__cordl_internal_get_logLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logLevel;
}
constexpr ::ExitGames::Client::Photon::DebugLevel const& Photon::Voice::Unity::VoiceComponent::__cordl_internal_get_logLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logLevel;
}
constexpr void Photon::Voice::Unity::VoiceComponent::__cordl_internal_set_logLevel(::ExitGames::Client::Photon::DebugLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logLevel = value;
}
constexpr bool& Photon::Voice::Unity::VoiceComponent::__cordl_internal_get_ignoreGlobalLogLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreGlobalLogLevel;
}
constexpr bool const& Photon::Voice::Unity::VoiceComponent::__cordl_internal_get_ignoreGlobalLogLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreGlobalLogLevel;
}
constexpr void Photon::Voice::Unity::VoiceComponent::__cordl_internal_set_ignoreGlobalLogLevel(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreGlobalLogLevel = value;
}
inline void Photon::Voice::Unity::VoiceComponent::setStaticF_currentPlatform(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "currentPlatform", ::Photon::Voice::Unity::VoiceComponent*>(std::forward<::StringW>(value));
}
inline ::StringW Photon::Voice::Unity::VoiceComponent::getStaticF_currentPlatform()  {
return ::cordl_internals::getStaticField<::StringW, "currentPlatform", ::Photon::Voice::Unity::VoiceComponent*>();
}
inline ::Photon::Voice::Unity::VoiceLogger* Photon::Voice::Unity::VoiceComponent::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceComponent*>(),
                        {"get_Logger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::Unity::VoiceLogger*>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceComponent::set_Logger(::Photon::Voice::Unity::VoiceLogger*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceComponent*>(),
                        {"set_Logger", {}, {::i2c::type_of<::Photon::Voice::Unity::VoiceLogger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::DebugLevel Photon::Voice::Unity::VoiceComponent::get_LogLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceComponent*>(),
                        {"get_LogLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::DebugLevel>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceComponent::set_LogLevel(::ExitGames::Client::Photon::DebugLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceComponent*>(),
                        {"set_LogLevel", {}, {::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::VoiceComponent::get_IgnoreGlobalLogLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceComponent*>(),
                        {"get_IgnoreGlobalLogLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceComponent::set_IgnoreGlobalLogLevel(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceComponent*>(),
                        {"set_IgnoreGlobalLogLevel", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Photon::Voice::Unity::VoiceComponent::get_CurrentPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceComponent*>(),
                        {"get_CurrentPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceComponent::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::VoiceComponent*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceComponent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceComponent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::VoiceComponent* Photon::Voice::Unity::VoiceComponent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::VoiceComponent*>());
}
/// @brief Convert operator to "::Photon::Voice::Unity::ILoggableDependent"
constexpr  Photon::Voice::Unity::VoiceComponent::operator ::Photon::Voice::Unity::ILoggableDependent*() noexcept {
return static_cast<::Photon::Voice::Unity::ILoggableDependent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::Unity::ILoggableDependent"
constexpr ::Photon::Voice::Unity::ILoggableDependent* Photon::Voice::Unity::VoiceComponent::i___Photon__Voice__Unity__ILoggableDependent() noexcept {
return static_cast<::Photon::Voice::Unity::ILoggableDependent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Voice::Unity::ILoggable"
constexpr  Photon::Voice::Unity::VoiceComponent::operator ::Photon::Voice::Unity::ILoggable*() noexcept {
return static_cast<::Photon::Voice::Unity::ILoggable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::Unity::ILoggable"
constexpr ::Photon::Voice::Unity::ILoggable* Photon::Voice::Unity::VoiceComponent::i___Photon__Voice__Unity__ILoggable() noexcept {
return static_cast<::Photon::Voice::Unity::ILoggable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::VoiceComponent::VoiceComponent()   {
}
