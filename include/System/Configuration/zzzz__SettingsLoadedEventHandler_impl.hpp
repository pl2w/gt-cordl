#pragma once
// IWYU pragma private; include "System/Configuration/SettingsLoadedEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Configuration/zzzz__SettingsLoadedEventHandler_def.hpp"
#include "System/Configuration/zzzz__SettingsLoadedEventArgs_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingsLoadedEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsLoadedEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::System::Configuration::SettingsLoadedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsLoadedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsLoadedEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsLoadedEventHandler::*)(::System::Object*, ::System::Configuration::SettingsLoadedEventArgs*)>(&::System::Configuration::SettingsLoadedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsLoadedEventHandler*>(),
                    {::i2c::class_of<::System::Configuration::SettingsLoadedEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsLoadedEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Configuration::SettingsLoadedEventHandler::*)(::System::Object*, ::System::Configuration::SettingsLoadedEventArgs*, ::System::AsyncCallback*, ::System::Object*)>(&::System::Configuration::SettingsLoadedEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbf58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsLoadedEventHandler*>(),
                    {::i2c::class_of<::System::Configuration::SettingsLoadedEventHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsLoadedEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsLoadedEventHandler::*)(::System::IAsyncResult*)>(&::System::Configuration::SettingsLoadedEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsLoadedEventHandler*>(),
                    {::i2c::class_of<::System::Configuration::SettingsLoadedEventHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingsLoadedEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsLoadedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Configuration::SettingsLoadedEventHandler::Invoke(::System::Object*  sender, ::System::Configuration::SettingsLoadedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsLoadedEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::IAsyncResult* System::Configuration::SettingsLoadedEventHandler::BeginInvoke(::System::Object*  sender, ::System::Configuration::SettingsLoadedEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsLoadedEventHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sender, e, callback, object);
}
inline void System::Configuration::SettingsLoadedEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsLoadedEventHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::Configuration::SettingsLoadedEventHandler* System::Configuration::SettingsLoadedEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsLoadedEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingsLoadedEventHandler::SettingsLoadedEventHandler()   {
}
