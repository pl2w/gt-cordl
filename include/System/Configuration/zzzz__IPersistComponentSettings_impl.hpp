#pragma once
// IWYU pragma private; include "System/Configuration/IPersistComponentSettings.hpp"
#include "System/Configuration/zzzz__IPersistComponentSettings_def.hpp"
//  Writing Method size for method: ::System::Configuration::IPersistComponentSettings.get_SaveSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Configuration::IPersistComponentSettings::*)()>(&::System::Configuration::IPersistComponentSettings::get_SaveSettings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::IPersistComponentSettings*>(),
                    {::i2c::class_of<::System::Configuration::IPersistComponentSettings*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IPersistComponentSettings.set_SaveSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::IPersistComponentSettings::*)(bool)>(&::System::Configuration::IPersistComponentSettings::set_SaveSettings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::IPersistComponentSettings*>(),
                    {::i2c::class_of<::System::Configuration::IPersistComponentSettings*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IPersistComponentSettings.get_SettingsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::IPersistComponentSettings::*)()>(&::System::Configuration::IPersistComponentSettings::get_SettingsKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::IPersistComponentSettings*>(),
                    {::i2c::class_of<::System::Configuration::IPersistComponentSettings*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IPersistComponentSettings.set_SettingsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::IPersistComponentSettings::*)(::StringW)>(&::System::Configuration::IPersistComponentSettings::set_SettingsKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::IPersistComponentSettings*>(),
                    {::i2c::class_of<::System::Configuration::IPersistComponentSettings*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IPersistComponentSettings.LoadComponentSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::IPersistComponentSettings::*)()>(&::System::Configuration::IPersistComponentSettings::LoadComponentSettings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::IPersistComponentSettings*>(),
                    {::i2c::class_of<::System::Configuration::IPersistComponentSettings*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IPersistComponentSettings.ResetComponentSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::IPersistComponentSettings::*)()>(&::System::Configuration::IPersistComponentSettings::ResetComponentSettings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::IPersistComponentSettings*>(),
                    {::i2c::class_of<::System::Configuration::IPersistComponentSettings*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IPersistComponentSettings.SaveComponentSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::IPersistComponentSettings::*)()>(&::System::Configuration::IPersistComponentSettings::SaveComponentSettings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::IPersistComponentSettings*>(),
                    {::i2c::class_of<::System::Configuration::IPersistComponentSettings*>(), 6}
                ));
    return ___internal_method;
  }
};
inline bool System::Configuration::IPersistComponentSettings::get_SaveSettings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::IPersistComponentSettings*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Configuration::IPersistComponentSettings::set_SaveSettings(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::IPersistComponentSettings*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Configuration::IPersistComponentSettings::get_SettingsKey()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::IPersistComponentSettings*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Configuration::IPersistComponentSettings::set_SettingsKey(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::IPersistComponentSettings*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Configuration::IPersistComponentSettings::LoadComponentSettings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::IPersistComponentSettings*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Configuration::IPersistComponentSettings::ResetComponentSettings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::IPersistComponentSettings*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Configuration::IPersistComponentSettings::SaveComponentSettings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::IPersistComponentSettings*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
