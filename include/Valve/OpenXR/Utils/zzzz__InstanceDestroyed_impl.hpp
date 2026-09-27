#pragma once
// IWYU pragma private; include "Valve/OpenXR/Utils/InstanceDestroyed.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Valve/OpenXR/Utils/zzzz__InstanceDestroyed_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Valve::OpenXR::Utils::InstanceDestroyed._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::InstanceDestroyed::*)(::System::Object*, ::System::IntPtr)>(&::Valve::OpenXR::Utils::InstanceDestroyed::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb9425fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::InstanceDestroyed*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::InstanceDestroyed.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::InstanceDestroyed::*)(uint64_t)>(&::Valve::OpenXR::Utils::InstanceDestroyed::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb94269c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::InstanceDestroyed*>(),
                    {::i2c::class_of<::Valve::OpenXR::Utils::InstanceDestroyed*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::InstanceDestroyed.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Valve::OpenXR::Utils::InstanceDestroyed::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::Valve::OpenXR::Utils::InstanceDestroyed::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb9426b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::InstanceDestroyed*>(),
                    {::i2c::class_of<::Valve::OpenXR::Utils::InstanceDestroyed*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::InstanceDestroyed.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::InstanceDestroyed::*)(::System::IAsyncResult*)>(&::Valve::OpenXR::Utils::InstanceDestroyed::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb94270c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::InstanceDestroyed*>(),
                    {::i2c::class_of<::Valve::OpenXR::Utils::InstanceDestroyed*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Valve::OpenXR::Utils::InstanceDestroyed::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::InstanceDestroyed*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Valve::OpenXR::Utils::InstanceDestroyed::Invoke(uint64_t  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Valve::OpenXR::Utils::InstanceDestroyed*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline ::System::IAsyncResult* Valve::OpenXR::Utils::InstanceDestroyed::BeginInvoke(uint64_t  instance, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Valve::OpenXR::Utils::InstanceDestroyed*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, instance, callback, object);
}
inline void Valve::OpenXR::Utils::InstanceDestroyed::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Valve::OpenXR::Utils::InstanceDestroyed*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Valve::OpenXR::Utils::InstanceDestroyed* Valve::OpenXR::Utils::InstanceDestroyed::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Valve::OpenXR::Utils::InstanceDestroyed*>(object, method));
}
// Ctor Parameters []
constexpr ::Valve::OpenXR::Utils::InstanceDestroyed::InstanceDestroyed()   {
}
