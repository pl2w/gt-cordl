#pragma once
// IWYU pragma private; include "System/Configuration/IConfigurationSystem.hpp"
#include "System/Configuration/zzzz__IConfigurationSystem_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Configuration::IConfigurationSystem.GetConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::IConfigurationSystem::*)(::StringW)>(&::System::Configuration::IConfigurationSystem::GetConfig)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::IConfigurationSystem*>(),
                    {::i2c::class_of<::System::Configuration::IConfigurationSystem*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IConfigurationSystem.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::IConfigurationSystem::*)()>(&::System::Configuration::IConfigurationSystem::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::IConfigurationSystem*>(),
                    {::i2c::class_of<::System::Configuration::IConfigurationSystem*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::System::Object* System::Configuration::IConfigurationSystem::GetConfig(::StringW  configKey)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::IConfigurationSystem*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, configKey);
}
inline void System::Configuration::IConfigurationSystem::Init()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::IConfigurationSystem*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
