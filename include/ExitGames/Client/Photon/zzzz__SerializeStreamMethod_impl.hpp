#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/SerializeStreamMethod.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializeStreamMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::SerializeStreamMethod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SerializeStreamMethod::*)(::System::Object*, ::System::IntPtr)>(&::ExitGames::Client::Photon::SerializeStreamMethod::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa6d07b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SerializeStreamMethod*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SerializeStreamMethod.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::ExitGames::Client::Photon::SerializeStreamMethod::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*)>(&::ExitGames::Client::Photon::SerializeStreamMethod::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa6d08bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SerializeStreamMethod*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SerializeStreamMethod*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SerializeStreamMethod.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::ExitGames::Client::Photon::SerializeStreamMethod::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*)>(&::ExitGames::Client::Photon::SerializeStreamMethod::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa6d08d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SerializeStreamMethod*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SerializeStreamMethod*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SerializeStreamMethod.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::ExitGames::Client::Photon::SerializeStreamMethod::*)(::System::IAsyncResult*)>(&::ExitGames::Client::Photon::SerializeStreamMethod::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa6d08f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SerializeStreamMethod*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SerializeStreamMethod*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void ExitGames::Client::Photon::SerializeStreamMethod::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SerializeStreamMethod*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int16_t ExitGames::Client::Photon::SerializeStreamMethod::Invoke(::ExitGames::Client::Photon::StreamBuffer*  outStream, ::System::Object*  customObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SerializeStreamMethod*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method, outStream, customObject);
}
inline ::System::IAsyncResult* ExitGames::Client::Photon::SerializeStreamMethod::BeginInvoke(::ExitGames::Client::Photon::StreamBuffer*  outStream, ::System::Object*  customObject, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SerializeStreamMethod*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, outStream, customObject, callback, object);
}
inline int16_t ExitGames::Client::Photon::SerializeStreamMethod::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SerializeStreamMethod*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method, result);
}
inline ::ExitGames::Client::Photon::SerializeStreamMethod* ExitGames::Client::Photon::SerializeStreamMethod::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::SerializeStreamMethod*>(object, method));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::SerializeStreamMethod::SerializeStreamMethod()   {
}
