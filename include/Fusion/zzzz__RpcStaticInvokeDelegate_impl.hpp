#pragma once
// IWYU pragma private; include "Fusion/RpcStaticInvokeDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Fusion/zzzz__RpcStaticInvokeDelegate_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::RpcStaticInvokeDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RpcStaticInvokeDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Fusion::RpcStaticInvokeDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fd1640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcStaticInvokeDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RpcStaticInvokeDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RpcStaticInvokeDelegate::*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessage*)>(&::Fusion::RpcStaticInvokeDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fd16f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::RpcStaticInvokeDelegate*>(),
                    {::i2c::class_of<::Fusion::RpcStaticInvokeDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RpcStaticInvokeDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Fusion::RpcStaticInvokeDelegate::*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessage*, ::System::AsyncCallback*, ::System::Object*)>(&::Fusion::RpcStaticInvokeDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fd1708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::RpcStaticInvokeDelegate*>(),
                    {::i2c::class_of<::Fusion::RpcStaticInvokeDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RpcStaticInvokeDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RpcStaticInvokeDelegate::*)(::System::IAsyncResult*)>(&::Fusion::RpcStaticInvokeDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fd1730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::RpcStaticInvokeDelegate*>(),
                    {::i2c::class_of<::Fusion::RpcStaticInvokeDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Fusion::RpcStaticInvokeDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcStaticInvokeDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Fusion::RpcStaticInvokeDelegate::Invoke(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::RpcStaticInvokeDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, message);
}
inline ::System::IAsyncResult* Fusion::RpcStaticInvokeDelegate::BeginInvoke(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::RpcStaticInvokeDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, runner, message, callback, object);
}
inline void Fusion::RpcStaticInvokeDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::RpcStaticInvokeDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Fusion::RpcStaticInvokeDelegate* Fusion::RpcStaticInvokeDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::RpcStaticInvokeDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Fusion::RpcStaticInvokeDelegate::RpcStaticInvokeDelegate()   {
}
