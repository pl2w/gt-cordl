#pragma once
// IWYU pragma private; include "Valve/OpenXR/Utils/InstanceCreated.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Valve/OpenXR/Utils/zzzz__InstanceCreated_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Valve::OpenXR::Utils::InstanceCreated._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::InstanceCreated::*)(::System::Object*, ::System::IntPtr)>(&::Valve::OpenXR::Utils::InstanceCreated::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb9424e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::InstanceCreated*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::InstanceCreated.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::InstanceCreated::*)(uint64_t)>(&::Valve::OpenXR::Utils::InstanceCreated::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb942580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::InstanceCreated*>(),
                    {::i2c::class_of<::Valve::OpenXR::Utils::InstanceCreated*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::InstanceCreated.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Valve::OpenXR::Utils::InstanceCreated::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::Valve::OpenXR::Utils::InstanceCreated::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb942594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::InstanceCreated*>(),
                    {::i2c::class_of<::Valve::OpenXR::Utils::InstanceCreated*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::InstanceCreated.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::InstanceCreated::*)(::System::IAsyncResult*)>(&::Valve::OpenXR::Utils::InstanceCreated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb9425f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::InstanceCreated*>(),
                    {::i2c::class_of<::Valve::OpenXR::Utils::InstanceCreated*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Valve::OpenXR::Utils::InstanceCreated::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::InstanceCreated*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Valve::OpenXR::Utils::InstanceCreated::Invoke(uint64_t  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Valve::OpenXR::Utils::InstanceCreated*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline ::System::IAsyncResult* Valve::OpenXR::Utils::InstanceCreated::BeginInvoke(uint64_t  instance, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Valve::OpenXR::Utils::InstanceCreated*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, instance, callback, object);
}
inline void Valve::OpenXR::Utils::InstanceCreated::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Valve::OpenXR::Utils::InstanceCreated*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Valve::OpenXR::Utils::InstanceCreated* Valve::OpenXR::Utils::InstanceCreated::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Valve::OpenXR::Utils::InstanceCreated*>(object, method));
}
// Ctor Parameters []
constexpr ::Valve::OpenXR::Utils::InstanceCreated::InstanceCreated()   {
}
