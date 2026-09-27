#pragma once
// IWYU pragma private; include "System/Net/Configuration/ConnectionManagementElement.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Net/Configuration/zzzz__ConnectionManagementElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::ConnectionManagementElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::ConnectionManagementElement::*)()>(&::System::Net::Configuration::ConnectionManagementElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ConnectionManagementElement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ConnectionManagementElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::ConnectionManagementElement::*)(::StringW, int32_t)>(&::System::Net::Configuration::ConnectionManagementElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ConnectionManagementElement*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ConnectionManagementElement.get_Address
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Configuration::ConnectionManagementElement::*)()>(&::System::Net::Configuration::ConnectionManagementElement::get_Address)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf82b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ConnectionManagementElement*>(),
                        {"get_Address", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ConnectionManagementElement.set_Address
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::ConnectionManagementElement::*)(::StringW)>(&::System::Net::Configuration::ConnectionManagementElement::set_Address)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf82f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ConnectionManagementElement*>(),
                        {"set_Address", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ConnectionManagementElement.get_MaxConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Configuration::ConnectionManagementElement::*)()>(&::System::Net::Configuration::ConnectionManagementElement::get_MaxConnection)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ConnectionManagementElement*>(),
                        {"get_MaxConnection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ConnectionManagementElement.set_MaxConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::ConnectionManagementElement::*)(int32_t)>(&::System::Net::Configuration::ConnectionManagementElement::set_MaxConnection)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ConnectionManagementElement*>(),
                        {"set_MaxConnection", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ConnectionManagementElement.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::ConnectionManagementElement::*)()>(&::System::Net::Configuration::ConnectionManagementElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::ConnectionManagementElement*>(),
                    {::i2c::class_of<::System::Net::Configuration::ConnectionManagementElement*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::ConnectionManagementElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ConnectionManagementElement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Configuration::ConnectionManagementElement::_ctor(::StringW  address, int32_t  maxConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ConnectionManagementElement*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, maxConnection);
}
inline ::StringW System::Net::Configuration::ConnectionManagementElement::get_Address()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ConnectionManagementElement*>(),
                        {"get_Address", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::Configuration::ConnectionManagementElement::set_Address(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ConnectionManagementElement*>(),
                        {"set_Address", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Net::Configuration::ConnectionManagementElement::get_MaxConnection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ConnectionManagementElement*>(),
                        {"get_MaxConnection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::Configuration::ConnectionManagementElement::set_MaxConnection(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::ConnectionManagementElement*>(),
                        {"set_MaxConnection", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::ConnectionManagementElement::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::ConnectionManagementElement*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::Net::Configuration::ConnectionManagementElement* System::Net::Configuration::ConnectionManagementElement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::ConnectionManagementElement*>());
}
inline ::System::Net::Configuration::ConnectionManagementElement* System::Net::Configuration::ConnectionManagementElement::New_ctor(::StringW  address, int32_t  maxConnection)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::ConnectionManagementElement*>(address, maxConnection));
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::ConnectionManagementElement::ConnectionManagementElement()   {
}
