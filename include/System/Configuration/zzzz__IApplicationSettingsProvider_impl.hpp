#pragma once
// IWYU pragma private; include "System/Configuration/IApplicationSettingsProvider.hpp"
#include "System/Configuration/zzzz__IApplicationSettingsProvider_def.hpp"
#include "System/Configuration/zzzz__SettingsContext_def.hpp"
#include "System/Configuration/zzzz__SettingsPropertyCollection_def.hpp"
#include "System/Configuration/zzzz__SettingsPropertyValue_def.hpp"
#include "System/Configuration/zzzz__SettingsProperty_def.hpp"
//  Writing Method size for method: ::System::Configuration::IApplicationSettingsProvider.GetPreviousVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsPropertyValue* (::System::Configuration::IApplicationSettingsProvider::*)(::System::Configuration::SettingsContext*, ::System::Configuration::SettingsProperty*)>(&::System::Configuration::IApplicationSettingsProvider::GetPreviousVersion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::IApplicationSettingsProvider*>(),
                    {::i2c::class_of<::System::Configuration::IApplicationSettingsProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IApplicationSettingsProvider.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::IApplicationSettingsProvider::*)(::System::Configuration::SettingsContext*)>(&::System::Configuration::IApplicationSettingsProvider::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::IApplicationSettingsProvider*>(),
                    {::i2c::class_of<::System::Configuration::IApplicationSettingsProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IApplicationSettingsProvider.Upgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::IApplicationSettingsProvider::*)(::System::Configuration::SettingsContext*, ::System::Configuration::SettingsPropertyCollection*)>(&::System::Configuration::IApplicationSettingsProvider::Upgrade)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::IApplicationSettingsProvider*>(),
                    {::i2c::class_of<::System::Configuration::IApplicationSettingsProvider*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::System::Configuration::SettingsPropertyValue* System::Configuration::IApplicationSettingsProvider::GetPreviousVersion(::System::Configuration::SettingsContext*  context, ::System::Configuration::SettingsProperty*  property)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::IApplicationSettingsProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsPropertyValue*>(this, ___internal_method, context, property);
}
inline void System::Configuration::IApplicationSettingsProvider::Reset(::System::Configuration::SettingsContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::IApplicationSettingsProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void System::Configuration::IApplicationSettingsProvider::Upgrade(::System::Configuration::SettingsContext*  context, ::System::Configuration::SettingsPropertyCollection*  properties)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::IApplicationSettingsProvider*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, properties);
}
