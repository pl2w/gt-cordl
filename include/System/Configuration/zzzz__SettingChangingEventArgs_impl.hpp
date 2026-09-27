#pragma once
// IWYU pragma private; include "System/Configuration/SettingChangingEventArgs.hpp"
#include "System/ComponentModel/zzzz__CancelEventArgs_impl.hpp"
#include "System/Configuration/zzzz__SettingChangingEventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingChangingEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingChangingEventArgs::*)(::StringW, ::StringW, ::StringW, ::System::Object*, bool)>(&::System::Configuration::SettingChangingEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingChangingEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingChangingEventArgs.get_NewValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::SettingChangingEventArgs::*)()>(&::System::Configuration::SettingChangingEventArgs::get_NewValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbe08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingChangingEventArgs*>(),
                        {"get_NewValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingChangingEventArgs.get_SettingClass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::SettingChangingEventArgs::*)()>(&::System::Configuration::SettingChangingEventArgs::get_SettingClass)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingChangingEventArgs*>(),
                        {"get_SettingClass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingChangingEventArgs.get_SettingKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::SettingChangingEventArgs::*)()>(&::System::Configuration::SettingChangingEventArgs::get_SettingKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbe78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingChangingEventArgs*>(),
                        {"get_SettingKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingChangingEventArgs.get_SettingName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::SettingChangingEventArgs::*)()>(&::System::Configuration::SettingChangingEventArgs::get_SettingName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingChangingEventArgs*>(),
                        {"get_SettingName", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingChangingEventArgs::_ctor(::StringW  settingName, ::StringW  settingClass, ::StringW  settingKey, ::System::Object*  newValue, bool  cancel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingChangingEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settingName, settingClass, settingKey, newValue, cancel);
}
inline ::System::Object* System::Configuration::SettingChangingEventArgs::get_NewValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingChangingEventArgs*>(),
                        {"get_NewValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::StringW System::Configuration::SettingChangingEventArgs::get_SettingClass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingChangingEventArgs*>(),
                        {"get_SettingClass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Configuration::SettingChangingEventArgs::get_SettingKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingChangingEventArgs*>(),
                        {"get_SettingKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Configuration::SettingChangingEventArgs::get_SettingName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingChangingEventArgs*>(),
                        {"get_SettingName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Configuration::SettingChangingEventArgs* System::Configuration::SettingChangingEventArgs::New_ctor(::StringW  settingName, ::StringW  settingClass, ::StringW  settingKey, ::System::Object*  newValue, bool  cancel)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingChangingEventArgs*>(settingName, settingClass, settingKey, newValue, cancel));
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingChangingEventArgs::SettingChangingEventArgs()   {
}
