#pragma once
// IWYU pragma private; include "System/Configuration/SettingChangingEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Configuration/zzzz__SettingChangingEventHandler_def.hpp"
#include "System/Configuration/zzzz__SettingChangingEventArgs_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingChangingEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingChangingEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::System::Configuration::SettingChangingEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingChangingEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingChangingEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingChangingEventHandler::*)(::System::Object*, ::System::Configuration::SettingChangingEventArgs*)>(&::System::Configuration::SettingChangingEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbd28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingChangingEventHandler*>(),
                    {::i2c::class_of<::System::Configuration::SettingChangingEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingChangingEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Configuration::SettingChangingEventHandler::*)(::System::Object*, ::System::Configuration::SettingChangingEventArgs*, ::System::AsyncCallback*, ::System::Object*)>(&::System::Configuration::SettingChangingEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingChangingEventHandler*>(),
                    {::i2c::class_of<::System::Configuration::SettingChangingEventHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingChangingEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingChangingEventHandler::*)(::System::IAsyncResult*)>(&::System::Configuration::SettingChangingEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingChangingEventHandler*>(),
                    {::i2c::class_of<::System::Configuration::SettingChangingEventHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingChangingEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingChangingEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Configuration::SettingChangingEventHandler::Invoke(::System::Object*  sender, ::System::Configuration::SettingChangingEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingChangingEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::IAsyncResult* System::Configuration::SettingChangingEventHandler::BeginInvoke(::System::Object*  sender, ::System::Configuration::SettingChangingEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingChangingEventHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sender, e, callback, object);
}
inline void System::Configuration::SettingChangingEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingChangingEventHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::Configuration::SettingChangingEventHandler* System::Configuration::SettingChangingEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingChangingEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingChangingEventHandler::SettingChangingEventHandler()   {
}
