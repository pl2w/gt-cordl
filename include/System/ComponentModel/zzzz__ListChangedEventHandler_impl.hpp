#pragma once
// IWYU pragma private; include "System/ComponentModel/ListChangedEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/ComponentModel/zzzz__ListChangedEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedEventArgs_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ListChangedEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ListChangedEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::System::ComponentModel::ListChangedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xad5b1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListChangedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListChangedEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ListChangedEventHandler::*)(::System::Object*, ::System::ComponentModel::ListChangedEventArgs*)>(&::System::ComponentModel::ListChangedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xad5b2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ListChangedEventHandler*>(),
                    {::i2c::class_of<::System::ComponentModel::ListChangedEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListChangedEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::ComponentModel::ListChangedEventHandler::*)(::System::Object*, ::System::ComponentModel::ListChangedEventArgs*, ::System::AsyncCallback*, ::System::Object*)>(&::System::ComponentModel::ListChangedEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad5b2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ListChangedEventHandler*>(),
                    {::i2c::class_of<::System::ComponentModel::ListChangedEventHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListChangedEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ListChangedEventHandler::*)(::System::IAsyncResult*)>(&::System::ComponentModel::ListChangedEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xad5b318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ListChangedEventHandler*>(),
                    {::i2c::class_of<::System::ComponentModel::ListChangedEventHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void System::ComponentModel::ListChangedEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListChangedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::ComponentModel::ListChangedEventHandler::Invoke(::System::Object*  sender, ::System::ComponentModel::ListChangedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ListChangedEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::IAsyncResult* System::ComponentModel::ListChangedEventHandler::BeginInvoke(::System::Object*  sender, ::System::ComponentModel::ListChangedEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ListChangedEventHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sender, e, callback, object);
}
inline void System::ComponentModel::ListChangedEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ListChangedEventHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::ComponentModel::ListChangedEventHandler* System::ComponentModel::ListChangedEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ListChangedEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ListChangedEventHandler::ListChangedEventHandler()   {
}
