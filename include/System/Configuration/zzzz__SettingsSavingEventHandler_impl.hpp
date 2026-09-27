#pragma once
// IWYU pragma private; include "System/Configuration/SettingsSavingEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Configuration/zzzz__SettingsSavingEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__CancelEventArgs_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingsSavingEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsSavingEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::System::Configuration::SettingsSavingEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsSavingEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsSavingEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsSavingEventHandler::*)(::System::Object*, ::System::ComponentModel::CancelEventArgs*)>(&::System::Configuration::SettingsSavingEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsSavingEventHandler*>(),
                    {::i2c::class_of<::System::Configuration::SettingsSavingEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsSavingEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Configuration::SettingsSavingEventHandler::*)(::System::Object*, ::System::ComponentModel::CancelEventArgs*, ::System::AsyncCallback*, ::System::Object*)>(&::System::Configuration::SettingsSavingEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsSavingEventHandler*>(),
                    {::i2c::class_of<::System::Configuration::SettingsSavingEventHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsSavingEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsSavingEventHandler::*)(::System::IAsyncResult*)>(&::System::Configuration::SettingsSavingEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsSavingEventHandler*>(),
                    {::i2c::class_of<::System::Configuration::SettingsSavingEventHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingsSavingEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsSavingEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Configuration::SettingsSavingEventHandler::Invoke(::System::Object*  sender, ::System::ComponentModel::CancelEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsSavingEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::IAsyncResult* System::Configuration::SettingsSavingEventHandler::BeginInvoke(::System::Object*  sender, ::System::ComponentModel::CancelEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsSavingEventHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sender, e, callback, object);
}
inline void System::Configuration::SettingsSavingEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsSavingEventHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::Configuration::SettingsSavingEventHandler* System::Configuration::SettingsSavingEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsSavingEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingsSavingEventHandler::SettingsSavingEventHandler()   {
}
