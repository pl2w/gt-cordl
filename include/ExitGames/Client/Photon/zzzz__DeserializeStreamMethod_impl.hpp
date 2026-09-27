#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/DeserializeStreamMethod.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__DeserializeStreamMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::DeserializeStreamMethod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::DeserializeStreamMethod::*)(::System::Object*, ::System::IntPtr)>(&::ExitGames::Client::Photon::DeserializeStreamMethod::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa6d0a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::DeserializeStreamMethod*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::DeserializeStreamMethod.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ExitGames::Client::Photon::DeserializeStreamMethod::*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t)>(&::ExitGames::Client::Photon::DeserializeStreamMethod::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa6d0b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::DeserializeStreamMethod*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::DeserializeStreamMethod*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::DeserializeStreamMethod.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::ExitGames::Client::Photon::DeserializeStreamMethod::*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t, ::System::AsyncCallback*, ::System::Object*)>(&::ExitGames::Client::Photon::DeserializeStreamMethod::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa6d0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::DeserializeStreamMethod*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::DeserializeStreamMethod*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::DeserializeStreamMethod.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ExitGames::Client::Photon::DeserializeStreamMethod::*)(::System::IAsyncResult*)>(&::ExitGames::Client::Photon::DeserializeStreamMethod::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa6d0b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::DeserializeStreamMethod*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::DeserializeStreamMethod*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void ExitGames::Client::Photon::DeserializeStreamMethod::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::DeserializeStreamMethod*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Object* ExitGames::Client::Photon::DeserializeStreamMethod::Invoke(::ExitGames::Client::Photon::StreamBuffer*  inStream, int16_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::DeserializeStreamMethod*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, inStream, length);
}
inline ::System::IAsyncResult* ExitGames::Client::Photon::DeserializeStreamMethod::BeginInvoke(::ExitGames::Client::Photon::StreamBuffer*  inStream, int16_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::DeserializeStreamMethod*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, inStream, length, callback, object);
}
inline ::System::Object* ExitGames::Client::Photon::DeserializeStreamMethod::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::DeserializeStreamMethod*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, result);
}
inline ::ExitGames::Client::Photon::DeserializeStreamMethod* ExitGames::Client::Photon::DeserializeStreamMethod::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::DeserializeStreamMethod*>(object, method));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::DeserializeStreamMethod::DeserializeStreamMethod()   {
}
