#pragma once
// IWYU pragma private; include "System/ComponentModel/AddingNewEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/ComponentModel/zzzz__AddingNewEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__AddingNewEventArgs_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::AddingNewEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AddingNewEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::System::ComponentModel::AddingNewEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xad48380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AddingNewEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AddingNewEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AddingNewEventHandler::*)(::System::Object*, ::System::ComponentModel::AddingNewEventArgs*)>(&::System::ComponentModel::AddingNewEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xad4848c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::AddingNewEventHandler*>(),
                    {::i2c::class_of<::System::ComponentModel::AddingNewEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AddingNewEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::ComponentModel::AddingNewEventHandler::*)(::System::Object*, ::System::ComponentModel::AddingNewEventArgs*, ::System::AsyncCallback*, ::System::Object*)>(&::System::ComponentModel::AddingNewEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad484a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::AddingNewEventHandler*>(),
                    {::i2c::class_of<::System::ComponentModel::AddingNewEventHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AddingNewEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AddingNewEventHandler::*)(::System::IAsyncResult*)>(&::System::ComponentModel::AddingNewEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xad484c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::AddingNewEventHandler*>(),
                    {::i2c::class_of<::System::ComponentModel::AddingNewEventHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void System::ComponentModel::AddingNewEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AddingNewEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::ComponentModel::AddingNewEventHandler::Invoke(::System::Object*  sender, ::System::ComponentModel::AddingNewEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::AddingNewEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::IAsyncResult* System::ComponentModel::AddingNewEventHandler::BeginInvoke(::System::Object*  sender, ::System::ComponentModel::AddingNewEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::AddingNewEventHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sender, e, callback, object);
}
inline void System::ComponentModel::AddingNewEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::AddingNewEventHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::ComponentModel::AddingNewEventHandler* System::ComponentModel::AddingNewEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::AddingNewEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::AddingNewEventHandler::AddingNewEventHandler()   {
}
