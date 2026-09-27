#pragma once
// IWYU pragma private; include "System/Net/Configuration/RequestCachingSection.hpp"
#include "System/Configuration/zzzz__ConfigurationSection_impl.hpp"
#include "System/Net/Configuration/zzzz__RequestCachingSection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Net/Cache/zzzz__RequestCacheLevel_def.hpp"
#include "System/Net/Configuration/zzzz__FtpCachePolicyElement_def.hpp"
#include "System/Net/Configuration/zzzz__HttpCachePolicyElement_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::RequestCachingSection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::RequestCachingSection::*)()>(&::System::Net::Configuration::RequestCachingSection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::RequestCachingSection.get_DefaultFtpCachePolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::FtpCachePolicyElement* (::System::Net::Configuration::RequestCachingSection::*)()>(&::System::Net::Configuration::RequestCachingSection::get_DefaultFtpCachePolicy)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa0e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {"get_DefaultFtpCachePolicy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::RequestCachingSection.get_DefaultHttpCachePolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::HttpCachePolicyElement* (::System::Net::Configuration::RequestCachingSection::*)()>(&::System::Net::Configuration::RequestCachingSection::get_DefaultHttpCachePolicy)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {"get_DefaultHttpCachePolicy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::RequestCachingSection.get_DefaultPolicyLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Cache::RequestCacheLevel (::System::Net::Configuration::RequestCachingSection::*)()>(&::System::Net::Configuration::RequestCachingSection::get_DefaultPolicyLevel)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {"get_DefaultPolicyLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::RequestCachingSection.set_DefaultPolicyLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::RequestCachingSection::*)(::System::Net::Cache::RequestCacheLevel)>(&::System::Net::Configuration::RequestCachingSection::set_DefaultPolicyLevel)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {"set_DefaultPolicyLevel", {}, {::i2c::type_of<::System::Net::Cache::RequestCacheLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::RequestCachingSection.get_DisableAllCaching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Configuration::RequestCachingSection::*)()>(&::System::Net::Configuration::RequestCachingSection::get_DisableAllCaching)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {"get_DisableAllCaching", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::RequestCachingSection.set_DisableAllCaching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::RequestCachingSection::*)(bool)>(&::System::Net::Configuration::RequestCachingSection::set_DisableAllCaching)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {"set_DisableAllCaching", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::RequestCachingSection.get_IsPrivateCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Configuration::RequestCachingSection::*)()>(&::System::Net::Configuration::RequestCachingSection::get_IsPrivateCache)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {"get_IsPrivateCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::RequestCachingSection.set_IsPrivateCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::RequestCachingSection::*)(bool)>(&::System::Net::Configuration::RequestCachingSection::set_IsPrivateCache)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {"set_IsPrivateCache", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::RequestCachingSection.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::RequestCachingSection::*)()>(&::System::Net::Configuration::RequestCachingSection::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                    {::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::RequestCachingSection.get_UnspecifiedMaximumAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Net::Configuration::RequestCachingSection::*)()>(&::System::Net::Configuration::RequestCachingSection::get_UnspecifiedMaximumAge)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {"get_UnspecifiedMaximumAge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::RequestCachingSection.set_UnspecifiedMaximumAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::RequestCachingSection::*)(::System::TimeSpan)>(&::System::Net::Configuration::RequestCachingSection::set_UnspecifiedMaximumAge)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {"set_UnspecifiedMaximumAge", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::RequestCachingSection.DeserializeElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::RequestCachingSection::*)(::System::Xml::XmlReader*, bool)>(&::System::Net::Configuration::RequestCachingSection::DeserializeElement)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                    {::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::RequestCachingSection.PostDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::RequestCachingSection::*)()>(&::System::Net::Configuration::RequestCachingSection::PostDeserialize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfa388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                    {::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(), 8}
                ));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::RequestCachingSection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Configuration::FtpCachePolicyElement* System::Net::Configuration::RequestCachingSection::get_DefaultFtpCachePolicy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {"get_DefaultFtpCachePolicy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::FtpCachePolicyElement*>(this, ___internal_method);
}
inline ::System::Net::Configuration::HttpCachePolicyElement* System::Net::Configuration::RequestCachingSection::get_DefaultHttpCachePolicy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {"get_DefaultHttpCachePolicy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::HttpCachePolicyElement*>(this, ___internal_method);
}
inline ::System::Net::Cache::RequestCacheLevel System::Net::Configuration::RequestCachingSection::get_DefaultPolicyLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {"get_DefaultPolicyLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCacheLevel>(this, ___internal_method);
}
inline void System::Net::Configuration::RequestCachingSection::set_DefaultPolicyLevel(::System::Net::Cache::RequestCacheLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {"set_DefaultPolicyLevel", {}, {::i2c::type_of<::System::Net::Cache::RequestCacheLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Configuration::RequestCachingSection::get_DisableAllCaching()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {"get_DisableAllCaching", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Configuration::RequestCachingSection::set_DisableAllCaching(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {"set_DisableAllCaching", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Configuration::RequestCachingSection::get_IsPrivateCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {"get_IsPrivateCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Configuration::RequestCachingSection::set_IsPrivateCache(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {"set_IsPrivateCache", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::RequestCachingSection::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::TimeSpan System::Net::Configuration::RequestCachingSection::get_UnspecifiedMaximumAge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {"get_UnspecifiedMaximumAge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline void System::Net::Configuration::RequestCachingSection::set_UnspecifiedMaximumAge(::System::TimeSpan  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(),
                        {"set_UnspecifiedMaximumAge", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Configuration::RequestCachingSection::DeserializeElement(::System::Xml::XmlReader*  reader, bool  serializeCollectionKey)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, serializeCollectionKey);
}
inline void System::Net::Configuration::RequestCachingSection::PostDeserialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::RequestCachingSection*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Configuration::RequestCachingSection* System::Net::Configuration::RequestCachingSection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::RequestCachingSection*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::RequestCachingSection::RequestCachingSection()   {
}
