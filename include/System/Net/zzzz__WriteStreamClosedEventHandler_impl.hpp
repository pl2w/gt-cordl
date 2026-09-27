#pragma once
// IWYU pragma private; include "System/Net/WriteStreamClosedEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Net/zzzz__WriteStreamClosedEventHandler_def.hpp"
#include "System/Net/zzzz__WriteStreamClosedEventArgs_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::WriteStreamClosedEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WriteStreamClosedEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::System::Net::WriteStreamClosedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xac5474c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WriteStreamClosedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WriteStreamClosedEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WriteStreamClosedEventHandler::*)(::System::Object*, ::System::Net::WriteStreamClosedEventArgs*)>(&::System::Net::WriteStreamClosedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xac54858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WriteStreamClosedEventHandler*>(),
                    {::i2c::class_of<::System::Net::WriteStreamClosedEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WriteStreamClosedEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::WriteStreamClosedEventHandler::*)(::System::Object*, ::System::Net::WriteStreamClosedEventArgs*, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::WriteStreamClosedEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac5486c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WriteStreamClosedEventHandler*>(),
                    {::i2c::class_of<::System::Net::WriteStreamClosedEventHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WriteStreamClosedEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WriteStreamClosedEventHandler::*)(::System::IAsyncResult*)>(&::System::Net::WriteStreamClosedEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac54894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WriteStreamClosedEventHandler*>(),
                    {::i2c::class_of<::System::Net::WriteStreamClosedEventHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void System::Net::WriteStreamClosedEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WriteStreamClosedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Net::WriteStreamClosedEventHandler::Invoke(::System::Object*  sender, ::System::Net::WriteStreamClosedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WriteStreamClosedEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::IAsyncResult* System::Net::WriteStreamClosedEventHandler::BeginInvoke(::System::Object*  sender, ::System::Net::WriteStreamClosedEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WriteStreamClosedEventHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sender, e, callback, object);
}
inline void System::Net::WriteStreamClosedEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WriteStreamClosedEventHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::Net::WriteStreamClosedEventHandler* System::Net::WriteStreamClosedEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WriteStreamClosedEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Net::WriteStreamClosedEventHandler::WriteStreamClosedEventHandler()   {
}
