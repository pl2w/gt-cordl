#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/PlayerIdUpdatedEvent.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Liv/Lck/Cosmetics/zzzz__PlayerIdUpdatedEvent_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent::*)(::System::Object*, ::System::IntPtr)>(&::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9d05a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent::*)()>(&::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d05b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*>(),
                    {::i2c::class_of<::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent::*)(::System::AsyncCallback*, ::System::Object*)>(&::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9d05b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*>(),
                    {::i2c::class_of<::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent::*)(::System::IAsyncResult*)>(&::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d05b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*>(),
                    {::i2c::class_of<::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::Cosmetics::PlayerIdUpdatedEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Liv::Lck::Cosmetics::PlayerIdUpdatedEvent::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Liv::Lck::Cosmetics::PlayerIdUpdatedEvent::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Liv::Lck::Cosmetics::PlayerIdUpdatedEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent* Liv::Lck::Cosmetics::PlayerIdUpdatedEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent::PlayerIdUpdatedEvent()   {
}
