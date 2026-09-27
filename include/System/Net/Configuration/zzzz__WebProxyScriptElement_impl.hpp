#pragma once
// IWYU pragma private; include "System/Net/Configuration/WebProxyScriptElement.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Net/Configuration/zzzz__WebProxyScriptElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::WebProxyScriptElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::WebProxyScriptElement::*)()>(&::System::Net::Configuration::WebProxyScriptElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfacb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebProxyScriptElement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WebProxyScriptElement.get_AutoConfigUrlRetryInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Configuration::WebProxyScriptElement::*)()>(&::System::Net::Configuration::WebProxyScriptElement::get_AutoConfigUrlRetryInterval)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfacf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebProxyScriptElement*>(),
                        {"get_AutoConfigUrlRetryInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WebProxyScriptElement.set_AutoConfigUrlRetryInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::WebProxyScriptElement::*)(int32_t)>(&::System::Net::Configuration::WebProxyScriptElement::set_AutoConfigUrlRetryInterval)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfad28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebProxyScriptElement*>(),
                        {"set_AutoConfigUrlRetryInterval", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WebProxyScriptElement.get_DownloadTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Net::Configuration::WebProxyScriptElement::*)()>(&::System::Net::Configuration::WebProxyScriptElement::get_DownloadTimeout)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfad60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebProxyScriptElement*>(),
                        {"get_DownloadTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WebProxyScriptElement.set_DownloadTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::WebProxyScriptElement::*)(::System::TimeSpan)>(&::System::Net::Configuration::WebProxyScriptElement::set_DownloadTimeout)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfad98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebProxyScriptElement*>(),
                        {"set_DownloadTimeout", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WebProxyScriptElement.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::WebProxyScriptElement::*)()>(&::System::Net::Configuration::WebProxyScriptElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfadd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::WebProxyScriptElement*>(),
                    {::i2c::class_of<::System::Net::Configuration::WebProxyScriptElement*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WebProxyScriptElement.PostDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::WebProxyScriptElement::*)()>(&::System::Net::Configuration::WebProxyScriptElement::PostDeserialize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfae08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::WebProxyScriptElement*>(),
                    {::i2c::class_of<::System::Net::Configuration::WebProxyScriptElement*>(), 8}
                ));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::WebProxyScriptElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebProxyScriptElement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Net::Configuration::WebProxyScriptElement::get_AutoConfigUrlRetryInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebProxyScriptElement*>(),
                        {"get_AutoConfigUrlRetryInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::Configuration::WebProxyScriptElement::set_AutoConfigUrlRetryInterval(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebProxyScriptElement*>(),
                        {"set_AutoConfigUrlRetryInterval", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::TimeSpan System::Net::Configuration::WebProxyScriptElement::get_DownloadTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebProxyScriptElement*>(),
                        {"get_DownloadTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline void System::Net::Configuration::WebProxyScriptElement::set_DownloadTimeout(::System::TimeSpan  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebProxyScriptElement*>(),
                        {"set_DownloadTimeout", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::WebProxyScriptElement::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::WebProxyScriptElement*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline void System::Net::Configuration::WebProxyScriptElement::PostDeserialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::WebProxyScriptElement*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Configuration::WebProxyScriptElement* System::Net::Configuration::WebProxyScriptElement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::WebProxyScriptElement*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::WebProxyScriptElement::WebProxyScriptElement()   {
}
