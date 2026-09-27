#pragma once
// IWYU pragma private; include "System/Net/Configuration/ProxyElement.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Net/Configuration/zzzz__ProxyElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Net/Configuration/zzzz__ProxyElement_AutoDetectValues_def.hpp"
#include "System/Net/Configuration/zzzz__ProxyElement_BypassOnLocalValues_def.hpp"
#include "System/Net/Configuration/zzzz__ProxyElement_UseSystemDefaultValues_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::ProxyElement::*)()>(&::System::Net::Configuration::ProxyElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.get_AutoDetect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ProxyElement_AutoDetectValues (::System::Net::Configuration::ProxyElement::*)()>(&::System::Net::Configuration::ProxyElement::get_AutoDetect)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {"get_AutoDetect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.set_AutoDetect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::ProxyElement::*)(::GlobalNamespace::ProxyElement_AutoDetectValues)>(&::System::Net::Configuration::ProxyElement::set_AutoDetect)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {"set_AutoDetect", {}, {::i2c::type_of<::GlobalNamespace::ProxyElement_AutoDetectValues>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.get_BypassOnLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ProxyElement_BypassOnLocalValues (::System::Net::Configuration::ProxyElement::*)()>(&::System::Net::Configuration::ProxyElement::get_BypassOnLocal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {"get_BypassOnLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.set_BypassOnLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::ProxyElement::*)(::GlobalNamespace::ProxyElement_BypassOnLocalValues)>(&::System::Net::Configuration::ProxyElement::set_BypassOnLocal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {"set_BypassOnLocal", {}, {::i2c::type_of<::GlobalNamespace::ProxyElement_BypassOnLocalValues>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::ProxyElement::*)()>(&::System::Net::Configuration::ProxyElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                    {::i2c::class_of<::System::Net::Configuration::ProxyElement*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.get_ProxyAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::Configuration::ProxyElement::*)()>(&::System::Net::Configuration::ProxyElement::get_ProxyAddress)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {"get_ProxyAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.set_ProxyAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::ProxyElement::*)(::System::Uri*)>(&::System::Net::Configuration::ProxyElement::set_ProxyAddress)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {"set_ProxyAddress", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.get_ScriptLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::Configuration::ProxyElement::*)()>(&::System::Net::Configuration::ProxyElement::get_ScriptLocation)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {"get_ScriptLocation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.set_ScriptLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::ProxyElement::*)(::System::Uri*)>(&::System::Net::Configuration::ProxyElement::set_ScriptLocation)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {"set_ScriptLocation", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.get_UseSystemDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ProxyElement_UseSystemDefaultValues (::System::Net::Configuration::ProxyElement::*)()>(&::System::Net::Configuration::ProxyElement::get_UseSystemDefault)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {"get_UseSystemDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.set_UseSystemDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::ProxyElement::*)(::GlobalNamespace::ProxyElement_UseSystemDefaultValues)>(&::System::Net::Configuration::ProxyElement::set_UseSystemDefault)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {"set_UseSystemDefault", {}, {::i2c::type_of<::GlobalNamespace::ProxyElement_UseSystemDefaultValues>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::ProxyElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProxyElement_AutoDetectValues System::Net::Configuration::ProxyElement::get_AutoDetect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {"get_AutoDetect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProxyElement_AutoDetectValues>(this, ___internal_method);
}
inline void System::Net::Configuration::ProxyElement::set_AutoDetect(::GlobalNamespace::ProxyElement_AutoDetectValues  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {"set_AutoDetect", {}, {::i2c::type_of<::GlobalNamespace::ProxyElement_AutoDetectValues>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ProxyElement_BypassOnLocalValues System::Net::Configuration::ProxyElement::get_BypassOnLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {"get_BypassOnLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProxyElement_BypassOnLocalValues>(this, ___internal_method);
}
inline void System::Net::Configuration::ProxyElement::set_BypassOnLocal(::GlobalNamespace::ProxyElement_BypassOnLocalValues  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {"set_BypassOnLocal", {}, {::i2c::type_of<::GlobalNamespace::ProxyElement_BypassOnLocalValues>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::ProxyElement::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::ProxyElement*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::Uri* System::Net::Configuration::ProxyElement::get_ProxyAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {"get_ProxyAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline void System::Net::Configuration::ProxyElement::set_ProxyAddress(::System::Uri*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {"set_ProxyAddress", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Uri* System::Net::Configuration::ProxyElement::get_ScriptLocation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {"get_ScriptLocation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline void System::Net::Configuration::ProxyElement::set_ScriptLocation(::System::Uri*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {"set_ScriptLocation", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ProxyElement_UseSystemDefaultValues System::Net::Configuration::ProxyElement::get_UseSystemDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {"get_UseSystemDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProxyElement_UseSystemDefaultValues>(this, ___internal_method);
}
inline void System::Net::Configuration::ProxyElement::set_UseSystemDefault(::GlobalNamespace::ProxyElement_UseSystemDefaultValues  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ProxyElement*>(),
                        {"set_UseSystemDefault", {}, {::i2c::type_of<::GlobalNamespace::ProxyElement_UseSystemDefaultValues>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Configuration::ProxyElement* System::Net::Configuration::ProxyElement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::ProxyElement*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::ProxyElement::ProxyElement()   {
}
