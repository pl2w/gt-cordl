#pragma once
// IWYU pragma private; include "System/Timers/ElapsedEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Timers/zzzz__ElapsedEventHandler_def.hpp"
#include "System/Timers/zzzz__ElapsedEventArgs_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Timers::ElapsedEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Timers::ElapsedEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::System::Timers::ElapsedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xad083b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::ElapsedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Timers::ElapsedEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Timers::ElapsedEventHandler::*)(::System::Object*, ::System::Timers::ElapsedEventArgs*)>(&::System::Timers::ElapsedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xad084bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Timers::ElapsedEventHandler*>(),
                    {::i2c::class_of<::System::Timers::ElapsedEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void System::Timers::ElapsedEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::ElapsedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Timers::ElapsedEventHandler::Invoke(::System::Object*  sender, ::System::Timers::ElapsedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Timers::ElapsedEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::Timers::ElapsedEventHandler* System::Timers::ElapsedEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Timers::ElapsedEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Timers::ElapsedEventHandler::ElapsedEventHandler()   {
}
