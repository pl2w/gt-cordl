#pragma once
// IWYU pragma private; include "System/Net/Configuration/FtpCachePolicyElement.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Net/Configuration/zzzz__FtpCachePolicyElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Net/Cache/zzzz__RequestCacheLevel_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::FtpCachePolicyElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::FtpCachePolicyElement::*)()>(&::System::Net::Configuration::FtpCachePolicyElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::FtpCachePolicyElement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::FtpCachePolicyElement.get_PolicyLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Cache::RequestCacheLevel (::System::Net::Configuration::FtpCachePolicyElement::*)()>(&::System::Net::Configuration::FtpCachePolicyElement::get_PolicyLevel)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::FtpCachePolicyElement*>(),
                        {"get_PolicyLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::FtpCachePolicyElement.set_PolicyLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::FtpCachePolicyElement::*)(::System::Net::Cache::RequestCacheLevel)>(&::System::Net::Configuration::FtpCachePolicyElement::set_PolicyLevel)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::FtpCachePolicyElement*>(),
                        {"set_PolicyLevel", {}, {::i2c::type_of<::System::Net::Cache::RequestCacheLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::FtpCachePolicyElement.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::FtpCachePolicyElement::*)()>(&::System::Net::Configuration::FtpCachePolicyElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::FtpCachePolicyElement*>(),
                    {::i2c::class_of<::System::Net::Configuration::FtpCachePolicyElement*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::FtpCachePolicyElement.DeserializeElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::FtpCachePolicyElement::*)(::System::Xml::XmlReader*, bool)>(&::System::Net::Configuration::FtpCachePolicyElement::DeserializeElement)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::FtpCachePolicyElement*>(),
                    {::i2c::class_of<::System::Net::Configuration::FtpCachePolicyElement*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::FtpCachePolicyElement.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::FtpCachePolicyElement::*)(::System::Configuration::ConfigurationElement*)>(&::System::Net::Configuration::FtpCachePolicyElement::Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::FtpCachePolicyElement*>(),
                    {::i2c::class_of<::System::Net::Configuration::FtpCachePolicyElement*>(), 9}
                ));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::FtpCachePolicyElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::FtpCachePolicyElement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Cache::RequestCacheLevel System::Net::Configuration::FtpCachePolicyElement::get_PolicyLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::FtpCachePolicyElement*>(),
                        {"get_PolicyLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCacheLevel>(this, ___internal_method);
}
inline void System::Net::Configuration::FtpCachePolicyElement::set_PolicyLevel(::System::Net::Cache::RequestCacheLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::FtpCachePolicyElement*>(),
                        {"set_PolicyLevel", {}, {::i2c::type_of<::System::Net::Cache::RequestCacheLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::FtpCachePolicyElement::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::FtpCachePolicyElement*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline void System::Net::Configuration::FtpCachePolicyElement::DeserializeElement(::System::Xml::XmlReader*  reader, bool  serializeCollectionKey)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::FtpCachePolicyElement*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, serializeCollectionKey);
}
inline void System::Net::Configuration::FtpCachePolicyElement::Reset(::System::Configuration::ConfigurationElement*  parentElement)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::FtpCachePolicyElement*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentElement);
}
inline ::System::Net::Configuration::FtpCachePolicyElement* System::Net::Configuration::FtpCachePolicyElement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::FtpCachePolicyElement*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::FtpCachePolicyElement::FtpCachePolicyElement()   {
}
