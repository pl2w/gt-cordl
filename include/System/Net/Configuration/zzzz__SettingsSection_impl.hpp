#pragma once
// IWYU pragma private; include "System/Net/Configuration/SettingsSection.hpp"
#include "System/Configuration/zzzz__ConfigurationSection_impl.hpp"
#include "System/Net/Configuration/zzzz__SettingsSection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Net/Configuration/zzzz__HttpListenerElement_def.hpp"
#include "System/Net/Configuration/zzzz__HttpWebRequestElement_def.hpp"
#include "System/Net/Configuration/zzzz__Ipv6Element_def.hpp"
#include "System/Net/Configuration/zzzz__PerformanceCountersElement_def.hpp"
#include "System/Net/Configuration/zzzz__ServicePointManagerElement_def.hpp"
#include "System/Net/Configuration/zzzz__SocketElement_def.hpp"
#include "System/Net/Configuration/zzzz__WebProxyScriptElement_def.hpp"
#include "System/Net/Configuration/zzzz__WebUtilityElement_def.hpp"
#include "System/Net/Configuration/zzzz__WindowsAuthenticationElement_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::SettingsSection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SettingsSection::*)()>(&::System::Net::Configuration::SettingsSection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSection.get_HttpListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::HttpListenerElement* (::System::Net::Configuration::SettingsSection::*)()>(&::System::Net::Configuration::SettingsSection::get_HttpListener)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(),
                        {"get_HttpListener", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSection.get_HttpWebRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::HttpWebRequestElement* (::System::Net::Configuration::SettingsSection::*)()>(&::System::Net::Configuration::SettingsSection::get_HttpWebRequest)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(),
                        {"get_HttpWebRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSection.get_Ipv6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::Ipv6Element* (::System::Net::Configuration::SettingsSection::*)()>(&::System::Net::Configuration::SettingsSection::get_Ipv6)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(),
                        {"get_Ipv6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSection.get_PerformanceCounters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::PerformanceCountersElement* (::System::Net::Configuration::SettingsSection::*)()>(&::System::Net::Configuration::SettingsSection::get_PerformanceCounters)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(),
                        {"get_PerformanceCounters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSection.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::SettingsSection::*)()>(&::System::Net::Configuration::SettingsSection::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(),
                    {::i2c::class_of<::System::Net::Configuration::SettingsSection*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSection.get_ServicePointManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::ServicePointManagerElement* (::System::Net::Configuration::SettingsSection::*)()>(&::System::Net::Configuration::SettingsSection::get_ServicePointManager)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(),
                        {"get_ServicePointManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSection.get_Socket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::SocketElement* (::System::Net::Configuration::SettingsSection::*)()>(&::System::Net::Configuration::SettingsSection::get_Socket)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(),
                        {"get_Socket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSection.get_WebProxyScript
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::WebProxyScriptElement* (::System::Net::Configuration::SettingsSection::*)()>(&::System::Net::Configuration::SettingsSection::get_WebProxyScript)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(),
                        {"get_WebProxyScript", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSection.get_WebUtility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::WebUtilityElement* (::System::Net::Configuration::SettingsSection::*)()>(&::System::Net::Configuration::SettingsSection::get_WebUtility)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(),
                        {"get_WebUtility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSection.get_WindowsAuthentication
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::WindowsAuthenticationElement* (::System::Net::Configuration::SettingsSection::*)()>(&::System::Net::Configuration::SettingsSection::get_WindowsAuthentication)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(),
                        {"get_WindowsAuthentication", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::SettingsSection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Configuration::HttpListenerElement* System::Net::Configuration::SettingsSection::get_HttpListener()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(),
                        {"get_HttpListener", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::HttpListenerElement*>(this, ___internal_method);
}
inline ::System::Net::Configuration::HttpWebRequestElement* System::Net::Configuration::SettingsSection::get_HttpWebRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(),
                        {"get_HttpWebRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::HttpWebRequestElement*>(this, ___internal_method);
}
inline ::System::Net::Configuration::Ipv6Element* System::Net::Configuration::SettingsSection::get_Ipv6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(),
                        {"get_Ipv6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::Ipv6Element*>(this, ___internal_method);
}
inline ::System::Net::Configuration::PerformanceCountersElement* System::Net::Configuration::SettingsSection::get_PerformanceCounters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(),
                        {"get_PerformanceCounters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::PerformanceCountersElement*>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::SettingsSection::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::SettingsSection*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::Net::Configuration::ServicePointManagerElement* System::Net::Configuration::SettingsSection::get_ServicePointManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(),
                        {"get_ServicePointManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::ServicePointManagerElement*>(this, ___internal_method);
}
inline ::System::Net::Configuration::SocketElement* System::Net::Configuration::SettingsSection::get_Socket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(),
                        {"get_Socket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::SocketElement*>(this, ___internal_method);
}
inline ::System::Net::Configuration::WebProxyScriptElement* System::Net::Configuration::SettingsSection::get_WebProxyScript()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(),
                        {"get_WebProxyScript", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::WebProxyScriptElement*>(this, ___internal_method);
}
inline ::System::Net::Configuration::WebUtilityElement* System::Net::Configuration::SettingsSection::get_WebUtility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(),
                        {"get_WebUtility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::WebUtilityElement*>(this, ___internal_method);
}
inline ::System::Net::Configuration::WindowsAuthenticationElement* System::Net::Configuration::SettingsSection::get_WindowsAuthentication()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(),
                        {"get_WindowsAuthentication", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::WindowsAuthenticationElement*>(this, ___internal_method);
}
inline ::System::Net::Configuration::SettingsSection* System::Net::Configuration::SettingsSection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::SettingsSection*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::SettingsSection::SettingsSection()   {
}
