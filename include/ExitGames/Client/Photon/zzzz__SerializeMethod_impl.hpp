#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/SerializeMethod.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializeMethod_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::SerializeMethod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SerializeMethod::*)(::System::Object*, ::System::IntPtr)>(&::ExitGames::Client::Photon::SerializeMethod::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa6d0668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SerializeMethod*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SerializeMethod.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ExitGames::Client::Photon::SerializeMethod::*)(::System::Object*)>(&::ExitGames::Client::Photon::SerializeMethod::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa6d0770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SerializeMethod*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SerializeMethod*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SerializeMethod.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::ExitGames::Client::Photon::SerializeMethod::*)(::System::Object*, ::System::AsyncCallback*, ::System::Object*)>(&::ExitGames::Client::Photon::SerializeMethod::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa6d0784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SerializeMethod*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SerializeMethod*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SerializeMethod.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ExitGames::Client::Photon::SerializeMethod::*)(::System::IAsyncResult*)>(&::ExitGames::Client::Photon::SerializeMethod::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa6d07a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SerializeMethod*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SerializeMethod*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void ExitGames::Client::Photon::SerializeMethod::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SerializeMethod*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::SerializeMethod::Invoke(::System::Object*  customObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SerializeMethod*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, customObject);
}
inline ::System::IAsyncResult* ExitGames::Client::Photon::SerializeMethod::BeginInvoke(::System::Object*  customObject, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SerializeMethod*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, customObject, callback, object);
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::SerializeMethod::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SerializeMethod*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, result);
}
inline ::ExitGames::Client::Photon::SerializeMethod* ExitGames::Client::Photon::SerializeMethod::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::SerializeMethod*>(object, method));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::SerializeMethod::SerializeMethod()   {
}
