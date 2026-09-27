#pragma once
// IWYU pragma private; include "Valve/OpenXR/Utils/SessionDestroyed.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Valve/OpenXR/Utils/zzzz__SessionDestroyed_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Valve::OpenXR::Utils::SessionDestroyed._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::SessionDestroyed::*)(::System::Object*, ::System::IntPtr)>(&::Valve::OpenXR::Utils::SessionDestroyed::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb942834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::SessionDestroyed*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::SessionDestroyed.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::SessionDestroyed::*)(uint64_t)>(&::Valve::OpenXR::Utils::SessionDestroyed::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb9428d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::SessionDestroyed*>(),
                    {::i2c::class_of<::Valve::OpenXR::Utils::SessionDestroyed*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::SessionDestroyed.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Valve::OpenXR::Utils::SessionDestroyed::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::Valve::OpenXR::Utils::SessionDestroyed::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb9428e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::SessionDestroyed*>(),
                    {::i2c::class_of<::Valve::OpenXR::Utils::SessionDestroyed*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::SessionDestroyed.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::SessionDestroyed::*)(::System::IAsyncResult*)>(&::Valve::OpenXR::Utils::SessionDestroyed::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb942944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::SessionDestroyed*>(),
                    {::i2c::class_of<::Valve::OpenXR::Utils::SessionDestroyed*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Valve::OpenXR::Utils::SessionDestroyed::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::SessionDestroyed*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Valve::OpenXR::Utils::SessionDestroyed::Invoke(uint64_t  session)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Valve::OpenXR::Utils::SessionDestroyed*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, session);
}
inline ::System::IAsyncResult* Valve::OpenXR::Utils::SessionDestroyed::BeginInvoke(uint64_t  session, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Valve::OpenXR::Utils::SessionDestroyed*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, session, callback, object);
}
inline void Valve::OpenXR::Utils::SessionDestroyed::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Valve::OpenXR::Utils::SessionDestroyed*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Valve::OpenXR::Utils::SessionDestroyed* Valve::OpenXR::Utils::SessionDestroyed::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Valve::OpenXR::Utils::SessionDestroyed*>(object, method));
}
// Ctor Parameters []
constexpr ::Valve::OpenXR::Utils::SessionDestroyed::SessionDestroyed()   {
}
