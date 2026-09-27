#pragma once
// IWYU pragma private; include "System/ComponentModel/AsyncCompletedEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/ComponentModel/zzzz__AsyncCompletedEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__AsyncCompletedEventArgs_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::AsyncCompletedEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AsyncCompletedEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::System::ComponentModel::AsyncCompletedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xad6c684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncCompletedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncCompletedEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AsyncCompletedEventHandler::*)(::System::Object*, ::System::ComponentModel::AsyncCompletedEventArgs*)>(&::System::ComponentModel::AsyncCompletedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xad6c790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::AsyncCompletedEventHandler*>(),
                    {::i2c::class_of<::System::ComponentModel::AsyncCompletedEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncCompletedEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::ComponentModel::AsyncCompletedEventHandler::*)(::System::Object*, ::System::ComponentModel::AsyncCompletedEventArgs*, ::System::AsyncCallback*, ::System::Object*)>(&::System::ComponentModel::AsyncCompletedEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad6c7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::AsyncCompletedEventHandler*>(),
                    {::i2c::class_of<::System::ComponentModel::AsyncCompletedEventHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncCompletedEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AsyncCompletedEventHandler::*)(::System::IAsyncResult*)>(&::System::ComponentModel::AsyncCompletedEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xad6c7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::AsyncCompletedEventHandler*>(),
                    {::i2c::class_of<::System::ComponentModel::AsyncCompletedEventHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void System::ComponentModel::AsyncCompletedEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncCompletedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::ComponentModel::AsyncCompletedEventHandler::Invoke(::System::Object*  sender, ::System::ComponentModel::AsyncCompletedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::AsyncCompletedEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::IAsyncResult* System::ComponentModel::AsyncCompletedEventHandler::BeginInvoke(::System::Object*  sender, ::System::ComponentModel::AsyncCompletedEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::AsyncCompletedEventHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sender, e, callback, object);
}
inline void System::ComponentModel::AsyncCompletedEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::AsyncCompletedEventHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::ComponentModel::AsyncCompletedEventHandler* System::ComponentModel::AsyncCompletedEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::AsyncCompletedEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::AsyncCompletedEventHandler::AsyncCompletedEventHandler()   {
}
