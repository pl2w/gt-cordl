#pragma once
// IWYU pragma private; include "Fusion/TimeProviderCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Fusion/zzzz__TimeProviderCallback_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::TimeProviderCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TimeProviderCallback::*)(::System::Object*, ::System::IntPtr)>(&::Fusion::TimeProviderCallback::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x600afac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeProviderCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeProviderCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TimeProviderCallback::*)()>(&::Fusion::TimeProviderCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x600b048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::TimeProviderCallback*>(),
                    {::i2c::class_of<::Fusion::TimeProviderCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeProviderCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Fusion::TimeProviderCallback::*)(::System::AsyncCallback*, ::System::Object*)>(&::Fusion::TimeProviderCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x600b05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::TimeProviderCallback*>(),
                    {::i2c::class_of<::Fusion::TimeProviderCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeProviderCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TimeProviderCallback::*)(::System::IAsyncResult*)>(&::Fusion::TimeProviderCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x600b078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::TimeProviderCallback*>(),
                    {::i2c::class_of<::Fusion::TimeProviderCallback*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Fusion::TimeProviderCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeProviderCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Fusion::TimeProviderCallback::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::TimeProviderCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Fusion::TimeProviderCallback::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::TimeProviderCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Fusion::TimeProviderCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::TimeProviderCallback*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Fusion::TimeProviderCallback* Fusion::TimeProviderCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::TimeProviderCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Fusion::TimeProviderCallback::TimeProviderCallback()   {
}
