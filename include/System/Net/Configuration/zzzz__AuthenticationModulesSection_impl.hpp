#pragma once
// IWYU pragma private; include "System/Net/Configuration/AuthenticationModulesSection.hpp"
#include "System/Configuration/zzzz__ConfigurationSection_impl.hpp"
#include "System/Net/Configuration/zzzz__AuthenticationModulesSection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Net/Configuration/zzzz__AuthenticationModuleElementCollection_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::AuthenticationModulesSection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::AuthenticationModulesSection::*)()>(&::System::Net::Configuration::AuthenticationModulesSection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::AuthenticationModulesSection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::AuthenticationModulesSection.get_AuthenticationModules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::AuthenticationModuleElementCollection* (::System::Net::Configuration::AuthenticationModulesSection::*)()>(&::System::Net::Configuration::AuthenticationModulesSection::get_AuthenticationModules)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::AuthenticationModulesSection*>(),
                        {"get_AuthenticationModules", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::AuthenticationModulesSection.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::AuthenticationModulesSection::*)()>(&::System::Net::Configuration::AuthenticationModulesSection::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::AuthenticationModulesSection*>(),
                    {::i2c::class_of<::System::Net::Configuration::AuthenticationModulesSection*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::AuthenticationModulesSection.InitializeDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::AuthenticationModulesSection::*)()>(&::System::Net::Configuration::AuthenticationModulesSection::InitializeDefault)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::AuthenticationModulesSection*>(),
                    {::i2c::class_of<::System::Net::Configuration::AuthenticationModulesSection*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::AuthenticationModulesSection.PostDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::AuthenticationModulesSection::*)()>(&::System::Net::Configuration::AuthenticationModulesSection::PostDeserialize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::AuthenticationModulesSection*>(),
                    {::i2c::class_of<::System::Net::Configuration::AuthenticationModulesSection*>(), 8}
                ));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::AuthenticationModulesSection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::AuthenticationModulesSection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Configuration::AuthenticationModuleElementCollection* System::Net::Configuration::AuthenticationModulesSection::get_AuthenticationModules()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::AuthenticationModulesSection*>(),
                        {"get_AuthenticationModules", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::AuthenticationModuleElementCollection*>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::AuthenticationModulesSection::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::AuthenticationModulesSection*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline void System::Net::Configuration::AuthenticationModulesSection::InitializeDefault()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::AuthenticationModulesSection*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Configuration::AuthenticationModulesSection::PostDeserialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::AuthenticationModulesSection*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Configuration::AuthenticationModulesSection* System::Net::Configuration::AuthenticationModulesSection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::AuthenticationModulesSection*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::AuthenticationModulesSection::AuthenticationModulesSection()   {
}
