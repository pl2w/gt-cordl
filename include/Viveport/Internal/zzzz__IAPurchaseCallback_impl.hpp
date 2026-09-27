#pragma once
// IWYU pragma private; include "Viveport/Internal/IAPurchaseCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Viveport/Internal/zzzz__IAPurchaseCallback_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Viveport::Internal::IAPurchaseCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::IAPurchaseCallback::*)(::System::Object*, ::System::IntPtr)>(&::Viveport::Internal::IAPurchaseCallback::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b5037c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchaseCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::IAPurchaseCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::IAPurchaseCallback::*)(int32_t, ::StringW)>(&::Viveport::Internal::IAPurchaseCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b59488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::Internal::IAPurchaseCallback*>(),
                    {::i2c::class_of<::Viveport::Internal::IAPurchaseCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::IAPurchaseCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Viveport::Internal::IAPurchaseCallback::*)(int32_t, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::Viveport::Internal::IAPurchaseCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b5949c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::Internal::IAPurchaseCallback*>(),
                    {::i2c::class_of<::Viveport::Internal::IAPurchaseCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::IAPurchaseCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::IAPurchaseCallback::*)(::System::IAsyncResult*)>(&::Viveport::Internal::IAPurchaseCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b5950c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::Internal::IAPurchaseCallback*>(),
                    {::i2c::class_of<::Viveport::Internal::IAPurchaseCallback*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Viveport::Internal::IAPurchaseCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchaseCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Viveport::Internal::IAPurchaseCallback::Invoke(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::Internal::IAPurchaseCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline ::System::IAsyncResult* Viveport::Internal::IAPurchaseCallback::BeginInvoke(int32_t  code, ::StringW  message, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::Internal::IAPurchaseCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, code, message, callback, object);
}
inline void Viveport::Internal::IAPurchaseCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::Internal::IAPurchaseCallback*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::Internal::IAPurchaseCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Internal::IAPurchaseCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Viveport::Internal::IAPurchaseCallback::IAPurchaseCallback()   {
}
