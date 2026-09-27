#pragma once
// IWYU pragma private; include "System/Net/Configuration/SocketElement.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Net/Configuration/zzzz__SocketElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Net/Sockets/zzzz__IPProtectionLevel_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::SocketElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SocketElement::*)()>(&::System::Net::Configuration::SocketElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfaac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SocketElement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SocketElement.get_AlwaysUseCompletionPortsForAccept
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Configuration::SocketElement::*)()>(&::System::Net::Configuration::SocketElement::get_AlwaysUseCompletionPortsForAccept)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfaaf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SocketElement*>(),
                        {"get_AlwaysUseCompletionPortsForAccept", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SocketElement.set_AlwaysUseCompletionPortsForAccept
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SocketElement::*)(bool)>(&::System::Net::Configuration::SocketElement::set_AlwaysUseCompletionPortsForAccept)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfab30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SocketElement*>(),
                        {"set_AlwaysUseCompletionPortsForAccept", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SocketElement.get_AlwaysUseCompletionPortsForConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Configuration::SocketElement::*)()>(&::System::Net::Configuration::SocketElement::get_AlwaysUseCompletionPortsForConnect)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfab68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SocketElement*>(),
                        {"get_AlwaysUseCompletionPortsForConnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SocketElement.set_AlwaysUseCompletionPortsForConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SocketElement::*)(bool)>(&::System::Net::Configuration::SocketElement::set_AlwaysUseCompletionPortsForConnect)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfaba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SocketElement*>(),
                        {"set_AlwaysUseCompletionPortsForConnect", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SocketElement.get_IPProtectionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::IPProtectionLevel (::System::Net::Configuration::SocketElement::*)()>(&::System::Net::Configuration::SocketElement::get_IPProtectionLevel)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfabd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SocketElement*>(),
                        {"get_IPProtectionLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SocketElement.set_IPProtectionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SocketElement::*)(::System::Net::Sockets::IPProtectionLevel)>(&::System::Net::Configuration::SocketElement::set_IPProtectionLevel)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfac10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SocketElement*>(),
                        {"set_IPProtectionLevel", {}, {::i2c::type_of<::System::Net::Sockets::IPProtectionLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SocketElement.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::SocketElement::*)()>(&::System::Net::Configuration::SocketElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfac48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::SocketElement*>(),
                    {::i2c::class_of<::System::Net::Configuration::SocketElement*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SocketElement.PostDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SocketElement::*)()>(&::System::Net::Configuration::SocketElement::PostDeserialize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfac80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::SocketElement*>(),
                    {::i2c::class_of<::System::Net::Configuration::SocketElement*>(), 8}
                ));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::SocketElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SocketElement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::Configuration::SocketElement::get_AlwaysUseCompletionPortsForAccept()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SocketElement*>(),
                        {"get_AlwaysUseCompletionPortsForAccept", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Configuration::SocketElement::set_AlwaysUseCompletionPortsForAccept(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SocketElement*>(),
                        {"set_AlwaysUseCompletionPortsForAccept", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Configuration::SocketElement::get_AlwaysUseCompletionPortsForConnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SocketElement*>(),
                        {"get_AlwaysUseCompletionPortsForConnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Configuration::SocketElement::set_AlwaysUseCompletionPortsForConnect(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SocketElement*>(),
                        {"set_AlwaysUseCompletionPortsForConnect", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Sockets::IPProtectionLevel System::Net::Configuration::SocketElement::get_IPProtectionLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SocketElement*>(),
                        {"get_IPProtectionLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::IPProtectionLevel>(this, ___internal_method);
}
inline void System::Net::Configuration::SocketElement::set_IPProtectionLevel(::System::Net::Sockets::IPProtectionLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SocketElement*>(),
                        {"set_IPProtectionLevel", {}, {::i2c::type_of<::System::Net::Sockets::IPProtectionLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::SocketElement::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::SocketElement*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline void System::Net::Configuration::SocketElement::PostDeserialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::SocketElement*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Configuration::SocketElement* System::Net::Configuration::SocketElement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::SocketElement*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::SocketElement::SocketElement()   {
}
