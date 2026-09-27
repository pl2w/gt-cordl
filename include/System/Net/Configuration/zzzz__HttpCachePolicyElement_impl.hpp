#pragma once
// IWYU pragma private; include "System/Net/Configuration/HttpCachePolicyElement.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Net/Configuration/zzzz__HttpCachePolicyElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Net/Cache/zzzz__HttpRequestCacheLevel_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::HttpCachePolicyElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::HttpCachePolicyElement::*)()>(&::System::Net::Configuration::HttpCachePolicyElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::HttpCachePolicyElement.get_MaximumAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Net::Configuration::HttpCachePolicyElement::*)()>(&::System::Net::Configuration::HttpCachePolicyElement::get_MaximumAge)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(),
                        {"get_MaximumAge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::HttpCachePolicyElement.set_MaximumAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::HttpCachePolicyElement::*)(::System::TimeSpan)>(&::System::Net::Configuration::HttpCachePolicyElement::set_MaximumAge)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(),
                        {"set_MaximumAge", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::HttpCachePolicyElement.get_MaximumStale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Net::Configuration::HttpCachePolicyElement::*)()>(&::System::Net::Configuration::HttpCachePolicyElement::get_MaximumStale)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(),
                        {"get_MaximumStale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::HttpCachePolicyElement.set_MaximumStale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::HttpCachePolicyElement::*)(::System::TimeSpan)>(&::System::Net::Configuration::HttpCachePolicyElement::set_MaximumStale)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(),
                        {"set_MaximumStale", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::HttpCachePolicyElement.get_MinimumFresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Net::Configuration::HttpCachePolicyElement::*)()>(&::System::Net::Configuration::HttpCachePolicyElement::get_MinimumFresh)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(),
                        {"get_MinimumFresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::HttpCachePolicyElement.set_MinimumFresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::HttpCachePolicyElement::*)(::System::TimeSpan)>(&::System::Net::Configuration::HttpCachePolicyElement::set_MinimumFresh)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(),
                        {"set_MinimumFresh", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::HttpCachePolicyElement.get_PolicyLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Cache::HttpRequestCacheLevel (::System::Net::Configuration::HttpCachePolicyElement::*)()>(&::System::Net::Configuration::HttpCachePolicyElement::get_PolicyLevel)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(),
                        {"get_PolicyLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::HttpCachePolicyElement.set_PolicyLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::HttpCachePolicyElement::*)(::System::Net::Cache::HttpRequestCacheLevel)>(&::System::Net::Configuration::HttpCachePolicyElement::set_PolicyLevel)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(),
                        {"set_PolicyLevel", {}, {::i2c::type_of<::System::Net::Cache::HttpRequestCacheLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::HttpCachePolicyElement.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::HttpCachePolicyElement::*)()>(&::System::Net::Configuration::HttpCachePolicyElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(),
                    {::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::HttpCachePolicyElement.DeserializeElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::HttpCachePolicyElement::*)(::System::Xml::XmlReader*, bool)>(&::System::Net::Configuration::HttpCachePolicyElement::DeserializeElement)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf90b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(),
                    {::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::HttpCachePolicyElement.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::HttpCachePolicyElement::*)(::System::Configuration::ConfigurationElement*)>(&::System::Net::Configuration::HttpCachePolicyElement::Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf90f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(),
                    {::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(), 9}
                ));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::HttpCachePolicyElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::TimeSpan System::Net::Configuration::HttpCachePolicyElement::get_MaximumAge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(),
                        {"get_MaximumAge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline void System::Net::Configuration::HttpCachePolicyElement::set_MaximumAge(::System::TimeSpan  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(),
                        {"set_MaximumAge", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::TimeSpan System::Net::Configuration::HttpCachePolicyElement::get_MaximumStale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(),
                        {"get_MaximumStale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline void System::Net::Configuration::HttpCachePolicyElement::set_MaximumStale(::System::TimeSpan  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(),
                        {"set_MaximumStale", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::TimeSpan System::Net::Configuration::HttpCachePolicyElement::get_MinimumFresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(),
                        {"get_MinimumFresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline void System::Net::Configuration::HttpCachePolicyElement::set_MinimumFresh(::System::TimeSpan  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(),
                        {"set_MinimumFresh", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Cache::HttpRequestCacheLevel System::Net::Configuration::HttpCachePolicyElement::get_PolicyLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(),
                        {"get_PolicyLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::HttpRequestCacheLevel>(this, ___internal_method);
}
inline void System::Net::Configuration::HttpCachePolicyElement::set_PolicyLevel(::System::Net::Cache::HttpRequestCacheLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(),
                        {"set_PolicyLevel", {}, {::i2c::type_of<::System::Net::Cache::HttpRequestCacheLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::HttpCachePolicyElement::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline void System::Net::Configuration::HttpCachePolicyElement::DeserializeElement(::System::Xml::XmlReader*  reader, bool  serializeCollectionKey)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, serializeCollectionKey);
}
inline void System::Net::Configuration::HttpCachePolicyElement::Reset(::System::Configuration::ConfigurationElement*  parentElement)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::HttpCachePolicyElement*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentElement);
}
inline ::System::Net::Configuration::HttpCachePolicyElement* System::Net::Configuration::HttpCachePolicyElement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::HttpCachePolicyElement*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::HttpCachePolicyElement::HttpCachePolicyElement()   {
}
