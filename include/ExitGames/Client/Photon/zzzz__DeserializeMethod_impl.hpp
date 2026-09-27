#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/DeserializeMethod.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__DeserializeMethod_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::DeserializeMethod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::DeserializeMethod::*)(::System::Object*, ::System::IntPtr)>(&::ExitGames::Client::Photon::DeserializeMethod::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa6d0920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::DeserializeMethod*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::DeserializeMethod.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ExitGames::Client::Photon::DeserializeMethod::*)(::ArrayW<uint8_t>)>(&::ExitGames::Client::Photon::DeserializeMethod::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa6d09d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::DeserializeMethod*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::DeserializeMethod*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::DeserializeMethod.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::ExitGames::Client::Photon::DeserializeMethod::*)(::ArrayW<uint8_t>, ::System::AsyncCallback*, ::System::Object*)>(&::ExitGames::Client::Photon::DeserializeMethod::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa6d09e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::DeserializeMethod*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::DeserializeMethod*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::DeserializeMethod.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ExitGames::Client::Photon::DeserializeMethod::*)(::System::IAsyncResult*)>(&::ExitGames::Client::Photon::DeserializeMethod::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa6d0a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::DeserializeMethod*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::DeserializeMethod*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void ExitGames::Client::Photon::DeserializeMethod::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::DeserializeMethod*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Object* ExitGames::Client::Photon::DeserializeMethod::Invoke(::ArrayW<uint8_t>  serializedCustomObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::DeserializeMethod*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, serializedCustomObject);
}
inline ::System::IAsyncResult* ExitGames::Client::Photon::DeserializeMethod::BeginInvoke(::ArrayW<uint8_t>  serializedCustomObject, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::DeserializeMethod*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, serializedCustomObject, callback, object);
}
inline ::System::Object* ExitGames::Client::Photon::DeserializeMethod::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::DeserializeMethod*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, result);
}
inline ::ExitGames::Client::Photon::DeserializeMethod* ExitGames::Client::Photon::DeserializeMethod::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::DeserializeMethod*>(object, method));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::DeserializeMethod::DeserializeMethod()   {
}
