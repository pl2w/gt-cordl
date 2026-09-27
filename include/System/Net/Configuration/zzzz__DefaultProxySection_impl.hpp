#pragma once
// IWYU pragma private; include "System/Net/Configuration/DefaultProxySection.hpp"
#include "System/Configuration/zzzz__ConfigurationSection_impl.hpp"
#include "System/Net/Configuration/zzzz__DefaultProxySection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Net/Configuration/zzzz__BypassElementCollection_def.hpp"
#include "System/Net/Configuration/zzzz__ModuleElement_def.hpp"
#include "System/Net/Configuration/zzzz__ProxyElement_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::DefaultProxySection::*)()>(&::System::Net::Configuration::DefaultProxySection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySection.get_BypassList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::BypassElementCollection* (::System::Net::Configuration::DefaultProxySection::*)()>(&::System::Net::Configuration::DefaultProxySection::get_BypassList)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(),
                        {"get_BypassList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySection.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Configuration::DefaultProxySection::*)()>(&::System::Net::Configuration::DefaultProxySection::get_Enabled)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf87c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySection.set_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::DefaultProxySection::*)(bool)>(&::System::Net::Configuration::DefaultProxySection::set_Enabled)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf87f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySection.get_Module
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::ModuleElement* (::System::Net::Configuration::DefaultProxySection::*)()>(&::System::Net::Configuration::DefaultProxySection::get_Module)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(),
                        {"get_Module", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySection.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::DefaultProxySection::*)()>(&::System::Net::Configuration::DefaultProxySection::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(),
                    {::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySection.get_Proxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::ProxyElement* (::System::Net::Configuration::DefaultProxySection::*)()>(&::System::Net::Configuration::DefaultProxySection::get_Proxy)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf88a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(),
                        {"get_Proxy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySection.get_UseDefaultCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Configuration::DefaultProxySection::*)()>(&::System::Net::Configuration::DefaultProxySection::get_UseDefaultCredentials)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf88d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(),
                        {"get_UseDefaultCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySection.set_UseDefaultCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::DefaultProxySection::*)(bool)>(&::System::Net::Configuration::DefaultProxySection::set_UseDefaultCredentials)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(),
                        {"set_UseDefaultCredentials", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySection.PostDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::DefaultProxySection::*)()>(&::System::Net::Configuration::DefaultProxySection::PostDeserialize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(),
                    {::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySection.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::DefaultProxySection::*)(::System::Configuration::ConfigurationElement*)>(&::System::Net::Configuration::DefaultProxySection::Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(),
                    {::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(), 9}
                ));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::DefaultProxySection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Configuration::BypassElementCollection* System::Net::Configuration::DefaultProxySection::get_BypassList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(),
                        {"get_BypassList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::BypassElementCollection*>(this, ___internal_method);
}
inline bool System::Net::Configuration::DefaultProxySection::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Configuration::DefaultProxySection::set_Enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Configuration::ModuleElement* System::Net::Configuration::DefaultProxySection::get_Module()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(),
                        {"get_Module", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::ModuleElement*>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::DefaultProxySection::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::Net::Configuration::ProxyElement* System::Net::Configuration::DefaultProxySection::get_Proxy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(),
                        {"get_Proxy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::ProxyElement*>(this, ___internal_method);
}
inline bool System::Net::Configuration::DefaultProxySection::get_UseDefaultCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(),
                        {"get_UseDefaultCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Configuration::DefaultProxySection::set_UseDefaultCredentials(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(),
                        {"set_UseDefaultCredentials", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Configuration::DefaultProxySection::PostDeserialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Configuration::DefaultProxySection::Reset(::System::Configuration::ConfigurationElement*  parentElement)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::DefaultProxySection*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentElement);
}
inline ::System::Net::Configuration::DefaultProxySection* System::Net::Configuration::DefaultProxySection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::DefaultProxySection*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::DefaultProxySection::DefaultProxySection()   {
}
