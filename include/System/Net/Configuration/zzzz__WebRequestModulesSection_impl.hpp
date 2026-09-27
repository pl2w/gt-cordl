#pragma once
// IWYU pragma private; include "System/Net/Configuration/WebRequestModulesSection.hpp"
#include "System/Configuration/zzzz__ConfigurationSection_impl.hpp"
#include "System/Net/Configuration/zzzz__WebRequestModulesSection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Net/Configuration/zzzz__WebRequestModuleElementCollection_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::WebRequestModulesSection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::WebRequestModulesSection::*)()>(&::System::Net::Configuration::WebRequestModulesSection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebRequestModulesSection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WebRequestModulesSection.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::WebRequestModulesSection::*)()>(&::System::Net::Configuration::WebRequestModulesSection::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::WebRequestModulesSection*>(),
                    {::i2c::class_of<::System::Net::Configuration::WebRequestModulesSection*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WebRequestModulesSection.get_WebRequestModules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::WebRequestModuleElementCollection* (::System::Net::Configuration::WebRequestModulesSection::*)()>(&::System::Net::Configuration::WebRequestModulesSection::get_WebRequestModules)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebRequestModulesSection*>(),
                        {"get_WebRequestModules", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WebRequestModulesSection.InitializeDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::WebRequestModulesSection::*)()>(&::System::Net::Configuration::WebRequestModulesSection::InitializeDefault)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::WebRequestModulesSection*>(),
                    {::i2c::class_of<::System::Net::Configuration::WebRequestModulesSection*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WebRequestModulesSection.PostDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::WebRequestModulesSection::*)()>(&::System::Net::Configuration::WebRequestModulesSection::PostDeserialize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::WebRequestModulesSection*>(),
                    {::i2c::class_of<::System::Net::Configuration::WebRequestModulesSection*>(), 8}
                ));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::WebRequestModulesSection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebRequestModulesSection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::WebRequestModulesSection::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::WebRequestModulesSection*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::Net::Configuration::WebRequestModuleElementCollection* System::Net::Configuration::WebRequestModulesSection::get_WebRequestModules()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebRequestModulesSection*>(),
                        {"get_WebRequestModules", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::WebRequestModuleElementCollection*>(this, ___internal_method);
}
inline void System::Net::Configuration::WebRequestModulesSection::InitializeDefault()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::WebRequestModulesSection*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Configuration::WebRequestModulesSection::PostDeserialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::WebRequestModulesSection*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Configuration::WebRequestModulesSection* System::Net::Configuration::WebRequestModulesSection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::WebRequestModulesSection*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::WebRequestModulesSection::WebRequestModulesSection()   {
}
