#pragma once
// IWYU pragma private; include "System/Net/Configuration/HttpListenerTimeoutsElement.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Net/Configuration/zzzz__HttpListenerTimeoutsElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::HttpListenerTimeoutsElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::HttpListenerTimeoutsElement::*)()>(&::System::Net::Configuration::HttpListenerTimeoutsElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpListenerTimeoutsElement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::HttpListenerTimeoutsElement.get_DrainEntityBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Net::Configuration::HttpListenerTimeoutsElement::*)()>(&::System::Net::Configuration::HttpListenerTimeoutsElement::get_DrainEntityBody)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpListenerTimeoutsElement*>(),
                        {"get_DrainEntityBody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::HttpListenerTimeoutsElement.get_EntityBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Net::Configuration::HttpListenerTimeoutsElement::*)()>(&::System::Net::Configuration::HttpListenerTimeoutsElement::get_EntityBody)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpListenerTimeoutsElement*>(),
                        {"get_EntityBody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::HttpListenerTimeoutsElement.get_HeaderWait
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Net::Configuration::HttpListenerTimeoutsElement::*)()>(&::System::Net::Configuration::HttpListenerTimeoutsElement::get_HeaderWait)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf92b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpListenerTimeoutsElement*>(),
                        {"get_HeaderWait", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::HttpListenerTimeoutsElement.get_IdleConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Net::Configuration::HttpListenerTimeoutsElement::*)()>(&::System::Net::Configuration::HttpListenerTimeoutsElement::get_IdleConnection)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf92e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpListenerTimeoutsElement*>(),
                        {"get_IdleConnection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::HttpListenerTimeoutsElement.get_MinSendBytesPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::Configuration::HttpListenerTimeoutsElement::*)()>(&::System::Net::Configuration::HttpListenerTimeoutsElement::get_MinSendBytesPerSecond)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpListenerTimeoutsElement*>(),
                        {"get_MinSendBytesPerSecond", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::HttpListenerTimeoutsElement.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::HttpListenerTimeoutsElement::*)()>(&::System::Net::Configuration::HttpListenerTimeoutsElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::HttpListenerTimeoutsElement*>(),
                    {::i2c::class_of<::System::Net::Configuration::HttpListenerTimeoutsElement*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::HttpListenerTimeoutsElement.get_RequestQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Net::Configuration::HttpListenerTimeoutsElement::*)()>(&::System::Net::Configuration::HttpListenerTimeoutsElement::get_RequestQueue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpListenerTimeoutsElement*>(),
                        {"get_RequestQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::HttpListenerTimeoutsElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpListenerTimeoutsElement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::TimeSpan System::Net::Configuration::HttpListenerTimeoutsElement::get_DrainEntityBody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpListenerTimeoutsElement*>(),
                        {"get_DrainEntityBody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::TimeSpan System::Net::Configuration::HttpListenerTimeoutsElement::get_EntityBody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpListenerTimeoutsElement*>(),
                        {"get_EntityBody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::TimeSpan System::Net::Configuration::HttpListenerTimeoutsElement::get_HeaderWait()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpListenerTimeoutsElement*>(),
                        {"get_HeaderWait", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::TimeSpan System::Net::Configuration::HttpListenerTimeoutsElement::get_IdleConnection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpListenerTimeoutsElement*>(),
                        {"get_IdleConnection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline int64_t System::Net::Configuration::HttpListenerTimeoutsElement::get_MinSendBytesPerSecond()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpListenerTimeoutsElement*>(),
                        {"get_MinSendBytesPerSecond", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::HttpListenerTimeoutsElement::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::HttpListenerTimeoutsElement*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::TimeSpan System::Net::Configuration::HttpListenerTimeoutsElement::get_RequestQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpListenerTimeoutsElement*>(),
                        {"get_RequestQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::Net::Configuration::HttpListenerTimeoutsElement* System::Net::Configuration::HttpListenerTimeoutsElement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::HttpListenerTimeoutsElement*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::HttpListenerTimeoutsElement::HttpListenerTimeoutsElement()   {
}
